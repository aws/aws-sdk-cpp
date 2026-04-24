/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for deadline pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/deadline/DeadlineClientPagination.h>
#include <aws/deadline/DeadlinePaginationBase.h>
#include <aws/deadline/model/GetSessionsStatisticsAggregationPaginationTraits.h>
#include <aws/deadline/model/ListJobMembersPaginationTraits.h>
#include <aws/deadline/model/ListJobsPaginationTraits.h>
#include <aws/deadline/model/ListQueueMembersPaginationTraits.h>
#include <aws/deadline/model/ListStepDependenciesPaginationTraits.h>
#include <aws/deadline/model/ListJobParameterDefinitionsPaginationTraits.h>
#include <aws/deadline/model/ListQueueEnvironmentsPaginationTraits.h>
#include <aws/deadline/model/ListFarmsPaginationTraits.h>
#include <aws/deadline/model/ListStorageProfilesPaginationTraits.h>
#include <aws/deadline/model/ListStorageProfilesForQueuePaginationTraits.h>
#include <aws/deadline/model/ListFleetsPaginationTraits.h>
#include <aws/deadline/model/ListTasksPaginationTraits.h>
#include <aws/deadline/model/ListFleetMembersPaginationTraits.h>
#include <aws/deadline/model/ListQueueLimitAssociationsPaginationTraits.h>
#include <aws/deadline/model/ListAvailableMeteredProductsPaginationTraits.h>
#include <aws/deadline/model/ListMonitorsPaginationTraits.h>
#include <aws/deadline/model/ListQueuesPaginationTraits.h>
#include <aws/deadline/model/ListFarmMembersPaginationTraits.h>
#include <aws/deadline/model/ListLimitsPaginationTraits.h>
#include <aws/deadline/model/ListWorkersPaginationTraits.h>
#include <aws/deadline/model/ListMeteredProductsPaginationTraits.h>
#include <aws/deadline/model/ListStepsPaginationTraits.h>
#include <aws/deadline/model/ListSessionActionsPaginationTraits.h>
#include <aws/deadline/model/ListQueueFleetAssociationsPaginationTraits.h>
#include <aws/deadline/model/ListSessionsPaginationTraits.h>
#include <aws/deadline/model/ListSessionsForWorkerPaginationTraits.h>
#include <aws/deadline/model/ListBudgetsPaginationTraits.h>
#include <aws/deadline/model/ListStepConsumersPaginationTraits.h>
#include <aws/deadline/model/ListLicenseEndpointsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class deadlinePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(deadlinePaginationCompilationTest, deadlinePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
