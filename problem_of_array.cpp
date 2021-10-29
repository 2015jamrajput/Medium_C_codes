#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k,n,q;
    cin>>n>>q;
    int a[n][n];
    for(i=0;i<n;i++){
        cin>>k;
        for(j=0;j<k;j++)
        cin>>a[i][j];
    }
    while(q>0){
        cin>>i>>j;
        cout<<a[i][j]<<endl;
        q--;
    } 
    return 0;
}
