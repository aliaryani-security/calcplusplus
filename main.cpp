#include <iostream>
using namespace std;

void get_op () {
    int opt{};
    cout << "Choose the operation: " << endl;
    cout << "1. Addition" << endl 
        << "2. Subtraction" << endl 
        << "3. Multiplication" << endl
        << "4. Division" << endl;
    cin >> opt;
    switch (opt) {
        case 1:{} break;
        case 2:{} break;
        case 3:{} break;
        case 4:{} break;
        default:{
                    cout << "not a valid option!" << endl;
        } break;
    }
}

int main() {

    return 0;
}
