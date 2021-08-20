#include <bits/stdc++.h> //header that contains the most STL in c++

using namespace std;

void test(){
    
    int n; // we declare our input
    cin >> n; //we read n
    int a[n];
    for(int i = 0; i < n; i++) //there are n numbers in the sequence
    cin >> a[i];
    
    int b = a[0];
    
    for(int i = 1; i < n; i++)
    b &= a[i]; //this is we bitwise all elements, i.e., a[0] & a[1] and so on
               //another way to write would be b = b & a[1], for i = 1
}

int main(){
    
    int t;         				//the number of test cases
    cin >> t;					//we read the number t
    while(t--){					//while t-- is true, this is, not 0
        
        test();                 //we call test();
    }
    
}
