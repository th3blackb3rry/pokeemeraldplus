# Feature Plan: Pokémon Availablilty

## 🧭 Goal
Adjust the availability of various Pokemon for the sake of improving a Pokemon Emerald playthrough and also making all Pokemon in the Hoenn Dex obtainable in a single game

---

## 🧩 Scope
This feature will focus on:
- Changing the **Wild Encounters** for various areas in the game
- Changing **Item Placement** that affects Pokemon availability
- Light **Script Editting** for events for previously unobtainable Pokemon


---

## ⚙️ Implementation Steps
1. Begin with a **small test batch** of Pokémon (e.g., early-game species like Zigzagoon, Lotad, Seedot).
2. Rebuild the ROM after each change and test in an emulator.
3. Document every change in this file as you go.
4. Commit each logical group of edits separately:
   - Wild Encounters
   - Item placements
   - Gifts encounters, etc.
5. Once stable and tested, merge branch into `master`.

---

## ✅ To-Do
- [X] Pre-Badge 1 Wild Encounter Changes
- [X] Pre-Badge 2 Wild Encounter Changes
- [X] Pre-Badge 3 Wild Encounter Changes
- [X] Pre-Badge 4 Wild Encounter Changes
- [X] Pre-Badge 6 Wild Encounter Changes
- [X] Pre-Badge 7 Wild Encounter Changes
- [X] Pre-Badge 8 Wild Encounter Changes
- [X] Pre-League Wild Encounter Changes
- [X] Postgame Wild Encounter Changes
- [X] Simpler Fishing (FRLG Style)
- [ ] Item Availabilty Changes
- [ ] Event Pokemon Changes
- [ ] In-game trade changes?

---

## 🧠 Notes
10/21/25 - Pre-Badge 1 Wilds
files: src/data/wild_encounters.json
- Route 101 - Land: Zigzagoon 45%, Wurmple 45%, Poochyena 10%
- Route 103 - Land: Zigzagoon 60%, Poochyena 20%, Wingull 20%; Fish: good rod levels maxs at 25
- Route 102 - Land: Zigzagoon 20%, Wurmple 20%, Seedot 20%, Lotad 20%, Poochyena 10%, Ralts 5%, Surskit 5%; Surf: Marill 60%, Surskit 30%, Azumarill 10%; Fis: good rod levels maxs at 25
- Petalburg City - Surf: Marill 60%, Surskit 30%, Azumarill 10%; Fish: good rod levels maxs at 25
- Route 104 - Land: Zigzagoon 40%, Wurmple 20%, Marill 20%, Taillow 10%, Wingull 10%; Fish: good rod levels maxs at 25
- Route 116 - Land: Zigzagoon 20%, Whismur 20%, Nincada 20%, Taillow 20%, Abra 15%, Skitty 5%
- Rusturf Tunnel - Land: Whismur 50%, Geodude 25%, Zubat 25%

10/21/25 - commit made
files: src/data/wild_encounters.json
- pre-badge 1 wilds

10/22/25 - Pre-Badge 2 Wilds
- Route 105 - Surf: Tentacool 60%, Wingull 30%, Pelipper 10%; Fish: good rod levels max at 25
- Route 106 - Surf: Tentacool 60%, Wingull 30%, Pelipper 10%; Fish: good rod levels max at 25
- Dewford Town - Surf: Tentacool 60%, Wingull 30%, Pelipper 10%; Fish: good rod levels max at 25
- Granite Cave 1F - Land: Makuhita 40%, Zubat 30%, Geodude 20%, Abra 10%
- Granite Cave BF2 - Rock Smash: Encounter rate now 40%
- Route 107 - Surf: Tentacool 60%, Wingull 30%, Pelipper 10%; Fish: good rod levels max at 25
- Route 108 - Surf: Tentacool 60%, Wingull 30%, Pelipper 10%; Fish: good rod levels max at 25
- Route 109 - Surf: Tentacool 60%, Wingull 30%, Pelipper 10%; Fish: good rod levels max at 25
- Slateport City - Surf: Tentacool 60%, Wingull 30%, Pelipper 10%; Fish: good rod levels max at 25
- Route 110 - Land: Zigzagoon 20%, Electrike 20%, Gulpin 15%, Minun 15%, Wingull 10%, Oddish 10%, Plusle 5%, Voltorb 5%; Surf: Tentacool 60%, Wingull 30%, Pelipper 10%; Fish: good rod levels max at 25

