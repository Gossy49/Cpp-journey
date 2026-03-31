#include <iostream>
using namespace std;


int main (){

    // initial user balance in ATM system
    int balance;
    balance = 1000;

    

    // bool to make  the machine is on and off
    bool is_machine_on = true;

    while(is_machine_on)
    {   
        int deposit = 0;
        int withdraw =0;
        cout <<"1. Check Balance"<<endl;
        cout <<"2. Deposit\n";
        cout <<"3. Withdraw\n";
        cout <<"4. Exit \n";

        //intialize variable to store user's choice
        int user_choice;
        

        cout <<endl;
        cout <<"Enter a number (1-4) to view more: ";
        cin >> user_choice;
        if (cin.fail()){
            
            //incase the user enters something other than numbers
            cout << "Invalid input. Please enter a number.\n";
            cout<< endl;
            cin.clear();                // reset error
            cin.ignore(1000, '\n');     // remove bad input
        }

        else{
        if (user_choice >= 1 && user_choice <=4  ){
            
                if (user_choice == 1)
                {
                    cout << "Your balance is: " <<balance<<endl;
                    cout<<endl;
                }
                else if (user_choice ==2){
                    cout << "Enter amount : ";
                    cin >> deposit;

                    if (cin.fail()){
            
                            //incase the user enters something other than numbers
                            cout << "Invalid input. Please enter a number.\n";
                            cout<< endl;
                            cin.clear();                // reset error
                            cin.ignore(1000, '\n');     // remove bad input
                        }
                    else if (deposit <= 0){
                        // to check if user inputs a  negative number
                        cout<< "Invalid Input.Try again...."<< endl;
                        cout <<endl;
                    }
                    else{
                        
                            balance += deposit;
                            cout<<endl;
                            cout <<"Deposit successful" <<endl;
                            cout<<endl;
                }
                    
                }

                else if(user_choice == 3){
                    cout << "Enter amount : ";
                    cin >> withdraw;
                    if (cin.fail()){
            
                        //incase the user enters something other than numbers
                        cout << "Invalid input. Please enter a number.\n";
                        cout<< endl;
                        cin.clear();                // reset error
                        cin.ignore(1000, '\n');     // remove bad input
                    }
                    else if (withdraw <= 0){
                        // to check if user inputs a  negative number
                        cout<< "Invalid Input.Try again...."<< endl;
                        cout <<endl;
                    }
                    else if (withdraw > balance){
                        cout<<"Insufficient Funds"<<endl;
                        cout <<endl;
                    }
                    else {
                        balance -= withdraw;
                        cout<<endl;
                        cout <<"Withdrawal successful" <<endl;
                        cout<<endl;
                    }
        
                }

                else if(user_choice == 4){
                    cout << "Exiting system...."<<endl;
                    is_machine_on = false;
                }
            }
        else{
                cout<< "Invalid Input.Try again...."<< endl;
                cout <<endl;
                
                
            }

    }
    
}
    return 0;
}