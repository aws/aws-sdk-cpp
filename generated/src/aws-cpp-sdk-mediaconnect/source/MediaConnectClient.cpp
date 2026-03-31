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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddBridgeOutputsOutcome(result.GetResultWithOwnership())
                            : AddBridgeOutputsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddBridgeSourcesOutcome(result.GetResultWithOwnership())
                            : AddBridgeSourcesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddFlowMediaStreamsOutcome(result.GetResultWithOwnership())
                            : AddFlowMediaStreamsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddFlowOutputsOutcome(result.GetResultWithOwnership()) : AddFlowOutputsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddFlowSourcesOutcome(result.GetResultWithOwnership()) : AddFlowSourcesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddFlowVpcInterfacesOutcome(result.GetResultWithOwnership())
                            : AddFlowVpcInterfacesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? BatchGetRouterInputOutcome(result.GetResultWithOwnership())
                            : BatchGetRouterInputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? BatchGetRouterNetworkInterfaceOutcome(result.GetResultWithOwnership())
                            : BatchGetRouterNetworkInterfaceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? BatchGetRouterOutputOutcome(result.GetResultWithOwnership())
                            : BatchGetRouterOutputOutcome(std::move(result.GetError()));
}

CreateBridgeOutcome MediaConnectClient::CreateBridge(const CreateBridgeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBridgeOutcome(result.GetResultWithOwnership()) : CreateBridgeOutcome(std::move(result.GetError()));
}

CreateFlowOutcome MediaConnectClient::CreateFlow(const CreateFlowRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFlowOutcome(result.GetResultWithOwnership()) : CreateFlowOutcome(std::move(result.GetError()));
}

CreateGatewayOutcome MediaConnectClient::CreateGateway(const CreateGatewayRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/gateways");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGatewayOutcome(result.GetResultWithOwnership()) : CreateGatewayOutcome(std::move(result.GetError()));
}

CreateRouterInputOutcome MediaConnectClient::CreateRouterInput(const CreateRouterInputRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInput");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRouterInputOutcome(result.GetResultWithOwnership())
                            : CreateRouterInputOutcome(std::move(result.GetError()));
}

CreateRouterNetworkInterfaceOutcome MediaConnectClient::CreateRouterNetworkInterface(
    const CreateRouterNetworkInterfaceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerNetworkInterface");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRouterNetworkInterfaceOutcome(result.GetResultWithOwnership())
                            : CreateRouterNetworkInterfaceOutcome(std::move(result.GetError()));
}

CreateRouterOutputOutcome MediaConnectClient::CreateRouterOutput(const CreateRouterOutputRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutput");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRouterOutputOutcome(result.GetResultWithOwnership())
                            : CreateRouterOutputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBridgeOutcome(result.GetResultWithOwnership()) : DeleteBridgeOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFlowOutcome(result.GetResultWithOwnership()) : DeleteFlowOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteGatewayOutcome(result.GetResultWithOwnership()) : DeleteGatewayOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRouterInputOutcome(result.GetResultWithOwnership())
                            : DeleteRouterInputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRouterNetworkInterfaceOutcome(result.GetResultWithOwnership())
                            : DeleteRouterNetworkInterfaceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRouterOutputOutcome(result.GetResultWithOwnership())
                            : DeleteRouterOutputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeregisterGatewayInstanceOutcome(result.GetResultWithOwnership())
                            : DeregisterGatewayInstanceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeBridgeOutcome(result.GetResultWithOwnership()) : DescribeBridgeOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeFlowOutcome(result.GetResultWithOwnership()) : DescribeFlowOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeFlowSourceMetadataOutcome(result.GetResultWithOwnership())
                            : DescribeFlowSourceMetadataOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeFlowSourceThumbnailOutcome(result.GetResultWithOwnership())
                            : DescribeFlowSourceThumbnailOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeGatewayOutcome(result.GetResultWithOwnership())
                            : DescribeGatewayOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeGatewayInstanceOutcome(result.GetResultWithOwnership())
                            : DescribeGatewayInstanceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeOfferingOutcome(result.GetResultWithOwnership())
                            : DescribeOfferingOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeReservationOutcome(result.GetResultWithOwnership())
                            : DescribeReservationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRouterInputOutcome(result.GetResultWithOwnership()) : GetRouterInputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRouterInputSourceMetadataOutcome(result.GetResultWithOwnership())
                            : GetRouterInputSourceMetadataOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRouterInputThumbnailOutcome(result.GetResultWithOwnership())
                            : GetRouterInputThumbnailOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRouterNetworkInterfaceOutcome(result.GetResultWithOwnership())
                            : GetRouterNetworkInterfaceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRouterOutputOutcome(result.GetResultWithOwnership())
                            : GetRouterOutputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GrantFlowEntitlementsOutcome(result.GetResultWithOwnership())
                            : GrantFlowEntitlementsOutcome(std::move(result.GetError()));
}

ListBridgesOutcome MediaConnectClient::ListBridges(const ListBridgesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBridgesOutcome(result.GetResultWithOwnership()) : ListBridgesOutcome(std::move(result.GetError()));
}

ListEntitlementsOutcome MediaConnectClient::ListEntitlements(const ListEntitlementsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/entitlements");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListEntitlementsOutcome(result.GetResultWithOwnership())
                            : ListEntitlementsOutcome(std::move(result.GetError()));
}

