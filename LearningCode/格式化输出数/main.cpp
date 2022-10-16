#include <iostream>
//每行输出10个数，相邻数字中间用1个空格作为分隔符。 提示：行首无空格，每行的最后一个数字之后不加空格。
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << i + 1;
        if ((i + 1) % 10 != 0 && i + 1 != n)
            cout << " ";
        if ((i + 1) % 10 == 0)
            cout << endl;
    }
    return 0;
}
