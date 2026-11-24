/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AgentDiscovery pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/agent-discovery/AgentDiscoveryClientPagination.h>
#include <aws/agent-discovery/AgentDiscoveryPaginationBase.h>
#include <aws/agent-discovery/model/SearchPublicRecordsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AgentDiscoveryPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AgentDiscoveryPaginationCompilationTest, AgentDiscoveryPaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
