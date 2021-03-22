//program to demostrate the constant pointer

#include<iostream>

using namespace std;

int main()
{
    char p[] = "vijay";
    char q[] = "raj";

    //pointer for constant data type
    const char *ch = p;
  //  ch[2] = '7'; // error
    printf("ch is pointer for constant data type points to p '%s' \n",ch);
    ch = q ;
    printf("ch is pointer for constant data type points to q '%s' \n",ch);

    //constant pointer 
    char *const pc = q;
    printf("pc Constant pointer '%s' Before changing J as m\n",pc);  
    pc[2] = 'm';
    //pc = p; error
    printf("pc Constant pointer '%s' After changing J as m\n",pc);  

    //constant pointer points the constant data type 
    const char* const ph = p;
    //ph[3] = "f"; error
    //ph = q;   error
 
    printf("ph is constant pointer points constant data type '%s' \n",ph);

}