/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/networkmanager/NetworkManagerClient.h>
#include <aws/networkmanager/model/DescribeGlobalNetworksPaginationTraits.h>
#include <aws/networkmanager/model/GetConnectPeerAssociationsPaginationTraits.h>
#include <aws/networkmanager/model/GetConnectionsPaginationTraits.h>
#include <aws/networkmanager/model/GetCoreNetworkChangeEventsPaginationTraits.h>
#include <aws/networkmanager/model/GetCoreNetworkChangeSetPaginationTraits.h>
#include <aws/networkmanager/model/GetCustomerGatewayAssociationsPaginationTraits.h>
#include <aws/networkmanager/model/GetDevicesPaginationTraits.h>
#include <aws/networkmanager/model/GetLinkAssociationsPaginationTraits.h>
#include <aws/networkmanager/model/GetLinksPaginationTraits.h>
#include <aws/networkmanager/model/GetNetworkResourceCountsPaginationTraits.h>
#include <aws/networkmanager/model/GetNetworkResourceRelationshipsPaginationTraits.h>
#include <aws/networkmanager/model/GetNetworkResourcesPaginationTraits.h>
#include <aws/networkmanager/model/GetNetworkTelemetryPaginationTraits.h>
#include <aws/networkmanager/model/GetSitesPaginationTraits.h>
#include <aws/networkmanager/model/GetTransitGatewayConnectPeerAssociationsPaginationTraits.h>
#include <aws/networkmanager/model/GetTransitGatewayRegistrationsPaginationTraits.h>
#include <aws/networkmanager/model/ListAttachmentRoutingPolicyAssociationsPaginationTraits.h>
#include <aws/networkmanager/model/ListAttachmentsPaginationTraits.h>
#include <aws/networkmanager/model/ListConnectPeersPaginationTraits.h>
#include <aws/networkmanager/model/ListCoreNetworkPolicyVersionsPaginationTraits.h>
#include <aws/networkmanager/model/ListCoreNetworkPrefixListAssociationsPaginationTraits.h>
#include <aws/networkmanager/model/ListCoreNetworkRoutingInformationPaginationTraits.h>
#include <aws/networkmanager/model/ListCoreNetworksPaginationTraits.h>
#include <aws/networkmanager/model/ListPeeringsPaginationTraits.h>

namespace Aws {
namespace NetworkManager {

using DescribeGlobalNetworksPaginator =
    Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::DescribeGlobalNetworksRequest,
                                      Pagination::DescribeGlobalNetworksPaginationTraits<NetworkManagerClient>>;
using GetConnectionsPaginator = Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::GetConnectionsRequest,
                                                                  Pagination::GetConnectionsPaginationTraits<NetworkManagerClient>>;
using GetConnectPeerAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::GetConnectPeerAssociationsRequest,
                                      Pagination::GetConnectPeerAssociationsPaginationTraits<NetworkManagerClient>>;
using GetCoreNetworkChangeEventsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::GetCoreNetworkChangeEventsRequest,
                                      Pagination::GetCoreNetworkChangeEventsPaginationTraits<NetworkManagerClient>>;
using GetCoreNetworkChangeSetPaginator =
    Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::GetCoreNetworkChangeSetRequest,
                                      Pagination::GetCoreNetworkChangeSetPaginationTraits<NetworkManagerClient>>;
using GetCustomerGatewayAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::GetCustomerGatewayAssociationsRequest,
                                      Pagination::GetCustomerGatewayAssociationsPaginationTraits<NetworkManagerClient>>;
using GetDevicesPaginator = Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::GetDevicesRequest,
                                                              Pagination::GetDevicesPaginationTraits<NetworkManagerClient>>;
using GetLinkAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::GetLinkAssociationsRequest,
                                      Pagination::GetLinkAssociationsPaginationTraits<NetworkManagerClient>>;
using GetLinksPaginator = Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::GetLinksRequest,
                                                            Pagination::GetLinksPaginationTraits<NetworkManagerClient>>;
using GetNetworkResourceCountsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::GetNetworkResourceCountsRequest,
                                      Pagination::GetNetworkResourceCountsPaginationTraits<NetworkManagerClient>>;
using GetNetworkResourceRelationshipsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::GetNetworkResourceRelationshipsRequest,
                                      Pagination::GetNetworkResourceRelationshipsPaginationTraits<NetworkManagerClient>>;
using GetNetworkResourcesPaginator =
    Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::GetNetworkResourcesRequest,
                                      Pagination::GetNetworkResourcesPaginationTraits<NetworkManagerClient>>;
using GetNetworkTelemetryPaginator =
    Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::GetNetworkTelemetryRequest,
                                      Pagination::GetNetworkTelemetryPaginationTraits<NetworkManagerClient>>;
using GetSitesPaginator = Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::GetSitesRequest,
                                                            Pagination::GetSitesPaginationTraits<NetworkManagerClient>>;
using GetTransitGatewayConnectPeerAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::GetTransitGatewayConnectPeerAssociationsRequest,
                                      Pagination::GetTransitGatewayConnectPeerAssociationsPaginationTraits<NetworkManagerClient>>;
using GetTransitGatewayRegistrationsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::GetTransitGatewayRegistrationsRequest,
                                      Pagination::GetTransitGatewayRegistrationsPaginationTraits<NetworkManagerClient>>;
using ListAttachmentRoutingPolicyAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::ListAttachmentRoutingPolicyAssociationsRequest,
                                      Pagination::ListAttachmentRoutingPolicyAssociationsPaginationTraits<NetworkManagerClient>>;
using ListAttachmentsPaginator = Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::ListAttachmentsRequest,
                                                                   Pagination::ListAttachmentsPaginationTraits<NetworkManagerClient>>;
using ListConnectPeersPaginator = Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::ListConnectPeersRequest,
                                                                    Pagination::ListConnectPeersPaginationTraits<NetworkManagerClient>>;
using ListCoreNetworkPolicyVersionsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::ListCoreNetworkPolicyVersionsRequest,
                                      Pagination::ListCoreNetworkPolicyVersionsPaginationTraits<NetworkManagerClient>>;
using ListCoreNetworkPrefixListAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::ListCoreNetworkPrefixListAssociationsRequest,
                                      Pagination::ListCoreNetworkPrefixListAssociationsPaginationTraits<NetworkManagerClient>>;
using ListCoreNetworkRoutingInformationPaginator =
    Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::ListCoreNetworkRoutingInformationRequest,
                                      Pagination::ListCoreNetworkRoutingInformationPaginationTraits<NetworkManagerClient>>;
using ListCoreNetworksPaginator = Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::ListCoreNetworksRequest,
                                                                    Pagination::ListCoreNetworksPaginationTraits<NetworkManagerClient>>;
using ListPeeringsPaginator = Aws::Utils::Pagination::Paginator<NetworkManagerClient, Model::ListPeeringsRequest,
                                                                Pagination::ListPeeringsPaginationTraits<NetworkManagerClient>>;

}  // namespace NetworkManager
}  // namespace Aws
