    #include <iostream>
    #include <time.h>
    #include <fstream>
    #include <conio.h>
    #include <string.h>
    #include <stdlib.h>
    using namespace std;
    
    class Bank 
    {
    public:
           virtual void deposit()=0;
                    double limit;

    };
    
     template<class t1>     
    class Account:public Bank
        {
        t1 acname;
        string b,d,branch;
        double acNo,a;       
        static double acBalance;       
        int pin,c; 
                  
        public:      
          friend void accountExit();
Account(t1 acname,t1 branch)     
   {       
            system("cls");             
            this->b=acname;                 
            this->d=branch;   
   }
  void operator +()
  {
  cout<<"Addition of pin & account no is "<<a+c<<endl;
system("pause");
  system("cls");
  cout<<"Hey "<<b<<" You are at SBI Branch "<<d<<endl;
  }
         void getdata(double acNo)                
             {             
             cout<<"Checking the Data"<<endl;                             this->a=acNo;    
             system("pause");
              }
 
     void getdata(int pin)
        {     
        Account p(acname,branch);
        ofstream f;
        f.open("xyz.txt");
        f.write((char *)&p, sizeof(p));                     
        this->c=pin;
        cout<<"Enter the Recent balance:"<<endl;
        cin>>acBalance;    
                  }                 

        void deposit()
        {
             system("cls");
cout<<"\nATM ACCOUNT DEPOSIT SYSTEM";            cout<<"\n\nThe Names of the Account Holder is :"<<b<<"\n\n";
cout<<"\tThe Branch location is :"<<d<<"\n\n";
          cout<<"\tAccount number :"<<a<<"\n\n";                    cout<<"\tPresent available balance :$"<<acBalance<<"\n\n";
          cout<<"\tEnter the Amount to be Deposited $";
                 
                double amount;
                cin>>amount;
            acBalance=acBalance+amount ;
            cout<<"\n\tYour new available Balanced Amount is $"<<acBalance<<endl ;
            cout<<"\n\t\t\tThank You!\n\n"<<endl;
            cout<<"Press any key to Return to the Main Menu\n\n";
            system("pause");
        }

        void withdraw()
        {
             system("cls");
            cout<<"\nATM ACCOUNT WTHDRAWAL";             
            cout<<"\n\nThe Names of the Account Holders is :"<<b<<"\n\n";
            cout<<"\tThe Branch location is :"<<d<<"\n\n";
            cout<<"\tAccount number :"<<a<<"\n\n";            cout<<"\tPresent available balance :$"<<acBalance<<"\n\n";
            cout<<"\tEnter the Amount to be Withdrawn $";
                  double amount;
                cin>>amount;
                         if(amount>acBalance||amount>9000)//
                {
              try
              {
            system("cls");
            throw amount;
                }
    catch(double amount)
            {                
cout<<" ATM ACCOUNT WITHDRAWAL Exception";
             cout<<"\n\tInsufficient Available Balance in your account.\n\n"<<endl;
            cout<<"\t\t\tSorry !!\n"<<endl;
            system("pause");
                }
           }
            else
                {                                                 
               acBalance=acBalance-amount ;
        system("cls");
 cout<<"\nATM ACCOUNT WTHDRAWAL \n";
            cout<<"\n\nThe Names of the Account Holders is :"<<b<<"\n\n";
            cout<<"\tThe Branch location is :"<<d<<"\n\n";
            cout<<"\tAccount number :"<<a<<"\n\n";
cout<<"Your new available Balanced Amount is $"<<Account::getcount()<<endl ;
  cout<<"Press any key to Return to the Main Menu\n\n";
            system("pause");               
               }
         
        }
void details()
        {            
            system("cls");                    
            cout<<"\nATM ACCOUNT DETAILS \n";
            cout<<"\n\nThe Names of the Account Holder is :"<<b<<"\n\n";
            cout<<"\tThe Branch location is :"<<d<<"\n\n";
       cout<<"\tAccount number :"<<a<<"\n\n";
cout<<"\tAvailable Balance:"<<acBalance<<"\n\n";
                    cout<<"Press any key to Return to the Main Menu\n\n";
            system("pause");   
        }        
        
       
    static double getcount()
        {
        return acBalance;
        }
        
        };
              
    
        template<class t1>    
