#include<iostream>
using namespace std;

int squarefIND(int x){
    int s = 0;
    int e = x;
    int ans = 0;

    while(s<=e){
        int mid = s+ (e-s) /2;
        if(mid*mid <= x){
            ans = mid;
            s = mid+1;
        }
        else if(mid*mid > x){
            e = mid-1;
        }
    }
    return ans;
}

double Myprsion(int x){
    double sqrt = squarefIND(x);

    double step = 0.1;
    int precision = 10;

    for(int i=0; i<precision; i++){
        double j = sqrt;
    
      while(j*j <= x){
        sqrt = j;
        j += step;
       }
        step = step / 10;
    }

    

    return sqrt;
}

   



int main(){
    int x = 51;
    double sqrt = Myprsion(x);
    // cout<<sqrt<<endl;
    printf("%0.10f", sqrt);
}