#include<cstdio>
#include<algorithm>
#include<vector>
#define FOR(i, s, e) for (int i = (s); i<(e); ++i)
using namespace std;
int main() {
    vector<int> A[2];
    int num;
    FOR(i, 0, 2) {
        while (scanf("%d", &num) && num != -1) {
            A[i].push_back(num);
        }
    }
    //“二合一”归并排序
    bool first = true;
    for (size_t i0 = 0, i1 = 0; i0 < A[0].size() && i1 < A[1].size(); ) {
        if (A[0][i0] < A[1][i1]) {
            ++i0;   //升序序列，小者++才能靠近大者
        } else if (A[0][i0] > A[1][i1]) {
            ++i1;
        } else {
            if (first) {
                printf("%d", A[0][i0]);
                first = false;
            }
            else printf(" %d", A[0][i0]);
            ++i0; ++i1;
        }
    }
    if (first)
        puts("NULL"); //一个元素也没有
    else
        puts("");  //换行好看点（虽然可以省略）
    //system("pause");
    return 0;
}