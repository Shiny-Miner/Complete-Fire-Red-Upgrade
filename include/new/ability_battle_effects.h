#pragma once

#include "../global.h"
#include "../pokemon.h"

/**
 * \file ability_battle_effects.h
 * \brief Contains functions relating to the effects certain abilities have in battle.
 *		  Also includes the ability pop-up.
 */

//Exported Functions
u16 AbilityBattleEffects(u8 caseID, u8 bank, u16 ability, u8 special, u16 moveArg);
void AnimTask_LoadAbilityPopUp(u8 taskId);
void AnimTask_DestroyAbilityPopUp(u8 taskId);
void TransferAbilityPopUpHelper(void);
void TransferAbilityPopUpHelperAsTrace(void);
void TransferAbilityPopUpHelperAsImposter(void);
void TransferAbilityPopUp(u8 bank, u16 ability);
u16 GetHighestStat(u8 bankAtk);
u16 GetHighestStatMon(struct Pokemon* mon);

//Functions Hooked In
pokemon_t* UpdateNickForIllusion(pokemon_t* mon);
u8 UpdatePokeBallForIllusion(u8 bank);
species_t TryUpdateIllusionYDelta(u8 bank);
