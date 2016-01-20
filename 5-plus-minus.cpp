#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    float n, negative=0, positive=0, zero=0;
    cin >> n;
    vector<float> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for(int arr_i = 0;arr_i < n;arr_i++){
        if (arr[arr_i] > 0)
    		positive++;
    	else if (arr[arr_i] < 0)
    		negative++;
    	else
    		zero++;
	}
    cout << positive/n <<endl;
    cout << negative/n <<endl;
	cout << zero/n <<endl;
    return 0;
}
