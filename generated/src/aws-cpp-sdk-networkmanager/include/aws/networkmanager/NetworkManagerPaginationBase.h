/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace NetworkManager {

class NetworkManagerClient;

template <typename DerivedClient>
class NetworkManagerPaginationBase {
 public:
  /**
   * Create a paginator for DescribeGlobalNetworks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeGlobalNetworksRequest,
                                    Pagination::DescribeGlobalNetworksPaginationTraits<DerivedClient>>
  DescribeGlobalNetworksPaginator(const Model::DescribeGlobalNetworksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeGlobalNetworksRequest,
                                             Pagination::DescribeGlobalNetworksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetConnectionsRequest, Pagination::GetConnectionsPaginationTraits<DerivedClient>>
  GetConnectionsPaginator(const Model::GetConnectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetConnectionsRequest,
                                             Pagination::GetConnectionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for GetConnectPeerAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetConnectPeerAssociationsRequest,
                                    Pagination::GetConnectPeerAssociationsPaginationTraits<DerivedClient>>
  GetConnectPeerAssociationsPaginator(const Model::GetConnectPeerAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetConnectPeerAssociationsRequest,
                                             Pagination::GetConnectPeerAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetCoreNetworkChangeEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCoreNetworkChangeEventsRequest,
                                    Pagination::GetCoreNetworkChangeEventsPaginationTraits<DerivedClient>>
  GetCoreNetworkChangeEventsPaginator(const Model::GetCoreNetworkChangeEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCoreNetworkChangeEventsRequest,
                                             Pagination::GetCoreNetworkChangeEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetCoreNetworkChangeSet operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCoreNetworkChangeSetRequest,
                                    Pagination::GetCoreNetworkChangeSetPaginationTraits<DerivedClient>>
  GetCoreNetworkChangeSetPaginator(const Model::GetCoreNetworkChangeSetRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCoreNetworkChangeSetRequest,
                                             Pagination::GetCoreNetworkChangeSetPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetCustomerGatewayAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCustomerGatewayAssociationsRequest,
                                    Pagination::GetCustomerGatewayAssociationsPaginationTraits<DerivedClient>>
  GetCustomerGatewayAssociationsPaginator(const Model::GetCustomerGatewayAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCustomerGatewayAssociationsRequest,
                                             Pagination::GetCustomerGatewayAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetDevices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDevicesRequest, Pagination::GetDevicesPaginationTraits<DerivedClient>>
  GetDevicesPaginator(const Model::GetDevicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDevicesRequest,
                                             Pagination::GetDevicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for GetLinkAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetLinkAssociationsRequest,
                                    Pagination::GetLinkAssociationsPaginationTraits<DerivedClient>>
  GetLinkAssociationsPaginator(const Model::GetLinkAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetLinkAssociationsRequest,
                                             Pagination::GetLinkAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetLinks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetLinksRequest, Pagination::GetLinksPaginationTraits<DerivedClient>>
  GetLinksPaginator(const Model::GetLinksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetLinksRequest, Pagination::GetLinksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetNetworkResourceCounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetNetworkResourceCountsRequest,
                                    Pagination::GetNetworkResourceCountsPaginationTraits<DerivedClient>>
  GetNetworkResourceCountsPaginator(const Model::GetNetworkResourceCountsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetNetworkResourceCountsRequest,
                                             Pagination::GetNetworkResourceCountsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetNetworkResourceRelationships operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetNetworkResourceRelationshipsRequest,
                                    Pagination::GetNetworkResourceRelationshipsPaginationTraits<DerivedClient>>
  GetNetworkResourceRelationshipsPaginator(const Model::GetNetworkResourceRelationshipsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetNetworkResourceRelationshipsRequest,
                                             Pagination::GetNetworkResourceRelationshipsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetNetworkResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetNetworkResourcesRequest,
                                    Pagination::GetNetworkResourcesPaginationTraits<DerivedClient>>
  GetNetworkResourcesPaginator(const Model::GetNetworkResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetNetworkResourcesRequest,
                                             Pagination::GetNetworkResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetNetworkTelemetry operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetNetworkTelemetryRequest,
                                    Pagination::GetNetworkTelemetryPaginationTraits<DerivedClient>>
  GetNetworkTelemetryPaginator(const Model::GetNetworkTelemetryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetNetworkTelemetryRequest,
                                             Pagination::GetNetworkTelemetryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetSites operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSitesRequest, Pagination::GetSitesPaginationTraits<DerivedClient>>
  GetSitesPaginator(const Model::GetSitesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSitesRequest, Pagination::GetSitesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetTransitGatewayConnectPeerAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTransitGatewayConnectPeerAssociationsRequest,
                                    Pagination::GetTransitGatewayConnectPeerAssociationsPaginationTraits<DerivedClient>>
  GetTransitGatewayConnectPeerAssociationsPaginator(const Model::GetTransitGatewayConnectPeerAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTransitGatewayConnectPeerAssociationsRequest,
                                             Pagination::GetTransitGatewayConnectPeerAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetTransitGatewayRegistrations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTransitGatewayRegistrationsRequest,
                                    Pagination::GetTransitGatewayRegistrationsPaginationTraits<DerivedClient>>
  GetTransitGatewayRegistrationsPaginator(const Model::GetTransitGatewayRegistrationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTransitGatewayRegistrationsRequest,
                                             Pagination::GetTransitGatewayRegistrationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAttachmentRoutingPolicyAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttachmentRoutingPolicyAssociationsRequest,
                                    Pagination::ListAttachmentRoutingPolicyAssociationsPaginationTraits<DerivedClient>>
  ListAttachmentRoutingPolicyAssociationsPaginator(const Model::ListAttachmentRoutingPolicyAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttachmentRoutingPolicyAssociationsRequest,
                                             Pagination::ListAttachmentRoutingPolicyAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAttachments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttachmentsRequest,
                                    Pagination::ListAttachmentsPaginationTraits<DerivedClient>>
  ListAttachmentsPaginator(const Model::ListAttachmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttachmentsRequest,
                                             Pagination::ListAttachmentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListConnectPeers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectPeersRequest,
                                    Pagination::ListConnectPeersPaginationTraits<DerivedClient>>
  ListConnectPeersPaginator(const Model::ListConnectPeersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectPeersRequest,
                                             Pagination::ListConnectPeersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListCoreNetworkPolicyVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCoreNetworkPolicyVersionsRequest,
                                    Pagination::ListCoreNetworkPolicyVersionsPaginationTraits<DerivedClient>>
  ListCoreNetworkPolicyVersionsPaginator(const Model::ListCoreNetworkPolicyVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCoreNetworkPolicyVersionsRequest,
                                             Pagination::ListCoreNetworkPolicyVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCoreNetworkPrefixListAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCoreNetworkPrefixListAssociationsRequest,
                                    Pagination::ListCoreNetworkPrefixListAssociationsPaginationTraits<DerivedClient>>
  ListCoreNetworkPrefixListAssociationsPaginator(const Model::ListCoreNetworkPrefixListAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCoreNetworkPrefixListAssociationsRequest,
                                             Pagination::ListCoreNetworkPrefixListAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCoreNetworkRoutingInformation operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCoreNetworkRoutingInformationRequest,
                                    Pagination::ListCoreNetworkRoutingInformationPaginationTraits<DerivedClient>>
  ListCoreNetworkRoutingInformationPaginator(const Model::ListCoreNetworkRoutingInformationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCoreNetworkRoutingInformationRequest,
                                             Pagination::ListCoreNetworkRoutingInformationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCoreNetworks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCoreNetworksRequest,
                                    Pagination::ListCoreNetworksPaginationTraits<DerivedClient>>
  ListCoreNetworksPaginator(const Model::ListCoreNetworksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCoreNetworksRequest,
                                             Pagination::ListCoreNetworksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListPeerings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPeeringsRequest, Pagination::ListPeeringsPaginationTraits<DerivedClient>>
  ListPeeringsPaginator(const Model::ListPeeringsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPeeringsRequest,
                                             Pagination::ListPeeringsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace NetworkManager
}  // namespace Aws
