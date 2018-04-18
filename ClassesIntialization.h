#ifndef _CLASSES_INITIALIZATION_H_
#define _CLASSES_INITIALIZATION_H_

#include<iostream>
#include<string>
using namespace std;

class Classes
{

public:
	string professors;
	string books;
	string schedule;
    string importantDates;

	void getData(int, string, string, string);
    setSyllabus(importantDates);
};

class Book
{
public:
	string name;
	string isbn;

	void getPrices();
};

class Professor
{
public:
	string name;
	string officeHours;
	string roomNumber;

	void getRating();
};

class AccountController
{
public:
	void createAccount(string userID, string pass, GoogleAccount g); //Complete for iteration 3
	void manageAccount(string userID);
	void deleteAccount(string userID);
	void checkClass(string classID);
	void retrieveClass(string classID);
};

class AccountManagementGUI
{
public:
	void display(string message);
};

class AccountGUI
{
public:
	void display(string message);
};


class LoginGUI
{
public:
	void display(string message);
};

class Schedule
{
public:
	string classID;

	void addClass(string classID);
	void deleteClass(string classID);
};

class User
{
public:
	//Basic User information
	string uid;
	string pwd;
	
	//Creates and holds the classes and the schedules
	string classids[5];
	Schedule classes[5];            // ???

	bool authenticate(string pass);
	void setPassword(string pass);
	void setGoogleAccount() // ???
	void createSchedule(string scheduleID);
	void getSchedule(string scheduleID);
};

class LoginController
{
public:
   User login(string userId, string pass); // "get user"
};

class ScheduleController
{
public:
	void createSchedule(User userID, string scheduleID);
    void addClass(User userID, string scheduleID, string classID);
    void deleteClass(User userID, string scheduleID, string classID);
};

class ScheduleGUI
{
public:
	void display(string message);
};


class DbManager
{
public:
	string classid;
	string GAccount;
	string scheduleid;
	Schedule diffClasses[50];  //Array to hold all the different classes
	User users[50];    //Array to hold all the different users
	

	User getUser(string userID);
	User getClass(string classID);
	User addClass(string classID);
	User deleteUser(string userID);
	User createUser(string userID);
};






#endif /* _CLASSES_INITIALIZATION_H_ */
