/*Heap sort - O(nlog(n))*/

#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void MaxHeapify(int a[], int n, int i)
{
    int left = 2*i+1;
    int right = 2*i+2;
    int greatest = i;
    
    if(left < n && a[left] > a[greatest]) greatest = left;
    if(right < n && a[right] > a[greatest]) greatest = right;
    
    if(greatest != i){
        swap(&a[greatest],&a[i]);
        MaxHeapify(a, n, greatest);
    }
}

void BuildMaxHeap(int a[], int n)
{
    for(int i = (n-2)/2; i >= 0; i--)
    {
        MaxHeapify(a, n, i);
    }
}

void HeapSort(int a[], int n)
{
    BuildMaxHeap(a, n);
    
    for(int i = n-1; i >= 1; i--)
    {
        swap(&a[0],&a[n-1]);
        n--;
        MaxHeapify(a, n, 0);
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
    HeapSort(a,n);
    printf("\nSorted array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");

    getch();
    return 0;
}
