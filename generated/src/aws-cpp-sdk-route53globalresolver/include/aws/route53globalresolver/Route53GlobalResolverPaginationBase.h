/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/route53globalresolver/model/ListAccessSourcesPaginationTraits.h>
#include <aws/route53globalresolver/model/ListAccessTokensPaginationTraits.h>
#include <aws/route53globalresolver/model/ListDNSViewsPaginationTraits.h>
#include <aws/route53globalresolver/model/ListFirewallDomainListsPaginationTraits.h>
#include <aws/route53globalresolver/model/ListFirewallDomainsPaginationTraits.h>
#include <aws/route53globalresolver/model/ListFirewallRulesPaginationTraits.h>
#include <aws/route53globalresolver/model/ListGlobalResolversPaginationTraits.h>
#include <aws/route53globalresolver/model/ListHostedZoneAssociationsPaginationTraits.h>
#include <aws/route53globalresolver/model/ListManagedFirewallDomainListsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Route53GlobalResolver {

class Route53GlobalResolverClient;

template <typename DerivedClient>
class Route53GlobalResolverPaginationBase {
 public:
  /**
   * Create a paginator for ListAccessSources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessSourcesRequest,
                                    Pagination::ListAccessSourcesPaginationTraits<DerivedClient>>
  ListAccessSourcesPaginator(const Model::ListAccessSourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessSourcesRequest,
                                             Pagination::ListAccessSourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAccessTokens operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessTokensRequest,
                                    Pagination::ListAccessTokensPaginationTraits<DerivedClient>>
  ListAccessTokensPaginator(const Model::ListAccessTokensRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessTokensRequest,
                                             Pagination::ListAccessTokensPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListDNSViews operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDNSViewsRequest, Pagination::ListDNSViewsPaginationTraits<DerivedClient>>
  ListDNSViewsPaginator(const Model::ListDNSViewsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDNSViewsRequest,
                                             Pagination::ListDNSViewsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListFirewallDomainLists operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFirewallDomainListsRequest,
                                    Pagination::ListFirewallDomainListsPaginationTraits<DerivedClient>>
  ListFirewallDomainListsPaginator(const Model::ListFirewallDomainListsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFirewallDomainListsRequest,
                                             Pagination::ListFirewallDomainListsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFirewallDomains operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFirewallDomainsRequest,
                                    Pagination::ListFirewallDomainsPaginationTraits<DerivedClient>>
  ListFirewallDomainsPaginator(const Model::ListFirewallDomainsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFirewallDomainsRequest,
                                             Pagination::ListFirewallDomainsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFirewallRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFirewallRulesRequest,
                                    Pagination::ListFirewallRulesPaginationTraits<DerivedClient>>
  ListFirewallRulesPaginator(const Model::ListFirewallRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFirewallRulesRequest,
                                             Pagination::ListFirewallRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGlobalResolvers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGlobalResolversRequest,
                                    Pagination::ListGlobalResolversPaginationTraits<DerivedClient>>
  ListGlobalResolversPaginator(const Model::ListGlobalResolversRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGlobalResolversRequest,
                                             Pagination::ListGlobalResolversPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListHostedZoneAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHostedZoneAssociationsRequest,
                                    Pagination::ListHostedZoneAssociationsPaginationTraits<DerivedClient>>
  ListHostedZoneAssociationsPaginator(const Model::ListHostedZoneAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHostedZoneAssociationsRequest,
                                             Pagination::ListHostedZoneAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListManagedFirewallDomainLists operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedFirewallDomainListsRequest,
                                    Pagination::ListManagedFirewallDomainListsPaginationTraits<DerivedClient>>
  ListManagedFirewallDomainListsPaginator(const Model::ListManagedFirewallDomainListsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedFirewallDomainListsRequest,
                                             Pagination::ListManagedFirewallDomainListsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Route53GlobalResolver
}  // namespace Aws
