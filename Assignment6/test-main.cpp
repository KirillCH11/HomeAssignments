#include <iostream>
#include "Temple_Class.cpp"
#include <gtest/gtest.h>


TEST(TemplateClassTest, Class1True) {
    Class_1 c1;
    TemplateClass<Class_1> mt(c1, 1, {});
    ASSERT_TRUE(mt.foo());
}

TEST(TemplateClassTest, Class1False) {
    Class_1 c1;
    TemplateClass<Class_1> mt(c1, -1, {});
    ASSERT_FALSE(mt.foo());
}

TEST(TemplateClassTest, Class2True) {
    Class_2 c2;
    TemplateClass<Class_2> mt(c2, 0, {1.0f});
    ASSERT_TRUE(mt.foo());
}

TEST(TemplateClassTest, Class2False) {
    Class_2 c2;
    TemplateClass<Class_2> mt(c2, 0, {});
    ASSERT_FALSE(mt.foo());
}

TEST(TemplateClassTest, Class3True) {
    Class_3 c3;
    TemplateClass<Class_3> mt(c3, -3, {1.0f, 2.0f, 3.0f});
    ASSERT_TRUE(mt.foo());
}

TEST(TemplateClassTest, Class3False) {
    Class_3 c3;
    TemplateClass<Class_3> mt(c3, 3, {1.0f, 2.0f, 3.0f});
    ASSERT_FALSE(mt.foo());
}

TEST(TemplateClassSpecializationTest, IntSpecialization) {
    TemplateClass<int> mt(0, 0, {});
    ASSERT_TRUE(mt.foo());
}

TEST(TemplateClassSpecializationTest, DoubleSpecialization) {
    TemplateClass<double> mt(0.0, 0, {});
    ASSERT_FALSE(mt.foo());
}
