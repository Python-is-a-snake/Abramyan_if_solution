#include <iostream>
using namespace std;


void if_1(){
    int i;
    cout << "Enter integer: ";
    cin >> i;
    if (i > 0)i++, cout << i;
    else cout << i << endl;
}

void if_3(){
    int i;
    cout << "Enter integer: ";
    cin >> i;
    if (i > 0)i++, cout << i;
    else if (i < 0)i-=2, cout << i;
    else i = 10, cout << i;
}

void if_8(){
    int i_1, i_2;
    cout << "Enter 1st integer: ";
    cin >> i_1;
    cout << "Enter 2nd integer: ";
    cin >> i_2;

    if (i_1 < i_2)cout << i_2 << ", " << i_1;
    else cout << i_1 <<  ", " << i_2;
}

void if_10(){
    int a, b, c;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    if(a != b)c = a + b,a,b = c, cout << "A: " << a << "B: " << b;
    else a=0, b=0, cout <<  "A: " << a << "B: " << b;
}

void if_11(){
    int a, b;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    if (a != b)
        if (a > b)b = a;
        else if(a < b)a = b, cout << b << ", " << a;
        else a=0, b =0, cout << a << ", " << b;
}

void if_12(){
    int a, b, c;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Enter C: ";
    cin >> c;
    if(a < b < c || a < c < b)cout << a;
    else if(b < a < c || b < c < a)cout << b;
    else if(c < a < b || c < b < c)cout << c;
}

int main(){
    int choice;
    cout << "Enter number of solution: ";
    cout << "1-If_1, 2-If-3, 3-If_8, 4-If_10, 5-If_11, 6-If_12, ";
    cin >> choice;
    switch (choice) {
        case 0: cout << "Something wrong :(";
        case 1:
            if_1();
            break;
        case 2:
            if_3();
            break;
        case 3:
            if_8();
            break;
        case 4:
            if_10();
            break;
        case 5:
            if_11();
            break;
        case 6:
            if_12();
    }
    return 0;
}
