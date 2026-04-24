/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ElasticsearchService pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/es/ElasticsearchServiceClientPagination.h>
#include <aws/es/ElasticsearchServicePaginationBase.h>
#include <aws/es/model/DescribeOutboundCrossClusterSearchConnectionsPaginationTraits.h>
#include <aws/es/model/ListPackagesForDomainPaginationTraits.h>
#include <aws/es/model/GetPackageVersionHistoryPaginationTraits.h>
#include <aws/es/model/ListElasticsearchInstanceTypesPaginationTraits.h>
#include <aws/es/model/DescribePackagesPaginationTraits.h>
#include <aws/es/model/DescribeDomainAutoTunesPaginationTraits.h>
#include <aws/es/model/ListElasticsearchVersionsPaginationTraits.h>
#include <aws/es/model/GetUpgradeHistoryPaginationTraits.h>
#include <aws/es/model/DescribeReservedElasticsearchInstancesPaginationTraits.h>
#include <aws/es/model/DescribeReservedElasticsearchInstanceOfferingsPaginationTraits.h>
#include <aws/es/model/ListDomainsForPackagePaginationTraits.h>
#include <aws/es/model/DescribeInboundCrossClusterSearchConnectionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ElasticsearchServicePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ElasticsearchServicePaginationCompilationTest, ElasticsearchServicePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
