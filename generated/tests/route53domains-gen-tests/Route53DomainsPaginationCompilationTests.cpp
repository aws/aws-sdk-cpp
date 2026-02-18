/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Route53Domains pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/route53domains/Route53DomainsClientPagination.h>
#include <aws/route53domains/Route53DomainsPaginationBase.h>
#include <aws/route53domains/model/ListOperationsPaginationTraits.h>
#include <aws/route53domains/model/ListPricesPaginationTraits.h>
#include <aws/route53domains/model/ListDomainsPaginationTraits.h>
#include <aws/route53domains/model/ViewBillingPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class Route53DomainsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(Route53DomainsPaginationCompilationTest, Route53DomainsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
