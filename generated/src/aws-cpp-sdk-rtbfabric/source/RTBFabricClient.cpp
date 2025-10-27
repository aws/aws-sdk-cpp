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
#include <aws/rtbfabric/RTBFabricClient.h>
#include <aws/rtbfabric/RTBFabricEndpointProvider.h>
#include <aws/rtbfabric/RTBFabricErrorMarshaller.h>
#include <aws/rtbfabric/model/AcceptLinkRequest.h>
#include <aws/rtbfabric/model/CreateInboundExternalLinkRequest.h>
#include <aws/rtbfabric/model/CreateLinkRequest.h>
#include <aws/rtbfabric/model/CreateOutboundExternalLinkRequest.h>
#include <aws/rtbfabric/model/CreateRequesterGatewayRequest.h>
#include <aws/rtbfabric/model/CreateResponderGatewayRequest.h>
#include <aws/rtbfabric/model/DeleteInboundExternalLinkRequest.h>
#include <aws/rtbfabric/model/DeleteLinkRequest.h>
#include <aws/rtbfabric/model/DeleteOutboundExternalLinkRequest.h>
#include <aws/rtbfabric/model/DeleteRequesterGatewayRequest.h>
#include <aws/rtbfabric/model/DeleteResponderGatewayRequest.h>
#include <aws/rtbfabric/model/GetInboundExternalLinkRequest.h>
#include <aws/rtbfabric/model/GetLinkRequest.h>
#include <aws/rtbfabric/model/GetOutboundExternalLinkRequest.h>
#include <aws/rtbfabric/model/GetRequesterGatewayRequest.h>
#include <aws/rtbfabric/model/GetResponderGatewayRequest.h>
#include <aws/rtbfabric/model/ListLinksRequest.h>
#include <aws/rtbfabric/model/ListRequesterGatewaysRequest.h>
#include <aws/rtbfabric/model/ListResponderGatewaysRequest.h>
#include <aws/rtbfabric/model/ListTagsForResourceRequest.h>
#include <aws/rtbfabric/model/RejectLinkRequest.h>
#include <aws/rtbfabric/model/TagResourceRequest.h>
#include <aws/rtbfabric/model/UntagResourceRequest.h>
#include <aws/rtbfabric/model/UpdateLinkModuleFlowRequest.h>
#include <aws/rtbfabric/model/UpdateLinkRequest.h>
#include <aws/rtbfabric/model/UpdateRequesterGatewayRequest.h>
#include <aws/rtbfabric/model/UpdateResponderGatewayRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::RTBFabric;
using namespace Aws::RTBFabric::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace RTBFabric {
const char SERVICE_NAME[] = "rtbfabric";
const char ALLOCATION_TAG[] = "RTBFabricClient";
}  // namespace RTBFabric
}  // namespace Aws
const char* RTBFabricClient::GetServiceName() { return SERVICE_NAME; }
const char* RTBFabricClient::GetAllocationTag() { return ALLOCATION_TAG; }

