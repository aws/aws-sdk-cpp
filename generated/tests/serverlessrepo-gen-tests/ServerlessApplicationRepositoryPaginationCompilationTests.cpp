/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ServerlessApplicationRepository pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/serverlessrepo/ServerlessApplicationRepositoryClientPagination.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryPaginationBase.h>
#include <aws/serverlessrepo/model/ListApplicationsPaginationTraits.h>
#include <aws/serverlessrepo/model/ListApplicationDependenciesPaginationTraits.h>
#include <aws/serverlessrepo/model/ListApplicationVersionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ServerlessApplicationRepositoryPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ServerlessApplicationRepositoryPaginationCompilationTest, ServerlessApplicationRepositoryPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
