#include <gtest/gtest.h>
#include "ClassPredacon.h"


TEST(PredaconTest, DefaultConstructor) 
{
    Predacon p;
    EXPECT_EQ(p.getMask(), 0);
    EXPECT_EQ(p.getSpeed(), 0);   
}

TEST(PredaconTest, SetGetAttributes) 
{
    Predacon p;
    p.setMask(777);
    p.setSpeed(888);
    
    EXPECT_EQ(p.getMask(), 777);
    EXPECT_EQ(p.getSpeed(), 888);
}

TEST(PredaconTest, Transform_method)
{
	Predacon p;
 	ASSERT_TRUE(p.transform());
}


TEST(PredaconTest, Running_method)
{
	Predacon p;
 	ASSERT_TRUE(p.running());
}

TEST(PredaconTest, Oper_Gr)
{
    Predacon p1(234, 45);
    Predacon p2(568, 798);
    ASSERT_TRUE(p2 > p1);
}


TEST(PredaconTest, Oper_Les)
{
    Predacon p1(45, 769);
    Predacon p2(135, 780);
    ASSERT_TRUE(p1 < p2);
}

TEST(PredaconTest, Out_Stream)
{
    Predacon p(789, 35);
    std::ostringstream os;
    os << p;
    EXPECT_EQ(os.str(), "Predacon:\nMask: 789\nSpeed: 35\n");
}


TEST(PredaconTest, ParameterizedConstructor)
{
    Predacon p(325, 0);
    EXPECT_EQ(p.getMask(), 325);
    EXPECT_EQ(p.getSpeed(), 0);
}
