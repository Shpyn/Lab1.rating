#ifndef PHYSICS_H
#define PHYSICS_H

#include "subject.h"

class Physics : public Subject {
public:
    Physics(const std::string& name);
    int calculateRating() const override;
};

#endif // PHYSICS_H

