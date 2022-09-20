#include <iostream>
#include <string>
using namespace std;
int user_cnt = 0;

class Account {
	private:
		int user_id;
		string name;
		int money;
	public:
		Account(){	user_id = 0; name = "";	money = 0;	}
		void setAccount(string name) {	user_id = user_cnt;	this->name = name;	}
		void printAccount() const {
			cout << "User : " << user_id << "\tName : " << name << "\tMoney : " << money << endl;
		}
		void outAccount(int out){	
			if(money < out)	cout << "\nError : Not enough money..." << endl;
			else	money -= out;
		}
		void inAccount(int in){ money += in;	}
		string getName(){	return name;	}
		int getMoney(){	return money;	}
};
class Bank {
	private:
		Account account[5];
	public:
		void create(string name){	account[user_cnt].setAccount(name);	}
		void deposit(int id, int money){
			if(account[id].getName() == "")	cout << "\nError : No exist user ..." << endl;
			else	account[id].inAccount(money);
		}
		void withdraw(int id, int money){
			if(account[id].getName() == "") cout << "\nError : No exist user ..." << endl;
			else {
				cout << "\nTry to withdraw " << money << " from USER" << id << " ... " << endl;
				account[id].outAccount(money);
			}
		}
		void send(int idfrom, int idto, int money){
			if((account[idfrom].getName() == "") || (account[idto].getName() == ""))	cout << "\nError : No exist user ..." << endl;
			else {
				cout << "\nTry to send " << money << " from USER" << idfrom << " to USER" << idto << " ... " << endl;
				if(account[idfrom].getMoney() < money)	cout << "\nError : Not enough money..." << endl;
				else {
					account[idfrom].outAccount(money);
					account[idto].inAccount(money);
				}
			}
		}
		void print(){
			cout << "\n ######## Bank User Info ######## " << endl;
			for(int i=0; i<user_cnt; i++)	account[i].printAccount();
			cout << "\n";
		}
};

int main()
{
	Bank bank;
	int command, id, money, idfrom, idto;
	string name;
	while(1){
		cout << "0. Create Account | 1. Deposit | 2. Withdraw | 3. Send | 4. Exit" << endl;
		cout << "Enter Command : ";
		cin >> command;
		if(command == 4) {
			bank.print();
			break;
		}
		else if(command == 0)	{ // 유저 생성
			if(user_cnt >= 5)	cout << "\nError : Max user..." << endl;
			else {
				cout << "\nEnter user name : ";
				cin >> name;
				bank.create(name);
				user_cnt++;
			}
		}
		else if(command == 1) { //예금
			cout << "\nEnter User idx : ";
			cin >> id;
			cout << "Enter money : ";
			cin >> money;
			bank.deposit(id, money);
		}
		else if(command == 2) { //출금
			cout << "\nEnter User idx : ";
			cin >> id;
			cout << "Enter money : ";
			cin >> money;
			bank.withdraw(id, money);
		}
		else if(command == 3) { //송금
			cout << "\nEnter User idx (From): ";
			cin >> idfrom;
			cout << "Enter User idx (To): ";
			cin >> idto;
			cout << "Enter money : ";
			cin >> money;
			bank.send(idfrom, idto, money);
		}
		else	cout << "\nCommand Error!" << endl;
		bank.print();
	}
	return 0;
}