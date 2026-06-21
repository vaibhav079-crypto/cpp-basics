#include<iostream>
using namespace std;
int main(){
int i,j;
i = 0;
j = 6;
int arr[7] = {1,2,4,6,8,10,15};
 int target = 12;
while(i<j){
    int sum = arr[i] + arr[j];
    if(sum == target){
        cout << "indexes are:" << i+1 << " " << j+1;
        break;
    }
    else if(sum<target){
        i++;
    }
    else if(sum>target){
        j--;
    }
}
return 0;
}
    

    
    
 
 




