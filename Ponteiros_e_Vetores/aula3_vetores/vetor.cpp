#include <iostream>
using namespace std;

const int NUM_ELEM = 9;
int main()
{
    int c[NUM_ELEM] = {1, 2, 3, 0, 5};
    for(int i = 0; i < NUM_ELEM; i++){
        cout << c[i] << ", ";
    }             

    return 0;
}
