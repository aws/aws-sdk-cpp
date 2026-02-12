/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CloudFront pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/cloudfront/CloudFrontClientPagination.h>
#include <aws/cloudfront/CloudFrontPaginationBase.h>
#include <aws/cloudfront/model/ListDistributionsByConnectionModePaginationTraits.h>
#include <aws/cloudfront/model/ListDistributionsByTrustStorePaginationTraits.h>
#include <aws/cloudfront/model/ListInvalidationsPaginationTraits.h>
#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentitiesPaginationTraits.h>
#include <aws/cloudfront/model/ListStreamingDistributionsPaginationTraits.h>
#include <aws/cloudfront/model/ListDistributionsByConnectionFunctionPaginationTraits.h>
#include <aws/cloudfront/model/ListPublicKeysPaginationTraits.h>
#include <aws/cloudfront/model/ListDistributionsPaginationTraits.h>
#include <aws/cloudfront/model/ListKeyValueStoresPaginationTraits.h>
#include <aws/cloudfront/model/ListDistributionTenantsByCustomizationPaginationTraits.h>
#include <aws/cloudfront/model/ListInvalidationsForDistributionTenantPaginationTraits.h>
#include <aws/cloudfront/model/ListOriginAccessControlsPaginationTraits.h>
#include <aws/cloudfront/model/ListDistributionTenantsPaginationTraits.h>
#include <aws/cloudfront/model/ListTrustStoresPaginationTraits.h>
#include <aws/cloudfront/model/ListDomainConflictsPaginationTraits.h>
#include <aws/cloudfront/model/ListConnectionFunctionsPaginationTraits.h>
#include <aws/cloudfront/model/ListConnectionGroupsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CloudFrontPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CloudFrontPaginationCompilationTest, CloudFrontPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
