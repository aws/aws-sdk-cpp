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

#include <aws/mediatailor/MediaTailorClient.h>
#include <aws/mediatailor/MediaTailorErrorMarshaller.h>
#include <aws/mediatailor/MediaTailorEndpointProvider.h>
#include <aws/mediatailor/model/ConfigureLogsForChannelRequest.h>
#include <aws/mediatailor/model/ConfigureLogsForPlaybackConfigurationRequest.h>
#include <aws/mediatailor/model/CreateChannelRequest.h>
#include <aws/mediatailor/model/CreateLiveSourceRequest.h>
#include <aws/mediatailor/model/CreatePrefetchScheduleRequest.h>
#include <aws/mediatailor/model/CreateProgramRequest.h>
#include <aws/mediatailor/model/CreateSourceLocationRequest.h>
#include <aws/mediatailor/model/CreateVodSourceRequest.h>
#include <aws/mediatailor/model/DeleteChannelRequest.h>
#include <aws/mediatailor/model/DeleteChannelPolicyRequest.h>
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

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaTailor;
using namespace Aws::MediaTailor::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* MediaTailorClient::SERVICE_NAME = "mediatailor";
const char* MediaTailorClient::ALLOCATION_TAG = "MediaTailorClient";

MediaTailorClient::MediaTailorClient(const MediaTailor::MediaTailorClientConfiguration& clientConfiguration,
                                     std::shared_ptr<MediaTailorEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MediaTailorClient::MediaTailorClient(const AWSCredentials& credentials,
                                     std::shared_ptr<MediaTailorEndpointProviderBase> endpointProvider,
                                     const MediaTailor::MediaTailorClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MediaTailorClient::MediaTailorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<MediaTailorEndpointProviderBase> endpointProvider,
                                     const MediaTailor::MediaTailorClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  MediaTailorClient::MediaTailorClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<MediaTailorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MediaTailorClient::MediaTailorClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MediaTailorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MediaTailorClient::MediaTailorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaTailorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MediaTailorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
MediaTailorClient::~MediaTailorClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<MediaTailorEndpointProviderBase>& MediaTailorClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void MediaTailorClient::init(const MediaTailor::MediaTailorClientConfiguration& config)
{
  AWSClient::SetServiceClientName("MediaTailor");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void MediaTailorClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

ConfigureLogsForChannelOutcome MediaTailorClient::ConfigureLogsForChannel(const ConfigureLogsForChannelRequest& request) const
{
  AWS_OPERATION_GUARD(ConfigureLogsForChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ConfigureLogsForChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ConfigureLogsForChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configureLogs/channel");
  return ConfigureLogsForChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ConfigureLogsForPlaybackConfigurationOutcome MediaTailorClient::ConfigureLogsForPlaybackConfiguration(const ConfigureLogsForPlaybackConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(ConfigureLogsForPlaybackConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ConfigureLogsForPlaybackConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ConfigureLogsForPlaybackConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configureLogs/playbackConfiguration");
  return ConfigureLogsForPlaybackConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateChannelOutcome MediaTailorClient::CreateChannel(const CreateChannelRequest& request) const
{
  AWS_OPERATION_GUARD(CreateChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChannel", "Required field: ChannelName, is not set");
    return CreateChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  return CreateChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLiveSourceOutcome MediaTailorClient::CreateLiveSource(const CreateLiveSourceRequest& request) const
{
  AWS_OPERATION_GUARD(CreateLiveSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLiveSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LiveSourceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateLiveSource", "Required field: LiveSourceName, is not set");
    return CreateLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LiveSourceName]", false));
  }
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateLiveSource", "Required field: SourceLocationName, is not set");
    return CreateLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLiveSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/liveSource/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLiveSourceName());
  return CreateLiveSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePrefetchScheduleOutcome MediaTailorClient::CreatePrefetchSchedule(const CreatePrefetchScheduleRequest& request) const
{
  AWS_OPERATION_GUARD(CreatePrefetchSchedule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePrefetchSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreatePrefetchSchedule", "Required field: Name, is not set");
    return CreatePrefetchScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.PlaybackConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreatePrefetchSchedule", "Required field: PlaybackConfigurationName, is not set");
    return CreatePrefetchScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlaybackConfigurationName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePrefetchSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/prefetchSchedule/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPlaybackConfigurationName());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return CreatePrefetchScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProgramOutcome MediaTailorClient::CreateProgram(const CreateProgramRequest& request) const
{
  AWS_OPERATION_GUARD(CreateProgram);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProgram, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProgram", "Required field: ChannelName, is not set");
    return CreateProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.ProgramNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProgram", "Required field: ProgramName, is not set");
    return CreateProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProgramName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProgram, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/program/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProgramName());
  return CreateProgramOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSourceLocationOutcome MediaTailorClient::CreateSourceLocation(const CreateSourceLocationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSourceLocation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSourceLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSourceLocation", "Required field: SourceLocationName, is not set");
    return CreateSourceLocationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSourceLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
  return CreateSourceLocationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVodSourceOutcome MediaTailorClient::CreateVodSource(const CreateVodSourceRequest& request) const
{
  AWS_OPERATION_GUARD(CreateVodSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVodSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVodSource", "Required field: SourceLocationName, is not set");
    return CreateVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  if (!request.VodSourceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVodSource", "Required field: VodSourceName, is not set");
    return CreateVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VodSourceName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVodSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vodSource/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVodSourceName());
  return CreateVodSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelOutcome MediaTailorClient::DeleteChannel(const DeleteChannelRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelName, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  return DeleteChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelPolicyOutcome MediaTailorClient::DeleteChannelPolicy(const DeleteChannelPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteChannelPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelPolicy", "Required field: ChannelName, is not set");
    return DeleteChannelPolicyOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return DeleteChannelPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteLiveSourceOutcome MediaTailorClient::DeleteLiveSource(const DeleteLiveSourceRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteLiveSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLiveSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LiveSourceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLiveSource", "Required field: LiveSourceName, is not set");
    return DeleteLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LiveSourceName]", false));
  }
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLiveSource", "Required field: SourceLocationName, is not set");
    return DeleteLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLiveSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/liveSource/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLiveSourceName());
  return DeleteLiveSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePlaybackConfigurationOutcome MediaTailorClient::DeletePlaybackConfiguration(const DeletePlaybackConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeletePlaybackConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePlaybackConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePlaybackConfiguration", "Required field: Name, is not set");
    return DeletePlaybackConfigurationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePlaybackConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/playbackConfiguration/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeletePlaybackConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePrefetchScheduleOutcome MediaTailorClient::DeletePrefetchSchedule(const DeletePrefetchScheduleRequest& request) const
{
  AWS_OPERATION_GUARD(DeletePrefetchSchedule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePrefetchSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePrefetchSchedule", "Required field: Name, is not set");
    return DeletePrefetchScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.PlaybackConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePrefetchSchedule", "Required field: PlaybackConfigurationName, is not set");
    return DeletePrefetchScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlaybackConfigurationName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePrefetchSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/prefetchSchedule/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPlaybackConfigurationName());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeletePrefetchScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProgramOutcome MediaTailorClient::DeleteProgram(const DeleteProgramRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteProgram);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProgram, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProgram", "Required field: ChannelName, is not set");
    return DeleteProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.ProgramNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProgram", "Required field: ProgramName, is not set");
    return DeleteProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProgramName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProgram, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/program/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProgramName());
  return DeleteProgramOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSourceLocationOutcome MediaTailorClient::DeleteSourceLocation(const DeleteSourceLocationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSourceLocation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSourceLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSourceLocation", "Required field: SourceLocationName, is not set");
    return DeleteSourceLocationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSourceLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
  return DeleteSourceLocationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVodSourceOutcome MediaTailorClient::DeleteVodSource(const DeleteVodSourceRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVodSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVodSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVodSource", "Required field: SourceLocationName, is not set");
    return DeleteVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  if (!request.VodSourceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVodSource", "Required field: VodSourceName, is not set");
    return DeleteVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VodSourceName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVodSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vodSource/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVodSourceName());
  return DeleteVodSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DescribeChannelOutcome MediaTailorClient::DescribeChannel(const DescribeChannelRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannel", "Required field: ChannelName, is not set");
    return DescribeChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  return DescribeChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeLiveSourceOutcome MediaTailorClient::DescribeLiveSource(const DescribeLiveSourceRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeLiveSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLiveSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LiveSourceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeLiveSource", "Required field: LiveSourceName, is not set");
    return DescribeLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LiveSourceName]", false));
  }
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeLiveSource", "Required field: SourceLocationName, is not set");
    return DescribeLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLiveSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/liveSource/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLiveSourceName());
  return DescribeLiveSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeProgramOutcome MediaTailorClient::DescribeProgram(const DescribeProgramRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeProgram);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeProgram, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProgram", "Required field: ChannelName, is not set");
    return DescribeProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.ProgramNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProgram", "Required field: ProgramName, is not set");
    return DescribeProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProgramName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeProgram, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/program/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProgramName());
  return DescribeProgramOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeSourceLocationOutcome MediaTailorClient::DescribeSourceLocation(const DescribeSourceLocationRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeSourceLocation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSourceLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSourceLocation", "Required field: SourceLocationName, is not set");
    return DescribeSourceLocationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSourceLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
  return DescribeSourceLocationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeVodSourceOutcome MediaTailorClient::DescribeVodSource(const DescribeVodSourceRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeVodSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVodSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVodSource", "Required field: SourceLocationName, is not set");
    return DescribeVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  if (!request.VodSourceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVodSource", "Required field: VodSourceName, is not set");
    return DescribeVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VodSourceName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVodSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vodSource/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVodSourceName());
  return DescribeVodSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetChannelPolicyOutcome MediaTailorClient::GetChannelPolicy(const GetChannelPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetChannelPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelPolicy", "Required field: ChannelName, is not set");
    return GetChannelPolicyOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return GetChannelPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetChannelScheduleOutcome MediaTailorClient::GetChannelSchedule(const GetChannelScheduleRequest& request) const
{
  AWS_OPERATION_GUARD(GetChannelSchedule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetChannelSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelSchedule", "Required field: ChannelName, is not set");
    return GetChannelScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetChannelSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schedule");
  return GetChannelScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPlaybackConfigurationOutcome MediaTailorClient::GetPlaybackConfiguration(const GetPlaybackConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetPlaybackConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPlaybackConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPlaybackConfiguration", "Required field: Name, is not set");
    return GetPlaybackConfigurationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPlaybackConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/playbackConfiguration/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return GetPlaybackConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPrefetchScheduleOutcome MediaTailorClient::GetPrefetchSchedule(const GetPrefetchScheduleRequest& request) const
{
  AWS_OPERATION_GUARD(GetPrefetchSchedule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPrefetchSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPrefetchSchedule", "Required field: Name, is not set");
    return GetPrefetchScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.PlaybackConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPrefetchSchedule", "Required field: PlaybackConfigurationName, is not set");
    return GetPrefetchScheduleOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlaybackConfigurationName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPrefetchSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/prefetchSchedule/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPlaybackConfigurationName());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return GetPrefetchScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAlertsOutcome MediaTailorClient::ListAlerts(const ListAlertsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAlerts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAlerts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAlerts", "Required field: ResourceArn, is not set");
    return ListAlertsOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAlerts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/alerts");
  return ListAlertsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelsOutcome MediaTailorClient::ListChannels(const ListChannelsRequest& request) const
{
  AWS_OPERATION_GUARD(ListChannels);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
  return ListChannelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLiveSourcesOutcome MediaTailorClient::ListLiveSources(const ListLiveSourcesRequest& request) const
{
  AWS_OPERATION_GUARD(ListLiveSources);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLiveSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLiveSources", "Required field: SourceLocationName, is not set");
    return ListLiveSourcesOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLiveSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/liveSources");
  return ListLiveSourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPlaybackConfigurationsOutcome MediaTailorClient::ListPlaybackConfigurations(const ListPlaybackConfigurationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListPlaybackConfigurations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPlaybackConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPlaybackConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/playbackConfigurations");
  return ListPlaybackConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPrefetchSchedulesOutcome MediaTailorClient::ListPrefetchSchedules(const ListPrefetchSchedulesRequest& request) const
{
  AWS_OPERATION_GUARD(ListPrefetchSchedules);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPrefetchSchedules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PlaybackConfigurationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPrefetchSchedules", "Required field: PlaybackConfigurationName, is not set");
    return ListPrefetchSchedulesOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlaybackConfigurationName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPrefetchSchedules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/prefetchSchedule/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPlaybackConfigurationName());
  return ListPrefetchSchedulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSourceLocationsOutcome MediaTailorClient::ListSourceLocations(const ListSourceLocationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListSourceLocations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSourceLocations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSourceLocations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocations");
  return ListSourceLocationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome MediaTailorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVodSourcesOutcome MediaTailorClient::ListVodSources(const ListVodSourcesRequest& request) const
{
  AWS_OPERATION_GUARD(ListVodSources);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVodSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVodSources", "Required field: SourceLocationName, is not set");
    return ListVodSourcesOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVodSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vodSources");
  return ListVodSourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

PutChannelPolicyOutcome MediaTailorClient::PutChannelPolicy(const PutChannelPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(PutChannelPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChannelPolicy", "Required field: ChannelName, is not set");
    return PutChannelPolicyOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return PutChannelPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutPlaybackConfigurationOutcome MediaTailorClient::PutPlaybackConfiguration(const PutPlaybackConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutPlaybackConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutPlaybackConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutPlaybackConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/playbackConfiguration");
  return PutPlaybackConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartChannelOutcome MediaTailorClient::StartChannel(const StartChannelRequest& request) const
{
  AWS_OPERATION_GUARD(StartChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartChannel", "Required field: ChannelName, is not set");
    return StartChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  return StartChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StopChannelOutcome MediaTailorClient::StopChannel(const StopChannelRequest& request) const
{
  AWS_OPERATION_GUARD(StopChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopChannel", "Required field: ChannelName, is not set");
    return StopChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  return StopChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome MediaTailorClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome MediaTailorClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateChannelOutcome MediaTailorClient::UpdateChannel(const UpdateChannelRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelName, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  return UpdateChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateLiveSourceOutcome MediaTailorClient::UpdateLiveSource(const UpdateLiveSourceRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateLiveSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLiveSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LiveSourceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLiveSource", "Required field: LiveSourceName, is not set");
    return UpdateLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LiveSourceName]", false));
  }
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLiveSource", "Required field: SourceLocationName, is not set");
    return UpdateLiveSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLiveSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/liveSource/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLiveSourceName());
  return UpdateLiveSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateProgramOutcome MediaTailorClient::UpdateProgram(const UpdateProgramRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateProgram);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProgram, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProgram", "Required field: ChannelName, is not set");
    return UpdateProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.ProgramNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProgram", "Required field: ProgramName, is not set");
    return UpdateProgramOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProgramName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProgram, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/program/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProgramName());
  return UpdateProgramOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSourceLocationOutcome MediaTailorClient::UpdateSourceLocation(const UpdateSourceLocationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSourceLocation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSourceLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSourceLocation", "Required field: SourceLocationName, is not set");
    return UpdateSourceLocationOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSourceLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
  return UpdateSourceLocationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateVodSourceOutcome MediaTailorClient::UpdateVodSource(const UpdateVodSourceRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateVodSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVodSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SourceLocationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVodSource", "Required field: SourceLocationName, is not set");
    return UpdateVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceLocationName]", false));
  }
  if (!request.VodSourceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVodSource", "Required field: VodSourceName, is not set");
    return UpdateVodSourceOutcome(Aws::Client::AWSError<MediaTailorErrors>(MediaTailorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VodSourceName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVodSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sourceLocation/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceLocationName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vodSource/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVodSourceName());
  return UpdateVodSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

