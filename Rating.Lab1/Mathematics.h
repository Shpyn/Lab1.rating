#ifndef MATHEMATICS_H
#define MATHEMATICS_H

#include "subject.h"

class Mathematics : public Subject {
public:
    Mathematics(const std::string& name);
    int calculateRating() const override;
};

#endif // MATHEMATICS_H

