#ifndef OFF_TIME_H
#define OFF_TIME_H

#include "time.h"

class OffTime : public Time {
public:
    int adjustModuleMark(int mark) const override;
};

#endif // OFF_TIME_H


