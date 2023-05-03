#ifndef __EXPERT__
#define __EXPERT__

#include <iostream>
#include "../ILevelCpp.h"

class ExpertCpp : public ILevelCpp
{
    public:
    ExpertCpp();
    void PrintQuestionsAndAnswers() override;
};

#endif /* __EXPERT__ */