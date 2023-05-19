#include "physics.h"

Physics::Physics(const std::string& name)
    : Subject(name) {}

int Physics::calculateRating() const {
    if (isAllAssessmentsPassed()) {
        int module1Mark = getAssessment("1mod")->getMark();
        int module2Mark = getAssessment("2mod")->getMark();
        int testMark = getAssessment("test")->getMark();

        int rating = module1Mark + module2Mark + testMark;
        return rating;
    }
    else {
        return 0; // Если есть непройденные оценки, рейтинг будет равен 0
    }
}

