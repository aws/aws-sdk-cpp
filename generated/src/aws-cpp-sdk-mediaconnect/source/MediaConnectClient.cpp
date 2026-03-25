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
#include <aws/mediaconnect/MediaConnectClient.h>
#include <aws/mediaconnect/MediaConnectEndpointProvider.h>
#include <aws/mediaconnect/MediaConnectErrorMarshaller.h>
#include <aws/mediaconnect/model/AddBridgeOutputsRequest.h>
#include <aws/mediaconnect/model/AddBridgeSourcesRequest.h>
#include <aws/mediaconnect/model/AddFlowMediaStreamsRequest.h>
#include <aws/mediaconnect/model/AddFlowOutputsRequest.h>
#include <aws/mediaconnect/model/AddFlowSourcesRequest.h>
#include <aws/mediaconnect/model/AddFlowVpcInterfacesRequest.h>
#include <aws/mediaconnect/model/BatchGetRouterInputRequest.h>
#include <aws/mediaconnect/model/BatchGetRouterNetworkInterfaceRequest.h>
#include <aws/mediaconnect/model/BatchGetRouterOutputRequest.h>
#include <aws/mediaconnect/model/CreateBridgeRequest.h>
#include <aws/mediaconnect/model/CreateFlowRequest.h>
#include <aws/mediaconnect/model/CreateGatewayRequest.h>
#include <aws/mediaconnect/model/CreateRouterInputRequest.h>
#include <aws/mediaconnect/model/CreateRouterNetworkInterfaceRequest.h>
#include <aws/mediaconnect/model/CreateRouterOutputRequest.h>
#include <aws/mediaconnect/model/DeleteBridgeRequest.h>
#include <aws/mediaconnect/model/DeleteFlowRequest.h>
#include <aws/mediaconnect/model/DeleteGatewayRequest.h>
#include <aws/mediaconnect/model/DeleteRouterInputRequest.h>
#include <aws/mediaconnect/model/DeleteRouterNetworkInterfaceRequest.h>
#include <aws/mediaconnect/model/DeleteRouterOutputRequest.h>
#include <aws/mediaconnect/model/DeregisterGatewayInstanceRequest.h>
#include <aws/mediaconnect/model/DescribeBridgeRequest.h>
#include <aws/mediaconnect/model/DescribeFlowRequest.h>
#include <aws/mediaconnect/model/DescribeFlowSourceMetadataRequest.h>
#include <aws/mediaconnect/model/DescribeFlowSourceThumbnailRequest.h>
#include <aws/mediaconnect/model/DescribeGatewayInstanceRequest.h>
#include <aws/mediaconnect/model/DescribeGatewayRequest.h>
#include <aws/mediaconnect/model/DescribeOfferingRequest.h>
#include <aws/mediaconnect/model/DescribeReservationRequest.h>
#include <aws/mediaconnect/model/GetRouterInputRequest.h>
#include <aws/mediaconnect/model/GetRouterInputSourceMetadataRequest.h>
#include <aws/mediaconnect/model/GetRouterInputThumbnailRequest.h>
#include <aws/mediaconnect/model/GetRouterNetworkInterfaceRequest.h>
#include <aws/mediaconnect/model/GetRouterOutputRequest.h>
#include <aws/mediaconnect/model/GrantFlowEntitlementsRequest.h>
#include <aws/mediaconnect/model/ListBridgesRequest.h>
#include <aws/mediaconnect/model/ListEntitlementsRequest.h>
#include <aws/mediaconnect/model/ListFlowsRequest.h>
#include <aws/mediaconnect/model/ListGatewayInstancesRequest.h>
#include <aws/mediaconnect/model/ListGatewaysRequest.h>
#include <aws/mediaconnect/model/ListOfferingsRequest.h>
#include <aws/mediaconnect/model/ListReservationsRequest.h>
#include <aws/mediaconnect/model/ListRouterInputsRequest.h>
#include <aws/mediaconnect/model/ListRouterNetworkInterfacesRequest.h>
#include <aws/mediaconnect/model/ListRouterOutputsRequest.h>
#include <aws/mediaconnect/model/ListTagsForGlobalResourceRequest.h>
#include <aws/mediaconnect/model/ListTagsForResourceRequest.h>
#include <aws/mediaconnect/model/PurchaseOfferingRequest.h>
#include <aws/mediaconnect/model/RemoveBridgeOutputRequest.h>
#include <aws/mediaconnect/model/RemoveBridgeSourceRequest.h>
#include <aws/mediaconnect/model/RemoveFlowMediaStreamRequest.h>
#include <aws/mediaconnect/model/RemoveFlowOutputRequest.h>
#include <aws/mediaconnect/model/RemoveFlowSourceRequest.h>
#include <aws/mediaconnect/model/RemoveFlowVpcInterfaceRequest.h>
#include <aws/mediaconnect/model/RestartRouterInputRequest.h>
#include <aws/mediaconnect/model/RestartRouterOutputRequest.h>
#include <aws/mediaconnect/model/RevokeFlowEntitlementRequest.h>
#include <aws/mediaconnect/model/StartFlowRequest.h>
#include <aws/mediaconnect/model/StartRouterInputRequest.h>
#include <aws/mediaconnect/model/StartRouterOutputRequest.h>
#include <aws/mediaconnect/model/StopFlowRequest.h>
#include <aws/mediaconnect/model/StopRouterInputRequest.h>
#include <aws/mediaconnect/model/StopRouterOutputRequest.h>
#include <aws/mediaconnect/model/TagGlobalResourceRequest.h>
#include <aws/mediaconnect/model/TagResourceRequest.h>
#include <aws/mediaconnect/model/TakeRouterInputRequest.h>
#include <aws/mediaconnect/model/UntagGlobalResourceRequest.h>
#include <aws/mediaconnect/model/UntagResourceRequest.h>
#include <aws/mediaconnect/model/UpdateBridgeOutputRequest.h>
#include <aws/mediaconnect/model/UpdateBridgeRequest.h>
#include <aws/mediaconnect/model/UpdateBridgeSourceRequest.h>
#include <aws/mediaconnect/model/UpdateBridgeStateRequest.h>
#include <aws/mediaconnect/model/UpdateFlowEntitlementRequest.h>
#include <aws/mediaconnect/model/UpdateFlowMediaStreamRequest.h>
#include <aws/mediaconnect/model/UpdateFlowOutputRequest.h>
#include <aws/mediaconnect/model/UpdateFlowRequest.h>
#include <aws/mediaconnect/model/UpdateFlowSourceRequest.h>
#include <aws/mediaconnect/model/UpdateGatewayInstanceRequest.h>
#include <aws/mediaconnect/model/UpdateRouterInputRequest.h>
#include <aws/mediaconnect/model/UpdateRouterNetworkInterfaceRequest.h>
#include <aws/mediaconnect/model/UpdateRouterOutputRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaConnect;
using namespace Aws::MediaConnect::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MediaConnect {
const char SERVICE_NAME[] = "mediaconnect";
const char ALLOCATION_TAG[] = "MediaConnectClient";
}  // namespace MediaConnect
}  // namespace Aws
const char* MediaConnectClient::GetServiceName() { return SERVICE_NAME; }
const char* MediaConnectClient::GetAllocationTag() { return ALLOCATION_TAG; }

