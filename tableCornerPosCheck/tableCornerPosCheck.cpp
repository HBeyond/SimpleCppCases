#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    size_t r = 5;
    size_t c = 4;
    size_t endPos = r * c - 1;
    for (size_t j = 0; j < 20; ++j) {
        if (((j + 1) % c == 0) && j != endPos) {
            cout << "last col: " << j << ", add pos: " << j + c << endl;
        } else if (((c * (r - 1) - 1) < j) && (j < endPos)) {
            cout << "last row: " << j << ", add pos: " << j + 1 << endl;
        } else if (j == endPos) {
            cout << "last pos: " << j << ", add none" << endl;
        } else {
            if (j == 0) {
                cout << "set extrinsics as constant" << endl;
            }
            cout << "normal pos: " << j << ". add pos1: " << j + 1 << ". add pos2: " << j + c << endl;
        }
    }

    return 1;
}
