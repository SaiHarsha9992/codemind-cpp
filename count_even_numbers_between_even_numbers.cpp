#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v;
    int a = 0;
    for (int  i = 0 ; i < n ; i++){
        cin >> a;
        v.push_back(a);
    }
    int l = 0, r = 0;
    for(int i = n-1; i>=0; i--){
        if(v[i]%2==0){
            r = i;
            break;
        }
    }
    for(int j = 0; j < n; j++){
            if(v[j]%2==0){
                l = j;
                break;
            }
    }
    int c = 0;
    for(int i = l+1 ; i < r; i++){
        if (v[i]%2==0){
            c += 1;
        }
    }
    cout<<c<<endl;
}