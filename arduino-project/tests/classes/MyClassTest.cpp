#include "../../src/classes/MyClass.cpp"

TEST(MyClassTest, get_id) {
    // Arrange
    MyClass mc("root");

    // Act
    string id = mc.getId();

    // Assert
    ASSERT_STREQ(id.c_str(), "root");
}