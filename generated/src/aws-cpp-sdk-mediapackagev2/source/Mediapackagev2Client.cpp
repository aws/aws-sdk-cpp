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

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::mediapackagev2;
using namespace Aws::mediapackagev2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* Mediapackagev2Client::SERVICE_NAME = "mediapackagev2";
const char* Mediapackagev2Client::ALLOCATION_TAG = "Mediapackagev2Client";

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
  m_endpointProvider(std::move(endpointProvider))
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
    m_endpointProvider(std::move(endpointProvider))
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
    m_endpointProvider(std::move(endpointProvider))
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
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChannel", "Required field: ChannelGroupName, is not set");
    return CreateChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel");
  return CreateChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateChannelGroupOutcome Mediapackagev2Client::CreateChannelGroup(const CreateChannelGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup");
  return CreateChannelGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateOriginEndpointOutcome Mediapackagev2Client::CreateOriginEndpoint(const CreateOriginEndpointRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateOriginEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint");
  return CreateOriginEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelOutcome Mediapackagev2Client::DeleteChannel(const DeleteChannelRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  return DeleteChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelGroupOutcome Mediapackagev2Client::DeleteChannelGroup(const DeleteChannelGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelGroup", "Required field: ChannelGroupName, is not set");
    return DeleteChannelGroupOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  return DeleteChannelGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelPolicyOutcome Mediapackagev2Client::DeleteChannelPolicy(const DeleteChannelPolicyRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return DeleteChannelPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteOriginEndpointOutcome Mediapackagev2Client::DeleteOriginEndpoint(const DeleteOriginEndpointRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteOriginEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
  return DeleteOriginEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteOriginEndpointPolicyOutcome Mediapackagev2Client::DeleteOriginEndpointPolicy(const DeleteOriginEndpointPolicyRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteOriginEndpointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return DeleteOriginEndpointPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

GetChannelOutcome Mediapackagev2Client::GetChannel(const GetChannelRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  return GetChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetChannelGroupOutcome Mediapackagev2Client::GetChannelGroup(const GetChannelGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelGroup", "Required field: ChannelGroupName, is not set");
    return GetChannelGroupOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  return GetChannelGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetChannelPolicyOutcome Mediapackagev2Client::GetChannelPolicy(const GetChannelPolicyRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return GetChannelPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetOriginEndpointOutcome Mediapackagev2Client::GetOriginEndpoint(const GetOriginEndpointRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOriginEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
  return GetOriginEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetOriginEndpointPolicyOutcome Mediapackagev2Client::GetOriginEndpointPolicy(const GetOriginEndpointPolicyRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOriginEndpointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return GetOriginEndpointPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelGroupsOutcome Mediapackagev2Client::ListChannelGroups(const ListChannelGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChannelGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListChannelGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup");
  return ListChannelGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelsOutcome Mediapackagev2Client::ListChannels(const ListChannelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannels", "Required field: ChannelGroupName, is not set");
    return ListChannelsOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel");
  return ListChannelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListOriginEndpointsOutcome Mediapackagev2Client::ListOriginEndpoints(const ListOriginEndpointsRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOriginEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint");
  return ListOriginEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome Mediapackagev2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

PutChannelPolicyOutcome Mediapackagev2Client::PutChannelPolicy(const PutChannelPolicyRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return PutChannelPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutOriginEndpointPolicyOutcome Mediapackagev2Client::PutOriginEndpointPolicy(const PutOriginEndpointPolicyRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutOriginEndpointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return PutOriginEndpointPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome Mediapackagev2Client::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome Mediapackagev2Client::UntagResource(const UntagResourceRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateChannelOutcome Mediapackagev2Client::UpdateChannel(const UpdateChannelRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  return UpdateChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateChannelGroupOutcome Mediapackagev2Client::UpdateChannelGroup(const UpdateChannelGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannelGroup", "Required field: ChannelGroupName, is not set");
    return UpdateChannelGroupOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  return UpdateChannelGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateOriginEndpointOutcome Mediapackagev2Client::UpdateOriginEndpoint(const UpdateOriginEndpointRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateOriginEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channelGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channel/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/originEndpoint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginEndpointName());
  return UpdateOriginEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

