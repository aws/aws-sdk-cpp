/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Route53 pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/route53/Route53ClientPagination.h>
#include <aws/route53/Route53PaginationBase.h>
#include <aws/route53/model/ListCidrLocationsPaginationTraits.h>
#include <aws/route53/model/ListHostedZonesPaginationTraits.h>
#include <aws/route53/model/ListCidrCollectionsPaginationTraits.h>
#include <aws/route53/model/ListQueryLoggingConfigsPaginationTraits.h>
#include <aws/route53/model/ListCidrBlocksPaginationTraits.h>
#include <aws/route53/model/ListHealthChecksPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class Route53PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(Route53PaginationCompilationTest, Route53PaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
