// to test if modify a struct or class after push it into a vector
// if the content will be modified too in the vector

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct AB {
    int a;
    int b;
    vector<int> ab_vec = {a, b};
};

class CD {
   public:
    // CD() {}
    CD(double& c, double& d, string& e) : c_(c), d_(d), e_(e) {
        //        c_ = c;
        //        d_ = d;
        //        cout << "c_ = " << c_ << endl;
        //        cout << "d_ = " << d_ << endl;
    }
    void SetValue(double c, double d, string e) {
        c_ = c;
        d_ = d;
        e_ = e;
    }

   private:
    double c_;
    double d_;
    string e_;
};

int main(int argc, char* argv[]) {
    // 1. struct
    //    AB ab;
    //    ab.a = 0;
    //    ab.b = 1;
    //    cout << ab.ab_vec[0] << ", " << ab.ab_vec[1] << endl;

    //    vector<AB> AB_vec = {ab};
    //    cout << AB_vec[0].a << ", " << AB_vec[0].b << endl;
    //    ab.a = 2;
    //    ab.b = 3;

    //    cout << AB_vec[0].a << ", " << AB_vec[0].b << endl;

    // 2. class
    double c = 2.0;
    double d = 3.0;
    string e = "hello";
    CD cd(c, d, e);
    vector<CD> CD_vec = {cd};
    cd.SetValue(4.0, 5.0, "h3llo");
    cout << "hello" << endl;

    return 1;
}
