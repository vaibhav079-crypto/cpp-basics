#include<iostream>
#include<string>
using namespace std;
// take two numbers and print largest
int main(){
    int n,m,p;
    cin >> n >> m >> p;

    if(n > m && n > p) {
        cout << n <<" is largest";

    }
    else if(m > n && m > p){
        cout << m << "is largest";
    }


    
    else {
        cout << p <<  "is largest";
    }



    return 0;



}