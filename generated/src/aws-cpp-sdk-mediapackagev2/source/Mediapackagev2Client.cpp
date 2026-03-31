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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/harvestJob/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHarvestJobName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CancelHarvestJobOutcome(result.GetResultWithOwnership())
                            : CancelHarvestJobOutcome(std::move(result.GetError()));
}

CreateChannelOutcome Mediapackagev2Client::CreateChannel(const CreateChannelRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateChannel", "Required field: ChannelGroupName, is not set");
    return CreateChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ChannelGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateChannelOutcome(result.GetResultWithOwnership()) : CreateChannelOutcome(std::move(result.GetError()));
}

CreateChannelGroupOutcome Mediapackagev2Client::CreateChannelGroup(const CreateChannelGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateChannelGroupOutcome(result.GetResultWithOwnership())
                            : CreateChannelGroupOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/harvestJob");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateHarvestJobOutcome(result.GetResultWithOwnership())
                            : CreateHarvestJobOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOriginEndpointOutcome(result.GetResultWithOwnership())
                            : CreateOriginEndpointOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteChannelOutcome(result.GetResultWithOwnership()) : DeleteChannelOutcome(std::move(result.GetError()));
}

DeleteChannelGroupOutcome Mediapackagev2Client::DeleteChannelGroup(const DeleteChannelGroupRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelGroup", "Required field: ChannelGroupName, is not set");
    return DeleteChannelGroupOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteChannelGroupOutcome(result.GetResultWithOwnership())
                            : DeleteChannelGroupOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteChannelPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteChannelPolicyOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteOriginEndpointOutcome(result.GetResultWithOwnership())
                            : DeleteOriginEndpointOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteOriginEndpointPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteOriginEndpointPolicyOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetChannelOutcome(result.GetResultWithOwnership()) : GetChannelOutcome(std::move(result.GetError()));
}

GetChannelGroupOutcome Mediapackagev2Client::GetChannelGroup(const GetChannelGroupRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannelGroup", "Required field: ChannelGroupName, is not set");
    return GetChannelGroupOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ChannelGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetChannelGroupOutcome(result.GetResultWithOwnership())
                            : GetChannelGroupOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetChannelPolicyOutcome(result.GetResultWithOwnership())
                            : GetChannelPolicyOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/harvestJob/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHarvestJobName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetHarvestJobOutcome(result.GetResultWithOwnership()) : GetHarvestJobOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetOriginEndpointOutcome(result.GetResultWithOwnership())
                            : GetOriginEndpointOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetOriginEndpointPolicyOutcome(result.GetResultWithOwnership())
                            : GetOriginEndpointPolicyOutcome(std::move(result.GetError()));
}

ListChannelGroupsOutcome Mediapackagev2Client::ListChannelGroups(const ListChannelGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListChannelGroupsOutcome(result.GetResultWithOwnership())
                            : ListChannelGroupsOutcome(std::move(result.GetError()));
}

ListChannelsOutcome Mediapackagev2Client::ListChannels(const ListChannelsRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChannels", "Required field: ChannelGroupName, is not set");
    return ListChannelsOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ChannelGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListChannelsOutcome(result.GetResultWithOwnership()) : ListChannelsOutcome(std::move(result.GetError()));
}

ListHarvestJobsOutcome Mediapackagev2Client::ListHarvestJobs(const ListHarvestJobsRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListHarvestJobs", "Required field: ChannelGroupName, is not set");
    return ListHarvestJobsOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ChannelGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/harvestJob");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListHarvestJobsOutcome(result.GetResultWithOwnership())
                            : ListHarvestJobsOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListOriginEndpointsOutcome(result.GetResultWithOwnership())
                            : ListOriginEndpointsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome Mediapackagev2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutChannelPolicyOutcome(result.GetResultWithOwnership())
                            : PutChannelPolicyOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutOriginEndpointPolicyOutcome(result.GetResultWithOwnership())
                            : PutOriginEndpointPolicyOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reset");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetChannelStateOutcome(result.GetResultWithOwnership())
                            : ResetChannelStateOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reset");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetOriginEndpointStateOutcome(result.GetResultWithOwnership())
                            : ResetOriginEndpointStateOutcome(std::move(result.GetError()));
}

TagResourceOutcome Mediapackagev2Client::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateChannelOutcome(result.GetResultWithOwnership()) : UpdateChannelOutcome(std::move(result.GetError()));
}

UpdateChannelGroupOutcome Mediapackagev2Client::UpdateChannelGroup(const UpdateChannelGroupRequest& request) const {
  if (!request.ChannelGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannelGroup", "Required field: ChannelGroupName, is not set");
    return UpdateChannelGroupOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(
        Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateChannelGroupOutcome(result.GetResultWithOwnership())
                            : UpdateChannelGroupOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateOriginEndpointOutcome(result.GetResultWithOwnership())
                            : UpdateOriginEndpointOutcome(std::move(result.GetError()));
}
