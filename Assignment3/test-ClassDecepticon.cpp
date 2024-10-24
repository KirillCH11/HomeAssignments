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
