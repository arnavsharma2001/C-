// we will be using XOR operation to cancell out repeated elements

int findUnique( int *arr, int size){
  
  int ans=0;
  for(int i =0; i<size; i++){
    ans = ans^arr[i]; //using XOR operation here
    
  }
  return ans;
}
  
