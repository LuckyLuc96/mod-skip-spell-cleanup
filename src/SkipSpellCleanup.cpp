/*
 * Copyright (C) 2016+ AzerothCore <www.azerothcore.org>, released under GNU AGPL v3 license: https://github.com/azerothcore/azerothcore-wotlk/blob/master/LICENSE-AGPL3
 */

#include "ScriptMgr.h"
#include "Player.h"

class NoSpellCleanupPlayerScript : public PlayerScript
{
public:
    NoSpellCleanupPlayerScript() : PlayerScript("NoSpellCleanupPlayerScript") {}

    bool CheckSkillLearnedBySpell(uint32 spellId)
    {
        return true;
    }
};

void AddmodskipspellcleanupScripts()
{
    new NoSpellCleanupPlayerScript();
}
