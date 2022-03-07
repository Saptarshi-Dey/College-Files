#include<iostream>
#include<Sorting.h>
using namespace std;

int main(){
    int n; char c,a;
    cout<<"Enter the Size of the Array = "; cin>>n;
    int arr[n];
    cout<<"Enter the Array : "<<endl;
    for(int i=0;i<n;i++) cin>>arr[i];
    getchar();
    cout<<"Merge or Quick (M/Q) : "; cin>>c;
    getchar();
    cout<<"Ascending or descending (A/D) : "; cin>>a;
    if(a=='A'){
        if(c=='M') Merge_SORT::ASCENDING::SORT(arr,0,n-1);
        else Quick_SORT::ASCENDING::SORT(arr,0,n-1);
    }
    else{
        if(c=='M') Merge_SORT::DESCENDING::SORT(arr,0,n-1);
        else Quick_SORT::DESCENDING::SORT(arr,0,n-1);
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" "; cout<<endl;
}

//To compile with header, save header within same folder and $ g++ -I . "Merge Sort.cpp" -o merge
