#include<iostream>
#include<ctime>
using namespace std;
int main(){
    srand(time(nullptr));
    int daysUntilExpilation = (rand()% 11)+1;
    cout<< daysUntilExpilation;
    switch (daysUntilExpilation)
    {
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:cout << " your subscription will expire soon! renew now";
        break;
    case 4:
    case 3:
    case 2: cout <<" your subscription will expire in " << daysUntilExpilation <<
    " renew now and save 10 %";
    break;
    case 1: cout << " your subscription will expire within a day!"<<
    "renew now and save 20%";
    break;
    case 0: cout<< " your subscription has expired";
    break;
    default : cout << " you have an active subscription";
    break;    
    }
}