#pragma once
#include "User.h"

class Admin : public User
{
public:
	Admin(string name, string password);
	~Admin() override;

	string getRole() const override;
	void help() const override;

	void createAdmin(const string& name, const string& password);
	void blockUser(const string& username);

	void addFragnance(const string& name, const string& brand, double price, const string& franganceFamily);
	void addQuantity(const string& fragnanceName, int quantity);

	void deliverOrder(const string& orderId);

	void removeReview(const string& fragnanceName, const string& reviewId);
};

