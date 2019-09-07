/*Insertion sort - O(n^2)*/
#include<stdio.h>

void InsertionSort(int a[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++){
        key=a[i];
        j=i;
        while(j>0&&key<a[j-1]){
            a[j]=a[j-1];
            j--;
        }
        a[j]=key;
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
    InsertionSort(a,n);
    printf("\nSorted array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");

    getch();
    return 0;
}
