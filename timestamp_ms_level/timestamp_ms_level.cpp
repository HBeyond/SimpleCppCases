#include <sys/timeb.h>
#include <time.h>
#include <iostream>
using namespace std;
int main() {
    long long time_last;
    time_last = time(NULL);  //总秒数
    struct timeb t1;
    ftime(&t1);
    long long time;
    //    strTime.Format(_T("%lldms"), t1.time * 1000 + t1.millitm);  //总毫秒数
    time = t1.time * 1000 + t1.millitm;
    cout << time << endl;
    return 0;
}
