#pragma once
#include "Discount.h"

class BrandDiscount : public Discount {
private:
    string brandName;

public:
    BrandDiscount(double discountPercent, const std::string& brandName);

    std::string getBrandName() const;

    double apply(const std::vector<Fragrance*>& fragrances) const override;

    void show() const override;
};