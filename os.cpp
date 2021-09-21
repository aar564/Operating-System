#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
string computer_name,result,op,text,text1,text2,text3,text4;
char yn;
int start,sum1,sum2,pin;
pin:
cout<<Enter Pin:;
     cin>>pin;
         if(pin==123) {
                 goto lb;
                             }
         else{
               cout<<Wrong Password;
               goto pin;
             }
lb:
start:
cout<<______________<<endl;
cout<<|Applications|<<endl;
cout<<|1.About_____|<<endl;
cout<<|2.Help______|<<endl;
cout<<|3.Calculator|<<endl;
cout<<|4.TextX_____|<<endl;
cout<<|5.Shut down_|<<<<endl;
cout<<|start:<<endl;































































