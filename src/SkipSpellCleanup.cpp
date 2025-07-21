/*
 * Copyright (C) 2016+ AzerothCore <www.azerothcore.org>, released under GNU AGPL v3 license: https://github.com/azerothcore/azerothcore-wotlk/blob/master/LICENSE-AGPL3
 */

#include "ScriptMgr.h"
#include "Player.h"



class NoSpellCleanupPlayerScript : public PlayerScript
{
public:
    NoSpellCleanupPlayerScript() : PlayerScript("NoSpellCleanupPlayerScript") {}

    // Override CheckSkillLearnedBySpell to always return true (prevent spell removal)
    bool OnCheckSkillLearnedBySpell(Player* /*player*/, uint32 /*spellId*/)
    {
        return true; // Bypass validation
    }
};


void Addmod_skip_spell_cleanupScripts()
{
    new NoSpellCleanupPlayerScript();
}
