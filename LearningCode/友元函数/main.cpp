#include <iostream>
using namespace std;

class student {
public:
    void get(int num_, double score_);
    friend double average(student *p, int count);
private:
    int num;
    double score;
};
void student::get(int num_, double score_) {
    num = num_;
    score = score_;
}

double average(student *p, int count) {
    double sum = 0;
    for (int i = 0; i < count; i++) {
        sum += p[i].score;
    }
    return sum / count;
}

int main()
{
    student stu[100];
    int count = 0;
    double n, s;
    while (cin >> n && n != 0 && n >= 00001 && n <= 99999) {
        cin >> s;
        stu[count].get(n, s);
        count++;
    }
    cout << average(stu, count) << endl;
    return 0;
}
