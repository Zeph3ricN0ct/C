#include <stdio.h>

int main() {
    int N;
    int w, q, b, s, g; // 万、千、百、十、个
    int sum;
    printf("请输入一个5位正整数:\n");
    scanf("%d", &N);
    // 
    w = N/ 10000;          // 万位
    q = (N / 1000) % 10;    // 千位
    b = (N / 100) % 10;     // 百位
    s = (N / 10) % 10;      // 十位
    g = N % 10;             // 个位
    sum = w + q + b + s + g;
    printf("分离,万=%d, 千=%d, 百=%d, 十=%d, 个=%d\n", w, q, b, s, g);
    printf("和：%d\n", sum);
    return 0;
}