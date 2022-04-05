#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, MyNameIsAlyssa) {
    char* test_val[6]; test_val[0] = "./c-echo"; test_val[1] = "My"; test_val[2] = "name"; test_val[3] = "is"; test_val[4] = "Alyssa"; test_val[5] = ".";
    EXPECT_EQ("My name is Alyssa .", echo(6,test_val));
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
