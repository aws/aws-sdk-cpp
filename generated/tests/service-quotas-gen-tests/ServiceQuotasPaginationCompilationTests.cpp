/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ServiceQuotas pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/service-quotas/ServiceQuotasClientPagination.h>
#include <aws/service-quotas/ServiceQuotasPaginationBase.h>
#include <aws/service-quotas/model/ListAWSDefaultServiceQuotasPaginationTraits.h>
#include <aws/service-quotas/model/ListRequestedServiceQuotaChangeHistoryByQuotaPaginationTraits.h>
#include <aws/service-quotas/model/ListServiceQuotasPaginationTraits.h>
#include <aws/service-quotas/model/ListRequestedServiceQuotaChangeHistoryPaginationTraits.h>
#include <aws/service-quotas/model/ListServiceQuotaIncreaseRequestsInTemplatePaginationTraits.h>
#include <aws/service-quotas/model/ListServicesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ServiceQuotasPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ServiceQuotasPaginationCompilationTest, ServiceQuotasPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
