
#ifndef __OOP__
#define __OOP__

#include <iostream>
#include "../ILevelCpp.h"

class Oop : public ILevelCpp
{
    public:
    Oop();
    void PrintQuestionsAndAnswers() override;
};

#endif /* __OOP__ */