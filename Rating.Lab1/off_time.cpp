#include "off_time.h"

int OffTime::adjustModuleMark(int mark) const {
    if (mark > 25) {
        return 25; // ќценка за модуль невоврем€ равна 25
    }
    else {
        return mark; // ќценка за модуль невоврем€ не измен€етс€, если уже меньше или равна 25
    }
}

