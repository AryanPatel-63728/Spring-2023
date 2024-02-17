#include "userMenu.h"
#include "user.h"
#include "utils.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

UserMenu::UserMenu()
	: Menu("Lab 1: Manage User Accounts")
{
	initSelection();
}

UserMenu::UserMenu(string name)
	: Menu(name) 
{
	initSelection();
	//load user_data.csv
	initData();
}

void UserMenu::initData()
{
	inFile.open(USER_DATA);
	if (inFile.fail())
	{
		cout << "Error opening file " << USER_DATA << endl;
		return;
	}

	//Refrence:
	// Id, Role, Username, Password, Sign - in datetime, etc...

	string line, text;
	int id = 0;
	string role, username, pass, signInText, signoutText, fName, lName, address, city, state, zip, phone, email;
	int count = 0;
	while (getline(inFile, line))
	{
		count++;
		if (count == 1)
		{
			continue;
		}
		istringstream ss(line);
		getline(ss, text, ',');
		id = stoi(text);					//convert from string text type integer
		getline(ss, role, ',');
		getline(ss, username, ',');
		getline(ss, pass, ',');
		getline(ss, signInText, ',');
		getline(ss, signoutText, ',');
		getline(ss, fName, ',');
		getline(ss, lName, ',');
		getline(ss, address, ',');
		getline(ss, city, ',');
		getline(ss, state, ',');
		getline(ss, zip, ',');
		getline(ss, phone, ',');
		getline(ss, email, ',');
		User user;
		user.setID(id);
		user.setRole(role);
		user.setUsername(username);
		user.setPassword(pass);
		user.setSignInDateTime(signInText);
		user.setSignOutDateTime(signoutText);
		user.setFirstname(fName);
		user.setLastname(lName);
		user.setAddress(address);
		user.setCity(city);
		user.setState(state);
		user.setZip(zip);
		user.setPhoneNumber(phone);
		user.setEmail(email);
		list.push_back(user);
	}

	inFile.close();
}

void UserMenu::saveUserData() 
{
	ofstream outFile("users_data.csv");
	if (!outFile) 
	{
		cerr << "Error opening file for writing." << endl;
		return;
	}
	// Write header line
	outFile << "Id,Role,Username,Password,Sign-in datetime,Sign out datetime,First Name,Last Name,Address,City,State,Zip,Phone,Email" << endl;
	// Write user data to file in CSV format
	for (const auto& user : list)
	{
		outFile << user.getID() << ","
			<< user.getUsername() << ","
			<< user.getPassword() << ","
			<< user.getSignInDateTime().toString() << ","
			<< user.getSignOutDateTime().toString() << ","
			<< user.getFirstname() << ","
			<< user.getLastname() << ","
			<< user.getAddress() << ","
			<< user.getCity() << ","
			<< user.getState() << ","
			<< user.getZip() << ","
			<< user.getPhoneNumber() << ","
			<< user.getEmail() << endl;
	}
	cout << "User data saved successfully." << endl;
}

void UserMenu::initSelection()
{
	addOption("1) Sign-in");
	addOption("2) Sign Out");
	addOption("3) Reset Password");
	addOption("4) Create Account");
	addOption("5) Manage Profiles");
	addOption("x) Quit");
}

void UserMenu::activate() 
{
	initData();
	char input = 0;
	do
	{
		input = this->doMenuOption();
		if (input == USER_MENU_SIGNIN)
		{
			signIn();
		}
		else if (input == USER_MENU_SIGNOUT)
		{
			signOut();
		}
		else if (input == USER_MENU_RESET)
		{
			reset();
		}
		else if (input == USER_MENU_CREATE)
		{
			create();
		}
		else if (input == USER_MENU_MANAGEPROFILES)
		{
			manageProfiles();
		}
		else if (input == USER_MENU_EXIT)
		{
			doExit();
		}
		else
		{
			cout << "Invalid Input" << endl;
		}
		cout << "Input: " << input << endl;
	} while (input != '6');

}

void UserMenu::signIn()
{
	string emailorphone, password;

	//- Enter email or mobile phone number
	cout << "Enter your Email or Phone Number: " << endl;
	cin >> emailorphone;
	user.setEmail(emailorphone);

	//- Enter password
	cout << "Enter your Password: " << endl;
	cin >> password;
	user.setPassword(password);

	bool found = false;
	DateTime currentDateTime; // Create an object to store the current date and time

	// Iterate through the list of users
	for (User& u : list) {
		// Check if the email/phone and password match
		if (u.getEmail() == emailorphone && u.getPassword() == password) {
			found = true;
			u.setSignInDateTime(currentDateTime); // Set the sign-in datetime to the current datetime
			u.setSignedIn(true); // Set signedIn flag to true
			user = u; // Update the user object with the signed-in user
			cout << "Sign-in successful." << endl;
			break;
		}
	}
	if (!found) 
	{
		cout << "Invalid username or password. Sign-in failed." << endl;
	}
}

void UserMenu::signOut()
{
	if (user.isSignedIn())
	{
		// Update sign out datetime for the current user
		DateTime currentDateTime;
		user.setSignOutDateTime(currentDateTime);

		// Set signedIn flag to false
		user.setSignedIn(false);

		// Output sign-out successful message
		cout << "Sign-out successful." << endl;

		// Save the updated user data to the file
		saveUserData();
	}
	else
	{
		cout << "No user is currently signed in." << endl;
	}
}

void UserMenu::reset()
{
	// - User must be already sign - in
	if (user.isSignedIn())
	{
		// - Enter old password
		// - Enter new password
		// - Save new password to users_data.csv
	}
	else
	{
		cout << "No user is currently signed in." << endl;
	}
	cout << "TODO : Handle reset" << endl;
}

void UserMenu::create()
{
	//-Enter first and last name
	//- Enter mobile number or email
	//- Enter password
	//- Enter re - enter password
	//- Forgot your password ? Only role = admin can reset your password.
	//- Save new sign - in, sign - out datetime, and data to users_data.csv
	cout << "TODO : Hendle creat profiles " << endl;
}

void UserMenu::manageProfiles()
{
	//-User must be already sign - in
	//- Allow user to change(update or delete) personal information, name, role, address, phone, email
	//- Save new data to users_data.csv
	cout << "TODO : Hendle manage profiles " << endl;
}

void UserMenu::doExit()
{
	//- Enter char 'x' to exit Sign Out and update sign out datetime.
	cout << "TODO : Hendle exit " << endl;
}