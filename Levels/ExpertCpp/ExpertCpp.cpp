#include "ExpertCpp.h"
#include <iostream>

ExpertCpp::ExpertCpp()
{
    questionsAndAnswers = 
    {
        { "Expert question?", "Expert answer" }
    };
}

void ExpertCpp::PrintQuestionsAndAnswers()
{
    std::cout << "These are the Expert C++ questions:" << std::endl;

    ShowQA();
}