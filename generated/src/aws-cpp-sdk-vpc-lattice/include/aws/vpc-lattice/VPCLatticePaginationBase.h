/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/vpc-lattice/model/ListAccessLogSubscriptionsPaginationTraits.h>
#include <aws/vpc-lattice/model/ListDomainVerificationsPaginationTraits.h>
#include <aws/vpc-lattice/model/ListListenersPaginationTraits.h>
#include <aws/vpc-lattice/model/ListResourceConfigurationsPaginationTraits.h>
#include <aws/vpc-lattice/model/ListResourceEndpointAssociationsPaginationTraits.h>
#include <aws/vpc-lattice/model/ListResourceGatewaysPaginationTraits.h>
#include <aws/vpc-lattice/model/ListRulesPaginationTraits.h>
#include <aws/vpc-lattice/model/ListServiceNetworkResourceAssociationsPaginationTraits.h>
#include <aws/vpc-lattice/model/ListServiceNetworkServiceAssociationsPaginationTraits.h>
#include <aws/vpc-lattice/model/ListServiceNetworkVpcAssociationsPaginationTraits.h>
#include <aws/vpc-lattice/model/ListServiceNetworkVpcEndpointAssociationsPaginationTraits.h>
#include <aws/vpc-lattice/model/ListServiceNetworksPaginationTraits.h>
#include <aws/vpc-lattice/model/ListServicesPaginationTraits.h>
#include <aws/vpc-lattice/model/ListTargetGroupsPaginationTraits.h>
#include <aws/vpc-lattice/model/ListTargetsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace VPCLattice {

class VPCLatticeClient;

template <typename DerivedClient>
class VPCLatticePaginationBase {
 public:
  /**
   * Create a paginator for ListAccessLogSubscriptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessLogSubscriptionsRequest,
                                    Pagination::ListAccessLogSubscriptionsPaginationTraits<DerivedClient>>
  ListAccessLogSubscriptionsPaginator(const Model::ListAccessLogSubscriptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessLogSubscriptionsRequest,
                                             Pagination::ListAccessLogSubscriptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDomainVerifications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainVerificationsRequest,
                                    Pagination::ListDomainVerificationsPaginationTraits<DerivedClient>>
  ListDomainVerificationsPaginator(const Model::ListDomainVerificationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainVerificationsRequest,
                                             Pagination::ListDomainVerificationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListListeners operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListListenersRequest, Pagination::ListListenersPaginationTraits<DerivedClient>>
  ListListenersPaginator(const Model::ListListenersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListListenersRequest,
                                             Pagination::ListListenersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListResourceConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceConfigurationsRequest,
                                    Pagination::ListResourceConfigurationsPaginationTraits<DerivedClient>>
  ListResourceConfigurationsPaginator(const Model::ListResourceConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceConfigurationsRequest,
                                             Pagination::ListResourceConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourceEndpointAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceEndpointAssociationsRequest,
                                    Pagination::ListResourceEndpointAssociationsPaginationTraits<DerivedClient>>
  ListResourceEndpointAssociationsPaginator(const Model::ListResourceEndpointAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceEndpointAssociationsRequest,
                                             Pagination::ListResourceEndpointAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourceGateways operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceGatewaysRequest,
                                    Pagination::ListResourceGatewaysPaginationTraits<DerivedClient>>
  ListResourceGatewaysPaginator(const Model::ListResourceGatewaysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceGatewaysRequest,
                                             Pagination::ListResourceGatewaysPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRulesRequest, Pagination::ListRulesPaginationTraits<DerivedClient>>
  ListRulesPaginator(const Model::ListRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRulesRequest, Pagination::ListRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServiceNetworkResourceAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceNetworkResourceAssociationsRequest,
                                    Pagination::ListServiceNetworkResourceAssociationsPaginationTraits<DerivedClient>>
  ListServiceNetworkResourceAssociationsPaginator(const Model::ListServiceNetworkResourceAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceNetworkResourceAssociationsRequest,
                                             Pagination::ListServiceNetworkResourceAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServiceNetworks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceNetworksRequest,
                                    Pagination::ListServiceNetworksPaginationTraits<DerivedClient>>
  ListServiceNetworksPaginator(const Model::ListServiceNetworksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceNetworksRequest,
                                             Pagination::ListServiceNetworksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServiceNetworkServiceAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceNetworkServiceAssociationsRequest,
                                    Pagination::ListServiceNetworkServiceAssociationsPaginationTraits<DerivedClient>>
  ListServiceNetworkServiceAssociationsPaginator(const Model::ListServiceNetworkServiceAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceNetworkServiceAssociationsRequest,
                                             Pagination::ListServiceNetworkServiceAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServiceNetworkVpcAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceNetworkVpcAssociationsRequest,
                                    Pagination::ListServiceNetworkVpcAssociationsPaginationTraits<DerivedClient>>
  ListServiceNetworkVpcAssociationsPaginator(const Model::ListServiceNetworkVpcAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceNetworkVpcAssociationsRequest,
                                             Pagination::ListServiceNetworkVpcAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServiceNetworkVpcEndpointAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceNetworkVpcEndpointAssociationsRequest,
                                    Pagination::ListServiceNetworkVpcEndpointAssociationsPaginationTraits<DerivedClient>>
  ListServiceNetworkVpcEndpointAssociationsPaginator(const Model::ListServiceNetworkVpcEndpointAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceNetworkVpcEndpointAssociationsRequest,
                                             Pagination::ListServiceNetworkVpcEndpointAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesRequest, Pagination::ListServicesPaginationTraits<DerivedClient>>
  ListServicesPaginator(const Model::ListServicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesRequest,
                                             Pagination::ListServicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListTargetGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTargetGroupsRequest,
                                    Pagination::ListTargetGroupsPaginationTraits<DerivedClient>>
  ListTargetGroupsPaginator(const Model::ListTargetGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTargetGroupsRequest,
                                             Pagination::ListTargetGroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListTargets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTargetsRequest, Pagination::ListTargetsPaginationTraits<DerivedClient>>
  ListTargetsPaginator(const Model::ListTargetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTargetsRequest,
                                             Pagination::ListTargetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace VPCLattice
}  // namespace Aws
