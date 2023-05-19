#ifndef TEST_H
#define TEST_H

#include "Assessment.h"

class Test : public Assessment {
private:
    int mark;

public:
    Test(int mark);
    bool isPassed() const override;
    int getMark() const override;
};

#endif // Test_H
