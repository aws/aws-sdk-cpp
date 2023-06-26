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

#include <aws/wisdom/ConnectWisdomServiceClient.h>
#include <aws/wisdom/ConnectWisdomServiceErrorMarshaller.h>
#include <aws/wisdom/ConnectWisdomServiceEndpointProvider.h>
#include <aws/wisdom/model/CreateAssistantRequest.h>
#include <aws/wisdom/model/CreateAssistantAssociationRequest.h>
#include <aws/wisdom/model/CreateContentRequest.h>
#include <aws/wisdom/model/CreateKnowledgeBaseRequest.h>
#include <aws/wisdom/model/CreateSessionRequest.h>
#include <aws/wisdom/model/DeleteAssistantRequest.h>
#include <aws/wisdom/model/DeleteAssistantAssociationRequest.h>
#include <aws/wisdom/model/DeleteContentRequest.h>
#include <aws/wisdom/model/DeleteKnowledgeBaseRequest.h>
#include <aws/wisdom/model/GetAssistantRequest.h>
#include <aws/wisdom/model/GetAssistantAssociationRequest.h>
#include <aws/wisdom/model/GetContentRequest.h>
#include <aws/wisdom/model/GetContentSummaryRequest.h>
#include <aws/wisdom/model/GetKnowledgeBaseRequest.h>
#include <aws/wisdom/model/GetRecommendationsRequest.h>
#include <aws/wisdom/model/GetSessionRequest.h>
#include <aws/wisdom/model/ListAssistantAssociationsRequest.h>
#include <aws/wisdom/model/ListAssistantsRequest.h>
#include <aws/wisdom/model/ListContentsRequest.h>
#include <aws/wisdom/model/ListKnowledgeBasesRequest.h>
#include <aws/wisdom/model/ListTagsForResourceRequest.h>
#include <aws/wisdom/model/NotifyRecommendationsReceivedRequest.h>
#include <aws/wisdom/model/QueryAssistantRequest.h>
#include <aws/wisdom/model/RemoveKnowledgeBaseTemplateUriRequest.h>
#include <aws/wisdom/model/SearchContentRequest.h>
#include <aws/wisdom/model/SearchSessionsRequest.h>
#include <aws/wisdom/model/StartContentUploadRequest.h>
#include <aws/wisdom/model/TagResourceRequest.h>
#include <aws/wisdom/model/UntagResourceRequest.h>
#include <aws/wisdom/model/UpdateContentRequest.h>
#include <aws/wisdom/model/UpdateKnowledgeBaseTemplateUriRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ConnectWisdomService;
using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* ConnectWisdomServiceClient::SERVICE_NAME = "wisdom";
const char* ConnectWisdomServiceClient::ALLOCATION_TAG = "ConnectWisdomServiceClient";

