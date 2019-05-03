#include "gmock/gmock.h"
#include "../../src/classes/Subject.cpp"
#include "../../src/classes/Observer.cpp"

// Voir https://github.com/google/googletest/blob/master/googlemock/docs/ForDummies.md
class MockObserver : public __Observer {
  MOCK_METHOD0(notify, void());
};

struct SubjectTestSetup : public testing::Test
{
    Subject *sub;
    string observer;
    __Observer *__observer;

    void SetUp()
    {
        // Arrange
        Subject *sub = new Subject();
        observer = "abc";
        __Observer *__observer = new __Observer();
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
    ASSERT_EQ(sub->__observersList.size(), 0);
}

TEST_F(SubjectTestSetup, attach_1_observer)
{
    // Act
    sub->attach(observer);
    sub->attachObserver(__observer);

    // Assert
    ASSERT_EQ(sub->observers.size(), 1);
    ASSERT_EQ(sub->__observersList.size(), 1);
}

TEST_F(SubjectTestSetup, attach_3_observers)
{
    // Act
    sub->attach(observer);
    sub->attach(observer);
    sub->attach(observer);

    sub->attachObserver(__observer);
    sub->attachObserver(__observer);
    sub->attachObserver(__observer);

    // Assert
    ASSERT_EQ(sub->observers.size(), 3);
    ASSERT_EQ(sub->__observersList.size(), 3);

    sub->notifyObservers();
}