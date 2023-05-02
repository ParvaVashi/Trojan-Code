#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include <bits/stdc++.h>

using namespace std;

class PasswordManager
{ public:
    string input_password;
    string username;
    string saved_password;

void welcome()
{
    int i;
    for ( i = 0; i < 50; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    cout<<"\t Welcome to the Password Manager "<<endl;
    cout<<endl;
    for ( i = 0; i < 50; i++)
    {
        cout<<"*";
    }
    
}
    void getDATA()
    {
        
        cout<<"Enter the username: "<<endl;
        cin>>username;
         
        cout<<"Enter the password: "<<endl;
        cin>>input_password;
         
        cout<<"\n Account created Succesfully .!"<<endl;
        saved_password=input_password;
    }
    void login()
    {
         
        cout<<"Enter your username: "<<endl;
        cin>>username;
        cout<<"Enter your password: "<<endl;
        cin>>input_password;
        if (input_password==saved_password)
        {
            
            cout<<"\n You are logged in ."<<endl;
        }
        else
        {
            
            cout<<"\n Username or password is incorrect"<<endl;
        }
    }
};

int main()
{
    int counter;
     PasswordManager p1;
     loop :
     p1.welcome();
    cout<<"\nPress  :  \n\n1.   Create Account \n2.   Login \n3.   Quit"<<endl;
    cin>>counter;

    switch (counter)
    {
    case 1:
        p1.getDATA();
        break;

    case 2:
         p1.login();
         break;

    case 3:
    cout<<"You have exited the Code"<<endl;
        break;
        
    }
    goto loop;

    
  
return 0;
}

