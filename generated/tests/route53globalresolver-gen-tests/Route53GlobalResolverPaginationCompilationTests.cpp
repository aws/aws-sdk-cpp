/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Route53GlobalResolver pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/route53globalresolver/Route53GlobalResolverClientPagination.h>
#include <aws/route53globalresolver/Route53GlobalResolverPaginationBase.h>
#include <aws/route53globalresolver/model/ListGlobalResolversPaginationTraits.h>
#include <aws/route53globalresolver/model/ListFirewallDomainListsPaginationTraits.h>
#include <aws/route53globalresolver/model/ListManagedFirewallDomainListsPaginationTraits.h>
#include <aws/route53globalresolver/model/ListAccessTokensPaginationTraits.h>
#include <aws/route53globalresolver/model/ListFirewallDomainsPaginationTraits.h>
#include <aws/route53globalresolver/model/ListDNSViewsPaginationTraits.h>
#include <aws/route53globalresolver/model/ListFirewallRulesPaginationTraits.h>
#include <aws/route53globalresolver/model/ListAccessSourcesPaginationTraits.h>
#include <aws/route53globalresolver/model/ListHostedZoneAssociationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class Route53GlobalResolverPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(Route53GlobalResolverPaginationCompilationTest, Route53GlobalResolverPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
