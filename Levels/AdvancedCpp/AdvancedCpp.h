
#ifndef __ADVANCED__
#define __ADVANCED__

#include <iostream>
#include "../../Levels/Interfaces/ILevelCpp.h"

class AdvancedCpp : public ILevelCpp
{
    public:
    AdvancedCpp();
    void PrintQuestionsAndAnswers() override;
};

#endif /* __ADVANCED__ */