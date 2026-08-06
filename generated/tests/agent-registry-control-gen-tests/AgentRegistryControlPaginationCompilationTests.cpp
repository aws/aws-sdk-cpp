/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AgentRegistryControl pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/agent-registry-control/AgentRegistryControlClientPagination.h>
#include <aws/agent-registry-control/AgentRegistryControlPaginationBase.h>
#include <aws/agent-registry-control/model/ListRegistryRecordsPaginationTraits.h>
#include <aws/agent-registry-control/model/ListRegistriesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AgentRegistryControlPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AgentRegistryControlPaginationCompilationTest, AgentRegistryControlPaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
