#include <iostream>
#include <string>

using namespace std;
int main(int argc, char* argv[]) {
    switch (argc) {
        case 0:
            cout << "no main arguments" << endl;
            break;
        case 1:
            cout << "one argument: " << argv[0] << endl;
            break;
        case 2:
            cout << "two arguments: " << argv[0] << ", " << argv[1] << endl;
            break;
        default:
            cout << "too much argument" << endl;
            break;
    }

    if (argc == 6) {
        cout << "argv[1] = " << argv[1] << endl;
        cout << "argv[2] = " << argv[2] << endl;
        cout << "argv[3] = " << argv[3] << endl;
        cout << "argv[4] = " << argv[4] << endl;
        cout << "argv[5] = " << argv[5] << endl;
    } else if (argc == 0) {
        cout << "no main arguments" << endl;
    } else
        return 1;
}
