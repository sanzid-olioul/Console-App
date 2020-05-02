#ifndef USER CLASS
#define USER CLASS
class UserInformation{
    private:
        std::string *name;
        int *age;
        float *bal;
    public:
        UserInformation();
    void Crate(std::string name,int age ,int bal);
    void getdta();
    void chngtk(float bal);
    void chngdta(std::string name,int age);
    void blntr(int bal);
    ~UserInformation();
};
UserInformation::UserInformation(){
        name = new std::string("No name is registered");
        age = new int(0);
        bal = new float(0);
        }
UserInformation:: ~UserInformation(){
    delete name;
    delete age;
    delete bal;
    }
void UserInformation::chngdta(std::string name,int age){
    *(this->name)=name;
    *(this->age)=age;
}
void UserInformation::chngtk(float bal){
    *(this->bal)+=bal;
}


void UserInformation::Crate(std::string name,int age ,int bal){
    *(this->name)=name;
    *(this->age)=age;
    *(this->bal)=bal;
    }
void UserInformation::getdta(){
    std::cout<<"Name : "<<*name<<std::endl;
    std::cout<<"Age : "<<*age<<std::endl;
    std::cout<<"Balance : "<<*bal<<std::endl;
    }
#endif
