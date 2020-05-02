#include "user class.h"
#include<stdio.h>
UserInformation info[50];
static int lp=0;
void crate(){
    std::string name;
    int yr;
    float bal;
    getline(std::cin,name);
    std::cout<<"Enter your name : "<<std::endl;
    getline(std::cin,name);
    std::cout<<"Enter your age:"<<std::endl;
    std::cin>>yr;
    std::cout<<"Enter your balance :"<<std::endl;
    std::cin>>bal;
    std::cout<<std::endl;
    std::cout<<"Your Account is Successfully Crated"<<std::endl;
    std::cout<<"Your Account no. is :"<<1001+lp;
    std::cout<<std::endl<<std::endl;
    info[lp].Crate(name,yr,bal);
    lp++;
}


void update(){
    int num;
    std::cout<<"Please Enter your account id :";
    std::cin>>num;
    num=num-1001;
    if(num>lp){
        std::cout<<"\a Account doesn't exist"<<std::endl;
    }
    else{
        std::string name;
        int age;
        std::cout<<"Your Current Informations:"<<std::endl;
        info[num].getdta();
        getline(std::cin,name);
        std::cout<<"Enter your name : "<<std::endl;
        getline(std::cin,name);
        std::cout<<"Enter your age:"<<std::endl;
        std::cin>>age;
        info[num].chngdta(name,age);
        std::cout<<"Successfully Updated, changed status:"<<std::endl;
        info[num].getdta();
    }
    std::cout<<std::endl<<std::endl;
}
void trnc(){
    int num,no;
    float amn;
    std::cout<<"Enter your account no. : ";
    std::cin>>no;
    no=no-1001;
    if(no>lp){
        std::cout<<"\a Account doesn't exist"<<std::endl;
    }
    else{
        std::cout<<"1. Cash Out\n2. Cash In\n3. Send money "<<std::endl;
        std::cin>>num;
        if(num==1){
            std::cout<<"Enter amount : ";
            std::cin>>amn;
            amn*=-1;
            info[no].chngtk(amn);
        }
        else if(num==2){
            std::cout<<"Enter amount : ";
            std::cin>>amn;
            info[no].chngtk(amn);
        }
        else{
            int otr;
            std::cout<<"Enter the receiver account no : ";
            std::cin>>otr;
            otr-=1001;
            std::cout<<"Enter amount : ";
            std::cin>>amn;
            info[otr].chngtk(amn);
            amn*=-1;
            info[no].chngtk(amn);
        }
    }
std::cout<<std::endl<<std::endl;
}

void detail(){
int loopind=0;
do{
    std::cout<<"Your Account no. is :"<<1001+loopind<<std::endl;
    info[loopind].getdta();
    std::cout<<std::endl<<std::endl;
    loopind++;
}while(loopind<lp);
}

void remac(){
    int num;
    std::cout<<"Please Enter your account no. to delete account"<<std::endl;
    std::cin>>num;

    num=num-1001;
    if(num>=lp){
        std::cout<<"\aThe Account is not exist"<<std::endl;
    }
    else{

        info[num].Crate("Account Has been Deleted",0,0);
        std::cout<<"Account Successfully Deleted"<<std::endl;
    }
std::cout<<std::endl<<std::endl;
}

void cacu(){
    std::cout<<"Please Enter your account no."<<std::endl;
    int num;
    std::cin>>num;
    num=num-1001;
    if(num>=lp){
        std::cout<<"\aThe Account is not exist"<<std::endl;
    }
    else{
        std::cout<<"Account exist\nThe Information of account:"<<std::endl;
        info[num].getdta();
    }
std::cout<<std::endl<<std::endl;
}
