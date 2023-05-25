#ifndef _EXECUTE_PROGRAM_
#define _EXECUTE_PROGRAM_

#include <iostream>
#include "Factory/LevelFactory.h"
#include "Helpers/Levels.h"

void ExecuteProgram(Level level)
{
    LevelFactory factory = LevelFactory();

    std::shared_ptr<ILevelCpp> levelObject = factory.GetLevel(level);

    if (levelObject != nullptr)
    {
        levelObject->PrintQuestionsAndAnswers();
    }
}

#endif /*_EXECUTE_PROGRAM_*/