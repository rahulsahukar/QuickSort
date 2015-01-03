#include"QuickSort.h"
int Partition(int a[], int l, int h){
    int pivot = a[l];
    int i=l;
    int j=h;
    while(i<j){
    while(i<h && a[i]<=pivot){
        i++;
    }
    while(a[j]>pivot){
        j--;
    }
    if(i<j){
        int x = a[i];
        a[i]=a[j];
        a[j]=x;
    }
    }
    a[l]=a[j];
    a[j]=pivot;

    return j;
}

void QuickSort(int a[], int l, int h){
    if(l>=h) return;
    int p = Partition(a,l,h);
    QuickSort(a,l,p-1);
    QuickSort(a,p+1,h);
}

