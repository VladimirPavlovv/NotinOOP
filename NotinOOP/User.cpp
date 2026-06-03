#include "User.h"

int User::idCounter = 1;

User::User(int id, string name, string password) : id(idCounter++), name(name), password(password)
{
}

int User::getId() const
{
    return this->id;
}

string User::getName() const
{
    return this->name;
}

string User::getPassword() const
{
    return this->password;
}
