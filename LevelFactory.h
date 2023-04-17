#ifndef __LEVEL_FACTORY__
#define __LEVEL_FACTORY__

#include <iostream>
#include <map>
#include <memory>
#include "CppBasic/Headers/BasicCpp.h"
#include "ILevelCpp.h"
#include "Enums/Levels.h"

class LevelFactory 
{
    std::map<Level, std::shared_ptr<ILevelCpp>> m_levels = 
    {
        {Level::OOP, nullptr},
        {Level::Basic, std::make_shared<BasicCpp>()},
        {Level::Advanced, nullptr}
    };

    public:
    std::shared_ptr<ILevelCpp> GetLevel(Level level) 
    {
        auto& levelPtr = m_levels.at(level);

        if (levelPtr != nullptr)
        {
            levelPtr->SaySomething();
        }
        
        return levelPtr;
    }

    private:
};

#endif /* __LEVEL_FACTORY__ */