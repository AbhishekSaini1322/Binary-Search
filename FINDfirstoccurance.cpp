#include<iostream>
using namespace std;

int Firstoccurance(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start) / 2;
    int ans = 0;

    while(start <= end){
        if(target == arr[mid]){
            // ans store karo
            ans = mid;
            // left me jao
            end = mid-1;
        }
        else if(target > arr[mid]){
            // right me jao
            start = mid+1;
        }
        else if(target < arr[mid]){
            // left me jao
            end = mid-1;
        }
       mid = start + (end - start) / 2;
    }
    return ans;
}

int main(){
     int arr[] = {10,30,30,40,50,60,70,80,90};
     int n = 9;
     int target = 30;
     int ans = Firstoccurance(arr,n,target);

    
    if(ans == -1){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Found at index: "<<ans<<endl;
    }
}