#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int rolls = 36000; // ���Y����
    const int minSum = 2;    // ��l�I���`�M���̤p��
    const int maxSum = 12;   // ��l�I���`�M���̤j��
    const int size = maxSum - minSum + 1; // �}�C���j�p (�d��q 2 �� 12)
    int frequencies[11/*size*/] = { 0 }; // �ΨӰO���U��l�I�ƩM������
    // ��l�ƶüƺؤl
    srand((unsigned int)time(NULL));
    // �����Y��l
    for (int i = 0; i < rolls; ++i) {
        int die1 = rand() % 6 + 1; // �H������ 1 �� 6
        int die2 = rand() % 6 + 1; // �H������ 1 �� 6
        int sum = die1 + die2;     // �p���ӻ�l���`�M
        frequencies[sum - minSum]++; // ��s���������� (�N���޹����� 0-10)
    }
    // ��X���G
    printf("Sum\tFrequency\tPercentage\n");
    printf("-----------------------------\n");
    for (int i = 0; i < size; ++i) {
        int sum = i + minSum; // �p���������l�M
        double percentage = (double)frequencies[i] / rolls * 100;
        printf("%d\t%d\t\t%.2f%%\n", sum, frequencies[i], percentage);
    }
    return 0;
}