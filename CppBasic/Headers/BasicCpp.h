
#ifndef __BASIC__
#define __BASIC__

#include <iostream>
#include "../../ILevelCpp.h"

class BasicCpp : public ILevelCpp
{
    public:
    void SaySomething() override;

    private:
};

#endif /* __BASIC__ */