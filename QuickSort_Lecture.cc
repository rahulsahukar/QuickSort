#include<iostream>
using namespace std;

int Partition(int a[], int p, int q){
    int x = a[p];
    int i=p;
    for(int j=p+1;j<=q;j++){
        if(a[j]<=x){
            i++;
            int y = a[i];
            a[i]=a[j];
            a[j]=y;
        }
        for(int k=0;k<=q;k++)
            cout<<a[k]<<" ";
        cout<<endl;
    }
    int y = a[p];
    a[p]=a[i];
    a[i]=y;
    return i;
}

void QuickSort(int a[], int l, int h){
    if(l>=h) return;
    int p = Partition(a,l,h);
    QuickSort(a,l,p-1);
    QuickSort(a,p+1,h);
}

int main(){
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    QuickSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

