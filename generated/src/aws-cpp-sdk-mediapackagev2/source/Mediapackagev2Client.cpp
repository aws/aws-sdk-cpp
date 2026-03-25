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
#include <aws/mediapackagev2/Mediapackagev2Client.h>
#include <aws/mediapackagev2/Mediapackagev2EndpointProvider.h>
#include <aws/mediapackagev2/Mediapackagev2ErrorMarshaller.h>
#include <aws/mediapackagev2/model/CancelHarvestJobRequest.h>
#include <aws/mediapackagev2/model/CreateChannelGroupRequest.h>
#include <aws/mediapackagev2/model/CreateChannelRequest.h>
#include <aws/mediapackagev2/model/CreateHarvestJobRequest.h>
#include <aws/mediapackagev2/model/CreateOriginEndpointRequest.h>
#include <aws/mediapackagev2/model/DeleteChannelGroupRequest.h>
#include <aws/mediapackagev2/model/DeleteChannelPolicyRequest.h>
#include <aws/mediapackagev2/model/DeleteChannelRequest.h>
#include <aws/mediapackagev2/model/DeleteOriginEndpointPolicyRequest.h>
#include <aws/mediapackagev2/model/DeleteOriginEndpointRequest.h>
#include <aws/mediapackagev2/model/GetChannelGroupRequest.h>
#include <aws/mediapackagev2/model/GetChannelPolicyRequest.h>
#include <aws/mediapackagev2/model/GetChannelRequest.h>
#include <aws/mediapackagev2/model/GetHarvestJobRequest.h>
#include <aws/mediapackagev2/model/GetOriginEndpointPolicyRequest.h>
#include <aws/mediapackagev2/model/GetOriginEndpointRequest.h>
#include <aws/mediapackagev2/model/ListChannelGroupsRequest.h>
#include <aws/mediapackagev2/model/ListChannelsRequest.h>
#include <aws/mediapackagev2/model/ListHarvestJobsRequest.h>
#include <aws/mediapackagev2/model/ListOriginEndpointsRequest.h>
#include <aws/mediapackagev2/model/ListTagsForResourceRequest.h>
#include <aws/mediapackagev2/model/PutChannelPolicyRequest.h>
#include <aws/mediapackagev2/model/PutOriginEndpointPolicyRequest.h>
#include <aws/mediapackagev2/model/ResetChannelStateRequest.h>
#include <aws/mediapackagev2/model/ResetOriginEndpointStateRequest.h>
#include <aws/mediapackagev2/model/TagResourceRequest.h>
#include <aws/mediapackagev2/model/UntagResourceRequest.h>
#include <aws/mediapackagev2/model/UpdateChannelGroupRequest.h>
#include <aws/mediapackagev2/model/UpdateChannelRequest.h>
#include <aws/mediapackagev2/model/UpdateOriginEndpointRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::mediapackagev2;
using namespace Aws::mediapackagev2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace mediapackagev2 {
const char SERVICE_NAME[] = "mediapackagev2";
const char ALLOCATION_TAG[] = "Mediapackagev2Client";
}  // namespace mediapackagev2
}  // namespace Aws
const char* Mediapackagev2Client::GetServiceName() { return SERVICE_NAME; }
const char* Mediapackagev2Client::GetAllocationTag() { return ALLOCATION_TAG; }

