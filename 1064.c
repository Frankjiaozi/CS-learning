#include <stdio.h>
#include <ctype.h>

int main() {
    int a = 0, b = 0, c = 0, d = 0; // 字母、数字、空格、其他字符计数器
    int ch;                         // 用int接收getchar()，兼容EOF(-1)

    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            // 遇到换行符，输出当前行的统计结果并重置计数器
            printf("%d %d %d %d\n", a, b, c, d);
            a = b = c = d = 0;
        } else {
            // 逐字符分类统计
            if (isalpha((unsigned char)ch)) {
                a++; // 字母
            } else if (isdigit((unsigned char)ch)) {
                b++; // 数字
            } else if (ch == ' ') {
                c++; // 空格（仅' '，不含换行/制表符）
            } else {
                d++; // 其他可打印字符
            }
        }
    }

    // 处理最后一行无换行符的边界情况
    if (a != 0 || b != 0 || c != 0 || d != 0) {
        printf("%d %d %d %d\n", a, b, c, d);
    }

    return 0;
}