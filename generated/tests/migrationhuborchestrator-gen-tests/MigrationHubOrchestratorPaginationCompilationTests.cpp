/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MigrationHubOrchestrator pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/migrationhuborchestrator/MigrationHubOrchestratorClientPagination.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorPaginationBase.h>
#include <aws/migrationhuborchestrator/model/ListPluginsPaginationTraits.h>
#include <aws/migrationhuborchestrator/model/ListTemplateStepGroupsPaginationTraits.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowStepsPaginationTraits.h>
#include <aws/migrationhuborchestrator/model/ListTemplatesPaginationTraits.h>
#include <aws/migrationhuborchestrator/model/ListTemplateStepsPaginationTraits.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowsPaginationTraits.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowStepGroupsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MigrationHubOrchestratorPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MigrationHubOrchestratorPaginationCompilationTest, MigrationHubOrchestratorPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
