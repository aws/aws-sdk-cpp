/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MWAA pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/mwaa/MWAAClientPagination.h>
#include <aws/mwaa/MWAAPaginationBase.h>
#include <aws/mwaa/model/ListEnvironmentsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MWAAPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MWAAPaginationCompilationTest, MWAAPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