10/22/25 - commit made
files: src/data/wild_encounters.json
- pre-badge 2 wilds

10/22/25 - Pre-Badge 3 Wilds
files: src/data/wild_encounters.json
- Route 117 - Land: Zigzagoon 30%, Roselia 20%, Illumise 20%, Oddish 10%, Marill 10%, Volbeat 5%, Surskit 5%; Surf: Marill 60%, Surskit 30%, Azumarill 10%; Fish: good rod levels max at 25
- Route 118 - Land: Linoone 30%, Manectric 30%, Wingull 18%, Zigzagoon 10%, Electrike 10%, Kecleon 2%; Surf: Tentacool 60%, Wingull 30%, Pelipper 10%; Fish: good rod levels max at 25; Good Rod now on west shore of route
- Route 111 - Land: Trapinch 35%, Sandshrew 20%, Cacnea 20%, Baltoy 15%, Sandslash 10%; Rock Smash: Geodude 90%, Graveler 10%; Surf: Marill 60%, Surskit 30%, Azumarill 10%; Fish: good rod levels max at 25
- Dewford Cave BF2 - Rock Smash: Geodude 60%, Nosepass 30%, Graveler 10%;

10/22/25 - commit made
files: src/data/wild_encounters.json
- pre-badge 3 wilds

10/22/25 - Pre-Badge 4 Wilds
files: src/data/wild_encounters.json
- Petalburg Woods - Land: Wurmple 25%, Zigzagoon 20%, Shroomish 15%, Taillow 15%, Silcoon 10%, Cascoon 10%, Slakoth 5%
- Route 112 - Land: Numel 40%, Machop 20%, Sandshrew 20%, Taillow 10%, Meditite 10%; Rock Smash*: Geodude 60%, Slugma 30%, Graveler 10%; *Rock Smash mons newly added
- Fiery Patth - Land: Numel 40%, Koffing 30%, Machop 20%, Torkoal 10%; Rock Smash*: Geodude 60%, Slugma 30%, Graveler 10%; *Rock Smash mons newly added
- Route 113 - Land: Spinda 70%, Sandshrew 25%, Skarmory 5%
- Route 114 - Land: Swablu 40%, Lombre 20%, Nuzleaf 20%, Seviper 15%, Surskit 5%; Rock Smash*: Geodude 90%, Graveler 10%; Surf: Marill 60%, Surskit 30%, Azumarill 10%; Fish: good rod levels max at 25; *increased encounter rate for Rock Smash
- Meteor Falls 1F 1R: Land: Zubat 30%, Geodude 20%, Solrock 20%, Mawile 15%, Kadabra 10%, Lunatone 5%; Surf: Zubat 90%, Solrock 5%, Lunatone 5%; Fish: good rod levels max at 25
- Route 115 - Swablu 30%, Swellow 20%, Wingull 15%, Zangoose 15%, Taillow 10%, Jigglypuff 10%; Surf: Tentacool 60%, Wingull 30%, Pelipper 10%; Fish: good rod levels max at 25
- Jagged Pass - Land: Numel 45%, Machop 25%, Spoink 20%, Meditite 10%
- Granite Cave BF2 - increased rock smash encounter rate

10/23/25 - Bug Fixes
files: src/data/text/item_descriptions.h
       src/data/text/move_descriptions.h
- fixed typos
files: src/pokemon_summary_screen.c
- all moves can be replaced when learning new moves
files: graphics/items/icon_palettes/bug_tm_hm.pal - file added
       include/graphics.h
       src/data/graphics/items.h
       src/data/item_icon_table.h
