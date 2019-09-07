/*Bubble sort - O(n^2)*/
#include<stdio.h>

void BubbleSort(int a[],int n)
{
    int i,j,flag;
    for(i=0;i<n-1;i++){
        flag=0;
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0) break;
    }
}

int main()
{
    int i,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    BubbleSort(a,n);
    printf("\nSorted array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");

    getch();
    return 0;
}
