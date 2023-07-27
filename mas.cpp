#include<bits/stdc++.h>
using namespace std;

int helper(int n){
    if(n == 0) return 1;
    int cur = sqrt(n);
    if((n - cur*cur) <=  ((cur+1)*(cur+1) - n)){
        return (n - cur*cur);
    }
    else return  ((cur+1)*(cur+1) - n);
}

int main(){
     int k = helper(30);
     cout<<k;
     return 0;
}