/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for FreeTier pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/freetier/FreeTierClientPagination.h>
#include <aws/freetier/FreeTierPaginationBase.h>
#include <aws/freetier/model/ListAccountActivitiesPaginationTraits.h>
#include <aws/freetier/model/GetFreeTierUsagePaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class FreeTierPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(FreeTierPaginationCompilationTest, FreeTierPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
