#include <iostream>
/**
 * 输入一个可能包含若干（至少1个）单词的句子（可以假设每个单词之间有且仅有一个空格，标点符号视为单词的组成部分），
 * 输出每个单词逆置后的英文句子（参看样例输出）。
 * @首先输入一个正整数T，表示测试数据的组数，然后是T组测试数据。每组测试数据输入一个字符串（长度不超过80），表示英文句子。
 * @对于每组测试，输出每个单词逆置后的英文句子。
 * ##1
     emoclew era uoY
 * ##welcome are You
 * 备注：在进入循环后直接输入回车也算一次循环
 */
using namespace std;
void swap(char *a);
int main() {
    char str[100], ch;
    int n;
    cin >> n;
    getchar();                 //至关重要的一点，这个用来清空缓存区的一个回车键或者一个空格键
    while (n--) {
        for (int i = 0; i < 100; i++) {
            ch = getchar();
            str[i] = ch;
            if (ch == '\n')
                break;
        }
        swap(str);
        for (int i = 0; i < 100; i++) {
            cout << str[i];
            if (str[i] == '\n')
                break;
        }
    }
    return 0;
}

void swap(char *a) {
    char t;
    int b = 0, e, i;
    for (i = 0; i < 100; i++) {
        if (a[i] == ' ' || a[i] == '\n') {
            e = i - 1;
            while (b < e) {
                t = a[b];
                a[b] = a[e];
                a[e] = t;
                b++;
                e--;
            }
            b = i + 1;
            if (a[i] == '\n')
                break;
        }
    }
}