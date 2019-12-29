#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <thread>

using namespace std;
bool checkESC() {
    char keyIn = 0;
    cin >> keyIn;
    int keyInInt = static_cast<int>(keyIn);
    cout << keyInInt;
    usleep(300);
    if (keyInInt == 27) {
        return true;
    }
    return false;
}

int main() {
    //    // input verification
    //    cout << "please input a: " << endl;
    //    char a = 0;
    //    cin >> a;
    //    cout << a << endl;
    //    int aa = static_cast<int>(a);
    //    cout << aa << endl;
    //    cout << "please input b: " << endl;
    //    int b = 0;
    //    cin >> b;
    //    cout << "a + b = " << a + b << endl;
    //    cout << " a = " << a << ", b = " << b << endl;

    // ckeck if ESC is pressed
    thread t(checkESC);
    for (int i = 0;; ++i) {
        cout << i << endl;
        //        if (checkESC()) {
        //            break;
        //        }
        usleep(300);
    }
    // t.join();
    cout << "exit with ESC pressed" << endl;

    //    return 0;
}
