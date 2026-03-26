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
#include <aws/mediatailor/MediaTailorClient.h>
#include <aws/mediatailor/MediaTailorEndpointProvider.h>
#include <aws/mediatailor/MediaTailorErrorMarshaller.h>
#include <aws/mediatailor/model/ConfigureLogsForChannelRequest.h>
#include <aws/mediatailor/model/ConfigureLogsForPlaybackConfigurationRequest.h>
#include <aws/mediatailor/model/CreateChannelRequest.h>
#include <aws/mediatailor/model/CreateLiveSourceRequest.h>
#include <aws/mediatailor/model/CreatePrefetchScheduleRequest.h>
#include <aws/mediatailor/model/CreateProgramRequest.h>
#include <aws/mediatailor/model/CreateSourceLocationRequest.h>
#include <aws/mediatailor/model/CreateVodSourceRequest.h>
#include <aws/mediatailor/model/DeleteChannelPolicyRequest.h>
#include <aws/mediatailor/model/DeleteChannelRequest.h>
#include <aws/mediatailor/model/DeleteLiveSourceRequest.h>
#include <aws/mediatailor/model/DeletePlaybackConfigurationRequest.h>
#include <aws/mediatailor/model/DeletePrefetchScheduleRequest.h>
#include <aws/mediatailor/model/DeleteProgramRequest.h>
#include <aws/mediatailor/model/DeleteSourceLocationRequest.h>
#include <aws/mediatailor/model/DeleteVodSourceRequest.h>
#include <aws/mediatailor/model/DescribeChannelRequest.h>
#include <aws/mediatailor/model/DescribeLiveSourceRequest.h>
#include <aws/mediatailor/model/DescribeProgramRequest.h>
#include <aws/mediatailor/model/DescribeSourceLocationRequest.h>
#include <aws/mediatailor/model/DescribeVodSourceRequest.h>
#include <aws/mediatailor/model/GetChannelPolicyRequest.h>
#include <aws/mediatailor/model/GetChannelScheduleRequest.h>
#include <aws/mediatailor/model/GetPlaybackConfigurationRequest.h>
#include <aws/mediatailor/model/GetPrefetchScheduleRequest.h>
#include <aws/mediatailor/model/ListAlertsRequest.h>
#include <aws/mediatailor/model/ListChannelsRequest.h>
#include <aws/mediatailor/model/ListLiveSourcesRequest.h>
#include <aws/mediatailor/model/ListPlaybackConfigurationsRequest.h>
#include <aws/mediatailor/model/ListPrefetchSchedulesRequest.h>
#include <aws/mediatailor/model/ListSourceLocationsRequest.h>
#include <aws/mediatailor/model/ListTagsForResourceRequest.h>
#include <aws/mediatailor/model/ListVodSourcesRequest.h>
#include <aws/mediatailor/model/PutChannelPolicyRequest.h>
#include <aws/mediatailor/model/PutPlaybackConfigurationRequest.h>
#include <aws/mediatailor/model/StartChannelRequest.h>
#include <aws/mediatailor/model/StopChannelRequest.h>
#include <aws/mediatailor/model/TagResourceRequest.h>
#include <aws/mediatailor/model/UntagResourceRequest.h>
#include <aws/mediatailor/model/UpdateChannelRequest.h>
#include <aws/mediatailor/model/UpdateLiveSourceRequest.h>
#include <aws/mediatailor/model/UpdateProgramRequest.h>
#include <aws/mediatailor/model/UpdateSourceLocationRequest.h>
#include <aws/mediatailor/model/UpdateVodSourceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaTailor;
using namespace Aws::MediaTailor::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MediaTailor {
const char SERVICE_NAME[] = "mediatailor";
const char ALLOCATION_TAG[] = "MediaTailorClient";
}  // namespace MediaTailor
}  // namespace Aws
const char* MediaTailorClient::GetServiceName() { return SERVICE_NAME; }
const char* MediaTailorClient::GetAllocationTag() { return ALLOCATION_TAG; }

