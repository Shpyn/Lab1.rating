#ifndef ASSESSMENT_H
#define ASSESSMENT_H

class Assessment {
public:
    virtual ~Assessment() {}
    virtual bool isPassed() const = 0;
    virtual int getMark() const = 0;
};

#endif // ASSESSMENT_H