ListFlowsOutcome MediaConnectClient::ListFlows(const ListFlowsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFlowsOutcome(result.GetResultWithOwnership()) : ListFlowsOutcome(std::move(result.GetError()));
}

ListGatewayInstancesOutcome MediaConnectClient::ListGatewayInstances(const ListGatewayInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/gateway-instances");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListGatewayInstancesOutcome(result.GetResultWithOwnership())
                            : ListGatewayInstancesOutcome(std::move(result.GetError()));
}

ListGatewaysOutcome MediaConnectClient::ListGateways(const ListGatewaysRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/gateways");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListGatewaysOutcome(result.GetResultWithOwnership()) : ListGatewaysOutcome(std::move(result.GetError()));
}

ListOfferingsOutcome MediaConnectClient::ListOfferings(const ListOfferingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/offerings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListOfferingsOutcome(result.GetResultWithOwnership()) : ListOfferingsOutcome(std::move(result.GetError()));
}

ListReservationsOutcome MediaConnectClient::ListReservations(const ListReservationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/reservations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListReservationsOutcome(result.GetResultWithOwnership())
                            : ListReservationsOutcome(std::move(result.GetError()));
}

ListRouterInputsOutcome MediaConnectClient::ListRouterInputs(const ListRouterInputsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInputs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRouterInputsOutcome(result.GetResultWithOwnership())
                            : ListRouterInputsOutcome(std::move(result.GetError()));
}

ListRouterNetworkInterfacesOutcome MediaConnectClient::ListRouterNetworkInterfaces(
    const ListRouterNetworkInterfacesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerNetworkInterfaces");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRouterNetworkInterfacesOutcome(result.GetResultWithOwnership())
                            : ListRouterNetworkInterfacesOutcome(std::move(result.GetError()));
}

ListRouterOutputsOutcome MediaConnectClient::ListRouterOutputs(const ListRouterOutputsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutputs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRouterOutputsOutcome(result.GetResultWithOwnership())
                            : ListRouterOutputsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForGlobalResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForGlobalResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PurchaseOfferingOutcome(result.GetResultWithOwnership())
                            : PurchaseOfferingOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? RemoveBridgeOutputOutcome(result.GetResultWithOwnership())
                            : RemoveBridgeOutputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? RemoveBridgeSourceOutcome(result.GetResultWithOwnership())
                            : RemoveBridgeSourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? RemoveFlowMediaStreamOutcome(result.GetResultWithOwnership())
                            : RemoveFlowMediaStreamOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? RemoveFlowOutputOutcome(result.GetResultWithOwnership())
                            : RemoveFlowOutputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? RemoveFlowSourceOutcome(result.GetResultWithOwnership())
                            : RemoveFlowSourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? RemoveFlowVpcInterfaceOutcome(result.GetResultWithOwnership())
                            : RemoveFlowVpcInterfaceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestartRouterInputOutcome(result.GetResultWithOwnership())
                            : RestartRouterInputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestartRouterOutputOutcome(result.GetResultWithOwnership())
                            : RestartRouterOutputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? RevokeFlowEntitlementOutcome(result.GetResultWithOwnership())
                            : RevokeFlowEntitlementOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartFlowOutcome(result.GetResultWithOwnership()) : StartFlowOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartRouterInputOutcome(result.GetResultWithOwnership())
                            : StartRouterInputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartRouterOutputOutcome(result.GetResultWithOwnership())
                            : StartRouterOutputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopFlowOutcome(result.GetResultWithOwnership()) : StopFlowOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopRouterInputOutcome(result.GetResultWithOwnership())
                            : StopRouterInputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopRouterOutputOutcome(result.GetResultWithOwnership())
                            : StopRouterOutputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagGlobalResourceOutcome(result.GetResultWithOwnership())
                            : TagGlobalResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? TakeRouterInputOutcome(result.GetResultWithOwnership())
                            : TakeRouterInputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagGlobalResourceOutcome(result.GetResultWithOwnership())
                            : UntagGlobalResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateBridgeOutcome(result.GetResultWithOwnership()) : UpdateBridgeOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateBridgeOutputOutcome(result.GetResultWithOwnership())
                            : UpdateBridgeOutputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateBridgeSourceOutcome(result.GetResultWithOwnership())
                            : UpdateBridgeSourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateBridgeStateOutcome(result.GetResultWithOwnership())
                            : UpdateBridgeStateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateFlowOutcome(result.GetResultWithOwnership()) : UpdateFlowOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateFlowEntitlementOutcome(result.GetResultWithOwnership())
                            : UpdateFlowEntitlementOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateFlowMediaStreamOutcome(result.GetResultWithOwnership())
                            : UpdateFlowMediaStreamOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateFlowOutputOutcome(result.GetResultWithOwnership())
                            : UpdateFlowOutputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateFlowSourceOutcome(result.GetResultWithOwnership())
                            : UpdateFlowSourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateGatewayInstanceOutcome(result.GetResultWithOwnership())
                            : UpdateGatewayInstanceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateRouterInputOutcome(result.GetResultWithOwnership())
                            : UpdateRouterInputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateRouterNetworkInterfaceOutcome(result.GetResultWithOwnership())
                            : UpdateRouterNetworkInterfaceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateRouterOutputOutcome(result.GetResultWithOwnership())
                            : UpdateRouterOutputOutcome(std::move(result.GetError()));
}
