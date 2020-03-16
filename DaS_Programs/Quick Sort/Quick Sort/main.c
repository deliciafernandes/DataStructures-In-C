#include <stdio.h>
#define size 100

int pivot,pivot_index,temp,i,j;     //pivot takes pivot value
void quicksort(int arr[],int beg,int end);
int partion(int arr[],int l,int u);
int main()
{
    int arr[size],n,i;
    
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    
    printf("Enter the elements of the array: \n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    quicksort(arr,0,n-1);
    
    printf("The sorted array: \n");
    for (i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}

//Code for quick sort
void quicksort(int arr[],int beg,int end)
{
    if (beg<end)
    {
        pivot_index=partion(arr,beg,end);
        quicksort(arr,beg,pivot-1);
        quicksort(arr,pivot+1, end);
    }
}

int partion(int arr[],int l,int u)
{
    pivot=arr[l];
    i=l;
    j=u;
    
    do
    {
        do
        {
            i++;
        } while (arr[i]<=pivot);
        
        while (arr[j]>pivot)
        {
            j--;
        } 
        
        //Interchange of ith and jth element
        if (i<j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }while(i<j);
    
    //Position of j/partion found!
    //Put pivot in place of partion position
    arr[l]=arr[i];
    arr[j]=pivot;
    
    return j; //return partion position
}

//Every sorting program basic syntax
/*#include <stdio.h>
 
 int main()
 {
 int arr[10],n,i;
 
 printf("Enter the size of the array: \n");
 scanf("%d",&n);
 
 printf("Enter the elements of the array: \n");
 for (i=0; i<n; i++)
 {
 scanf("%d",&arr[i]);
 }
 
 printf("The sorted array: \n");
 for (i=0; i<n; i++)
 {
 printf("%d\t",arr[i]);
 }
 return 0;
 }
*/
