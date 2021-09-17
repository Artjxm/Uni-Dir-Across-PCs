#pragma once
#include <string>
#include <vector>
#include <string>
#include <stack>
#include <map>
using namespace std;

#define SIGNAL_D(signal_f)((void(*)(string &))(&(signal_f)))
#define HANDLER_D(handler_f)((void(*)(Base*, string &))(&(handler_f)))

class Base {
public:
    //crud
    void add_child(Base* child);           //Добавить потомка объекту

    //setters
    void set_name(std::string name);        //Установить имя объекту
    void set_state(int state);              //Установить статус объекту

    //getters
    std::string get_name();                                  //Получить имя объекта
    int get_state();                                         //Получить статус объекта
    Base* get_child(std::string name);                       //Получить объект потомка по имени
    Base* get_child(std::string name, Base* pParent_prev);   //Перегрузка get_child
    Base* get_object(std::string PATH);                      //Получить объект по путю PATH

    //showers
    void show_tree();                       //Вывод дерева (КЛ_2)
    void show_simple_tree();                //Вывод дерева построчно (4_1_1)
    void show_states();                     //Вывод результатов проверки статусов объектов (КЛ_1)
    void show_founded_objects_by_path();    //Вывод результатов поиска по путю (КЛ_3)

    void set_connect(void(*s_ignal)(string&), Base* p_ob_handler, void(*h_andler)(Base* p_pb, string&));
    void emit_signal(void(*s_ignal)(string&), string& cmd);

private:

    int state;                                //Статус объекта
    std::string name;                         //Имя объекта
    Base* pParent = nullptr;                  //Указатель на объект
    std::vector<Base*> childs;                //Вектор, содержащий потомков
    std::vector<Base*>::iterator iter_;       //Итератор для перебора объектов, содержащихся в childs                          
    struct o_sh {
        Base* p_cl_base;
        void (*p_handler)(Base* p_ob, string&);
    };
    std::multimap<void(*)(string&), o_sh*> connects;
    std::multimap<void(*)(string&), o_sh*>::iterator it_connects;




    //recursion_helpers
    void state_next(Base* parent);                 //Help-метод отображения вложенности статусов
    void tree_next(Base* parent, int level);       //Help-метод отображения вложенности дерева

    //get_helpers
    std::string get_path_item(std::string path, int level);  //Получить имя объекта по путю
    Base* get_object_root();                                 //Получить корневой объект объекта
};

