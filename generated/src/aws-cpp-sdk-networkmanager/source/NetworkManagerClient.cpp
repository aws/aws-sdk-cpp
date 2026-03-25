/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/networkmanager/NetworkManagerClient.h>
#include <aws/networkmanager/NetworkManagerEndpointProvider.h>
#include <aws/networkmanager/NetworkManagerErrorMarshaller.h>
#include <aws/networkmanager/model/AcceptAttachmentRequest.h>
#include <aws/networkmanager/model/AssociateConnectPeerRequest.h>
#include <aws/networkmanager/model/AssociateCustomerGatewayRequest.h>
#include <aws/networkmanager/model/AssociateLinkRequest.h>
#include <aws/networkmanager/model/AssociateTransitGatewayConnectPeerRequest.h>
#include <aws/networkmanager/model/CreateConnectAttachmentRequest.h>
#include <aws/networkmanager/model/CreateConnectPeerRequest.h>
#include <aws/networkmanager/model/CreateConnectionRequest.h>
#include <aws/networkmanager/model/CreateCoreNetworkPrefixListAssociationRequest.h>
#include <aws/networkmanager/model/CreateCoreNetworkRequest.h>
#include <aws/networkmanager/model/CreateDeviceRequest.h>
#include <aws/networkmanager/model/CreateDirectConnectGatewayAttachmentRequest.h>
#include <aws/networkmanager/model/CreateGlobalNetworkRequest.h>
#include <aws/networkmanager/model/CreateLinkRequest.h>
#include <aws/networkmanager/model/CreateSiteRequest.h>
#include <aws/networkmanager/model/CreateSiteToSiteVpnAttachmentRequest.h>
#include <aws/networkmanager/model/CreateTransitGatewayPeeringRequest.h>
#include <aws/networkmanager/model/CreateTransitGatewayRouteTableAttachmentRequest.h>
#include <aws/networkmanager/model/CreateVpcAttachmentRequest.h>
#include <aws/networkmanager/model/DeleteAttachmentRequest.h>
#include <aws/networkmanager/model/DeleteConnectPeerRequest.h>
#include <aws/networkmanager/model/DeleteConnectionRequest.h>
#include <aws/networkmanager/model/DeleteCoreNetworkPolicyVersionRequest.h>
#include <aws/networkmanager/model/DeleteCoreNetworkPrefixListAssociationRequest.h>
#include <aws/networkmanager/model/DeleteCoreNetworkRequest.h>
#include <aws/networkmanager/model/DeleteDeviceRequest.h>
#include <aws/networkmanager/model/DeleteGlobalNetworkRequest.h>
#include <aws/networkmanager/model/DeleteLinkRequest.h>
#include <aws/networkmanager/model/DeletePeeringRequest.h>
#include <aws/networkmanager/model/DeleteResourcePolicyRequest.h>
#include <aws/networkmanager/model/DeleteSiteRequest.h>
#include <aws/networkmanager/model/DeregisterTransitGatewayRequest.h>
#include <aws/networkmanager/model/DescribeGlobalNetworksRequest.h>
#include <aws/networkmanager/model/DisassociateConnectPeerRequest.h>
#include <aws/networkmanager/model/DisassociateCustomerGatewayRequest.h>
#include <aws/networkmanager/model/DisassociateLinkRequest.h>
#include <aws/networkmanager/model/DisassociateTransitGatewayConnectPeerRequest.h>
#include <aws/networkmanager/model/ExecuteCoreNetworkChangeSetRequest.h>
#include <aws/networkmanager/model/GetConnectAttachmentRequest.h>
#include <aws/networkmanager/model/GetConnectPeerAssociationsRequest.h>
#include <aws/networkmanager/model/GetConnectPeerRequest.h>
#include <aws/networkmanager/model/GetConnectionsRequest.h>
#include <aws/networkmanager/model/GetCoreNetworkChangeEventsRequest.h>
#include <aws/networkmanager/model/GetCoreNetworkChangeSetRequest.h>
#include <aws/networkmanager/model/GetCoreNetworkPolicyRequest.h>
#include <aws/networkmanager/model/GetCoreNetworkRequest.h>
#include <aws/networkmanager/model/GetCustomerGatewayAssociationsRequest.h>
#include <aws/networkmanager/model/GetDevicesRequest.h>
#include <aws/networkmanager/model/GetDirectConnectGatewayAttachmentRequest.h>
#include <aws/networkmanager/model/GetLinkAssociationsRequest.h>
#include <aws/networkmanager/model/GetLinksRequest.h>
#include <aws/networkmanager/model/GetNetworkResourceCountsRequest.h>
#include <aws/networkmanager/model/GetNetworkResourceRelationshipsRequest.h>
#include <aws/networkmanager/model/GetNetworkResourcesRequest.h>
#include <aws/networkmanager/model/GetNetworkRoutesRequest.h>
#include <aws/networkmanager/model/GetNetworkTelemetryRequest.h>
#include <aws/networkmanager/model/GetResourcePolicyRequest.h>
#include <aws/networkmanager/model/GetRouteAnalysisRequest.h>
#include <aws/networkmanager/model/GetSiteToSiteVpnAttachmentRequest.h>
#include <aws/networkmanager/model/GetSitesRequest.h>
#include <aws/networkmanager/model/GetTransitGatewayConnectPeerAssociationsRequest.h>
#include <aws/networkmanager/model/GetTransitGatewayPeeringRequest.h>
#include <aws/networkmanager/model/GetTransitGatewayRegistrationsRequest.h>
#include <aws/networkmanager/model/GetTransitGatewayRouteTableAttachmentRequest.h>
#include <aws/networkmanager/model/GetVpcAttachmentRequest.h>
#include <aws/networkmanager/model/ListAttachmentRoutingPolicyAssociationsRequest.h>
#include <aws/networkmanager/model/ListAttachmentsRequest.h>
#include <aws/networkmanager/model/ListConnectPeersRequest.h>
#include <aws/networkmanager/model/ListCoreNetworkPolicyVersionsRequest.h>
#include <aws/networkmanager/model/ListCoreNetworkPrefixListAssociationsRequest.h>
#include <aws/networkmanager/model/ListCoreNetworkRoutingInformationRequest.h>
#include <aws/networkmanager/model/ListCoreNetworksRequest.h>
#include <aws/networkmanager/model/ListOrganizationServiceAccessStatusRequest.h>
#include <aws/networkmanager/model/ListPeeringsRequest.h>
#include <aws/networkmanager/model/ListTagsForResourceRequest.h>
#include <aws/networkmanager/model/PutAttachmentRoutingPolicyLabelRequest.h>
#include <aws/networkmanager/model/PutCoreNetworkPolicyRequest.h>
#include <aws/networkmanager/model/PutResourcePolicyRequest.h>
#include <aws/networkmanager/model/RegisterTransitGatewayRequest.h>
#include <aws/networkmanager/model/RejectAttachmentRequest.h>
#include <aws/networkmanager/model/RemoveAttachmentRoutingPolicyLabelRequest.h>
#include <aws/networkmanager/model/RestoreCoreNetworkPolicyVersionRequest.h>
#include <aws/networkmanager/model/StartOrganizationServiceAccessUpdateRequest.h>
#include <aws/networkmanager/model/StartRouteAnalysisRequest.h>
#include <aws/networkmanager/model/TagResourceRequest.h>
#include <aws/networkmanager/model/UntagResourceRequest.h>
#include <aws/networkmanager/model/UpdateConnectionRequest.h>
#include <aws/networkmanager/model/UpdateCoreNetworkRequest.h>
#include <aws/networkmanager/model/UpdateDeviceRequest.h>
#include <aws/networkmanager/model/UpdateDirectConnectGatewayAttachmentRequest.h>
#include <aws/networkmanager/model/UpdateGlobalNetworkRequest.h>
#include <aws/networkmanager/model/UpdateLinkRequest.h>
#include <aws/networkmanager/model/UpdateNetworkResourceMetadataRequest.h>
#include <aws/networkmanager/model/UpdateSiteRequest.h>
#include <aws/networkmanager/model/UpdateVpcAttachmentRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::NetworkManager;
using namespace Aws::NetworkManager::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace NetworkManager {
const char SERVICE_NAME[] = "networkmanager";
const char ALLOCATION_TAG[] = "NetworkManagerClient";
}  // namespace NetworkManager
}  // namespace Aws
const char* NetworkManagerClient::GetServiceName() { return SERVICE_NAME; }
const char* NetworkManagerClient::GetAllocationTag() { return ALLOCATION_TAG; }

