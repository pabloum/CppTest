
#include "LevelFactory.h"

 LevelFactory::LevelFactory() : m_levels({
        {Level::OOP, []() { return std::make_shared<Oop>(); }},
        {Level::Basic, []() { return std::make_shared<BasicCpp>(); }},
        {Level::Advanced, []() { return std::make_shared<AdvancedCpp>(); }},
        {Level::Expert, []() { return std::make_shared<ExpertCpp>(); }},
        {Level::PattertsIdioms, []() { return std::make_shared<PatternsIdioms>(); }},
        {Level::Testing, []() { return std::make_shared<TestingLevel>(); }}
 })
{
}

std::shared_ptr<ILevelCpp> LevelFactory::GetLevel(Level level) 
{
    auto& levelCreator = m_levels.at(level);
    return levelCreator();
}