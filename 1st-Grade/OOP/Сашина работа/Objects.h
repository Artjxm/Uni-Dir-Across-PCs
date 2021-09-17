#pragma once
#include "Base.h"
#include <stack>
using namespace std;



class Calculator : public Base {
public:
    stack<string> signs;
    stack<string> figures;
    std::string sign, l_operand, r_operand, l_r_result;

    Calculator(string name) {
        set_name(name);
    }
    //signals
    static void signal_4() {};

    //handlers
    static void handler_1(Calculator* p_ob, string& first) {
        p_ob->l_operand = first;
    }
    static void handler_2(Calculator* p_ob, string& symb) {
        p_ob->sign = symb;
    }
    static void handler_3(Calculator * p_ob, string& second) {
        p_ob->r_operand = second;
        if (p_ob->sign == "+") {
            p_ob->l_r_result = to_string(atoi(p_ob->l_operand.c_str()) + atoi(p_ob->r_operand.c_str()));
        }
        else if (p_ob->sign == "-") {
            p_ob->l_r_result = to_string(atoi(p_ob->l_operand.c_str()) - atoi(p_ob->r_operand.c_str()));
        }
        else if (p_ob->sign == "*") {
            p_ob->l_r_result = to_string(atoi(p_ob->l_operand.c_str()) * atoi(p_ob->r_operand.c_str()));
        }
        else if (p_ob->sign == "%") {
            p_ob->l_r_result = to_string(atoi(p_ob->l_operand.c_str()) % atoi(p_ob->r_operand.c_str()));
        }
        p_ob->figures.push(p_ob->l_r_result);
        string str = p_ob->l_operand + " " + p_ob->sign + " " + p_ob->r_operand + " = " + p_ob->l_r_result;
        p_ob->emit_signal(SIGNAL_D(p_ob->signal_4), str);
    }


    void set_expression(string expression) {
        std::string buff = "";
        int k = 1;
        for (int i = expression.size() - 1; i >= 0; i--) {
            if (expression[i] != ' ') {
                buff.push_back(expression[i]);
            }
            else {
                if (k % 2 == 0) {
                    this->signs.push(buff);
                }
                else {
                    reverse_string(buff);
                    figures.push(buff);
                }
                k++;
                buff = "";
            }
        }
        reverse_string(buff);
        figures.push(buff);
    }

    string get_operand() {
        string temp = this->figures.top();
        this->figures.pop();
        return temp;
    }

    string get_sign() {
        string temp = this->signs.top();
        this->signs.pop();
        return temp;
    }

private:
    void reverse_string(std::string& str) {
        int n = str.length();
        for (int i = 0; i < n / 2; i++) {
            std::swap(str[i], str[n - i - 1]);
        }
    }
};


class Reader : public Base {
public:
    Reader(string name) {
        set_name(name);
    }
    //signals
    static void signal_1() {};
    static void signal_2() {};
    static void signal_3() {};


    void read_expression(Calculator* calc) {
        string exp;
        getline(cin, exp);
        calc->set_expression(exp);
    }

};

class Writer : public Base {
public:

	Writer(string name) {
		set_name(name);
	}

    static void handler_4(Calculator* p_ob, string& result) {
        cout << result;
    }
};