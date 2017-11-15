#include "structs.h"
#include "enums.h"
#include "io.h"

int main()
{
    Monster ogre = { MonsterType::OGRE, "Torg", 145 };
    Monster blurp = { MonsterType::SLIME, "Blurp", 23 };

    printMonster(ogre);
    printMonster(blurp);

    return 0;
}
