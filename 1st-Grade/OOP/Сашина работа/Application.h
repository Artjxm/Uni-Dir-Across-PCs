#pragma once
#include "Base.h"
#include "Objects.h"

class Application : public Base {
public:
    Application();                         //�����������
    void exec();                           //����� ������� ���������� (������� ������ ������ ����������)
private:
    Reader* reader;
    Calculator* calc;
    Writer* writer;

    void create_objects_tree();
    void set_signals();
};
