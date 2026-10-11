#include <stdio.h>
#include <stdlib.h> 
int main()
{
    int n;
    printf("请输入元素个数：");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    
    
    if (arr == NULL)
    {
        printf("内存申请失败\n");
        return 1;
    }

    
    printf("请输入%d个整数：\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    double avg = (double)sum / n;
    printf("平均值 = %.2f\n", avg);

    
    free(arr);
    arr = NULL;  

    return 0;
}
