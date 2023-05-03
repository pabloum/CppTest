#include "Oop.h"
#include <iostream>

Oop::Oop()
{
    questionsAndAnswers = 
    {
        { "OOP question?", "OOP answer" }
    };
}

void Oop::PrintQuestionsAndAnswers()
{
    std::cout << "These are the OOP C++ questions:" << std::endl;

    ShowQA();
}