- set HM01 Cut to have bug-type icon color

10/23/25 - commit made
files: src/data/wild_encounters.json
       src/data/text/item_descriptions.h
       src/data/text/move_descriptions.h
       graphics/items/icon_palettes/bug_tm_hm.pal - file added
       include/graphics.h
       src/data/graphics/items.h
       src/data/item_icon_table.h
- pre-badge 4 wilds
- fixed typos
- can delete HM moves
- set bug-type palette for HM01 Cut icon

10/2X/25 - Pre-Badge 6 Wilds
files: src/data/wild_encounters.json
- Mirage Tower (all floors) - Land: raised levels
- New Mauville Entrance - Land: Voltorb 40%, Magnemite 40%, Grimer 20%
- New Mauville Interior - Land: Voltorb 39%, Magnemite 39%, Grimer 20%, Electrode 1%, Magneton 1%
- Route 119 - Land: Linoone 30%, Gloom 25%, Ninjask 20%, Vigoroth 15%, Tropius 8%, Kecleon 2%; Surf: Tentacool 60%, Wingull 30%, Pelipper 10%; Fish: Feebas 15% w/ Super Rod (existing method also still works)
- Route 120 - Land: Linoone 30%, Gloom 25%, Ninjask 20%, Vigoroth 10%, Absol 8%, Surskit 5%, Kecleon 2%; Surf: Marill 60%, Surskit 30%, Azumarill 10%
- Route 121 - Land: Shuppet 30%, Mightyena 20%, Vulpix 15%, Gloom 15%, Kadabra 10%, Pelipper 8%, Kecleon 2%; Surf: Tentacool 60%, Wingull 30%, Pelipper 10%
- Route 122 - Surf: Tentacool 60%, Wingull 30%, Pelipper 10%
- Route 123 - Land: Shuppet 30%, Mightyena 20%, Gloom 15%, Vulpix 10%, Kadabra 10%, Swellow 8%, Surskit 5%, Kecleon 2%; Surf: Marill 60%, Surskit 30%, Azumarill 10%; Fish: (Old) Magikarp 70%, Goldeen 30%, (Good) Magikarp 60%, Goldeen 20%, Corphish 20%, (Super) Corphish 100%
- Safari Zone South - Land: Gloom 40%, Wobbuffet 30%, Natu 15%, Pikachu 10%, Xatu 5%
- Safari Zone Southwest - Land: Gloom 40%, Girafarig 30%, Doduo 15%, Pikachu 10%, Dodrio 5%; Surf: Psyduck 90%, Golduck 10%
- Safari Zone North - Land: Gloom 30%, Xatu 25%, Machoke 20%, Phanpy 15%, Donphan 5%, Heracross 5%; Rock Smash: Geodude 60%, Graveler 40%
- Safari Zone Northwest - Land: Gloom 30%, Dodrio 25%, Machoke 20%, Rhyhorn 20%, Heracross 5%; Surf: Psyduck 90%, Golduck 10%\
- Lilycove City - Surf: Tentacool 60%, Wingull 30%, Pelipper 10%;

10/23/25 - commit made
files: src/data/wild_encounters.json
- pre-badge 6 wilds

