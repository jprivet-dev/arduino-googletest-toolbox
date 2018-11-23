#include "../../src/classes/Subject.cpp"

TEST(SubjectTest, get_name)
{
    // Arrange
    Subject subjet("myname");

    // Act
    string name = subjet.getName();

    // Assert
    ASSERT_STREQ(name.c_str(), "myname");
}