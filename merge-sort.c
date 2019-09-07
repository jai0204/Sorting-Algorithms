/*Merge Sort - space: O(n) time: O(nlogn)*/
#include<stdio.h>

void Merge(int a[],int l,int mid,int r)
{
    int nl=mid-l+1;
    int nr=r-mid;

    int left[nl],right[nr];
    for(int i=0;i<nl;i++)left[i]=a[l+i];
    for(int i=0;i<nr;i++)right[i]=a[mid+1+i];

    int i=0,j=0,k=l;

    while(i<nl&&j<nr){
        if(left[i]<=right[j])
            a[k++]=left[i++];
        else
            a[k++]=right[j++];
    }
    while(i<nl) a[k++]=left[i++];
    while(j<nr) a[k++]=right[j++];
}
void MergeSort(int a[],int l,int r)
{
    if(l>=r)
        return;

    int mid=l+(r-l)/2;

    MergeSort(a,l,mid);
    MergeSort(a,mid+1,r);

    Merge(a,l,mid,r);
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
    MergeSort(a,0,n-1);
    printf("\nSorted array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");

    getch();
    return 0;
}
