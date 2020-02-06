//
//  main.cpp
//  HPEA2
//
//  Created by Hasan Qureshi on 2/5/20.
//  Copyright © 2020 Hasan Qureshi. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;
void deposit(double& bal);
void withdraw(double& bal);
void status(double& bal);

void menu(){
    cout<<"What would you like to do today?"<<endl;
    cout<<"Select 1 to deposit funds"<<endl;
    cout<<"Select 2 to withdraw funds"<<endl;
    cout<<"Select 3 to check your balence"<<endl;
    cout<<"Select 4 to exit"<<endl;
};

int main(int argc, const char * argv[]) {
    int choice=3;
    double balance=0.00;
    cout<<"Welcome to your bank ATM"<<endl;
    cout<<"What would you like to do today?"<<endl;
    cout<<"Select 1 to deposit funds"<<endl;
    cout<<"Select 2 to withdraw funds"<<endl;
    cout<<"Select 3 to check your balence"<<endl;
    cout<<"Select 4 to exit"<<endl;
    //cin>>choice;
    while (cin){
    switch (choice)
    {
        case 1: deposit(balance);
            break;
        case 2: withdraw(balance);
            break;
        case 3: status(balance);
            break;
        case 4: cout <<"Your final balence is $"<< fixed <<setprecision(2)<< balance << ". Thank you for banking with us. We appreciate your business."<<endl;
            exit(0);
            break;
        default: cout<<"Invalid choice please choose again"<<endl;
             
    }
    cin>>choice;
    //deposit(balance);
    }
    cout<<endl;
    cout <<"Hello customer, your current balance is $"<<fixed <<setprecision(2)<< balance << endl;
    return 0;
}
void deposit(double& bal){
    double dep;
    cout<<"How much would you like to deposit? "<<endl;
    cin>>dep;
    if(dep>0){
    bal+=dep;
    }
    else{
        cout<<"Cannot deposit a nonnegative sum."<<endl;
    }
    cout<<endl;
    cout<<"Your new balance is: $"<<fixed <<setprecision(2)<<bal<<endl;;
    cout<<"What would you like to do next?"<<endl;
    cout<<endl;
    menu();
}
void withdraw(double& bal){
    double wit;
    cout<<"How much would you like to withdraw? "<<endl;
    cin>>wit;
    if (wit>bal){
        cout<<"Insefficent funds"<<endl;
    }
    else{
        bal-=wit;
    }
    cout<<endl;
    cout<<"Your new balance is: $"<<fixed <<setprecision(2)<<bal<<endl;
    cout<<"What would you like to do next?"<<endl;
    cout<<endl;
    menu();
}
void status(double& bal){
    cout<<"Your balance is: $"<<fixed <<setprecision(2)<<bal<<endl;
    cout<<endl;
    
}
