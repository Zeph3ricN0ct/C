#include <stdio.h>

int main() {
    float Q,k,cost;
    
    printf("请输入每小时排水量 Q (m³/h) 和单位造价系数 k：\n");
    scanf("%f %f", &Q, &k);
    
    // 判断是否合理数字
    if (Q <= 0 || k < 0) {
        printf("输入参数无效，无法进行工程决策；\n");
    } else {
        cost = Q * k;
        // 保留1位小数输出
        printf("工程预估成本为：%.1f\n", cost);
        
        if (cost < 5000) {
            printf("选用简易管道方案；\n");
        } else if (cost < 20000) {
            printf("选用标准管道方案；\n");
        } else if (cost < 50000) {
            printf("选用加强型管道方案；\n");
        } else {
            printf("建议重新规划工程方案。\n");
        }
    }
    
    return 0;
}