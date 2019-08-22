#include<bits/stdc++.h>
using namespace std;
int main () {
int n;
cin>>n;
int a,b,reva,revb;
int sum,revsum,remsum;
int rema,remb;
while(n--){
        cin>>a>>b;
        reva=0;
        revb=0;
        revsum=0;
    while(a!=0){
        rema = a%10;
        reva = reva*10+rema;
        a/=10;
    }
while(b!=0){
    remb= b%10;
    revb = revb*10 + remb;
        b/=10;
}

    sum = reva+revb;
    while(sum!=0){
        remsum = sum%10;
        revsum = revsum*10+remsum;
        sum/=10;
    }
    cout<<revsum<<endl;
}

}
//dbhtmoyglri
