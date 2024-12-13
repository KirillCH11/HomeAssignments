/* Churkin Kirill st129364@student.spbu.ru
	task 5
*/

#include <gtest/gtest.h>
#include "ClassTransformer.h"
#include "ClassAutobot.h"
#include "ClassDecepticon.h"
#include <vector>


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
    Transformer t2(436, 123, 7685, 999, 777);
    ASSERT_TRUE(t1 > t2);
}


TEST(TransformerTest, Oper_Les)
{
    Transformer t1(876, 457, 879, 234, 777);
    Transformer t2(436, 123, 7685, 999, 4325);
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

TEST(TransformerTest, print_methods)
{
    Transformer t;
    t.transform();
    t.openFire();
    t.ulta(); 
}

TEST(AutobotTest, print_methods)
{
    Autobot a;
    a.transform();
    a.openFire();
    a.ulta(); 
}

TEST(DecepticonTest, print_methods)
{
    Decepticon d;
    d.transform();
    d.openFire();
    d.ulta(); 
}

TEST(DecepticonTest, print_methods_2)
{
    Decepticon d;
    d.transform();
    d.openFire();
    d.ulta(); 
}

TEST(TransformerTest, VirtualMethods) {
    std::vector<Transformer*> transformers;
    std::cout << "Cycle print:" << std::endl;
    transformers.push_back(new Transformer(1267, 7777, 1, 1, 8987));
    transformers.push_back(new Autobot(400, 52));
    transformers.push_back(new Decepticon(789, 327));
    
    transformers.push_back(new Transformer(457, 547, 1, 1, 427));
    transformers.push_back(new Autobot(1267, 7777));
     transformers.push_back(new Decepticon(1501, 7834));
    
    transformers.push_back(new Transformer(236, 34, 1, 1, 65));
    transformers.push_back(new Autobot(987, 327));
    transformers.push_back(new Decepticon(668, 2400));

    for (auto transformer : transformers) {
        transformer->transform();
        transformer->openFire();
        transformer->ulta();
    }
    
    std::cout << "Non-Cycle print:" << std::endl;
    transformers[0]->transform();
    transformers[0]->openFire();
    transformers[0]->ulta();

    for (auto transformer : transformers) {
        delete transformer;
    }
    
}
