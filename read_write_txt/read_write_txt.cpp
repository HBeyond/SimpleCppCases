#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    string txt_path =
        "/home/beyoung/Desktop/mac-ubuntu-share/work/0_Mine/1_C++/0_SimpleTest/read_write_txt/kalibr_run_bashes.txt";
    string save_path = "/home/beyoung/Desktop/mac-ubuntu-share/work/0_Mine/1_C++/0_SimpleTest/read_write_txt/";

    for (size_t file_num = 0; file_num < 2; ++file_num) {
        string save_file = save_path + to_string(file_num) + "_write.txt";
        for (size_t i = 0; i < 2; ++i) {
            fstream file_read(txt_path);
            if (!file_read.is_open()) {
                cout << "can not open the reading file: " << txt_path << endl;
            }
            fstream file_write(save_file, ios::app | ios::out);
            if (!file_write.is_open()) {
                cout << "can not open the writing file: " << save_path << endl;
            }

            string line;
            while (getline(file_read, line)) {
                file_write << line << endl;
            }
            file_write.close();
            file_read.close();
        }
    }

    return 1;
}
