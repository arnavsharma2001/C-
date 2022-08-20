#include <iostream>
using namespace std;

int Factorial(int n){
    if(n==0){
        return 1;
        }
        int small_problem= Factorial(n-1);
        int big_problem = n*small_problem;
        
        return big_problem;
}

int main() {
  
  int n;  
 cin>>n;
 
 int ans= Factorial(n);
 cout<<ans<<endl;

    return 0;
}
