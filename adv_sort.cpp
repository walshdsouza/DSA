#include <iostream>
using namespace std;

void display(int a[], int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

//---------------- Quick Sort ----------------
int partition(int a[], int low, int high){
    int pivot=a[high], i=low-1;

    for(int j=low;j<high;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[high]);
    return i+1;
}

void quickSort(int a[],int low,int high){
    if(low<high){
        int p=partition(a,low,high);
        quickSort(a,low,p-1);
        quickSort(a,p+1,high);
    }
}

//---------------- Merge Sort ----------------
void merge(int a[],int l,int m,int r){
    int temp[100];
    int i=l,j=m+1,k=l;

    while(i<=m && j<=r){
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }

    while(i<=m) temp[k++]=a[i++];
    while(j<=r) temp[k++]=a[j++];

    for(i=l;i<=r;i++)
        a[i]=temp[i];
}

void mergeSort(int a[],int l,int r){
    if(l<r){
        int m=(l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}

//---------------- Heap Sort ----------------
void heapify(int a[],int n,int i){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;

    if(l<n && a[l]>a[largest]) largest=l;
    if(r<n && a[r]>a[largest]) largest=r;

    if(largest!=i){
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }
}

void heapSort(int a[],int n){
    for(int i=n/2-1;i>=0;i--)
        heapify(a,n,i);

    for(int i=n-1;i>0;i--){
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}

//---------------- Main ----------------
int main(){
    int n,ch;
    int a[100],b[100];

    cout<<"Enter size: ";
    cin>>n;

    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];

    do{
        cout<<"\n1. Quick Sort";
        cout<<"\n2. Merge Sort";
        cout<<"\n3. Heap Sort";
        cout<<"\n4. Exit";
        cout<<"\nEnter choice: ";
        cin>>ch;

        // Copy original array so each sort starts with same input
        for(int i=0;i<n;i++)
            b[i]=a[i];

        switch(ch){
            case 1:
                quickSort(b,0,n-1);
                cout<<"Quick Sort: ";
                display(b,n);
                break;

            case 2:
                mergeSort(b,0,n-1);
                cout<<"Merge Sort: ";
                display(b,n);
                break;

            case 3:
                heapSort(b,n);
                cout<<"Heap Sort: ";
                display(b,n);
                break;

            case 4:
                cout<<"Exiting...";
                break;

            default:
                cout<<"Invalid Choice";
        }

    }while(ch!=4);

    return 0;
}