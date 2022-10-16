#include <iostream>
#include <vector>
#include <set>
using namespace std;
//会排序过,单个字符的，木有什么大的实际意义
int main() {
    char n;
    vector<char> a;
    while (true) {
        cin >> n;
        if (n != '[' && n != ',' && n != ']')
            a.push_back(n);
        if (n == ']')
            break;
    }
    set<char> b(a.begin(), a.end());
    for (auto it = b.begin(); it != b.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}