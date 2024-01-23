#include<iostream>
using namespace std;

int NearlySortedArray(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    
    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == target)
           return mid;
        if(mid+1 <= n && arr[mid+1] == target)
            return mid+1;
        if(mid-1 >= 0 && arr[mid-1] == target)
            return mid-1;

        if(arr[mid] > target)
            end = mid - 2;
        else
            start = mid + 2;        
    }
    return -1;
}

int main(){
    int arr[] = {20,10,30,50,40,70,60};
    int n = 7;
    int target = 10;

    int ans  = NearlySortedArray(arr,n,target);

    if(ans == -1){
        cout<<"ELEMENT NOT FOUND"<<endl;
    }
    else{
        cout<<"ELEMENT FOUND AT INDEX: "<< ans << endl;
    }
}