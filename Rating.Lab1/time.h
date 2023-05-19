#ifndef TIME_H
#define TIME_H

class Time {
public:
    virtual ~Time() {}
    virtual int adjustModuleMark(int mark) const = 0;
};

#endif // TIME_H

