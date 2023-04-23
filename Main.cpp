
#include <iostream>
#include "LevelFactory.h"
#include "Enums/Levels.h"

void ExecuteProgram();

int main()
{
    std::cout << "Hello, World! Beginning of App" << std::endl;
    ExecuteProgram();
    std::cout << "Bye, World! End of App" << std::endl;

    return 0;
}

void ExecuteProgram()
{
    LevelFactory factory = LevelFactory();

    std::shared_ptr<ILevelCpp> level = factory.GetLevel(Level::Basic);

    if (level != nullptr)
    {
        level->SaySomething();
    }
}