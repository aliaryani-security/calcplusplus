#include <functional>
#include <iostream>
using namespace std;

int get_num(bool first) {
    float num{};
    if (first) {
        cout << "enter first number=> ";
        cin >> num;
    }else{
        cout << "enter second number=> ";
        cin >> num;
    }
    return num;
}

void get_op () {
    int opt{};
    cout << "Choose the operation: " << endl;
    cout << "1. Addition" << endl 
        << "2. Subtraction" << endl 
        << "3. Multiplication" << endl
        << "4. Division" << endl;
    cout << "=> ";
    cin >> opt;
    float num1 = get_num(true);
    float num2 = get_num(false);
    switch (opt) {
        case 1:{
                   cout << plus<>{}(num1,num2) << endl;
               } break;
        case 2:{
                   cout << minus<>{}(num1,num2) << endl;
               } break;
        case 3:{
                   cout << multiplies<>{}(num1,num2) << endl;
               } break;
        case 4:{
                   cout << divides<>{}(num1,num2) << endl;
               } break;
        default:{
                    cout << "not a valid option!" << endl;
        } break;
    }
}

int main() {
    get_op();

    return 0;
}
