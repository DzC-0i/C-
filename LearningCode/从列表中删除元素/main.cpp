#include <iostream>
#include <list>
#include <cstring>
using namespace std;

int main()
{
    int n;
    list<string> a;
    cin >> n;
    while (n--) {
        char t;
        string r, b = "";
        getchar();
        while (true) {
            t = getchar();
            if (t != ' ' && t != '\n')
                b = b + t;
            else {
                a.push_back(b);
                b = "";
            }
            if (t == '\n')
                break;
        }
        cin >> r;
        a.remove(r);
        list<string>::iterator it;
        for (it = a.begin(); it != a.end(); ++it) {
            cout << *it;
            if (it != --a.end())
                cout << " ";
        }
        cout << endl;
        a.clear();
    }
    return 0;
}
