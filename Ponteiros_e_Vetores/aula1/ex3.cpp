#include <iostream>

using namespace std;

int main()
{
    int number1;
    int counter = 0;
    int amount = 0;

    while (counter < 10)
    {
        cout << "Digite um numero (" << counter << ")" << endl;
        cin >> number1;

        if (number1 < 5)
        {
            amount++;
        }
        counter++;
    }
    cout << "Quantidade de Numeros Menores que 5: (" << amount << ")" << endl;

    return 0;
}