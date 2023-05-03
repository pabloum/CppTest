
#ifndef __BASIC__
#define __BASIC__

#include <iostream>
#include "../ILevelCpp.h"

class BasicCpp : public ILevelCpp
{
    public:
    BasicCpp();
    void PrintQuestionsAndAnswers() override;
};

#endif /* __BASIC__ */