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
#include <aws/wisdom/ConnectWisdomServiceClient.h>
#include <aws/wisdom/ConnectWisdomServiceEndpointProvider.h>
#include <aws/wisdom/ConnectWisdomServiceErrorMarshaller.h>
#include <aws/wisdom/model/CreateAssistantAssociationRequest.h>
#include <aws/wisdom/model/CreateAssistantRequest.h>
#include <aws/wisdom/model/CreateContentRequest.h>
#include <aws/wisdom/model/CreateKnowledgeBaseRequest.h>
#include <aws/wisdom/model/CreateQuickResponseRequest.h>
#include <aws/wisdom/model/CreateSessionRequest.h>
#include <aws/wisdom/model/DeleteAssistantAssociationRequest.h>
#include <aws/wisdom/model/DeleteAssistantRequest.h>
#include <aws/wisdom/model/DeleteContentRequest.h>
#include <aws/wisdom/model/DeleteImportJobRequest.h>
#include <aws/wisdom/model/DeleteKnowledgeBaseRequest.h>
#include <aws/wisdom/model/DeleteQuickResponseRequest.h>
#include <aws/wisdom/model/GetAssistantAssociationRequest.h>
#include <aws/wisdom/model/GetAssistantRequest.h>
#include <aws/wisdom/model/GetContentRequest.h>
#include <aws/wisdom/model/GetContentSummaryRequest.h>
#include <aws/wisdom/model/GetImportJobRequest.h>
#include <aws/wisdom/model/GetKnowledgeBaseRequest.h>
#include <aws/wisdom/model/GetQuickResponseRequest.h>
#include <aws/wisdom/model/GetSessionRequest.h>
#include <aws/wisdom/model/ListAssistantAssociationsRequest.h>
#include <aws/wisdom/model/ListAssistantsRequest.h>
#include <aws/wisdom/model/ListContentsRequest.h>
#include <aws/wisdom/model/ListImportJobsRequest.h>
#include <aws/wisdom/model/ListKnowledgeBasesRequest.h>
#include <aws/wisdom/model/ListQuickResponsesRequest.h>
#include <aws/wisdom/model/ListTagsForResourceRequest.h>
#include <aws/wisdom/model/NotifyRecommendationsReceivedRequest.h>
#include <aws/wisdom/model/RemoveKnowledgeBaseTemplateUriRequest.h>
#include <aws/wisdom/model/SearchContentRequest.h>
#include <aws/wisdom/model/SearchQuickResponsesRequest.h>
#include <aws/wisdom/model/SearchSessionsRequest.h>
#include <aws/wisdom/model/StartContentUploadRequest.h>
#include <aws/wisdom/model/StartImportJobRequest.h>
#include <aws/wisdom/model/TagResourceRequest.h>
#include <aws/wisdom/model/UntagResourceRequest.h>
#include <aws/wisdom/model/UpdateContentRequest.h>
#include <aws/wisdom/model/UpdateKnowledgeBaseTemplateUriRequest.h>
#include <aws/wisdom/model/UpdateQuickResponseRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ConnectWisdomService;
using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ConnectWisdomService {
const char SERVICE_NAME[] = "wisdom";
const char ALLOCATION_TAG[] = "ConnectWisdomServiceClient";
}  // namespace ConnectWisdomService
}  // namespace Aws
const char* ConnectWisdomServiceClient::GetServiceName() { return SERVICE_NAME; }
const char* ConnectWisdomServiceClient::GetAllocationTag() { return ALLOCATION_TAG; }

