#pragma once
#include <string>

using namespace std;

class User
{
	static int idCounter;

protected:
	string name;
	string password;
	int id;

public:
	User(int id, string name, string password);
	virtual ~User() = default;

	int getId() const;
	string getName() const;
	string getPassword() const;

	virtual void help() const = 0;
	virtual string getRole() const = 0;
};

