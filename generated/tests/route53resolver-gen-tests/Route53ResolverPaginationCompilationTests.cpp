/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Route53Resolver pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/route53resolver/Route53ResolverClientPagination.h>
#include <aws/route53resolver/Route53ResolverPaginationBase.h>
#include <aws/route53resolver/model/ListFirewallRuleGroupsPaginationTraits.h>
#include <aws/route53resolver/model/ListFirewallDomainsPaginationTraits.h>
#include <aws/route53resolver/model/ListFirewallRuleGroupAssociationsPaginationTraits.h>
#include <aws/route53resolver/model/ListResolverRulesPaginationTraits.h>
#include <aws/route53resolver/model/ListResolverQueryLogConfigAssociationsPaginationTraits.h>
#include <aws/route53resolver/model/ListResolverDnssecConfigsPaginationTraits.h>
#include <aws/route53resolver/model/ListTagsForResourcePaginationTraits.h>
#include <aws/route53resolver/model/ListResolverEndpointsPaginationTraits.h>
#include <aws/route53resolver/model/ListFirewallDomainListsPaginationTraits.h>
#include <aws/route53resolver/model/ListFirewallRulesPaginationTraits.h>
#include <aws/route53resolver/model/ListResolverQueryLogConfigsPaginationTraits.h>
#include <aws/route53resolver/model/ListOutpostResolversPaginationTraits.h>
#include <aws/route53resolver/model/ListResolverRuleAssociationsPaginationTraits.h>
#include <aws/route53resolver/model/ListResolverConfigsPaginationTraits.h>
#include <aws/route53resolver/model/ListFirewallConfigsPaginationTraits.h>
#include <aws/route53resolver/model/ListResolverEndpointIpAddressesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class Route53ResolverPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(Route53ResolverPaginationCompilationTest, Route53ResolverPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
