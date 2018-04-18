#include<iostream>
#include<iomanip>
#include<string>
#include"ClassesIntialization.h"
using namespace std;

void startProgram();

int main()
{
	startProgram();
	system("pause");
	return 0;
}

void startProgram()
{
	//Creating the objects
	DbManager Database;
	//LoginGUI loginScreen;
	LoginController test;

	//Test cases to check if it works
	Database.users[0].uid = "jia";
	Database.users[0].pwd = "123";
	Database.users[1].uid = "inshal";
	Database.users[1].pwd = "321";

	string id, pass;
	User currentU;
	cout << "Enter in user Information\n" << "User id: ";
	getline(cin, id);

	cout << "Password: "; 
	getline(cin, pass);

	int count = 0;
	bool flag; 
	do
	{
		while (count < 50)
		{
			if (Database.users[count].uid == id)
				break;
			count++;
		}
		if (Database.users[count].authenticate(pass))
		{
			cout << "Attempting to login... \n";
			//Attempting to get the user and initialize 
			//currentU = test.login(Database.users[count].uid, Database.users[count].pwd);
			cout << "login Successful" << endl;
			flag = true;
		}
		else
			cout << "Wrong Credentials \n";
	} while (!flag);
}

bool User::authenticate(string pass)
{
	if (pwd == pass)
		return true;
	else
		return false;
}

/*
User LoginController::login(string userID.string pass)
{
	cout << "Login Successful" << endl;
}
*/
