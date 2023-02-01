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

#include <aws/mediaconvert/MediaConvertClient.h>
#include <aws/mediaconvert/MediaConvertErrorMarshaller.h>
#include <aws/mediaconvert/MediaConvertEndpointProvider.h>
#include <aws/mediaconvert/model/AssociateCertificateRequest.h>
#include <aws/mediaconvert/model/CancelJobRequest.h>
#include <aws/mediaconvert/model/CreateJobRequest.h>
#include <aws/mediaconvert/model/CreateJobTemplateRequest.h>
#include <aws/mediaconvert/model/CreatePresetRequest.h>
#include <aws/mediaconvert/model/CreateQueueRequest.h>
#include <aws/mediaconvert/model/DeleteJobTemplateRequest.h>
#include <aws/mediaconvert/model/DeletePolicyRequest.h>
#include <aws/mediaconvert/model/DeletePresetRequest.h>
#include <aws/mediaconvert/model/DeleteQueueRequest.h>
#include <aws/mediaconvert/model/DescribeEndpointsRequest.h>
#include <aws/mediaconvert/model/DisassociateCertificateRequest.h>
#include <aws/mediaconvert/model/GetJobRequest.h>
#include <aws/mediaconvert/model/GetJobTemplateRequest.h>
#include <aws/mediaconvert/model/GetPolicyRequest.h>
#include <aws/mediaconvert/model/GetPresetRequest.h>
#include <aws/mediaconvert/model/GetQueueRequest.h>
#include <aws/mediaconvert/model/ListJobTemplatesRequest.h>
#include <aws/mediaconvert/model/ListJobsRequest.h>
#include <aws/mediaconvert/model/ListPresetsRequest.h>
#include <aws/mediaconvert/model/ListQueuesRequest.h>
#include <aws/mediaconvert/model/ListTagsForResourceRequest.h>
#include <aws/mediaconvert/model/PutPolicyRequest.h>
#include <aws/mediaconvert/model/TagResourceRequest.h>
#include <aws/mediaconvert/model/UntagResourceRequest.h>
#include <aws/mediaconvert/model/UpdateJobTemplateRequest.h>
#include <aws/mediaconvert/model/UpdatePresetRequest.h>
#include <aws/mediaconvert/model/UpdateQueueRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaConvert;
using namespace Aws::MediaConvert::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* MediaConvertClient::SERVICE_NAME = "mediaconvert";
const char* MediaConvertClient::ALLOCATION_TAG = "MediaConvertClient";

MediaConvertClient::MediaConvertClient(const MediaConvert::MediaConvertClientConfiguration& clientConfiguration,
                                       std::shared_ptr<MediaConvertEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaConvertErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MediaConvertClient::MediaConvertClient(const AWSCredentials& credentials,
                                       std::shared_ptr<MediaConvertEndpointProviderBase> endpointProvider,
                                       const MediaConvert::MediaConvertClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaConvertErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MediaConvertClient::MediaConvertClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<MediaConvertEndpointProviderBase> endpointProvider,
                                       const MediaConvert::MediaConvertClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaConvertErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  MediaConvertClient::MediaConvertClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaConvertErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<MediaConvertEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MediaConvertClient::MediaConvertClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaConvertErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MediaConvertEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MediaConvertClient::MediaConvertClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaConvertErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MediaConvertEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
MediaConvertClient::~MediaConvertClient()
{
}

std::shared_ptr<MediaConvertEndpointProviderBase>& MediaConvertClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void MediaConvertClient::init(const MediaConvert::MediaConvertClientConfiguration& config)
{
  AWSClient::SetServiceClientName("MediaConvert");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void MediaConvertClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateCertificateOutcome MediaConvertClient::AssociateCertificate(const AssociateCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/certificates");
  return AssociateCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelJobOutcome MediaConvertClient::CancelJob(const CancelJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelJob", "Required field: Id, is not set");
    return CancelJobOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return CancelJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

CreateJobOutcome MediaConvertClient::CreateJob(const CreateJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/jobs");
  return CreateJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateJobTemplateOutcome MediaConvertClient::CreateJobTemplate(const CreateJobTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/jobTemplates");
  return CreateJobTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePresetOutcome MediaConvertClient::CreatePreset(const CreatePresetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePreset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePreset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/presets");
  return CreatePresetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateQueueOutcome MediaConvertClient::CreateQueue(const CreateQueueRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/queues");
  return CreateQueueOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteJobTemplateOutcome MediaConvertClient::DeleteJobTemplate(const DeleteJobTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJobTemplate", "Required field: Name, is not set");
    return DeleteJobTemplateOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/jobTemplates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeleteJobTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePolicyOutcome MediaConvertClient::DeletePolicy(const DeletePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/policy");
  return DeletePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePresetOutcome MediaConvertClient::DeletePreset(const DeletePresetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePreset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePreset", "Required field: Name, is not set");
    return DeletePresetOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePreset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/presets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeletePresetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteQueueOutcome MediaConvertClient::DeleteQueue(const DeleteQueueRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQueue", "Required field: Name, is not set");
    return DeleteQueueOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/queues/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeleteQueueOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointsOutcome MediaConvertClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/endpoints");
  return DescribeEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateCertificateOutcome MediaConvertClient::DisassociateCertificate(const DisassociateCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateCertificate", "Required field: Arn, is not set");
    return DisassociateCertificateOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/certificates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  return DisassociateCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

GetJobOutcome MediaConvertClient::GetJob(const GetJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: Id, is not set");
    return GetJobOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetJobTemplateOutcome MediaConvertClient::GetJobTemplate(const GetJobTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJobTemplate", "Required field: Name, is not set");
    return GetJobTemplateOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/jobTemplates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return GetJobTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPolicyOutcome MediaConvertClient::GetPolicy(const GetPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/policy");
  return GetPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPresetOutcome MediaConvertClient::GetPreset(const GetPresetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPreset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPreset", "Required field: Name, is not set");
    return GetPresetOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPreset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/presets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return GetPresetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetQueueOutcome MediaConvertClient::GetQueue(const GetQueueRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueue", "Required field: Name, is not set");
    return GetQueueOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/queues/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return GetQueueOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobTemplatesOutcome MediaConvertClient::ListJobTemplates(const ListJobTemplatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJobTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/jobTemplates");
  return ListJobTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobsOutcome MediaConvertClient::ListJobs(const ListJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/jobs");
  return ListJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPresetsOutcome MediaConvertClient::ListPresets(const ListPresetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPresets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPresets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/presets");
  return ListPresetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListQueuesOutcome MediaConvertClient::ListQueues(const ListQueuesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/queues");
  return ListQueuesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome MediaConvertClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: Arn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

PutPolicyOutcome MediaConvertClient::PutPolicy(const PutPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/policy");
  return PutPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome MediaConvertClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/tags");
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome MediaConvertClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: Arn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateJobTemplateOutcome MediaConvertClient::UpdateJobTemplate(const UpdateJobTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJobTemplate", "Required field: Name, is not set");
    return UpdateJobTemplateOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateJobTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/jobTemplates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return UpdateJobTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePresetOutcome MediaConvertClient::UpdatePreset(const UpdatePresetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePreset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePreset", "Required field: Name, is not set");
    return UpdatePresetOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePreset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/presets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return UpdatePresetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateQueueOutcome MediaConvertClient::UpdateQueue(const UpdateQueueRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQueue", "Required field: Name, is not set");
    return UpdateQueueOutcome(Aws::Client::AWSError<MediaConvertErrors>(MediaConvertErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2017-08-29/queues/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return UpdateQueueOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

