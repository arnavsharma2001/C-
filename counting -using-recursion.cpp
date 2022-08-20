//my approach of counting using recursion

#include <iostream>
using namespace std;

int count(int n){
    if(n==0){
        return 1;
        }

        int small_problem= count(n-1);
        cout<<small_problem<<endl;
        int big_problem = 1+small_problem;
        
        return big_problem;
}

int main() {
  
  int n;  
 cin>>n;
 
 int ans= count(n-1);
 cout<<ans<<endl;

    return 0;
}


//correct approach
//gives reverse output
#include <iostream>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    print(n-1);
    
}


int main() {
  
  int n;  
 cin>>n;
 

 cout<<endl;
 print(n);

    return 0;
}

// prints in serial order
//changing to head recursion from tail recursion
#include <iostream>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }
   
    print(n-1);
     cout<<n<<endl;
    
}


int main() {
  
  int n;  
 cin>>n;
 

 cout<<endl;
 print(n);

    return 0;
}
