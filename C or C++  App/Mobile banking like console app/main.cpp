#include <iostream>
#include<string>
#include "user class.h"
#include "fnc.h"
void switchaccount(int num);
int main()
{
    int num=0;
    do{
    std::cout <<"1. Crate new account"<<std::endl;
    std::cout <<"2. Update information of existing account"<<std::endl;
    std::cout <<"3. For Transactions"<<std::endl;
    std::cout <<"4. Checking the details of existing account"<<std::endl;
    std::cout <<"5. Removing existing account"<<std::endl;
    std::cout <<"6. View customer account"<<std::endl;
    std::cout <<"7. Exit"<<std::endl;
    std::cout<<std::endl;
    std::cout <<"Please Select What you want to do : ";
    std::cin>>num;
    std::cout<<std::endl;
    switchaccount(num);
    }while(num!=7);
    return 0;
}
void switchaccount(int num)
{
    switch(num){
    case 1:
        crate();
        break;
    case 2:
        update();
        break;
    case 3:
        trnc();
        break;
    case 4:
        detail();
        break;
    case 5:
        remac();
        break;
    case 6:
        cacu();
        break;
    default:
        break;
    }
}
