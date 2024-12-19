/* Churkin Kirill st129364@student.spbu.ru
	task 6
*/


#include <iostream>
#include <vector>
#include <gtest/gtest.h>


template<typename T>
class TemplateClass {
public:
    T instance;
    int number;
    std::vector<float> vec;

    TemplateClass(T inst, int num, const std::vector<float>& v)
        : instance(inst), number(num), vec(v) {}

    bool foo() {
        return instance.bar(number, vec);
    }
};



template<>
class TemplateClass<int> {
public:
    int instance;
    int number;
    std::vector<float> vec;

    TemplateClass(int inst, int num, const std::vector<float>& v)
        : instance(inst), number(num), vec(v) {}

    bool foo() {
        return true;
    }
};



template<>
class TemplateClass<double> {
public:
    double instance;
    int number;
    std::vector<float> vec;

    TemplateClass(double inst, int num, const std::vector<float>& v)
        : instance(inst), number(num), vec(v) {}

    bool foo() {
        return false;
    }
};


class Class_1 {
public:
    bool bar(int num, std::vector<float>& vec) {
        return num > 0;
    }
    
    int c_1_1() { return 1; }
    float c_1_2() { return 1.0f; }
    void c_1_3() {}
};


class Class_2 {
public:
    bool bar(int num, std::vector<float>& vec) {
        return !vec.empty();
    }
    
    int c_2_1() { return 2; }
    float c_2_2() { return 2.0f; }
    void c_2_3() {}
};


class Class_3 {
public:
    bool bar(int num, std::vector<float>& vec) {
        return num == -(int)vec.size();
    }
    
    int c_3_1() { return 3; }
    float c_3_2() { return 3.0f; }
    void c_3_3() {}
};
