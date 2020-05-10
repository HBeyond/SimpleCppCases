#include <iostream>

bool andOperation(int& a, int& b) {
    bool A = false;
    bool B = false;
    if (a > 0) {
        A = true;
    }
    if (b > 0) {
        B = true;
    }
    return (A && B);
}

using namespace std;

int main(int argc, char* argv[]) {
    int a = 3;
    int b = 4;
    bool k = andOperation(a, b);
    cout << k << endl;

    return 1;
}
