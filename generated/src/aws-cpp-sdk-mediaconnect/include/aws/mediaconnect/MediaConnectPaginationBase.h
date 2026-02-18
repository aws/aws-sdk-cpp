/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mediaconnect/model/ListBridgesPaginationTraits.h>
#include <aws/mediaconnect/model/ListEntitlementsPaginationTraits.h>
#include <aws/mediaconnect/model/ListFlowsPaginationTraits.h>
#include <aws/mediaconnect/model/ListGatewayInstancesPaginationTraits.h>
#include <aws/mediaconnect/model/ListGatewaysPaginationTraits.h>
#include <aws/mediaconnect/model/ListOfferingsPaginationTraits.h>
#include <aws/mediaconnect/model/ListReservationsPaginationTraits.h>
#include <aws/mediaconnect/model/ListRouterInputsPaginationTraits.h>
#include <aws/mediaconnect/model/ListRouterNetworkInterfacesPaginationTraits.h>
#include <aws/mediaconnect/model/ListRouterOutputsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MediaConnect {

class MediaConnectClient;

template <typename DerivedClient>
class MediaConnectPaginationBase {
 public:
  /**
   * Create a paginator for ListBridges operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBridgesRequest, Pagination::ListBridgesPaginationTraits<DerivedClient>>
  ListBridgesPaginator(const Model::ListBridgesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBridgesRequest,
                                             Pagination::ListBridgesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListEntitlements operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntitlementsRequest,
                                    Pagination::ListEntitlementsPaginationTraits<DerivedClient>>
  ListEntitlementsPaginator(const Model::ListEntitlementsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntitlementsRequest,
                                             Pagination::ListEntitlementsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListFlows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowsRequest, Pagination::ListFlowsPaginationTraits<DerivedClient>>
  ListFlowsPaginator(const Model::ListFlowsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowsRequest, Pagination::ListFlowsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGatewayInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGatewayInstancesRequest,
                                    Pagination::ListGatewayInstancesPaginationTraits<DerivedClient>>
  ListGatewayInstancesPaginator(const Model::ListGatewayInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGatewayInstancesRequest,
                                             Pagination::ListGatewayInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGateways operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGatewaysRequest, Pagination::ListGatewaysPaginationTraits<DerivedClient>>
  ListGatewaysPaginator(const Model::ListGatewaysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGatewaysRequest,
                                             Pagination::ListGatewaysPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListOfferings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOfferingsRequest, Pagination::ListOfferingsPaginationTraits<DerivedClient>>
  ListOfferingsPaginator(const Model::ListOfferingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOfferingsRequest,
                                             Pagination::ListOfferingsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListReservations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReservationsRequest,
                                    Pagination::ListReservationsPaginationTraits<DerivedClient>>
  ListReservationsPaginator(const Model::ListReservationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReservationsRequest,
                                             Pagination::ListReservationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListRouterInputs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRouterInputsRequest,
                                    Pagination::ListRouterInputsPaginationTraits<DerivedClient>>
  ListRouterInputsPaginator(const Model::ListRouterInputsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRouterInputsRequest,
                                             Pagination::ListRouterInputsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListRouterNetworkInterfaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRouterNetworkInterfacesRequest,
                                    Pagination::ListRouterNetworkInterfacesPaginationTraits<DerivedClient>>
  ListRouterNetworkInterfacesPaginator(const Model::ListRouterNetworkInterfacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRouterNetworkInterfacesRequest,
                                             Pagination::ListRouterNetworkInterfacesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRouterOutputs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRouterOutputsRequest,
                                    Pagination::ListRouterOutputsPaginationTraits<DerivedClient>>
  ListRouterOutputsPaginator(const Model::ListRouterOutputsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRouterOutputsRequest,
                                             Pagination::ListRouterOutputsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace MediaConnect
}  // namespace Aws
