/*This program will be make by Harsh Soni*/
/*This program is bubble short*/
#include<stdio.h>

void bubbleshort(int a[],int n)
 {
    int temp;
    for(int i=0;i<n;i++)/*Traversing the array starting to the end*/
    {
        for(int j=i+1;j<n;j++)/*Traversing the array to the next element*/
        {
            if(a[j]<a[i])/*when next element is grater less than previous one than we interchange 
                          the Element*/
            {
                  temp=a[j];
                  a[j]=a[i];
                  a[i]=temp;
            }
        }
    }/*When the loop end the all array will be shorted the complexity of bubble short 
      algorithm is O(1)*/
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
             
 }
int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubbleshort(a,n);/*this is a function of bubble short*/
    return 0;
}

