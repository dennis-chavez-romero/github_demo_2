// Your First C++ Program

#include <iostream>
#include <windows.h>

void jakobCounter()
{
    for (int i = 0; i < 11; i++)
    {
        std::cout << "j " << i << std::endl;
    }
}

void print_nums() 
{
    for (int i = 21; i <= 30; i++)
    {
        std::cout << "d " << i << std::endl;
    }
}

void alexCounter()
{
    for (byte i = 11; i < 21; i++)
    {
        printf("a %d\n", i);
    }
}

int main() 
{
    Sleep(100);
    std::cout << "Hello World!\n"; // this is a merge conflict
    std::cout << "Hello Metaverse!\n"; 
    std::cout << "this is an insane change\n"; 
    jakobCounter();
    alexCounter();
    print_nums();

    //for (int i = 0; i < 60; i++)
    //    printf("i\n");
    ////std::cout << i << std::endl;

    //printf("i: %d\n", 60);
    while (TRUE);

    return 0;
}

