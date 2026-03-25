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
RTBFabricClient::RTBFabricClient(const Aws::Client::ClientConfiguration& clientConfiguration)
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

RTBFabricClient::RTBFabricClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RTBFabricErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RTBFabricEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RTBFabricClient::RTBFabricClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
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
RTBFabricClient::InvokeOperationOutcome RTBFabricClient::InvokeServiceOperation(
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

AcceptLinkOutcome RTBFabricClient::AcceptLink(const AcceptLinkRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/link/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/accept");
  };

  return AcceptLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateInboundExternalLinkOutcome RTBFabricClient::CreateInboundExternalLink(const CreateInboundExternalLinkRequest& request) const {
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateInboundExternalLink", "Required field: GatewayId, is not set");
    return CreateInboundExternalLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [GatewayId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/responder-gateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/inbound-external-link");
  };

  return CreateInboundExternalLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLinkOutcome RTBFabricClient::CreateLink(const CreateLinkRequest& request) const {
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateLink", "Required field: GatewayId, is not set");
    return CreateLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [GatewayId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/create-link");
  };

  return CreateLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOutboundExternalLinkOutcome RTBFabricClient::CreateOutboundExternalLink(const CreateOutboundExternalLinkRequest& request) const {
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateOutboundExternalLink", "Required field: GatewayId, is not set");
    return CreateOutboundExternalLinkOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [GatewayId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/requester-gateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/outbound-external-link");
  };

  return CreateOutboundExternalLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRequesterGatewayOutcome RTBFabricClient::CreateRequesterGateway(const CreateRequesterGatewayRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/requester-gateway");
  };

  return CreateRequesterGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateResponderGatewayOutcome RTBFabricClient::CreateResponderGateway(const CreateResponderGatewayRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/responder-gateway");
  };

  return CreateResponderGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteInboundExternalLinkOutcome RTBFabricClient::DeleteInboundExternalLink(const DeleteInboundExternalLinkRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/responder-gateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/inbound-external-link/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
  };

  return DeleteInboundExternalLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteLinkOutcome RTBFabricClient::DeleteLink(const DeleteLinkRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/link/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
  };

  return DeleteLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteOutboundExternalLinkOutcome RTBFabricClient::DeleteOutboundExternalLink(const DeleteOutboundExternalLinkRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/requester-gateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/outbound-external-link/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
  };

  return DeleteOutboundExternalLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRequesterGatewayOutcome RTBFabricClient::DeleteRequesterGateway(const DeleteRequesterGatewayRequest& request) const {
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRequesterGateway", "Required field: GatewayId, is not set");
    return DeleteRequesterGatewayOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [GatewayId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/requester-gateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
  };

  return DeleteRequesterGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteResponderGatewayOutcome RTBFabricClient::DeleteResponderGateway(const DeleteResponderGatewayRequest& request) const {
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResponderGateway", "Required field: GatewayId, is not set");
    return DeleteResponderGatewayOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [GatewayId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/responder-gateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
  };

  return DeleteResponderGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetInboundExternalLinkOutcome RTBFabricClient::GetInboundExternalLink(const GetInboundExternalLinkRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/responder-gateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/inbound-external-link/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
  };

  return GetInboundExternalLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetLinkOutcome RTBFabricClient::GetLink(const GetLinkRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/link/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
  };

  return GetLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetOutboundExternalLinkOutcome RTBFabricClient::GetOutboundExternalLink(const GetOutboundExternalLinkRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/requester-gateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/outbound-external-link/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
  };

  return GetOutboundExternalLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRequesterGatewayOutcome RTBFabricClient::GetRequesterGateway(const GetRequesterGatewayRequest& request) const {
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRequesterGateway", "Required field: GatewayId, is not set");
    return GetRequesterGatewayOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [GatewayId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/requester-gateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
  };

  return GetRequesterGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetResponderGatewayOutcome RTBFabricClient::GetResponderGateway(const GetResponderGatewayRequest& request) const {
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResponderGateway", "Required field: GatewayId, is not set");
    return GetResponderGatewayOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [GatewayId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/responder-gateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
  };

  return GetResponderGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListLinksOutcome RTBFabricClient::ListLinks(const ListLinksRequest& request) const {
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLinks", "Required field: GatewayId, is not set");
    return ListLinksOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [GatewayId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/links/");
  };

  return ListLinksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRequesterGatewaysOutcome RTBFabricClient::ListRequesterGateways(const ListRequesterGatewaysRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/requester-gateways");
  };

  return ListRequesterGatewaysOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListResponderGatewaysOutcome RTBFabricClient::ListResponderGateways(const ListResponderGatewaysRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/responder-gateways");
  };

  return ListResponderGatewaysOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome RTBFabricClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

RejectLinkOutcome RTBFabricClient::RejectLink(const RejectLinkRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/link/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reject");
  };

  return RejectLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome RTBFabricClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome RTBFabricClient::UntagResource(const UntagResourceRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateLinkOutcome RTBFabricClient::UpdateLink(const UpdateLinkRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/link/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
  };

  return UpdateLinkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateLinkModuleFlowOutcome RTBFabricClient::UpdateLinkModuleFlow(const UpdateLinkModuleFlowRequest& request) const {
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/link/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLinkId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/module-flow");
  };

  return UpdateLinkModuleFlowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRequesterGatewayOutcome RTBFabricClient::UpdateRequesterGateway(const UpdateRequesterGatewayRequest& request) const {
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRequesterGateway", "Required field: GatewayId, is not set");
    return UpdateRequesterGatewayOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [GatewayId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/requester-gateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/update");
  };

  return UpdateRequesterGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateResponderGatewayOutcome RTBFabricClient::UpdateResponderGateway(const UpdateResponderGatewayRequest& request) const {
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResponderGateway", "Required field: GatewayId, is not set");
    return UpdateResponderGatewayOutcome(Aws::Client::AWSError<RTBFabricErrors>(RTBFabricErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [GatewayId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/responder-gateway/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/update");
  };

  return UpdateResponderGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