ConnectWisdomServiceClient::ConnectWisdomServiceClient(const ConnectWisdomService::ConnectWisdomServiceClientConfiguration& clientConfiguration,
                                                       std::shared_ptr<ConnectWisdomServiceEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectWisdomServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ConnectWisdomServiceClient::ConnectWisdomServiceClient(const AWSCredentials& credentials,
                                                       std::shared_ptr<ConnectWisdomServiceEndpointProviderBase> endpointProvider,
                                                       const ConnectWisdomService::ConnectWisdomServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectWisdomServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ConnectWisdomServiceClient::ConnectWisdomServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       std::shared_ptr<ConnectWisdomServiceEndpointProviderBase> endpointProvider,
                                                       const ConnectWisdomService::ConnectWisdomServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectWisdomServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ConnectWisdomServiceClient::ConnectWisdomServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectWisdomServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ConnectWisdomServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ConnectWisdomServiceClient::ConnectWisdomServiceClient(const AWSCredentials& credentials,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectWisdomServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ConnectWisdomServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ConnectWisdomServiceClient::ConnectWisdomServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectWisdomServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ConnectWisdomServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ConnectWisdomServiceClient::~ConnectWisdomServiceClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<ConnectWisdomServiceEndpointProviderBase>& ConnectWisdomServiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ConnectWisdomServiceClient::init(const ConnectWisdomService::ConnectWisdomServiceClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Wisdom");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ConnectWisdomServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateAssistantOutcome ConnectWisdomServiceClient::CreateAssistant(const CreateAssistantRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAssistant);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAssistant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAssistant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assistants");
  return CreateAssistantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAssistantAssociationOutcome ConnectWisdomServiceClient::CreateAssistantAssociation(const CreateAssistantAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAssistantAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAssistantAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAssistantAssociation", "Required field: AssistantId, is not set");
    return CreateAssistantAssociationOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAssistantAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  return CreateAssistantAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateContentOutcome ConnectWisdomServiceClient::CreateContent(const CreateContentRequest& request) const
{
  AWS_OPERATION_GUARD(CreateContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateContent", "Required field: KnowledgeBaseId, is not set");
    return CreateContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contents");
  return CreateContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateKnowledgeBaseOutcome ConnectWisdomServiceClient::CreateKnowledgeBase(const CreateKnowledgeBaseRequest& request) const
{
  AWS_OPERATION_GUARD(CreateKnowledgeBase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateKnowledgeBase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateKnowledgeBase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases");
  return CreateKnowledgeBaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSessionOutcome ConnectWisdomServiceClient::CreateSession(const CreateSessionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSession", "Required field: AssistantId, is not set");
    return CreateSessionOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sessions");
  return CreateSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssistantOutcome ConnectWisdomServiceClient::DeleteAssistant(const DeleteAssistantRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAssistant);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAssistant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssistant", "Required field: AssistantId, is not set");
    return DeleteAssistantOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAssistant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
  return DeleteAssistantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssistantAssociationOutcome ConnectWisdomServiceClient::DeleteAssistantAssociation(const DeleteAssistantAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAssistantAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAssistantAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssistantAssociation", "Required field: AssistantAssociationId, is not set");
    return DeleteAssistantAssociationOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantAssociationId]", false));
  }
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssistantAssociation", "Required field: AssistantId, is not set");
    return DeleteAssistantAssociationOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAssistantAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/associations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantAssociationId());
  return DeleteAssistantAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteContentOutcome ConnectWisdomServiceClient::DeleteContent(const DeleteContentRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ContentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContent", "Required field: ContentId, is not set");
    return DeleteContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContent", "Required field: KnowledgeBaseId, is not set");
    return DeleteContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contents/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentId());
  return DeleteContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteKnowledgeBaseOutcome ConnectWisdomServiceClient::DeleteKnowledgeBase(const DeleteKnowledgeBaseRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteKnowledgeBase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKnowledgeBase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKnowledgeBase", "Required field: KnowledgeBaseId, is not set");
    return DeleteKnowledgeBaseOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteKnowledgeBase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
  return DeleteKnowledgeBaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

GetAssistantOutcome ConnectWisdomServiceClient::GetAssistant(const GetAssistantRequest& request) const
{
  AWS_OPERATION_GUARD(GetAssistant);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAssistant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssistant", "Required field: AssistantId, is not set");
    return GetAssistantOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAssistant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
  return GetAssistantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAssistantAssociationOutcome ConnectWisdomServiceClient::GetAssistantAssociation(const GetAssistantAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(GetAssistantAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAssistantAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssistantAssociation", "Required field: AssistantAssociationId, is not set");
    return GetAssistantAssociationOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantAssociationId]", false));
  }
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssistantAssociation", "Required field: AssistantId, is not set");
    return GetAssistantAssociationOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAssistantAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/associations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantAssociationId());
  return GetAssistantAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetContentOutcome ConnectWisdomServiceClient::GetContent(const GetContentRequest& request) const
{
  AWS_OPERATION_GUARD(GetContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ContentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContent", "Required field: ContentId, is not set");
    return GetContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContent", "Required field: KnowledgeBaseId, is not set");
    return GetContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contents/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentId());
  return GetContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetContentSummaryOutcome ConnectWisdomServiceClient::GetContentSummary(const GetContentSummaryRequest& request) const
{
  AWS_OPERATION_GUARD(GetContentSummary);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContentSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ContentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContentSummary", "Required field: ContentId, is not set");
    return GetContentSummaryOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContentSummary", "Required field: KnowledgeBaseId, is not set");
    return GetContentSummaryOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContentSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contents/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/summary");
  return GetContentSummaryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetKnowledgeBaseOutcome ConnectWisdomServiceClient::GetKnowledgeBase(const GetKnowledgeBaseRequest& request) const
{
  AWS_OPERATION_GUARD(GetKnowledgeBase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKnowledgeBase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKnowledgeBase", "Required field: KnowledgeBaseId, is not set");
    return GetKnowledgeBaseOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKnowledgeBase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
  return GetKnowledgeBaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRecommendationsOutcome ConnectWisdomServiceClient::GetRecommendations(const GetRecommendationsRequest& request) const
{
  AWS_OPERATION_GUARD(GetRecommendations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecommendations", "Required field: AssistantId, is not set");
    return GetRecommendationsOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecommendations", "Required field: SessionId, is not set");
    return GetRecommendationsOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recommendations");
  return GetRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSessionOutcome ConnectWisdomServiceClient::GetSession(const GetSessionRequest& request) const
{
  AWS_OPERATION_GUARD(GetSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: AssistantId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: SessionId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  return GetSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssistantAssociationsOutcome ConnectWisdomServiceClient::ListAssistantAssociations(const ListAssistantAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAssistantAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssistantAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssistantAssociations", "Required field: AssistantId, is not set");
    return ListAssistantAssociationsOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssistantAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  return ListAssistantAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssistantsOutcome ConnectWisdomServiceClient::ListAssistants(const ListAssistantsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAssistants);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssistants, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssistants, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assistants");
  return ListAssistantsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListContentsOutcome ConnectWisdomServiceClient::ListContents(const ListContentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListContents);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListContents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListContents", "Required field: KnowledgeBaseId, is not set");
    return ListContentsOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListContents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contents");
  return ListContentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListKnowledgeBasesOutcome ConnectWisdomServiceClient::ListKnowledgeBases(const ListKnowledgeBasesRequest& request) const
{
  AWS_OPERATION_GUARD(ListKnowledgeBases);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListKnowledgeBases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListKnowledgeBases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases");
  return ListKnowledgeBasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome ConnectWisdomServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

NotifyRecommendationsReceivedOutcome ConnectWisdomServiceClient::NotifyRecommendationsReceived(const NotifyRecommendationsReceivedRequest& request) const
{
  AWS_OPERATION_GUARD(NotifyRecommendationsReceived);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, NotifyRecommendationsReceived, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("NotifyRecommendationsReceived", "Required field: AssistantId, is not set");
    return NotifyRecommendationsReceivedOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("NotifyRecommendationsReceived", "Required field: SessionId, is not set");
    return NotifyRecommendationsReceivedOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, NotifyRecommendationsReceived, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recommendations/notify");
  return NotifyRecommendationsReceivedOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

QueryAssistantOutcome ConnectWisdomServiceClient::QueryAssistant(const QueryAssistantRequest& request) const
{
  AWS_OPERATION_GUARD(QueryAssistant);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, QueryAssistant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("QueryAssistant", "Required field: AssistantId, is not set");
    return QueryAssistantOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, QueryAssistant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/query");
  return QueryAssistantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveKnowledgeBaseTemplateUriOutcome ConnectWisdomServiceClient::RemoveKnowledgeBaseTemplateUri(const RemoveKnowledgeBaseTemplateUriRequest& request) const
{
  AWS_OPERATION_GUARD(RemoveKnowledgeBaseTemplateUri);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveKnowledgeBaseTemplateUri, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveKnowledgeBaseTemplateUri", "Required field: KnowledgeBaseId, is not set");
    return RemoveKnowledgeBaseTemplateUriOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveKnowledgeBaseTemplateUri, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templateUri");
  return RemoveKnowledgeBaseTemplateUriOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

SearchContentOutcome ConnectWisdomServiceClient::SearchContent(const SearchContentRequest& request) const
{
  AWS_OPERATION_GUARD(SearchContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchContent", "Required field: KnowledgeBaseId, is not set");
    return SearchContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/search");
  return SearchContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchSessionsOutcome ConnectWisdomServiceClient::SearchSessions(const SearchSessionsRequest& request) const
{
  AWS_OPERATION_GUARD(SearchSessions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchSessions", "Required field: AssistantId, is not set");
    return SearchSessionsOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/searchSessions");
  return SearchSessionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartContentUploadOutcome ConnectWisdomServiceClient::StartContentUpload(const StartContentUploadRequest& request) const
{
  AWS_OPERATION_GUARD(StartContentUpload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartContentUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartContentUpload", "Required field: KnowledgeBaseId, is not set");
    return StartContentUploadOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartContentUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/upload");
  return StartContentUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome ConnectWisdomServiceClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome ConnectWisdomServiceClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateContentOutcome ConnectWisdomServiceClient::UpdateContent(const UpdateContentRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ContentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContent", "Required field: ContentId, is not set");
    return UpdateContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContent", "Required field: KnowledgeBaseId, is not set");
    return UpdateContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contents/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentId());
  return UpdateContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateKnowledgeBaseTemplateUriOutcome ConnectWisdomServiceClient::UpdateKnowledgeBaseTemplateUri(const UpdateKnowledgeBaseTemplateUriRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateKnowledgeBaseTemplateUri);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateKnowledgeBaseTemplateUri, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKnowledgeBaseTemplateUri", "Required field: KnowledgeBaseId, is not set");
    return UpdateKnowledgeBaseTemplateUriOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateKnowledgeBaseTemplateUri, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templateUri");
  return UpdateKnowledgeBaseTemplateUriOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

