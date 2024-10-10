#include <iostream>

using namespace std;

int main()
{
    int number1;
    int counter = 0;
    int amount = 0;

    while (counter < 10)
    {
        cout << "Digite um numero ("<< counter <<")" << endl;
        std::cin >> number1;

        if (number1 < 5){
            amount++;
        }
        counter++;
    }
    

    return 0;
}
