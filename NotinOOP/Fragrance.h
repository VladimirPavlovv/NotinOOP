#pragma once
#include "Review.h"
#include <string>
#include <vector>

enum class FragranceFamily {
    FLORAL,
    WOODY,
    ORIENTAL,
    FRESH,
    CITRUS,
    GOURMAND,
    AQUATIC,
    SPICY
};

class Fragrance {
private:
    int fragranceId;
    std::string name;
    std::string brand;
    double price;
    FragranceFamily fragranceFamily;
    int quantity;
    std::vector<Review*> reviews;

    static int nextId;

public:
    Fragrance(const std::string& name,
        const std::string& brand,
        double price,
        FragranceFamily fragranceFamily,
        int quantity);
    ~Fragrance();

    int getFragranceId() const;
    std::string getName() const;
    std::string getBrand() const;
    double getPrice() const;
    FragranceFamily getFragranceFamily() const;
    int getQuantity() const;

    const std::vector<Review*>& getReviews() const;

    void setPrice(double price);
    void addQuantity(int amount);
    void decreaseQuantity(int amount);

    void addReview(Review* review);
    void removeReview(int reviewId);

    double getRating() const;
    void   show()      const;
};