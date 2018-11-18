#include "../../src/classes/MyClass.cpp"

struct MyClassWithSetupTest : public testing::Test
{
    MyClass *mc;

    void SetUp()
    {
        // Arrange
        mc = new MyClass("root");
    }

    void TearDown()
    {
        delete mc;
    }
};

TEST_F(MyClassWithSetupTest, get_id)
{
    // Act
    string id = mc->getId();

    // Assert
    ASSERT_STREQ(id.c_str(), "root");
}

TEST_F(MyClassWithSetupTest, increment_by_5)
{
    // Act
    mc->setValue(100);
    mc->increment(5);
    int result = mc->getValue();

    // Assert
    ASSERT_EQ(result, 105);
}