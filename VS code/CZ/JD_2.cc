#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
const int MAXN=1e5+5;
using namespace std;

int n;
vector<long> a,b;

int main(){
    cin>>n;
    for(int i=0;i<n;++i){
        int tmp=0;
        cin>>tmp;
        a.push_back(tmp);
    }
    for(int i=0;i<n;++i){
        int tmp=0;
        cin>>tmp;
        b.push_back(tmp);
    }
    
    long long sum1=0,sum2=0;
    for(int i=0;i<n;++i){
        sum1+=a[i];
        sum2+=b[i];
    }
    
    if(sum1!=sum2){
        cout<<"-1"<<endl;
        return 0;
    }
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    
    long long ans=0;
    long long ptra=0,ptrb=0;
    while(ptra<n||ptrb<n){
        if(a[ptra]=b[ptrb]){
           ptra++;ptrb++;
        }
        else if(a[ptra]<b[ptrb]){
           while(a[ptra]>=b[ptrb]){
            ans++;
            a[ptra]++;
            ptrb++;
           }
        }
        else{
            while(a[ptra]>=b[ptrb]){
            ans++;
            a[ptrb]++;
            ptra++;
           }

        }
        
        
    }
    
    cout<<ans<<endl;   
    
    
    return 0;
}





/*
4
1 2 1 2
3 4 3 4



4
1 2 3 4
1 2 2 5


4
8 2 22 4
1 26 2 7



输出
for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
for(int i=0;i<n;++i){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    

*/