ConnectWisdomServiceClient::ConnectWisdomServiceClient(
    const ConnectWisdomService::ConnectWisdomServiceClientConfiguration& clientConfiguration,
    std::shared_ptr<ConnectWisdomServiceEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectWisdomServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ConnectWisdomServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectWisdomServiceClient::ConnectWisdomServiceClient(
    const AWSCredentials& credentials, std::shared_ptr<ConnectWisdomServiceEndpointProviderBase> endpointProvider,
    const ConnectWisdomService::ConnectWisdomServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectWisdomServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ConnectWisdomServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectWisdomServiceClient::ConnectWisdomServiceClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<ConnectWisdomServiceEndpointProviderBase> endpointProvider,
    const ConnectWisdomService::ConnectWisdomServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectWisdomServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ConnectWisdomServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ConnectWisdomServiceClient::ConnectWisdomServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectWisdomServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectWisdomServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectWisdomServiceClient::ConnectWisdomServiceClient(const AWSCredentials& credentials,
                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectWisdomServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectWisdomServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectWisdomServiceClient::ConnectWisdomServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectWisdomServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectWisdomServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ConnectWisdomServiceClient::~ConnectWisdomServiceClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ConnectWisdomServiceEndpointProviderBase>& ConnectWisdomServiceClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void ConnectWisdomServiceClient::init(const ConnectWisdomService::ConnectWisdomServiceClientConfiguration& config) {
  AWSClient::SetServiceClientName("Wisdom");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "wisdom");
}

void ConnectWisdomServiceClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ConnectWisdomServiceClient::InvokeOperationOutcome ConnectWisdomServiceClient::InvokeServiceOperation(
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

CreateAssistantOutcome ConnectWisdomServiceClient::CreateAssistant(const CreateAssistantRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants");
  };

  return CreateAssistantOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAssistantAssociationOutcome ConnectWisdomServiceClient::CreateAssistantAssociation(
    const CreateAssistantAssociationRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAssistantAssociation", "Required field: AssistantId, is not set");
    return CreateAssistantAssociationOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  };

  return CreateAssistantAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateContentOutcome ConnectWisdomServiceClient::CreateContent(const CreateContentRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateContent", "Required field: KnowledgeBaseId, is not set");
    return CreateContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contents");
  };

  return CreateContentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateKnowledgeBaseOutcome ConnectWisdomServiceClient::CreateKnowledgeBase(const CreateKnowledgeBaseRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases");
  };

  return CreateKnowledgeBaseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateQuickResponseOutcome ConnectWisdomServiceClient::CreateQuickResponse(const CreateQuickResponseRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateQuickResponse", "Required field: KnowledgeBaseId, is not set");
    return CreateQuickResponseOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/quickResponses");
  };

  return CreateQuickResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSessionOutcome ConnectWisdomServiceClient::CreateSession(const CreateSessionRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSession", "Required field: AssistantId, is not set");
    return CreateSessionOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions");
  };

  return CreateSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAssistantOutcome ConnectWisdomServiceClient::DeleteAssistant(const DeleteAssistantRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssistant", "Required field: AssistantId, is not set");
    return DeleteAssistantOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
  };

  return DeleteAssistantOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAssistantAssociationOutcome ConnectWisdomServiceClient::DeleteAssistantAssociation(
    const DeleteAssistantAssociationRequest& request) const {
  if (!request.AssistantAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssistantAssociation", "Required field: AssistantAssociationId, is not set");
    return DeleteAssistantAssociationOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantAssociationId]", false));
  }
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssistantAssociation", "Required field: AssistantId, is not set");
    return DeleteAssistantAssociationOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantAssociationId());
  };

  return DeleteAssistantAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteContentOutcome ConnectWisdomServiceClient::DeleteContent(const DeleteContentRequest& request) const {
  if (!request.ContentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContent", "Required field: ContentId, is not set");
    return DeleteContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContent", "Required field: KnowledgeBaseId, is not set");
    return DeleteContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentId());
  };

  return DeleteContentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteImportJobOutcome ConnectWisdomServiceClient::DeleteImportJob(const DeleteImportJobRequest& request) const {
  if (!request.ImportJobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteImportJob", "Required field: ImportJobId, is not set");
    return DeleteImportJobOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImportJobId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteImportJob", "Required field: KnowledgeBaseId, is not set");
    return DeleteImportJobOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/importJobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImportJobId());
  };

  return DeleteImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteKnowledgeBaseOutcome ConnectWisdomServiceClient::DeleteKnowledgeBase(const DeleteKnowledgeBaseRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKnowledgeBase", "Required field: KnowledgeBaseId, is not set");
    return DeleteKnowledgeBaseOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
  };

  return DeleteKnowledgeBaseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteQuickResponseOutcome ConnectWisdomServiceClient::DeleteQuickResponse(const DeleteQuickResponseRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQuickResponse", "Required field: KnowledgeBaseId, is not set");
    return DeleteQuickResponseOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.QuickResponseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQuickResponse", "Required field: QuickResponseId, is not set");
    return DeleteQuickResponseOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QuickResponseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/quickResponses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQuickResponseId());
  };

  return DeleteQuickResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetAssistantOutcome ConnectWisdomServiceClient::GetAssistant(const GetAssistantRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssistant", "Required field: AssistantId, is not set");
    return GetAssistantOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
  };

  return GetAssistantOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAssistantAssociationOutcome ConnectWisdomServiceClient::GetAssistantAssociation(const GetAssistantAssociationRequest& request) const {
  if (!request.AssistantAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssistantAssociation", "Required field: AssistantAssociationId, is not set");
    return GetAssistantAssociationOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantAssociationId]", false));
  }
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssistantAssociation", "Required field: AssistantId, is not set");
    return GetAssistantAssociationOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantAssociationId());
  };

  return GetAssistantAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetContentOutcome ConnectWisdomServiceClient::GetContent(const GetContentRequest& request) const {
  if (!request.ContentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetContent", "Required field: ContentId, is not set");
    return GetContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetContent", "Required field: KnowledgeBaseId, is not set");
    return GetContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentId());
  };

  return GetContentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetContentSummaryOutcome ConnectWisdomServiceClient::GetContentSummary(const GetContentSummaryRequest& request) const {
  if (!request.ContentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetContentSummary", "Required field: ContentId, is not set");
    return GetContentSummaryOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetContentSummary", "Required field: KnowledgeBaseId, is not set");
    return GetContentSummaryOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/summary");
  };

  return GetContentSummaryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetImportJobOutcome ConnectWisdomServiceClient::GetImportJob(const GetImportJobRequest& request) const {
  if (!request.ImportJobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImportJob", "Required field: ImportJobId, is not set");
    return GetImportJobOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImportJobId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImportJob", "Required field: KnowledgeBaseId, is not set");
    return GetImportJobOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/importJobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImportJobId());
  };

  return GetImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetKnowledgeBaseOutcome ConnectWisdomServiceClient::GetKnowledgeBase(const GetKnowledgeBaseRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKnowledgeBase", "Required field: KnowledgeBaseId, is not set");
    return GetKnowledgeBaseOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
  };

  return GetKnowledgeBaseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetQuickResponseOutcome ConnectWisdomServiceClient::GetQuickResponse(const GetQuickResponseRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQuickResponse", "Required field: KnowledgeBaseId, is not set");
    return GetQuickResponseOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.QuickResponseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQuickResponse", "Required field: QuickResponseId, is not set");
    return GetQuickResponseOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QuickResponseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/quickResponses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQuickResponseId());
  };

  return GetQuickResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSessionOutcome ConnectWisdomServiceClient::GetSession(const GetSessionRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: AssistantId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: SessionId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  };

  return GetSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssistantAssociationsOutcome ConnectWisdomServiceClient::ListAssistantAssociations(
    const ListAssistantAssociationsRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssistantAssociations", "Required field: AssistantId, is not set");
    return ListAssistantAssociationsOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  };

  return ListAssistantAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssistantsOutcome ConnectWisdomServiceClient::ListAssistants(const ListAssistantsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants");
  };

  return ListAssistantsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListContentsOutcome ConnectWisdomServiceClient::ListContents(const ListContentsRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListContents", "Required field: KnowledgeBaseId, is not set");
    return ListContentsOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contents");
  };

  return ListContentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListImportJobsOutcome ConnectWisdomServiceClient::ListImportJobs(const ListImportJobsRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListImportJobs", "Required field: KnowledgeBaseId, is not set");
    return ListImportJobsOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/importJobs");
  };

  return ListImportJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListKnowledgeBasesOutcome ConnectWisdomServiceClient::ListKnowledgeBases(const ListKnowledgeBasesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases");
  };

  return ListKnowledgeBasesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListQuickResponsesOutcome ConnectWisdomServiceClient::ListQuickResponses(const ListQuickResponsesRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQuickResponses", "Required field: KnowledgeBaseId, is not set");
    return ListQuickResponsesOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/quickResponses");
  };

  return ListQuickResponsesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome ConnectWisdomServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

