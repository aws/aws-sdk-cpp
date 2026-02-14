/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for TrustedAdvisor pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/trustedadvisor/TrustedAdvisorClientPagination.h>
#include <aws/trustedadvisor/TrustedAdvisorPaginationBase.h>
#include <aws/trustedadvisor/model/ListRecommendationsPaginationTraits.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationAccountsPaginationTraits.h>
#include <aws/trustedadvisor/model/ListRecommendationResourcesPaginationTraits.h>
#include <aws/trustedadvisor/model/ListChecksPaginationTraits.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationResourcesPaginationTraits.h>
#include <aws/trustedadvisor/model/ListOrganizationRecommendationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class TrustedAdvisorPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(TrustedAdvisorPaginationCompilationTest, TrustedAdvisorPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
