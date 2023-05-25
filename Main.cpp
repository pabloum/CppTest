
#include <iostream>
#include "Factory/LevelFactory.h"
#include "Helpers/Levels.h"
#include "Execute.h"

void ExecuteProgram(Level level);

int main()
{
    std::cout << "Hello, World! Questions of C++ \n \n" << std::endl;

    auto level = Level::OOP;
    ExecuteProgram(level);
    
    std::cout << "\n \nBye, World!" << std::endl;

    return 0;
}