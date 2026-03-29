VerdanturfTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

VerdanturfTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_VERDANTURF_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

VerdanturfTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_VERDANTURF_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_VERDANTURF_NPC_TRADE_COMPLETED, VerdanturfTown_PokemonCenter_1F_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_SNORUNT
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox VerdanturfTown_PokemonCenter_1F_Text_LookingForPeace, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VerdanturfTown_PokemonCenter_1F_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, VerdanturfTown_PokemonCenter_1F_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, VerdanturfTown_PokemonCenter_1F_EventScript_WrongMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox VerdanturfTown_PokemonCenter_1F_Text_NowICanFinallyRelax, MSGBOX_DEFAULT
	setflag FLAG_VERDANTURF_NPC_TRADE_COMPLETED
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_DeclineTrade::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_MaybeFindPeaceAnotherWay, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_WrongMon::
	setvar VAR_0x8008, INGAME_TRADE_SNORUNT
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox VerdanturfTown_PokemonCenter_1F_Text_NowMoreStressed, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_TradeCompleted::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_SoPeacefulNow, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_ExpertM::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent:
	.string "The reason why anyone would visit\n"
	.string "VERDANTURF…\p"
	.string "It's the BATTLE TENT. It goes without\n"
	.string "saying.\p"
	.string "Or is there somebody here that you\n"
	.string "came to see?$"

VerdanturfTown_PokemonCenter_1F_Text_LookingForPeace:
	.string "I moved to VERDANTURF so that I\n"
	.string "could relax.\p"
	.string "But my {STR_VAR_2} is always shaking!\p"
	.string "It's impossible for me to relax!\p"
	.string "I heard {STR_VAR_1} is always calm.\p"
	.string "That sounds so nice.\p"
	.string "Do you have a {STR_VAR_1}?\n"
	.string "Will you trade it for my {STR_VAR_2}?$"

VerdanturfTown_PokemonCenter_1F_Text_MaybeFindPeaceAnotherWay:
	.string "Oh, well... I suppose I understand.\n"
	.string "Maybe I'll find peace elsewhere...$"

VerdanturfTown_PokemonCenter_1F_Text_NowMoreStressed:
	.string "Wait, that's not a {STR_VAR_1}!\n"
	.string "Now I'm even more stressed...$"

VerdanturfTown_PokemonCenter_1F_Text_NowICanFinallyRelax:
	.string "Oh, this is perfect...\p"
	.string "I feel more relaxed already...$"

VerdanturfTown_PokemonCenter_1F_Text_SoPeacefulNow:
	.string "Ah... It's so peaceful here now...$"
