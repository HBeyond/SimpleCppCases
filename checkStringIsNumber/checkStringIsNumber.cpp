#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    string str1 = argv[1];
    string str2 = argv[2];

    cout << str1[0] << endl;

    if (isdigit(str1[0])) {
        cout << "str1 is a number: " << str1 << endl;
        if (str1.find("/") != string::npos) {
            string upper = str1.substr(0, str1.find("/"));
            cout << str1.find("/") << endl;
            cout << str1.size() << endl;
            string down = str1.substr(str1.find("/") + 1, str1.size() - upper.size() - 1);
            cout << "upper = " << upper << endl;
            cout << "down = " << down << endl;
            double d = static_cast<double>(atoi(upper.c_str())) / static_cast<double>(atoi(down.c_str()));
            cout << d << endl;
        } else if (str1.find(".") != string::npos) {
            string left = str1.substr(0, str1.find("."));
            string right = str1.substr(str1.find(".") + 1, str1.size() - left.size() - 1);
            cout << left << endl;
            cout << right << endl;
            double d = static_cast<double>(atoi(left.c_str())) +
                       static_cast<double>(atoi(right.c_str())) / pow(10, right.size());
            cout << d << endl;
        } else {
            double d = static_cast<double>(atoi(str1.c_str()));
        }
    } else {
        cout << "str1 is not a number: " << str1 << endl;
    }

    return 1;
}
