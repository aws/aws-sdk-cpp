/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/route53resolver/Route53ResolverClient.h>
#include <aws/route53resolver/model/ListFirewallConfigsPaginationTraits.h>
#include <aws/route53resolver/model/ListFirewallDomainListsPaginationTraits.h>
#include <aws/route53resolver/model/ListFirewallDomainsPaginationTraits.h>
#include <aws/route53resolver/model/ListFirewallRuleGroupAssociationsPaginationTraits.h>
#include <aws/route53resolver/model/ListFirewallRuleGroupsPaginationTraits.h>
#include <aws/route53resolver/model/ListFirewallRulesPaginationTraits.h>
#include <aws/route53resolver/model/ListOutpostResolversPaginationTraits.h>
#include <aws/route53resolver/model/ListResolverConfigsPaginationTraits.h>
#include <aws/route53resolver/model/ListResolverDnssecConfigsPaginationTraits.h>
#include <aws/route53resolver/model/ListResolverEndpointIpAddressesPaginationTraits.h>
#include <aws/route53resolver/model/ListResolverEndpointsPaginationTraits.h>
#include <aws/route53resolver/model/ListResolverQueryLogConfigAssociationsPaginationTraits.h>
#include <aws/route53resolver/model/ListResolverQueryLogConfigsPaginationTraits.h>
#include <aws/route53resolver/model/ListResolverRuleAssociationsPaginationTraits.h>
#include <aws/route53resolver/model/ListResolverRulesPaginationTraits.h>
#include <aws/route53resolver/model/ListTagsForResourcePaginationTraits.h>

namespace Aws {
namespace Route53Resolver {

using ListFirewallConfigsPaginator =
    Aws::Utils::Pagination::Paginator<Route53ResolverClient, Model::ListFirewallConfigsRequest,
                                      Pagination::ListFirewallConfigsPaginationTraits<Route53ResolverClient>>;
using ListFirewallDomainListsPaginator =
    Aws::Utils::Pagination::Paginator<Route53ResolverClient, Model::ListFirewallDomainListsRequest,
                                      Pagination::ListFirewallDomainListsPaginationTraits<Route53ResolverClient>>;
using ListFirewallDomainsPaginator =
    Aws::Utils::Pagination::Paginator<Route53ResolverClient, Model::ListFirewallDomainsRequest,
                                      Pagination::ListFirewallDomainsPaginationTraits<Route53ResolverClient>>;
using ListFirewallRuleGroupAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<Route53ResolverClient, Model::ListFirewallRuleGroupAssociationsRequest,
                                      Pagination::ListFirewallRuleGroupAssociationsPaginationTraits<Route53ResolverClient>>;
using ListFirewallRuleGroupsPaginator =
    Aws::Utils::Pagination::Paginator<Route53ResolverClient, Model::ListFirewallRuleGroupsRequest,
                                      Pagination::ListFirewallRuleGroupsPaginationTraits<Route53ResolverClient>>;
using ListFirewallRulesPaginator = Aws::Utils::Pagination::Paginator<Route53ResolverClient, Model::ListFirewallRulesRequest,
                                                                     Pagination::ListFirewallRulesPaginationTraits<Route53ResolverClient>>;
using ListOutpostResolversPaginator =
    Aws::Utils::Pagination::Paginator<Route53ResolverClient, Model::ListOutpostResolversRequest,
                                      Pagination::ListOutpostResolversPaginationTraits<Route53ResolverClient>>;
using ListResolverConfigsPaginator =
    Aws::Utils::Pagination::Paginator<Route53ResolverClient, Model::ListResolverConfigsRequest,
                                      Pagination::ListResolverConfigsPaginationTraits<Route53ResolverClient>>;
using ListResolverDnssecConfigsPaginator =
    Aws::Utils::Pagination::Paginator<Route53ResolverClient, Model::ListResolverDnssecConfigsRequest,
                                      Pagination::ListResolverDnssecConfigsPaginationTraits<Route53ResolverClient>>;
using ListResolverEndpointIpAddressesPaginator =
    Aws::Utils::Pagination::Paginator<Route53ResolverClient, Model::ListResolverEndpointIpAddressesRequest,
                                      Pagination::ListResolverEndpointIpAddressesPaginationTraits<Route53ResolverClient>>;
using ListResolverEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<Route53ResolverClient, Model::ListResolverEndpointsRequest,
                                      Pagination::ListResolverEndpointsPaginationTraits<Route53ResolverClient>>;
using ListResolverQueryLogConfigAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<Route53ResolverClient, Model::ListResolverQueryLogConfigAssociationsRequest,
                                      Pagination::ListResolverQueryLogConfigAssociationsPaginationTraits<Route53ResolverClient>>;
using ListResolverQueryLogConfigsPaginator =
    Aws::Utils::Pagination::Paginator<Route53ResolverClient, Model::ListResolverQueryLogConfigsRequest,
                                      Pagination::ListResolverQueryLogConfigsPaginationTraits<Route53ResolverClient>>;
using ListResolverRuleAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<Route53ResolverClient, Model::ListResolverRuleAssociationsRequest,
                                      Pagination::ListResolverRuleAssociationsPaginationTraits<Route53ResolverClient>>;
using ListResolverRulesPaginator = Aws::Utils::Pagination::Paginator<Route53ResolverClient, Model::ListResolverRulesRequest,
                                                                     Pagination::ListResolverRulesPaginationTraits<Route53ResolverClient>>;
using ListTagsForResourcePaginator =
    Aws::Utils::Pagination::Paginator<Route53ResolverClient, Model::ListTagsForResourceRequest,
                                      Pagination::ListTagsForResourcePaginationTraits<Route53ResolverClient>>;

}  // namespace Route53Resolver
}  // namespace Aws
