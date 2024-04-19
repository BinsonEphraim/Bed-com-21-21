#include<iostream>
#include<ctime>
using namespace std;

int main(){
    // Task i task randomnumber generator
    srand(time(NULL));
    int daysUntilExpitation = (rand() % 11)+1;
    cout << daysUntilExpitation; 

    // task ii if else statement according to randomNumber
    if(daysUntilExpitation >=5 && daysUntilExpitation<=10){
        cout<< " your subcription will expire soon. renew now!";
    } else if (daysUntilExpitation >=1 && daysUntilExpitation<=5){
        cout<< " your subscription will expire in " << daysUntilExpitation<< " days "<<
        "renew now and save 10%!";
    }else if(daysUntilExpitation<=1){
        cout<< " your subscription will expire within aday! /n"<< " renewnow and save 20%";

    } else if(daysUntilExpitation= 0){
        cout << "your subscription has expired ";
    } else{
        cout<< " you have an active subscription";
    }
return 0;
}