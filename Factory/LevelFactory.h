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
    const std::map<Level, std::function<std::shared_ptr<ILevelCpp>()>> m_levels = 
    {
        {Level::OOP, []() { return std::make_shared<Oop>(); }},
        {Level::Basic, []() { return std::make_shared<BasicCpp>(); }},
        {Level::Advanced, []() { return std::make_shared<AdvancedCpp>(); }},
        {Level::Expert, []() { return std::make_shared<ExpertCpp>(); }},
        {Level::PattertsIdioms, []() { return std::make_shared<PatternsIdioms>(); }},
        {Level::Testing, []() { return std::make_shared<TestingLevel>(); }}
    };

    public:
    std::shared_ptr<ILevelCpp> GetLevel(Level level) 
    {
        auto& levelCreator = m_levels.at(level);
        return levelCreator();
    }

    private:
};

#endif /* __LEVEL_FACTORY__ */