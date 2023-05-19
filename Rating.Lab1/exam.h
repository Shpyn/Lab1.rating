#ifndef EXAM_H
#define EXAM_H

#include "Assessment.h"

class Exam : public Assessment {
private:
    int mark;

public:
    Exam(int mark);
    bool isPassed() const override;
    int getMark() const override;
};

#endif // EXAM_H


