#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    int fact = 1;

    for(int i = 1; i <= n; i = i + 1){
        fact = fact * i;

    }
     cout << fact;


    return 0;



}