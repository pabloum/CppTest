#include "TestingLevel.h"
#include <iostream>

TestingLevel::TestingLevel()
{
    questionsAndAnswers = 
    {
        { "TestingLevel question?", "TestingLevel answer" }
    };
}

void TestingLevel::PrintQuestionsAndAnswers()
{
    std::cout << "These are the TestingLevel C++ questions:" << std::endl;

    ShowQA();
}