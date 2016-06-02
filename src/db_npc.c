#include "tables.h"
#include "resources.h"

const npc_info_def npc_info[NPC_COUNT] = {
	{ NULL, 		PAL0, "Nothing" },
	{ &SPR_Energy, 	PAL1, "Weapon Energy" },
	{ &SPR_Behem, 	PAL1, "Behemoth" },
	{ NULL, 		PAL0, "Nothing" },
	{ &SPR_Smoke, 	PAL1, "Smoke" },
	{ &SPR_CritHG, 	PAL3, "Green Hopping Critter" },
	{ &SPR_BtlHG, 	PAL3, "Green Beetle" },
	{ &SPR_Basil, 	PAL1, "Basil" },
	{ &SPR_BtlHG, 	PAL3, "Green Beetle (Follow)" },
	{ &SPR_Balrog, 	PAL1, "Balrog (Drops in)" },
	{ &SPR_Balrog, 	PAL1, "Balrog (Shooting)" },
	{ NULL, 		PAL0, "Balrog Energy Shot" },
	{ &SPR_Balrog, 	PAL1, "Balrog (Scene)" },
	{ &SPR_ForceField, PAL1, "Force Field" },
	{ &SPR_Key, 	PAL1, "Santa's Key" },
	{ &SPR_Chest, 	PAL1, "Treasure Chest" },
	{ &SPR_Save, 	PAL1, "Save Point" }, // 0x10
	{ &SPR_Refill, 	PAL1, "Health & Ammo Refill" },
	{ &SPR_Door, 	PAL1, "Door" },
	{ &SPR_Balrog, 	PAL1, "Balrog (Mimiga Village)" },
	{ &SPR_Computer, PAL1, "Computer" },
	{ &SPR_Chest2, 	PAL1, "Opened Chest" },
	{ &SPR_Tele, 	PAL1, "Teleporter" },
	{ NULL, 		PAL0, "Teleporter Lights" },
	{ &SPR_CritBig, PAL0, "Power Critter" },
	{ &SPR_Platform, PAL1, "Lift Platform" },
	{ &SPR_Bat, 	PAL0, "Bat (Circling)" },
	{ &SPR_Trap, 	PAL1, "Death Trap" },
	{ &SPR_CritHG, 	PAL3, "Flying Critter" },
	{ &SPR_Cthu, 	PAL3, "Cthulhu" },
	{ &SPR_Gunsmith, PAL3, "Hermit Gunsmith" },
	{ &SPR_Bat, 	PAL0, "Bat (Hanging)" },
	{ &SPR_LifeUp, 	PAL1, "Life Capsule" }, // 0x20
	{ NULL, 		PAL0, "Balrog Energy Bounce" },
	{ &SPR_Bed, 	PAL1, "Bed" },
	{ &SPR_Mannan, 	PAL3, "Mannan" },
	{ &SPR_Balrog, 	PAL1, "Balrog (Second Fight)" },
	{ &SPR_Sign, 	PAL1, "Sign Post" },
	{ &SPR_Fire, 	PAL1, "Fireplace Fire" },
	{ &SPR_SaveSign, PAL1, "Save Sign" },
	{ &SPR_Santa, 	PAL3, "Santa" },
	{ NULL, 		PAL0, "Busted Doorway" },
	{ &SPR_Sue, 	PAL3, "Sue" },
	{ &SPR_Board, 	PAL1, "Blackboard" },
	{ NULL, 		PAL0, "Polish" },
	{ NULL, 		PAL0, "Baby" },
	{ NULL, 		PAL0, "Horiz/Vert Trigger" },
	{ NULL, 		PAL0, "Green Sandcroc" },
	{ NULL, 		PAL0, "Omega Projectile" }, // 0x30
	{ NULL, 		PAL0, "Skullhead" },
	{ NULL, 		PAL0, "Skeleton" },
	{ NULL, 		PAL0, "Crow & Skullhead" },
	{ NULL, 		PAL3, "Blue Robot (Sitting)" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Skullstep" },
	{ &SPR_Kazuma, 	PAL3, "Kazuma" },
	{ NULL, 		PAL0, "Brown Beetle" },
	{ NULL, 		PAL0, "Crow" },
	{ &SPR_Basu, 	PAL3, "Basu" },
	{ &SPR_DoorE, 	PAL1, "Door Enemy" },
	{ &SPR_Toroko, 	PAL3, "Toroko" },
	{ &SPR_King, 	PAL3, "King" },
	{ &SPR_KazuCom, PAL3, "Kazuma (Computer)" },
	{ &SPR_Toroko, 	PAL3, "Toroko (Attacking)" },
	{ &SPR_CritHB, 	PAL2, "Blue Hopping Critter" }, // 0x40
	{ &SPR_Bat, 	PAL0, "Bat" },
	{ NULL, 		PAL0, "Misery's Bubble" },
	{ &SPR_Misery, 	PAL0, "Misery (Floating)" },
	{ &SPR_Balrog, 	PAL1, "Balrog (First Fight)" },
	{ &SPR_Pignon, 	PAL1, "Pignon" },
	{ &SPR_Sparkle, PAL1, "Sparkling Item" },
	{ &SPR_Fish, 	PAL0, "Chinfish" },
	{ NULL, 		PAL0, "Sprinkler" },
	{ NULL, 		PAL0, "Water Drop" },
	{ &SPR_Jack, 	PAL3, "Jack" },
	{ &SPR_Kanpachi, PAL3, "Kanpachi (Fishing)" },
	{ &SPR_Flower, 	PAL3, "Flowers" },
	{ &SPR_Sanda, 	PAL3, "Sandame's Pavilion" },
	{ NULL, 		PAL0 , "Pot" },
	{ &SPR_Mahin, 	PAL3, "Mahin" },
	{ &SPR_Keeper, 	PAL1, "Gravekeeper" }, // 0x50
	{ &SPR_PignonB, PAL1, "Big Pignon" },
	{ &SPR_Misery, 	PAL0, "Misery (Standing)" },
	{ &SPR_Igor, 	PAL3, "Igor (Scene)" },
	{ NULL, 		PAL0, "Basu Projectile" },
	{ &SPR_Term, 	PAL1, "Terminal" },
	{ NULL, 		PAL0, "Missile" },
	{ &SPR_Heart, 	PAL1, "Heart" },
	{ &SPR_Igor, 	PAL3, "Igor (Boss)" },
	{ NULL, 		PAL3, "Igor (Defeated)" },
	{ NULL, 		PAL0, "???" }, // 90 - Background (what?)
	{ NULL, 		PAL0, "Cage" },
	{ NULL, 		PAL0, "Sue (Computer)" },
	{ NULL, 		PAL0, "Chaco" },
	{ &SPR_Kulala, 	PAL0, "Kulala" },
	{ &SPR_Jelly, 	PAL0, "Jelly" },
	{ &SPR_Fan, 	PAL1, "Fan (Left)" }, // 0x60
	{ &SPR_Fan, 	PAL1, "Fan (Up)" },
	{ &SPR_Fan, 	PAL1, "Fan (Right)" },
	{ &SPR_Fan, 	PAL1, "Fan (Down)" },
	{ NULL, 		PAL0, "Grate" },
	{ NULL, 		PAL0, "Power Controls (Screen)" },
	{ &SPR_Wave, 	PAL1, "Power Controls (Flow)" },
	{ NULL, 		PAL0, "Mannan Projectile" },
	{ NULL, 		PAL0, "Frog" },
	{ NULL, 		PAL0, "Hey! (Low)" },
	{ NULL, 		PAL0, "Hey! (High)" },
	{ &SPR_Malco, 	PAL1, "Malco" },
	{ NULL, 		PAL0, "Balfrog Projectile" },
	{ &SPR_Malco, 	PAL1, "Malco (Damaged)" },
	{ NULL, 		PAL0, "Puchi" },
	{ &SPR_Quote, 	PAL0, "Quote Teleporting Out" },
	{ &SPR_Quote, 	PAL0, "Quote Teleporting In" }, // 0x70
	{ NULL, 		PAL0, "Prof. Booster" },
	{ NULL, 		PAL0, "Press" },
	{ NULL, 		PAL0, "Ravil" },
	{ NULL, 		PAL0, "Red Flower Petals" },
	{ NULL, 		PAL0, "Curly" },
	{ NULL, 		PAL0, "Curly (Boss)" },
	{ NULL, 		PAL0, "Tables & Chair" },
	{ NULL, 		PAL0, "Colon 1" },
	{ NULL, 		PAL0, "Colon 2" },
	{ NULL, 		PAL0, "Colon (Enemy)" },
	{ NULL, 		PAL0, "Curly Projectile" },
	{ NULL, 		PAL0, "Sunstone" },
	{ NULL, 		PAL0, "Hidden Heart/Missile" },
	{ NULL, 		PAL0, "Puppy (Runs Away)" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "???" }, // 0x80
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Puppy (Tail Wag)" },
	{ NULL, 		PAL0, "Puppy (Sleeping)" },
	{ NULL, 		PAL0, "Puppy (Bark)" },
	{ NULL, 		PAL0, "Jenka" },
	{ NULL, 		PAL0, "Armadillo" },
	{ NULL, 		PAL0, "Skeleton" },
	{ NULL, 		PAL0, "Puppy (Carried)" },
	{ NULL, 		PAL0, "Large Doorway (Frame)" },
	{ NULL, 		PAL0, "Large Doorway (Doors)" },
	{ NULL, 		PAL0, "Doctor (Crowned)" },
	{ NULL, 		PAL0, "Frenzied Toroko" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Flowercub" },
	{ NULL, 		PAL0, "Jenka (Collapsed)" },
	{ NULL, 		PAL0, "Toroko (Teleport In)" }, // 0x90
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Lightning" },
	{ NULL, 		PAL0, "Purple Critter" },
	{ NULL, 		PAL0, "Critter Projectile" },
	{ NULL, 		PAL0, "Moving Block (Horiz)" },
	{ NULL, 		PAL0, "Quote" },
	{ NULL, 		PAL0, "Blue Robot" },
	{ NULL, 		PAL0, "Shutter (Stuck)" },
	{ NULL, 		PAL0, "Gaudi" },
	{ NULL, 		PAL0, "Gaudi (Defeated)" },
	{ NULL, 		PAL0, "Gaudi (Flying)" },
	{ NULL, 		PAL0, "Gaudi Projectile)" },
	{ NULL, 		PAL0, "Moving Block (Vert)" },
	{ NULL, 		PAL0, "Monster X Projectile" },
	{ NULL, 		PAL0, "Monster X (Defeated)" },
	{ NULL, 		PAL0, "Pooh Black" }, // 0xA0
	{ NULL, 		PAL0, "Pooh Black Projectile" },
	{ NULL, 		PAL0, "Pooh Black (Defeated)" },
	{ NULL, 		PAL0, "Dr. Gero" },
	{ NULL, 		PAL0, "Nurse Hasumi" },
	{ NULL, 		PAL0, "Curly (Collapsed)" },
	{ NULL, 		PAL0, "Chaba" },
	{ NULL, 		PAL0, "Prof. Booster (Fall)" },
	{ NULL, 		PAL0, "Boulder" },
	{ &SPR_Balrog, 	PAL1, "Balrog (Third Fight)" },
	{ NULL, 		PAL0, "Balrog Missile" },
	{ NULL, 		PAL0, "Fire Whirr" },
	{ NULL, 		PAL0, "Fire Whirr Projectile" },
	{ NULL, 		PAL0, "Gaudi Armor" },
	{ NULL, 		PAL0, "Gaudi Armor Projectile" },
	{ NULL, 		PAL0, "Gaudi Egg" },
	{ NULL, 		PAL0, "Buyobuyo Base" }, // 0xB0
	{ NULL, 		PAL0, "Buyobuyo" },
	{ NULL, 		PAL0, "Core Spinning Projectile" },
	{ NULL, 		PAL0, "Core Wisp Projectile" },
	{ NULL, 		PAL0, "Curly (AI)" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Shutter (Large)" },
	{ NULL, 		PAL0, "Shutter (Small)" },
	{ NULL, 		PAL0, "Lift Block" },
	{ NULL, 		PAL0, "Fuzz Core" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Homing Flame Projectile" },
	{ NULL, 		PAL0, "Surface Robot" },
	{ NULL, 		PAL0, "Water Level" },
	{ NULL, 		PAL0, "Scooter" }, // 0xC0
	{ NULL, 		PAL0, "Scooter (Pieces)" },
	{ NULL, 		PAL0, "Blue Robot (Pieces)" },
	{ NULL, 		PAL0, "Grate Mouth" },
	{ NULL, 		PAL0, "Motion Wall" },
	{ NULL, 		PAL0, "Porcupine Fish" },
	{ NULL, 		PAL0, "Ironhead Projectile" },
	{ NULL, 		PAL0, "Underwater Current" },
	{ NULL, 		PAL0, "Dragon Zombie" },
	{ NULL, 		PAL0, "Dragon Zombie (Dead)" },
	{ NULL, 		PAL0, "Dragon Zombie Projectile" },
	{ NULL, 		PAL0, "Blue Hopping Critter" },
	{ NULL, 		PAL0, "Falling Spike (Small)" },
	{ NULL, 		PAL0, "Falling Spike (Large)" },
	{ NULL, 		PAL0, "Counter Bomb" },
	{ NULL, 		PAL0, "Countdown Balloon" },
	{ NULL, 		PAL0, "Basu (2)" }, // 0xD0
	{ NULL, 		PAL0, "Basu Projectile (2)" },
	{ NULL, 		PAL0, "Green Beetle (Follow 2)" },
	{ &SPR_Spikes, 	PAL1, "Spikes" },
	{ NULL, 		PAL0, "Sky Dragon" },
	{ NULL, 		PAL0, "Night Spirit" },
	{ NULL, 		PAL0, "Night Spirit Projectile" },
	{ NULL, 		PAL0, "White Sandcroc" },
	{ NULL, 		PAL0, "Debug Cat" },
	{ NULL, 		PAL0, "Itoh" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Smoke/Current Generator" },
	{ NULL, 		PAL0, "Shovel Brigade" },
	{ NULL, 		PAL0, "Shovel Brigade (Walking)" },
	{ NULL, 		PAL0, "Prison Bars" },
	{ NULL, 		PAL0, "Momorin" },
	{ NULL, 		PAL0, "Chie" }, // 0xE0
	{ NULL, 		PAL0, "Megane" },
	{ NULL, 		PAL0, "Kanpachi" },
	{ NULL, 		PAL0, "Bucket" },
	{ NULL, 		PAL0, "Droll (Guard)" },
	{ NULL, 		PAL0, "Red Flower Sprouts" },
	{ NULL, 		PAL0, "Blooming Red Flowers" },
	{ NULL, 		PAL0, "Rocket" },
	{ NULL, 		PAL0, "Orangebell" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Picked Red Flowers" },
	{ NULL, 		PAL0, "Midorin" },
	{ NULL, 		PAL0, "Gunfish" },
	{ NULL, 		PAL0, "Gunfish Projectile" },
	{ NULL, 		PAL0, "Lethal Press" },
	{ NULL, 		PAL0, "Cage Bars" },
	{ NULL, 		PAL0, "Jailed Mimiga" }, // 0xF0
	{ NULL, 		PAL0, "Red Critter" },
	{ NULL, 		PAL0, "Red Bat" },
	{ NULL, 		PAL0, "Red Bat Generator" },
	{ NULL, 		PAL0, "Acid Drop" },
	{ NULL, 		PAL0, "Acid Drop Generator" },
	{ NULL, 		PAL0, "Press (Proximity)" },
	{ NULL, 		PAL0, "Misery (Boss)" },
	{ NULL, 		PAL0, "Misery (Vanish)" },
	{ NULL, 		PAL0, "Misery Energy Shot" },
	{ NULL, 		PAL0, "Misery Lightning Ball" },
	{ NULL, 		PAL0, "Misery Lightning" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Energy Capsule" },
	{ NULL, 		PAL0, "Helicopter" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Doctor (Before Fight)" }, // 0x100
	{ NULL, 		PAL0, "Red Crystal" },
	{ NULL, 		PAL0, "Sleeping Mimiga" },
	{ NULL, 		PAL0, "Curly (Carried)" },
	{ NULL, 		PAL0, "Shovel Brigade (Caged)" },
	{ NULL, 		PAL0, "Chie (Caged)" },
	{ NULL, 		PAL0, "Chaco (Caged)" },
	{ NULL, 		PAL0, "Doctor (Boss)" },
	{ NULL, 		PAL0, "Doctor Red Wave" },
	{ NULL, 		PAL0, "Doctor Red Ball (Fast)" },
	{ NULL, 		PAL0, "Doctor Red Ball (Slow)" },
	{ NULL, 		PAL0, "Muscle Doctor (Boss)" },
	{ NULL, 		PAL0, "Igor" },
	{ NULL, 		PAL0, "Red Energy Bat" },
	{ NULL, 		PAL0, "Red Energy" },
	{ NULL, 		PAL0, "Underwater Block" },
	{ NULL, 		PAL0, "Water Block Generator" }, // 0x110
	{ NULL, 		PAL0, "Droll Projectile" },
	{ NULL, 		PAL0, "Droll" },
	{ NULL, 		PAL0, "Puppy (With Item)" },
	{ NULL, 		PAL0, "Red Demon" },
	{ NULL, 		PAL0, "Red Demon Projectile" },
	{ NULL, 		PAL0, "Little Family" },
	{ NULL, 		PAL0, "Falling Block (Large)" },
	{ NULL, 		PAL0, "Sue (Teleport In)" },
	{ NULL, 		PAL0, "Doctor (Red Energy)" },
	{ NULL, 		PAL0, "Mini Undead Core" },
	{ NULL, 		PAL0, "Misery (Transformed)" },
	{ NULL, 		PAL0, "Sue (Transformed)" },
	{ NULL, 		PAL0, "Orange Spinning Shot" },
	{ NULL, 		PAL0, "Orange Dot" },
	{ NULL, 		PAL0, "Orange Smoke" },
	{ NULL, 		PAL0, "Glowing Rock Shot" }, // 0x120
	{ NULL, 		PAL0, "Orange Critter" },
	{ NULL, 		PAL0, "Orange Bat" },
	{ NULL, 		PAL0, "Mini Core (Before Fight)" },
	{ NULL, 		PAL0, "Quake" },
	{ NULL, 		PAL0, "Huge Energy Shot" },
	{ NULL, 		PAL0, "Falling Block Generator" },
	{ NULL, 		PAL0, "Cloud" },
	{ NULL, 		PAL0, "Cloud Generator" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Doctor (Uncrowned)" },
	{ NULL, 		PAL0, "Balrog/Misery (Bubble)" },
	{ NULL, 		PAL0, "Demon Crown" },
	{ NULL, 		PAL0, "Fish Missile (Orange)" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Gaudi (Sitting)" }, // 0x130
	{ NULL, 		PAL0, "Puppy (Small)" },
	{ NULL, 		PAL0, "Balrog (Nurse)" },
	{ NULL, 		PAL0, "Santa (Caged)" },
	{ NULL, 		PAL0, "Stumpy" },
	{ NULL, 		PAL0, "Bute" },
	{ NULL, 		PAL0, "Bute (Sword)" },
	{ NULL, 		PAL0, "Bute (Archer)" },
	{ NULL, 		PAL0, "Bute Projectile" },
	{ NULL, 		PAL0, "Ma Pignon" },
	{ NULL, 		PAL0, "Falling (?)" },
	{ NULL, 		PAL0, "Hopping Enemy (?)" },
	{ NULL, 		PAL0, "Bute (Defeated)" },
	{ NULL, 		PAL0, "Mesa" },
	{ NULL, 		PAL0, "Mesa (Defeated)" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Curly (Hell)" }, // 0x140
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Deleet" },
	{ NULL, 		PAL0, "Bute (Generated)" },
	{ NULL, 		PAL0, "Bute Generator" },
	{ NULL, 		PAL0, "Heavy Press Projectile" },
	{ NULL, 		PAL0, "Itoh/Sue (Ending)" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Transmogrifier" },
	{ NULL, 		PAL0, "Building Fan" },
	{ NULL, 		PAL0, "Rolling" },
	{ NULL, 		PAL0, "Ballos Bone Shot" },
	{ NULL, 		PAL0, "Ballos Shockwave" },
	{ NULL, 		PAL0, "Ballos Lightning" },
	{ NULL, 		PAL0, "Sweat" },
	{ NULL, 		PAL0, "Ika-chan" },
	{ NULL, 		PAL0, "Ika-chan Generator" }, // 0x150
	{ NULL, 		PAL0, "Numahachi" },
	{ NULL, 		PAL0, "Green Devil" },
	{ NULL, 		PAL0, "Green Devil Generator" },
	{ NULL, 		PAL0, "Ballos (Boss)" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Ballos Skull Shot" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Hoppy" },
	{ NULL, 		PAL0, "Ballos Spikes" },
	{ NULL, 		PAL0, "Statue" },
	{ NULL, 		PAL0, "Red Bute (Archer)" },
	{ NULL, 		PAL0, "Statue (Breakable)" },
	{ NULL, 		PAL0, "King (Sword)" }, // 0x160
	{ NULL, 		PAL0, "Red Bute (Sword)" },
	{ NULL, 		PAL0, "Kill Zone" },
	{ NULL, 		PAL0, "???" },
	{ NULL, 		PAL0, "Balrog (Rescue)" },
	{ NULL, 		PAL0, "Puppy (Ghost)" },
	{ NULL, 		PAL0, "Misery (Wind)" },
	{ NULL, 		PAL0, "Water Drop Generator" },
	{ NULL, 		PAL0, "Thank You" }, // 0x168 (360)
};
