#include<iostream>
// Take marks of 3 subjects and print total marks
using namespace std;

int main(){
    int a,b,c,d,e;

    cout << "marks of 1st subject: ";
    cin >> a;
    cout << "marks of 2nd subject: ";
    cin >> b;
    cout << "marks of 3rd subject: ";
    cin >> c;
    cout << "marks of 4td subject: ";
    cin >> d;
    cout << "marks of 5th subject: ";
    cin >> e;


    

     int total = a + b + c + d + e;
     int average = total/5;

    cout << " total marks of 5 subjects are: " << total;
    cout << " average marks of 5 subjects are: " << average;
    


    return 0;



}