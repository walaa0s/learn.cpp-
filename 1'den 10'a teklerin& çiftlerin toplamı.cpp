#include <iostream>
#include <string>

using namespace std ; 
int main() { 
//bak kuzum burda çok yanlışın var 

int array[10] , sumodds=0 , sumevens=0  ;
for ( int i = 0 ; i < 10 ; i ++ )
{ 
array[i] = i + 1 ; 

 if(array[i]% 2 !=0 )
 {sumodds += array[i] ; 

 } 
 else { 
      sumevens+= array[i] ; 

 }
 
 
}
     cout << "teklerr : "<<sumodds << endl; 
           cout << "ciftler : "<<sumevens << endl   ; 
}