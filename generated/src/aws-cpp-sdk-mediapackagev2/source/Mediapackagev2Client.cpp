/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/mediapackagev2/Mediapackagev2Client.h>
#include <aws/mediapackagev2/Mediapackagev2ErrorMarshaller.h>
#include <aws/mediapackagev2/Mediapackagev2EndpointProvider.h>
#include <aws/mediapackagev2/model/CreateChannelRequest.h>
#include <aws/mediapackagev2/model/CreateChannelGroupRequest.h>
#include <aws/mediapackagev2/model/CreateOriginEndpointRequest.h>
#include <aws/mediapackagev2/model/DeleteChannelRequest.h>
#include <aws/mediapackagev2/model/DeleteChannelGroupRequest.h>
#include <aws/mediapackagev2/model/DeleteChannelPolicyRequest.h>
#include <aws/mediapackagev2/model/DeleteOriginEndpointRequest.h>
#include <aws/mediapackagev2/model/DeleteOriginEndpointPolicyRequest.h>
#include <aws/mediapackagev2/model/GetChannelRequest.h>
#include <aws/mediapackagev2/model/GetChannelGroupRequest.h>
#include <aws/mediapackagev2/model/GetChannelPolicyRequest.h>
#include <aws/mediapackagev2/model/GetOriginEndpointRequest.h>
#include <aws/mediapackagev2/model/GetOriginEndpointPolicyRequest.h>
#include <aws/mediapackagev2/model/ListChannelGroupsRequest.h>
#include <aws/mediapackagev2/model/ListChannelsRequest.h>
#include <aws/mediapackagev2/model/ListOriginEndpointsRequest.h>
#include <aws/mediapackagev2/model/ListTagsForResourceRequest.h>
#include <aws/mediapackagev2/model/PutChannelPolicyRequest.h>
#include <aws/mediapackagev2/model/PutOriginEndpointPolicyRequest.h>
#include <aws/mediapackagev2/model/TagResourceRequest.h>
#include <aws/mediapackagev2/model/UntagResourceRequest.h>
#include <aws/mediapackagev2/model/UpdateChannelRequest.h>
#include <aws/mediapackagev2/model/UpdateChannelGroupRequest.h>
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

namespace Aws
{
  namespace mediapackagev2
  {
    const char SERVICE_NAME[] = "mediapackagev2";
    const char ALLOCATION_TAG[] = "Mediapackagev2Client";
  }
}
const char* Mediapackagev2Client::GetServiceName() {return SERVICE_NAME;}
const char* Mediapackagev2Client::GetAllocationTag() {return ALLOCATION_TAG;}

