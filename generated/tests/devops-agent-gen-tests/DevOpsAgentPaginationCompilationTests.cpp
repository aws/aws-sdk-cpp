/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for DevOpsAgent pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/devops-agent/DevOpsAgentClientPagination.h>
#include <aws/devops-agent/DevOpsAgentPaginationBase.h>
#include <aws/devops-agent/model/ListJournalRecordsPaginationTraits.h>
#include <aws/devops-agent/model/ListBacklogTasksPaginationTraits.h>
#include <aws/devops-agent/model/ListAgentSpacesPaginationTraits.h>
#include <aws/devops-agent/model/ListExecutionsPaginationTraits.h>
#include <aws/devops-agent/model/ListServicesPaginationTraits.h>
#include <aws/devops-agent/model/ListGoalsPaginationTraits.h>
#include <aws/devops-agent/model/ListAssociationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class DevOpsAgentPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(DevOpsAgentPaginationCompilationTest, DevOpsAgentPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
