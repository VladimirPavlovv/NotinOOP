#pragma once
#include <string>
#include <vector>

class Fragrance;

enum class PurchaseStatus {
    PENDING,
    DELIVERED,
    CANCELED
};

class Purchase {
private:
    static int nextId;

    int purchaseId;
    std::vector<Fragrance*> fragrances;
    PurchaseStatus status;
    int userId;

public:
    Purchase(int userId, const std::vector<Fragrance*>& fragrances);
    ~Purchase() = default;

    int getPurchaseId() const;
    int getUserId() const;
    PurchaseStatus getStatus() const;
    double getTotalPrice() const;

    const std::vector<Fragrance*>& getFragrances() const;

    void setStatus(PurchaseStatus status);

    void show() const;
};