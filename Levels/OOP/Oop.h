
#ifndef __OOP__
#define __OOP__

#include <iostream>
#include "../../Levels/Interfaces/ILevelCpp.h"

class Oop : public ILevelCpp
{
    public:
    Oop();
    void PrintQuestionsAndAnswers() override;
};

#endif /* __OOP__ */