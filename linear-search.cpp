#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
for(int i=0; i<size;i++){
 if(arr[i]==key){
        return 1;
     }
     else{
         return 0;
     }
}
}


int main() {
  
  
 
 int arr[5] = {3,5,8,9,0};

 int key;
 cin>>key;
 
 bool found = search(arr,5,key);
     if(found){
         cout<<"Present"<<endl;
     }
     else{
         cout<<"Not Present"<<endl;
     }
 
 return 0;
}
