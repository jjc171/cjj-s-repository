#include <stdio.h>

int main()
{
    int num1, num2;   
    char operator;    
    double result;    

    printf("=== 简易计算器 ===\n");
    printf("请输入算式");
    
    scanf("%d %c %d", &num1, &operator, &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, (int)result);
        break;

    case '-':
        result = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, (int)result);
        break;

    case '*':
        result = num1 * num2;
        printf("%d * %d = %d\n", num1, num2, (int)result);
        break;

    case '/':

        if (num2 == 0)
        {
            printf("错误：除数不能为 0！\n");
        }
        else
        {
            
            result = (double)num1 / num2;
            printf("%d / %d = %.2f\n", num1, num2, result);
        }
        break;

    default:
        printf("错误：不支持的运算符，仅支持 + - * /\n");
        break;
    }

    return 0;
}
