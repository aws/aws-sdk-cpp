/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MigrationHubConfig pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/migrationhub-config/MigrationHubConfigClientPagination.h>
#include <aws/migrationhub-config/MigrationHubConfigPaginationBase.h>
#include <aws/migrationhub-config/model/DescribeHomeRegionControlsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MigrationHubConfigPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MigrationHubConfigPaginationCompilationTest, MigrationHubConfigPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
