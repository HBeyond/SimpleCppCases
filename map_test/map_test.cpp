#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

enum class CameraType { Sensing_JAX52202, Sensing_JAX92701 };

int main(int argc, char* argv[]) {
    map<string, CameraType> dictionary;
    dictionary.insert({"Sensing_JAX52202", CameraType::Sensing_JAX52202});
    dictionary.insert({"Sensing_JAX92701", CameraType::Sensing_JAX92701});

    cout << static_cast<int>(dictionary.at("Sensing_JAX92701")) << endl;

    return 1;
}
