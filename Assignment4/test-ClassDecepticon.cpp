#include <gtest/gtest.h>
#include "ClassDecepticon.h"


TEST(DecepticonTest, DefaultConstructor) 
{
    Decepticon d;
    EXPECT_EQ(d.getMask(), 0);
    EXPECT_EQ(d.getSpeed(), 0);   
}

TEST(DecepticonTest, SetGetAttributes) 
{
    Decepticon d;
    d.setMask(777);
    d.setSpeed(888);
    
    EXPECT_EQ(d.getMask(), 777);
    EXPECT_EQ(d.getSpeed(), 888);
}

TEST(DecepticonTest, Transform_method)
{
	Decepticon d;
 	ASSERT_TRUE(d.transform());
}


TEST(DecepticonTest, Running_method)
{
	Decepticon d;
 	ASSERT_TRUE(d.running());
}

TEST(DecepticonTest, Oper_Gr)
{
    Decepticon d1(234, 45);
    Decepticon d2(568, 798);
    ASSERT_TRUE(d2 > d1);
}


TEST(DecepticonTest, Oper_Les)
{
    Decepticon d1(45, 769);
    Decepticon d2(135, 780);
    ASSERT_TRUE(d1 < d2);
}

TEST(DecepticonTest, Out_Stream)
{
    Decepticon d(789, 35);
    std::ostringstream os;
    os << d;
    EXPECT_EQ(os.str(), "Decepticon:\nMask: 789\nSpeed: 35\n");
}


TEST(DecepticonTest, ParameterizedConstructor)
{
    Decepticon d(325, 0);
    EXPECT_EQ(d.getMask(), 325);
    EXPECT_EQ(d.getSpeed(), 0);
}
