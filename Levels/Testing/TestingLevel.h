
#ifndef __TESTING__
#define __TESTING__

#include <iostream>
#include "../../Levels/Interfaces/ILevelCpp.h"

class TestingLevel : public ILevelCpp
{
    public:
    TestingLevel();
    void PrintQuestionsAndAnswers() override;
};

#endif /* __TESTING__ */