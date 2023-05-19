#ifndef COURSEWORK_H
#define COURSEWORK_H

#include "assessment.h"

class Coursework : public Assessment {
private:
    int mark;

public:
    Coursework(int mark);
    bool isPassed() const override;
    int getMark() const override;
};

#endif // COURSEWORK_H