NetworkManagerClient::NetworkManagerClient(const NetworkManager::NetworkManagerClientConfiguration& clientConfiguration,
                                           std::shared_ptr<NetworkManagerEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NetworkManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NetworkManagerClient::NetworkManagerClient(const AWSCredentials& credentials,
                                           std::shared_ptr<NetworkManagerEndpointProviderBase> endpointProvider,
                                           const NetworkManager::NetworkManagerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NetworkManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NetworkManagerClient::NetworkManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<NetworkManagerEndpointProviderBase> endpointProvider,
                                           const NetworkManager::NetworkManagerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NetworkManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
NetworkManagerClient::NetworkManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NetworkManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NetworkManagerClient::NetworkManagerClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NetworkManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NetworkManagerClient::NetworkManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NetworkManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
NetworkManagerClient::~NetworkManagerClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<NetworkManagerEndpointProviderBase>& NetworkManagerClient::accessEndpointProvider() { return m_endpointProvider; }

void NetworkManagerClient::init(const NetworkManager::NetworkManagerClientConfiguration& config) {
  AWSClient::SetServiceClientName("NetworkManager");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "networkmanager");
}

void NetworkManagerClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
NetworkManagerClient::InvokeOperationOutcome NetworkManagerClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AcceptAttachmentOutcome NetworkManagerClient::AcceptAttachment(const AcceptAttachmentRequest& request) const {
  if (!request.AttachmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AcceptAttachment", "Required field: AttachmentId, is not set");
    return AcceptAttachmentOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AttachmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/attachments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttachmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/accept");
  };

  return AcceptAttachmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateConnectPeerOutcome NetworkManagerClient::AssociateConnectPeer(const AssociateConnectPeerRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateConnectPeer", "Required field: GlobalNetworkId, is not set");
    return AssociateConnectPeerOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connect-peer-associations");
  };

  return AssociateConnectPeerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateCustomerGatewayOutcome NetworkManagerClient::AssociateCustomerGateway(const AssociateCustomerGatewayRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateCustomerGateway", "Required field: GlobalNetworkId, is not set");
    return AssociateCustomerGatewayOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/customer-gateway-associations");
  };

  return AssociateCustomerGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateLinkOutcome NetworkManagerClient::AssociateLink(const AssociateLinkRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateLink", "Required field: GlobalNetworkId, is not set");
    return AssociateLinkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/link-associations");
  };

  return AssociateLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateTransitGatewayConnectPeerOutcome NetworkManagerClient::AssociateTransitGatewayConnectPeer(
    const AssociateTransitGatewayConnectPeerRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateTransitGatewayConnectPeer", "Required field: GlobalNetworkId, is not set");
    return AssociateTransitGatewayConnectPeerOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/transit-gateway-connect-peer-associations");
  };

  return AssociateTransitGatewayConnectPeerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConnectAttachmentOutcome NetworkManagerClient::CreateConnectAttachment(const CreateConnectAttachmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connect-attachments");
  };

  return CreateConnectAttachmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConnectPeerOutcome NetworkManagerClient::CreateConnectPeer(const CreateConnectPeerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connect-peers");
  };

  return CreateConnectPeerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConnectionOutcome NetworkManagerClient::CreateConnection(const CreateConnectionRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateConnection", "Required field: GlobalNetworkId, is not set");
    return CreateConnectionOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connections");
  };

  return CreateConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCoreNetworkOutcome NetworkManagerClient::CreateCoreNetwork(const CreateCoreNetworkRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-networks");
  };

  return CreateCoreNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCoreNetworkPrefixListAssociationOutcome NetworkManagerClient::CreateCoreNetworkPrefixListAssociation(
    const CreateCoreNetworkPrefixListAssociationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prefix-list");
  };

  return CreateCoreNetworkPrefixListAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDeviceOutcome NetworkManagerClient::CreateDevice(const CreateDeviceRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDevice", "Required field: GlobalNetworkId, is not set");
    return CreateDeviceOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/devices");
  };

  return CreateDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDirectConnectGatewayAttachmentOutcome NetworkManagerClient::CreateDirectConnectGatewayAttachment(
    const CreateDirectConnectGatewayAttachmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/direct-connect-gateway-attachments");
  };

  return CreateDirectConnectGatewayAttachmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGlobalNetworkOutcome NetworkManagerClient::CreateGlobalNetwork(const CreateGlobalNetworkRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks");
  };

  return CreateGlobalNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLinkOutcome NetworkManagerClient::CreateLink(const CreateLinkRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateLink", "Required field: GlobalNetworkId, is not set");
    return CreateLinkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/links");
  };

  return CreateLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSiteOutcome NetworkManagerClient::CreateSite(const CreateSiteRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSite", "Required field: GlobalNetworkId, is not set");
    return CreateSiteOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sites");
  };

  return CreateSiteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSiteToSiteVpnAttachmentOutcome NetworkManagerClient::CreateSiteToSiteVpnAttachment(
    const CreateSiteToSiteVpnAttachmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/site-to-site-vpn-attachments");
  };

  return CreateSiteToSiteVpnAttachmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTransitGatewayPeeringOutcome NetworkManagerClient::CreateTransitGatewayPeering(
    const CreateTransitGatewayPeeringRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/transit-gateway-peerings");
  };

  return CreateTransitGatewayPeeringOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTransitGatewayRouteTableAttachmentOutcome NetworkManagerClient::CreateTransitGatewayRouteTableAttachment(
    const CreateTransitGatewayRouteTableAttachmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/transit-gateway-route-table-attachments");
  };

  return CreateTransitGatewayRouteTableAttachmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVpcAttachmentOutcome NetworkManagerClient::CreateVpcAttachment(const CreateVpcAttachmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/vpc-attachments");
  };

  return CreateVpcAttachmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAttachmentOutcome NetworkManagerClient::DeleteAttachment(const DeleteAttachmentRequest& request) const {
  if (!request.AttachmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAttachment", "Required field: AttachmentId, is not set");
    return DeleteAttachmentOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AttachmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/attachments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttachmentId());
  };

  return DeleteAttachmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteConnectPeerOutcome NetworkManagerClient::DeleteConnectPeer(const DeleteConnectPeerRequest& request) const {
  if (!request.ConnectPeerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConnectPeer", "Required field: ConnectPeerId, is not set");
    return DeleteConnectPeerOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectPeerId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connect-peers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectPeerId());
  };

  return DeleteConnectPeerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteConnectionOutcome NetworkManagerClient::DeleteConnection(const DeleteConnectionRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConnection", "Required field: GlobalNetworkId, is not set");
    return DeleteConnectionOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.ConnectionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConnection", "Required field: ConnectionId, is not set");
    return DeleteConnectionOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ConnectionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectionId());
  };

  return DeleteConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCoreNetworkOutcome NetworkManagerClient::DeleteCoreNetwork(const DeleteCoreNetworkRequest& request) const {
  if (!request.CoreNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCoreNetwork", "Required field: CoreNetworkId, is not set");
    return DeleteCoreNetworkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreNetworkId());
  };

  return DeleteCoreNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCoreNetworkPolicyVersionOutcome NetworkManagerClient::DeleteCoreNetworkPolicyVersion(
    const DeleteCoreNetworkPolicyVersionRequest& request) const {
  if (!request.CoreNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCoreNetworkPolicyVersion", "Required field: CoreNetworkId, is not set");
    return DeleteCoreNetworkPolicyVersionOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }
  if (!request.PolicyVersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCoreNetworkPolicyVersion", "Required field: PolicyVersionId, is not set");
    return DeleteCoreNetworkPolicyVersionOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyVersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-network-policy-versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyVersionId());
  };

  return DeleteCoreNetworkPolicyVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCoreNetworkPrefixListAssociationOutcome NetworkManagerClient::DeleteCoreNetworkPrefixListAssociation(
    const DeleteCoreNetworkPrefixListAssociationRequest& request) const {
  if (!request.CoreNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCoreNetworkPrefixListAssociation", "Required field: CoreNetworkId, is not set");
    return DeleteCoreNetworkPrefixListAssociationOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }
  if (!request.PrefixListArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCoreNetworkPrefixListAssociation", "Required field: PrefixListArn, is not set");
    return DeleteCoreNetworkPrefixListAssociationOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrefixListArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prefix-list/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrefixListArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-network/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreNetworkId());
  };

  return DeleteCoreNetworkPrefixListAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDeviceOutcome NetworkManagerClient::DeleteDevice(const DeleteDeviceRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDevice", "Required field: GlobalNetworkId, is not set");
    return DeleteDeviceOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.DeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDevice", "Required field: DeviceId, is not set");
    return DeleteDeviceOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
  };

  return DeleteDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteGlobalNetworkOutcome NetworkManagerClient::DeleteGlobalNetwork(const DeleteGlobalNetworkRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGlobalNetwork", "Required field: GlobalNetworkId, is not set");
    return DeleteGlobalNetworkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
  };

  return DeleteGlobalNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteLinkOutcome NetworkManagerClient::DeleteLink(const DeleteLinkRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLink", "Required field: GlobalNetworkId, is not set");
    return DeleteLinkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.LinkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLink", "Required field: LinkId, is not set");
    return DeleteLinkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [LinkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/links/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
  };

  return DeleteLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePeeringOutcome NetworkManagerClient::DeletePeering(const DeletePeeringRequest& request) const {
  if (!request.PeeringIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePeering", "Required field: PeeringId, is not set");
    return DeletePeeringOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [PeeringId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/peerings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPeeringId());
  };

  return DeletePeeringOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteResourcePolicyOutcome NetworkManagerClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicy", "Required field: ResourceArn, is not set");
    return DeleteResourcePolicyOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSiteOutcome NetworkManagerClient::DeleteSite(const DeleteSiteRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSite", "Required field: GlobalNetworkId, is not set");
    return DeleteSiteOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.SiteIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSite", "Required field: SiteId, is not set");
    return DeleteSiteOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SiteId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sites/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSiteId());
  };

  return DeleteSiteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeregisterTransitGatewayOutcome NetworkManagerClient::DeregisterTransitGateway(const DeregisterTransitGatewayRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeregisterTransitGateway", "Required field: GlobalNetworkId, is not set");
    return DeregisterTransitGatewayOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.TransitGatewayArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeregisterTransitGateway", "Required field: TransitGatewayArn, is not set");
    return DeregisterTransitGatewayOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TransitGatewayArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/transit-gateway-registrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTransitGatewayArn());
  };

  return DeregisterTransitGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeGlobalNetworksOutcome NetworkManagerClient::DescribeGlobalNetworks(const DescribeGlobalNetworksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks");
  };

  return DescribeGlobalNetworksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DisassociateConnectPeerOutcome NetworkManagerClient::DisassociateConnectPeer(const DisassociateConnectPeerRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateConnectPeer", "Required field: GlobalNetworkId, is not set");
    return DisassociateConnectPeerOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.ConnectPeerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateConnectPeer", "Required field: ConnectPeerId, is not set");
    return DisassociateConnectPeerOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectPeerId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connect-peer-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectPeerId());
  };

  return DisassociateConnectPeerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateCustomerGatewayOutcome NetworkManagerClient::DisassociateCustomerGateway(
    const DisassociateCustomerGatewayRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateCustomerGateway", "Required field: GlobalNetworkId, is not set");
    return DisassociateCustomerGatewayOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.CustomerGatewayArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateCustomerGateway", "Required field: CustomerGatewayArn, is not set");
    return DisassociateCustomerGatewayOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CustomerGatewayArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/customer-gateway-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCustomerGatewayArn());
  };

  return DisassociateCustomerGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateLinkOutcome NetworkManagerClient::DisassociateLink(const DisassociateLinkRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateLink", "Required field: GlobalNetworkId, is not set");
    return DisassociateLinkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.DeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateLink", "Required field: DeviceId, is not set");
    return DisassociateLinkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DeviceId]", false));
  }
  if (!request.LinkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateLink", "Required field: LinkId, is not set");
    return DisassociateLinkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [LinkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/link-associations");
  };

  return DisassociateLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateTransitGatewayConnectPeerOutcome NetworkManagerClient::DisassociateTransitGatewayConnectPeer(
    const DisassociateTransitGatewayConnectPeerRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateTransitGatewayConnectPeer", "Required field: GlobalNetworkId, is not set");
    return DisassociateTransitGatewayConnectPeerOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.TransitGatewayConnectPeerArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateTransitGatewayConnectPeer", "Required field: TransitGatewayConnectPeerArn, is not set");
    return DisassociateTransitGatewayConnectPeerOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TransitGatewayConnectPeerArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/transit-gateway-connect-peer-associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTransitGatewayConnectPeerArn());
  };

  return DisassociateTransitGatewayConnectPeerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

