#include "Base.h"

#include <iostream>

using namespace std;

//CRUD
void Base::add_child(Base* child) {
    child->pParent = this;
    childs.push_back(child);
}

//SETTERS
void Base::set_name(std::string name) {
    this->name = name;
}
void Base::set_state(int state) {
    this->state = state;
}


//GETTERS
std::string Base::get_name() {
    return this->name;
}
int Base::get_state() {
    return this->state;
}
Base* Base::get_child(std::string name) {
    if (name == this->name) {
        return this;
    }
    if (!childs.empty()) {
        for (iter_ = childs.begin(); iter_ != childs.end(); iter_++) {
            Base* res = (*iter_)->get_child(name);
            if (res) return res;
        }
    }
    return nullptr;
}
Base* Base::get_child(std::string name, Base* pParent_prev) {
    if ((name == this->name) && (pParent == pParent_prev)) {
        return this;
    }
    if (!childs.empty()) {
        for (int i = 0; i < childs.size(); i++) {
            if (childs[i]->get_child(name, pParent_prev)) return childs[i]->get_child(name, pParent_prev);
        }
    }
    return nullptr;
}
Base* Base::get_object(std::string PATH) {
    string s_path_item;
    Base* pParent_next;
    Base* pChild;
    int level_next = 2;
    pParent_next = get_object_root();
    s_path_item = get_path_item(PATH, 1);
    if (s_path_item != get_object_root()->get_name()) return nullptr;
    s_path_item = get_path_item(PATH, level_next);
    while (!s_path_item.empty()) {
        pChild = pParent_next->get_child(s_path_item, pParent_next);
        if ((pChild) && ((pChild->pParent) == pParent_next)) {
            pParent_next = pChild;
            level_next++;
            s_path_item = get_path_item(PATH, level_next);
        }
        else {
            return nullptr;
        }
    }
    return pParent_next;
}

//SHOWERS
void Base::show_tree() {
    int level = 0;
    tree_next(this, level);
}
void Base::show_simple_tree() {
    if (!childs.empty()) {
        cout << endl << name;
        for (int i = 0; i < childs.size(); i++)
            cout << "  " << childs[i]->get_name();
        for (int i = 0; i < childs.size(); i++)
            childs[i]->show_simple_tree();
    }
}
void Base::show_states() {
    state_next(this);
}
void Base::show_founded_objects_by_path() {
    while (true) {
        string path;
        cin >> path;
        if (path.size() == 2 && path[0] == '/' && path[1] == '/') break;
        cout << endl << path << ' ' << "Object ";
        if (path[0] == '/' && path[1] == '/' && path.size() > 2) {
            Base* obj = get_child(path.substr(2));
            if (obj != nullptr) {
                cout << "name: " << obj->get_name();
            }
            else {
                cout << "not found";
            }
        }
        else {
            Base* obj = get_object(path);
            if (obj != nullptr) {
                cout << "name: " << obj->get_name();
            }
            else {
                cout << "not found";
            }
        }
    }
}

//RECURSION_HELPERS
void Base::state_next(Base* parent) {
    if (parent->get_state() >= 1) {
        cout << "The object " << parent->get_name() << " is ready" << endl;
    }
    else {
        cout << "The object " << parent->get_name() << " is not ready" << endl;
    }
    if (parent->childs.empty()) return;
    parent->iter_ = parent->childs.begin();
    while (parent->iter_ != parent->childs.end()) {
        state_next((Base*)(*(parent->iter_)));
        parent->iter_++;
    }
}
void Base::tree_next(Base* parent, int level) {
    string space;
    if (level > 0) space.append(4 * level, ' ');
    cout << space << parent->get_name() << endl;
    if (parent->childs.empty()) return;
    parent->iter_ = parent->childs.begin();
    while (parent->iter_ != parent->childs.end()) {
        tree_next((Base*)(*(parent->iter_)), level + 1);
        parent->iter_++;
    }
}

//GET_HELPERS
std::string Base::get_path_item(std::string path, int level) {
    int item_start, item_end, lc;
    lc = item_start = 1;
    while (item_start) {
        item_end = path.find('/', item_start);
        if (lc == level) {
            return path.substr(item_start, item_end - item_start);
        }
        lc++;
        item_start = item_end + 1;
    }
    return "";
}
Base* Base::get_object_root() {
    Base* pParent_prev;
    if (pParent == nullptr) return this;
    pParent_prev = pParent;
    while (pParent_prev->pParent) {
        pParent_prev = pParent_prev->pParent;
    }
    return pParent_prev;
}


//SIGNAL_INTERACTION

void Base::set_connect(void(*p_signal)(string&), Base* p_ob_handler, void(*p_handler)(Base* p_pb, string&)){
    void(*p_key)(string&);
    o_sh* p_value;
    if (connects.size() > 0) {
        it_connects = connects.begin();
        while (it_connects != connects.end()) {
            p_key = it_connects->first;
            p_value = it_connects->second;
            if ((p_key) == p_signal && (p_value->p_cl_base) == p_ob_handler && (p_value->p_handler) == p_handler) {
                return;
            }
            it_connects++;
        }
    }
    p_value = new o_sh();
    p_value->p_cl_base = p_ob_handler;
    p_value->p_handler = p_handler;
    connects.insert({ p_signal, p_value });
}

void Base::emit_signal(void(*s_ignal)(string&), string& s_command){
    void(*p_handler)(Base * p_ob, string&);
    if (connects.empty()) return;
    if (connects.count(s_ignal) == 0) return;
    (s_ignal)(s_command);
    it_connects = connects.begin();
    while (it_connects != connects.end()) {
        if ((it_connects->first) == s_ignal) {
            p_handler = it_connects->second->p_handler;
            (p_handler)(it_connects->second->p_cl_base, s_command);
        }
        it_connects++;
    }
}