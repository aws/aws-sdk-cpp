/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mediaconnect/MediaConnectClient.h>
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

namespace Aws {
namespace MediaConnect {

using ListBridgesPaginator = Aws::Utils::Pagination::Paginator<MediaConnectClient, Model::ListBridgesRequest,
                                                               Pagination::ListBridgesPaginationTraits<MediaConnectClient>>;
using ListEntitlementsPaginator = Aws::Utils::Pagination::Paginator<MediaConnectClient, Model::ListEntitlementsRequest,
                                                                    Pagination::ListEntitlementsPaginationTraits<MediaConnectClient>>;
using ListFlowsPaginator = Aws::Utils::Pagination::Paginator<MediaConnectClient, Model::ListFlowsRequest,
                                                             Pagination::ListFlowsPaginationTraits<MediaConnectClient>>;
using ListGatewayInstancesPaginator =
    Aws::Utils::Pagination::Paginator<MediaConnectClient, Model::ListGatewayInstancesRequest,
                                      Pagination::ListGatewayInstancesPaginationTraits<MediaConnectClient>>;
using ListGatewaysPaginator = Aws::Utils::Pagination::Paginator<MediaConnectClient, Model::ListGatewaysRequest,
                                                                Pagination::ListGatewaysPaginationTraits<MediaConnectClient>>;
using ListOfferingsPaginator = Aws::Utils::Pagination::Paginator<MediaConnectClient, Model::ListOfferingsRequest,
                                                                 Pagination::ListOfferingsPaginationTraits<MediaConnectClient>>;
using ListReservationsPaginator = Aws::Utils::Pagination::Paginator<MediaConnectClient, Model::ListReservationsRequest,
                                                                    Pagination::ListReservationsPaginationTraits<MediaConnectClient>>;
using ListRouterInputsPaginator = Aws::Utils::Pagination::Paginator<MediaConnectClient, Model::ListRouterInputsRequest,
                                                                    Pagination::ListRouterInputsPaginationTraits<MediaConnectClient>>;
using ListRouterNetworkInterfacesPaginator =
    Aws::Utils::Pagination::Paginator<MediaConnectClient, Model::ListRouterNetworkInterfacesRequest,
                                      Pagination::ListRouterNetworkInterfacesPaginationTraits<MediaConnectClient>>;
using ListRouterOutputsPaginator = Aws::Utils::Pagination::Paginator<MediaConnectClient, Model::ListRouterOutputsRequest,
                                                                     Pagination::ListRouterOutputsPaginationTraits<MediaConnectClient>>;

}  // namespace MediaConnect
}  // namespace Aws
