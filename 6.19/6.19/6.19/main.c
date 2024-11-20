#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int rolls = 36000; // 投擲次數
    const int minSum = 2;    // 骰子點數總和的最小值
    const int maxSum = 12;   // 骰子點數總和的最大值
    const int size = maxSum - minSum + 1; // 陣列的大小 (範圍從 2 到 12)
    int frequencies[11/*size*/] = { 0 }; // 用來記錄各骰子點數和的次數
    // 初始化亂數種子
    srand((unsigned int)time(NULL));
    // 模擬擲骰子
    for (int i = 0; i < rolls; ++i) {
        int die1 = rand() % 6 + 1; // 隨機產生 1 到 6
        int die2 = rand() % 6 + 1; // 隨機產生 1 到 6
        int sum = die1 + die2;     // 計算兩個骰子的總和
        frequencies[sum - minSum]++; // 更新對應的次數 (將索引對應到 0-10)
    }
    // 輸出結果
    printf("Sum\tFrequency\tPercentage\n");
    printf("-----------------------------\n");
    for (int i = 0; i < size; ++i) {
        int sum = i + minSum; // 計算對應的骰子和
        double percentage = (double)frequencies[i] / rolls * 100;
        printf("%d\t%d\t\t%.2f%%\n", sum, frequencies[i], percentage);
    }
    return 0;
}