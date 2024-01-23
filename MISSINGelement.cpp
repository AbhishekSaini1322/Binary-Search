#include<iostream>
using namespace std;

int Findmissingelement(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end){
        int diff = arr[mid] - mid;

        if(diff == 1){
            // right me jao
            start = mid+1;
        }
        else{
            // ans store karo
            ans = mid;
            // left me jao
            end = mid-1;
        }
        mid = start + (end - start) / 2;
    }

    if(ans +1 == 0){
        return n+1;
    }
    return ans+1;
}

int main(){
    int arr[] = {0,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,18,19,20,21};
    int n = 20;
    cout<<"Missing element is: "<<Findmissingelement(arr,n);
    cout<<endl;
}