// to test if modify a struct or class after push it into a vector
// if the content will be modified too in the vector

#include <iostream>
#include <string>
#include <vector>
#include "gflags/gflags.h"
#include "glog/logging.h"

using namespace std;

int add(int a, int b) { return a + b; }

int main(int argc, char* argv[]) {
    google::InitGoogleLogging(argv[0]);
    google::ParseCommandLineFlags(&argc, &argv, true);
    FLAGS_logtostderr = true;
    FLAGS_minloglevel = 1;

    int a = 0;
    if (a == 0) {
        LOG(ERROR) << "a = 0";
        cout << "please modify the value of a" << endl;
        int c = add(2, 3);
        cout << "c = " << c << endl;
    }

    google::ShutDownCommandLineFlags();
    google::ShutdownGoogleLogging();
    return 1;
}
