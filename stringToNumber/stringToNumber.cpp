#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    string a = "334";
    string b = "23.45";

    int an = atoi(a.c_str());
    cout << "an = " << an << endl;

    stringstream sst(b);
    double bn;
    sst >> bn;
    cout << "bn = " << bn << endl;

    return 1;
}
