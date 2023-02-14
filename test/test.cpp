#include <iostream>
#include <vector>
//#include <gtest/gtest.h>
#include "littletest.hpp"

//template<typename T>
//struct SharedSuite{
//   void set_up(){
//        std::cerr << "SharedSuite set_up" << std::endl;
//
//    }
//
//    void tear_down(){
//        std::cout << "SharedSuite tear_down" << std::endl;
//
//    }
//};

//struct ViewSortTestSuite;

//static SharedSuite<ViewSortTestSuite> sharedViewSortTestSuite;


LT_BEGIN_SUITE(ViewSortTestSuite)
    
    std::vector<int> range{7, 1, 2, 3, 9, 5};
    std::vector<int> orig;//(range);
    void set_up(){
sharedViewSortTestSuite.set_up();
        orig = range;
        //std::cerr << "set_up" << std::endl;
        //foo = 10;
    }

    void tear_down(){
        //std::cout << "tear_down" << std::endl;
        //foo += 10;
    }
LT_END_SUITE(ViewSortTestSuite)

LT_BEGIN_AUTO_TEST(ViewSortTestSuite, BasicContainer)

LT_END_AUTO_TEST(BasicContainer)

LT_BEGIN_AUTO_TEST(ViewSortTestSuite, BasicViewsAll)
 
LT_END_AUTO_TEST(BasicViewsAll)


LT_BEGIN_AUTO_TEST(ViewSortTestSuite, BasicViews)

LT_END_AUTO_TEST(BasicViews)


LT_BEGIN_AUTO_TEST(ViewSortTestSuite, SortedView)

LT_END_AUTO_TEST(SortedView)

LT_BEGIN_AUTO_TEST(ViewSortTestSuite, SortedReversedView)

LT_END_AUTO_TEST(SortedReversedView)

LT_BEGIN_AUTO_TEST_ENV()
    AUTORUN_TESTS()
LT_END_AUTO_TEST_ENV()
