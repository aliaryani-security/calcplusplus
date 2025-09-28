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

auto get_op () {
    int opt{};
    cout << "Choose the operation: " << endl;
    cout << "1. Addition" << endl 
        << "2. Subtraction" << endl 
        << "3. Multiplication" << endl
        << "4. Division" << endl;
    while(true) {
        cout << "=> ";
        cin >> opt;
        if(opt==1 || opt==2 || opt==3 || opt==4){
            break;
        } else {
            cout << "Unknown option! try again." << endl;
        }
    }
    return opt;
    
}

int main() {
    int opt {get_op()};
    float num1 = get_num(true);
    float num2 = get_num(false);


    return 0;
}


