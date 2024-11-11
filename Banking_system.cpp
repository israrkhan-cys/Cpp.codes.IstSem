#include <iostream>

using namespace std;

int main() {
	int balance =5000;
	int recepient=500;
	int amount, choice;
	char exit;
	cout<<"\t Welcome to Fast banking System \t"<<endl;
	do{
		
	cout<<endl<<"1. Check balance"<<endl;
	cout<<"2. Deposit money"<<endl;
	cout<<"3. Transfer money"<<endl;
	cout<<"4. Withdraw money"<<endl;
	cout<<"5. Exit "<<endl;
	
	cout<<"Choose an option :";
	cin>>choice;
	
	switch (choice){
	    case 1 : 
	        cout<<"Your Current Balance is :"<<balance;
	    break;
	    
		case 2:
			cout<<"Enter The amount you want to deposit :";
			cin>>amount;
			if(amount>0){
			
			cout<<"Amount Deposited :"<<amount<<endl;
			balance +=amount;
			cout<<"Your new balance is :"<<balance;
		}else{ cout<<"Deposit amount must be Postive ";
		}
			break;
			
		case 3:
		    cout<<"Enter the amount you want to transfer :";
		    cin>>amount;
		    if(amount>0 || amount<=balance){
		    balance -=amount;
		    recepient+=amount;
		    cout<<amount<<" Transferred to recipient"<<endl;
		    cout<<"Your new balnace is :"<<balance<<endl;
			cout<<"Recipient's New balnce is :"<<recepient;
		}else{ cout<<"Transfer amount must be positive ";
		
		}
			break;
			
		case 4 :
			cout<<"Enter Amount to withdraw :";
			cin>>amount;
			if(amount<=balance){
				cout<<"withdrew :"<<amount<<endl;
				balance -=amount;
				cout<<"Your new balance is :"<<balance;
				} else {
					cout<<"You dont have that much money to withdraw";
				}
			break;
		  case 5: { 
                cout << "Are you sure you want to exit? (y/n): ";
                cin >>exit;
                if (exit== 'y' || exit == 'Y') {
                    cout << "Exiting the program. Goodbye!" << endl;
                    return 0;
                } else {
                    cout << "Returning to the menu..." << endl;
                }
                break;
            }
            default:
                cout << "Invalid choice! Please try again." << endl;

	}
	
	cout<<endl<<"Do You want to perform another another action (Y/N) :";
	cin>>exit;
	cout<<"\n";
	} while(exit== 'y' || exit == 'Y');
	cout<<"Thanks For Using Fast Banking system Goodbye !";
	return 0;
}
