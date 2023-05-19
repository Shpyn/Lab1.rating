#include "exam.h"

Exam::Exam(int mark)
    : mark(mark) {}

bool Exam::isPassed() const {
    return mark >= 25;
}

int Exam::getMark() const {
    return mark;
}

