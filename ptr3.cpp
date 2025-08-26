#include <iostream>
using namespace std;

int main(){
    int amt;
    cout<<"enter amount"<<endl;
    cin>>amt;
    int Rs100,Rs50,Rs20,Rs10;
    switch (1){
        case 1: Rs100=amt/100;
        amt=amt%100;
        cout<<"no of Rs100 notes"<<Rs100<<endl;

        case 2: Rs50=amt/50;
        amt=amt%50;
        cout<<"no of Rs50 notes"<<Rs50<<endl;

        case 3: Rs20=amt/20;
        amt=amt%20;
        cout<<"no of Rs20 notes"<<Rs20<<endl;

        case 4:Rs10=amt/10;
        amt=amt%10;
        cout<<"no of Rs10 notes"<<Rs10<<endl;
        break;
        
    
    }
    return 0;
}