/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace Route53Resolver {

class Route53ResolverClient;

template <typename DerivedClient>
class Route53ResolverPaginationBase {
 public:
  /**
   * Create a paginator for ListFirewallConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFirewallConfigsRequest,
                                    Pagination::ListFirewallConfigsPaginationTraits<DerivedClient>>
  ListFirewallConfigsPaginator(const Model::ListFirewallConfigsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFirewallConfigsRequest,
                                             Pagination::ListFirewallConfigsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
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
   * Create a paginator for ListFirewallRuleGroupAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFirewallRuleGroupAssociationsRequest,
                                    Pagination::ListFirewallRuleGroupAssociationsPaginationTraits<DerivedClient>>
  ListFirewallRuleGroupAssociationsPaginator(const Model::ListFirewallRuleGroupAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFirewallRuleGroupAssociationsRequest,
                                             Pagination::ListFirewallRuleGroupAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFirewallRuleGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFirewallRuleGroupsRequest,
                                    Pagination::ListFirewallRuleGroupsPaginationTraits<DerivedClient>>
  ListFirewallRuleGroupsPaginator(const Model::ListFirewallRuleGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFirewallRuleGroupsRequest,
                                             Pagination::ListFirewallRuleGroupsPaginationTraits<DerivedClient>>{
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
   * Create a paginator for ListOutpostResolvers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOutpostResolversRequest,
                                    Pagination::ListOutpostResolversPaginationTraits<DerivedClient>>
  ListOutpostResolversPaginator(const Model::ListOutpostResolversRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOutpostResolversRequest,
                                             Pagination::ListOutpostResolversPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResolverConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResolverConfigsRequest,
                                    Pagination::ListResolverConfigsPaginationTraits<DerivedClient>>
  ListResolverConfigsPaginator(const Model::ListResolverConfigsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResolverConfigsRequest,
                                             Pagination::ListResolverConfigsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResolverDnssecConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResolverDnssecConfigsRequest,
                                    Pagination::ListResolverDnssecConfigsPaginationTraits<DerivedClient>>
  ListResolverDnssecConfigsPaginator(const Model::ListResolverDnssecConfigsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResolverDnssecConfigsRequest,
                                             Pagination::ListResolverDnssecConfigsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResolverEndpointIpAddresses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResolverEndpointIpAddressesRequest,
                                    Pagination::ListResolverEndpointIpAddressesPaginationTraits<DerivedClient>>
  ListResolverEndpointIpAddressesPaginator(const Model::ListResolverEndpointIpAddressesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResolverEndpointIpAddressesRequest,
                                             Pagination::ListResolverEndpointIpAddressesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResolverEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResolverEndpointsRequest,
                                    Pagination::ListResolverEndpointsPaginationTraits<DerivedClient>>
  ListResolverEndpointsPaginator(const Model::ListResolverEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResolverEndpointsRequest,
                                             Pagination::ListResolverEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResolverQueryLogConfigAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResolverQueryLogConfigAssociationsRequest,
                                    Pagination::ListResolverQueryLogConfigAssociationsPaginationTraits<DerivedClient>>
  ListResolverQueryLogConfigAssociationsPaginator(const Model::ListResolverQueryLogConfigAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResolverQueryLogConfigAssociationsRequest,
                                             Pagination::ListResolverQueryLogConfigAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResolverQueryLogConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResolverQueryLogConfigsRequest,
                                    Pagination::ListResolverQueryLogConfigsPaginationTraits<DerivedClient>>
  ListResolverQueryLogConfigsPaginator(const Model::ListResolverQueryLogConfigsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResolverQueryLogConfigsRequest,
                                             Pagination::ListResolverQueryLogConfigsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResolverRuleAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResolverRuleAssociationsRequest,
                                    Pagination::ListResolverRuleAssociationsPaginationTraits<DerivedClient>>
  ListResolverRuleAssociationsPaginator(const Model::ListResolverRuleAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResolverRuleAssociationsRequest,
                                             Pagination::ListResolverRuleAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResolverRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResolverRulesRequest,
                                    Pagination::ListResolverRulesPaginationTraits<DerivedClient>>
  ListResolverRulesPaginator(const Model::ListResolverRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResolverRulesRequest,
                                             Pagination::ListResolverRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTagsForResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                    Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>
  ListTagsForResourcePaginator(const Model::ListTagsForResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                             Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Route53Resolver
}  // namespace Aws