10/23/25 - Pre-Badge 7 Wilds
files: src/data/wild_encounters.json
- Mt. Pyre Exterior - Land: Shuppet 40%, Meditite 30%, Vulpix 20%, Wingull 10%
- Mt. Pyre Summit - Land: Shuppet 85%, Duskull 10%, Chimecho 5%
- Magma Hideout (non-lava rooms) - Land: Numel 40%, Koffing 30%, Machop 20%, Torkoal 10%; Rock Smash*: Graveler 60%, Magcargo 30%, Geodude 10%; *rock smash mons newly added
- Magma Hideout (lava rooms) - Land: Numel 20%, Magcargo 30%, Koffing 20%, Torkoal 10%, Camerupt 10%, Slugma 5%
- Route 124 - Surf: Tentacruel 60%, Pelipper 30%, Tentacool 5%, Wingull 5%; Dive: Clamperl 60%, Lanturn 30%, Chinchou 5%, Relicanth 5%
- Route 125 - Surf: Tentacruel 60%, Pelipper 30%, Tentacool 5%, Wingull 5%
- Shoal Cave (main areas) - Sealeo 40%, Golbat 40%, Spheal 10%, Zubat 10%; Surf: Sealeo 60%, Golbat 30%, Spheal 5%, Zubat 5%
- Shoal Cave (ice room) - Sealeo 40%, Golbat 40%, Snorunt 10%, Spheal 5%, Zubat 5%
- Route 126 - Surf: Tentacruel 60%, Pelipper 30%, Tentacool 5%, Wingull 5%; Dive: Clamperl 60%, Lanturn 30%, Chinchou 5%, Relicanth 5%
- Route 127 - Surf: Tentacruel 60%, Pelipper 30%, Tentacool 5%, Wingull 5%

10/23/25 - commit made
files: src/data/wild_encounters.json
- pre-badge 7 wilds

10/23/25 - Pre-Badge 8 Wilds
files: src/data/wild_encounters.json
- Seafloor Cavern (all rooms): Land: Golbat 35%, Graveler 35%, Zubat 10%, Geodude 10%, Sableye 10%
- Route 128 - Surf: Tentacruel 60%, Pelipper 30%, Tentacool 5%, Wingull 5%
- Sootopolis City - Surf: adjusted lvls; Fish: (old) Magikarp 100%
- Cave of Origin (Entrance) - Land: Golbat 40%, Graveler 40%, Zubat 10%, Geodude 10%
- Cave of Origin (BF1) - Land: Golbat 35%, Graveler 35%, Sableye 30%
- Route 129 - Surf: Tentacruel 60%, Pelipper 30%, Wingull 5%, Wailord 5%
- Route 130 - Surf: Tentacruel 60%, Pelipper 30%, Wingull 5%, Wailord 5%
- Route 131 - Surf: Tentacruel 60%, Pelipper 30%, Wingull 5%, Wailord 5%
- Pacifidlog Town - Tentacruel 60%, Pelipper 30%, Wingull 5%, Tentacool 5%
- Sky Pillar 5F - Land: Sableye 30%, Golbat 30%, Claydol 20%, Banette 10%, Dusclops 5%, Altaria 5%

10/23/25 - commit made
files: src/data/wild_encounters.json
- pre-badge 8 wilds

10/24/25 - pre-league wilds
files: src/data/wild_encounters.json
- Meteor Falls 1F 2R & B1F 1R - Land: Golbat 30%, Graveler 20%, Solrock 20%, Mawile 15%, Kadabra 10%, Lunatone 5%; Surf: Golbat 90%, Solrock 5%, Lunatone 5%
- Meteor Falls B1F 2R - Land: Golbat 20%, Graveler 20%, Bagon 20%, Solrock 20%, Mawile 15%, Lunatone 5%
- Route 132 - Surf: Tentacruel 60%, Pelipper 30%, Wingull 5%, Tentacool 5%
- Route 133 - Surf: Tentacruel 60%, Pelipper 30%, Wingull 5%, Tentacool 5%
- Route 134 - Surf: Tentacruel 60%, Pelipper 30%, Wingull 5%, Tentacool 5%
- Evergrande City - Surf: Tentacruel 60%, Pelipper 30%, Wingull 5%, Tentacool 5%
- Victory Road 1F - Land: Golbat 30%, Graveler 20%, Loudred 30%, Hariyama 15%, Medicham 5%
- Victory Road B1F - Land: Golbat 30%, Hariyama 25%, Lairon 25%, Mawile 10%, Medicham 10%; Rock Smash: Graveler 90%, Geodude 10%
- Victory Road B2F - Land: Golbat 30%, Lairon 30%, Mawile 20%, Medicham 20%;

