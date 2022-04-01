/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/external/gtest.h>
#include <aws/core/utils/memory/AWSMemory.h>

const char ALLOCATION_TAG[] = "AWSMemoryTestTag";

struct A { virtual ~A() = default; };
struct B { virtual ~B() = default; };
struct C : A, B { };

#if !defined(_MSC_VER) || defined(_CPPRTTI)
TEST(AWSMemory, DeleteViaFirstInterface)
{
    A* a = Aws::New<C>(ALLOCATION_TAG);
    Aws::Delete(a);
}

TEST(AWSMemory, DeleteViaSecondInterface)
{
    C* c = Aws::New<C>(ALLOCATION_TAG);
    B* b = c;
    A* a = c;
    ASSERT_EQ(c, static_cast<void*>(a));
    ASSERT_NE(c, static_cast<void*>(b));
    Aws::Delete(b);
}
#endif
