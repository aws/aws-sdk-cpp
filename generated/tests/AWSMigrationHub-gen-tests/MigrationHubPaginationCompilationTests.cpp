/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MigrationHub pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/AWSMigrationHub/MigrationHubClientPagination.h>
#include <aws/AWSMigrationHub/MigrationHubPaginationBase.h>
#include <aws/AWSMigrationHub/model/ListApplicationStatesPaginationTraits.h>
#include <aws/AWSMigrationHub/model/ListSourceResourcesPaginationTraits.h>
#include <aws/AWSMigrationHub/model/ListMigrationTasksPaginationTraits.h>
#include <aws/AWSMigrationHub/model/ListMigrationTaskUpdatesPaginationTraits.h>
#include <aws/AWSMigrationHub/model/ListProgressUpdateStreamsPaginationTraits.h>
#include <aws/AWSMigrationHub/model/ListCreatedArtifactsPaginationTraits.h>
#include <aws/AWSMigrationHub/model/ListDiscoveredResourcesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MigrationHubPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MigrationHubPaginationCompilationTest, MigrationHubPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
