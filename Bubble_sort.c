#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of an Array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter values\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("input value are:\n");
    for (int i = 0; i < n; i++)
    {
    printf("%d ",arr[i]);
       
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    printf("\nArray after sorting\n");
    for (int i = 0; i < n; i++)
    {
    printf("%d ",arr[i]);
       
    }
    

    
    return 0;
}