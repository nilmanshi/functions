SUM OF ALL NO UPTO 1 TO N 



#include <iostream>
using namespace std ;
void findsum(int n){
  int  sum= 0;
  for(int i=1 ; i <= n ; i++){
    sum=sum+i;
  }
  cout<<"final sum :"<<sum<<endl;
}
int main() {
  findsum(5);
}





