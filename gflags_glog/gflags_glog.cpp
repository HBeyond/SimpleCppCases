#include <iostream>
#include "gflags/gflags.h"
#include "glog/logging.h"

// set parameters and default values
DEFINE_string(name, "Li Lei", "name of student");
DEFINE_int32(age, 12, "age of student");
DEFINE_string(subject, "Chinese", "subject to learn");
DEFINE_bool(isVip, false, "if this student is a vip");

using namespace std;

// validation functions
// validation function for age
static bool ValidateAge(const char* flagname, int32_t val) {
    //    cout << val << endl;
    if (val >= 12 && val <= 18) {
        return true;
    }
    LOG(ERROR) << "age of student must be between 12 and 18";
    return false;
}
DEFINE_validator(age, &ValidateAge);
// validation function for subject
static bool ValidateSubject(const char* flagname, const string& sub) {
    if (sub.find("Music") != string::npos) {
        LOG(ERROR) << "We cannot teach Music";
        return false;
    }
    return true;
}
DEFINE_validator(subject, &ValidateSubject);

//
int main(int argc, char* argv[]) {
    // init glog
    google::InitGoogleLogging(argv[0]);
    // switch log out to true=stderr(command line) or false=LogFile
    FLAGS_logtostderr = true;
    // set rank of log out, 0=info, 1=warning, 2=error, 3=fatal
    FLAGS_minloglevel = 0;
    // set the glog output destination folder if FLAGS_logtostderr is set as false the log will be there
    FLAGS_log_dir = "/home/beyoung/Desktop/mac-ubuntu-share/work/0_Mine/1_C++/0_SimpleTest/SimpleCppCases/gflags_glog";
    // set help message for --help
    google::SetUsageMessage("./gflags_glog --name \"x xx\" --age xxx ---subject xxx --isVip/noisVip ");
    // set version for --version
    google::SetVersionString("3.1.3");
    // release the argv and set argc to 1 to save memory
    google::ParseCommandLineFlags(&argc, &argv, true);

    // check name
    if (FLAGS_name.empty()) {
        LOG(FATAL) << "Please input the name";
    }

    // check age
    bool age_bool = false;
    if (FLAGS_age > 12) {
        age_bool = true;
    }
    if (age_bool) {
        LOG(INFO) << "student register successfully";
        LOG(INFO) << "name of student is: " << FLAGS_name;
        LOG(INFO) << "age of student is: " << FLAGS_age;
        LOG(INFO) << "subject of student is: " << FLAGS_subject;
        // glfags cannot build a vector, but you can use string like "Chinese, English, Mathematics" and then to split
        // it
        if (FLAGS_subject.find("Chinese") != string::npos) LOG(INFO) << "this student want to learn Chinese";
        if (FLAGS_subject.find("English") != string::npos) LOG(INFO) << "this student want to learn English";
        if (FLAGS_subject.find("Mathematics") != string::npos) LOG(INFO) << "this student want to learn Mathematics";
        if (FLAGS_subject.find("Physics") != string::npos) LOG(WARNING) << "Physics teacher teach by internet";
        if (FLAGS_isVip) {
            LOG(INFO) << "this student is vip";
        } else {
            LOG(INFO) << "this student is not vip";
        }
    } else {
        LOG(ERROR) << "age of student must between 12 and 18";
    }

    // close gflags
    google::ShutDownCommandLineFlags();
    // close glog
    google::ShutdownGoogleLogging();
    return 1;
}