10/27/25 - commit made
files: src/data/wild_encounters.json
- pre-league wilds

10/27/25 - post-game wilds
files: src/data/wild_encouters.json
- Route 123 - Land: Shuppet 30%, Mightyena 20%, Roselia 15%, Vulpix 10%, Kadabra 10%, Swellow 8%, Surskit 5%, Kecleon 2%
- Altaring Cave - Land: Teddiursa 30%, Swinub 30%, Onix 10%, Gastly 10%, Misdreavus 5%, Tyrogue 10%, Dunsparce 5%; Rock Smash: Geodude 70%, Larvitar 30%
- Safari Zone Southeast - Land: Hoppip 20%, Mareep 20%, Spinarak 10%, Aipom 10%, Stanler 5%, Snubbull 15%, Hoothoot 15%, Gligar 5%; Surf: 90% Wooper, Quagsire 10%; Fish: (Super) Goldeen 40%, Remoraid 40%, Qwilfish 15%, Octillery 5%
- Safari Zone Northeast - Land: Sentret 20%, Sunkern 20%, Murkrow 10%, Ledyba 10%, Pineco 15%, Miltank 5%, Houndour 15%, Yanma 5%; Rock Smash: Shuckle 100%
- Route 130 (Mirage Island) - Land: Treecko 30%, Torchic 30%, Mudkip 30%, Eevee 10%
files: src/time_events.c
- Mirage Island now appears permanently once in Hall of Fame
files: src/field_player_avatar.c
- No longer have to manually reel in fish
files: src/pokedex_area_screen.c
- hide starters and eevee from pokedex area screen

10/27/25 - commit made
files: src/data/wild_encouters.json
       src/time_events.c
       src/field_player_avatar.c
       src/pokedex_area_screen.c

10/27/25
files: src/data/wild_encounters.json
- increased encounter rate for rock smash

files: src/data/items.h
- fixed bug where evolution items couldn't be used
- adjusted prices for evolution items

files: include/constants/flags.h
- add flag for meeting the Diving Treasure Hunter's brother

files: data/maps/Route124_DivingTreasureHuntersHouse/scripts.inc
- Added Diving Treasure Hunter's brother, who sells evolution items in the post-game

10/27/25 - commit made
files: src/data/wild_encounters.json
       src/data/items.h
       data/maps/Route124_DivingTreasureHuntersHouse/scripts.inc
       include/constants/flags.h
- added Diving Treasure Hunter's Brother NPC who sells evolution items in post-game + other tweaks / fixes

10/28/25 - other item availablity changes
ideas:
- Add earlier water stone in abandoned ship
- Add moon and sun stones to Granite Cave
- Maaybe adjust evo item distro -- keep diving treasure hunter for main elemental stones, add sun / moon seller to space center and keep bro for other evo items

10/28/25 - earlier water stone & other tweaks
files: data/maps/Route124_DivingTreasureHuntersHouse/scripts.inc
- removed evolution stones from diving treasure hunter bro's mart list
files: data/scripts/item_ball_scripts.inc
       include/constants/flags.h
- swapped ice beam tm and water stone in abandoned ship so that stone is available pre-badge 6

10/28/25 - commit made
files: data/maps/Route124_DivingTreasureHuntersHouse/scripts.inc
       data/scripts/item_ball_scripts.inc
       include/constants/flags.h
- water stone swapped w/ ice beam tm in abandoned ship; removed stones from diving treasure hunter's inventory

10/28/25 - moon and sun stone in granite cave
files: data/scripts/item_ball_scripts.inc
       include/constants/flags.h
- sun & moon stone in granite cave

10/28/25 - commit made
files: data/scripts/item_ball_scripts.inc
       include/constants/flags.h
- sun & moon stone in granite cave

10/28/25 - commit made
files: src/data/pokemon/species_info.h
- made shards more common on wild mons