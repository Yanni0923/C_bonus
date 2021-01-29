#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16;

    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16);
    printf("%2d %2d %2d %2d\n", num1, num2, num3, num4);
    printf("%2d %2d %2d %2d\n", num5, num6, num7, num8);
    printf("%2d %2d %2d %2d\n", num9, num10, num11, num12);
    printf("%2d %2d %2d %2d\n\n", num13, num14, num15, num16);

    int rowSum1 = num1 + num2 + num3 + num4;
    int rowSum2 = num5 + num6 + num7 + num8;
    int rowSum3 = num9 + num10 + num11 + num12;
    int rowSum4 = num13 + num14 + num15 + num16;

    int columnSum1 = num1 + num5 + num9 + num13;
    int columnSum2 = num2 + num6 + num10 + num14;
    int columnSum3 = num3 + num7 + num11 + num15;
    int columnSum4 = num4 + num8 + num12 + num16;

    int diagonalSum1 = num1 + num6 + num11 + num16;
    int diagonalSum2 = num4 + num7 + num10 + num13;

    printf("Row sums: %2d %2d %2d %2d\n", rowSum1, rowSum2, rowSum3, rowSum4);
    printf("Column sums: %2d %2d %2d %2d\n", columnSum1, columnSum2, columnSum3, columnSum4);
    printf("Diagonal sums: %2d %2d", diagonalSum1, diagonalSum2);
    return 0;
}