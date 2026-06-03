#pragma once
#include <string>
#include <vector>
#include "Fragrance.h"

using namespace std;

class Discount {
protected:
    int discountId;
    double discountPercent;  // 0.0 - 100.0

    static int nextId;

public:
    Discount(double discountPercent);
    virtual ~Discount() = default;

    int getDiscountId() const;
    double getDiscountPercent() const;

    virtual double apply(const vector<Fragrance*>& fragrances) const = 0;

    virtual void show() const;
};