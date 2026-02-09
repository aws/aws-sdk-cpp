/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for OpenSearchService pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/opensearch/OpenSearchServiceClientPagination.h>
#include <aws/opensearch/OpenSearchServicePaginationBase.h>
#include <aws/opensearch/model/DescribeInboundConnectionsPaginationTraits.h>
#include <aws/opensearch/model/GetPackageVersionHistoryPaginationTraits.h>
#include <aws/opensearch/model/DescribeReservedInstancesPaginationTraits.h>
#include <aws/opensearch/model/ListApplicationsPaginationTraits.h>
#include <aws/opensearch/model/DescribeDomainAutoTunesPaginationTraits.h>
#include <aws/opensearch/model/DescribePackagesPaginationTraits.h>
#include <aws/opensearch/model/ListPackagesForDomainPaginationTraits.h>
#include <aws/opensearch/model/GetUpgradeHistoryPaginationTraits.h>
#include <aws/opensearch/model/ListDomainMaintenancesPaginationTraits.h>
#include <aws/opensearch/model/ListScheduledActionsPaginationTraits.h>
#include <aws/opensearch/model/ListVersionsPaginationTraits.h>
#include <aws/opensearch/model/DescribeOutboundConnectionsPaginationTraits.h>
#include <aws/opensearch/model/ListDomainsForPackagePaginationTraits.h>
#include <aws/opensearch/model/DescribeReservedInstanceOfferingsPaginationTraits.h>
#include <aws/opensearch/model/ListInstanceTypeDetailsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class OpenSearchServicePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(OpenSearchServicePaginationCompilationTest, OpenSearchServicePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
