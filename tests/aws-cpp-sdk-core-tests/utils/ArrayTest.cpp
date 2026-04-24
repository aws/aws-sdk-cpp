/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/core/utils/Array.h>

using namespace Aws::Utils;

class ArrayTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ArrayTest, TestArrayBasic)
{
    using CharArray = Array<char>;
    CharArray emptyArray;
    ASSERT_EQ(0u, emptyArray.GetLength());
    ASSERT_EQ(nullptr, emptyArray.GetUnderlyingData());

    CharArray tThis("This", 4);
    CharArray tSpace(" ", 1);
    CharArray tIs("is", 2);
    CharArray tA("a", 1);
    CharArray tTest("test", 4);

    CharArray ThisIsATest({&tThis, &tSpace, &tIs, &tSpace, &tA, &tSpace, &tTest});
    Aws::String res(ThisIsATest.GetUnderlyingData(), ThisIsATest.GetLength());
    ASSERT_EQ(Aws::String("This is a test"), res);
}

TEST_F(ArrayTest, TestCryptoBufBasic)
{
    CryptoBuffer emptyArray;
    ASSERT_EQ(0u, emptyArray.GetLength());
    ASSERT_EQ(nullptr, emptyArray.GetUnderlyingData());

    CryptoBuffer tThis(reinterpret_cast<const unsigned char*>("This"), 4);
    CryptoBuffer tSpace(reinterpret_cast<const unsigned char*>(" "), 1);
    CryptoBuffer tIs(reinterpret_cast<const unsigned char*>("is"), 2);
    CryptoBuffer tA(reinterpret_cast<const unsigned char*>("a"), 1);
    CryptoBuffer tTest(reinterpret_cast<const unsigned char*>("test"), 4);

    CryptoBuffer ThisIsATest({&tThis, &tSpace, &tIs, &tSpace, &tA, &tSpace, &tTest});
    Aws::String res(reinterpret_cast<const char*>(ThisIsATest.GetUnderlyingData()), ThisIsATest.GetLength());
    ASSERT_EQ(Aws::String("This is a test"), res);
}