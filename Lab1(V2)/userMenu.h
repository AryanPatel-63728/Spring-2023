#pragma once
#include "menu.h"
#include "user.h"
#include <fstream>
#include <vector>

const string USER_DATA = "users_data.csv";

enum USER_MENU_OPTION {
	USER_MENU_SIGNIN = '1',
	USER_MENU_SIGNOUT = '2',
	USER_MENU_RESET = '3',
	USER_MENU_CREATE = '4',
	USER_MENU_MANAGEPROFILES = '5',
	USER_MENU_EXIT = 'x'
};

class UserMenu : public Menu 
{
public:
	UserMenu();
	UserMenu(string name);

	void initSelection();

	//Entry point into the UserMenu component
	void activate();

private:
	// The menu options - member
	void signIn();			// USER_MENU_SIGNIN
	void signOut();			// USER_MENU_SIGNOUT
	void reset();			// USER_MENU_RESET
	void create();			// USER_MENU_CREATE
	void manageProfiles();  // USER_MENU_MANAGEPROFILES
	void doExit();			// USER_MENU_DOEXIT
	void initData();		// read users_data.csv
	void saveUserData();	// saves data into users_data.csv

	// Member variables and any other variables if necessary
	fstream inFile;			// file pointer
	User user;				// instance of user signs in
	vector<User> list;		// list of users from user_data.csv
};