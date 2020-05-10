#include <fstream>
#include <iostream>
#include <string>
#include "nlohmann/json.hpp"

using json = nlohmann::json;
using namespace std;

int main(int argc, char* argv[]) {
    json json_file;

    json_file["Outer"]["middle"]["inner"] = 23;

    //    for (int var = 0; var < 10; ++var) {
    //        out.emplace_back("middle");
    //    }

    // output
    fstream output_file(
        "/home/beyoung/Desktop/mac-ubuntu-share/work/0_Mine/1_C++/0_SimpleTest/SimpleCppCases/"
        "nlohmannJsonMultipleLayersNodeCreation/result.json",
        ios::out);
    if (!output_file.is_open()) {
        cout << "save file cannot be openned" << endl;
        return 0;
    }
    output_file << json_file.dump();
    output_file.close();
    return 1;
}