RTBFabricClient::RTBFabricClient(const RTBFabric::RTBFabricClientConfiguration& clientConfiguration,
                                 std::shared_ptr<RTBFabricEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RTBFabricErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RTBFabricEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RTBFabricClient::RTBFabricClient(const AWSCredentials& credentials, std::shared_ptr<RTBFabricEndpointProviderBase> endpointProvider,
                                 const RTBFabric::RTBFabricClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RTBFabricErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RTBFabricEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RTBFabricClient::RTBFabricClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<RTBFabricEndpointProviderBase> endpointProvider,
                                 const RTBFabric::RTBFabricClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RTBFabricErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RTBFabricEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
RTBFabricClient::RTBFabricClient(const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RTBFabricErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RTBFabricEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RTBFabricClient::RTBFabricClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RTBFabricErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RTBFabricEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RTBFabricClient::RTBFabricClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RTBFabricErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RTBFabricEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
RTBFabricClient::~RTBFabricClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<RTBFabricEndpointProviderBase>& RTBFabricClient::accessEndpointProvider() { return m_endpointProvider; }

void RTBFabricClient::init(const RTBFabric::RTBFabricClientConfiguration& config) {
  AWSClient::SetServiceClientName("RTBFabric");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "rtbfabric");
}

void RTBFabricClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AcceptLinkOutcome RTBFabricClient::AcceptLink(const AcceptLinkRequest& request) const {
  AWS_OPERATION_GUARD(AcceptLink);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AcceptLink", "Required field: GatewayId, is not set");
    return AcceptLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [GatewayId]", false));
  }
  if (!request.LinkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AcceptLink", "Required field: LinkId, is not set");
    return AcceptLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [LinkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, AcceptLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AcceptLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AcceptLink",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AcceptLinkOutcome>(
      [&]() -> AcceptLinkOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/gateway/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/link/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/accept");
        return AcceptLinkOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateInboundExternalLinkOutcome RTBFabricClient::CreateInboundExternalLink(const CreateInboundExternalLinkRequest& request) const {
  AWS_OPERATION_GUARD(CreateInboundExternalLink);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInboundExternalLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateInboundExternalLink", "Required field: GatewayId, is not set");
    return CreateInboundExternalLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [GatewayId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateInboundExternalLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateInboundExternalLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateInboundExternalLink",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateInboundExternalLinkOutcome>(
      [&]() -> CreateInboundExternalLinkOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInboundExternalLink, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/responder-gateway/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/inbound-external-link");
        return CreateInboundExternalLinkOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateLinkOutcome RTBFabricClient::CreateLink(const CreateLinkRequest& request) const {
  AWS_OPERATION_GUARD(CreateLink);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateLink", "Required field: GatewayId, is not set");
    return CreateLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [GatewayId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateLink",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateLinkOutcome>(
      [&]() -> CreateLinkOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/gateway/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/create-link");
        return CreateLinkOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateOutboundExternalLinkOutcome RTBFabricClient::CreateOutboundExternalLink(const CreateOutboundExternalLinkRequest& request) const {
  AWS_OPERATION_GUARD(CreateOutboundExternalLink);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateOutboundExternalLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateOutboundExternalLink", "Required field: GatewayId, is not set");
    return CreateOutboundExternalLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [GatewayId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateOutboundExternalLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateOutboundExternalLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateOutboundExternalLink",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateOutboundExternalLinkOutcome>(
      [&]() -> CreateOutboundExternalLinkOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateOutboundExternalLink, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/requester-gateway/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/outbound-external-link");
        return CreateOutboundExternalLinkOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRequesterGatewayOutcome RTBFabricClient::CreateRequesterGateway(const CreateRequesterGatewayRequest& request) const {
  AWS_OPERATION_GUARD(CreateRequesterGateway);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRequesterGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateRequesterGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateRequesterGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateRequesterGateway",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateRequesterGatewayOutcome>(
      [&]() -> CreateRequesterGatewayOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRequesterGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/requester-gateway");
        return CreateRequesterGatewayOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateResponderGatewayOutcome RTBFabricClient::CreateResponderGateway(const CreateResponderGatewayRequest& request) const {
  AWS_OPERATION_GUARD(CreateResponderGateway);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateResponderGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateResponderGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateResponderGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateResponderGateway",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateResponderGatewayOutcome>(
      [&]() -> CreateResponderGatewayOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateResponderGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/responder-gateway");
        return CreateResponderGatewayOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteInboundExternalLinkOutcome RTBFabricClient::DeleteInboundExternalLink(const DeleteInboundExternalLinkRequest& request) const {
  AWS_OPERATION_GUARD(DeleteInboundExternalLink);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInboundExternalLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteInboundExternalLink", "Required field: GatewayId, is not set");
    return DeleteInboundExternalLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [GatewayId]", false));
  }
  if (!request.LinkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteInboundExternalLink", "Required field: LinkId, is not set");
    return DeleteInboundExternalLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [LinkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteInboundExternalLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteInboundExternalLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteInboundExternalLink",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteInboundExternalLinkOutcome>(
      [&]() -> DeleteInboundExternalLinkOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInboundExternalLink, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/responder-gateway/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/inbound-external-link/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
        return DeleteInboundExternalLinkOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteLinkOutcome RTBFabricClient::DeleteLink(const DeleteLinkRequest& request) const {
  AWS_OPERATION_GUARD(DeleteLink);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLink", "Required field: GatewayId, is not set");
    return DeleteLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [GatewayId]", false));
  }
  if (!request.LinkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLink", "Required field: LinkId, is not set");
    return DeleteLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [LinkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteLink",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteLinkOutcome>(
      [&]() -> DeleteLinkOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/gateway/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/link/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
        return DeleteLinkOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteOutboundExternalLinkOutcome RTBFabricClient::DeleteOutboundExternalLink(const DeleteOutboundExternalLinkRequest& request) const {
  AWS_OPERATION_GUARD(DeleteOutboundExternalLink);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteOutboundExternalLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteOutboundExternalLink", "Required field: GatewayId, is not set");
    return DeleteOutboundExternalLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [GatewayId]", false));
  }
  if (!request.LinkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteOutboundExternalLink", "Required field: LinkId, is not set");
    return DeleteOutboundExternalLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [LinkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteOutboundExternalLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteOutboundExternalLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteOutboundExternalLink",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteOutboundExternalLinkOutcome>(
      [&]() -> DeleteOutboundExternalLinkOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteOutboundExternalLink, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/requester-gateway/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/outbound-external-link/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
        return DeleteOutboundExternalLinkOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRequesterGatewayOutcome RTBFabricClient::DeleteRequesterGateway(const DeleteRequesterGatewayRequest& request) const {
  AWS_OPERATION_GUARD(DeleteRequesterGateway);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRequesterGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRequesterGateway", "Required field: GatewayId, is not set");
    return DeleteRequesterGatewayOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [GatewayId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteRequesterGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteRequesterGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteRequesterGateway",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteRequesterGatewayOutcome>(
      [&]() -> DeleteRequesterGatewayOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRequesterGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/requester-gateway/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
        return DeleteRequesterGatewayOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteResponderGatewayOutcome RTBFabricClient::DeleteResponderGateway(const DeleteResponderGatewayRequest& request) const {
  AWS_OPERATION_GUARD(DeleteResponderGateway);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResponderGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResponderGateway", "Required field: GatewayId, is not set");
    return DeleteResponderGatewayOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [GatewayId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteResponderGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteResponderGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteResponderGateway",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteResponderGatewayOutcome>(
      [&]() -> DeleteResponderGatewayOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResponderGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/responder-gateway/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
        return DeleteResponderGatewayOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetInboundExternalLinkOutcome RTBFabricClient::GetInboundExternalLink(const GetInboundExternalLinkRequest& request) const {
  AWS_OPERATION_GUARD(GetInboundExternalLink);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInboundExternalLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInboundExternalLink", "Required field: GatewayId, is not set");
    return GetInboundExternalLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [GatewayId]", false));
  }
  if (!request.LinkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInboundExternalLink", "Required field: LinkId, is not set");
    return GetInboundExternalLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [LinkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetInboundExternalLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetInboundExternalLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetInboundExternalLink",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetInboundExternalLinkOutcome>(
      [&]() -> GetInboundExternalLinkOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInboundExternalLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/responder-gateway/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/inbound-external-link/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
        return GetInboundExternalLinkOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetLinkOutcome RTBFabricClient::GetLink(const GetLinkRequest& request) const {
  AWS_OPERATION_GUARD(GetLink);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLink", "Required field: GatewayId, is not set");
    return GetLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [GatewayId]", false));
  }
  if (!request.LinkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLink", "Required field: LinkId, is not set");
    return GetLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [LinkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetLink",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetLinkOutcome>(
      [&]() -> GetLinkOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/gateway/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/link/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
        return GetLinkOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetOutboundExternalLinkOutcome RTBFabricClient::GetOutboundExternalLink(const GetOutboundExternalLinkRequest& request) const {
  AWS_OPERATION_GUARD(GetOutboundExternalLink);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOutboundExternalLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOutboundExternalLink", "Required field: GatewayId, is not set");
    return GetOutboundExternalLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [GatewayId]", false));
  }
  if (!request.LinkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOutboundExternalLink", "Required field: LinkId, is not set");
    return GetOutboundExternalLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [LinkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetOutboundExternalLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetOutboundExternalLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetOutboundExternalLink",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetOutboundExternalLinkOutcome>(
      [&]() -> GetOutboundExternalLinkOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOutboundExternalLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/requester-gateway/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/outbound-external-link/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
        return GetOutboundExternalLinkOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRequesterGatewayOutcome RTBFabricClient::GetRequesterGateway(const GetRequesterGatewayRequest& request) const {
  AWS_OPERATION_GUARD(GetRequesterGateway);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRequesterGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRequesterGateway", "Required field: GatewayId, is not set");
    return GetRequesterGatewayOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [GatewayId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetRequesterGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRequesterGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRequesterGateway",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRequesterGatewayOutcome>(
      [&]() -> GetRequesterGatewayOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRequesterGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/requester-gateway/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
        return GetRequesterGatewayOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetResponderGatewayOutcome RTBFabricClient::GetResponderGateway(const GetResponderGatewayRequest& request) const {
  AWS_OPERATION_GUARD(GetResponderGateway);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResponderGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResponderGateway", "Required field: GatewayId, is not set");
    return GetResponderGatewayOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [GatewayId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetResponderGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetResponderGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetResponderGateway",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetResponderGatewayOutcome>(
      [&]() -> GetResponderGatewayOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResponderGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/responder-gateway/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
        return GetResponderGatewayOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListLinksOutcome RTBFabricClient::ListLinks(const ListLinksRequest& request) const {
  AWS_OPERATION_GUARD(ListLinks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLinks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLinks", "Required field: GatewayId, is not set");
    return ListLinksOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [GatewayId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListLinks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListLinks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListLinks",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListLinksOutcome>(
      [&]() -> ListLinksOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLinks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/gateway/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/links/");
        return ListLinksOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRequesterGatewaysOutcome RTBFabricClient::ListRequesterGateways(const ListRequesterGatewaysRequest& request) const {
  AWS_OPERATION_GUARD(ListRequesterGateways);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRequesterGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListRequesterGateways, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRequesterGateways, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRequesterGateways",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRequesterGatewaysOutcome>(
      [&]() -> ListRequesterGatewaysOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRequesterGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/requester-gateways");
        return ListRequesterGatewaysOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListResponderGatewaysOutcome RTBFabricClient::ListResponderGateways(const ListResponderGatewaysRequest& request) const {
  AWS_OPERATION_GUARD(ListResponderGateways);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResponderGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListResponderGateways, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListResponderGateways, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListResponderGateways",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListResponderGatewaysOutcome>(
      [&]() -> ListResponderGatewaysOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResponderGateways, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/responder-gateways");
        return ListResponderGatewaysOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome RTBFabricClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

RejectLinkOutcome RTBFabricClient::RejectLink(const RejectLinkRequest& request) const {
  AWS_OPERATION_GUARD(RejectLink);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RejectLink", "Required field: GatewayId, is not set");
    return RejectLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [GatewayId]", false));
  }
  if (!request.LinkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RejectLink", "Required field: LinkId, is not set");
    return RejectLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [LinkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RejectLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RejectLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RejectLink",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RejectLinkOutcome>(
      [&]() -> RejectLinkOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RejectLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/gateway/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/link/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/reject");
        return RejectLinkOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome RTBFabricClient::TagResource(const TagResourceRequest& request) const {
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UntagResourceOutcome RTBFabricClient::UntagResource(const UntagResourceRequest& request) const {
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UpdateLinkOutcome RTBFabricClient::UpdateLink(const UpdateLinkRequest& request) const {
  AWS_OPERATION_GUARD(UpdateLink);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLink", "Required field: GatewayId, is not set");
    return UpdateLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [GatewayId]", false));
  }
  if (!request.LinkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLink", "Required field: LinkId, is not set");
    return UpdateLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [LinkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateLink, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateLink",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateLinkOutcome>(
      [&]() -> UpdateLinkOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLink, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/gateway/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/link/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
        return UpdateLinkOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateLinkModuleFlowOutcome RTBFabricClient::UpdateLinkModuleFlow(const UpdateLinkModuleFlowRequest& request) const {
  AWS_OPERATION_GUARD(UpdateLinkModuleFlow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLinkModuleFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLinkModuleFlow", "Required field: GatewayId, is not set");
    return UpdateLinkModuleFlowOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [GatewayId]", false));
  }
  if (!request.LinkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLinkModuleFlow", "Required field: LinkId, is not set");
    return UpdateLinkModuleFlowOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [LinkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateLinkModuleFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateLinkModuleFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateLinkModuleFlow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateLinkModuleFlowOutcome>(
      [&]() -> UpdateLinkModuleFlowOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLinkModuleFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/gateway/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/link/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/module-flow");
        return UpdateLinkModuleFlowOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRequesterGatewayOutcome RTBFabricClient::UpdateRequesterGateway(const UpdateRequesterGatewayRequest& request) const {
  AWS_OPERATION_GUARD(UpdateRequesterGateway);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRequesterGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRequesterGateway", "Required field: GatewayId, is not set");
    return UpdateRequesterGatewayOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [GatewayId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateRequesterGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateRequesterGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateRequesterGateway",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateRequesterGatewayOutcome>(
      [&]() -> UpdateRequesterGatewayOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRequesterGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/requester-gateway/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/update");
        return UpdateRequesterGatewayOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateResponderGatewayOutcome RTBFabricClient::UpdateResponderGateway(const UpdateResponderGatewayRequest& request) const {
  AWS_OPERATION_GUARD(UpdateResponderGateway);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateResponderGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResponderGateway", "Required field: GatewayId, is not set");
    return UpdateResponderGatewayOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [GatewayId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateResponderGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateResponderGateway, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateResponderGateway",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateResponderGatewayOutcome>(
      [&]() -> UpdateResponderGatewayOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateResponderGateway, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/responder-gateway/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/update");
        return UpdateResponderGatewayOutcome(
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
