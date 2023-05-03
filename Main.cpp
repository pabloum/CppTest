
#include <iostream>
#include "LevelFactory.h"
#include "Enums/Levels.h"

void ExecuteProgram(Level level);

int main()
{
    std::cout << "Hello, World! Beginning of App \n \n" << std::endl;

    auto level = Level::OOP;
    ExecuteProgram(level);
    
    std::cout << "\n \nBye, World! End of App" << std::endl;

    return 0;
}

void ExecuteProgram(Level level)
{
    LevelFactory factory = LevelFactory();

    std::shared_ptr<ILevelCpp> levelObject = factory.GetLevel(level);

    if (levelObject != nullptr)
    {
        levelObject->PrintQuestionsAndAnswers();
    }
}