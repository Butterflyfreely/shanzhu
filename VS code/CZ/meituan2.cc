#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, T;
    cin >> n >> T;
    vector<int> vec;
    for(int i=1;i<=n;i++)vec.push_back(i);
    vector<int> vec_t(n,0);
    
    vector<pair<string,int>> op;
   for(int i=0;i<T;i++){
     string opt;int num=0;
     cin>>opt>>num;
     pair<string,int> a={opt,num};
     op.push_back(a);
   }
  
  for(auto c:op){
    if(c.first=="Q"){
      int k=c.second;
      while(vec_t[k]==1){
        k--;
      }
      cout<<k<<" ";
      
      int l=c.second;
      while(vec_t[l]==1){
        l++;
      }
      cout<<l<<endl;
      
    }else if(c.first=="L"){
      vec_t[c.second]=1;
      if(c.second>0)
      vec_t[c.second-1]=1;
    }else{
      vec_t[c.second]=1;
      if(c.second<op.size())
      vec_t[c.second+1]=1;
    }
  }

    return 0;
}