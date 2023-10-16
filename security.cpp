#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

using namespace std;
int main(){
    int a,i=0;
    string text,old,password1,password2,pass,name,password0,age,user,word,word1;
string creds[2],cp[2];
cout<<   "security system"    <<endl;


cout<<"----------------------------------"<<endl<<endl;
cout<<"|      1.Register                |" <<endl;
cout<<"|      1.Login                   |" <<endl; 
cout<<"|      1.change password         |" <<endl;
cout<<"|______1.Register________________|" <<endl;

do{
    cout<<endl<<endl;
    cout<<"Enter Your Choice :- ";
    cin>>a;
    switch(a){


        case 1: {
            cout<<"_______________________________"<<endl<<endl;
            cout<<"|--------Register--------------|"<<endl;
            cout<<"|______________________________|"<<endl<<endl;
            cout<<"Please enter username:- ";                                                                    cin>>name;
            cout<<"Please enter the password:-";
            cin>>password0;
            cout<<"Please enter Your Age:-";
            cin>>age;
            ofstream of1;
            of1.open("file.txt");
            if(of1.is_open()){
                of1<<name<<"\n";
                of1<<password0;
                cout<<"Registration successfull"<<endl;



            
            }
            break;
        }
        case 2: {
            i=0;
            cout<<"_____________________________________"<<endl<<endl;
            cout<<"|--------------login-----------------|"<<endl;
            cout<<"|____________________________________|"<<endl<<endl;
            ifstream of2;
            of2.open("file..txt");
            cout<<"Please enter the username:-  ";
            cin>>user;
            cout<<"Please enter the password:-  ";
            cin>>pass;

            if(of2.is_open()){
                while(!of2.eof()){
                    while(getline(of2,text)){
                        istringstream iss(text);
                        iss>>word;
                        creds[i]=word;
                        i++;
                    }
                    if(user==creds[0] && pass==creds[1]){
                        cout<<"---log in auccessfull---";
                        cout<<endl<<endl;
                        cout<<" Details :"<<endl;

                        cout<<"Username: "+ name<<endl;
                        cout<<"password: "+ pass<<endl;
                        cout<<"Age: "<<endl;

                    }
                    else{
                        cout<<endl<<endl;
                        cout<<"| Incorrect Credentials            |"<<endl;
                        cout<<"|  1.Press 2 to login              |    "<<endl;
                        cout<<"|  1.Press 3 to change password    | "<<endl;
                        break;
                    }
                    }
                }
                break;
            }
            case 3: {
               i=0;

               cout<<"-------------change password---------------"<<endl;
               ifstream of0;
               of0.open("file.txt");
               cout<<"Enter the old password:- ";
               cin>>old;
               if(of0.is_open()){
                while(of0.eof()){
                    while(getline(of0,text)){
                        istringstream iss(text);
                        iss>>word1;
                        cp[i]==word1;
                        i++;

                    }
                    if(old==cp[1]){
                        of0.close();
                        ofstream of1;
if(of1.is_open()){
    cout<<"Enter your new password:- ";
    cin>>password1;
    cout<<"Enter your password again:- ";
    cin>>password2;
    if(password1==password2){
        of1<<cp[0]<<"\n";
        of1<<password1;
        cout<<"password change successfully"<<endl;
    }
else{
    of1<<cp[0]<<"\n";
    of1<<old;
    cout<<"password do not match"<<endl;
}
}
                    }
                    else{
                        cout<<"Please enter valid password"<<endl;
                        break;
                    }
                }
               }
               break;
            }
            case 4:{
                cout<<"__________Thank You!_________";
                break;
            }
            default:
            cout<<"Enter a valid choice";

        }
    }
    while(a!=4);
    return 0;
}
            