/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SecurityAgent pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/securityagent/SecurityAgentClientPagination.h>
#include <aws/securityagent/SecurityAgentPaginationBase.h>
#include <aws/securityagent/model/ListTargetDomainsPaginationTraits.h>
#include <aws/securityagent/model/ListPentestJobTasksPaginationTraits.h>
#include <aws/securityagent/model/ListApplicationsPaginationTraits.h>
#include <aws/securityagent/model/ListFindingsPaginationTraits.h>
#include <aws/securityagent/model/ListArtifactsPaginationTraits.h>
#include <aws/securityagent/model/ListIntegratedResourcesPaginationTraits.h>
#include <aws/securityagent/model/ListPentestJobsForPentestPaginationTraits.h>
#include <aws/securityagent/model/ListMembershipsPaginationTraits.h>
#include <aws/securityagent/model/ListPentestsPaginationTraits.h>
#include <aws/securityagent/model/ListDiscoveredEndpointsPaginationTraits.h>
#include <aws/securityagent/model/ListIntegrationsPaginationTraits.h>
#include <aws/securityagent/model/ListAgentSpacesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SecurityAgentPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SecurityAgentPaginationCompilationTest, SecurityAgentPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
