#pragma once
#include <string>

using namespace std;

class Review {
private:
    int reviewId;
    string fragranceName;
    int userId;
    string comment;
    double rating;

    static int nextId;

public:
    Review(int userId,
        const string& fragranceName,
        double rating,
        const string& comment);

    int getReviewId() const;
    int getUserId() const;
    string getFragranceName() const;
    string getComment() const;
    double getRating() const;
    void show() const;
};