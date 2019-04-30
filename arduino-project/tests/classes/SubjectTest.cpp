#include "../../src/classes/Subject.cpp"

struct SubjectTestSetup : public testing::Test
{
    Subject *sub;
    string observer;
    __observer *observerObj;

    void SetUp()
    {
        // Arrange
        Subject *sub = new Subject();
        observer = "abc";
        __observer *observerObj = new __observer();
    }

    void TearDown()
    {
        delete sub;
    }
};

TEST_F(SubjectTestSetup, attach_no_observer)
{
    // Assert
    ASSERT_EQ(sub->observers.size(), 0);
    ASSERT_EQ(sub->observersObj.size(), 0);
    ASSERT_EQ(sub->observersList.size(), 0);
}

TEST_F(SubjectTestSetup, attach_1_observer)
{
    // Act
    sub->attach(observer);
    sub->attachObj(observerObj);

    // Assert
    ASSERT_EQ(sub->observers.size(), 1);
    ASSERT_EQ(sub->observersList.size(), 1);
}

TEST_F(SubjectTestSetup, attach_3_observers)
{
    // Act
    sub->attach(observer);
    sub->attach(observer);
    sub->attach(observer);

    sub->attachObj(observerObj);
    sub->attachObj(observerObj);
    sub->attachObj(observerObj);

    // Assert
    ASSERT_EQ(sub->observers.size(), 3);
    ASSERT_EQ(sub->observersList.size(), 3);
}