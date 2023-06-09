#include "Mathematics.h"

Mathematics::Mathematics(const std::string& name)
    : Subject(name) {}

int Mathematics::calculateRating() const {
    if (isAllAssessmentsPassed()) {
        int module1Mark = getAssessment("1mod")->getMark();
        int module2Mark = getAssessment("2mod")->getMark();
        int testMark = getAssessment("test")->getMark();

        int rating = module1Mark + module2Mark + testMark;
        return rating;
    }
    else {
        return 0; // ���� ���� ������������ ������, ������� ����� ����� 0
    }
}

