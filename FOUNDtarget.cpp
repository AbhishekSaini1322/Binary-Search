#include<iostream>
using namespace std;

int Foundtarget(int arr[], int n, int target){
    int start = 0;
    int end = n-1;

    int mid = start + (end-start)/2;

    while(start <= end){
        if(target == arr[mid]){
            return mid;
        }
        else if(target < arr[mid]){
            // left me jao
            end = mid-1;
        }
        else if(target > arr[mid]){
            // right me jao
            start = mid+1;
        }
        // bhul jaata hu
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int n = 9;
    int target = 440;
    int ans = Foundtarget(arr,n,target);

    if(ans == -1){
        cout<<"Target not found"<<endl;
    }
    else{
        cout<<"Target found at index: "<<ans<<endl;
    }
}