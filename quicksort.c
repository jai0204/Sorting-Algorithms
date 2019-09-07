/*QuickSort - space: worst-O(n), avg/best-O(logn); time: worst-O(n^2), avg/best-O(nlogn)*/
#include<stdio.h>
#include<stdlib.h>

int Partition(int a[],int start,int end)
{
    int pivot=a[end],i,temp;
    int pindex=start;
    for(i=start;i<=end-1;i++){
        if(a[i]<=pivot){
            temp=a[i];
            a[i]=a[pindex];
            a[pindex]=temp;
            pindex++;
        }
    }
    temp=a[end];
    a[end]=a[pindex];
    a[pindex]=temp;

    return pindex;
}

int RandomizedPartition(int a[],int start,int end)
{
    int pi=start+((rand())%(end-start+1));
    int temp=a[end];
    a[end]=a[pi];
    a[pi]=temp;
    return Partition(a,start,end);

}

void QuickSort(int a[],int start,int end)
{
    if(start<end){
        int pindex=RandomizedPartition(a,start,end);
        QuickSort(a,start,pindex-1);
        QuickSort(a,pindex+1,end);
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
    QuickSort(a,0,n-1);
    printf("\nSorted array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");

    getch();
    return 0;
}
