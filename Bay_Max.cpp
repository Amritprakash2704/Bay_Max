#include<string>
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
struct Personal_details{
    string name;     
    int age;   
};
struct Body_Temperature{
    double temperature;
    char scale = 'C' ; 
};
struct BMI{
    double height = 1.70 ;
    string scaleh = "m";
    double weight = 80;
    string scalew = "kg";
    double BMI ;
    string scale ; 
};
struct Blood_Pressure{
     int systolic = 120;//120 mm of HG
     int diastolic = 80;//80 mm og HG
     string scale = "mm of Hg";
};
struct Blood_Sugar_Level{
    double measurement;
    string scale = "mg/dL";
};
struct Hormones{
     
};

class Condition{
    private :
    int coupon_number;
    Personal_details p;
    string issue;
    int severity;
    protected :
     
    public :
    string t;
     void getdetails();
     void spitdetails();
};
class Health: public Condition{
    private :
    string name  = t ;
    Body_Temperature T;
    BMI B;
    Blood_Pressure P;
    Blood_Sugar_Level S;
    Hormones H;  
    friend void calculator(); 

    public :
    void know_Health();
    void print_Health();
};
int main(){
    cout<<"Enter 'Hi' to turn on Bay_Max ."<<endl;
     string* run;
     run = new string;
    getline(cin,*run);
     if(*run != "Hi"){
        return 0;
     }else{
         delete run;
         run=nullptr;
        cout<<"Hello my name is Bay_Max . I have been created by the great Amrit Prakash"<<endl;
        cout<<"I am a nursing program"<<endl;
        Condition* C;
        C = new Condition ;
        char* ask;
        ask = new char;
        cout<<"Are you comfortable with me and can we continue ? (Y/N)"<<endl;cin>>ask;
        if(*ask != 'Y'){
            return 0;
        }else{
             delete ask;
             ask = nullptr;
             C->getdetails();
             cout<<endl<<"If you don't mind I want to give you an advice (Y/N) "<<endl;
             ask = new char;
             cin>>ask;
             while(*ask != 'Y'){
                 cout<<"You will have to take my advice to continue . Press 'Y'"<<endl;
                 cin>>ask;
             }
             delete ask;
             ask=nullptr;
             cout<<endl<<"Chalaa jaa pyare bete nhin to maara jayega "<<endl;
             cout<<endl<<"Are you ready to take this risk ? (Y/N)"<<endl;
             ask=new char;
             cin>>ask;
             while(*ask != 'Y'){
                 cout<<"You cannot cancel your registration now . Press 'Y'"<<endl;
                 cin>>ask;
             }
             if(*ask !='Y'){
                 cout<<"Fuck off Bastard";
                 return 0;
             }
                 delete ask;
                 ask =nullptr;
                cout<<"Now we need to run some tests . Press 'Y' when you are ready to continue ."<<endl;
              ask = new char;
              cin>>ask;
             while(*ask != 'Y')  {  
                  cout<<"Your registration will be cancelled . Do you want to continue ? (Y/N)"<<endl;
                  cin>>ask;
                    if(*ask == 'Y'){
                  cout<<"Your registration has been cancelled "<<endl;
                  return 0;
                  }else{
                      cout<<"Press 'Y' when you are ready to continue with the medical tests ."<<endl;
                      cin>>ask;
                  }}
             delete ask;
             ask = nullptr;
                 Health* Check_Up;
                 Check_Up = new Health;
                 Check_Up -> know_Health();
                 cout<<"Well done your case has been registered "<<endl;
                 cout<<"Here is a copy for future reference : "<<endl;
                 C->spitdetails();
                 cout<<endl<<"Your results :"<<endl;
                 Check_Up->print_Health();
                 cout<<endl<<"Ok now we need to run some Medical Tests "<<endl;
                 cout<<endl<<"Enter 'Y' when you are ready to begin ";
      } return 0;
}}
void Condition::getdetails(){
     coupon_number=rand();
     cout<<"What is your name ? (Your fist name will be sufficient) "<<endl;
     cin.ignore();
     getline(cin, p.name);
     t=p.name.substr(0 ,p.name.find(" ")) ;
    //  cout<<t<<endl;
     cout<<"Hi "<<t<<" , Can you tell me what is your age ?"<<endl;
     cin>>p.age;
     cout<<"Okay "<<t<<" , What is your issue ?"<<endl; 
     cin.ignore();
     getline(cin, issue);  
    //  cin>>issue;          
     cout<<"How will you grade your severity on the scale of 1 to 10 ?"<<endl;
     cin>>severity;
     cout<<"Thank you "<<t<<" I am processing your inputs "<<endl;
     char scan;
     cout<<"By the way if you wish I can run a scan to detect your severity . Do you want that?(Y/N) "<<endl;
     cin>>scan;
     if(scan !='Y'){
         cout<<endl<<"You will be called when your no comes till then you can wait in the rest room ."<<endl;
         return;
     }else{
         cout<<"Scanning ........."<<endl;
         cout<<"The result matches with your input "<<endl;
         cout<<"You will be called when your no comes till then you can wait in the rest room ."<<endl;
     }
}
void Condition::spitdetails(){
    cout<<endl<<"Coupon Number : "<<coupon_number<<endl;
    cout<<"Name : "<<p.name<<endl;
    cout<<"Age : "<<p.age<<endl;
    cout<<"Issue : "<<issue <<" | severity level : "<<severity<<endl;
}
void Health::know_Health(){
     char *call;
     call = new char;
     cout<<"We are going to calculate your BMI "<<endl;
     cout<<"Our standard units are (heiht : meters ; weight : kg) . Press 'K' to change units else press any key to continue ."<<endl;
     cin>>call;
     if (*call != 'K'){}else{void calculator();}
    cout<<"Enter your height : (in meters)"<<endl; 
    cin>>B.height;
    cout<<"Enter your weight : (in kilograms)"<<endl;
    cin>>B.weight;
    B.scale = B.scalew;
     B.BMI = (B.weight/(B.height*B.height));
    B.scale.append("(("); B.scale.append(B.scalew);B.scale.append(")^-2)");
}
void Health::print_Health(){
      cout<<"Current temperatures : ">>setw(3)<<endl;
      cout<<endl<<"BMI : "<<setw(3)<<B.BMI<<endl;
      cout<<"Diastolic pressure : "<<setw(3)<<endl;
      cout<<"systolic pressure : "<<setw(3)<<endl;
      cout<<"Blood Sugar Level : "<<setw(3)<<endl;
}
