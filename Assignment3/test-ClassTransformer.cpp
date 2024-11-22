#include <gtest/gtest.h>
#include "ClassTransformer.h"
#include "ClassAutobot.h"
#include "ClassDecepticon.h"
#include "ClassPredacon.h"


TEST(TransformerTest, SetGetAttributes)
{
    Transformer t;
    t.setHeight(1500);
    t.setWeight(2000);
    t.setPower(370);
    t.setFirepower(999);
    t.setIntellect(80);

    EXPECT_EQ(t.getHeight(), 1500);
    EXPECT_EQ(t.getWeight(), 2000);
    EXPECT_EQ(t.getPower(), 370);
    EXPECT_EQ(t.getFirepower(), 999);
    EXPECT_EQ(t.getIntellect(), 80);
}

TEST(TransformerTest, Start_shooting_method)
{
	Transformer t;
 	ASSERT_TRUE(t.start_shooting());
}


TEST(TransformerTest, Start_moving_method)
{
	Transformer t;
 	ASSERT_TRUE(t.start_moving());
}
