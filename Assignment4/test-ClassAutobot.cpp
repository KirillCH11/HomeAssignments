#include <gtest/gtest.h>
#include "ClassAutobot.h"


TEST(AutobotTest, DefaultConstructor) 
{
    Autobot a;
    EXPECT_EQ(a.getMask(), 0);
    EXPECT_EQ(a.getSpeed(), 0);   
}

TEST(AutobotTest, SetGetAttributes) 
{
    Autobot a;
    a.setMask(777);
    a.setSpeed(888);
    
    EXPECT_EQ(a.getMask(), 777);
    EXPECT_EQ(a.getSpeed(), 888);
}

TEST(AutobotTest, Transform_method)
{
	Autobot a;
 	ASSERT_TRUE(a.transform());
}


TEST(AutobotTest, Running_method)
{
	Autobot a;
 	ASSERT_TRUE(a.running());
}

TEST(AutobotTest, Oper_Gr)
{
    Autobot a1(234, 45);
    Autobot a2(568, 798);
    ASSERT_TRUE(a2 > a1);
}


TEST(AutobotTest, Oper_Les)
{
    Autobot a1(45, 769);
    Autobot a2(135, 780);
    ASSERT_TRUE(a1 < a2);
}

TEST(AutobotTest, Out_Stream)
{
    Autobot a(789, 35);
    std::ostringstream os;
    os << a;
    EXPECT_EQ(os.str(), "Autobot:\nMask: 789\nSpeed: 35\n");
}


TEST(AutobotTest, ParameterizedConstructor)
{
    Autobot a(325, 0);
    EXPECT_EQ(a.getMask(), 325);
    EXPECT_EQ(a.getSpeed(), 0);
}
