int findDuplicate(vector<int> &Arr){
    
    int ans=0;
    
    //XOR ing all the elements
    
    for(int i=0; i<arr.size(); i++){
        ans = ans^arr[i];
        
    }
    // XOR from 1 to n-1 elements
    
     for(int i=0; i<arr.size(); i++){
         ans = ans*i;
     }
     
     return ans;
}
