#ifndef MODULE_H
#define MODULE_H

#include "Assessment.h"

class Module : public Assessment {
private:
    int mark;

public:
    Module(int mark);
    bool isPassed() const override;
    int getMark() const override;
};

#endif // MODULE_H


