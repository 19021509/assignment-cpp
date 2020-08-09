#include<iostream>
#include<stdio.h>
using namespace std;

class account {
private:
	int accountBalance;
public:
	account(int balance) {
		if (balance > 0)
		{
			accountBalance = balance;
		} else {
			cout << "Balance can't be negative.. setting it to zero \n";
			balance = 0;
			accountBalance = balance;

		}
	}
	void Credit(int amount)
	{
		accountBalance += amount;

	}
	void Debit (int amount)
	{
		int temp = accountBalance - amount;
		if (temp > 0)
		{
			accountBalance -= amount;

		} else {
			cout << "Debit amount exceeded account balance. \n";
		}
	}
	int getBalance ()
	{
		return accountBalance;
	}

};
int main()
{
/*
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt", "w" , stdout);
#endif
*/
	int openBalance;
	cout << "enter the amount you want to start vinod account with? \n";
	cin >> openBalance;
	account vinod(openBalance);
	int paisa;
	cout << "enter the amount you want to add in vinod's account? \n";
	cin >> paisa;
	vinod.Credit(paisa);
	cout << vinod.getBalance() << "\n";
	double paisa1 ;
	cout << "enter the amount you want to remove in vinod's account? \n";
	cin >> paisa1;
	vinod.Debit(paisa1);
	cout << vinod.getBalance() << "\n";
	cout << "enter the amount you want to start Vishesh account with? \n";
	cin >> openBalance;
	account Vishesh(openBalance);
	cout << "enter the amount you want to add in Vishesh's account? \n";
	cin >> paisa;
	Vishesh.Debit(paisa);
	cout << Vishesh.getBalance() << "\n";
	cout << "enter the amount you want to remove in Vishesh's account? \n";
	cin >> paisa1;
	Vishesh.Debit(paisa1);
	cout << Vishesh.getBalance() << "\n";






	return 0;
}
