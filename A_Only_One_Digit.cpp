#include <bits/stdc++.h>

using namespace std;
int main(){
    int inp;
    cin>>inp;
    for (int i = 0; i < inp; i++)
    { 
        int num;
        cin>>num;
        int temp=1e9;
        int len = floor(log10(abs(num))) + 1;
        for(int i=0;i<len;i++){
            if(temp>num%10){
               temp=num%10;
            }
            num=num/10;
        }
        cout<<temp<<endl;
    }
    return 0;
