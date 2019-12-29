#include <boost/format.hpp>
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

class base {
   public:
    base() {}
    virtual ~base() {}
    virtual void print() {}

    void out() { cout << "base out" << endl; }

   private:
    int k;
};

class test1 : base {
   public:
    test1() {}
    ~test1() override {}
    void print() override { cout << "test1 print" << endl; }
    void out() { cout << "test1 out" << endl; }

   private:
    int T1;
};

int main(int argc, char* argv[]) {
    //    test1 t1;
    //    t1.out();
    //    t1.print();

    vector<int> k = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < 3; ++i) {

    }

    return 1;
}