MediaConnectClient::MediaConnectClient(const MediaConnect::MediaConnectClientConfiguration& clientConfiguration,
                                       std::shared_ptr<MediaConnectEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MediaConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaConnectClient::MediaConnectClient(const AWSCredentials& credentials,
                                       std::shared_ptr<MediaConnectEndpointProviderBase> endpointProvider,
                                       const MediaConnect::MediaConnectClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MediaConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaConnectClient::MediaConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<MediaConnectEndpointProviderBase> endpointProvider,
                                       const MediaConnect::MediaConnectClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MediaConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MediaConnectClient::MediaConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MediaConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaConnectClient::MediaConnectClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MediaConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaConnectClient::MediaConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MediaConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MediaConnectClient::~MediaConnectClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MediaConnectEndpointProviderBase>& MediaConnectClient::accessEndpointProvider() { return m_endpointProvider; }

void MediaConnectClient::init(const MediaConnect::MediaConnectClientConfiguration& config) {
  AWSClient::SetServiceClientName("MediaConnect");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "mediaconnect");
}

void MediaConnectClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MediaConnectClient::InvokeOperationOutcome MediaConnectClient::InvokeServiceOperation(
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

AddBridgeOutputsOutcome MediaConnectClient::AddBridgeOutputs(const AddBridgeOutputsRequest& request) const {
  if (!request.BridgeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddBridgeOutputs", "Required field: BridgeArn, is not set");
    return AddBridgeOutputsOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [BridgeArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBridgeArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/outputs");
  };

  return AddBridgeOutputsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AddBridgeSourcesOutcome MediaConnectClient::AddBridgeSources(const AddBridgeSourcesRequest& request) const {
  if (!request.BridgeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddBridgeSources", "Required field: BridgeArn, is not set");
    return AddBridgeSourcesOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [BridgeArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBridgeArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sources");
  };

  return AddBridgeSourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AddFlowMediaStreamsOutcome MediaConnectClient::AddFlowMediaStreams(const AddFlowMediaStreamsRequest& request) const {
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddFlowMediaStreams", "Required field: FlowArn, is not set");
    return AddFlowMediaStreamsOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [FlowArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/mediaStreams");
  };

  return AddFlowMediaStreamsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AddFlowOutputsOutcome MediaConnectClient::AddFlowOutputs(const AddFlowOutputsRequest& request) const {
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddFlowOutputs", "Required field: FlowArn, is not set");
    return AddFlowOutputsOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [FlowArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/outputs");
  };

  return AddFlowOutputsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AddFlowSourcesOutcome MediaConnectClient::AddFlowSources(const AddFlowSourcesRequest& request) const {
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddFlowSources", "Required field: FlowArn, is not set");
    return AddFlowSourcesOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [FlowArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/source");
  };

  return AddFlowSourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AddFlowVpcInterfacesOutcome MediaConnectClient::AddFlowVpcInterfaces(const AddFlowVpcInterfacesRequest& request) const {
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddFlowVpcInterfaces", "Required field: FlowArn, is not set");
    return AddFlowVpcInterfacesOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [FlowArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vpcInterfaces");
  };

  return AddFlowVpcInterfacesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetRouterInputOutcome MediaConnectClient::BatchGetRouterInput(const BatchGetRouterInputRequest& request) const {
  if (!request.ArnsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetRouterInput", "Required field: Arns, is not set");
    return BatchGetRouterInputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Arns]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInputs");
  };

  return BatchGetRouterInputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

BatchGetRouterNetworkInterfaceOutcome MediaConnectClient::BatchGetRouterNetworkInterface(
    const BatchGetRouterNetworkInterfaceRequest& request) const {
  if (!request.ArnsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetRouterNetworkInterface", "Required field: Arns, is not set");
    return BatchGetRouterNetworkInterfaceOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arns]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerNetworkInterfaces");
  };

  return BatchGetRouterNetworkInterfaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

BatchGetRouterOutputOutcome MediaConnectClient::BatchGetRouterOutput(const BatchGetRouterOutputRequest& request) const {
  if (!request.ArnsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetRouterOutput", "Required field: Arns, is not set");
    return BatchGetRouterOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Arns]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutputs");
  };

  return BatchGetRouterOutputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

CreateBridgeOutcome MediaConnectClient::CreateBridge(const CreateBridgeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges");
  };

  return CreateBridgeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFlowOutcome MediaConnectClient::CreateFlow(const CreateFlowRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows");
  };

  return CreateFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGatewayOutcome MediaConnectClient::CreateGateway(const CreateGatewayRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/gateways");
  };

  return CreateGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRouterInputOutcome MediaConnectClient::CreateRouterInput(const CreateRouterInputRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInput");
  };

  return CreateRouterInputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRouterNetworkInterfaceOutcome MediaConnectClient::CreateRouterNetworkInterface(
    const CreateRouterNetworkInterfaceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerNetworkInterface");
  };

  return CreateRouterNetworkInterfaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRouterOutputOutcome MediaConnectClient::CreateRouterOutput(const CreateRouterOutputRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutput");
  };

  return CreateRouterOutputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBridgeOutcome MediaConnectClient::DeleteBridge(const DeleteBridgeRequest& request) const {
  if (!request.BridgeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBridge", "Required field: BridgeArn, is not set");
    return DeleteBridgeOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [BridgeArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBridgeArn());
  };

  return DeleteBridgeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteFlowOutcome MediaConnectClient::DeleteFlow(const DeleteFlowRequest& request) const {
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFlow", "Required field: FlowArn, is not set");
    return DeleteFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [FlowArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  };

  return DeleteFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteGatewayOutcome MediaConnectClient::DeleteGateway(const DeleteGatewayRequest& request) const {
  if (!request.GatewayArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGateway", "Required field: GatewayArn, is not set");
    return DeleteGatewayOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [GatewayArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayArn());
  };

  return DeleteGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRouterInputOutcome MediaConnectClient::DeleteRouterInput(const DeleteRouterInputRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRouterInput", "Required field: Arn, is not set");
    return DeleteRouterInputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInput/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return DeleteRouterInputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRouterNetworkInterfaceOutcome MediaConnectClient::DeleteRouterNetworkInterface(
    const DeleteRouterNetworkInterfaceRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRouterNetworkInterface", "Required field: Arn, is not set");
    return DeleteRouterNetworkInterfaceOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerNetworkInterface/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return DeleteRouterNetworkInterfaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRouterOutputOutcome MediaConnectClient::DeleteRouterOutput(const DeleteRouterOutputRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRouterOutput", "Required field: Arn, is not set");
    return DeleteRouterOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutput/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return DeleteRouterOutputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeregisterGatewayInstanceOutcome MediaConnectClient::DeregisterGatewayInstance(const DeregisterGatewayInstanceRequest& request) const {
  if (!request.GatewayInstanceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeregisterGatewayInstance", "Required field: GatewayInstanceArn, is not set");
    return DeregisterGatewayInstanceOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayInstanceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/gateway-instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayInstanceArn());
  };

  return DeregisterGatewayInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeBridgeOutcome MediaConnectClient::DescribeBridge(const DescribeBridgeRequest& request) const {
  if (!request.BridgeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBridge", "Required field: BridgeArn, is not set");
    return DescribeBridgeOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [BridgeArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBridgeArn());
  };

  return DescribeBridgeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeFlowOutcome MediaConnectClient::DescribeFlow(const DescribeFlowRequest& request) const {
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeFlow", "Required field: FlowArn, is not set");
    return DescribeFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [FlowArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  };

  return DescribeFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeFlowSourceMetadataOutcome MediaConnectClient::DescribeFlowSourceMetadata(const DescribeFlowSourceMetadataRequest& request) const {
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeFlowSourceMetadata", "Required field: FlowArn, is not set");
    return DescribeFlowSourceMetadataOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/source-metadata");
  };

  return DescribeFlowSourceMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeFlowSourceThumbnailOutcome MediaConnectClient::DescribeFlowSourceThumbnail(
    const DescribeFlowSourceThumbnailRequest& request) const {
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeFlowSourceThumbnail", "Required field: FlowArn, is not set");
    return DescribeFlowSourceThumbnailOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/source-thumbnail");
  };

  return DescribeFlowSourceThumbnailOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeGatewayOutcome MediaConnectClient::DescribeGateway(const DescribeGatewayRequest& request) const {
  if (!request.GatewayArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeGateway", "Required field: GatewayArn, is not set");
    return DescribeGatewayOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [GatewayArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayArn());
  };

  return DescribeGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeGatewayInstanceOutcome MediaConnectClient::DescribeGatewayInstance(const DescribeGatewayInstanceRequest& request) const {
  if (!request.GatewayInstanceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeGatewayInstance", "Required field: GatewayInstanceArn, is not set");
    return DescribeGatewayInstanceOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayInstanceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/gateway-instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayInstanceArn());
  };

  return DescribeGatewayInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeOfferingOutcome MediaConnectClient::DescribeOffering(const DescribeOfferingRequest& request) const {
  if (!request.OfferingArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeOffering", "Required field: OfferingArn, is not set");
    return DescribeOfferingOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [OfferingArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/offerings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOfferingArn());
  };

  return DescribeOfferingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeReservationOutcome MediaConnectClient::DescribeReservation(const DescribeReservationRequest& request) const {
  if (!request.ReservationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeReservation", "Required field: ReservationArn, is not set");
    return DescribeReservationOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ReservationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/reservations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReservationArn());
  };

  return DescribeReservationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRouterInputOutcome MediaConnectClient::GetRouterInput(const GetRouterInputRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRouterInput", "Required field: Arn, is not set");
    return GetRouterInputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInput/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return GetRouterInputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRouterInputSourceMetadataOutcome MediaConnectClient::GetRouterInputSourceMetadata(
    const GetRouterInputSourceMetadataRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRouterInputSourceMetadata", "Required field: Arn, is not set");
    return GetRouterInputSourceMetadataOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInput/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/source-metadata");
  };

  return GetRouterInputSourceMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRouterInputThumbnailOutcome MediaConnectClient::GetRouterInputThumbnail(const GetRouterInputThumbnailRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRouterInputThumbnail", "Required field: Arn, is not set");
    return GetRouterInputThumbnailOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInput/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/thumbnail");
  };

  return GetRouterInputThumbnailOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRouterNetworkInterfaceOutcome MediaConnectClient::GetRouterNetworkInterface(const GetRouterNetworkInterfaceRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRouterNetworkInterface", "Required field: Arn, is not set");
    return GetRouterNetworkInterfaceOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerNetworkInterface/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return GetRouterNetworkInterfaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRouterOutputOutcome MediaConnectClient::GetRouterOutput(const GetRouterOutputRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRouterOutput", "Required field: Arn, is not set");
    return GetRouterOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutput/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return GetRouterOutputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GrantFlowEntitlementsOutcome MediaConnectClient::GrantFlowEntitlements(const GrantFlowEntitlementsRequest& request) const {
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GrantFlowEntitlements", "Required field: FlowArn, is not set");
    return GrantFlowEntitlementsOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entitlements");
  };

  return GrantFlowEntitlementsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBridgesOutcome MediaConnectClient::ListBridges(const ListBridgesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges");
  };

  return ListBridgesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEntitlementsOutcome MediaConnectClient::ListEntitlements(const ListEntitlementsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/entitlements");
  };

  return ListEntitlementsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFlowsOutcome MediaConnectClient::ListFlows(const ListFlowsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows");
  };

  return ListFlowsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListGatewayInstancesOutcome MediaConnectClient::ListGatewayInstances(const ListGatewayInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/gateway-instances");
  };

  return ListGatewayInstancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListGatewaysOutcome MediaConnectClient::ListGateways(const ListGatewaysRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/gateways");
  };

  return ListGatewaysOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListOfferingsOutcome MediaConnectClient::ListOfferings(const ListOfferingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/offerings");
  };

  return ListOfferingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListReservationsOutcome MediaConnectClient::ListReservations(const ListReservationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/reservations");
  };

  return ListReservationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRouterInputsOutcome MediaConnectClient::ListRouterInputs(const ListRouterInputsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInputs");
  };

  return ListRouterInputsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRouterNetworkInterfacesOutcome MediaConnectClient::ListRouterNetworkInterfaces(
    const ListRouterNetworkInterfacesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerNetworkInterfaces");
  };

  return ListRouterNetworkInterfacesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRouterOutputsOutcome MediaConnectClient::ListRouterOutputs(const ListRouterOutputsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutputs");
  };

  return ListRouterOutputsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForGlobalResourceOutcome MediaConnectClient::ListTagsForGlobalResource(const ListTagsForGlobalResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForGlobalResource", "Required field: ResourceArn, is not set");
    return ListTagsForGlobalResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/global/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForGlobalResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome MediaConnectClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PurchaseOfferingOutcome MediaConnectClient::PurchaseOffering(const PurchaseOfferingRequest& request) const {
  if (!request.OfferingArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PurchaseOffering", "Required field: OfferingArn, is not set");
    return PurchaseOfferingOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [OfferingArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/offerings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOfferingArn());
  };

  return PurchaseOfferingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveBridgeOutputOutcome MediaConnectClient::RemoveBridgeOutput(const RemoveBridgeOutputRequest& request) const {
  if (!request.BridgeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveBridgeOutput", "Required field: BridgeArn, is not set");
    return RemoveBridgeOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [BridgeArn]", false));
  }
  if (!request.OutputNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveBridgeOutput", "Required field: OutputName, is not set");
    return RemoveBridgeOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [OutputName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBridgeArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/outputs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutputName());
  };

  return RemoveBridgeOutputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

RemoveBridgeSourceOutcome MediaConnectClient::RemoveBridgeSource(const RemoveBridgeSourceRequest& request) const {
  if (!request.BridgeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveBridgeSource", "Required field: BridgeArn, is not set");
    return RemoveBridgeSourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [BridgeArn]", false));
  }
  if (!request.SourceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveBridgeSource", "Required field: SourceName, is not set");
    return RemoveBridgeSourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [SourceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBridgeArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceName());
  };

  return RemoveBridgeSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

RemoveFlowMediaStreamOutcome MediaConnectClient::RemoveFlowMediaStream(const RemoveFlowMediaStreamRequest& request) const {
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveFlowMediaStream", "Required field: FlowArn, is not set");
    return RemoveFlowMediaStreamOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  if (!request.MediaStreamNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveFlowMediaStream", "Required field: MediaStreamName, is not set");
    return RemoveFlowMediaStreamOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaStreamName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/mediaStreams/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMediaStreamName());
  };

  return RemoveFlowMediaStreamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

RemoveFlowOutputOutcome MediaConnectClient::RemoveFlowOutput(const RemoveFlowOutputRequest& request) const {
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveFlowOutput", "Required field: FlowArn, is not set");
    return RemoveFlowOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FlowArn]", false));
  }
  if (!request.OutputArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveFlowOutput", "Required field: OutputArn, is not set");
    return RemoveFlowOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [OutputArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/outputs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutputArn());
  };

  return RemoveFlowOutputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

RemoveFlowSourceOutcome MediaConnectClient::RemoveFlowSource(const RemoveFlowSourceRequest& request) const {
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveFlowSource", "Required field: FlowArn, is not set");
    return RemoveFlowSourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FlowArn]", false));
  }
  if (!request.SourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveFlowSource", "Required field: SourceArn, is not set");
    return RemoveFlowSourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [SourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/source/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceArn());
  };

  return RemoveFlowSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

RemoveFlowVpcInterfaceOutcome MediaConnectClient::RemoveFlowVpcInterface(const RemoveFlowVpcInterfaceRequest& request) const {
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveFlowVpcInterface", "Required field: FlowArn, is not set");
    return RemoveFlowVpcInterfaceOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  if (!request.VpcInterfaceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveFlowVpcInterface", "Required field: VpcInterfaceName, is not set");
    return RemoveFlowVpcInterfaceOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcInterfaceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vpcInterfaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVpcInterfaceName());
  };

  return RemoveFlowVpcInterfaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

RestartRouterInputOutcome MediaConnectClient::RestartRouterInput(const RestartRouterInputRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RestartRouterInput", "Required field: Arn, is not set");
    return RestartRouterInputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInput/restart/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return RestartRouterInputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RestartRouterOutputOutcome MediaConnectClient::RestartRouterOutput(const RestartRouterOutputRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RestartRouterOutput", "Required field: Arn, is not set");
    return RestartRouterOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutput/restart/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return RestartRouterOutputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RevokeFlowEntitlementOutcome MediaConnectClient::RevokeFlowEntitlement(const RevokeFlowEntitlementRequest& request) const {
  if (!request.EntitlementArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RevokeFlowEntitlement", "Required field: EntitlementArn, is not set");
    return RevokeFlowEntitlementOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntitlementArn]", false));
  }
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RevokeFlowEntitlement", "Required field: FlowArn, is not set");
    return RevokeFlowEntitlementOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entitlements/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntitlementArn());
  };

  return RevokeFlowEntitlementOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

StartFlowOutcome MediaConnectClient::StartFlow(const StartFlowRequest& request) const {
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartFlow", "Required field: FlowArn, is not set");
    return StartFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [FlowArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/start/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  };

  return StartFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartRouterInputOutcome MediaConnectClient::StartRouterInput(const StartRouterInputRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartRouterInput", "Required field: Arn, is not set");
    return StartRouterInputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInput/start/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return StartRouterInputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartRouterOutputOutcome MediaConnectClient::StartRouterOutput(const StartRouterOutputRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartRouterOutput", "Required field: Arn, is not set");
    return StartRouterOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutput/start/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return StartRouterOutputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopFlowOutcome MediaConnectClient::StopFlow(const StopFlowRequest& request) const {
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopFlow", "Required field: FlowArn, is not set");
    return StopFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [FlowArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/stop/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  };

  return StopFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopRouterInputOutcome MediaConnectClient::StopRouterInput(const StopRouterInputRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopRouterInput", "Required field: Arn, is not set");
    return StopRouterInputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInput/stop/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return StopRouterInputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopRouterOutputOutcome MediaConnectClient::StopRouterOutput(const StopRouterOutputRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopRouterOutput", "Required field: Arn, is not set");
    return StopRouterOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutput/stop/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return StopRouterOutputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagGlobalResourceOutcome MediaConnectClient::TagGlobalResource(const TagGlobalResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagGlobalResource", "Required field: ResourceArn, is not set");
    return TagGlobalResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/global/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagGlobalResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome MediaConnectClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TakeRouterInputOutcome MediaConnectClient::TakeRouterInput(const TakeRouterInputRequest& request) const {
  if (!request.RouterOutputArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TakeRouterInput", "Required field: RouterOutputArn, is not set");
    return TakeRouterInputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [RouterOutputArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutput/takeRouterInput/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouterOutputArn());
  };

  return TakeRouterInputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UntagGlobalResourceOutcome MediaConnectClient::UntagGlobalResource(const UntagGlobalResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagGlobalResource", "Required field: ResourceArn, is not set");
    return UntagGlobalResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagGlobalResource", "Required field: TagKeys, is not set");
    return UntagGlobalResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/global/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagGlobalResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UntagResourceOutcome MediaConnectClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateBridgeOutcome MediaConnectClient::UpdateBridge(const UpdateBridgeRequest& request) const {
  if (!request.BridgeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBridge", "Required field: BridgeArn, is not set");
    return UpdateBridgeOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [BridgeArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBridgeArn());
  };

  return UpdateBridgeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateBridgeOutputOutcome MediaConnectClient::UpdateBridgeOutput(const UpdateBridgeOutputRequest& request) const {
  if (!request.BridgeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBridgeOutput", "Required field: BridgeArn, is not set");
    return UpdateBridgeOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [BridgeArn]", false));
  }
  if (!request.OutputNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBridgeOutput", "Required field: OutputName, is not set");
    return UpdateBridgeOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [OutputName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBridgeArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/outputs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutputName());
  };

  return UpdateBridgeOutputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateBridgeSourceOutcome MediaConnectClient::UpdateBridgeSource(const UpdateBridgeSourceRequest& request) const {
  if (!request.BridgeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBridgeSource", "Required field: BridgeArn, is not set");
    return UpdateBridgeSourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [BridgeArn]", false));
  }
  if (!request.SourceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBridgeSource", "Required field: SourceName, is not set");
    return UpdateBridgeSourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [SourceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBridgeArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceName());
  };

  return UpdateBridgeSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateBridgeStateOutcome MediaConnectClient::UpdateBridgeState(const UpdateBridgeStateRequest& request) const {
  if (!request.BridgeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBridgeState", "Required field: BridgeArn, is not set");
    return UpdateBridgeStateOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [BridgeArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBridgeArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/state");
  };

  return UpdateBridgeStateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateFlowOutcome MediaConnectClient::UpdateFlow(const UpdateFlowRequest& request) const {
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFlow", "Required field: FlowArn, is not set");
    return UpdateFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [FlowArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  };

  return UpdateFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateFlowEntitlementOutcome MediaConnectClient::UpdateFlowEntitlement(const UpdateFlowEntitlementRequest& request) const {
  if (!request.EntitlementArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFlowEntitlement", "Required field: EntitlementArn, is not set");
    return UpdateFlowEntitlementOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntitlementArn]", false));
  }
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFlowEntitlement", "Required field: FlowArn, is not set");
    return UpdateFlowEntitlementOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/entitlements/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntitlementArn());
  };

  return UpdateFlowEntitlementOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateFlowMediaStreamOutcome MediaConnectClient::UpdateFlowMediaStream(const UpdateFlowMediaStreamRequest& request) const {
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFlowMediaStream", "Required field: FlowArn, is not set");
    return UpdateFlowMediaStreamOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  if (!request.MediaStreamNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFlowMediaStream", "Required field: MediaStreamName, is not set");
    return UpdateFlowMediaStreamOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaStreamName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/mediaStreams/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMediaStreamName());
  };

  return UpdateFlowMediaStreamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateFlowOutputOutcome MediaConnectClient::UpdateFlowOutput(const UpdateFlowOutputRequest& request) const {
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFlowOutput", "Required field: FlowArn, is not set");
    return UpdateFlowOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FlowArn]", false));
  }
  if (!request.OutputArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFlowOutput", "Required field: OutputArn, is not set");
    return UpdateFlowOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [OutputArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/outputs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutputArn());
  };

  return UpdateFlowOutputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateFlowSourceOutcome MediaConnectClient::UpdateFlowSource(const UpdateFlowSourceRequest& request) const {
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFlowSource", "Required field: FlowArn, is not set");
    return UpdateFlowSourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FlowArn]", false));
  }
  if (!request.SourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFlowSource", "Required field: SourceArn, is not set");
    return UpdateFlowSourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [SourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/source/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceArn());
  };

  return UpdateFlowSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateGatewayInstanceOutcome MediaConnectClient::UpdateGatewayInstance(const UpdateGatewayInstanceRequest& request) const {
  if (!request.GatewayInstanceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGatewayInstance", "Required field: GatewayInstanceArn, is not set");
    return UpdateGatewayInstanceOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayInstanceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/gateway-instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayInstanceArn());
  };

  return UpdateGatewayInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateRouterInputOutcome MediaConnectClient::UpdateRouterInput(const UpdateRouterInputRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRouterInput", "Required field: Arn, is not set");
    return UpdateRouterInputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInput/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return UpdateRouterInputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateRouterNetworkInterfaceOutcome MediaConnectClient::UpdateRouterNetworkInterface(
    const UpdateRouterNetworkInterfaceRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRouterNetworkInterface", "Required field: Arn, is not set");
    return UpdateRouterNetworkInterfaceOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerNetworkInterface/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return UpdateRouterNetworkInterfaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateRouterOutputOutcome MediaConnectClient::UpdateRouterOutput(const UpdateRouterOutputRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRouterOutput", "Required field: Arn, is not set");
    return UpdateRouterOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutput/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return UpdateRouterOutputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
