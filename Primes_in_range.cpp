#include<bits/stdc++.h>
using namespace std;
int isPrime(int n){
    if (n <= 1){
        return false;
    }
    if (n == 2){
        return true;
    }
    if (n%2 == 0){
        return false;
    }
    for(int i = 3; i <= (int)sqrt(n); i+=2){
        if (n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int start, stop;
    cin>>start>>stop;
    int c = 0;
    for(int i = start; i <= stop; i++){
        if(isPrime(i)){
            c += 1;
        }
    }
    cout<<c<<endl;
}