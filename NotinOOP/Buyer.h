#pragma once
#include <vector>
#include "User.h"
#include "Fragrance.h"
#include "Purchase.h"
#include "Discount.h"

class Buyer : public User
{
	vector<Fragrance*> cart;
	vector<Purchase*> purchases;
	vector<Fragrance*> wishlist;
	vector<Discount*> vouchers;
	double balance;
	int removedReviewCount;

public:
	Buyer(string name, string password);
	~Buyer() override;

	string getRole() const override;
	void help() const override;

	void addToBalance(double amount);
	double getBalance() const;

	void addToCart(const string& fragnanceName);
	void removeFromCart(const string& fragnanceName);
	void viewCart();

	void addToWishlist(const string& fragnanceName);
	void removeFromWishlist(const string& fragnanceName);

	void checkout();
	void cancelPurchase(const string& purchaseId);
	void viewBought() const;
	void viewPurchases() const;

	void recommend() const;

	void makeReview(const string& fragnanceName, double rating, const string& comment);

	void incrementRemovedReviewCount();
	void getRemovedReviewCount() const;
};

