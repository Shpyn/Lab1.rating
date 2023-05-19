#include "subject.h"

Subject::Subject(const std::string& name)
    : name(name) {}

void Subject::addAssessment(const std::string& name, Assessment* assessment) {
    assessments[name] = assessment;
}

Assessment* Subject::getAssessment(const std::string& name) const {
    if (assessments.count(name) > 0) {
        return assessments.at(name);
    }
    else {
        return nullptr;
    }
}

bool Subject::isAllAssessmentsPassed() const {
    for (const auto& pair : assessments) {
        Assessment* assessment = pair.second;
        if (!assessment->isPassed()) {
            return false;
        }
    }
    return true;
}

