
#include <iostream>
#include "LevelFactory.h"
#include "Enums/Levels.h"

int main()
{

    LevelFactory factory = LevelFactory();

    factory.GetLevel(Level::OOP);

    return 0;
}
