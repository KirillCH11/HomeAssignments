#include <gtest/gtest.h>
#include "ClassPredacon.h"


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