NotifyRecommendationsReceivedOutcome ConnectWisdomServiceClient::NotifyRecommendationsReceived(
    const NotifyRecommendationsReceivedRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("NotifyRecommendationsReceived", "Required field: AssistantId, is not set");
    return NotifyRecommendationsReceivedOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("NotifyRecommendationsReceived", "Required field: SessionId, is not set");
    return NotifyRecommendationsReceivedOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommendations/notify");
  };

  return NotifyRecommendationsReceivedOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveKnowledgeBaseTemplateUriOutcome ConnectWisdomServiceClient::RemoveKnowledgeBaseTemplateUri(
    const RemoveKnowledgeBaseTemplateUriRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveKnowledgeBaseTemplateUri", "Required field: KnowledgeBaseId, is not set");
    return RemoveKnowledgeBaseTemplateUriOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/templateUri");
  };

  return RemoveKnowledgeBaseTemplateUriOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

SearchContentOutcome ConnectWisdomServiceClient::SearchContent(const SearchContentRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchContent", "Required field: KnowledgeBaseId, is not set");
    return SearchContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search");
  };

  return SearchContentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchQuickResponsesOutcome ConnectWisdomServiceClient::SearchQuickResponses(const SearchQuickResponsesRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchQuickResponses", "Required field: KnowledgeBaseId, is not set");
    return SearchQuickResponsesOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/quickResponses");
  };

  return SearchQuickResponsesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchSessionsOutcome ConnectWisdomServiceClient::SearchSessions(const SearchSessionsRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchSessions", "Required field: AssistantId, is not set");
    return SearchSessionsOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/searchSessions");
  };

  return SearchSessionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartContentUploadOutcome ConnectWisdomServiceClient::StartContentUpload(const StartContentUploadRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartContentUpload", "Required field: KnowledgeBaseId, is not set");
    return StartContentUploadOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/upload");
  };

  return StartContentUploadOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartImportJobOutcome ConnectWisdomServiceClient::StartImportJob(const StartImportJobRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartImportJob", "Required field: KnowledgeBaseId, is not set");
    return StartImportJobOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/importJobs");
  };

  return StartImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome ConnectWisdomServiceClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome ConnectWisdomServiceClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateContentOutcome ConnectWisdomServiceClient::UpdateContent(const UpdateContentRequest& request) const {
  if (!request.ContentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateContent", "Required field: ContentId, is not set");
    return UpdateContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateContent", "Required field: KnowledgeBaseId, is not set");
    return UpdateContentOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentId());
  };

  return UpdateContentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateKnowledgeBaseTemplateUriOutcome ConnectWisdomServiceClient::UpdateKnowledgeBaseTemplateUri(
    const UpdateKnowledgeBaseTemplateUriRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKnowledgeBaseTemplateUri", "Required field: KnowledgeBaseId, is not set");
    return UpdateKnowledgeBaseTemplateUriOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/templateUri");
  };

  return UpdateKnowledgeBaseTemplateUriOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateQuickResponseOutcome ConnectWisdomServiceClient::UpdateQuickResponse(const UpdateQuickResponseRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQuickResponse", "Required field: KnowledgeBaseId, is not set");
    return UpdateQuickResponseOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.QuickResponseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQuickResponse", "Required field: QuickResponseId, is not set");
    return UpdateQuickResponseOutcome(Aws::Client::AWSError<ConnectWisdomServiceErrors>(
        ConnectWisdomServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QuickResponseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/quickResponses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQuickResponseId());
  };

  return UpdateQuickResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
