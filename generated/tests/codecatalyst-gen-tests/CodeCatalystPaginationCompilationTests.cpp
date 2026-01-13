/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CodeCatalyst pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/codecatalyst/CodeCatalystClientPagination.h>
#include <aws/codecatalyst/CodeCatalystPaginationBase.h>
#include <aws/codecatalyst/model/ListSpacesPaginationTraits.h>
#include <aws/codecatalyst/model/ListSourceRepositoriesPaginationTraits.h>
#include <aws/codecatalyst/model/ListWorkflowsPaginationTraits.h>
#include <aws/codecatalyst/model/ListAccessTokensPaginationTraits.h>
#include <aws/codecatalyst/model/ListDevEnvironmentSessionsPaginationTraits.h>
#include <aws/codecatalyst/model/ListSourceRepositoryBranchesPaginationTraits.h>
#include <aws/codecatalyst/model/ListWorkflowRunsPaginationTraits.h>
#include <aws/codecatalyst/model/ListDevEnvironmentsPaginationTraits.h>
#include <aws/codecatalyst/model/ListEventLogsPaginationTraits.h>
#include <aws/codecatalyst/model/ListProjectsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CodeCatalystPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CodeCatalystPaginationCompilationTest, CodeCatalystPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
