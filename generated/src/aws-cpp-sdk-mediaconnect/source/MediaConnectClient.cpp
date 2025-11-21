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
MediaConnectClient::MediaConnectClient(const Client::ClientConfiguration& clientConfiguration)
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

MediaConnectClient::MediaConnectClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MediaConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaConnectClient::MediaConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration)
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

AddBridgeOutputsOutcome MediaConnectClient::AddBridgeOutputs(const AddBridgeOutputsRequest& request) const {
  AWS_OPERATION_GUARD(AddBridgeOutputs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddBridgeOutputs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BridgeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddBridgeOutputs", "Required field: BridgeArn, is not set");
    return AddBridgeOutputsOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [BridgeArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AddBridgeOutputs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AddBridgeOutputs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AddBridgeOutputs",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AddBridgeOutputsOutcome>(
      [&]() -> AddBridgeOutputsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddBridgeOutputs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBridgeArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/outputs");
        return AddBridgeOutputsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AddBridgeSourcesOutcome MediaConnectClient::AddBridgeSources(const AddBridgeSourcesRequest& request) const {
  AWS_OPERATION_GUARD(AddBridgeSources);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddBridgeSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BridgeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddBridgeSources", "Required field: BridgeArn, is not set");
    return AddBridgeSourcesOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [BridgeArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AddBridgeSources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AddBridgeSources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AddBridgeSources",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AddBridgeSourcesOutcome>(
      [&]() -> AddBridgeSourcesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddBridgeSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBridgeArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sources");
        return AddBridgeSourcesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AddFlowMediaStreamsOutcome MediaConnectClient::AddFlowMediaStreams(const AddFlowMediaStreamsRequest& request) const {
  AWS_OPERATION_GUARD(AddFlowMediaStreams);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddFlowMediaStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddFlowMediaStreams", "Required field: FlowArn, is not set");
    return AddFlowMediaStreamsOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [FlowArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AddFlowMediaStreams, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AddFlowMediaStreams, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AddFlowMediaStreams",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AddFlowMediaStreamsOutcome>(
      [&]() -> AddFlowMediaStreamsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddFlowMediaStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/mediaStreams");
        return AddFlowMediaStreamsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AddFlowOutputsOutcome MediaConnectClient::AddFlowOutputs(const AddFlowOutputsRequest& request) const {
  AWS_OPERATION_GUARD(AddFlowOutputs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddFlowOutputs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddFlowOutputs", "Required field: FlowArn, is not set");
    return AddFlowOutputsOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [FlowArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AddFlowOutputs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AddFlowOutputs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AddFlowOutputs",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AddFlowOutputsOutcome>(
      [&]() -> AddFlowOutputsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddFlowOutputs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/outputs");
        return AddFlowOutputsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AddFlowSourcesOutcome MediaConnectClient::AddFlowSources(const AddFlowSourcesRequest& request) const {
  AWS_OPERATION_GUARD(AddFlowSources);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddFlowSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddFlowSources", "Required field: FlowArn, is not set");
    return AddFlowSourcesOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [FlowArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AddFlowSources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AddFlowSources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AddFlowSources",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AddFlowSourcesOutcome>(
      [&]() -> AddFlowSourcesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddFlowSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/source");
        return AddFlowSourcesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AddFlowVpcInterfacesOutcome MediaConnectClient::AddFlowVpcInterfaces(const AddFlowVpcInterfacesRequest& request) const {
  AWS_OPERATION_GUARD(AddFlowVpcInterfaces);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddFlowVpcInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddFlowVpcInterfaces", "Required field: FlowArn, is not set");
    return AddFlowVpcInterfacesOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [FlowArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AddFlowVpcInterfaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AddFlowVpcInterfaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AddFlowVpcInterfaces",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AddFlowVpcInterfacesOutcome>(
      [&]() -> AddFlowVpcInterfacesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddFlowVpcInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/vpcInterfaces");
        return AddFlowVpcInterfacesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchGetRouterInputOutcome MediaConnectClient::BatchGetRouterInput(const BatchGetRouterInputRequest& request) const {
  AWS_OPERATION_GUARD(BatchGetRouterInput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetRouterInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetRouterInput", "Required field: Arns, is not set");
    return BatchGetRouterInputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Arns]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchGetRouterInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchGetRouterInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchGetRouterInput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchGetRouterInputOutcome>(
      [&]() -> BatchGetRouterInputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetRouterInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInputs");
        return BatchGetRouterInputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchGetRouterNetworkInterfaceOutcome MediaConnectClient::BatchGetRouterNetworkInterface(
    const BatchGetRouterNetworkInterfaceRequest& request) const {
  AWS_OPERATION_GUARD(BatchGetRouterNetworkInterface);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetRouterNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetRouterNetworkInterface", "Required field: Arns, is not set");
    return BatchGetRouterNetworkInterfaceOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arns]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchGetRouterNetworkInterface, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchGetRouterNetworkInterface, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchGetRouterNetworkInterface",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchGetRouterNetworkInterfaceOutcome>(
      [&]() -> BatchGetRouterNetworkInterfaceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetRouterNetworkInterface, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerNetworkInterfaces");
        return BatchGetRouterNetworkInterfaceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchGetRouterOutputOutcome MediaConnectClient::BatchGetRouterOutput(const BatchGetRouterOutputRequest& request) const {
  AWS_OPERATION_GUARD(BatchGetRouterOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetRouterOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetRouterOutput", "Required field: Arns, is not set");
    return BatchGetRouterOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Arns]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchGetRouterOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchGetRouterOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchGetRouterOutput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchGetRouterOutputOutcome>(
      [&]() -> BatchGetRouterOutputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetRouterOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutputs");
        return BatchGetRouterOutputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBridgeOutcome MediaConnectClient::CreateBridge(const CreateBridgeRequest& request) const {
  AWS_OPERATION_GUARD(CreateBridge);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBridge, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateBridge, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBridge, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBridge",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBridgeOutcome>(
      [&]() -> CreateBridgeOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBridge, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges");
        return CreateBridgeOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateFlowOutcome MediaConnectClient::CreateFlow(const CreateFlowRequest& request) const {
  AWS_OPERATION_GUARD(CreateFlow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateFlow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateFlowOutcome>(
      [&]() -> CreateFlowOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows");
        return CreateFlowOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateGatewayOutcome MediaConnectClient::CreateGateway(const CreateGatewayRequest& request) const {
  AWS_OPERATION_GUARD(CreateGateway);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateGateway",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateGatewayOutcome>(
      [&]() -> CreateGatewayOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/gateways");
        return CreateGatewayOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRouterInputOutcome MediaConnectClient::CreateRouterInput(const CreateRouterInputRequest& request) const {
  AWS_OPERATION_GUARD(CreateRouterInput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRouterInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateRouterInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateRouterInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateRouterInput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateRouterInputOutcome>(
      [&]() -> CreateRouterInputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRouterInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInput");
        return CreateRouterInputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRouterNetworkInterfaceOutcome MediaConnectClient::CreateRouterNetworkInterface(
    const CreateRouterNetworkInterfaceRequest& request) const {
  AWS_OPERATION_GUARD(CreateRouterNetworkInterface);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRouterNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateRouterNetworkInterface, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateRouterNetworkInterface, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateRouterNetworkInterface",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateRouterNetworkInterfaceOutcome>(
      [&]() -> CreateRouterNetworkInterfaceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRouterNetworkInterface, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerNetworkInterface");
        return CreateRouterNetworkInterfaceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRouterOutputOutcome MediaConnectClient::CreateRouterOutput(const CreateRouterOutputRequest& request) const {
  AWS_OPERATION_GUARD(CreateRouterOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRouterOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateRouterOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateRouterOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateRouterOutput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateRouterOutputOutcome>(
      [&]() -> CreateRouterOutputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRouterOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutput");
        return CreateRouterOutputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBridgeOutcome MediaConnectClient::DeleteBridge(const DeleteBridgeRequest& request) const {
  AWS_OPERATION_GUARD(DeleteBridge);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBridge, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BridgeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBridge", "Required field: BridgeArn, is not set");
    return DeleteBridgeOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [BridgeArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBridge, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBridge, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBridge",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBridgeOutcome>(
      [&]() -> DeleteBridgeOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBridge, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBridgeArn());
        return DeleteBridgeOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteFlowOutcome MediaConnectClient::DeleteFlow(const DeleteFlowRequest& request) const {
  AWS_OPERATION_GUARD(DeleteFlow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFlow", "Required field: FlowArn, is not set");
    return DeleteFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [FlowArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteFlow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteFlowOutcome>(
      [&]() -> DeleteFlowOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        return DeleteFlowOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteGatewayOutcome MediaConnectClient::DeleteGateway(const DeleteGatewayRequest& request) const {
  AWS_OPERATION_GUARD(DeleteGateway);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGateway", "Required field: GatewayArn, is not set");
    return DeleteGatewayOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [GatewayArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteGateway",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteGatewayOutcome>(
      [&]() -> DeleteGatewayOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/gateways/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayArn());
        return DeleteGatewayOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRouterInputOutcome MediaConnectClient::DeleteRouterInput(const DeleteRouterInputRequest& request) const {
  AWS_OPERATION_GUARD(DeleteRouterInput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRouterInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRouterInput", "Required field: Arn, is not set");
    return DeleteRouterInputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Arn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteRouterInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteRouterInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteRouterInput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteRouterInputOutcome>(
      [&]() -> DeleteRouterInputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRouterInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInput/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
        return DeleteRouterInputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRouterNetworkInterfaceOutcome MediaConnectClient::DeleteRouterNetworkInterface(
    const DeleteRouterNetworkInterfaceRequest& request) const {
  AWS_OPERATION_GUARD(DeleteRouterNetworkInterface);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRouterNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRouterNetworkInterface", "Required field: Arn, is not set");
    return DeleteRouterNetworkInterfaceOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteRouterNetworkInterface, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteRouterNetworkInterface, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteRouterNetworkInterface",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteRouterNetworkInterfaceOutcome>(
      [&]() -> DeleteRouterNetworkInterfaceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRouterNetworkInterface, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerNetworkInterface/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
        return DeleteRouterNetworkInterfaceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRouterOutputOutcome MediaConnectClient::DeleteRouterOutput(const DeleteRouterOutputRequest& request) const {
  AWS_OPERATION_GUARD(DeleteRouterOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRouterOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRouterOutput", "Required field: Arn, is not set");
    return DeleteRouterOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Arn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteRouterOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteRouterOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteRouterOutput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteRouterOutputOutcome>(
      [&]() -> DeleteRouterOutputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRouterOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutput/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
        return DeleteRouterOutputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeregisterGatewayInstanceOutcome MediaConnectClient::DeregisterGatewayInstance(const DeregisterGatewayInstanceRequest& request) const {
  AWS_OPERATION_GUARD(DeregisterGatewayInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterGatewayInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayInstanceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeregisterGatewayInstance", "Required field: GatewayInstanceArn, is not set");
    return DeregisterGatewayInstanceOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayInstanceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeregisterGatewayInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeregisterGatewayInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeregisterGatewayInstance",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeregisterGatewayInstanceOutcome>(
      [&]() -> DeregisterGatewayInstanceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterGatewayInstance, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/gateway-instances/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayInstanceArn());
        return DeregisterGatewayInstanceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeBridgeOutcome MediaConnectClient::DescribeBridge(const DescribeBridgeRequest& request) const {
  AWS_OPERATION_GUARD(DescribeBridge);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBridge, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BridgeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBridge", "Required field: BridgeArn, is not set");
    return DescribeBridgeOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [BridgeArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeBridge, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeBridge, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeBridge",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeBridgeOutcome>(
      [&]() -> DescribeBridgeOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBridge, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBridgeArn());
        return DescribeBridgeOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeFlowOutcome MediaConnectClient::DescribeFlow(const DescribeFlowRequest& request) const {
  AWS_OPERATION_GUARD(DescribeFlow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeFlow", "Required field: FlowArn, is not set");
    return DescribeFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [FlowArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeFlow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeFlowOutcome>(
      [&]() -> DescribeFlowOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        return DescribeFlowOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeFlowSourceMetadataOutcome MediaConnectClient::DescribeFlowSourceMetadata(const DescribeFlowSourceMetadataRequest& request) const {
  AWS_OPERATION_GUARD(DescribeFlowSourceMetadata);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFlowSourceMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeFlowSourceMetadata", "Required field: FlowArn, is not set");
    return DescribeFlowSourceMetadataOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeFlowSourceMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeFlowSourceMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeFlowSourceMetadata",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeFlowSourceMetadataOutcome>(
      [&]() -> DescribeFlowSourceMetadataOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFlowSourceMetadata, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/source-metadata");
        return DescribeFlowSourceMetadataOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeFlowSourceThumbnailOutcome MediaConnectClient::DescribeFlowSourceThumbnail(
    const DescribeFlowSourceThumbnailRequest& request) const {
  AWS_OPERATION_GUARD(DescribeFlowSourceThumbnail);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFlowSourceThumbnail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeFlowSourceThumbnail", "Required field: FlowArn, is not set");
    return DescribeFlowSourceThumbnailOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeFlowSourceThumbnail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeFlowSourceThumbnail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeFlowSourceThumbnail",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeFlowSourceThumbnailOutcome>(
      [&]() -> DescribeFlowSourceThumbnailOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFlowSourceThumbnail, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/source-thumbnail");
        return DescribeFlowSourceThumbnailOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeGatewayOutcome MediaConnectClient::DescribeGateway(const DescribeGatewayRequest& request) const {
  AWS_OPERATION_GUARD(DescribeGateway);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeGateway", "Required field: GatewayArn, is not set");
    return DescribeGatewayOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [GatewayArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeGateway",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeGatewayOutcome>(
      [&]() -> DescribeGatewayOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/gateways/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayArn());
        return DescribeGatewayOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeGatewayInstanceOutcome MediaConnectClient::DescribeGatewayInstance(const DescribeGatewayInstanceRequest& request) const {
  AWS_OPERATION_GUARD(DescribeGatewayInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeGatewayInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayInstanceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeGatewayInstance", "Required field: GatewayInstanceArn, is not set");
    return DescribeGatewayInstanceOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayInstanceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeGatewayInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeGatewayInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeGatewayInstance",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeGatewayInstanceOutcome>(
      [&]() -> DescribeGatewayInstanceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeGatewayInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/gateway-instances/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayInstanceArn());
        return DescribeGatewayInstanceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeOfferingOutcome MediaConnectClient::DescribeOffering(const DescribeOfferingRequest& request) const {
  AWS_OPERATION_GUARD(DescribeOffering);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OfferingArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeOffering", "Required field: OfferingArn, is not set");
    return DescribeOfferingOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [OfferingArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeOffering, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeOffering, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeOffering",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeOfferingOutcome>(
      [&]() -> DescribeOfferingOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/offerings/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOfferingArn());
        return DescribeOfferingOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeReservationOutcome MediaConnectClient::DescribeReservation(const DescribeReservationRequest& request) const {
  AWS_OPERATION_GUARD(DescribeReservation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReservationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeReservation", "Required field: ReservationArn, is not set");
    return DescribeReservationOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ReservationArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeReservation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeReservation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeReservation",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeReservationOutcome>(
      [&]() -> DescribeReservationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/reservations/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReservationArn());
        return DescribeReservationOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRouterInputOutcome MediaConnectClient::GetRouterInput(const GetRouterInputRequest& request) const {
  AWS_OPERATION_GUARD(GetRouterInput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRouterInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRouterInput", "Required field: Arn, is not set");
    return GetRouterInputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Arn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetRouterInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRouterInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRouterInput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRouterInputOutcome>(
      [&]() -> GetRouterInputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRouterInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInput/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
        return GetRouterInputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRouterInputSourceMetadataOutcome MediaConnectClient::GetRouterInputSourceMetadata(
    const GetRouterInputSourceMetadataRequest& request) const {
  AWS_OPERATION_GUARD(GetRouterInputSourceMetadata);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRouterInputSourceMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRouterInputSourceMetadata", "Required field: Arn, is not set");
    return GetRouterInputSourceMetadataOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetRouterInputSourceMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRouterInputSourceMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRouterInputSourceMetadata",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRouterInputSourceMetadataOutcome>(
      [&]() -> GetRouterInputSourceMetadataOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRouterInputSourceMetadata, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInput/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/source-metadata");
        return GetRouterInputSourceMetadataOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRouterInputThumbnailOutcome MediaConnectClient::GetRouterInputThumbnail(const GetRouterInputThumbnailRequest& request) const {
  AWS_OPERATION_GUARD(GetRouterInputThumbnail);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRouterInputThumbnail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRouterInputThumbnail", "Required field: Arn, is not set");
    return GetRouterInputThumbnailOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetRouterInputThumbnail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRouterInputThumbnail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRouterInputThumbnail",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRouterInputThumbnailOutcome>(
      [&]() -> GetRouterInputThumbnailOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRouterInputThumbnail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInput/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/thumbnail");
        return GetRouterInputThumbnailOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRouterNetworkInterfaceOutcome MediaConnectClient::GetRouterNetworkInterface(const GetRouterNetworkInterfaceRequest& request) const {
  AWS_OPERATION_GUARD(GetRouterNetworkInterface);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRouterNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRouterNetworkInterface", "Required field: Arn, is not set");
    return GetRouterNetworkInterfaceOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetRouterNetworkInterface, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRouterNetworkInterface, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRouterNetworkInterface",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRouterNetworkInterfaceOutcome>(
      [&]() -> GetRouterNetworkInterfaceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRouterNetworkInterface, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerNetworkInterface/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
        return GetRouterNetworkInterfaceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRouterOutputOutcome MediaConnectClient::GetRouterOutput(const GetRouterOutputRequest& request) const {
  AWS_OPERATION_GUARD(GetRouterOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRouterOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRouterOutput", "Required field: Arn, is not set");
    return GetRouterOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Arn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetRouterOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRouterOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRouterOutput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRouterOutputOutcome>(
      [&]() -> GetRouterOutputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRouterOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutput/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
        return GetRouterOutputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GrantFlowEntitlementsOutcome MediaConnectClient::GrantFlowEntitlements(const GrantFlowEntitlementsRequest& request) const {
  AWS_OPERATION_GUARD(GrantFlowEntitlements);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GrantFlowEntitlements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GrantFlowEntitlements", "Required field: FlowArn, is not set");
    return GrantFlowEntitlementsOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GrantFlowEntitlements, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GrantFlowEntitlements, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GrantFlowEntitlements",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GrantFlowEntitlementsOutcome>(
      [&]() -> GrantFlowEntitlementsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GrantFlowEntitlements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/entitlements");
        return GrantFlowEntitlementsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBridgesOutcome MediaConnectClient::ListBridges(const ListBridgesRequest& request) const {
  AWS_OPERATION_GUARD(ListBridges);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBridges, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBridges, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBridges, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBridges",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBridgesOutcome>(
      [&]() -> ListBridgesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBridges, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges");
        return ListBridgesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEntitlementsOutcome MediaConnectClient::ListEntitlements(const ListEntitlementsRequest& request) const {
  AWS_OPERATION_GUARD(ListEntitlements);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEntitlements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListEntitlements, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEntitlements, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEntitlements",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEntitlementsOutcome>(
      [&]() -> ListEntitlementsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEntitlements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/entitlements");
        return ListEntitlementsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFlowsOutcome MediaConnectClient::ListFlows(const ListFlowsRequest& request) const {
  AWS_OPERATION_GUARD(ListFlows);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFlows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListFlows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFlows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFlows",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFlowsOutcome>(
      [&]() -> ListFlowsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFlows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows");
        return ListFlowsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListGatewayInstancesOutcome MediaConnectClient::ListGatewayInstances(const ListGatewayInstancesRequest& request) const {
  AWS_OPERATION_GUARD(ListGatewayInstances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGatewayInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListGatewayInstances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListGatewayInstances, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListGatewayInstances",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListGatewayInstancesOutcome>(
      [&]() -> ListGatewayInstancesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGatewayInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/gateway-instances");
        return ListGatewayInstancesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListGatewaysOutcome MediaConnectClient::ListGateways(const ListGatewaysRequest& request) const {
  AWS_OPERATION_GUARD(ListGateways);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListGateways, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListGateways, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListGateways",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListGatewaysOutcome>(
      [&]() -> ListGatewaysOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/gateways");
        return ListGatewaysOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListOfferingsOutcome MediaConnectClient::ListOfferings(const ListOfferingsRequest& request) const {
  AWS_OPERATION_GUARD(ListOfferings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListOfferings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListOfferings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListOfferings",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListOfferingsOutcome>(
      [&]() -> ListOfferingsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/offerings");
        return ListOfferingsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListReservationsOutcome MediaConnectClient::ListReservations(const ListReservationsRequest& request) const {
  AWS_OPERATION_GUARD(ListReservations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReservations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListReservations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListReservations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListReservations",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListReservationsOutcome>(
      [&]() -> ListReservationsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListReservations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/reservations");
        return ListReservationsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRouterInputsOutcome MediaConnectClient::ListRouterInputs(const ListRouterInputsRequest& request) const {
  AWS_OPERATION_GUARD(ListRouterInputs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRouterInputs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListRouterInputs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRouterInputs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRouterInputs",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRouterInputsOutcome>(
      [&]() -> ListRouterInputsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRouterInputs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInputs");
        return ListRouterInputsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRouterNetworkInterfacesOutcome MediaConnectClient::ListRouterNetworkInterfaces(
    const ListRouterNetworkInterfacesRequest& request) const {
  AWS_OPERATION_GUARD(ListRouterNetworkInterfaces);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRouterNetworkInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListRouterNetworkInterfaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRouterNetworkInterfaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRouterNetworkInterfaces",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRouterNetworkInterfacesOutcome>(
      [&]() -> ListRouterNetworkInterfacesOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRouterNetworkInterfaces, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerNetworkInterfaces");
        return ListRouterNetworkInterfacesOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRouterOutputsOutcome MediaConnectClient::ListRouterOutputs(const ListRouterOutputsRequest& request) const {
  AWS_OPERATION_GUARD(ListRouterOutputs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRouterOutputs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListRouterOutputs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRouterOutputs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRouterOutputs",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRouterOutputsOutcome>(
      [&]() -> ListRouterOutputsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRouterOutputs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutputs");
        return ListRouterOutputsOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForGlobalResourceOutcome MediaConnectClient::ListTagsForGlobalResource(const ListTagsForGlobalResourceRequest& request) const {
  AWS_OPERATION_GUARD(ListTagsForGlobalResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForGlobalResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForGlobalResource", "Required field: ResourceArn, is not set");
    return ListTagsForGlobalResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTagsForGlobalResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForGlobalResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForGlobalResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForGlobalResourceOutcome>(
      [&]() -> ListTagsForGlobalResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForGlobalResource, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tags/global/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        return ListTagsForGlobalResourceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome MediaConnectClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
      [&]() -> ListTagsForResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        return ListTagsForResourceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PurchaseOfferingOutcome MediaConnectClient::PurchaseOffering(const PurchaseOfferingRequest& request) const {
  AWS_OPERATION_GUARD(PurchaseOffering);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PurchaseOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OfferingArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PurchaseOffering", "Required field: OfferingArn, is not set");
    return PurchaseOfferingOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [OfferingArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PurchaseOffering, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PurchaseOffering, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PurchaseOffering",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PurchaseOfferingOutcome>(
      [&]() -> PurchaseOfferingOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PurchaseOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/offerings/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOfferingArn());
        return PurchaseOfferingOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RemoveBridgeOutputOutcome MediaConnectClient::RemoveBridgeOutput(const RemoveBridgeOutputRequest& request) const {
  AWS_OPERATION_GUARD(RemoveBridgeOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveBridgeOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RemoveBridgeOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RemoveBridgeOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RemoveBridgeOutput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RemoveBridgeOutputOutcome>(
      [&]() -> RemoveBridgeOutputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveBridgeOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBridgeArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/outputs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutputName());
        return RemoveBridgeOutputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RemoveBridgeSourceOutcome MediaConnectClient::RemoveBridgeSource(const RemoveBridgeSourceRequest& request) const {
  AWS_OPERATION_GUARD(RemoveBridgeSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveBridgeSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RemoveBridgeSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RemoveBridgeSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RemoveBridgeSource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RemoveBridgeSourceOutcome>(
      [&]() -> RemoveBridgeSourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveBridgeSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBridgeArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sources/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceName());
        return RemoveBridgeSourceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RemoveFlowMediaStreamOutcome MediaConnectClient::RemoveFlowMediaStream(const RemoveFlowMediaStreamRequest& request) const {
  AWS_OPERATION_GUARD(RemoveFlowMediaStream);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveFlowMediaStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RemoveFlowMediaStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RemoveFlowMediaStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RemoveFlowMediaStream",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RemoveFlowMediaStreamOutcome>(
      [&]() -> RemoveFlowMediaStreamOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveFlowMediaStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/mediaStreams/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMediaStreamName());
        return RemoveFlowMediaStreamOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RemoveFlowOutputOutcome MediaConnectClient::RemoveFlowOutput(const RemoveFlowOutputRequest& request) const {
  AWS_OPERATION_GUARD(RemoveFlowOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveFlowOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RemoveFlowOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RemoveFlowOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RemoveFlowOutput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RemoveFlowOutputOutcome>(
      [&]() -> RemoveFlowOutputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveFlowOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/outputs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutputArn());
        return RemoveFlowOutputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RemoveFlowSourceOutcome MediaConnectClient::RemoveFlowSource(const RemoveFlowSourceRequest& request) const {
  AWS_OPERATION_GUARD(RemoveFlowSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveFlowSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RemoveFlowSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RemoveFlowSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RemoveFlowSource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RemoveFlowSourceOutcome>(
      [&]() -> RemoveFlowSourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveFlowSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/source/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceArn());
        return RemoveFlowSourceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RemoveFlowVpcInterfaceOutcome MediaConnectClient::RemoveFlowVpcInterface(const RemoveFlowVpcInterfaceRequest& request) const {
  AWS_OPERATION_GUARD(RemoveFlowVpcInterface);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveFlowVpcInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RemoveFlowVpcInterface, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RemoveFlowVpcInterface, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RemoveFlowVpcInterface",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RemoveFlowVpcInterfaceOutcome>(
      [&]() -> RemoveFlowVpcInterfaceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveFlowVpcInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/vpcInterfaces/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVpcInterfaceName());
        return RemoveFlowVpcInterfaceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RestartRouterInputOutcome MediaConnectClient::RestartRouterInput(const RestartRouterInputRequest& request) const {
  AWS_OPERATION_GUARD(RestartRouterInput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestartRouterInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RestartRouterInput", "Required field: Arn, is not set");
    return RestartRouterInputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Arn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RestartRouterInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RestartRouterInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RestartRouterInput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RestartRouterInputOutcome>(
      [&]() -> RestartRouterInputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestartRouterInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInput/restart/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
        return RestartRouterInputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RestartRouterOutputOutcome MediaConnectClient::RestartRouterOutput(const RestartRouterOutputRequest& request) const {
  AWS_OPERATION_GUARD(RestartRouterOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestartRouterOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RestartRouterOutput", "Required field: Arn, is not set");
    return RestartRouterOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Arn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RestartRouterOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RestartRouterOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RestartRouterOutput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RestartRouterOutputOutcome>(
      [&]() -> RestartRouterOutputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestartRouterOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutput/restart/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
        return RestartRouterOutputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RevokeFlowEntitlementOutcome MediaConnectClient::RevokeFlowEntitlement(const RevokeFlowEntitlementRequest& request) const {
  AWS_OPERATION_GUARD(RevokeFlowEntitlement);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeFlowEntitlement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RevokeFlowEntitlement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RevokeFlowEntitlement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RevokeFlowEntitlement",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RevokeFlowEntitlementOutcome>(
      [&]() -> RevokeFlowEntitlementOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeFlowEntitlement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/entitlements/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntitlementArn());
        return RevokeFlowEntitlementOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartFlowOutcome MediaConnectClient::StartFlow(const StartFlowRequest& request) const {
  AWS_OPERATION_GUARD(StartFlow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartFlow", "Required field: FlowArn, is not set");
    return StartFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [FlowArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartFlow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartFlowOutcome>(
      [&]() -> StartFlowOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/start/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        return StartFlowOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartRouterInputOutcome MediaConnectClient::StartRouterInput(const StartRouterInputRequest& request) const {
  AWS_OPERATION_GUARD(StartRouterInput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartRouterInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartRouterInput", "Required field: Arn, is not set");
    return StartRouterInputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Arn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartRouterInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartRouterInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartRouterInput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartRouterInputOutcome>(
      [&]() -> StartRouterInputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartRouterInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInput/start/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
        return StartRouterInputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartRouterOutputOutcome MediaConnectClient::StartRouterOutput(const StartRouterOutputRequest& request) const {
  AWS_OPERATION_GUARD(StartRouterOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartRouterOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartRouterOutput", "Required field: Arn, is not set");
    return StartRouterOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Arn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartRouterOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartRouterOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartRouterOutput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartRouterOutputOutcome>(
      [&]() -> StartRouterOutputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartRouterOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutput/start/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
        return StartRouterOutputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopFlowOutcome MediaConnectClient::StopFlow(const StopFlowRequest& request) const {
  AWS_OPERATION_GUARD(StopFlow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopFlow", "Required field: FlowArn, is not set");
    return StopFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [FlowArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopFlow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopFlowOutcome>(
      [&]() -> StopFlowOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/stop/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        return StopFlowOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopRouterInputOutcome MediaConnectClient::StopRouterInput(const StopRouterInputRequest& request) const {
  AWS_OPERATION_GUARD(StopRouterInput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopRouterInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopRouterInput", "Required field: Arn, is not set");
    return StopRouterInputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Arn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopRouterInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopRouterInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopRouterInput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopRouterInputOutcome>(
      [&]() -> StopRouterInputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopRouterInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInput/stop/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
        return StopRouterInputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopRouterOutputOutcome MediaConnectClient::StopRouterOutput(const StopRouterOutputRequest& request) const {
  AWS_OPERATION_GUARD(StopRouterOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopRouterOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopRouterOutput", "Required field: Arn, is not set");
    return StopRouterOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Arn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopRouterOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopRouterOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopRouterOutput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopRouterOutputOutcome>(
      [&]() -> StopRouterOutputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopRouterOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutput/stop/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
        return StopRouterOutputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagGlobalResourceOutcome MediaConnectClient::TagGlobalResource(const TagGlobalResourceRequest& request) const {
  AWS_OPERATION_GUARD(TagGlobalResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagGlobalResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagGlobalResource", "Required field: ResourceArn, is not set");
    return TagGlobalResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagGlobalResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagGlobalResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagGlobalResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagGlobalResourceOutcome>(
      [&]() -> TagGlobalResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagGlobalResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tags/global/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        return TagGlobalResourceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome MediaConnectClient::TagResource(const TagResourceRequest& request) const {
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
      [&]() -> TagResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        return TagResourceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TakeRouterInputOutcome MediaConnectClient::TakeRouterInput(const TakeRouterInputRequest& request) const {
  AWS_OPERATION_GUARD(TakeRouterInput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TakeRouterInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RouterOutputArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TakeRouterInput", "Required field: RouterOutputArn, is not set");
    return TakeRouterInputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [RouterOutputArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TakeRouterInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TakeRouterInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TakeRouterInput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TakeRouterInputOutcome>(
      [&]() -> TakeRouterInputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TakeRouterInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutput/takeRouterInput/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRouterOutputArn());
        return TakeRouterInputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagGlobalResourceOutcome MediaConnectClient::UntagGlobalResource(const UntagGlobalResourceRequest& request) const {
  AWS_OPERATION_GUARD(UntagGlobalResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagGlobalResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagGlobalResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagGlobalResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagGlobalResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagGlobalResourceOutcome>(
      [&]() -> UntagGlobalResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagGlobalResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tags/global/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        return UntagGlobalResourceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome MediaConnectClient::UntagResource(const UntagResourceRequest& request) const {
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
      [&]() -> UntagResourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
        return UntagResourceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBridgeOutcome MediaConnectClient::UpdateBridge(const UpdateBridgeRequest& request) const {
  AWS_OPERATION_GUARD(UpdateBridge);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBridge, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BridgeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBridge", "Required field: BridgeArn, is not set");
    return UpdateBridgeOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [BridgeArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateBridge, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBridge, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBridge",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBridgeOutcome>(
      [&]() -> UpdateBridgeOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBridge, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBridgeArn());
        return UpdateBridgeOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBridgeOutputOutcome MediaConnectClient::UpdateBridgeOutput(const UpdateBridgeOutputRequest& request) const {
  AWS_OPERATION_GUARD(UpdateBridgeOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBridgeOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateBridgeOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBridgeOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBridgeOutput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBridgeOutputOutcome>(
      [&]() -> UpdateBridgeOutputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBridgeOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBridgeArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/outputs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutputName());
        return UpdateBridgeOutputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBridgeSourceOutcome MediaConnectClient::UpdateBridgeSource(const UpdateBridgeSourceRequest& request) const {
  AWS_OPERATION_GUARD(UpdateBridgeSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBridgeSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateBridgeSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBridgeSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBridgeSource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBridgeSourceOutcome>(
      [&]() -> UpdateBridgeSourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBridgeSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBridgeArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sources/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceName());
        return UpdateBridgeSourceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBridgeStateOutcome MediaConnectClient::UpdateBridgeState(const UpdateBridgeStateRequest& request) const {
  AWS_OPERATION_GUARD(UpdateBridgeState);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBridgeState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BridgeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBridgeState", "Required field: BridgeArn, is not set");
    return UpdateBridgeStateOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [BridgeArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateBridgeState, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBridgeState, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBridgeState",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBridgeStateOutcome>(
      [&]() -> UpdateBridgeStateOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBridgeState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/bridges/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBridgeArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/state");
        return UpdateBridgeStateOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateFlowOutcome MediaConnectClient::UpdateFlow(const UpdateFlowRequest& request) const {
  AWS_OPERATION_GUARD(UpdateFlow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFlow", "Required field: FlowArn, is not set");
    return UpdateFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [FlowArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateFlow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateFlowOutcome>(
      [&]() -> UpdateFlowOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        return UpdateFlowOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateFlowEntitlementOutcome MediaConnectClient::UpdateFlowEntitlement(const UpdateFlowEntitlementRequest& request) const {
  AWS_OPERATION_GUARD(UpdateFlowEntitlement);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFlowEntitlement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateFlowEntitlement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateFlowEntitlement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateFlowEntitlement",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateFlowEntitlementOutcome>(
      [&]() -> UpdateFlowEntitlementOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFlowEntitlement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/entitlements/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntitlementArn());
        return UpdateFlowEntitlementOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateFlowMediaStreamOutcome MediaConnectClient::UpdateFlowMediaStream(const UpdateFlowMediaStreamRequest& request) const {
  AWS_OPERATION_GUARD(UpdateFlowMediaStream);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFlowMediaStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateFlowMediaStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateFlowMediaStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateFlowMediaStream",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateFlowMediaStreamOutcome>(
      [&]() -> UpdateFlowMediaStreamOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFlowMediaStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/mediaStreams/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMediaStreamName());
        return UpdateFlowMediaStreamOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateFlowOutputOutcome MediaConnectClient::UpdateFlowOutput(const UpdateFlowOutputRequest& request) const {
  AWS_OPERATION_GUARD(UpdateFlowOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFlowOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateFlowOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateFlowOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateFlowOutput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateFlowOutputOutcome>(
      [&]() -> UpdateFlowOutputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFlowOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/outputs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutputArn());
        return UpdateFlowOutputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateFlowSourceOutcome MediaConnectClient::UpdateFlowSource(const UpdateFlowSourceRequest& request) const {
  AWS_OPERATION_GUARD(UpdateFlowSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFlowSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateFlowSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateFlowSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateFlowSource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateFlowSourceOutcome>(
      [&]() -> UpdateFlowSourceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFlowSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/source/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceArn());
        return UpdateFlowSourceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateGatewayInstanceOutcome MediaConnectClient::UpdateGatewayInstance(const UpdateGatewayInstanceRequest& request) const {
  AWS_OPERATION_GUARD(UpdateGatewayInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGatewayInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayInstanceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGatewayInstance", "Required field: GatewayInstanceArn, is not set");
    return UpdateGatewayInstanceOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayInstanceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateGatewayInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateGatewayInstance, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateGatewayInstance",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateGatewayInstanceOutcome>(
      [&]() -> UpdateGatewayInstanceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGatewayInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/gateway-instances/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayInstanceArn());
        return UpdateGatewayInstanceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRouterInputOutcome MediaConnectClient::UpdateRouterInput(const UpdateRouterInputRequest& request) const {
  AWS_OPERATION_GUARD(UpdateRouterInput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRouterInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRouterInput", "Required field: Arn, is not set");
    return UpdateRouterInputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Arn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateRouterInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateRouterInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateRouterInput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateRouterInputOutcome>(
      [&]() -> UpdateRouterInputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRouterInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerInput/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
        return UpdateRouterInputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRouterNetworkInterfaceOutcome MediaConnectClient::UpdateRouterNetworkInterface(
    const UpdateRouterNetworkInterfaceRequest& request) const {
  AWS_OPERATION_GUARD(UpdateRouterNetworkInterface);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRouterNetworkInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRouterNetworkInterface", "Required field: Arn, is not set");
    return UpdateRouterNetworkInterfaceOutcome(Aws::Client::AWSError<MediaConnectErrors>(
        MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateRouterNetworkInterface, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateRouterNetworkInterface, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateRouterNetworkInterface",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateRouterNetworkInterfaceOutcome>(
      [&]() -> UpdateRouterNetworkInterfaceOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRouterNetworkInterface, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerNetworkInterface/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
        return UpdateRouterNetworkInterfaceOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRouterOutputOutcome MediaConnectClient::UpdateRouterOutput(const UpdateRouterOutputRequest& request) const {
  AWS_OPERATION_GUARD(UpdateRouterOutput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRouterOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRouterOutput", "Required field: Arn, is not set");
    return UpdateRouterOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Arn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateRouterOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateRouterOutput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateRouterOutput",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateRouterOutputOutcome>(
      [&]() -> UpdateRouterOutputOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRouterOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1/routerOutput/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
        return UpdateRouterOutputOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
