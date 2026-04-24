/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Synthetics pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/synthetics/SyntheticsClientPagination.h>
#include <aws/synthetics/SyntheticsPaginationBase.h>
#include <aws/synthetics/model/GetCanaryRunsPaginationTraits.h>
#include <aws/synthetics/model/ListGroupResourcesPaginationTraits.h>
#include <aws/synthetics/model/DescribeCanariesPaginationTraits.h>
#include <aws/synthetics/model/ListAssociatedGroupsPaginationTraits.h>
#include <aws/synthetics/model/ListGroupsPaginationTraits.h>
#include <aws/synthetics/model/DescribeCanariesLastRunPaginationTraits.h>
#include <aws/synthetics/model/DescribeRuntimeVersionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SyntheticsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SyntheticsPaginationCompilationTest, SyntheticsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
