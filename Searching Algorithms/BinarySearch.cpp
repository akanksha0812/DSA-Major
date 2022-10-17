#include<iostream>
using namespace std;


int main(){
    int size,key;
    cin>>size;
    cin>>key;
    int arr[1000];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }


    int s = 0;
    int e = size-1;

    int mid = s + (e-s)/2;

    while(s<=e){
    
    //mil gya element 
    if(arr[mid]==key){
        cout<<"element is found at index "<<mid<<endl;
    }

    //go to left part
    if(arr[mid]<key){
        s=mid+1;
    }
    //go to right part
    else{
        e=mid-1;
    }
    //mid ko har baar update krna hoga tbhi vo next index m jayega
    mid = s + (e-s)/2;
    
    }
    return -1;
    
}