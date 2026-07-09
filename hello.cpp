#include<iostream>
using namespace std;
int main(){
int n = 7,i,j;
i = 0;
j = 1;
int arr[7] = {2,2,3,3,6,9,9};
while(j<n){
    if(arr[j] != arr[j]){
        i++;
        arr[i] = arr[j];
    }

    j++;
}
    cout << "unique elements are : ";
    for(int k=0; k<=i ; k++){
        cout << arr[k] <<" ";
    }
    cout << " \nlength = " << i+1;
    return 0;
}

    
 
 




