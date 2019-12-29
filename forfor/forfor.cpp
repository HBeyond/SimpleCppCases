#include <iostream>

int main(int argc, char* argv[]) {
    int oriData[10000];
    for (int i = 0; i < 10000; ++i) {
        oriData[i] = i;
    }
    int segment_number = 10000 / 500;
    int position = 0;
    int position_flag = 0;
    for (int j = 0; j < segment_number; ++j) {
        std::cout << "j = " << j << std::endl;

        int data[500];
        for (int i = 0; i < 500; ++i) {
            data[i] = oriData[position_flag + i];
            position += 1;
        }
        position_flag = position;
        std::cout << "position_flag = " << position_flag << std::endl;
    }

    return 1;
}
