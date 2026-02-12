/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for IoTSiteWise pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/iotsitewise/IoTSiteWiseClientPagination.h>
#include <aws/iotsitewise/IoTSiteWisePaginationBase.h>
#include <aws/iotsitewise/model/ListAssetsPaginationTraits.h>
#include <aws/iotsitewise/model/ListProjectAssetsPaginationTraits.h>
#include <aws/iotsitewise/model/ListAssetModelPropertiesPaginationTraits.h>
#include <aws/iotsitewise/model/ListAssetModelsPaginationTraits.h>
#include <aws/iotsitewise/model/ListAssetPropertiesPaginationTraits.h>
#include <aws/iotsitewise/model/ListAssetModelCompositeModelsPaginationTraits.h>
#include <aws/iotsitewise/model/ListBulkImportJobsPaginationTraits.h>
#include <aws/iotsitewise/model/ListAccessPoliciesPaginationTraits.h>
#include <aws/iotsitewise/model/ListPortalsPaginationTraits.h>
#include <aws/iotsitewise/model/ListGatewaysPaginationTraits.h>
#include <aws/iotsitewise/model/ListComputationModelResolveToResourcesPaginationTraits.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyValueHistoryPaginationTraits.h>
#include <aws/iotsitewise/model/ListInterfaceRelationshipsPaginationTraits.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyAggregatesPaginationTraits.h>
#include <aws/iotsitewise/model/GetAssetPropertyAggregatesPaginationTraits.h>
#include <aws/iotsitewise/model/GetAssetPropertyValueHistoryPaginationTraits.h>
#include <aws/iotsitewise/model/GetInterpolatedAssetPropertyValuesPaginationTraits.h>
#include <aws/iotsitewise/model/ListCompositionRelationshipsPaginationTraits.h>
#include <aws/iotsitewise/model/ListDashboardsPaginationTraits.h>
#include <aws/iotsitewise/model/ListProjectsPaginationTraits.h>
#include <aws/iotsitewise/model/ListComputationModelDataBindingUsagesPaginationTraits.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyValuePaginationTraits.h>
#include <aws/iotsitewise/model/ListAssociatedAssetsPaginationTraits.h>
#include <aws/iotsitewise/model/ListDatasetsPaginationTraits.h>
#include <aws/iotsitewise/model/ListAssetRelationshipsPaginationTraits.h>
#include <aws/iotsitewise/model/ListComputationModelsPaginationTraits.h>
#include <aws/iotsitewise/model/ExecuteQueryPaginationTraits.h>
#include <aws/iotsitewise/model/ListExecutionsPaginationTraits.h>
#include <aws/iotsitewise/model/ListTimeSeriesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class IoTSiteWisePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(IoTSiteWisePaginationCompilationTest, IoTSiteWisePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
