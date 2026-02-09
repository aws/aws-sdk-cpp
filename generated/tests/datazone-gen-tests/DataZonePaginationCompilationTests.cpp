/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for DataZone pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/datazone/DataZoneClientPagination.h>
#include <aws/datazone/DataZonePaginationBase.h>
#include <aws/datazone/model/ListAccountPoolsPaginationTraits.h>
#include <aws/datazone/model/ListDataSourcesPaginationTraits.h>
#include <aws/datazone/model/ListEntityOwnersPaginationTraits.h>
#include <aws/datazone/model/SearchUserProfilesPaginationTraits.h>
#include <aws/datazone/model/ListDataSourceRunsPaginationTraits.h>
#include <aws/datazone/model/ListTimeSeriesDataPointsPaginationTraits.h>
#include <aws/datazone/model/ListDomainUnitsForParentPaginationTraits.h>
#include <aws/datazone/model/ListRulesPaginationTraits.h>
#include <aws/datazone/model/ListSubscriptionGrantsPaginationTraits.h>
#include <aws/datazone/model/ListEnvironmentBlueprintConfigurationsPaginationTraits.h>
#include <aws/datazone/model/ListLineageNodeHistoryPaginationTraits.h>
#include <aws/datazone/model/ListPolicyGrantsPaginationTraits.h>
#include <aws/datazone/model/ListNotificationsPaginationTraits.h>
#include <aws/datazone/model/ListDataSourceRunActivitiesPaginationTraits.h>
#include <aws/datazone/model/SearchGroupProfilesPaginationTraits.h>
#include <aws/datazone/model/ListAssetFiltersPaginationTraits.h>
#include <aws/datazone/model/ListMetadataGenerationRunsPaginationTraits.h>
#include <aws/datazone/model/ListSubscriptionRequestsPaginationTraits.h>
#include <aws/datazone/model/ListDataProductRevisionsPaginationTraits.h>
#include <aws/datazone/model/ListLineageEventsPaginationTraits.h>
#include <aws/datazone/model/ListJobRunsPaginationTraits.h>
#include <aws/datazone/model/ListEnvironmentsPaginationTraits.h>
#include <aws/datazone/model/SearchListingsPaginationTraits.h>
#include <aws/datazone/model/ListEnvironmentBlueprintsPaginationTraits.h>
#include <aws/datazone/model/ListConnectionsPaginationTraits.h>
#include <aws/datazone/model/ListProjectMembershipsPaginationTraits.h>
#include <aws/datazone/model/ListEnvironmentActionsPaginationTraits.h>
#include <aws/datazone/model/ListProjectsPaginationTraits.h>
#include <aws/datazone/model/ListEnvironmentProfilesPaginationTraits.h>
#include <aws/datazone/model/ListSubscriptionsPaginationTraits.h>
#include <aws/datazone/model/ListProjectProfilesPaginationTraits.h>
#include <aws/datazone/model/SearchTypesPaginationTraits.h>
#include <aws/datazone/model/ListAccountsInAccountPoolPaginationTraits.h>
#include <aws/datazone/model/ListSubscriptionTargetsPaginationTraits.h>
#include <aws/datazone/model/ListDomainsPaginationTraits.h>
#include <aws/datazone/model/ListAssetRevisionsPaginationTraits.h>
#include <aws/datazone/model/SearchPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class DataZonePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(DataZonePaginationCompilationTest, DataZonePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
