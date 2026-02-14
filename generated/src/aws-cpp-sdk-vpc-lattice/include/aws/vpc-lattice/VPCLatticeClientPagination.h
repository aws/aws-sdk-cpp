/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/vpc-lattice/VPCLatticeClient.h>
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

namespace Aws {
namespace VPCLattice {

using ListAccessLogSubscriptionsPaginator =
    Aws::Utils::Pagination::Paginator<VPCLatticeClient, Model::ListAccessLogSubscriptionsRequest,
                                      Pagination::ListAccessLogSubscriptionsPaginationTraits<VPCLatticeClient>>;
using ListDomainVerificationsPaginator =
    Aws::Utils::Pagination::Paginator<VPCLatticeClient, Model::ListDomainVerificationsRequest,
                                      Pagination::ListDomainVerificationsPaginationTraits<VPCLatticeClient>>;
using ListListenersPaginator = Aws::Utils::Pagination::Paginator<VPCLatticeClient, Model::ListListenersRequest,
                                                                 Pagination::ListListenersPaginationTraits<VPCLatticeClient>>;
using ListResourceConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<VPCLatticeClient, Model::ListResourceConfigurationsRequest,
                                      Pagination::ListResourceConfigurationsPaginationTraits<VPCLatticeClient>>;
using ListResourceEndpointAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<VPCLatticeClient, Model::ListResourceEndpointAssociationsRequest,
                                      Pagination::ListResourceEndpointAssociationsPaginationTraits<VPCLatticeClient>>;
using ListResourceGatewaysPaginator = Aws::Utils::Pagination::Paginator<VPCLatticeClient, Model::ListResourceGatewaysRequest,
                                                                        Pagination::ListResourceGatewaysPaginationTraits<VPCLatticeClient>>;
using ListRulesPaginator =
    Aws::Utils::Pagination::Paginator<VPCLatticeClient, Model::ListRulesRequest, Pagination::ListRulesPaginationTraits<VPCLatticeClient>>;
using ListServiceNetworkResourceAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<VPCLatticeClient, Model::ListServiceNetworkResourceAssociationsRequest,
                                      Pagination::ListServiceNetworkResourceAssociationsPaginationTraits<VPCLatticeClient>>;
using ListServiceNetworksPaginator = Aws::Utils::Pagination::Paginator<VPCLatticeClient, Model::ListServiceNetworksRequest,
                                                                       Pagination::ListServiceNetworksPaginationTraits<VPCLatticeClient>>;
using ListServiceNetworkServiceAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<VPCLatticeClient, Model::ListServiceNetworkServiceAssociationsRequest,
                                      Pagination::ListServiceNetworkServiceAssociationsPaginationTraits<VPCLatticeClient>>;
using ListServiceNetworkVpcAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<VPCLatticeClient, Model::ListServiceNetworkVpcAssociationsRequest,
                                      Pagination::ListServiceNetworkVpcAssociationsPaginationTraits<VPCLatticeClient>>;
using ListServiceNetworkVpcEndpointAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<VPCLatticeClient, Model::ListServiceNetworkVpcEndpointAssociationsRequest,
                                      Pagination::ListServiceNetworkVpcEndpointAssociationsPaginationTraits<VPCLatticeClient>>;
using ListServicesPaginator = Aws::Utils::Pagination::Paginator<VPCLatticeClient, Model::ListServicesRequest,
                                                                Pagination::ListServicesPaginationTraits<VPCLatticeClient>>;
using ListTargetGroupsPaginator = Aws::Utils::Pagination::Paginator<VPCLatticeClient, Model::ListTargetGroupsRequest,
                                                                    Pagination::ListTargetGroupsPaginationTraits<VPCLatticeClient>>;
using ListTargetsPaginator = Aws::Utils::Pagination::Paginator<VPCLatticeClient, Model::ListTargetsRequest,
                                                               Pagination::ListTargetsPaginationTraits<VPCLatticeClient>>;

}  // namespace VPCLattice
}  // namespace Aws
