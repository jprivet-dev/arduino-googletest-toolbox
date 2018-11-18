#include "../../src/classes/MyClass.cpp"

TEST(MyClassTest, get_id)
{
    // Arrange
    MyClass mc("root");

    // Act
    string id = mc.getId();

    // Assert
    ASSERT_STREQ(id.c_str(), "root");
}

TEST(MyClassTest, increment_by_5)
{
    // Arrange
    MyClass mc("root");

    // Act
    mc.setValue(100);
    mc.increment(5);
    int result = mc.getValue();

    // Assert
    ASSERT_EQ(result, 105);
}