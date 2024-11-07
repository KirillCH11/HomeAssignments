#include <gtest/gtest.h>
#include "ClassTransformer.h"


TEST(TransformerTest, DefaultConstructor) 
{
    Transformer t;
    EXPECT_EQ(t.getHeight(), 0);
    EXPECT_EQ(t.getWeight(), 0);
    EXPECT_EQ(t.getPower(), 0);
    EXPECT_EQ(t.getFirepower(), 0);
    EXPECT_EQ(t.getIntellect(), 0);
    
}

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

TEST(TransformerTest, Oper_Gr)
{
    Transformer t1(876, 457, 879, 234, 4325);
    Transformer t2(436, 123, 7685, 999, 0);
    ASSERT_TRUE(t1 > t2);
}


TEST(TransformerTest, Oper_Les)
{
    Transformer t1(876, 457, 879, 234, 0);
    Transformer t2(436, 123, 7685, 999, 777);
    ASSERT_TRUE(t1 < t2);
}


TEST(TransformerTest, Out_Stream)
{
    Transformer t(436, 123, 7685, 999, 777);
    std::ostringstream os;
    os << t;
    EXPECT_EQ(os.str(), "Transformer:\nHeight: 436\nWeight: 123\nPower: 7685\nFirepower: 999\nIntellect: 777\n");
}


TEST(TransformerTest, ParameterizedConstructor)
{
    Transformer t(436, 123, 7685, 999, 777);
    EXPECT_EQ(t.getHeight(), 436);
    EXPECT_EQ(t.getWeight(), 123);
    EXPECT_EQ(t.getPower(), 7685);
    EXPECT_EQ(t.getFirepower(), 999);
    EXPECT_EQ(t.getIntellect(), 777);
}
