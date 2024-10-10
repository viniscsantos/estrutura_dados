#include <iostream>

int main()
{
    int anotherInt;

    int* intPointer;
    intPointer = new int;
    anotherInt = *intPointer;
    *intPointer = 25;
    std::cout << anotherInt << "(anotherInt)"<< *intPointer <<"(*intPointer)";


    return 0;
}
