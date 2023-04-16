/* ----> MACROS 
   A piece pf code in a program that is replaced by a value of macro 
   TO create Macro 
   ---> #define marco 
   For ex --> #define PI 3.14

   USECASE OF MACRO ---> It is not a variable so there will be no need to allocate memory 
                    ---> It will not be changed
                    ---> Macro definitions need not be terminated by a semi-colon(;).
   
*/
/*
#include<iostream>
using namespace std; 
//---> USING MACRO 
#define PI 3.14

int main(){
    int r = 5;
    //---> One APPROACH //double pi = 3.14;
    double area = PI * r * r;
    cout<<"Area is "<<area<<endl;
    return 0;
}
*/

/* ------> GLOBAL VARIABLES
   It comes when we hv to share variables btwn functions 
   DRAWBACK: Any Function can change it .....
   SO when we hv to share variables use the concept of reference variables 
*/

/* ------> INLINE FUNCTIONS 
   Inline functions are used to reduce the function calls overhead
   
*/