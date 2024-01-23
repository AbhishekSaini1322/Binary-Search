#include<iostream>
using namespace std;

int Findoddoccuraningele(int arr[],int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start) /2;

    while(start <= end){
        // single element case
        if(start == end){
            return arr[start];
        }

        if(mid & 1){
            // ODD case
            if(mid-1 > 0 && arr[mid] == arr[mid-1]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        else{
            // EVEN case
            if(mid+1 < n && arr[mid] == arr[mid+1]){
                start = mid+2;
            }
            else{
                // ya to right part pr hu
                // ya answer pr hu 
                end = mid;
            }
        }
        mid = start + (end - start) /2;
    }
    return -1;
}

int main(){
    int arr[] = {2,2,3,3,6,6,10,10,1,1,3};
    int n = 11;

    int ans  = Findoddoccuraningele(arr,n);

    if(ans == -1){
        cout<<"ODD OCCURING ELEMENT NHI HAI SAARE PAIR HAI"<<endl;
    }
    else{
        cout<<"ODD OCCURANING ELEMENT IS: "<<ans<<endl;
    }

    return 0;
}