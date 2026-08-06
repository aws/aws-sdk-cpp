/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AgentRegistry pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/agent-registry/AgentRegistryClientPagination.h>
#include <aws/agent-registry/AgentRegistryPaginationBase.h>
#include <aws/agent-registry/model/ListDiscoverableRegistryRecordsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AgentRegistryPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AgentRegistryPaginationCompilationTest, AgentRegistryPaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
