#ifndef _EXECUTE_PROGRAM_
#define _EXECUTE_PROGRAM_

#include <iostream>
#include "Factory/LevelFactory.h"
#include "Helpers/Levels.h"

const std::list<Level> levelList = 
{
    Level::OOP,
    Level::Basic,
    Level::Advanced,
    Level::Expert,
    Level::PattertsIdioms,
    Level::Testing
};

void ExecuteProgram()
{
    LevelFactory factory = LevelFactory();

    for (auto level : levelList)
    {
        std::shared_ptr<ILevelCpp> levelObject = factory.GetLevel(level);

        if (levelObject != nullptr)
        {
            levelObject->PrintQuestionsAndAnswers();
        }
    }

}

#endif /*_EXECUTE_PROGRAM_*/