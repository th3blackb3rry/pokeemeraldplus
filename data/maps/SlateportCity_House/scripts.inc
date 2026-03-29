SlateportCity_House_MapScripts::
	.byte 0

SlateportCity_House_EventScript_PokefanM::
	msgbox SlateportCity_House_Text_NatureToDoWithStatGains, MSGBOX_NPC
	end

SlateportCity_House_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_SLATEPORT_NPC_TRADE_COMPLETED, SlateportCity_House_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_CHINCHOU
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox SlateportCity_House_Text_WillYouTradeWithMe, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_House_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_House_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, SlateportCity_House_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox SlateportCity_House_Text_VeryExcitedThankYou, MSGBOX_DEFAULT
	setflag FLAG_SLATEPORT_NPC_TRADE_COMPLETED
	release
	end

SlateportCity_House_EventScript_DeclineTrade::
	msgbox SlateportCity_House_Text_HowToLearnToBeHasty, MSGBOX_DEFAULT
	release
	end

SlateportCity_House_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox SlateportCity_House_Text_NotRoundEnough, MSGBOX_DEFAULT
	release
	end

SlateportCity_House_EventScript_TradeCompleted::
	msgbox SlateportCity_House_Text_CantWaitToBeHasty, MSGBOX_DEFAULT
	release
	end

SlateportCity_House_Text_NatureToDoWithStatGains:
	.string "My POKéMON has a HASTY nature.\p"
	.string "It has higher SPEED compared to\n"
	.string "my other POKéMON.\p"
	.string "Maybe their nature has something to\n"
	.string "do with the stat gains of POKéMON.$"

SlateportCity_House_Text_WillYouTradeWithMe:
	.string "I want to be HASTY too!\p"
	.string "I've heard of a round POKéMON that\n"
	.string "can roll around fast.\p"
	.string "Do you have a {STR_VAR_1}?\n"
	.string "I'll trade you my {STR_VAR_2}!$"

SlateportCity_House_Text_HowToLearnToBeHasty:
	.string "Aw!\p"
	.string "How will I learn to be HASTY?$"

SlateportCity_House_Text_NotRoundEnough:
	.string "Wait a minute!\p"
	.string "There's no way that's round enough\n"
	.string "to be a {STR_VAR_1}.$"

SlateportCity_House_Text_VeryExcitedThankYou:
	.string "Yay! Thank you so much!$"

SlateportCity_House_Text_CantWaitToBeHasty:
	.string "Now I'll be HASTY before you know it!$"

