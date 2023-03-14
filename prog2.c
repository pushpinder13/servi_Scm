
#include <stdio.h>
int main()
{

    int a[5]={1,124,7,5,87};
    int temp=a[4];
    for (int i = 4; i < 0; i++)
    {
       a[i]=a[i-1];
    }
    a[0]=temp;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    
}
