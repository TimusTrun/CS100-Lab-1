#include "c-echo.h"
#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld){
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
	EXPECT_EQ ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
	char* test_val[1]; test_val[0] = "./c-echo";
	EXPECT_EQ ("", echo(1,test_val));
}

TEST(EchoTest, ThomasHTran){
	char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "Thomas"; test_val[2] = "H"; test_val[3] = "Tran";
	EXPECT_EQ ("Thomas H Tran", echo(4,test_val));
}

TEST(EchoTest, OneTwoThree){
	char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "1"; test_val[2] = "2"; test_val[3] = "3";
	EXPECT_EQ ("1 2 3", echo(4,test_val));
}

TEST(EchoTest, Single){
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "Single";
	EXPECT_EQ("Single", echo(2,test_val));
}

int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
