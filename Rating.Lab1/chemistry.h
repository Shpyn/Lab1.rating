#ifndef CHEMISTRY_H
#define CHEMISTRY_H

#include "subject.h"

class Chemistry : public Subject {
public:
    Chemistry(const std::string& name);
    int calculateRating() const override;
};

#endif // CHEMISTRY_H

