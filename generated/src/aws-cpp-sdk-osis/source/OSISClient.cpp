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

#include <aws/osis/OSISClient.h>
#include <aws/osis/OSISErrorMarshaller.h>
#include <aws/osis/OSISEndpointProvider.h>
#include <aws/osis/model/CreatePipelineRequest.h>
#include <aws/osis/model/DeletePipelineRequest.h>
#include <aws/osis/model/GetPipelineRequest.h>
#include <aws/osis/model/GetPipelineBlueprintRequest.h>
#include <aws/osis/model/GetPipelineChangeProgressRequest.h>
#include <aws/osis/model/ListPipelineBlueprintsRequest.h>
#include <aws/osis/model/ListPipelinesRequest.h>
#include <aws/osis/model/ListTagsForResourceRequest.h>
#include <aws/osis/model/StartPipelineRequest.h>
#include <aws/osis/model/StopPipelineRequest.h>
#include <aws/osis/model/TagResourceRequest.h>
#include <aws/osis/model/UntagResourceRequest.h>
#include <aws/osis/model/UpdatePipelineRequest.h>
#include <aws/osis/model/ValidatePipelineRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::OSIS;
using namespace Aws::OSIS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* OSISClient::SERVICE_NAME = "osis";
const char* OSISClient::ALLOCATION_TAG = "OSISClient";

OSISClient::OSISClient(const OSIS::OSISClientConfiguration& clientConfiguration,
                       std::shared_ptr<OSISEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OSISErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

OSISClient::OSISClient(const AWSCredentials& credentials,
                       std::shared_ptr<OSISEndpointProviderBase> endpointProvider,
                       const OSIS::OSISClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OSISErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

OSISClient::OSISClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<OSISEndpointProviderBase> endpointProvider,
                       const OSIS::OSISClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OSISErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  OSISClient::OSISClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OSISErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<OSISEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

OSISClient::OSISClient(const AWSCredentials& credentials,
                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OSISErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<OSISEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

OSISClient::OSISClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OSISErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<OSISEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
OSISClient::~OSISClient()
{
}

std::shared_ptr<OSISEndpointProviderBase>& OSISClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void OSISClient::init(const OSIS::OSISClientConfiguration& config)
{
  AWSClient::SetServiceClientName("OSIS");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void OSISClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreatePipelineOutcome OSISClient::CreatePipeline(const CreatePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/createPipeline");
  return CreatePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePipelineOutcome OSISClient::DeletePipeline(const DeletePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PipelineNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePipeline", "Required field: PipelineName, is not set");
    return DeletePipelineOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/deletePipeline/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPipelineName());
  return DeletePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

GetPipelineOutcome OSISClient::GetPipeline(const GetPipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PipelineNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPipeline", "Required field: PipelineName, is not set");
    return GetPipelineOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/getPipeline/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPipelineName());
  return GetPipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPipelineBlueprintOutcome OSISClient::GetPipelineBlueprint(const GetPipelineBlueprintRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPipelineBlueprint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BlueprintNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPipelineBlueprint", "Required field: BlueprintName, is not set");
    return GetPipelineBlueprintOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlueprintName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPipelineBlueprint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/getPipelineBlueprint/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBlueprintName());
  return GetPipelineBlueprintOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPipelineChangeProgressOutcome OSISClient::GetPipelineChangeProgress(const GetPipelineChangeProgressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPipelineChangeProgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PipelineNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPipelineChangeProgress", "Required field: PipelineName, is not set");
    return GetPipelineChangeProgressOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPipelineChangeProgress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/getPipelineChangeProgress/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPipelineName());
  return GetPipelineChangeProgressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPipelineBlueprintsOutcome OSISClient::ListPipelineBlueprints(const ListPipelineBlueprintsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPipelineBlueprints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPipelineBlueprints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/listPipelineBlueprints");
  return ListPipelineBlueprintsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPipelinesOutcome OSISClient::ListPipelines(const ListPipelinesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/listPipelines");
  return ListPipelinesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome OSISClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: Arn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/listTagsForResource/");
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

StartPipelineOutcome OSISClient::StartPipeline(const StartPipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartPipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PipelineNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartPipeline", "Required field: PipelineName, is not set");
    return StartPipelineOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartPipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/startPipeline/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPipelineName());
  return StartPipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StopPipelineOutcome OSISClient::StopPipeline(const StopPipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopPipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PipelineNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopPipeline", "Required field: PipelineName, is not set");
    return StopPipelineOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopPipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/stopPipeline/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPipelineName());
  return StopPipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome OSISClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: Arn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/tagResource/");
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome OSISClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: Arn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/untagResource/");
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePipelineOutcome OSISClient::UpdatePipeline(const UpdatePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PipelineNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePipeline", "Required field: PipelineName, is not set");
    return UpdatePipelineOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/updatePipeline/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPipelineName());
  return UpdatePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ValidatePipelineOutcome OSISClient::ValidatePipeline(const ValidatePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ValidatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ValidatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/validatePipeline");
  return ValidatePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

