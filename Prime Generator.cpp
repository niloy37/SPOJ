#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main () {
int n;
long long int x,y;
cin>>n;
while(n--){
    cin>>x>>y;
    while(x<=y){
            bool f = true;
    for(int i=2;i<=sqrt(x);++i){
        if(x%i == 0){
            f = false;
            break;
        }


    }     if(x==1){
       }
           else if(f==true){
            cout<<x<<endl;
        }
        ++x;
    }

}

}
//./a.exe
