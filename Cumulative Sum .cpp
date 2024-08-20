/*

cumualtive sum: its a technique to find a sum of array element like this:
arr={1 , 2 , 3 , 4 , 5}
cs= {1 , 3 , 6 , 10 , 15} cs[i]=arr[i]+cs[i-1];

ex: you want to find a sum of interval in array 
there is two solutions

*/


//first solution: without use cumualtive sum

#include <bits/stdc++.h>
#define MA7SERE ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    MA7SERE
#ifndef ONLINE_JUDGE
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
#endif // ONLINE_JUDGE*

int n;cin>>n;
int arr[n];

for(int i=0 ; i<n; i++){
    cin>>arr[i];
}
int q=0;cin>>q;
for(int i=0,l,r,sum;i<q ; i++){
    cin>>l>>r;
    sum=0;
    for(int j=l-1 ; j<=r-1 ; j++){
        sum+=arr[j];
    }
    cout<<sum<<endl;
}
    return 0;
}

//time complexity: o(n*q)


//second solution: use cumualtive sum

#include <bits/stdc++.h>
#define MA7SERE ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
    MA7SERE
#ifndef ONLINE_JUDGE
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
#endif // ONLINE_JUDGE*

int n;cin>>n;
int arr[n];
int cs[n];

for(int i=0 ; i<n; i++){
    cin>>arr[i];
    if(i==0){
        cs[0]=arr[0];
        continue;
    }
    cs[i]=cs[i-1]+arr[i];
}
  int q=0;cin>>q;
  while(q--){
      int l,r;cin>>l>>r;
        if(l==0){cout<<cs[r];}
        else{
            cout<<cs[r]-cs[l-1];
        }
  }
    return 0;
}
//time complexity is: o(n+q)
