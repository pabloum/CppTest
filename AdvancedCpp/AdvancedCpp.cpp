#include "AdvancedCpp.h"
#include <iostream>

AdvancedCpp::AdvancedCpp()
{
    questionsAndAnswers = 
    {
        { "Advanced question?", "Advanced answer" }
    };
}

void AdvancedCpp::PrintQuestionsAndAnswers()
{
    std::cout << "These are the Advanced C++ questions:" << std::endl;

    ShowQA();
}