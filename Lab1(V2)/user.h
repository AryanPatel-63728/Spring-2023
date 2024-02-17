#pragma once
#include "dateTime.h"
#include <string>

using namespace std;

class User {
public:
	// operators for user.h and user.cpp
	bool operator==(const User&) const;
	bool operator!=(const User&) const;
	bool operator>(const User&) const;
	bool operator<(const User&) const;
	bool operator>=(const User&) const;
	bool operator<=(const User&) const;
	// operators for the instream and outstream
	friend istream& operator >>(istream& in, User& user);
	friend ostream& operator<<(ostream& out, User& user);
	User();
	//ID seter and geter
	void setID(int id);
	int getID() const;
	//Role seter and geter
	void setRole(string role);
	string getRole() const;
	//Username seter and geter
	void setUsername(string username);
	string getUsername() const;
	//Password seter and geter
	void setPassword(string password);
	string getPassword() const;
	//SignInDateTime seter and geter
	void setSignInDateTime(const DateTime dt);
	DateTime getSignInDateTime() const;
	//SignOutDateTime seter and geter
	void setSignOutDateTime(const DateTime dt);
	DateTime getSignOutDateTime() const;
	//Firstname seter and geter
	void setFirstname(string firstname);
	string getFirstname() const;
	//Lastname seter and geter
	void setLastname(string lastname);
	string getLastname() const;
	//Address seter and geter
	void setAddress(string address);
	string getAddress() const;
	//City seter and geter
	void setCity(string city);
	string getCity() const;
	//State seter and geter
	void setState(string state);
	string getState() const;
	//Zip seter and geter
	void setZip(string zip);
	string getZip() const;
	//Email seter and geter
	void setEmail(string email);
	string getEmail() const;
	//Phonenumber seter and geter
	void setPhoneNumber(string phonenumber);
	string getPhoneNumber() const;
	//Do a check to see if the user has signed in or not
	bool isSignedIn() const;
	void setSignedIn(bool signedIn);
private:
	// data memebers from user_data.csv
	int Id;
	string role;
	string username;
	string password;
	DateTime signInDateTime;
	DateTime signOutDateTime;
	string firstname;
	string lastname;
	string address;
	string city;
	string state;
	string zip;
	string email;
	string phonenumber;
	bool signedIn;
};