#pragma once
#include "Base.h"
#include "Objects.h"

class Application : public Base {
public:
    Application();                         //Конструктор
    void exec();                           //Метод запуска приложения (Описать логику работы приложения)
private:
    Reader* reader;
    Calculator* calc;
    Writer* writer;

    void create_objects_tree();
    void set_signals();
};
