
#ifndef __LEVEL__
#define __LEVEL__

#include <list>
#include "QuestionAnswer.h"

class ILevelCpp
{
    public:
    virtual ~ILevelCpp() = 0;
    virtual void PrintQuestionsAndAnswers() = 0;

    void ShowQA()
    {
        for(auto questionAnswer : questionsAndAnswers)
        {
            std::cout << "Q: " << questionAnswer.Question << std::endl;
            std::cout << "A: " << questionAnswer.Answer << std::endl;
        }
    }

    protected:
    std::list<QuestionAnswer> questionsAndAnswers;

};

inline ILevelCpp::~ILevelCpp() {}

#endif /* __LEVEL__ */