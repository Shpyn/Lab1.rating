#ifndef SUBJECT_H
#define SUBJECT_H

#include <string>
#include <unordered_map>
#include "assessment.h"

class Subject {
public:
    Subject(const std::string& name);
    void addAssessment(const std::string& name, Assessment* assessment);
    Assessment* getAssessment(const std::string& name) const;
    virtual int calculateRating() const = 0;

protected:
    bool isAllAssessmentsPassed() const;

private:
    std::string name;
    std::unordered_map<std::string, Assessment*> assessments;
};

#endif // SUBJECT_H


