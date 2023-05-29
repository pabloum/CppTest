#ifndef __LEVEL_FACTORY__
#define __LEVEL_FACTORY__

#include <iostream>
#include <map>
#include <memory>
#include "../Levels/BasicCpp/BasicCpp.h"
#include "../Levels/AdvancedCpp/AdvancedCpp.h"
#include "../Levels/ExpertCpp/ExpertCpp.h"
#include "../Levels/Patterns_Idioms/PatternsIdioms.h"
#include "../Levels/Testing/TestingLevel.h"
#include "../Levels/OOP/Oop.h"
#include "../Levels/Interfaces/ILevelCpp.h"
#include "../Helpers/Levels.h"

class LevelFactory 
{
    const std::map<Level, std::function<std::shared_ptr<ILevelCpp>()>> m_levels;
    
    public:
    LevelFactory();
    std::shared_ptr<ILevelCpp> GetLevel(Level level);
};

#endif /* __LEVEL_FACTORY__ */