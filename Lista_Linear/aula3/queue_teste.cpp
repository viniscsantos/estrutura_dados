#include "queue.h"
#include <iostream>

using namespace std;

int main () {
    int cont = 0;
    char character;
    Queue queue;
    char queueChar;
    cout << "Adicione uma String." << endl;
    cin.get(character);
    while (character != '\n' and !queue.isFull())
    {
        queue.enqueue(character);
        cin.get(character);
    }
    while (!queue.isEmpty())
    {   cont++;
        queueChar = queue.dequeue();
        cout << queueChar << cont;
    }
    cout << endl;
    system("pause");
}