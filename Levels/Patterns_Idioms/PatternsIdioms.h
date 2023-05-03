#ifndef __PATTERNS_IDIOMS__
#define __PATTERNS_IDIOMS__

#include <iostream>
#include "../../Levels/Interfaces/ILevelCpp.h"

class PatternsIdioms : public ILevelCpp
{
    public:
    PatternsIdioms();
    void PrintQuestionsAndAnswers() override;
};

#endif /* __PATTERNS_IDIOMS__ */