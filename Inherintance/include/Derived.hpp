#pragma once
#include "Base.hpp"
#include <iostream>
using namespace std;


class Derived:public Base{
    // a will be public
    // b will be protected
    // c will not be accessible
    private:
        int double_value;

    public:
        Derived();
        Derived(int x);
        void access_base_members(){
            a=100;
            b=200;
            // c=300; // c is not accessible
        }
        ~Derived();
};