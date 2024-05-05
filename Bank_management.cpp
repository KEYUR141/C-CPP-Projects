#include<iostream>
using namespace std;
 
 class Bankaccount {
    private:
    string name;
    double balance;

    public:
    Bankaccount(string n,double b): name(n),balance(b) {}

    void deposit(double amount) {
        if(amount>0) {
            balance+=amount;
        }
    }

    void withdraw(double amount) {
        if(balance>amount) {
            balance-=amount;
        }
        else {
            cout<<"Insufficient Funds"<<endl;
        }
    }

    void display() {
        cout<<"Account: "<< name << "\nBalance: "<< balance << endl;
    }
};

 int main() {
    string name;
    double intialdeposit;

    cout << "Enter the name:";
    getline(cin,name);
    cout<<"Enter the Intial Deposit: ";
    cin >> intialdeposit;

    Bankaccount bank(name,intialdeposit);

    int choice;
    double amount;

    do  {
        cout<<"\n1.To deposit money in your account"<<endl;
        cout<<"2.To withdraw money from your account"<<endl;
        cout<<"3.To display your balance of your account"<<endl;
        cout<<"4.To exist"<<endl;
        cout<<"Enter the your choice(enter the choice number):";
        cin>>choice;
        switch(choice) {
            case 1:
            cout<<"Enter the deposit amount:"<<endl;
            cin>>amount;
            bank.deposit(amount);
            break;

            case 2:
            cout<<"Enter the withdrawal amount:";
            cin>>amount;
            bank.withdraw(amount);
            break;

            case 3:
            bank.display();
            break;

            case 4:
            break;

            default:
            cout<<"Invalid Choice"<<endl;
            break;
        }
    }while(choice!=4);
    return 0;
 };