double Account<t1>::acBalance;     

  void accountExit()
        {
            system("cls");
               
     
            cout<<"\nATM ACCOUNT EXIT \n";
            cout<<"\n\n\t\t BROUGHT TO YOU BY SBI YONO Partners \n\n";
            
            system("pause");
            exit(1);   
        }
class A
{
public:
   friend class Security;
   int ifsc=9203;
};
        class Security
          {
          public:
       
        void data(A s1)  {
  cout<<"Dont share your pin with anyone protect your Account and Privacy      IFSC for SBI bank bhandara is   "<<s1.ifsc<<endl;          
  } 
          };         

        int main()
        {
        int e;       
        double acNo;
        int pin;
        string acname,branch;           
        Bank *bn;              
        Security s1;
        A s2;                 cout<<"\n======================================================================================       WELCOME TO SBI ATM        ==================================================================================\n";
     
cout<<"\t\t---------------------------------------\n"<<endl;
                       cout << "\t\tCurrent date : ";
             time_t now;
             time(&now);
     
          printf("%s\n", ctime(&now));         
cout<<"\t\t---------------------------------------\n"<<endl;

cout<<"\n===================================================================\n";  
s1.data(s2);
cout<<"\n===================================================================\n";                          
  cout<<"\n\tInsert your card Press 1 and Then Press Enter to Access    Your Account.\n\n";
          cout<<"\t\t\t\t\t or \n\n";
cout<<"\tInsert your card Press 0 and press Enter to get Help.\n\n";             

           int access;
          cin>>access;
          switch(access)
          {
          case 1:
          {
          system("cls");         
          cout<<"\nREADING CHIP DATA\n";
          cout<<"\n ACCESSING YOUR ACCOUNT \n";
          cout<<"\n\nEnter Your 4 Digit Pin!![Only one attempt is allowed]\n\n"<<endl;                                  
          cin>>pin;   
          system("cls");    
          cout<<"Enter Account Holders Name"<<endl;
          cin>>acname;          
cout<<"Enter the Branch of your Account:"<<endl;
        cin>>branch;        
         Account<string> p(acname,branch);   
           bn=&p;          
               p.getdata(pin);  
          cout<<"Enter Account  No"<<endl;
          cin>>acNo;
          p.getdata(acNo);   
     
        if(to_string(pin).length()==4)
           
          {
          system("cls"); 
           
          do
            {
                          system("cls");  
            +p;
              cout << endl << "\n ATM Main Menu Screen \n" << endl << endl;
                                
    cout << "\t\tPress1 To  Deposit Cash" << endl;
    cout << "\t\tPress 2 To Withdraw Cash" << endl;
cout << "\t\tPress 3 To Balance Inquiry" << endl;    
    cout << "\t\tPress 0 To Exit ATM" << endl << endl;
    cout << "\tPLEASE ENTER A VALID SELECTION AND PRESS ENTER KEY: \n\n";
    
            cin>>e;
            switch(e)
            {
                case 1:
                    bn->deposit();
                    break;
                case 2:
                    p.withdraw();
                    break;
                case 3:
                    p.details();
                    break;
                 case 0:
                    accountExit();
                    break;
            default:cout<<"Please Enter the Correct Number Choice"<<endl;
            }
        }while(e!=0);
     
          break;                                    
          }
                    
          else
          {
          system("cls");
         
    cout<<" THANK YOU ";
    cout<<"\nIncorrect PIN!!! No More attempts allowed!! Data Not Matched!!!!     Sorry!!\n\n";    
          system("pause");
          exit (1);
          }
               
          }
          case 0:
          {
        system("cls");
     
        cout<<"\nATM ACCOUNT STATUS \n";
                        cout<<"\tYou must have the correct pin number to access this acount. Contact your bank representative for assistance during bank       opening hours\n\n";
                        cout<<"\t\tThanks for, your choice today!!\n\n";
     
          system ("pause");
          exit(1);      
          break;   
        }
    }     
    system("pause");
    return 0;
     
    };
