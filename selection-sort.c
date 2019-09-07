/*Selection sort - O(n^2)*/
#include<stdio.h>

void SelectionSort(int a[],int n)
{
    int i,j,imin;
    for(i=0;i<n-1;i++){    // runs n-1 times
        imin=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[imin])
                imin=j;
        }
        if(imin!=i){
            int temp=a[i];
            a[i]=a[imin];
            a[imin]=temp;
        }
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
    SelectionSort(a,n);
    printf("\nSorted array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");

    getch();
    return 0;
}
