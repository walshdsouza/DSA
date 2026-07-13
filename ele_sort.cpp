#include <iostream>
using namespace std;

int  main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Enter element "<<i+1<<endl;
        cin>>arr[i];
    }
    int choice;
    
    cout<<"Choose one operation:"<<endl;
    cout<<"1. Bubble Sort"<<endl;
    cout<<"2. Selection Sort"<<endl;
    cout<<"3. Insertion Sort"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"Choose one: ";
    cin >>choice;

    switch(choice){
        case 1:
            for(int i=0; i<n-1; i++){
                for(int j=0; j<n-i-1; j++){
                    if(arr[j]>arr[j+1]){
                        int temp=arr[j+1];
                        arr[j+1]=arr[j];
                        arr[j]=temp;
                    }
                }
            }
            cout<<"Sorted array using Bubble Sort: ";
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            break;
        case 2:
            for(int i=0; i<n-1; i++){
                int smallestidx=i;
                for(int j=i+1; j<n; j++){
                    if(arr[j]<arr[smallestidx]){
                        smallestidx=j;
                    }
                }
                swap(arr[i], arr[smallestidx]);
            }    
            cout<<"Sorted array using Selection Sort: ";
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            break;

        case 3:
            for(int i=1; i<n; i++){
                int curr=arr[i];
                int prev=i-1;
                while(prev>=0 && arr[prev]>curr){
                    arr[prev+1]=arr[prev];
                    prev--;
                }
                arr[prev+1]=curr;
            }
            cout<<"Sorted array using Insertion Sort: ";
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            break;
            
        default:
            cout<<"Invalid choice."<<endl;
            break;    
    }
    return 0;
    
}