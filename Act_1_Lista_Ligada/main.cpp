#include <iostream>
#include <string>
#include "List.h"
#include <stdlib.h>
using namespace std;
int main()

{

    List obj;
    string op;
    string data;
    bool loop=true;
    while(loop){
        try{

            cout<<"----------List-----------"<<endl;
            cout<<"1. Insert Contact"<<endl<<"2. Delete Contact"<<endl<<"3. Display"<<endl<<"4. Exit"<<endl<<"- Choose option: ";
            cin>>op;
            cout<<endl;
            if(op=="1"){
                string fName, lName,addrs, tNum,cNum;
              //  system("cls");
                cout<<"Enter First Name: ";
                cin>>fName;
                cout<<"Enter Last Name: ";
                cin>>lName;
                cout<<"Enter Address: ";
                //cin>>addrs;
                  cin.ignore();
                getline( cin, addrs);
               // cin.ignore();


                cout<<"Enter Phone Number: ";

                cin>>tNum;

                cout<<"Enter Cel Number: ";
                cin>>cNum;
                //cin>>val;


                obj.insertL(fName, lName, addrs, tNum, cNum);
            }
            else if(op=="2"){
                int p;
                cout<<"Delete by position\n-Enter position: ";
                cin>>p;
                cout<<endl;

               //obj.deleteContact();
               obj.deleteContact(p);
            }
            else if(op=="3"){
              //   system("cls");
                obj.imprimirLista();

               // cout<<"fffffffff";
            }
            else if(op=="4"){

                loop=false;
             // system("cls");

            // system("pause");

            }
            else{
                throw 99;
            }
            system("pause");
            system("cls");

     //   cout<<"\nrepeat+++\n";
        }
        catch(int er){
            cout<<"ERROR! Invalid Entry!"<<endl;
            system("pause");
            system("cls");
        }
}

    //int* p;
//    int x=1;
//    p= &x;
    //cout << "p:" <<*p<<" ,"<< p<<" ," <<&p<<", "<<&x<< endl;
    return 0;

}
