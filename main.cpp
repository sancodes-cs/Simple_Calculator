#include <iostream>

using namespace std;

int main()
{
   float num1,num2;
   char operation;
   cin>>num1;
   cin>>operation;
   cin>>num2;

   switch(operation)
   {

       case '+':cout<<(num1+num2);
                break;
       case '-':cout<<(num1-num2);
                break;
       case '*':cout<<(num1*num2);
                break;
       case '/':cout<<(num1/num2);
                break;
      default: cout<<"Invalid Operation";
   }
   return 0;
}
