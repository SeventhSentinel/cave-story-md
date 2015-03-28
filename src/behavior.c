#include "behavior.h"

#include <genesis.h>
#include "player.h"
#include "tables.h"
#include "audio.h"
#include "stage.h"
#include "sprite.h"
#include "tsc.h"

void ai_activate_stub(Entity *e) {

}
void ai_update_stub(Entity *e) {

}
bool ai_setstate_stub(Entity *e, u16 state) {
	e->state = state;
	if(state == STATE_DEFEATED) {
		return true;
	}
	return false;
}

void ai_update_energy(Entity *e) {
	if(e->grounded) {
		e->y_speed = pixel_to_sub(-2);
		e->grounded = false;
		sound_play(SOUND_EXPBOUNCE, 0);
	}
	e->y_speed += gravity;
	e->x_next = e->x + e->x_speed;
	e->y_next = e->y + e->y_speed;
	s16 xsp = e->x_speed;
	entity_update_collision(e);
	if(e->x_speed == 0) {
		e->direction = !e->direction;
		e->x_speed = -xsp;
	}
	e->x = e->x_next;
	e->y = e->y_next;
}

void ai_activate_door(Entity *e) {
	if(e->direction) {
		sprite_delete(e->sprite);
		e->sprite = SPRITE_NONE;
	}
}

void ai_update_toroko(Entity *e) {
	switch(e->state) {
	case 0: // Stand still
		sprite_set_animation(e->sprite, 0);
		break;
	case 3: // Run back and forth
	case 4:
		if(e->attack == 0) {
			sprite_set_animation(e->sprite, 1);
		} else {
			sprite_set_animation(e->sprite, 2);
			Bullet *b = bullet_colliding(e);
			if(b != NULL) {
				sound_play(e->hurtSound, 10); // Squeak
				e->attack = 0; // Don't hurt the player anymore
				e->eflags |= NPC_INTERACTIVE; // Enable interaction
				e->state = 10; // Change animation to falling on ground
				e->y_speed = pixel_to_sub(-1);
				e->x_speed /= 2;
				e->grounded = false;
				sprite_set_animation(e->sprite, 3);
				b->ttl = 0;
				sprite_delete(b->sprite);
			}
		}
		if(e->x_speed == 0) {
			e->direction = !e->direction;
			e->x_speed = pixel_to_sub(-2 + 4*e->direction);
			sprite_set_attr(e->sprite, TILE_ATTR(PAL3, false, false, e->direction));
		}
		break;
	case 6: // Jump then run
		break;
	case 8: // Jump in place
		break;
	case 10: // Falling down
		if(e->grounded) {
			e->x_speed = 0;
			e->state = 11;
			sprite_set_animation(e->sprite, 4);
		}
		break;
	case 11: // After falling on ground

		break;
	default:
		break;
	}
	if(!e->grounded) e->y_speed += gravity;
	e->x_next = e->x + e->x_speed;
	e->y_next = e->y + e->y_speed;
	entity_update_collision(e);
	e->x = e->x_next;
	e->y = e->y_next;
}

// 12 - Balrog (Cutscene)
void ai_update_balrog_scene(Entity *e) {
	if(e->state == 30) {
		if(e->state_time > 0) {
			e->state_time--;
		} else {
			e->set_state(e, 0);
		}
	}
	e->x += e->x_speed;
	e->y += e->y_speed;
}

bool ai_setstate_balrog_scene(Entity *e, u16 state) {
	e->state = state;
	switch(state) {
	case 0: // Standing around
		sprite_set_animation(e->sprite, 0);
		break;
	case 10: // Going up!
	case 11:
		sprite_set_animation(e->sprite, 3);
		e->y_speed = pixel_to_sub(-2);
		break;
	case 20: // Smoking, going up!
	case 21:
		sprite_set_animation(e->sprite, 5);
		e->y_speed = pixel_to_sub(-2);
		break;
	case 30: // Smile
		sprite_set_animation(e->sprite, 6);
		e->state_time = 60;
		break;
	case 70: // Vanish
	case 71:
		return true;
	}
	return false;
}

// 68 - Boss: Balrog (Mimiga Village)
void ai_update_balrog_boss1(Entity *e) {

}

bool ai_setstate_balrog_boss1(Entity *e, u16 state) {
	e->state = state;
	if(state == STATE_DEFEATED) {
		e->state += 1;
		tsc_call_event(e->event); // Boss defeated event.. maybe
	}
	return false;
}

void ai_activate_spike(Entity *e) {
	u16 x = sub_to_block(e->x), y = sub_to_block(e->y);
	if(tileset_info[stageTileset].PXA[stageBlocks[(y+1) * stageWidth + x]] == 0x41) return;
	if(tileset_info[stageTileset].PXA[stageBlocks[(y-1) * stageWidth + x]] == 0x41) {
		sprite_set_attr(e->sprite, TILE_ATTR(PAL1, false, true, false));
		return;
	}
	if(tileset_info[stageTileset].PXA[stageBlocks[y * stageWidth + x-1]] == 0x41) {
		sprite_set_frame(e->sprite, 1);
		return;
	}
	if(tileset_info[stageTileset].PXA[stageBlocks[y * stageWidth + x+1]] == 0x41) {
		sprite_set_frame(e->sprite, 1);
		sprite_set_attr(e->sprite, TILE_ATTR(PAL1, false, false, true));
		return;
	}
}