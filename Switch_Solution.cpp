#include <iostream>

using namespace std;
void case_1(){
    int i;
    cout << "Enter number of day: ";
    cin >> i;
    switch (i) {
        case 1:
            cout << "Monday!";
            break;
        case 2:
            cout << "Tuesday!";
            break;
        case 3:
            cout << "Wednesday!";
            break;
        case 4:
            cout << "!";
            break;
        case 5:
            cout << "Friday!";
            break;
        case 6:
            cout << "Saturday!";
            break;
        case 7:
            cout << "Sunday!";
            break;
    }
}

void case_2(){
    int k;
    cout << "Enter k: ";
    cin >> k;
    switch(k){
        case 1:
            cout << "Bad :(";
            break;
        case 2:
            cout << "Not bad :/";
            break;
        case 3:
            cout << "Good!";
            break;
        case 4:
            cout << "Very good!";
            break;
        case 5:
            cout << "Amazing!!!";
            break;
        default:cout << "Error!";
    }
}


int main() {
    case_1();
    case_2();
    return 0;
}
