#include <stdio.h>

int main(void)
{
    //偶位數字和
    //奇位數字和
    //偶位數字和*3 + 奇位數字和
    //-1
    //除以10留餘數
    //9-此餘數，得Check digit

    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13;
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13);
    int oddSum = num1 + num3 + num5 + num7 + num9 + num11;
    int evenSum = num2 + num4 + num6 + num8 + num10 + num12;
    //printf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13);
    int checkDigit = evenSum * 3 + oddSum;
    //printf("%d,%d", evenSum, oddSum);
    checkDigit -= 1;
    checkDigit %= 10;
    checkDigit -= 9;
    checkDigit *= -1;

    printf("Check digit: %d\n", checkDigit);



    return 0;
}