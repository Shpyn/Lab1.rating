#include "off_time.h"

int OffTime::adjustModuleMark(int mark) const {
    if (mark > 25) {
        return 25; // ������ �� ������ ��������� ����� 25
    }
    else {
        return mark; // ������ �� ������ ��������� �� ����������, ���� ��� ������ ��� ����� 25
    }
}