ExecuteCoreNetworkChangeSetOutcome NetworkManagerClient::ExecuteCoreNetworkChangeSet(
    const ExecuteCoreNetworkChangeSetRequest& request) const {
  if (!request.CoreNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExecuteCoreNetworkChangeSet", "Required field: CoreNetworkId, is not set");
    return ExecuteCoreNetworkChangeSetOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }
  if (!request.PolicyVersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExecuteCoreNetworkChangeSet", "Required field: PolicyVersionId, is not set");
    return ExecuteCoreNetworkChangeSetOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyVersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-network-change-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyVersionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/execute");
  };

  return ExecuteCoreNetworkChangeSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetConnectAttachmentOutcome NetworkManagerClient::GetConnectAttachment(const GetConnectAttachmentRequest& request) const {
  if (!request.AttachmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnectAttachment", "Required field: AttachmentId, is not set");
    return GetConnectAttachmentOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttachmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connect-attachments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttachmentId());
  };

  return GetConnectAttachmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConnectPeerOutcome NetworkManagerClient::GetConnectPeer(const GetConnectPeerRequest& request) const {
  if (!request.ConnectPeerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnectPeer", "Required field: ConnectPeerId, is not set");
    return GetConnectPeerOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ConnectPeerId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connect-peers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectPeerId());
  };

  return GetConnectPeerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConnectPeerAssociationsOutcome NetworkManagerClient::GetConnectPeerAssociations(const GetConnectPeerAssociationsRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnectPeerAssociations", "Required field: GlobalNetworkId, is not set");
    return GetConnectPeerAssociationsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connect-peer-associations");
  };

  return GetConnectPeerAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConnectionsOutcome NetworkManagerClient::GetConnections(const GetConnectionsRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnections", "Required field: GlobalNetworkId, is not set");
    return GetConnectionsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connections");
  };

  return GetConnectionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCoreNetworkOutcome NetworkManagerClient::GetCoreNetwork(const GetCoreNetworkRequest& request) const {
  if (!request.CoreNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCoreNetwork", "Required field: CoreNetworkId, is not set");
    return GetCoreNetworkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [CoreNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreNetworkId());
  };

  return GetCoreNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCoreNetworkChangeEventsOutcome NetworkManagerClient::GetCoreNetworkChangeEvents(const GetCoreNetworkChangeEventsRequest& request) const {
  if (!request.CoreNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCoreNetworkChangeEvents", "Required field: CoreNetworkId, is not set");
    return GetCoreNetworkChangeEventsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }
  if (!request.PolicyVersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCoreNetworkChangeEvents", "Required field: PolicyVersionId, is not set");
    return GetCoreNetworkChangeEventsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyVersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-network-change-events/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyVersionId());
  };

  return GetCoreNetworkChangeEventsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCoreNetworkChangeSetOutcome NetworkManagerClient::GetCoreNetworkChangeSet(const GetCoreNetworkChangeSetRequest& request) const {
  if (!request.CoreNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCoreNetworkChangeSet", "Required field: CoreNetworkId, is not set");
    return GetCoreNetworkChangeSetOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }
  if (!request.PolicyVersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCoreNetworkChangeSet", "Required field: PolicyVersionId, is not set");
    return GetCoreNetworkChangeSetOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyVersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-network-change-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyVersionId());
  };

  return GetCoreNetworkChangeSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCoreNetworkPolicyOutcome NetworkManagerClient::GetCoreNetworkPolicy(const GetCoreNetworkPolicyRequest& request) const {
  if (!request.CoreNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCoreNetworkPolicy", "Required field: CoreNetworkId, is not set");
    return GetCoreNetworkPolicyOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-network-policy");
  };

  return GetCoreNetworkPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCustomerGatewayAssociationsOutcome NetworkManagerClient::GetCustomerGatewayAssociations(
    const GetCustomerGatewayAssociationsRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCustomerGatewayAssociations", "Required field: GlobalNetworkId, is not set");
    return GetCustomerGatewayAssociationsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/customer-gateway-associations");
  };

  return GetCustomerGatewayAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDevicesOutcome NetworkManagerClient::GetDevices(const GetDevicesRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDevices", "Required field: GlobalNetworkId, is not set");
    return GetDevicesOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/devices");
  };

  return GetDevicesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDirectConnectGatewayAttachmentOutcome NetworkManagerClient::GetDirectConnectGatewayAttachment(
    const GetDirectConnectGatewayAttachmentRequest& request) const {
  if (!request.AttachmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDirectConnectGatewayAttachment", "Required field: AttachmentId, is not set");
    return GetDirectConnectGatewayAttachmentOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttachmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/direct-connect-gateway-attachments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttachmentId());
  };

  return GetDirectConnectGatewayAttachmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetLinkAssociationsOutcome NetworkManagerClient::GetLinkAssociations(const GetLinkAssociationsRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLinkAssociations", "Required field: GlobalNetworkId, is not set");
    return GetLinkAssociationsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/link-associations");
  };

  return GetLinkAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetLinksOutcome NetworkManagerClient::GetLinks(const GetLinksRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLinks", "Required field: GlobalNetworkId, is not set");
    return GetLinksOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/links");
  };

  return GetLinksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetNetworkResourceCountsOutcome NetworkManagerClient::GetNetworkResourceCounts(const GetNetworkResourceCountsRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNetworkResourceCounts", "Required field: GlobalNetworkId, is not set");
    return GetNetworkResourceCountsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-resource-count");
  };

  return GetNetworkResourceCountsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetNetworkResourceRelationshipsOutcome NetworkManagerClient::GetNetworkResourceRelationships(
    const GetNetworkResourceRelationshipsRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNetworkResourceRelationships", "Required field: GlobalNetworkId, is not set");
    return GetNetworkResourceRelationshipsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-resource-relationships");
  };

  return GetNetworkResourceRelationshipsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetNetworkResourcesOutcome NetworkManagerClient::GetNetworkResources(const GetNetworkResourcesRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNetworkResources", "Required field: GlobalNetworkId, is not set");
    return GetNetworkResourcesOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-resources");
  };

  return GetNetworkResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetNetworkRoutesOutcome NetworkManagerClient::GetNetworkRoutes(const GetNetworkRoutesRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNetworkRoutes", "Required field: GlobalNetworkId, is not set");
    return GetNetworkRoutesOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-routes");
  };

  return GetNetworkRoutesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetNetworkTelemetryOutcome NetworkManagerClient::GetNetworkTelemetry(const GetNetworkTelemetryRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNetworkTelemetry", "Required field: GlobalNetworkId, is not set");
    return GetNetworkTelemetryOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-telemetry");
  };

  return GetNetworkTelemetryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetResourcePolicyOutcome NetworkManagerClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourcePolicy", "Required field: ResourceArn, is not set");
    return GetResourcePolicyOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return GetResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRouteAnalysisOutcome NetworkManagerClient::GetRouteAnalysis(const GetRouteAnalysisRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRouteAnalysis", "Required field: GlobalNetworkId, is not set");
    return GetRouteAnalysisOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.RouteAnalysisIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRouteAnalysis", "Required field: RouteAnalysisId, is not set");
    return GetRouteAnalysisOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [RouteAnalysisId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/route-analyses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouteAnalysisId());
  };

  return GetRouteAnalysisOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSiteToSiteVpnAttachmentOutcome NetworkManagerClient::GetSiteToSiteVpnAttachment(const GetSiteToSiteVpnAttachmentRequest& request) const {
  if (!request.AttachmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSiteToSiteVpnAttachment", "Required field: AttachmentId, is not set");
    return GetSiteToSiteVpnAttachmentOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttachmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/site-to-site-vpn-attachments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttachmentId());
  };

  return GetSiteToSiteVpnAttachmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSitesOutcome NetworkManagerClient::GetSites(const GetSitesRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSites", "Required field: GlobalNetworkId, is not set");
    return GetSitesOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sites");
  };

  return GetSitesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTransitGatewayConnectPeerAssociationsOutcome NetworkManagerClient::GetTransitGatewayConnectPeerAssociations(
    const GetTransitGatewayConnectPeerAssociationsRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTransitGatewayConnectPeerAssociations", "Required field: GlobalNetworkId, is not set");
    return GetTransitGatewayConnectPeerAssociationsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/transit-gateway-connect-peer-associations");
  };

  return GetTransitGatewayConnectPeerAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTransitGatewayPeeringOutcome NetworkManagerClient::GetTransitGatewayPeering(const GetTransitGatewayPeeringRequest& request) const {
  if (!request.PeeringIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTransitGatewayPeering", "Required field: PeeringId, is not set");
    return GetTransitGatewayPeeringOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PeeringId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/transit-gateway-peerings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPeeringId());
  };

  return GetTransitGatewayPeeringOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTransitGatewayRegistrationsOutcome NetworkManagerClient::GetTransitGatewayRegistrations(
    const GetTransitGatewayRegistrationsRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTransitGatewayRegistrations", "Required field: GlobalNetworkId, is not set");
    return GetTransitGatewayRegistrationsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/transit-gateway-registrations");
  };

  return GetTransitGatewayRegistrationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTransitGatewayRouteTableAttachmentOutcome NetworkManagerClient::GetTransitGatewayRouteTableAttachment(
    const GetTransitGatewayRouteTableAttachmentRequest& request) const {
  if (!request.AttachmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTransitGatewayRouteTableAttachment", "Required field: AttachmentId, is not set");
    return GetTransitGatewayRouteTableAttachmentOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttachmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/transit-gateway-route-table-attachments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttachmentId());
  };

  return GetTransitGatewayRouteTableAttachmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVpcAttachmentOutcome NetworkManagerClient::GetVpcAttachment(const GetVpcAttachmentRequest& request) const {
  if (!request.AttachmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVpcAttachment", "Required field: AttachmentId, is not set");
    return GetVpcAttachmentOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AttachmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/vpc-attachments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttachmentId());
  };

  return GetVpcAttachmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAttachmentRoutingPolicyAssociationsOutcome NetworkManagerClient::ListAttachmentRoutingPolicyAssociations(
    const ListAttachmentRoutingPolicyAssociationsRequest& request) const {
  if (!request.CoreNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAttachmentRoutingPolicyAssociations", "Required field: CoreNetworkId, is not set");
    return ListAttachmentRoutingPolicyAssociationsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routing-policy-label/core-network/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreNetworkId());
  };

  return ListAttachmentRoutingPolicyAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAttachmentsOutcome NetworkManagerClient::ListAttachments(const ListAttachmentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/attachments");
  };

  return ListAttachmentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListConnectPeersOutcome NetworkManagerClient::ListConnectPeers(const ListConnectPeersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connect-peers");
  };

  return ListConnectPeersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCoreNetworkPolicyVersionsOutcome NetworkManagerClient::ListCoreNetworkPolicyVersions(
    const ListCoreNetworkPolicyVersionsRequest& request) const {
  if (!request.CoreNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCoreNetworkPolicyVersions", "Required field: CoreNetworkId, is not set");
    return ListCoreNetworkPolicyVersionsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-network-policy-versions");
  };

  return ListCoreNetworkPolicyVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCoreNetworkPrefixListAssociationsOutcome NetworkManagerClient::ListCoreNetworkPrefixListAssociations(
    const ListCoreNetworkPrefixListAssociationsRequest& request) const {
  if (!request.CoreNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCoreNetworkPrefixListAssociations", "Required field: CoreNetworkId, is not set");
    return ListCoreNetworkPrefixListAssociationsOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prefix-list/core-network/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreNetworkId());
  };

  return ListCoreNetworkPrefixListAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCoreNetworkRoutingInformationOutcome NetworkManagerClient::ListCoreNetworkRoutingInformation(
    const ListCoreNetworkRoutingInformationRequest& request) const {
  if (!request.CoreNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCoreNetworkRoutingInformation", "Required field: CoreNetworkId, is not set");
    return ListCoreNetworkRoutingInformationOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-network-routing-information");
  };

  return ListCoreNetworkRoutingInformationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCoreNetworksOutcome NetworkManagerClient::ListCoreNetworks(const ListCoreNetworksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-networks");
  };

  return ListCoreNetworksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListOrganizationServiceAccessStatusOutcome NetworkManagerClient::ListOrganizationServiceAccessStatus(
    const ListOrganizationServiceAccessStatusRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organizations/service-access");
  };

  return ListOrganizationServiceAccessStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPeeringsOutcome NetworkManagerClient::ListPeerings(const ListPeeringsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/peerings");
  };

  return ListPeeringsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome NetworkManagerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutAttachmentRoutingPolicyLabelOutcome NetworkManagerClient::PutAttachmentRoutingPolicyLabel(
    const PutAttachmentRoutingPolicyLabelRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routing-policy-label");
  };

  return PutAttachmentRoutingPolicyLabelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutCoreNetworkPolicyOutcome NetworkManagerClient::PutCoreNetworkPolicy(const PutCoreNetworkPolicyRequest& request) const {
  if (!request.CoreNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutCoreNetworkPolicy", "Required field: CoreNetworkId, is not set");
    return PutCoreNetworkPolicyOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-network-policy");
  };

  return PutCoreNetworkPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourcePolicyOutcome NetworkManagerClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutResourcePolicy", "Required field: ResourceArn, is not set");
    return PutResourcePolicyOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource-policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return PutResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterTransitGatewayOutcome NetworkManagerClient::RegisterTransitGateway(const RegisterTransitGatewayRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegisterTransitGateway", "Required field: GlobalNetworkId, is not set");
    return RegisterTransitGatewayOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/transit-gateway-registrations");
  };

  return RegisterTransitGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RejectAttachmentOutcome NetworkManagerClient::RejectAttachment(const RejectAttachmentRequest& request) const {
  if (!request.AttachmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RejectAttachment", "Required field: AttachmentId, is not set");
    return RejectAttachmentOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AttachmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/attachments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttachmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reject");
  };

  return RejectAttachmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveAttachmentRoutingPolicyLabelOutcome NetworkManagerClient::RemoveAttachmentRoutingPolicyLabel(
    const RemoveAttachmentRoutingPolicyLabelRequest& request) const {
  if (!request.CoreNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveAttachmentRoutingPolicyLabel", "Required field: CoreNetworkId, is not set");
    return RemoveAttachmentRoutingPolicyLabelOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }
  if (!request.AttachmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveAttachmentRoutingPolicyLabel", "Required field: AttachmentId, is not set");
    return RemoveAttachmentRoutingPolicyLabelOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttachmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/routing-policy-label/core-network/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attachment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttachmentId());
  };

  return RemoveAttachmentRoutingPolicyLabelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

RestoreCoreNetworkPolicyVersionOutcome NetworkManagerClient::RestoreCoreNetworkPolicyVersion(
    const RestoreCoreNetworkPolicyVersionRequest& request) const {
  if (!request.CoreNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RestoreCoreNetworkPolicyVersion", "Required field: CoreNetworkId, is not set");
    return RestoreCoreNetworkPolicyVersionOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }
  if (!request.PolicyVersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RestoreCoreNetworkPolicyVersion", "Required field: PolicyVersionId, is not set");
    return RestoreCoreNetworkPolicyVersionOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyVersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-network-policy-versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyVersionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore");
  };

  return RestoreCoreNetworkPolicyVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartOrganizationServiceAccessUpdateOutcome NetworkManagerClient::StartOrganizationServiceAccessUpdate(
    const StartOrganizationServiceAccessUpdateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organizations/service-access");
  };

  return StartOrganizationServiceAccessUpdateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartRouteAnalysisOutcome NetworkManagerClient::StartRouteAnalysis(const StartRouteAnalysisRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartRouteAnalysis", "Required field: GlobalNetworkId, is not set");
    return StartRouteAnalysisOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/route-analyses");
  };

  return StartRouteAnalysisOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome NetworkManagerClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome NetworkManagerClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateConnectionOutcome NetworkManagerClient::UpdateConnection(const UpdateConnectionRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConnection", "Required field: GlobalNetworkId, is not set");
    return UpdateConnectionOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.ConnectionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConnection", "Required field: ConnectionId, is not set");
    return UpdateConnectionOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ConnectionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectionId());
  };

  return UpdateConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateCoreNetworkOutcome NetworkManagerClient::UpdateCoreNetwork(const UpdateCoreNetworkRequest& request) const {
  if (!request.CoreNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCoreNetwork", "Required field: CoreNetworkId, is not set");
    return UpdateCoreNetworkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CoreNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/core-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCoreNetworkId());
  };

  return UpdateCoreNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateDeviceOutcome NetworkManagerClient::UpdateDevice(const UpdateDeviceRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDevice", "Required field: GlobalNetworkId, is not set");
    return UpdateDeviceOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.DeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDevice", "Required field: DeviceId, is not set");
    return UpdateDeviceOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/devices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
  };

  return UpdateDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateDirectConnectGatewayAttachmentOutcome NetworkManagerClient::UpdateDirectConnectGatewayAttachment(
    const UpdateDirectConnectGatewayAttachmentRequest& request) const {
  if (!request.AttachmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDirectConnectGatewayAttachment", "Required field: AttachmentId, is not set");
    return UpdateDirectConnectGatewayAttachmentOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttachmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/direct-connect-gateway-attachments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttachmentId());
  };

  return UpdateDirectConnectGatewayAttachmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateGlobalNetworkOutcome NetworkManagerClient::UpdateGlobalNetwork(const UpdateGlobalNetworkRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGlobalNetwork", "Required field: GlobalNetworkId, is not set");
    return UpdateGlobalNetworkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
  };

  return UpdateGlobalNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateLinkOutcome NetworkManagerClient::UpdateLink(const UpdateLinkRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLink", "Required field: GlobalNetworkId, is not set");
    return UpdateLinkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.LinkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLink", "Required field: LinkId, is not set");
    return UpdateLinkOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [LinkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/links/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
  };

  return UpdateLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateNetworkResourceMetadataOutcome NetworkManagerClient::UpdateNetworkResourceMetadata(
    const UpdateNetworkResourceMetadataRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNetworkResourceMetadata", "Required field: GlobalNetworkId, is not set");
    return UpdateNetworkResourceMetadataOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNetworkResourceMetadata", "Required field: ResourceArn, is not set");
    return UpdateNetworkResourceMetadataOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/network-resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata");
  };

  return UpdateNetworkResourceMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateSiteOutcome NetworkManagerClient::UpdateSite(const UpdateSiteRequest& request) const {
  if (!request.GlobalNetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSite", "Required field: GlobalNetworkId, is not set");
    return UpdateSiteOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [GlobalNetworkId]", false));
  }
  if (!request.SiteIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSite", "Required field: SiteId, is not set");
    return UpdateSiteOutcome(Aws::Client::AWSError<NetworkManagerErrors>(NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SiteId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGlobalNetworkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sites/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSiteId());
  };

  return UpdateSiteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateVpcAttachmentOutcome NetworkManagerClient::UpdateVpcAttachment(const UpdateVpcAttachmentRequest& request) const {
  if (!request.AttachmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVpcAttachment", "Required field: AttachmentId, is not set");
    return UpdateVpcAttachmentOutcome(Aws::Client::AWSError<NetworkManagerErrors>(
        NetworkManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttachmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/vpc-attachments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttachmentId());
  };

  return UpdateVpcAttachmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