Mediapackagev2Client::Mediapackagev2Client(const mediapackagev2::Mediapackagev2ClientConfiguration& clientConfiguration,
                                           std::shared_ptr<Mediapackagev2EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Mediapackagev2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Mediapackagev2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Mediapackagev2Client::Mediapackagev2Client(const AWSCredentials& credentials,
                                           std::shared_ptr<Mediapackagev2EndpointProviderBase> endpointProvider,
                                           const mediapackagev2::Mediapackagev2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Mediapackagev2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Mediapackagev2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Mediapackagev2Client::Mediapackagev2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<Mediapackagev2EndpointProviderBase> endpointProvider,
                                           const mediapackagev2::Mediapackagev2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Mediapackagev2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Mediapackagev2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
Mediapackagev2Client::Mediapackagev2Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Mediapackagev2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Mediapackagev2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Mediapackagev2Client::Mediapackagev2Client(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Mediapackagev2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Mediapackagev2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Mediapackagev2Client::Mediapackagev2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Mediapackagev2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Mediapackagev2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
Mediapackagev2Client::~Mediapackagev2Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<Mediapackagev2EndpointProviderBase>& Mediapackagev2Client::accessEndpointProvider() { return m_endpointProvider; }

void Mediapackagev2Client::init(const mediapackagev2::Mediapackagev2ClientConfiguration& config) {
  AWSClient::SetServiceClientName("MediaPackageV2");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "mediapackagev2");
}

void Mediapackagev2Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
Mediapackagev2Client::InvokeOperationOutcome Mediapackagev2Client::InvokeServiceOperation(
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

CancelHarvestJobOutcome Mediapackagev2Client::CancelHarvestJob(const CancelHarvestJobRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelHarvestJob", "Required field: ChannelGroupName, is not set");
    return CancelHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelHarvestJob", "Required field: ChannelName, is not set");
    return CancelHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelHarvestJob", "Required field: OriginEndpointName, is not set");
    return CancelHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [OriginEndpointName]", false));
  }
  if (!request.HarvestJobNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelHarvestJob", "Required field: HarvestJobName, is not set");
    return CancelHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [HarvestJobName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CancelHarvestJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CancelHarvestJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CancelHarvestJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CancelHarvestJobOutcome>(
      [&]() -> CancelHarvestJobOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelHarvestJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/harvestJob/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHarvestJobName());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CancelHarvestJobOutcome(CancelHarvestJobResult(result.GetResultWithOwnership()))
                                  : CancelHarvestJobOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateChannelOutcome Mediapackagev2Client::CreateChannel(const CreateChannelRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateChannel", "Required field: ChannelGroupName, is not set");
    return CreateChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ChannelGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateChannel",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateChannelOutcome>(
      [&]() -> CreateChannelOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateChannelOutcome(CreateChannelResult(result.GetResultWithOwnership()))
                                  : CreateChannelOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateChannelGroupOutcome Mediapackagev2Client::CreateChannelGroup(const CreateChannelGroupRequest& request) const {
  AWS_OPERATION_GUARD(CreateChannelGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateChannelGroup",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateChannelGroupOutcome>(
      [&]() -> CreateChannelGroupOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateChannelGroupOutcome(CreateChannelGroupResult(result.GetResultWithOwnership()))
                                  : CreateChannelGroupOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateHarvestJobOutcome Mediapackagev2Client::CreateHarvestJob(const CreateHarvestJobRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateHarvestJob", "Required field: ChannelGroupName, is not set");
    return CreateHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateHarvestJob", "Required field: ChannelName, is not set");
    return CreateHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateHarvestJob", "Required field: OriginEndpointName, is not set");
    return CreateHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateHarvestJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateHarvestJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateHarvestJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateHarvestJobOutcome>(
      [&]() -> CreateHarvestJobOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateHarvestJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/harvestJob");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateHarvestJobOutcome(CreateHarvestJobResult(result.GetResultWithOwnership()))
                                  : CreateHarvestJobOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateOriginEndpointOutcome Mediapackagev2Client::CreateOriginEndpoint(const CreateOriginEndpointRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateOriginEndpoint", "Required field: ChannelGroupName, is not set");
    return CreateOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateOriginEndpoint", "Required field: ChannelName, is not set");
    return CreateOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateOriginEndpoint",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateOriginEndpointOutcome>(
      [&]() -> CreateOriginEndpointOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateOriginEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateOriginEndpointOutcome(CreateOriginEndpointResult(result.GetResultWithOwnership()))
                                  : CreateOriginEndpointOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteChannelOutcome Mediapackagev2Client::DeleteChannel(const DeleteChannelRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelGroupName, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelName, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteChannel",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteChannelOutcome>(
      [&]() -> DeleteChannelOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteChannelOutcome(DeleteChannelResult(result.GetResultWithOwnership()))
                                  : DeleteChannelOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteChannelGroupOutcome Mediapackagev2Client::DeleteChannelGroup(const DeleteChannelGroupRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelGroup", "Required field: ChannelGroupName, is not set");
    return DeleteChannelGroupOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteChannelGroup",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteChannelGroupOutcome>(
      [&]() -> DeleteChannelGroupOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteChannelGroupOutcome(DeleteChannelGroupResult(result.GetResultWithOwnership()))
                                  : DeleteChannelGroupOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteChannelPolicyOutcome Mediapackagev2Client::DeleteChannelPolicy(const DeleteChannelPolicyRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelPolicy", "Required field: ChannelGroupName, is not set");
    return DeleteChannelPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelPolicy", "Required field: ChannelName, is not set");
    return DeleteChannelPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteChannelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteChannelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteChannelPolicy",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteChannelPolicyOutcome>(
      [&]() -> DeleteChannelPolicyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteChannelPolicyOutcome(DeleteChannelPolicyResult(result.GetResultWithOwnership()))
                                  : DeleteChannelPolicyOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteOriginEndpointOutcome Mediapackagev2Client::DeleteOriginEndpoint(const DeleteOriginEndpointRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteOriginEndpoint", "Required field: ChannelGroupName, is not set");
    return DeleteOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteOriginEndpoint", "Required field: ChannelName, is not set");
    return DeleteOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteOriginEndpoint", "Required field: OriginEndpointName, is not set");
    return DeleteOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteOriginEndpoint",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteOriginEndpointOutcome>(
      [&]() -> DeleteOriginEndpointOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteOriginEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteOriginEndpointOutcome(DeleteOriginEndpointResult(result.GetResultWithOwnership()))
                                  : DeleteOriginEndpointOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteOriginEndpointPolicyOutcome Mediapackagev2Client::DeleteOriginEndpointPolicy(const DeleteOriginEndpointPolicyRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteOriginEndpointPolicy", "Required field: ChannelGroupName, is not set");
    return DeleteOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteOriginEndpointPolicy", "Required field: ChannelName, is not set");
    return DeleteOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteOriginEndpointPolicy", "Required field: OriginEndpointName, is not set");
    return DeleteOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteOriginEndpointPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteOriginEndpointPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteOriginEndpointPolicy",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteOriginEndpointPolicyOutcome>(
      [&]() -> DeleteOriginEndpointPolicyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteOriginEndpointPolicy, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteOriginEndpointPolicyOutcome(DeleteOriginEndpointPolicyResult(result.GetResultWithOwnership()))
                                  : DeleteOriginEndpointPolicyOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetChannelOutcome Mediapackagev2Client::GetChannel(const GetChannelRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannel", "Required field: ChannelGroupName, is not set");
    return GetChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannel", "Required field: ChannelName, is not set");
    return GetChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetChannel",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetChannelOutcome>(
      [&]() -> GetChannelOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetChannelOutcome(GetChannelResult(result.GetResultWithOwnership()))
                                  : GetChannelOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetChannelGroupOutcome Mediapackagev2Client::GetChannelGroup(const GetChannelGroupRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannelGroup", "Required field: ChannelGroupName, is not set");
    return GetChannelGroupOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ChannelGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetChannelGroup",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetChannelGroupOutcome>(
      [&]() -> GetChannelGroupOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetChannelGroupOutcome(GetChannelGroupResult(result.GetResultWithOwnership()))
                                  : GetChannelGroupOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetChannelPolicyOutcome Mediapackagev2Client::GetChannelPolicy(const GetChannelPolicyRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannelPolicy", "Required field: ChannelGroupName, is not set");
    return GetChannelPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannelPolicy", "Required field: ChannelName, is not set");
    return GetChannelPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetChannelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetChannelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetChannelPolicy",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetChannelPolicyOutcome>(
      [&]() -> GetChannelPolicyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetChannelPolicyOutcome(GetChannelPolicyResult(result.GetResultWithOwnership()))
                                  : GetChannelPolicyOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetHarvestJobOutcome Mediapackagev2Client::GetHarvestJob(const GetHarvestJobRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetHarvestJob", "Required field: ChannelGroupName, is not set");
    return GetHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetHarvestJob", "Required field: ChannelName, is not set");
    return GetHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetHarvestJob", "Required field: OriginEndpointName, is not set");
    return GetHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [OriginEndpointName]", false));
  }
  if (!request.HarvestJobNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetHarvestJob", "Required field: HarvestJobName, is not set");
    return GetHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [HarvestJobName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetHarvestJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetHarvestJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetHarvestJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetHarvestJobOutcome>(
      [&]() -> GetHarvestJobOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetHarvestJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/harvestJob/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHarvestJobName());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetHarvestJobOutcome(GetHarvestJobResult(result.GetResultWithOwnership()))
                                  : GetHarvestJobOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetOriginEndpointOutcome Mediapackagev2Client::GetOriginEndpoint(const GetOriginEndpointRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOriginEndpoint", "Required field: ChannelGroupName, is not set");
    return GetOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOriginEndpoint", "Required field: ChannelName, is not set");
    return GetOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOriginEndpoint", "Required field: OriginEndpointName, is not set");
    return GetOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetOriginEndpoint",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetOriginEndpointOutcome>(
      [&]() -> GetOriginEndpointOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOriginEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetOriginEndpointOutcome(GetOriginEndpointResult(result.GetResultWithOwnership()))
                                  : GetOriginEndpointOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetOriginEndpointPolicyOutcome Mediapackagev2Client::GetOriginEndpointPolicy(const GetOriginEndpointPolicyRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOriginEndpointPolicy", "Required field: ChannelGroupName, is not set");
    return GetOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOriginEndpointPolicy", "Required field: ChannelName, is not set");
    return GetOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOriginEndpointPolicy", "Required field: OriginEndpointName, is not set");
    return GetOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetOriginEndpointPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetOriginEndpointPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetOriginEndpointPolicy",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetOriginEndpointPolicyOutcome>(
      [&]() -> GetOriginEndpointPolicyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOriginEndpointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetOriginEndpointPolicyOutcome(GetOriginEndpointPolicyResult(result.GetResultWithOwnership()))
                                  : GetOriginEndpointPolicyOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListChannelGroupsOutcome Mediapackagev2Client::ListChannelGroups(const ListChannelGroupsRequest& request) const {
  AWS_OPERATION_GUARD(ListChannelGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChannelGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListChannelGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListChannelGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListChannelGroups",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListChannelGroupsOutcome>(
      [&]() -> ListChannelGroupsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListChannelGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListChannelGroupsOutcome(ListChannelGroupsResult(result.GetResultWithOwnership()))
                                  : ListChannelGroupsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListChannelsOutcome Mediapackagev2Client::ListChannels(const ListChannelsRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChannels", "Required field: ChannelGroupName, is not set");
    return ListChannelsOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ChannelGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListChannels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListChannels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListChannels",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListChannelsOutcome>(
      [&]() -> ListChannelsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListChannelsOutcome(ListChannelsResult(result.GetResultWithOwnership()))
                                  : ListChannelsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListHarvestJobsOutcome Mediapackagev2Client::ListHarvestJobs(const ListHarvestJobsRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListHarvestJobs", "Required field: ChannelGroupName, is not set");
    return ListHarvestJobsOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ChannelGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListHarvestJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListHarvestJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListHarvestJobs",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListHarvestJobsOutcome>(
      [&]() -> ListHarvestJobsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListHarvestJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/harvestJob");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListHarvestJobsOutcome(ListHarvestJobsResult(result.GetResultWithOwnership()))
                                  : ListHarvestJobsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListOriginEndpointsOutcome Mediapackagev2Client::ListOriginEndpoints(const ListOriginEndpointsRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListOriginEndpoints", "Required field: ChannelGroupName, is not set");
    return ListOriginEndpointsOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListOriginEndpoints", "Required field: ChannelName, is not set");
    return ListOriginEndpointsOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListOriginEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListOriginEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListOriginEndpoints",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListOriginEndpointsOutcome>(
      [&]() -> ListOriginEndpointsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOriginEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListOriginEndpointsOutcome(ListOriginEndpointsResult(result.GetResultWithOwnership()))
                                  : ListOriginEndpointsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome Mediapackagev2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListTagsForResourceOutcome(ListTagsForResourceResult(result.GetResultWithOwnership()))
                                  : ListTagsForResourceOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutChannelPolicyOutcome Mediapackagev2Client::PutChannelPolicy(const PutChannelPolicyRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutChannelPolicy", "Required field: ChannelGroupName, is not set");
    return PutChannelPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutChannelPolicy", "Required field: ChannelName, is not set");
    return PutChannelPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutChannelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutChannelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutChannelPolicy",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutChannelPolicyOutcome>(
      [&]() -> PutChannelPolicyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? PutChannelPolicyOutcome(PutChannelPolicyResult(result.GetResultWithOwnership()))
                                  : PutChannelPolicyOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutOriginEndpointPolicyOutcome Mediapackagev2Client::PutOriginEndpointPolicy(const PutOriginEndpointPolicyRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutOriginEndpointPolicy", "Required field: ChannelGroupName, is not set");
    return PutOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutOriginEndpointPolicy", "Required field: ChannelName, is not set");
    return PutOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutOriginEndpointPolicy", "Required field: OriginEndpointName, is not set");
    return PutOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutOriginEndpointPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutOriginEndpointPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutOriginEndpointPolicy",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutOriginEndpointPolicyOutcome>(
      [&]() -> PutOriginEndpointPolicyOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutOriginEndpointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? PutOriginEndpointPolicyOutcome(PutOriginEndpointPolicyResult(result.GetResultWithOwnership()))
                                  : PutOriginEndpointPolicyOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ResetChannelStateOutcome Mediapackagev2Client::ResetChannelState(const ResetChannelStateRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ResetChannelState", "Required field: ChannelGroupName, is not set");
    return ResetChannelStateOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ResetChannelState", "Required field: ChannelName, is not set");
    return ResetChannelStateOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ResetChannelState, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ResetChannelState, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ResetChannelState",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ResetChannelStateOutcome>(
      [&]() -> ResetChannelStateOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetChannelState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/reset");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ResetChannelStateOutcome(ResetChannelStateResult(result.GetResultWithOwnership()))
                                  : ResetChannelStateOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ResetOriginEndpointStateOutcome Mediapackagev2Client::ResetOriginEndpointState(const ResetOriginEndpointStateRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ResetOriginEndpointState", "Required field: ChannelGroupName, is not set");
    return ResetOriginEndpointStateOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ResetOriginEndpointState", "Required field: ChannelName, is not set");
    return ResetOriginEndpointStateOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ResetOriginEndpointState", "Required field: OriginEndpointName, is not set");
    return ResetOriginEndpointStateOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ResetOriginEndpointState, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ResetOriginEndpointState, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ResetOriginEndpointState",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ResetOriginEndpointStateOutcome>(
      [&]() -> ResetOriginEndpointStateOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetOriginEndpointState, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/reset");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ResetOriginEndpointStateOutcome(ResetOriginEndpointStateResult(result.GetResultWithOwnership()))
                                  : ResetOriginEndpointStateOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome Mediapackagev2Client::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
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
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return TagResourceOutcome(std::move(result));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome Mediapackagev2Client::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
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
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return UntagResourceOutcome(std::move(result));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateChannelOutcome Mediapackagev2Client::UpdateChannel(const UpdateChannelRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelGroupName, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelName, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateChannel",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateChannelOutcome>(
      [&]() -> UpdateChannelOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateChannelOutcome(UpdateChannelResult(result.GetResultWithOwnership()))
                                  : UpdateChannelOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateChannelGroupOutcome Mediapackagev2Client::UpdateChannelGroup(const UpdateChannelGroupRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannelGroup", "Required field: ChannelGroupName, is not set");
    return UpdateChannelGroupOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateChannelGroup",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateChannelGroupOutcome>(
      [&]() -> UpdateChannelGroupOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateChannelGroupOutcome(UpdateChannelGroupResult(result.GetResultWithOwnership()))
                                  : UpdateChannelGroupOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateOriginEndpointOutcome Mediapackagev2Client::UpdateOriginEndpoint(const UpdateOriginEndpointRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateOriginEndpoint", "Required field: ChannelGroupName, is not set");
    return UpdateOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateOriginEndpoint", "Required field: ChannelName, is not set");
    return UpdateOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateOriginEndpoint", "Required field: OriginEndpointName, is not set");
    return UpdateOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateOriginEndpoint",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateOriginEndpointOutcome>(
      [&]() -> UpdateOriginEndpointOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateOriginEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateOriginEndpointOutcome(UpdateOriginEndpointResult(result.GetResultWithOwnership()))
                                  : UpdateOriginEndpointOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
