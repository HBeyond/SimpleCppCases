#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    string a = "agc.json";
    string b = "abc.kml";
    if (a.find("json") == string::npos) {
        cout << "a is not a json file" << endl;
    } else {
        cout << a << endl;
    }

    if (b.find("json") == string::npos) {
        cout << "b is not a json file" << endl;
    } else {
        cout << b << endl;
    }

    return 1;
}
