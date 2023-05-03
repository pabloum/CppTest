#include "BasicCpp.h"
#include <iostream>

BasicCpp::BasicCpp()
{
    questionsAndAnswers = 
    {
        { "Basic question?", "Basic answer" }
    };
}

void BasicCpp::PrintQuestionsAndAnswers()
{
    std::cout << "These are the Basic C++ questions:" << std::endl;

    ShowQA();
}