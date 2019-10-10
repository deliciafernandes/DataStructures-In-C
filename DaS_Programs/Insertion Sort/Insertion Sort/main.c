#include <stdio.h>

int main()
{
    int arr[10],n,i,j,key;
    
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    
    printf("Enter the elements of the array: \n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (i=1; i<n; i++)
    {
        key=arr[i];
        j=i-1;
        
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    
    printf("The sorted array: \n");
    for (i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
