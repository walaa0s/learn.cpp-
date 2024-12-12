 #include <iostream>
#include <string>
using namespace std ; 
int main(){
    
int array[10] ; //Introduce array 
array[0] = 2 ; // the first num of array start with 2 
 for (int i  = 1 ; i < 10 ; i ++ ){
  array[i]= array[i-1] * 2  ; // the array multiple with 2 at every step 
 }
for (int i  = 0 ; i < 10 ; i ++ ){
    cout << array[i] << " " ; 
}
}