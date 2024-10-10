#include <iostream>
#include "time.h"

using namespace std;

int main () {
    Time t1(23, 59, 59);
    t1.print();
    t1.setHour(12);
    t1.setMinute(30);
    t1.setSecond(15);
    t1.print();

    cout << "Hour:    " << t1.getHour() << endl;
    cout << "Minute:  " << t1.getMinute() << endl;
    cout << "Second:  " << t1.getSecond() << endl;

    Time t2(12);
    t2.print();

    Time t3(23, 59, 58);
    t3.print();
    t3.nextSecond();
    t3.print();
    t3.nextSecond();
    t3.print();
}