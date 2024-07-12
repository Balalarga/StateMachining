#include "spdlog/spdlog.h"
#include "gtest/gtest.h"
#include <iostream>

TEST(Basic, Fsm1) {
    EXPECT_EQ(7 * 6, 42);
    spdlog::info("HelloWorld");
}
