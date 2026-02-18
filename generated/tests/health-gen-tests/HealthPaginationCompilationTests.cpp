/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Health pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/health/HealthClientPagination.h>
#include <aws/health/HealthPaginationBase.h>
#include <aws/health/model/DescribeAffectedAccountsForOrganizationPaginationTraits.h>
#include <aws/health/model/DescribeAffectedEntitiesForOrganizationPaginationTraits.h>
#include <aws/health/model/DescribeEventsPaginationTraits.h>
#include <aws/health/model/DescribeAffectedEntitiesPaginationTraits.h>
#include <aws/health/model/DescribeEventAggregatesPaginationTraits.h>
#include <aws/health/model/DescribeEventsForOrganizationPaginationTraits.h>
#include <aws/health/model/DescribeEventTypesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class HealthPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(HealthPaginationCompilationTest, HealthPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
