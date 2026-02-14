/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/route53globalresolver/Route53GlobalResolverClient.h>
#include <aws/route53globalresolver/model/ListAccessSourcesPaginationTraits.h>
#include <aws/route53globalresolver/model/ListAccessTokensPaginationTraits.h>
#include <aws/route53globalresolver/model/ListDNSViewsPaginationTraits.h>
#include <aws/route53globalresolver/model/ListFirewallDomainListsPaginationTraits.h>
#include <aws/route53globalresolver/model/ListFirewallDomainsPaginationTraits.h>
#include <aws/route53globalresolver/model/ListFirewallRulesPaginationTraits.h>
#include <aws/route53globalresolver/model/ListGlobalResolversPaginationTraits.h>
#include <aws/route53globalresolver/model/ListHostedZoneAssociationsPaginationTraits.h>
#include <aws/route53globalresolver/model/ListManagedFirewallDomainListsPaginationTraits.h>

namespace Aws {
namespace Route53GlobalResolver {

using ListAccessSourcesPaginator =
    Aws::Utils::Pagination::Paginator<Route53GlobalResolverClient, Model::ListAccessSourcesRequest,
                                      Pagination::ListAccessSourcesPaginationTraits<Route53GlobalResolverClient>>;
using ListAccessTokensPaginator =
    Aws::Utils::Pagination::Paginator<Route53GlobalResolverClient, Model::ListAccessTokensRequest,
                                      Pagination::ListAccessTokensPaginationTraits<Route53GlobalResolverClient>>;
using ListDNSViewsPaginator = Aws::Utils::Pagination::Paginator<Route53GlobalResolverClient, Model::ListDNSViewsRequest,
                                                                Pagination::ListDNSViewsPaginationTraits<Route53GlobalResolverClient>>;
using ListFirewallDomainListsPaginator =
    Aws::Utils::Pagination::Paginator<Route53GlobalResolverClient, Model::ListFirewallDomainListsRequest,
                                      Pagination::ListFirewallDomainListsPaginationTraits<Route53GlobalResolverClient>>;
using ListFirewallDomainsPaginator =
    Aws::Utils::Pagination::Paginator<Route53GlobalResolverClient, Model::ListFirewallDomainsRequest,
                                      Pagination::ListFirewallDomainsPaginationTraits<Route53GlobalResolverClient>>;
using ListFirewallRulesPaginator =
    Aws::Utils::Pagination::Paginator<Route53GlobalResolverClient, Model::ListFirewallRulesRequest,
                                      Pagination::ListFirewallRulesPaginationTraits<Route53GlobalResolverClient>>;
using ListGlobalResolversPaginator =
    Aws::Utils::Pagination::Paginator<Route53GlobalResolverClient, Model::ListGlobalResolversRequest,
                                      Pagination::ListGlobalResolversPaginationTraits<Route53GlobalResolverClient>>;
using ListHostedZoneAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<Route53GlobalResolverClient, Model::ListHostedZoneAssociationsRequest,
                                      Pagination::ListHostedZoneAssociationsPaginationTraits<Route53GlobalResolverClient>>;
using ListManagedFirewallDomainListsPaginator =
    Aws::Utils::Pagination::Paginator<Route53GlobalResolverClient, Model::ListManagedFirewallDomainListsRequest,
                                      Pagination::ListManagedFirewallDomainListsPaginationTraits<Route53GlobalResolverClient>>;

}  // namespace Route53GlobalResolver
}  // namespace Aws
