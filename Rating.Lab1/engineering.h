#ifndef ENGINEERING_H
#define ENGINEERING_H

#include "subject.h"

class Engineering : public Subject {
public:
    Engineering(const std::string& name);
    int calculateRating() const override;
};

#endif // ENGINEERING_H
