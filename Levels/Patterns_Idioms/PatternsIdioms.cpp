#include "PatternsIdioms.h"
#include <iostream>

PatternsIdioms::PatternsIdioms()
{
    questionsAndAnswers = 
    {
        { "PatternsIdiosm question?", "PatternsIdiosm answer" }
    };
}

void PatternsIdioms::PrintQuestionsAndAnswers()
{
    std::cout << "These are the PatternsIdiosm C++ questions:" << std::endl;

    ShowQA();
}