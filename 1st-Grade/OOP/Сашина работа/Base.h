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
    void add_child(Base* child);           //�������� ������� �������

    //setters
    void set_name(std::string name);        //���������� ��� �������
    void set_state(int state);              //���������� ������ �������

    //getters
    std::string get_name();                                  //�������� ��� �������
    int get_state();                                         //�������� ������ �������
    Base* get_child(std::string name);                       //�������� ������ ������� �� �����
    Base* get_child(std::string name, Base* pParent_prev);   //���������� get_child
    Base* get_object(std::string PATH);                      //�������� ������ �� ���� PATH

    //showers
    void show_tree();                       //����� ������ (��_2)
    void show_simple_tree();                //����� ������ ��������� (4_1_1)
    void show_states();                     //����� ����������� �������� �������� �������� (��_1)
    void show_founded_objects_by_path();    //����� ����������� ������ �� ���� (��_3)

    void set_connect(void(*s_ignal)(string&), Base* p_ob_handler, void(*h_andler)(Base* p_pb, string&));
    void emit_signal(void(*s_ignal)(string&), string& cmd);

private:

    int state;                                //������ �������
    std::string name;                         //��� �������
    Base* pParent = nullptr;                  //��������� �� ������
    std::vector<Base*> childs;                //������, ���������� ��������
    std::vector<Base*>::iterator iter_;       //�������� ��� �������� ��������, ������������ � childs                          
    struct o_sh {
        Base* p_cl_base;
        void (*p_handler)(Base* p_ob, string&);
    };
    std::multimap<void(*)(string&), o_sh*> connects;
    std::multimap<void(*)(string&), o_sh*>::iterator it_connects;




    //recursion_helpers
    void state_next(Base* parent);                 //Help-����� ����������� ����������� ��������
    void tree_next(Base* parent, int level);       //Help-����� ����������� ����������� ������

    //get_helpers
    std::string get_path_item(std::string path, int level);  //�������� ��� ������� �� ����
    Base* get_object_root();                                 //�������� �������� ������ �������
};

