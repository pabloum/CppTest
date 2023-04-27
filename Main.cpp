
#include <iostream>
#include "LevelFactory.h"
#include "Enums/Levels.h"

void ExecuteProgram();

int main()
{
    std::cout << "Hello, World! Beginning of App \n \n" << std::endl;
    ExecuteProgram();
    std::cout << "\n \nBye, World! End of App" << std::endl;

    return 0;
}

void ExecuteProgram()
{
    LevelFactory factory = LevelFactory();

    std::shared_ptr<ILevelCpp> level = factory.GetLevel(Level::Basic);

    if (level != nullptr)
    {
        level->PrintQuestionsAndAnswers();
    }
}