#include <iostream>
using namespace std;

void count(int n1, int n2)
    {
        for(int i = n1; i <= n2; i++){
            if(i < n2){
                printf("%d, ", i);
            }
            else
            printf("%d", i);
        }
        cout << endl;
    }   
void count_reverse(int n1, int n2)
    {
        for(int i = n1; i >= n2; i--){
            if(i > n2){
                printf("%d, ", i);
            }
            else
            printf("%d", i);
        }
        cout << endl;
    }
int main()
{

    int number1, number2;
    char resp;
    do{
        cout << "Qual numero de inicio da contagem? ";
        cin >> number1;
        cout << "Ate que numero eu devo contar? ";
        cin >> number2;

        if(number1 < number2){
            count(number1, number2);
        }
        else
            count_reverse(number1, number2);
    
        do{
            cout << "Quer continuar (s/n)? ";
            cin >> resp;
        }while (resp != 'n' and resp != 's');
           
    }while (resp == 's');
    
    return 0;
}