MediaTailorClient::MediaTailorClient(const MediaTailor::MediaTailorClientConfiguration& clientConfiguration,
                                     std::shared_ptr<MediaTailorEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MediaTailorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaTailorClient::MediaTailorClient(const AWSCredentials& credentials, std::shared_ptr<MediaTailorEndpointProviderBase> endpointProvider,
                                     const MediaTailor::MediaTailorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MediaTailorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaTailorClient::MediaTailorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<MediaTailorEndpointProviderBase> endpointProvider,
                                     const MediaTailor::MediaTailorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MediaTailorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MediaTailorClient::MediaTailorClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MediaTailorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaTailorClient::MediaTailorClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MediaTailorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaTailorClient::MediaTailorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MediaTailorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MediaTailorClient::~MediaTailorClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MediaTailorEndpointProviderBase>& MediaTailorClient::accessEndpointProvider() { return m_endpointProvider; }

void MediaTailorClient::init(const MediaTailor::MediaTailorClientConfiguration& config) {
  AWSClient::SetServiceClientName("MediaTailor");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "mediatailor");
}

void MediaTailorClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MediaTailorClient::InvokeOperationOutcome MediaTailorClient::InvokeServiceOperation(
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

ConfigureLogsForChannelOutcome MediaTailorClient::ConfigureLogsForChannel(const ConfigureLogsForChannelRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configureLogs/channel");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? ConfigureLogsForChannelOutcome(result.GetResultWithOwnership())
                            : ConfigureLogsForChannelOutcome(std::move(result.GetError()));
}

ConfigureLogsForPlaybackConfigurationOutcome MediaTailorClient::ConfigureLogsForPlaybackConfiguration(
    const ConfigureLogsForPlaybackConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configureLogs/playbackConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? ConfigureLogsForPlaybackConfigurationOutcome(result.GetResultWithOwnership())
                            : ConfigureLogsForPlaybackConfigurationOutcome(std::move(result.GetError()));
}

CreateChannelOutcome MediaTailorClient::CreateChannel(const CreateChannelRequest& request) const {
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateChannel", "Required field: ChannelName, is not set");
    return CreateChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ChannelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateChannelOutcome(result.GetResultWithOwnership()) : CreateChannelOutcome(std::move(result.GetError()));
}

CreateLiveSourceOutcome MediaTailorClient::CreateLiveSource(const CreateLiveSourceRequest& request) const {
  if (!request.LiveSourceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateLiveSource", "Required field: LiveSourceName, is not set");
    return CreateLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [LiveSourceName]", false));
  }
  if (!request.SourceLocationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateLiveSource", "Required field: SourceLocationName, is not set");
    return CreateLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [SourceLocationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/liveSource/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLiveSourceName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLiveSourceOutcome(result.GetResultWithOwnership())
                            : CreateLiveSourceOutcome(std::move(result.GetError()));
}

CreatePrefetchScheduleOutcome MediaTailorClient::CreatePrefetchSchedule(const CreatePrefetchScheduleRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePrefetchSchedule", "Required field: Name, is not set");
    return CreatePrefetchScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Name]", false));
  }
  if (!request.PlaybackConfigurationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePrefetchSchedule", "Required field: PlaybackConfigurationName, is not set");
    return CreatePrefetchScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(
        MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlaybackConfigurationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prefetchSchedule/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPlaybackConfigurationName());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePrefetchScheduleOutcome(result.GetResultWithOwnership())
                            : CreatePrefetchScheduleOutcome(std::move(result.GetError()));
}

CreateProgramOutcome MediaTailorClient::CreateProgram(const CreateProgramRequest& request) const {
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateProgram", "Required field: ChannelName, is not set");
    return CreateProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ChannelName]", false));
  }
  if (!request.ProgramNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateProgram", "Required field: ProgramName, is not set");
    return CreateProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ProgramName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/program/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProgramName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProgramOutcome(result.GetResultWithOwnership()) : CreateProgramOutcome(std::move(result.GetError()));
}

CreateSourceLocationOutcome MediaTailorClient::CreateSourceLocation(const CreateSourceLocationRequest& request) const {
  if (!request.SourceLocationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSourceLocation", "Required field: SourceLocationName, is not set");
    return CreateSourceLocationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [SourceLocationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSourceLocationOutcome(result.GetResultWithOwnership())
                            : CreateSourceLocationOutcome(std::move(result.GetError()));
}

CreateVodSourceOutcome MediaTailorClient::CreateVodSource(const CreateVodSourceRequest& request) const {
  if (!request.SourceLocationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateVodSource", "Required field: SourceLocationName, is not set");
    return CreateVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SourceLocationName]", false));
  }
  if (!request.VodSourceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateVodSource", "Required field: VodSourceName, is not set");
    return CreateVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [VodSourceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vodSource/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVodSourceName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVodSourceOutcome(result.GetResultWithOwnership())
                            : CreateVodSourceOutcome(std::move(result.GetError()));
}

DeleteChannelOutcome MediaTailorClient::DeleteChannel(const DeleteChannelRequest& request) const {
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelName, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ChannelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteChannelOutcome(result.GetResultWithOwnership()) : DeleteChannelOutcome(std::move(result.GetError()));
}

DeleteChannelPolicyOutcome MediaTailorClient::DeleteChannelPolicy(const DeleteChannelPolicyRequest& request) const {
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelPolicy", "Required field: ChannelName, is not set");
    return DeleteChannelPolicyOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ChannelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteChannelPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteChannelPolicyOutcome(std::move(result.GetError()));
}

DeleteLiveSourceOutcome MediaTailorClient::DeleteLiveSource(const DeleteLiveSourceRequest& request) const {
  if (!request.LiveSourceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLiveSource", "Required field: LiveSourceName, is not set");
    return DeleteLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [LiveSourceName]", false));
  }
  if (!request.SourceLocationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLiveSource", "Required field: SourceLocationName, is not set");
    return DeleteLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [SourceLocationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/liveSource/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLiveSourceName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteLiveSourceOutcome(result.GetResultWithOwnership())
                            : DeleteLiveSourceOutcome(std::move(result.GetError()));
}

DeletePlaybackConfigurationOutcome MediaTailorClient::DeletePlaybackConfiguration(const DeletePlaybackConfigurationRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePlaybackConfiguration", "Required field: Name, is not set");
    return DeletePlaybackConfigurationOutcome(Aws::Client::AWSError<MediaTailorErrors>(
        MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/playbackConfiguration/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePlaybackConfigurationOutcome(result.GetResultWithOwnership())
                            : DeletePlaybackConfigurationOutcome(std::move(result.GetError()));
}

DeletePrefetchScheduleOutcome MediaTailorClient::DeletePrefetchSchedule(const DeletePrefetchScheduleRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePrefetchSchedule", "Required field: Name, is not set");
    return DeletePrefetchScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Name]", false));
  }
  if (!request.PlaybackConfigurationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePrefetchSchedule", "Required field: PlaybackConfigurationName, is not set");
    return DeletePrefetchScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(
        MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlaybackConfigurationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prefetchSchedule/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPlaybackConfigurationName());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePrefetchScheduleOutcome(result.GetResultWithOwnership())
                            : DeletePrefetchScheduleOutcome(std::move(result.GetError()));
}

DeleteProgramOutcome MediaTailorClient::DeleteProgram(const DeleteProgramRequest& request) const {
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProgram", "Required field: ChannelName, is not set");
    return DeleteProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ChannelName]", false));
  }
  if (!request.ProgramNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProgram", "Required field: ProgramName, is not set");
    return DeleteProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ProgramName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/program/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProgramName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteProgramOutcome(result.GetResultWithOwnership()) : DeleteProgramOutcome(std::move(result.GetError()));
}

DeleteSourceLocationOutcome MediaTailorClient::DeleteSourceLocation(const DeleteSourceLocationRequest& request) const {
  if (!request.SourceLocationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSourceLocation", "Required field: SourceLocationName, is not set");
    return DeleteSourceLocationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [SourceLocationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSourceLocationOutcome(result.GetResultWithOwnership())
                            : DeleteSourceLocationOutcome(std::move(result.GetError()));
}

DeleteVodSourceOutcome MediaTailorClient::DeleteVodSource(const DeleteVodSourceRequest& request) const {
  if (!request.SourceLocationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVodSource", "Required field: SourceLocationName, is not set");
    return DeleteVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SourceLocationName]", false));
  }
  if (!request.VodSourceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVodSource", "Required field: VodSourceName, is not set");
    return DeleteVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [VodSourceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vodSource/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVodSourceName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteVodSourceOutcome(result.GetResultWithOwnership())
                            : DeleteVodSourceOutcome(std::move(result.GetError()));
}

DescribeChannelOutcome MediaTailorClient::DescribeChannel(const DescribeChannelRequest& request) const {
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannel", "Required field: ChannelName, is not set");
    return DescribeChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ChannelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeChannelOutcome(result.GetResultWithOwnership())
                            : DescribeChannelOutcome(std::move(result.GetError()));
}

DescribeLiveSourceOutcome MediaTailorClient::DescribeLiveSource(const DescribeLiveSourceRequest& request) const {
  if (!request.LiveSourceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeLiveSource", "Required field: LiveSourceName, is not set");
    return DescribeLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [LiveSourceName]", false));
  }
  if (!request.SourceLocationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeLiveSource", "Required field: SourceLocationName, is not set");
    return DescribeLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [SourceLocationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/liveSource/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLiveSourceName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeLiveSourceOutcome(result.GetResultWithOwnership())
                            : DescribeLiveSourceOutcome(std::move(result.GetError()));
}

DescribeProgramOutcome MediaTailorClient::DescribeProgram(const DescribeProgramRequest& request) const {
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeProgram", "Required field: ChannelName, is not set");
    return DescribeProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ChannelName]", false));
  }
  if (!request.ProgramNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeProgram", "Required field: ProgramName, is not set");
    return DescribeProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ProgramName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/program/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProgramName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeProgramOutcome(result.GetResultWithOwnership())
                            : DescribeProgramOutcome(std::move(result.GetError()));
}

DescribeSourceLocationOutcome MediaTailorClient::DescribeSourceLocation(const DescribeSourceLocationRequest& request) const {
  if (!request.SourceLocationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSourceLocation", "Required field: SourceLocationName, is not set");
    return DescribeSourceLocationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [SourceLocationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeSourceLocationOutcome(result.GetResultWithOwnership())
                            : DescribeSourceLocationOutcome(std::move(result.GetError()));
}

DescribeVodSourceOutcome MediaTailorClient::DescribeVodSource(const DescribeVodSourceRequest& request) const {
  if (!request.SourceLocationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeVodSource", "Required field: SourceLocationName, is not set");
    return DescribeVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [SourceLocationName]", false));
  }
  if (!request.VodSourceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeVodSource", "Required field: VodSourceName, is not set");
    return DescribeVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [VodSourceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vodSource/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVodSourceName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeVodSourceOutcome(result.GetResultWithOwnership())
                            : DescribeVodSourceOutcome(std::move(result.GetError()));
}

GetChannelPolicyOutcome MediaTailorClient::GetChannelPolicy(const GetChannelPolicyRequest& request) const {
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannelPolicy", "Required field: ChannelName, is not set");
    return GetChannelPolicyOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ChannelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetChannelPolicyOutcome(result.GetResultWithOwnership())
                            : GetChannelPolicyOutcome(std::move(result.GetError()));
}

GetChannelScheduleOutcome MediaTailorClient::GetChannelSchedule(const GetChannelScheduleRequest& request) const {
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannelSchedule", "Required field: ChannelName, is not set");
    return GetChannelScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ChannelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schedule");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetChannelScheduleOutcome(result.GetResultWithOwnership())
                            : GetChannelScheduleOutcome(std::move(result.GetError()));
}

GetPlaybackConfigurationOutcome MediaTailorClient::GetPlaybackConfiguration(const GetPlaybackConfigurationRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPlaybackConfiguration", "Required field: Name, is not set");
    return GetPlaybackConfigurationOutcome(Aws::Client::AWSError<MediaTailorErrors>(
        MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/playbackConfiguration/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPlaybackConfigurationOutcome(result.GetResultWithOwnership())
                            : GetPlaybackConfigurationOutcome(std::move(result.GetError()));
}

GetPrefetchScheduleOutcome MediaTailorClient::GetPrefetchSchedule(const GetPrefetchScheduleRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPrefetchSchedule", "Required field: Name, is not set");
    return GetPrefetchScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Name]", false));
  }
  if (!request.PlaybackConfigurationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPrefetchSchedule", "Required field: PlaybackConfigurationName, is not set");
    return GetPrefetchScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(
        MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlaybackConfigurationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prefetchSchedule/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPlaybackConfigurationName());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPrefetchScheduleOutcome(result.GetResultWithOwnership())
                            : GetPrefetchScheduleOutcome(std::move(result.GetError()));
}

ListAlertsOutcome MediaTailorClient::ListAlerts(const ListAlertsRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAlerts", "Required field: ResourceArn, is not set");
    return ListAlertsOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/alerts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAlertsOutcome(result.GetResultWithOwnership()) : ListAlertsOutcome(std::move(result.GetError()));
}

ListChannelsOutcome MediaTailorClient::ListChannels(const ListChannelsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListChannelsOutcome(result.GetResultWithOwnership()) : ListChannelsOutcome(std::move(result.GetError()));
}

ListLiveSourcesOutcome MediaTailorClient::ListLiveSources(const ListLiveSourcesRequest& request) const {
  if (!request.SourceLocationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLiveSources", "Required field: SourceLocationName, is not set");
    return ListLiveSourcesOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SourceLocationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/liveSources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListLiveSourcesOutcome(result.GetResultWithOwnership())
                            : ListLiveSourcesOutcome(std::move(result.GetError()));
}

ListPlaybackConfigurationsOutcome MediaTailorClient::ListPlaybackConfigurations(const ListPlaybackConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/playbackConfigurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPlaybackConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListPlaybackConfigurationsOutcome(std::move(result.GetError()));
}

ListPrefetchSchedulesOutcome MediaTailorClient::ListPrefetchSchedules(const ListPrefetchSchedulesRequest& request) const {
  if (!request.PlaybackConfigurationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPrefetchSchedules", "Required field: PlaybackConfigurationName, is not set");
    return ListPrefetchSchedulesOutcome(Aws::Client::AWSError<MediaTailorErrors>(
        MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlaybackConfigurationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prefetchSchedule/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPlaybackConfigurationName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPrefetchSchedulesOutcome(result.GetResultWithOwnership())
                            : ListPrefetchSchedulesOutcome(std::move(result.GetError()));
}

ListSourceLocationsOutcome MediaTailorClient::ListSourceLocations(const ListSourceLocationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSourceLocationsOutcome(result.GetResultWithOwnership())
                            : ListSourceLocationsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome MediaTailorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

ListVodSourcesOutcome MediaTailorClient::ListVodSources(const ListVodSourcesRequest& request) const {
  if (!request.SourceLocationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListVodSources", "Required field: SourceLocationName, is not set");
    return ListVodSourcesOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SourceLocationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vodSources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListVodSourcesOutcome(result.GetResultWithOwnership()) : ListVodSourcesOutcome(std::move(result.GetError()));
}

PutChannelPolicyOutcome MediaTailorClient::PutChannelPolicy(const PutChannelPolicyRequest& request) const {
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutChannelPolicy", "Required field: ChannelName, is not set");
    return PutChannelPolicyOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ChannelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutChannelPolicyOutcome(result.GetResultWithOwnership())
                            : PutChannelPolicyOutcome(std::move(result.GetError()));
}

PutPlaybackConfigurationOutcome MediaTailorClient::PutPlaybackConfiguration(const PutPlaybackConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/playbackConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutPlaybackConfigurationOutcome(result.GetResultWithOwnership())
                            : PutPlaybackConfigurationOutcome(std::move(result.GetError()));
}

StartChannelOutcome MediaTailorClient::StartChannel(const StartChannelRequest& request) const {
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartChannel", "Required field: ChannelName, is not set");
    return StartChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ChannelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StartChannelOutcome(result.GetResultWithOwnership()) : StartChannelOutcome(std::move(result.GetError()));
}

StopChannelOutcome MediaTailorClient::StopChannel(const StopChannelRequest& request) const {
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopChannel", "Required field: ChannelName, is not set");
    return StopChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ChannelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StopChannelOutcome(result.GetResultWithOwnership()) : StopChannelOutcome(std::move(result.GetError()));
}

TagResourceOutcome MediaTailorClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UntagResourceOutcome MediaTailorClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UpdateChannelOutcome MediaTailorClient::UpdateChannel(const UpdateChannelRequest& request) const {
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelName, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ChannelName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateChannelOutcome(result.GetResultWithOwnership()) : UpdateChannelOutcome(std::move(result.GetError()));
}

UpdateLiveSourceOutcome MediaTailorClient::UpdateLiveSource(const UpdateLiveSourceRequest& request) const {
  if (!request.LiveSourceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLiveSource", "Required field: LiveSourceName, is not set");
    return UpdateLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [LiveSourceName]", false));
  }
  if (!request.SourceLocationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLiveSource", "Required field: SourceLocationName, is not set");
    return UpdateLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [SourceLocationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/liveSource/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLiveSourceName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateLiveSourceOutcome(result.GetResultWithOwnership())
                            : UpdateLiveSourceOutcome(std::move(result.GetError()));
}

UpdateProgramOutcome MediaTailorClient::UpdateProgram(const UpdateProgramRequest& request) const {
  if (!request.ChannelNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProgram", "Required field: ChannelName, is not set");
    return UpdateProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ChannelName]", false));
  }
  if (!request.ProgramNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProgram", "Required field: ProgramName, is not set");
    return UpdateProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ProgramName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/program/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProgramName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateProgramOutcome(result.GetResultWithOwnership()) : UpdateProgramOutcome(std::move(result.GetError()));
}

UpdateSourceLocationOutcome MediaTailorClient::UpdateSourceLocation(const UpdateSourceLocationRequest& request) const {
  if (!request.SourceLocationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSourceLocation", "Required field: SourceLocationName, is not set");
    return UpdateSourceLocationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [SourceLocationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateSourceLocationOutcome(result.GetResultWithOwnership())
                            : UpdateSourceLocationOutcome(std::move(result.GetError()));
}

UpdateVodSourceOutcome MediaTailorClient::UpdateVodSource(const UpdateVodSourceRequest& request) const {
  if (!request.SourceLocationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVodSource", "Required field: SourceLocationName, is not set");
    return UpdateVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SourceLocationName]", false));
  }
  if (!request.VodSourceNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVodSource", "Required field: VodSourceName, is not set");
    return UpdateVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [VodSourceName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vodSource/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVodSourceName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateVodSourceOutcome(result.GetResultWithOwnership())
                            : UpdateVodSourceOutcome(std::move(result.GetError()));
}
