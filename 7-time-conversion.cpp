#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string time;
    string hour;
    int h;
    cin >> time;
    hour = time.substr(0,2);
    sscanf(hour.c_str(), "%d", &h);
 

    if((time.substr(8,10) == "PM") && (h != 12))
    	h+=12;
    	
    else if((time.substr(8,10) == "AM") && (h == 12))
    	h=(h+12)%24;
    
    if(h<10)
    	cout << "0"
    
    	
	cout << h << time.substr(2,6);	


    return 0;
}

