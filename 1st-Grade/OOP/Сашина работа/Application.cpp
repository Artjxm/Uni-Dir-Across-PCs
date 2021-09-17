#include <iostream>
#include "Application.h"


using namespace std;

//PUBLIC
Application::Application() {
    set_name("root");
    set_state(1);
}
void Application::exec() {
    create_objects_tree();
    set_signals();
    reader->read_expression(calc);
    while (!calc->signs.empty()) {
        string f_op = calc->get_operand();
        string sign_ = calc->get_sign();
        string s_op = calc->get_operand();
        emit_signal(SIGNAL_D(reader->signal_1), f_op);
        emit_signal(SIGNAL_D(reader->signal_2), sign_);
        emit_signal(SIGNAL_D(reader->signal_3), s_op);
        if (!calc->signs.size() == 0) cout << endl;
    }
}

void Application::create_objects_tree(){
    reader = new Reader("reader");
    calc = new Calculator("calculator");
    writer = new Writer("writer");
    this->add_child(calc);
    this->get_child("calculator")->add_child(reader);
    this->get_child("calculator")->add_child(writer);
}

void Application::set_signals(){
    this->set_connect(SIGNAL_D(reader->signal_1), calc, HANDLER_D(calc->handler_1));
    this->set_connect(SIGNAL_D(reader->signal_2), calc, HANDLER_D(calc->handler_2));
    this->set_connect(SIGNAL_D(reader->signal_3), calc, HANDLER_D(calc->handler_3));
    calc->set_connect(SIGNAL_D(calc->signal_4), writer, HANDLER_D(writer->handler_4));
}