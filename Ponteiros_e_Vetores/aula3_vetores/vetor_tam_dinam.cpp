#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num_elem;
    cout << "Diga o tamanho do vetor: ";
    cin >> num_elem;
    int* list = new int[num_elem];

    for(int i = 0; i < num_elem; i++){
        cout << "Digite o valor " << i + 1 << endl;
        cin >> list[i];
    }
    for(int i = 0; i < num_elem; i++){
        if (list[i] > num_elem - 1){
            cout << list[i];
        }
        else {
            cout << list[i] << "-";
        }
        delete [] list;
    }
    

    return 0;
}
