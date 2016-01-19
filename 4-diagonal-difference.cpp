#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n, sum1 = 0, sum2 = 0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int i = 0;i < n;i++){
       for(int j = 0;j < n;j++){
        	cin >> a[i][j];
        	if(i==j)
        		sum1 += a[i][j];
        	if(j==n-(i+1))
        		sum2 += a[i][j];
       }
    }
    cout << abs(sum2 - sum1);
    
    return 0;
}
