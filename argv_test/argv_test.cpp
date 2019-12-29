// to test if modify a struct or class after push it into a vector
// if the content will be modified too in the vector

#include <algorithm>
#include <cstring>
#include <exception>
#include <iostream>
#include <vector>

using namespace std;

enum class CameraType { Sensing_JAX52202, Sensing_JAX92701 };

int main(int argc, char* argv[]) {
    cout << "argc = " << argc << endl;
    for (int i = 0; i < argc; ++i) {
        cout << "argv[" + to_string(i) + "] = " << argv[i] << endl;
    }
    string cameraType;
    if (argc == 2) {
        cameraType = argv[1];
    } else {
        throw invalid_argument("camera type must be input");
    }
    if (!strcmp(cameraType.c_str(), "Sensing_JAX52202")) {
        cout << "camera type is Sensing JAX52202" << endl;
    } else if (!strcmp(cameraType.c_str(), "Sensing_JAX92701")) {
        cout << "camera type is Sensing JAX92701" << endl;
    } else {
        throw invalid_argument(cameraType + " is not a supportable type");
    }
    return 1;
}
