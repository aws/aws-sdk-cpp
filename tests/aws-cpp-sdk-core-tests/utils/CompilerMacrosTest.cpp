/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Core_EXPORTS.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>

AWS_DEPRECATED("Test a deprecated function")
static bool foo()
{
    return true;
}

class CompilerMacrosTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CompilerMacrosTest, TestCompilerMacro)
{
    AWS_SUPPRESS_DEPRECATION(
        bool ret = foo();
    )
    ASSERT_TRUE(ret);

#ifdef _MSC_VER
    AWS_SUPPRESS_WARNING_PUSH(4201)
#else
    AWS_SUPPRESS_WARNING_PUSH("-Wpedantic")
#endif
    struct TestStruct
    {
        union {
            struct //compiler will give anonymous struct warning if warning is not suppressed
            {
                int a;
                bool b;
            };
            char c[16];
        };
    };
    AWS_SUPPRESS_WARNING_POP
}
