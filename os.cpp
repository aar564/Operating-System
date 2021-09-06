#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string b,z,text,text1,text2;
    char yn;
    int a,c,d,e,result;
        cout<<"Computer's Name:";
            cin>>b;
        lb:
        cout<<"______________"<<endl;
        cout<<"|Applications|"<<endl;
        cout<<"|1.About_____|"<<endl;
        cout<<"|2.Help______|"<<endl;
        cout<<"|3.Calqlater_|"<<endl;
        cout<<"|4.TextX_____|"<<endl;
        cout<<"|5.Shut Down_|"<<endl;
        cout<<"|Strat:";
            cin>>a;
                if (a==1)
                {
                   cout<<"_________________________"<<endl; 
                   cout<<"|_________About__________|"<<endl;
                   cout<<"|Version: 1.0 (Beta)_____|"<<endl;
                   cout<<"|Github: aar564__________|"<<endl;
                   cout<<"|Runing on: a.out________|"<<endl;
                   cout<<"|________________________|"<<endl;
                   goto lb;
                }
                else if (a==2)
                {
                    cout<<"___________________________________"<<endl;
                    cout<<"|goto https://github.com/aar564/os|"<<endl;
                    cout<<"|_________________________________|"<<endl;
                    goto lb;
                }
                else if (a==3)
                {
                    de:
                    cout<<"Type your number:";
                        cin>>c;
                    cout<<"Type your number:";
                        cin>>e;
                        sw:
                    cout<<"(+,-,*,/):";
                        cin>>z;
                            if (z=="+")
                            result=c+e;
                            else if (z=="-")
                            result=c-e;
                            else if (z=="/")
                            result=c/e;
                            else if (z=="*")
                            result=c*e;
                            else {
                                cout<<"Wrong ooprater";
                                goto sw;
                            }
                            cout<<"Your answer"<<result<<endl;
                            cout<<"More Claqlation(y/n)";
                                cin>>yn;
                                    if (yn=='y')
                                    {
                                        goto de;
                                    }
                                    else{
                                        goto lb;
                                    }
                }else if(a==4){
                cout<<"File Name:";
                        cin>>text;
                cout<<"Line 1:";
                    cin>>text1;
                cout<<"Line 2:";
                    cin>>text2;
                ofstream file(text);
                    file<<text1<<endl;
                    file<<text2;
                file.close();
                    goto lb;
            }
                                    
}