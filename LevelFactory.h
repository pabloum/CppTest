#ifndef __BASIC__
#define __BASIC__

#include <iostream>
#include "ILevelCpp.h"
#include "Enums/Levels.h"

class LevelFactory 
{
    public:
    ILevelCpp GetLevel(Level level) 
    {
        std::cout << "The Factory is working" << std::endl;
        return ILevelCpp(); 
    }
};

#endif /* __BASIC__ */