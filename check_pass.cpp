#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;



void control_chek_pass(string pass)
{
    string *control = new string;
    cout<<"Plees enter control pass: ";
    getline(cin,*control);
    if (pass == *control)
        cout<<"You are OK"<<endl;
    else
        cout<<"Plees try again"<<endl;
    
    delete control;
    
}


string get_pass()
{
    string your_pass;
    cout<<"Plees enter password: ";
    getline(cin,your_pass);
    return your_pass;
}


int main()
{
    control_chek_pass(get_pass());
   
    system("read -n 1 -s -p \"Press any key to continue...\"");
    return 0;
    
}