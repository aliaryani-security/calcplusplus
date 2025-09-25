#include <iostream>
using namespace std;

void add (int num1, int num2) {
   cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
}

void subtract(int num1, int num2) {
    cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
}

void multiply(int num1, int num2) {
    cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
}

void divide(int num1, int num2){
    cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
}

int get_num(bool first) {
    int num{};
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
    int num1 = get_num(true);
    int num2 = get_num(false);
    switch (opt) {
        case 1:{
                   add(num1,num2);
               } break;
        case 2:{
                   subtract(num1,num2);
               } break;
        case 3:{
                   multiply(num1,num2);
               } break;
        case 4:{
                   divide(num1,num2);
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
