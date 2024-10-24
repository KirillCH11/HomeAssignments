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
