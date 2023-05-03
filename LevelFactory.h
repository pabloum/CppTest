#ifndef __LEVEL_FACTORY__
#define __LEVEL_FACTORY__

#include <iostream>
#include <map>
#include <memory>
#include "BasicCpp/BasicCpp.h"
#include "AdvancedCpp/AdvancedCpp.h"
#include "ExpertCpp/ExpertCpp.h"
#include "Patterns_Idioms/PatternsIdioms.h"
#include "Testing/TestingLevel.h"
#include "OOP/Oop.h"
#include "ILevelCpp.h"
#include "Enums/Levels.h"

class LevelFactory 
{
    std::map<Level, std::shared_ptr<ILevelCpp>> m_levels = 
    {
        {Level::OOP, std::make_shared<Oop>()},
        {Level::Basic, std::make_shared<BasicCpp>()},
        {Level::Advanced, std::make_shared<AdvancedCpp>()},
        {Level::Expert, std::make_shared<ExpertCpp>()},
        {Level::PattertsIdioms, std::make_shared<PatternsIdioms>()},
        {Level::Testing, std::make_shared<TestingLevel>()}
    };

    public:
    std::shared_ptr<ILevelCpp> GetLevel(Level level) 
    {
        auto& levelPtr = m_levels.at(level);
        return levelPtr;
    }

    private:
};

#endif /* __LEVEL_FACTORY__ */