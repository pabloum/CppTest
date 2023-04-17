
#include <iostream>
#include "LevelFactory.h"
#include "Enums/Levels.h"

int main()
{

    LevelFactory factory = LevelFactory();

    auto level = factory.GetLevel(Level::Basic);


    return 0;
}
