
#ifndef __LEVEL__
#define __LEVEL__

class ILevelCpp
{
    public:
    virtual ~ILevelCpp() = 0;
    virtual void SaySomething() = 0;
};

inline ILevelCpp::~ILevelCpp() {}

#endif /* __LEVEL__ */