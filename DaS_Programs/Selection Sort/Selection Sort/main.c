#include <stdio.h>

int main()
{
    int arr[10],n,i,j,temp,min;
    
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    
    printf("Enter the elements of the array: \n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //Loop for totat iteration count
    for (i=0; i<n-1; i++)
    {
        min = i;
       //For finding the min value holding index!
        for (j=i+1; j<n; j++)
        {
            if (arr[min]>arr[j])
            {
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        
    }
    
    printf("The sorted array: \n");
    for (i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
