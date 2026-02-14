/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MigrationHubRefactorSpaces pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesClientPagination.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesPaginationBase.h>
#include <aws/migration-hub-refactor-spaces/model/ListServicesPaginationTraits.h>
#include <aws/migration-hub-refactor-spaces/model/ListApplicationsPaginationTraits.h>
#include <aws/migration-hub-refactor-spaces/model/ListEnvironmentsPaginationTraits.h>
#include <aws/migration-hub-refactor-spaces/model/ListEnvironmentVpcsPaginationTraits.h>
#include <aws/migration-hub-refactor-spaces/model/ListRoutesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MigrationHubRefactorSpacesPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MigrationHubRefactorSpacesPaginationCompilationTest, MigrationHubRefactorSpacesPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
