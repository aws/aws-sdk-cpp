/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SSMIncidents pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/ssm-incidents/SSMIncidentsClientPagination.h>
#include <aws/ssm-incidents/SSMIncidentsPaginationBase.h>
#include <aws/ssm-incidents/model/ListResponsePlansPaginationTraits.h>
#include <aws/ssm-incidents/model/ListTimelineEventsPaginationTraits.h>
#include <aws/ssm-incidents/model/ListIncidentRecordsPaginationTraits.h>
#include <aws/ssm-incidents/model/ListRelatedItemsPaginationTraits.h>
#include <aws/ssm-incidents/model/ListReplicationSetsPaginationTraits.h>
#include <aws/ssm-incidents/model/ListIncidentFindingsPaginationTraits.h>
#include <aws/ssm-incidents/model/GetResourcePoliciesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SSMIncidentsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SSMIncidentsPaginationCompilationTest, SSMIncidentsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
