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
- [ ] Pre-Badge 1 Wild Encounter Changes
- [ ] Pre-Badge 2 Wild Encounter Changes
- [ ] Pre-Badge 3 Wild Encounter Changes
- [ ] Pre-Badge 4 Wild Encounter Changes
- [ ] Pre-Badge 5 Wild Encounter Changes
- [ ] Pre-Badge 6 Wild Encounter Changes
- [ ] Pre-Badge 7 Wild Encounter Changes
- [ ] Pre-Badge 8 Wild Encounter Changes
- [ ] Pre-League Wild Encounter Changes
- [ ] Postgame Wild Encounter Changes
- [ ] Item Availabilty Changes
- [ ] Event Pokemon Changes
- [ ] In-game trade changes?

---

## 🧠 Notes
10/21/25 - Pre-Badge 1 Wild Encounter Changes
files: src/data/wild_encounters.json
- Route 101 - Land: Zigzagoon 45%, Wurmple 45%, Poochyena 10%
- Route 103 - Land: Zigzagoon 60%, Poochyena 20%, Wingull 20%; Fishing: good rod levels maxs at 25
- Route 102 - Land: Zigzagoon 20%, Wurmple 20%, Seedot 20%, Lotad 20%, Poochyena 10%, Ralts 5%, Surskit 5%; Surf: Marill 60%, Surskit 30%, Azumarill 10%; Fishing: good rod levels maxs at 25
- Petalburg City - Surf: Marill 60%, Surskit 30%, Azumarill 10%; Fishing: good rod levels maxs at 25
- Route 104 - Land: Zigzagoon 40%, Wurmple 20%, Marill 20%, Taillow 10%, Wingull 10%; Fishing: good rod levels maxs at 25
- Route 116 - Land: Zigzagoon 20%, Whismur 20%, Nincada 20%, Taillow 20%, Abra 15%, Skitty 5%
- Rusturf Tunnel - Land: Whismur 50%, Geodude 25%, Zubat 25%
