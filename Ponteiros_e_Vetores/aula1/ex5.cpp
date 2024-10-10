#include <iostream>

using namespace std;

int main()
{
    int count;
    int number;
    int sum;

    do{
        cout << "Insira um novo numero: " << endl;
        cin >> number;

        sum += number;
        count++;
    } while (number != 0);

    float average = (float)sum/(float)count-1;
    cout << "A media da serie e: " << average << endl;

    return 0;
}
