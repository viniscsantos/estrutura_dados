#include <iostream>

using namespace std;

int main()
{
    int total;

    for (int number = 2; number <= 20; number += 2)
        total += number;

        cout << "A soma serie e: " << total << endl; 

    return 0;
}