Mediapackagev2Client::Mediapackagev2Client(const mediapackagev2::Mediapackagev2ClientConfiguration& clientConfiguration,
                                           std::shared_ptr<Mediapackagev2EndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Mediapackagev2ErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Mediapackagev2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

Mediapackagev2Client::Mediapackagev2Client(const AWSCredentials& credentials,
                                           std::shared_ptr<Mediapackagev2EndpointProviderBase> endpointProvider,
                                           const mediapackagev2::Mediapackagev2ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Mediapackagev2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Mediapackagev2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

Mediapackagev2Client::Mediapackagev2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<Mediapackagev2EndpointProviderBase> endpointProvider,
                                           const mediapackagev2::Mediapackagev2ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Mediapackagev2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<Mediapackagev2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  Mediapackagev2Client::Mediapackagev2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Mediapackagev2ErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<Mediapackagev2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

Mediapackagev2Client::Mediapackagev2Client(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Mediapackagev2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<Mediapackagev2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

Mediapackagev2Client::Mediapackagev2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Mediapackagev2ErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<Mediapackagev2EndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
Mediapackagev2Client::~Mediapackagev2Client()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<Mediapackagev2EndpointProviderBase>& Mediapackagev2Client::accessEndpointProvider()
{
  return m_endpointProvider;
}

void Mediapackagev2Client::init(const mediapackagev2::Mediapackagev2ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("MediaPackageV2");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void Mediapackagev2Client::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateChannelOutcome Mediapackagev2Client::CreateChannel(const CreateChannelRequest& request) const
{
  AWS_OPERATION_GUARD(CreateChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChannel", "Required field: ChannelGroupName, is not set");
    return CreateChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateChannel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateChannelOutcome>(
    [&]()-> CreateChannelOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channel");
      return CreateChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateChannelGroupOutcome Mediapackagev2Client::CreateChannelGroup(const CreateChannelGroupRequest& request) const
{
  AWS_OPERATION_GUARD(CreateChannelGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateChannelGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateChannelGroupOutcome>(
    [&]()-> CreateChannelGroupOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup");
      return CreateChannelGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateOriginEndpointOutcome Mediapackagev2Client::CreateOriginEndpoint(const CreateOriginEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(CreateOriginEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateOriginEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateOriginEndpoint", "Required field: ChannelGroupName, is not set");
    return CreateOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateOriginEndpoint", "Required field: ChannelName, is not set");
    return CreateOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateOriginEndpoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateOriginEndpointOutcome>(
    [&]()-> CreateOriginEndpointOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateOriginEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint");
      return CreateOriginEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteChannelOutcome Mediapackagev2Client::DeleteChannel(const DeleteChannelRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelGroupName, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelName, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteChannel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteChannelOutcome>(
    [&]()-> DeleteChannelOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
      return DeleteChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteChannelGroupOutcome Mediapackagev2Client::DeleteChannelGroup(const DeleteChannelGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteChannelGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelGroup", "Required field: ChannelGroupName, is not set");
    return DeleteChannelGroupOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteChannelGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteChannelGroupOutcome>(
    [&]()-> DeleteChannelGroupOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
      return DeleteChannelGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteChannelPolicyOutcome Mediapackagev2Client::DeleteChannelPolicy(const DeleteChannelPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteChannelPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelPolicy", "Required field: ChannelGroupName, is not set");
    return DeleteChannelPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelPolicy", "Required field: ChannelName, is not set");
    return DeleteChannelPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteChannelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteChannelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteChannelPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteChannelPolicyOutcome>(
    [&]()-> DeleteChannelPolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
      return DeleteChannelPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteOriginEndpointOutcome Mediapackagev2Client::DeleteOriginEndpoint(const DeleteOriginEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteOriginEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteOriginEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOriginEndpoint", "Required field: ChannelGroupName, is not set");
    return DeleteOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOriginEndpoint", "Required field: ChannelName, is not set");
    return DeleteOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOriginEndpoint", "Required field: OriginEndpointName, is not set");
    return DeleteOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteOriginEndpoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteOriginEndpointOutcome>(
    [&]()-> DeleteOriginEndpointOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteOriginEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
      return DeleteOriginEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteOriginEndpointPolicyOutcome Mediapackagev2Client::DeleteOriginEndpointPolicy(const DeleteOriginEndpointPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteOriginEndpointPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteOriginEndpointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOriginEndpointPolicy", "Required field: ChannelGroupName, is not set");
    return DeleteOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOriginEndpointPolicy", "Required field: ChannelName, is not set");
    return DeleteOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOriginEndpointPolicy", "Required field: OriginEndpointName, is not set");
    return DeleteOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteOriginEndpointPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteOriginEndpointPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteOriginEndpointPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteOriginEndpointPolicyOutcome>(
    [&]()-> DeleteOriginEndpointPolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteOriginEndpointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
      return DeleteOriginEndpointPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetChannelOutcome Mediapackagev2Client::GetChannel(const GetChannelRequest& request) const
{
  AWS_OPERATION_GUARD(GetChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannel", "Required field: ChannelGroupName, is not set");
    return GetChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannel", "Required field: ChannelName, is not set");
    return GetChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetChannel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetChannelOutcome>(
    [&]()-> GetChannelOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
      return GetChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetChannelGroupOutcome Mediapackagev2Client::GetChannelGroup(const GetChannelGroupRequest& request) const
{
  AWS_OPERATION_GUARD(GetChannelGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelGroup", "Required field: ChannelGroupName, is not set");
    return GetChannelGroupOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetChannelGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetChannelGroupOutcome>(
    [&]()-> GetChannelGroupOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
      return GetChannelGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetChannelPolicyOutcome Mediapackagev2Client::GetChannelPolicy(const GetChannelPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetChannelPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelPolicy", "Required field: ChannelGroupName, is not set");
    return GetChannelPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelPolicy", "Required field: ChannelName, is not set");
    return GetChannelPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetChannelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetChannelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetChannelPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetChannelPolicyOutcome>(
    [&]()-> GetChannelPolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
      return GetChannelPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetOriginEndpointOutcome Mediapackagev2Client::GetOriginEndpoint(const GetOriginEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(GetOriginEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOriginEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOriginEndpoint", "Required field: ChannelGroupName, is not set");
    return GetOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOriginEndpoint", "Required field: ChannelName, is not set");
    return GetOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOriginEndpoint", "Required field: OriginEndpointName, is not set");
    return GetOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetOriginEndpoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetOriginEndpointOutcome>(
    [&]()-> GetOriginEndpointOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOriginEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
      return GetOriginEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetOriginEndpointPolicyOutcome Mediapackagev2Client::GetOriginEndpointPolicy(const GetOriginEndpointPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetOriginEndpointPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOriginEndpointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOriginEndpointPolicy", "Required field: ChannelGroupName, is not set");
    return GetOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOriginEndpointPolicy", "Required field: ChannelName, is not set");
    return GetOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOriginEndpointPolicy", "Required field: OriginEndpointName, is not set");
    return GetOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetOriginEndpointPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetOriginEndpointPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetOriginEndpointPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetOriginEndpointPolicyOutcome>(
    [&]()-> GetOriginEndpointPolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOriginEndpointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
      return GetOriginEndpointPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListChannelGroupsOutcome Mediapackagev2Client::ListChannelGroups(const ListChannelGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListChannelGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChannelGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListChannelGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListChannelGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListChannelGroups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListChannelGroupsOutcome>(
    [&]()-> ListChannelGroupsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListChannelGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup");
      return ListChannelGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListChannelsOutcome Mediapackagev2Client::ListChannels(const ListChannelsRequest& request) const
{
  AWS_OPERATION_GUARD(ListChannels);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannels", "Required field: ChannelGroupName, is not set");
    return ListChannelsOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListChannels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListChannels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListChannels",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListChannelsOutcome>(
    [&]()-> ListChannelsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channel");
      return ListChannelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListOriginEndpointsOutcome Mediapackagev2Client::ListOriginEndpoints(const ListOriginEndpointsRequest& request) const
{
  AWS_OPERATION_GUARD(ListOriginEndpoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOriginEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListOriginEndpoints", "Required field: ChannelGroupName, is not set");
    return ListOriginEndpointsOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListOriginEndpoints", "Required field: ChannelName, is not set");
    return ListOriginEndpointsOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListOriginEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListOriginEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListOriginEndpoints",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListOriginEndpointsOutcome>(
    [&]()-> ListOriginEndpointsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOriginEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint");
      return ListOriginEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome Mediapackagev2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutChannelPolicyOutcome Mediapackagev2Client::PutChannelPolicy(const PutChannelPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(PutChannelPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChannelPolicy", "Required field: ChannelGroupName, is not set");
    return PutChannelPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChannelPolicy", "Required field: ChannelName, is not set");
    return PutChannelPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutChannelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutChannelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutChannelPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutChannelPolicyOutcome>(
    [&]()-> PutChannelPolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
      return PutChannelPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutOriginEndpointPolicyOutcome Mediapackagev2Client::PutOriginEndpointPolicy(const PutOriginEndpointPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(PutOriginEndpointPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutOriginEndpointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutOriginEndpointPolicy", "Required field: ChannelGroupName, is not set");
    return PutOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutOriginEndpointPolicy", "Required field: ChannelName, is not set");
    return PutOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutOriginEndpointPolicy", "Required field: OriginEndpointName, is not set");
    return PutOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutOriginEndpointPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutOriginEndpointPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutOriginEndpointPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutOriginEndpointPolicyOutcome>(
    [&]()-> PutOriginEndpointPolicyOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutOriginEndpointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
      return PutOriginEndpointPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome Mediapackagev2Client::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome Mediapackagev2Client::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateChannelOutcome Mediapackagev2Client::UpdateChannel(const UpdateChannelRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelGroupName, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelName, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateChannel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateChannelOutcome>(
    [&]()-> UpdateChannelOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
      return UpdateChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateChannelGroupOutcome Mediapackagev2Client::UpdateChannelGroup(const UpdateChannelGroupRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateChannelGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannelGroup", "Required field: ChannelGroupName, is not set");
    return UpdateChannelGroupOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateChannelGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateChannelGroupOutcome>(
    [&]()-> UpdateChannelGroupOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
      return UpdateChannelGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateOriginEndpointOutcome Mediapackagev2Client::UpdateOriginEndpoint(const UpdateOriginEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateOriginEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateOriginEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateOriginEndpoint", "Required field: ChannelGroupName, is not set");
    return UpdateOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateOriginEndpoint", "Required field: ChannelName, is not set");
    return UpdateOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateOriginEndpoint", "Required field: OriginEndpointName, is not set");
    return UpdateOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateOriginEndpoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateOriginEndpointOutcome>(
    [&]()-> UpdateOriginEndpointOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateOriginEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
      return UpdateOriginEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

