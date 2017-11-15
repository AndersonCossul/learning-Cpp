#include <iostream>
#include "structs.h"
#include "enums.h"

void printMonster(Monster monster)
{
    using namespace std;
    string type;
    if (monster.type == MonsterType::DRAGON)
        type = "Dragon";
    else if (monster.type == MonsterType::GIANT_SPIDER)
        type = "Giant Spider";
    else if (monster.type == MonsterType::OGRE)
        type = "Ogre";
    else if (monster.type == MonsterType::ORC)
        type = "Orc";
    else if (monster.type == MonsterType::SLIME)
        type = "Slime";
    else
        type = "unknown";

    cout << "This " << type << " is named " << monster.name << " and has " << monster.healt << " health." << endl;
}
