#include "user.h"

using namespace std;

User::User()
{
	Id = 0;
}

void User::setID(int id)
{
	this->Id = id;
}

int User::getID() const
{
	return Id;
}

void User::setRole(string role)
{
	this->role = role;
}

string User::getRole() const
{
	return role;
}

void User::setUsername(string username)
{
	this->username = username;
}

string User::getUsername() const
{
	return username;
}

void User::setPassword(string password)
{
	this->password = password;
}

string User::getPassword() const
{
	return password;
}

void User::setSignInDateTime(DateTime dt)
{
    this->signInDateTime = dt;
}

DateTime User::getSignInDateTime() const
{
	return signInDateTime;
}

void User::setSignOutDateTime(DateTime dt)
{
    this->signOutDateTime = dt;
}

DateTime User::getSignOutDateTime() const
{
	return signOutDateTime;
}

void User::setFirstname(string firstname)
{
	this->firstname = firstname;
}

string User::getFirstname() const
{
	return firstname;
}

void User::setLastname(string lastname)
{
	this->lastname = lastname;
}

string User::getLastname() const
{
	return lastname;
}

void User::setAddress(string address)
{
	this->address = address;
}

string User::getAddress() const
{
	return address;
}

void User::setCity(string city)
{
	this->city = city;
}

string User::getCity() const
{
	return city;
}

void User::setState(string state)
{
	this->state = state;
}

string User::getState() const
{
	return state;
}

void User::setZip(string zip)
{
	this->zip = zip;
}

string User::getZip() const
{
	return zip;
}

void User::setEmail(string email)
{
	this->email = email;
}

string User::getEmail() const
{
	return email;
}

void User::setPhoneNumber(string phonenumber)
{
	this->phonenumber = phonenumber;
}

string User::getPhoneNumber() const
{
	return phonenumber;
}

bool User::isSignedIn() const
{ 
	return signedIn;
}

void User::setSignedIn(bool signedIn)
{ 
	this->signedIn = signedIn;
}

bool User::operator==(const User& other) const {
    // Implement logic for equality comparison
	return Id == other.Id &&
		role == other.role &&
		username == other.username &&
		password == other.password &&
		//signInDateTime == other.signInDateTime &&	// does not work right now because of the data type
		//signOutDateTime == other.signOutDateTime && // does not work right now because of the data type
		firstname == other.firstname &&
		lastname == other.lastname &&
		address == other.address &&
		city == other.city &&
		state == other.state &&
		zip == other.zip &&
		email == other.email &&
		phonenumber == other.phonenumber;
}

bool User::operator!=(const User& other) const {
    // Implement logic for inequality comparison
    return !(*this == other);
}

bool User::operator>(const User& other) const {
    // Implement logic for greater than comparison
    return Id > other.Id &&
		role > other.role &&
		username > other.username &&
		password > other.password &&
		//signInDateTime > other.signInDateTime &&	// does not work right now because of the data type
		//signOutDateTime > other.signOutDateTime &&  // does not work right now because of the data type
		firstname > other.firstname &&
		lastname > other.lastname &&
		address > other.address &&
		city > other.city &&
		state > other.state &&
		zip > other.zip &&
		email > other.email &&
		phonenumber > other.phonenumber;
}

bool User::operator<(const User& other) const {
    // Implement logic for less than comparison
    return Id < other.Id &&
		role < other.role &&
		username < other.username &&
		password < other.password &&
		//signInDateTime < other.signInDateTime &&	// does not work right now because of the data type
		//signOutDateTime < other.signOutDateTime &&  // does not work right now because of the data type
		firstname < other.firstname &&
		lastname < other.lastname &&
		address < other.address &&
		city < other.city &&
		state < other.state &&
		zip < other.zip &&
		email < other.email &&
		phonenumber < other.phonenumber;
}

bool User::operator>=(const User& other) const {
    // Implement logic for greater than or equal to comparison
    return !(*this < other);
}

bool User::operator<=(const User& other) const {
    // Implement logic for less than or equal to comparison
    return !(*this > other);
}

std::istream& operator>>(std::istream& in, User& user) {
    // Implement input operator
    return in;
}

std::ostream& operator<<(std::ostream& out, const User& user) {
    // Implement output operator
    return out;
}