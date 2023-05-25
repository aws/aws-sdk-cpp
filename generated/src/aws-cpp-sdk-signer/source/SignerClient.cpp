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

#include <aws/signer/SignerClient.h>
#include <aws/signer/SignerErrorMarshaller.h>
#include <aws/signer/SignerEndpointProvider.h>
#include <aws/signer/model/AddProfilePermissionRequest.h>
#include <aws/signer/model/CancelSigningProfileRequest.h>
#include <aws/signer/model/DescribeSigningJobRequest.h>
#include <aws/signer/model/GetSigningPlatformRequest.h>
#include <aws/signer/model/GetSigningProfileRequest.h>
#include <aws/signer/model/ListProfilePermissionsRequest.h>
#include <aws/signer/model/ListSigningJobsRequest.h>
#include <aws/signer/model/ListSigningPlatformsRequest.h>
#include <aws/signer/model/ListSigningProfilesRequest.h>
#include <aws/signer/model/ListTagsForResourceRequest.h>
#include <aws/signer/model/PutSigningProfileRequest.h>
#include <aws/signer/model/RemoveProfilePermissionRequest.h>
#include <aws/signer/model/RevokeSignatureRequest.h>
#include <aws/signer/model/RevokeSigningProfileRequest.h>
#include <aws/signer/model/StartSigningJobRequest.h>
#include <aws/signer/model/TagResourceRequest.h>
#include <aws/signer/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::signer;
using namespace Aws::signer::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* SignerClient::SERVICE_NAME = "signer";
const char* SignerClient::ALLOCATION_TAG = "SignerClient";

SignerClient::SignerClient(const signer::SignerClientConfiguration& clientConfiguration,
                           std::shared_ptr<SignerEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SignerClient::SignerClient(const AWSCredentials& credentials,
                           std::shared_ptr<SignerEndpointProviderBase> endpointProvider,
                           const signer::SignerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SignerClient::SignerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<SignerEndpointProviderBase> endpointProvider,
                           const signer::SignerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SignerClient::SignerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SignerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SignerClient::SignerClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SignerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SignerClient::SignerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SignerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SignerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SignerClient::~SignerClient()
{
}

std::shared_ptr<SignerEndpointProviderBase>& SignerClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SignerClient::init(const signer::SignerClientConfiguration& config)
{
  AWSClient::SetServiceClientName("signer");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SignerClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AddProfilePermissionOutcome SignerClient::AddProfilePermission(const AddProfilePermissionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddProfilePermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddProfilePermission", "Required field: ProfileName, is not set");
    return AddProfilePermissionOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddProfilePermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/signing-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return AddProfilePermissionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelSigningProfileOutcome SignerClient::CancelSigningProfile(const CancelSigningProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelSigningProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelSigningProfile", "Required field: ProfileName, is not set");
    return CancelSigningProfileOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelSigningProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/signing-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileName());
  return CancelSigningProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DescribeSigningJobOutcome SignerClient::DescribeSigningJob(const DescribeSigningJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSigningJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSigningJob", "Required field: JobId, is not set");
    return DescribeSigningJobOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSigningJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/signing-jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return DescribeSigningJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSigningPlatformOutcome SignerClient::GetSigningPlatform(const GetSigningPlatformRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSigningPlatform, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PlatformIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSigningPlatform", "Required field: PlatformId, is not set");
    return GetSigningPlatformOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlatformId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSigningPlatform, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/signing-platforms/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPlatformId());
  return GetSigningPlatformOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSigningProfileOutcome SignerClient::GetSigningProfile(const GetSigningProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSigningProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSigningProfile", "Required field: ProfileName, is not set");
    return GetSigningProfileOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSigningProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/signing-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileName());
  return GetSigningProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProfilePermissionsOutcome SignerClient::ListProfilePermissions(const ListProfilePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProfilePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProfilePermissions", "Required field: ProfileName, is not set");
    return ListProfilePermissionsOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProfilePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/signing-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return ListProfilePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSigningJobsOutcome SignerClient::ListSigningJobs(const ListSigningJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSigningJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSigningJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/signing-jobs");
  return ListSigningJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSigningPlatformsOutcome SignerClient::ListSigningPlatforms(const ListSigningPlatformsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSigningPlatforms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSigningPlatforms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/signing-platforms");
  return ListSigningPlatformsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSigningProfilesOutcome SignerClient::ListSigningProfiles(const ListSigningProfilesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSigningProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSigningProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/signing-profiles");
  return ListSigningProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome SignerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

PutSigningProfileOutcome SignerClient::PutSigningProfile(const PutSigningProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutSigningProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSigningProfile", "Required field: ProfileName, is not set");
    return PutSigningProfileOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutSigningProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/signing-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileName());
  return PutSigningProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

RemoveProfilePermissionOutcome SignerClient::RemoveProfilePermission(const RemoveProfilePermissionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveProfilePermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveProfilePermission", "Required field: ProfileName, is not set");
    return RemoveProfilePermissionOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  if (!request.RevisionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveProfilePermission", "Required field: RevisionId, is not set");
    return RemoveProfilePermissionOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RevisionId]", false));
  }
  if (!request.StatementIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveProfilePermission", "Required field: StatementId, is not set");
    return RemoveProfilePermissionOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatementId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveProfilePermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/signing-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatementId());
  return RemoveProfilePermissionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

RevokeSignatureOutcome SignerClient::RevokeSignature(const RevokeSignatureRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeSignature, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RevokeSignature", "Required field: JobId, is not set");
    return RevokeSignatureOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeSignature, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/signing-jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/revoke");
  return RevokeSignatureOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

RevokeSigningProfileOutcome SignerClient::RevokeSigningProfile(const RevokeSigningProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeSigningProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RevokeSigningProfile", "Required field: ProfileName, is not set");
    return RevokeSigningProfileOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeSigningProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/signing-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/revoke");
  return RevokeSigningProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartSigningJobOutcome SignerClient::StartSigningJob(const StartSigningJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartSigningJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartSigningJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/signing-jobs");
  return StartSigningJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome SignerClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome SignerClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SignerErrors>(SignerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

