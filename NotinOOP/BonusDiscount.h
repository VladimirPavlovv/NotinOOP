#pragma once
#include "Discount.h"

class BonusDiscount : public Discount {
private:
    double bonus;  

public:
    BonusDiscount(double discountPercent, double bonus);

    double getBonus() const;

    double apply(const vector<Fragrance*>& fragrances) const override;

    void show() const override;
};