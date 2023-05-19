#ifndef ON_TIME_H
#define ON_TIME_H

#include "time.h"

class OnTime : public Time {
public:
    int adjustModuleMark(int mark) const override;
};

#endif // ON_TIME_H

