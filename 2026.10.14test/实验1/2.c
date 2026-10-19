#include <stdio.h>
int main()
{
    int i, n, sum;          // 注意：sum 未初始化
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum = sum + i;      // 单步跟踪此处，观察 sum 的值
    printf("Sum = %d\n", sum);
    return 0;
}
