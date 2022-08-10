#include <iostream>
#include <stdlib.h>
#include <climits>
using namespace std;


int getMax(int num[], int n){
    

    
    int a = INT_MIN;
    
    
    for(int i=0; i<n;i++){
    a= max(a, num[i]);
    
    /*{
    if(num[i]> max) {
        max =num[i];
    
 

}*/

}

// returning max value

return a;
}

int getMin(int num[], int n){
    
    int b = INT_MAX;
    
    for(int i=0; i<n;i++){
        b = min(b,num[i]);
    /*if(num[i min){
    min =num[i];
  
}*/
}

// returning min value

return b;
}


int main(){
    
    int size;
    cin>>size;
    
    int num[1000];
    
    
    // input array
    for(int i =0; i<size; i++){
    
    cin>> num[i];
    }
    
    cout<<"min is "<<getMin(num,size)<<endl;
    cout<<"max is "<<getMax(num,size);
    return 0;
}
