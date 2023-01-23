/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/networkmanager/NetworkManagerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/networkmanager/NetworkManagerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in NetworkManagerClient header */
#include <aws/networkmanager/model/AcceptAttachmentResult.h>
#include <aws/networkmanager/model/AssociateConnectPeerResult.h>
#include <aws/networkmanager/model/AssociateCustomerGatewayResult.h>
#include <aws/networkmanager/model/AssociateLinkResult.h>
#include <aws/networkmanager/model/AssociateTransitGatewayConnectPeerResult.h>
#include <aws/networkmanager/model/CreateConnectAttachmentResult.h>
#include <aws/networkmanager/model/CreateConnectPeerResult.h>
#include <aws/networkmanager/model/CreateConnectionResult.h>
#include <aws/networkmanager/model/CreateCoreNetworkResult.h>
#include <aws/networkmanager/model/CreateDeviceResult.h>
#include <aws/networkmanager/model/CreateGlobalNetworkResult.h>
#include <aws/networkmanager/model/CreateLinkResult.h>
#include <aws/networkmanager/model/CreateSiteResult.h>
#include <aws/networkmanager/model/CreateSiteToSiteVpnAttachmentResult.h>
#include <aws/networkmanager/model/CreateTransitGatewayPeeringResult.h>
#include <aws/networkmanager/model/CreateTransitGatewayRouteTableAttachmentResult.h>
#include <aws/networkmanager/model/CreateVpcAttachmentResult.h>
#include <aws/networkmanager/model/DeleteAttachmentResult.h>
#include <aws/networkmanager/model/DeleteConnectPeerResult.h>
#include <aws/networkmanager/model/DeleteConnectionResult.h>
#include <aws/networkmanager/model/DeleteCoreNetworkResult.h>
#include <aws/networkmanager/model/DeleteCoreNetworkPolicyVersionResult.h>
#include <aws/networkmanager/model/DeleteDeviceResult.h>
#include <aws/networkmanager/model/DeleteGlobalNetworkResult.h>
#include <aws/networkmanager/model/DeleteLinkResult.h>
#include <aws/networkmanager/model/DeletePeeringResult.h>
#include <aws/networkmanager/model/DeleteResourcePolicyResult.h>
#include <aws/networkmanager/model/DeleteSiteResult.h>
#include <aws/networkmanager/model/DeregisterTransitGatewayResult.h>
#include <aws/networkmanager/model/DescribeGlobalNetworksResult.h>
#include <aws/networkmanager/model/DisassociateConnectPeerResult.h>
#include <aws/networkmanager/model/DisassociateCustomerGatewayResult.h>
#include <aws/networkmanager/model/DisassociateLinkResult.h>
#include <aws/networkmanager/model/DisassociateTransitGatewayConnectPeerResult.h>
#include <aws/networkmanager/model/ExecuteCoreNetworkChangeSetResult.h>
#include <aws/networkmanager/model/GetConnectAttachmentResult.h>
#include <aws/networkmanager/model/GetConnectPeerResult.h>
#include <aws/networkmanager/model/GetConnectPeerAssociationsResult.h>
#include <aws/networkmanager/model/GetConnectionsResult.h>
#include <aws/networkmanager/model/GetCoreNetworkResult.h>
#include <aws/networkmanager/model/GetCoreNetworkChangeEventsResult.h>
#include <aws/networkmanager/model/GetCoreNetworkChangeSetResult.h>
#include <aws/networkmanager/model/GetCoreNetworkPolicyResult.h>
#include <aws/networkmanager/model/GetCustomerGatewayAssociationsResult.h>
#include <aws/networkmanager/model/GetDevicesResult.h>
#include <aws/networkmanager/model/GetLinkAssociationsResult.h>
#include <aws/networkmanager/model/GetLinksResult.h>
#include <aws/networkmanager/model/GetNetworkResourceCountsResult.h>
#include <aws/networkmanager/model/GetNetworkResourceRelationshipsResult.h>
#include <aws/networkmanager/model/GetNetworkResourcesResult.h>
#include <aws/networkmanager/model/GetNetworkRoutesResult.h>
#include <aws/networkmanager/model/GetNetworkTelemetryResult.h>
#include <aws/networkmanager/model/GetResourcePolicyResult.h>
#include <aws/networkmanager/model/GetRouteAnalysisResult.h>
#include <aws/networkmanager/model/GetSiteToSiteVpnAttachmentResult.h>
#include <aws/networkmanager/model/GetSitesResult.h>
#include <aws/networkmanager/model/GetTransitGatewayConnectPeerAssociationsResult.h>
#include <aws/networkmanager/model/GetTransitGatewayPeeringResult.h>
#include <aws/networkmanager/model/GetTransitGatewayRegistrationsResult.h>
#include <aws/networkmanager/model/GetTransitGatewayRouteTableAttachmentResult.h>
#include <aws/networkmanager/model/GetVpcAttachmentResult.h>
#include <aws/networkmanager/model/ListAttachmentsResult.h>
#include <aws/networkmanager/model/ListConnectPeersResult.h>
#include <aws/networkmanager/model/ListCoreNetworkPolicyVersionsResult.h>
#include <aws/networkmanager/model/ListCoreNetworksResult.h>
#include <aws/networkmanager/model/ListOrganizationServiceAccessStatusResult.h>
#include <aws/networkmanager/model/ListPeeringsResult.h>
#include <aws/networkmanager/model/ListTagsForResourceResult.h>
#include <aws/networkmanager/model/PutCoreNetworkPolicyResult.h>
#include <aws/networkmanager/model/PutResourcePolicyResult.h>
#include <aws/networkmanager/model/RegisterTransitGatewayResult.h>
#include <aws/networkmanager/model/RejectAttachmentResult.h>
#include <aws/networkmanager/model/RestoreCoreNetworkPolicyVersionResult.h>
#include <aws/networkmanager/model/StartOrganizationServiceAccessUpdateResult.h>
#include <aws/networkmanager/model/StartRouteAnalysisResult.h>
#include <aws/networkmanager/model/TagResourceResult.h>
#include <aws/networkmanager/model/UntagResourceResult.h>
#include <aws/networkmanager/model/UpdateConnectionResult.h>
#include <aws/networkmanager/model/UpdateCoreNetworkResult.h>
#include <aws/networkmanager/model/UpdateDeviceResult.h>
#include <aws/networkmanager/model/UpdateGlobalNetworkResult.h>
#include <aws/networkmanager/model/UpdateLinkResult.h>
#include <aws/networkmanager/model/UpdateNetworkResourceMetadataResult.h>
#include <aws/networkmanager/model/UpdateSiteResult.h>
#include <aws/networkmanager/model/UpdateVpcAttachmentResult.h>
/* End of service model headers required in NetworkManagerClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace NetworkManager
  {
    using NetworkManagerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using NetworkManagerEndpointProviderBase = Aws::NetworkManager::Endpoint::NetworkManagerEndpointProviderBase;
    using NetworkManagerEndpointProvider = Aws::NetworkManager::Endpoint::NetworkManagerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in NetworkManagerClient header */
      class AcceptAttachmentRequest;
      class AssociateConnectPeerRequest;
      class AssociateCustomerGatewayRequest;
      class AssociateLinkRequest;
      class AssociateTransitGatewayConnectPeerRequest;
      class CreateConnectAttachmentRequest;
      class CreateConnectPeerRequest;
      class CreateConnectionRequest;
      class CreateCoreNetworkRequest;
      class CreateDeviceRequest;
      class CreateGlobalNetworkRequest;
      class CreateLinkRequest;
      class CreateSiteRequest;
      class CreateSiteToSiteVpnAttachmentRequest;
      class CreateTransitGatewayPeeringRequest;
      class CreateTransitGatewayRouteTableAttachmentRequest;
      class CreateVpcAttachmentRequest;
      class DeleteAttachmentRequest;
      class DeleteConnectPeerRequest;
      class DeleteConnectionRequest;
      class DeleteCoreNetworkRequest;
      class DeleteCoreNetworkPolicyVersionRequest;
      class DeleteDeviceRequest;
      class DeleteGlobalNetworkRequest;
      class DeleteLinkRequest;
      class DeletePeeringRequest;
      class DeleteResourcePolicyRequest;
      class DeleteSiteRequest;
      class DeregisterTransitGatewayRequest;
      class DescribeGlobalNetworksRequest;
      class DisassociateConnectPeerRequest;
      class DisassociateCustomerGatewayRequest;
      class DisassociateLinkRequest;
      class DisassociateTransitGatewayConnectPeerRequest;
      class ExecuteCoreNetworkChangeSetRequest;
      class GetConnectAttachmentRequest;
      class GetConnectPeerRequest;
      class GetConnectPeerAssociationsRequest;
      class GetConnectionsRequest;
      class GetCoreNetworkRequest;
      class GetCoreNetworkChangeEventsRequest;
      class GetCoreNetworkChangeSetRequest;
      class GetCoreNetworkPolicyRequest;
      class GetCustomerGatewayAssociationsRequest;
      class GetDevicesRequest;
      class GetLinkAssociationsRequest;
      class GetLinksRequest;
      class GetNetworkResourceCountsRequest;
      class GetNetworkResourceRelationshipsRequest;
      class GetNetworkResourcesRequest;
      class GetNetworkRoutesRequest;
      class GetNetworkTelemetryRequest;
      class GetResourcePolicyRequest;
      class GetRouteAnalysisRequest;
      class GetSiteToSiteVpnAttachmentRequest;
      class GetSitesRequest;
      class GetTransitGatewayConnectPeerAssociationsRequest;
      class GetTransitGatewayPeeringRequest;
      class GetTransitGatewayRegistrationsRequest;
      class GetTransitGatewayRouteTableAttachmentRequest;
      class GetVpcAttachmentRequest;
      class ListAttachmentsRequest;
      class ListConnectPeersRequest;
      class ListCoreNetworkPolicyVersionsRequest;
      class ListCoreNetworksRequest;
      class ListOrganizationServiceAccessStatusRequest;
      class ListPeeringsRequest;
      class ListTagsForResourceRequest;
      class PutCoreNetworkPolicyRequest;
      class PutResourcePolicyRequest;
      class RegisterTransitGatewayRequest;
      class RejectAttachmentRequest;
      class RestoreCoreNetworkPolicyVersionRequest;
      class StartOrganizationServiceAccessUpdateRequest;
      class StartRouteAnalysisRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateConnectionRequest;
      class UpdateCoreNetworkRequest;
      class UpdateDeviceRequest;
      class UpdateGlobalNetworkRequest;
      class UpdateLinkRequest;
      class UpdateNetworkResourceMetadataRequest;
      class UpdateSiteRequest;
      class UpdateVpcAttachmentRequest;
      /* End of service model forward declarations required in NetworkManagerClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptAttachmentResult, NetworkManagerError> AcceptAttachmentOutcome;
      typedef Aws::Utils::Outcome<AssociateConnectPeerResult, NetworkManagerError> AssociateConnectPeerOutcome;
      typedef Aws::Utils::Outcome<AssociateCustomerGatewayResult, NetworkManagerError> AssociateCustomerGatewayOutcome;
      typedef Aws::Utils::Outcome<AssociateLinkResult, NetworkManagerError> AssociateLinkOutcome;
      typedef Aws::Utils::Outcome<AssociateTransitGatewayConnectPeerResult, NetworkManagerError> AssociateTransitGatewayConnectPeerOutcome;
      typedef Aws::Utils::Outcome<CreateConnectAttachmentResult, NetworkManagerError> CreateConnectAttachmentOutcome;
      typedef Aws::Utils::Outcome<CreateConnectPeerResult, NetworkManagerError> CreateConnectPeerOutcome;
      typedef Aws::Utils::Outcome<CreateConnectionResult, NetworkManagerError> CreateConnectionOutcome;
      typedef Aws::Utils::Outcome<CreateCoreNetworkResult, NetworkManagerError> CreateCoreNetworkOutcome;
      typedef Aws::Utils::Outcome<CreateDeviceResult, NetworkManagerError> CreateDeviceOutcome;
      typedef Aws::Utils::Outcome<CreateGlobalNetworkResult, NetworkManagerError> CreateGlobalNetworkOutcome;
      typedef Aws::Utils::Outcome<CreateLinkResult, NetworkManagerError> CreateLinkOutcome;
      typedef Aws::Utils::Outcome<CreateSiteResult, NetworkManagerError> CreateSiteOutcome;
      typedef Aws::Utils::Outcome<CreateSiteToSiteVpnAttachmentResult, NetworkManagerError> CreateSiteToSiteVpnAttachmentOutcome;
      typedef Aws::Utils::Outcome<CreateTransitGatewayPeeringResult, NetworkManagerError> CreateTransitGatewayPeeringOutcome;
      typedef Aws::Utils::Outcome<CreateTransitGatewayRouteTableAttachmentResult, NetworkManagerError> CreateTransitGatewayRouteTableAttachmentOutcome;
      typedef Aws::Utils::Outcome<CreateVpcAttachmentResult, NetworkManagerError> CreateVpcAttachmentOutcome;
      typedef Aws::Utils::Outcome<DeleteAttachmentResult, NetworkManagerError> DeleteAttachmentOutcome;
      typedef Aws::Utils::Outcome<DeleteConnectPeerResult, NetworkManagerError> DeleteConnectPeerOutcome;
      typedef Aws::Utils::Outcome<DeleteConnectionResult, NetworkManagerError> DeleteConnectionOutcome;
      typedef Aws::Utils::Outcome<DeleteCoreNetworkResult, NetworkManagerError> DeleteCoreNetworkOutcome;
      typedef Aws::Utils::Outcome<DeleteCoreNetworkPolicyVersionResult, NetworkManagerError> DeleteCoreNetworkPolicyVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteDeviceResult, NetworkManagerError> DeleteDeviceOutcome;
      typedef Aws::Utils::Outcome<DeleteGlobalNetworkResult, NetworkManagerError> DeleteGlobalNetworkOutcome;
      typedef Aws::Utils::Outcome<DeleteLinkResult, NetworkManagerError> DeleteLinkOutcome;
      typedef Aws::Utils::Outcome<DeletePeeringResult, NetworkManagerError> DeletePeeringOutcome;
      typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, NetworkManagerError> DeleteResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteSiteResult, NetworkManagerError> DeleteSiteOutcome;
      typedef Aws::Utils::Outcome<DeregisterTransitGatewayResult, NetworkManagerError> DeregisterTransitGatewayOutcome;
      typedef Aws::Utils::Outcome<DescribeGlobalNetworksResult, NetworkManagerError> DescribeGlobalNetworksOutcome;
      typedef Aws::Utils::Outcome<DisassociateConnectPeerResult, NetworkManagerError> DisassociateConnectPeerOutcome;
      typedef Aws::Utils::Outcome<DisassociateCustomerGatewayResult, NetworkManagerError> DisassociateCustomerGatewayOutcome;
      typedef Aws::Utils::Outcome<DisassociateLinkResult, NetworkManagerError> DisassociateLinkOutcome;
      typedef Aws::Utils::Outcome<DisassociateTransitGatewayConnectPeerResult, NetworkManagerError> DisassociateTransitGatewayConnectPeerOutcome;
      typedef Aws::Utils::Outcome<ExecuteCoreNetworkChangeSetResult, NetworkManagerError> ExecuteCoreNetworkChangeSetOutcome;
      typedef Aws::Utils::Outcome<GetConnectAttachmentResult, NetworkManagerError> GetConnectAttachmentOutcome;
      typedef Aws::Utils::Outcome<GetConnectPeerResult, NetworkManagerError> GetConnectPeerOutcome;
      typedef Aws::Utils::Outcome<GetConnectPeerAssociationsResult, NetworkManagerError> GetConnectPeerAssociationsOutcome;
      typedef Aws::Utils::Outcome<GetConnectionsResult, NetworkManagerError> GetConnectionsOutcome;
      typedef Aws::Utils::Outcome<GetCoreNetworkResult, NetworkManagerError> GetCoreNetworkOutcome;
      typedef Aws::Utils::Outcome<GetCoreNetworkChangeEventsResult, NetworkManagerError> GetCoreNetworkChangeEventsOutcome;
      typedef Aws::Utils::Outcome<GetCoreNetworkChangeSetResult, NetworkManagerError> GetCoreNetworkChangeSetOutcome;
      typedef Aws::Utils::Outcome<GetCoreNetworkPolicyResult, NetworkManagerError> GetCoreNetworkPolicyOutcome;
      typedef Aws::Utils::Outcome<GetCustomerGatewayAssociationsResult, NetworkManagerError> GetCustomerGatewayAssociationsOutcome;
      typedef Aws::Utils::Outcome<GetDevicesResult, NetworkManagerError> GetDevicesOutcome;
      typedef Aws::Utils::Outcome<GetLinkAssociationsResult, NetworkManagerError> GetLinkAssociationsOutcome;
      typedef Aws::Utils::Outcome<GetLinksResult, NetworkManagerError> GetLinksOutcome;
      typedef Aws::Utils::Outcome<GetNetworkResourceCountsResult, NetworkManagerError> GetNetworkResourceCountsOutcome;
      typedef Aws::Utils::Outcome<GetNetworkResourceRelationshipsResult, NetworkManagerError> GetNetworkResourceRelationshipsOutcome;
      typedef Aws::Utils::Outcome<GetNetworkResourcesResult, NetworkManagerError> GetNetworkResourcesOutcome;
      typedef Aws::Utils::Outcome<GetNetworkRoutesResult, NetworkManagerError> GetNetworkRoutesOutcome;
      typedef Aws::Utils::Outcome<GetNetworkTelemetryResult, NetworkManagerError> GetNetworkTelemetryOutcome;
      typedef Aws::Utils::Outcome<GetResourcePolicyResult, NetworkManagerError> GetResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<GetRouteAnalysisResult, NetworkManagerError> GetRouteAnalysisOutcome;
      typedef Aws::Utils::Outcome<GetSiteToSiteVpnAttachmentResult, NetworkManagerError> GetSiteToSiteVpnAttachmentOutcome;
      typedef Aws::Utils::Outcome<GetSitesResult, NetworkManagerError> GetSitesOutcome;
      typedef Aws::Utils::Outcome<GetTransitGatewayConnectPeerAssociationsResult, NetworkManagerError> GetTransitGatewayConnectPeerAssociationsOutcome;
      typedef Aws::Utils::Outcome<GetTransitGatewayPeeringResult, NetworkManagerError> GetTransitGatewayPeeringOutcome;
      typedef Aws::Utils::Outcome<GetTransitGatewayRegistrationsResult, NetworkManagerError> GetTransitGatewayRegistrationsOutcome;
      typedef Aws::Utils::Outcome<GetTransitGatewayRouteTableAttachmentResult, NetworkManagerError> GetTransitGatewayRouteTableAttachmentOutcome;
      typedef Aws::Utils::Outcome<GetVpcAttachmentResult, NetworkManagerError> GetVpcAttachmentOutcome;
      typedef Aws::Utils::Outcome<ListAttachmentsResult, NetworkManagerError> ListAttachmentsOutcome;
      typedef Aws::Utils::Outcome<ListConnectPeersResult, NetworkManagerError> ListConnectPeersOutcome;
      typedef Aws::Utils::Outcome<ListCoreNetworkPolicyVersionsResult, NetworkManagerError> ListCoreNetworkPolicyVersionsOutcome;
      typedef Aws::Utils::Outcome<ListCoreNetworksResult, NetworkManagerError> ListCoreNetworksOutcome;
      typedef Aws::Utils::Outcome<ListOrganizationServiceAccessStatusResult, NetworkManagerError> ListOrganizationServiceAccessStatusOutcome;
      typedef Aws::Utils::Outcome<ListPeeringsResult, NetworkManagerError> ListPeeringsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, NetworkManagerError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutCoreNetworkPolicyResult, NetworkManagerError> PutCoreNetworkPolicyOutcome;
      typedef Aws::Utils::Outcome<PutResourcePolicyResult, NetworkManagerError> PutResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<RegisterTransitGatewayResult, NetworkManagerError> RegisterTransitGatewayOutcome;
      typedef Aws::Utils::Outcome<RejectAttachmentResult, NetworkManagerError> RejectAttachmentOutcome;
      typedef Aws::Utils::Outcome<RestoreCoreNetworkPolicyVersionResult, NetworkManagerError> RestoreCoreNetworkPolicyVersionOutcome;
      typedef Aws::Utils::Outcome<StartOrganizationServiceAccessUpdateResult, NetworkManagerError> StartOrganizationServiceAccessUpdateOutcome;
      typedef Aws::Utils::Outcome<StartRouteAnalysisResult, NetworkManagerError> StartRouteAnalysisOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, NetworkManagerError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, NetworkManagerError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateConnectionResult, NetworkManagerError> UpdateConnectionOutcome;
      typedef Aws::Utils::Outcome<UpdateCoreNetworkResult, NetworkManagerError> UpdateCoreNetworkOutcome;
      typedef Aws::Utils::Outcome<UpdateDeviceResult, NetworkManagerError> UpdateDeviceOutcome;
      typedef Aws::Utils::Outcome<UpdateGlobalNetworkResult, NetworkManagerError> UpdateGlobalNetworkOutcome;
      typedef Aws::Utils::Outcome<UpdateLinkResult, NetworkManagerError> UpdateLinkOutcome;
      typedef Aws::Utils::Outcome<UpdateNetworkResourceMetadataResult, NetworkManagerError> UpdateNetworkResourceMetadataOutcome;
      typedef Aws::Utils::Outcome<UpdateSiteResult, NetworkManagerError> UpdateSiteOutcome;
      typedef Aws::Utils::Outcome<UpdateVpcAttachmentResult, NetworkManagerError> UpdateVpcAttachmentOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptAttachmentOutcome> AcceptAttachmentOutcomeCallable;
      typedef std::future<AssociateConnectPeerOutcome> AssociateConnectPeerOutcomeCallable;
      typedef std::future<AssociateCustomerGatewayOutcome> AssociateCustomerGatewayOutcomeCallable;
      typedef std::future<AssociateLinkOutcome> AssociateLinkOutcomeCallable;
      typedef std::future<AssociateTransitGatewayConnectPeerOutcome> AssociateTransitGatewayConnectPeerOutcomeCallable;
      typedef std::future<CreateConnectAttachmentOutcome> CreateConnectAttachmentOutcomeCallable;
      typedef std::future<CreateConnectPeerOutcome> CreateConnectPeerOutcomeCallable;
      typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
      typedef std::future<CreateCoreNetworkOutcome> CreateCoreNetworkOutcomeCallable;
      typedef std::future<CreateDeviceOutcome> CreateDeviceOutcomeCallable;
      typedef std::future<CreateGlobalNetworkOutcome> CreateGlobalNetworkOutcomeCallable;
      typedef std::future<CreateLinkOutcome> CreateLinkOutcomeCallable;
      typedef std::future<CreateSiteOutcome> CreateSiteOutcomeCallable;
      typedef std::future<CreateSiteToSiteVpnAttachmentOutcome> CreateSiteToSiteVpnAttachmentOutcomeCallable;
      typedef std::future<CreateTransitGatewayPeeringOutcome> CreateTransitGatewayPeeringOutcomeCallable;
      typedef std::future<CreateTransitGatewayRouteTableAttachmentOutcome> CreateTransitGatewayRouteTableAttachmentOutcomeCallable;
      typedef std::future<CreateVpcAttachmentOutcome> CreateVpcAttachmentOutcomeCallable;
      typedef std::future<DeleteAttachmentOutcome> DeleteAttachmentOutcomeCallable;
      typedef std::future<DeleteConnectPeerOutcome> DeleteConnectPeerOutcomeCallable;
      typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
      typedef std::future<DeleteCoreNetworkOutcome> DeleteCoreNetworkOutcomeCallable;
      typedef std::future<DeleteCoreNetworkPolicyVersionOutcome> DeleteCoreNetworkPolicyVersionOutcomeCallable;
      typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
      typedef std::future<DeleteGlobalNetworkOutcome> DeleteGlobalNetworkOutcomeCallable;
      typedef std::future<DeleteLinkOutcome> DeleteLinkOutcomeCallable;
      typedef std::future<DeletePeeringOutcome> DeletePeeringOutcomeCallable;
      typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
      typedef std::future<DeleteSiteOutcome> DeleteSiteOutcomeCallable;
      typedef std::future<DeregisterTransitGatewayOutcome> DeregisterTransitGatewayOutcomeCallable;
      typedef std::future<DescribeGlobalNetworksOutcome> DescribeGlobalNetworksOutcomeCallable;
      typedef std::future<DisassociateConnectPeerOutcome> DisassociateConnectPeerOutcomeCallable;
      typedef std::future<DisassociateCustomerGatewayOutcome> DisassociateCustomerGatewayOutcomeCallable;
      typedef std::future<DisassociateLinkOutcome> DisassociateLinkOutcomeCallable;
      typedef std::future<DisassociateTransitGatewayConnectPeerOutcome> DisassociateTransitGatewayConnectPeerOutcomeCallable;
      typedef std::future<ExecuteCoreNetworkChangeSetOutcome> ExecuteCoreNetworkChangeSetOutcomeCallable;
      typedef std::future<GetConnectAttachmentOutcome> GetConnectAttachmentOutcomeCallable;
      typedef std::future<GetConnectPeerOutcome> GetConnectPeerOutcomeCallable;
      typedef std::future<GetConnectPeerAssociationsOutcome> GetConnectPeerAssociationsOutcomeCallable;
      typedef std::future<GetConnectionsOutcome> GetConnectionsOutcomeCallable;
      typedef std::future<GetCoreNetworkOutcome> GetCoreNetworkOutcomeCallable;
      typedef std::future<GetCoreNetworkChangeEventsOutcome> GetCoreNetworkChangeEventsOutcomeCallable;
      typedef std::future<GetCoreNetworkChangeSetOutcome> GetCoreNetworkChangeSetOutcomeCallable;
      typedef std::future<GetCoreNetworkPolicyOutcome> GetCoreNetworkPolicyOutcomeCallable;
      typedef std::future<GetCustomerGatewayAssociationsOutcome> GetCustomerGatewayAssociationsOutcomeCallable;
      typedef std::future<GetDevicesOutcome> GetDevicesOutcomeCallable;
      typedef std::future<GetLinkAssociationsOutcome> GetLinkAssociationsOutcomeCallable;
      typedef std::future<GetLinksOutcome> GetLinksOutcomeCallable;
      typedef std::future<GetNetworkResourceCountsOutcome> GetNetworkResourceCountsOutcomeCallable;
      typedef std::future<GetNetworkResourceRelationshipsOutcome> GetNetworkResourceRelationshipsOutcomeCallable;
      typedef std::future<GetNetworkResourcesOutcome> GetNetworkResourcesOutcomeCallable;
      typedef std::future<GetNetworkRoutesOutcome> GetNetworkRoutesOutcomeCallable;
      typedef std::future<GetNetworkTelemetryOutcome> GetNetworkTelemetryOutcomeCallable;
      typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
      typedef std::future<GetRouteAnalysisOutcome> GetRouteAnalysisOutcomeCallable;
      typedef std::future<GetSiteToSiteVpnAttachmentOutcome> GetSiteToSiteVpnAttachmentOutcomeCallable;
      typedef std::future<GetSitesOutcome> GetSitesOutcomeCallable;
      typedef std::future<GetTransitGatewayConnectPeerAssociationsOutcome> GetTransitGatewayConnectPeerAssociationsOutcomeCallable;
      typedef std::future<GetTransitGatewayPeeringOutcome> GetTransitGatewayPeeringOutcomeCallable;
      typedef std::future<GetTransitGatewayRegistrationsOutcome> GetTransitGatewayRegistrationsOutcomeCallable;
      typedef std::future<GetTransitGatewayRouteTableAttachmentOutcome> GetTransitGatewayRouteTableAttachmentOutcomeCallable;
      typedef std::future<GetVpcAttachmentOutcome> GetVpcAttachmentOutcomeCallable;
      typedef std::future<ListAttachmentsOutcome> ListAttachmentsOutcomeCallable;
      typedef std::future<ListConnectPeersOutcome> ListConnectPeersOutcomeCallable;
      typedef std::future<ListCoreNetworkPolicyVersionsOutcome> ListCoreNetworkPolicyVersionsOutcomeCallable;
      typedef std::future<ListCoreNetworksOutcome> ListCoreNetworksOutcomeCallable;
      typedef std::future<ListOrganizationServiceAccessStatusOutcome> ListOrganizationServiceAccessStatusOutcomeCallable;
      typedef std::future<ListPeeringsOutcome> ListPeeringsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutCoreNetworkPolicyOutcome> PutCoreNetworkPolicyOutcomeCallable;
      typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
      typedef std::future<RegisterTransitGatewayOutcome> RegisterTransitGatewayOutcomeCallable;
      typedef std::future<RejectAttachmentOutcome> RejectAttachmentOutcomeCallable;
      typedef std::future<RestoreCoreNetworkPolicyVersionOutcome> RestoreCoreNetworkPolicyVersionOutcomeCallable;
      typedef std::future<StartOrganizationServiceAccessUpdateOutcome> StartOrganizationServiceAccessUpdateOutcomeCallable;
      typedef std::future<StartRouteAnalysisOutcome> StartRouteAnalysisOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateConnectionOutcome> UpdateConnectionOutcomeCallable;
      typedef std::future<UpdateCoreNetworkOutcome> UpdateCoreNetworkOutcomeCallable;
      typedef std::future<UpdateDeviceOutcome> UpdateDeviceOutcomeCallable;
      typedef std::future<UpdateGlobalNetworkOutcome> UpdateGlobalNetworkOutcomeCallable;
      typedef std::future<UpdateLinkOutcome> UpdateLinkOutcomeCallable;
      typedef std::future<UpdateNetworkResourceMetadataOutcome> UpdateNetworkResourceMetadataOutcomeCallable;
      typedef std::future<UpdateSiteOutcome> UpdateSiteOutcomeCallable;
      typedef std::future<UpdateVpcAttachmentOutcome> UpdateVpcAttachmentOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class NetworkManagerClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const NetworkManagerClient*, const Model::AcceptAttachmentRequest&, const Model::AcceptAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptAttachmentResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::AssociateConnectPeerRequest&, const Model::AssociateConnectPeerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateConnectPeerResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::AssociateCustomerGatewayRequest&, const Model::AssociateCustomerGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateCustomerGatewayResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::AssociateLinkRequest&, const Model::AssociateLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateLinkResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::AssociateTransitGatewayConnectPeerRequest&, const Model::AssociateTransitGatewayConnectPeerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateTransitGatewayConnectPeerResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::CreateConnectAttachmentRequest&, const Model::CreateConnectAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectAttachmentResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::CreateConnectPeerRequest&, const Model::CreateConnectPeerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectPeerResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::CreateConnectionRequest&, const Model::CreateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectionResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::CreateCoreNetworkRequest&, const Model::CreateCoreNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCoreNetworkResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::CreateDeviceRequest&, const Model::CreateDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeviceResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::CreateGlobalNetworkRequest&, const Model::CreateGlobalNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGlobalNetworkResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::CreateLinkRequest&, const Model::CreateLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLinkResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::CreateSiteRequest&, const Model::CreateSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSiteResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::CreateSiteToSiteVpnAttachmentRequest&, const Model::CreateSiteToSiteVpnAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSiteToSiteVpnAttachmentResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::CreateTransitGatewayPeeringRequest&, const Model::CreateTransitGatewayPeeringOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTransitGatewayPeeringResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::CreateTransitGatewayRouteTableAttachmentRequest&, const Model::CreateTransitGatewayRouteTableAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTransitGatewayRouteTableAttachmentResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::CreateVpcAttachmentRequest&, const Model::CreateVpcAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpcAttachmentResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DeleteAttachmentRequest&, const Model::DeleteAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAttachmentResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DeleteConnectPeerRequest&, const Model::DeleteConnectPeerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectPeerResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DeleteConnectionRequest&, const Model::DeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DeleteCoreNetworkRequest&, const Model::DeleteCoreNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCoreNetworkResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DeleteCoreNetworkPolicyVersionRequest&, const Model::DeleteCoreNetworkPolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCoreNetworkPolicyVersionResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DeleteDeviceRequest&, const Model::DeleteDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeviceResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DeleteGlobalNetworkRequest&, const Model::DeleteGlobalNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGlobalNetworkResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DeleteLinkRequest&, const Model::DeleteLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLinkResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DeletePeeringRequest&, const Model::DeletePeeringOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePeeringResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DeleteSiteRequest&, const Model::DeleteSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSiteResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DeregisterTransitGatewayRequest&, const Model::DeregisterTransitGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterTransitGatewayResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DescribeGlobalNetworksRequest&, const Model::DescribeGlobalNetworksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGlobalNetworksResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DisassociateConnectPeerRequest&, const Model::DisassociateConnectPeerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateConnectPeerResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DisassociateCustomerGatewayRequest&, const Model::DisassociateCustomerGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateCustomerGatewayResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DisassociateLinkRequest&, const Model::DisassociateLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateLinkResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::DisassociateTransitGatewayConnectPeerRequest&, const Model::DisassociateTransitGatewayConnectPeerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateTransitGatewayConnectPeerResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::ExecuteCoreNetworkChangeSetRequest&, const Model::ExecuteCoreNetworkChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteCoreNetworkChangeSetResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetConnectAttachmentRequest&, const Model::GetConnectAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectAttachmentResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetConnectPeerRequest&, const Model::GetConnectPeerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectPeerResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetConnectPeerAssociationsRequest&, const Model::GetConnectPeerAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectPeerAssociationsResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetConnectionsRequest&, const Model::GetConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectionsResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetCoreNetworkRequest&, const Model::GetCoreNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCoreNetworkResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetCoreNetworkChangeEventsRequest&, const Model::GetCoreNetworkChangeEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCoreNetworkChangeEventsResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetCoreNetworkChangeSetRequest&, const Model::GetCoreNetworkChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCoreNetworkChangeSetResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetCoreNetworkPolicyRequest&, const Model::GetCoreNetworkPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCoreNetworkPolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetCustomerGatewayAssociationsRequest&, const Model::GetCustomerGatewayAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCustomerGatewayAssociationsResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetDevicesRequest&, const Model::GetDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDevicesResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetLinkAssociationsRequest&, const Model::GetLinkAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLinkAssociationsResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetLinksRequest&, const Model::GetLinksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLinksResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetNetworkResourceCountsRequest&, const Model::GetNetworkResourceCountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNetworkResourceCountsResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetNetworkResourceRelationshipsRequest&, const Model::GetNetworkResourceRelationshipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNetworkResourceRelationshipsResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetNetworkResourcesRequest&, const Model::GetNetworkResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNetworkResourcesResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetNetworkRoutesRequest&, const Model::GetNetworkRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNetworkRoutesResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetNetworkTelemetryRequest&, const Model::GetNetworkTelemetryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNetworkTelemetryResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetRouteAnalysisRequest&, const Model::GetRouteAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRouteAnalysisResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetSiteToSiteVpnAttachmentRequest&, const Model::GetSiteToSiteVpnAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSiteToSiteVpnAttachmentResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetSitesRequest&, const Model::GetSitesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSitesResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetTransitGatewayConnectPeerAssociationsRequest&, const Model::GetTransitGatewayConnectPeerAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTransitGatewayConnectPeerAssociationsResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetTransitGatewayPeeringRequest&, const Model::GetTransitGatewayPeeringOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTransitGatewayPeeringResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetTransitGatewayRegistrationsRequest&, const Model::GetTransitGatewayRegistrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTransitGatewayRegistrationsResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetTransitGatewayRouteTableAttachmentRequest&, const Model::GetTransitGatewayRouteTableAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTransitGatewayRouteTableAttachmentResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::GetVpcAttachmentRequest&, const Model::GetVpcAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVpcAttachmentResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::ListAttachmentsRequest&, const Model::ListAttachmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttachmentsResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::ListConnectPeersRequest&, const Model::ListConnectPeersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectPeersResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::ListCoreNetworkPolicyVersionsRequest&, const Model::ListCoreNetworkPolicyVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCoreNetworkPolicyVersionsResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::ListCoreNetworksRequest&, const Model::ListCoreNetworksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCoreNetworksResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::ListOrganizationServiceAccessStatusRequest&, const Model::ListOrganizationServiceAccessStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrganizationServiceAccessStatusResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::ListPeeringsRequest&, const Model::ListPeeringsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPeeringsResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::PutCoreNetworkPolicyRequest&, const Model::PutCoreNetworkPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutCoreNetworkPolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::RegisterTransitGatewayRequest&, const Model::RegisterTransitGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterTransitGatewayResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::RejectAttachmentRequest&, const Model::RejectAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectAttachmentResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::RestoreCoreNetworkPolicyVersionRequest&, const Model::RestoreCoreNetworkPolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreCoreNetworkPolicyVersionResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::StartOrganizationServiceAccessUpdateRequest&, const Model::StartOrganizationServiceAccessUpdateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartOrganizationServiceAccessUpdateResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::StartRouteAnalysisRequest&, const Model::StartRouteAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartRouteAnalysisResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::UpdateConnectionRequest&, const Model::UpdateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectionResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::UpdateCoreNetworkRequest&, const Model::UpdateCoreNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCoreNetworkResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::UpdateDeviceRequest&, const Model::UpdateDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeviceResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::UpdateGlobalNetworkRequest&, const Model::UpdateGlobalNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGlobalNetworkResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::UpdateLinkRequest&, const Model::UpdateLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLinkResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::UpdateNetworkResourceMetadataRequest&, const Model::UpdateNetworkResourceMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNetworkResourceMetadataResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::UpdateSiteRequest&, const Model::UpdateSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSiteResponseReceivedHandler;
    typedef std::function<void(const NetworkManagerClient*, const Model::UpdateVpcAttachmentRequest&, const Model::UpdateVpcAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVpcAttachmentResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace NetworkManager
} // namespace Aws
