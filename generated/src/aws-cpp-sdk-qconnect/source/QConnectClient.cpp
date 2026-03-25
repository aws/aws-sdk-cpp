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
#include <aws/qconnect/QConnectClient.h>
#include <aws/qconnect/QConnectEndpointProvider.h>
#include <aws/qconnect/QConnectErrorMarshaller.h>
#include <aws/qconnect/model/ActivateMessageTemplateRequest.h>
#include <aws/qconnect/model/CreateAIAgentRequest.h>
#include <aws/qconnect/model/CreateAIAgentVersionRequest.h>
#include <aws/qconnect/model/CreateAIGuardrailRequest.h>
#include <aws/qconnect/model/CreateAIGuardrailVersionRequest.h>
#include <aws/qconnect/model/CreateAIPromptRequest.h>
#include <aws/qconnect/model/CreateAIPromptVersionRequest.h>
#include <aws/qconnect/model/CreateAssistantAssociationRequest.h>
#include <aws/qconnect/model/CreateAssistantRequest.h>
#include <aws/qconnect/model/CreateContentAssociationRequest.h>
#include <aws/qconnect/model/CreateContentRequest.h>
#include <aws/qconnect/model/CreateKnowledgeBaseRequest.h>
#include <aws/qconnect/model/CreateMessageTemplateAttachmentRequest.h>
#include <aws/qconnect/model/CreateMessageTemplateRequest.h>
#include <aws/qconnect/model/CreateMessageTemplateVersionRequest.h>
#include <aws/qconnect/model/CreateQuickResponseRequest.h>
#include <aws/qconnect/model/CreateSessionRequest.h>
#include <aws/qconnect/model/DeactivateMessageTemplateRequest.h>
#include <aws/qconnect/model/DeleteAIAgentRequest.h>
#include <aws/qconnect/model/DeleteAIAgentVersionRequest.h>
#include <aws/qconnect/model/DeleteAIGuardrailRequest.h>
#include <aws/qconnect/model/DeleteAIGuardrailVersionRequest.h>
#include <aws/qconnect/model/DeleteAIPromptRequest.h>
#include <aws/qconnect/model/DeleteAIPromptVersionRequest.h>
#include <aws/qconnect/model/DeleteAssistantAssociationRequest.h>
#include <aws/qconnect/model/DeleteAssistantRequest.h>
#include <aws/qconnect/model/DeleteContentAssociationRequest.h>
#include <aws/qconnect/model/DeleteContentRequest.h>
#include <aws/qconnect/model/DeleteImportJobRequest.h>
#include <aws/qconnect/model/DeleteKnowledgeBaseRequest.h>
#include <aws/qconnect/model/DeleteMessageTemplateAttachmentRequest.h>
#include <aws/qconnect/model/DeleteMessageTemplateRequest.h>
#include <aws/qconnect/model/DeleteQuickResponseRequest.h>
#include <aws/qconnect/model/GetAIAgentRequest.h>
#include <aws/qconnect/model/GetAIGuardrailRequest.h>
#include <aws/qconnect/model/GetAIPromptRequest.h>
#include <aws/qconnect/model/GetAssistantAssociationRequest.h>
#include <aws/qconnect/model/GetAssistantRequest.h>
#include <aws/qconnect/model/GetContentAssociationRequest.h>
#include <aws/qconnect/model/GetContentRequest.h>
#include <aws/qconnect/model/GetContentSummaryRequest.h>
#include <aws/qconnect/model/GetImportJobRequest.h>
#include <aws/qconnect/model/GetKnowledgeBaseRequest.h>
#include <aws/qconnect/model/GetMessageTemplateRequest.h>
#include <aws/qconnect/model/GetNextMessageRequest.h>
#include <aws/qconnect/model/GetQuickResponseRequest.h>
#include <aws/qconnect/model/GetSessionRequest.h>
#include <aws/qconnect/model/ListAIAgentVersionsRequest.h>
#include <aws/qconnect/model/ListAIAgentsRequest.h>
#include <aws/qconnect/model/ListAIGuardrailVersionsRequest.h>
#include <aws/qconnect/model/ListAIGuardrailsRequest.h>
#include <aws/qconnect/model/ListAIPromptVersionsRequest.h>
#include <aws/qconnect/model/ListAIPromptsRequest.h>
#include <aws/qconnect/model/ListAssistantAssociationsRequest.h>
#include <aws/qconnect/model/ListAssistantsRequest.h>
#include <aws/qconnect/model/ListContentAssociationsRequest.h>
#include <aws/qconnect/model/ListContentsRequest.h>
#include <aws/qconnect/model/ListImportJobsRequest.h>
#include <aws/qconnect/model/ListKnowledgeBasesRequest.h>
#include <aws/qconnect/model/ListMessageTemplateVersionsRequest.h>
#include <aws/qconnect/model/ListMessageTemplatesRequest.h>
#include <aws/qconnect/model/ListMessagesRequest.h>
#include <aws/qconnect/model/ListQuickResponsesRequest.h>
#include <aws/qconnect/model/ListSpansRequest.h>
#include <aws/qconnect/model/ListTagsForResourceRequest.h>
#include <aws/qconnect/model/NotifyRecommendationsReceivedRequest.h>
#include <aws/qconnect/model/PutFeedbackRequest.h>
#include <aws/qconnect/model/RemoveAssistantAIAgentRequest.h>
#include <aws/qconnect/model/RemoveKnowledgeBaseTemplateUriRequest.h>
#include <aws/qconnect/model/RenderMessageTemplateRequest.h>
#include <aws/qconnect/model/RetrieveRequest.h>
#include <aws/qconnect/model/SearchContentRequest.h>
#include <aws/qconnect/model/SearchMessageTemplatesRequest.h>
#include <aws/qconnect/model/SearchQuickResponsesRequest.h>
#include <aws/qconnect/model/SearchSessionsRequest.h>
#include <aws/qconnect/model/SendMessageRequest.h>
#include <aws/qconnect/model/StartContentUploadRequest.h>
#include <aws/qconnect/model/StartImportJobRequest.h>
#include <aws/qconnect/model/TagResourceRequest.h>
#include <aws/qconnect/model/UntagResourceRequest.h>
#include <aws/qconnect/model/UpdateAIAgentRequest.h>
#include <aws/qconnect/model/UpdateAIGuardrailRequest.h>
#include <aws/qconnect/model/UpdateAIPromptRequest.h>
#include <aws/qconnect/model/UpdateAssistantAIAgentRequest.h>
#include <aws/qconnect/model/UpdateContentRequest.h>
#include <aws/qconnect/model/UpdateKnowledgeBaseTemplateUriRequest.h>
#include <aws/qconnect/model/UpdateMessageTemplateMetadataRequest.h>
#include <aws/qconnect/model/UpdateMessageTemplateRequest.h>
#include <aws/qconnect/model/UpdateQuickResponseRequest.h>
#include <aws/qconnect/model/UpdateSessionDataRequest.h>
#include <aws/qconnect/model/UpdateSessionRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::QConnect;
using namespace Aws::QConnect::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace QConnect {
const char SERVICE_NAME[] = "wisdom";
const char ALLOCATION_TAG[] = "QConnectClient";
}  // namespace QConnect
}  // namespace Aws
const char* QConnectClient::GetServiceName() { return SERVICE_NAME; }
const char* QConnectClient::GetAllocationTag() { return ALLOCATION_TAG; }

QConnectClient::QConnectClient(const QConnect::QConnectClientConfiguration& clientConfiguration,
                               std::shared_ptr<QConnectEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<QConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QConnectClient::QConnectClient(const AWSCredentials& credentials, std::shared_ptr<QConnectEndpointProviderBase> endpointProvider,
                               const QConnect::QConnectClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<QConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QConnectClient::QConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<QConnectEndpointProviderBase> endpointProvider,
                               const QConnect::QConnectClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<QConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
QConnectClient::QConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<QConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QConnectClient::QConnectClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<QConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QConnectClient::QConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QConnectErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<QConnectEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
QConnectClient::~QConnectClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<QConnectEndpointProviderBase>& QConnectClient::accessEndpointProvider() { return m_endpointProvider; }

void QConnectClient::init(const QConnect::QConnectClientConfiguration& config) {
  AWSClient::SetServiceClientName("QConnect");
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

void QConnectClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
QConnectClient::InvokeOperationOutcome QConnectClient::InvokeServiceOperation(
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

ActivateMessageTemplateOutcome QConnectClient::ActivateMessageTemplate(const ActivateMessageTemplateRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ActivateMessageTemplate", "Required field: KnowledgeBaseId, is not set");
    return ActivateMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.MessageTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ActivateMessageTemplate", "Required field: MessageTemplateId, is not set");
    return ActivateMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [MessageTemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/activate");
  };

  return ActivateMessageTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAIAgentOutcome QConnectClient::CreateAIAgent(const CreateAIAgentRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAIAgent", "Required field: AssistantId, is not set");
    return CreateAIAgentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiagents");
  };

  return CreateAIAgentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAIAgentVersionOutcome QConnectClient::CreateAIAgentVersion(const CreateAIAgentVersionRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAIAgentVersion", "Required field: AssistantId, is not set");
    return CreateAIAgentVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AssistantId]", false));
  }
  if (!request.AiAgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAIAgentVersion", "Required field: AiAgentId, is not set");
    return CreateAIAgentVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AiAgentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiagents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiAgentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return CreateAIAgentVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAIGuardrailOutcome QConnectClient::CreateAIGuardrail(const CreateAIGuardrailRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAIGuardrail", "Required field: AssistantId, is not set");
    return CreateAIGuardrailOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiguardrails");
  };

  return CreateAIGuardrailOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAIGuardrailVersionOutcome QConnectClient::CreateAIGuardrailVersion(const CreateAIGuardrailVersionRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAIGuardrailVersion", "Required field: AssistantId, is not set");
    return CreateAIGuardrailVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AssistantId]", false));
  }
  if (!request.AiGuardrailIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAIGuardrailVersion", "Required field: AiGuardrailId, is not set");
    return CreateAIGuardrailVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AiGuardrailId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiguardrails/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiGuardrailId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return CreateAIGuardrailVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAIPromptOutcome QConnectClient::CreateAIPrompt(const CreateAIPromptRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAIPrompt", "Required field: AssistantId, is not set");
    return CreateAIPromptOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiprompts");
  };

  return CreateAIPromptOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAIPromptVersionOutcome QConnectClient::CreateAIPromptVersion(const CreateAIPromptVersionRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAIPromptVersion", "Required field: AssistantId, is not set");
    return CreateAIPromptVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AssistantId]", false));
  }
  if (!request.AiPromptIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAIPromptVersion", "Required field: AiPromptId, is not set");
    return CreateAIPromptVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AiPromptId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiprompts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiPromptId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return CreateAIPromptVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAssistantOutcome QConnectClient::CreateAssistant(const CreateAssistantRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants");
  };

  return CreateAssistantOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAssistantAssociationOutcome QConnectClient::CreateAssistantAssociation(const CreateAssistantAssociationRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAssistantAssociation", "Required field: AssistantId, is not set");
    return CreateAssistantAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  };

  return CreateAssistantAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateContentOutcome QConnectClient::CreateContent(const CreateContentRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateContent", "Required field: KnowledgeBaseId, is not set");
    return CreateContentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contents");
  };

  return CreateContentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateContentAssociationOutcome QConnectClient::CreateContentAssociation(const CreateContentAssociationRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateContentAssociation", "Required field: KnowledgeBaseId, is not set");
    return CreateContentAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.ContentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateContentAssociation", "Required field: ContentId, is not set");
    return CreateContentAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ContentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  };

  return CreateContentAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateKnowledgeBaseOutcome QConnectClient::CreateKnowledgeBase(const CreateKnowledgeBaseRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases");
  };

  return CreateKnowledgeBaseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMessageTemplateOutcome QConnectClient::CreateMessageTemplate(const CreateMessageTemplateRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateMessageTemplate", "Required field: KnowledgeBaseId, is not set");
    return CreateMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates");
  };

  return CreateMessageTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMessageTemplateAttachmentOutcome QConnectClient::CreateMessageTemplateAttachment(
    const CreateMessageTemplateAttachmentRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateMessageTemplateAttachment", "Required field: KnowledgeBaseId, is not set");
    return CreateMessageTemplateAttachmentOutcome(Aws::Client::AWSError<QConnectErrors>(
        QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.MessageTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateMessageTemplateAttachment", "Required field: MessageTemplateId, is not set");
    return CreateMessageTemplateAttachmentOutcome(Aws::Client::AWSError<QConnectErrors>(
        QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageTemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attachments");
  };

  return CreateMessageTemplateAttachmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMessageTemplateVersionOutcome QConnectClient::CreateMessageTemplateVersion(const CreateMessageTemplateVersionRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateMessageTemplateVersion", "Required field: KnowledgeBaseId, is not set");
    return CreateMessageTemplateVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.MessageTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateMessageTemplateVersion", "Required field: MessageTemplateId, is not set");
    return CreateMessageTemplateVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [MessageTemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return CreateMessageTemplateVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateQuickResponseOutcome QConnectClient::CreateQuickResponse(const CreateQuickResponseRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateQuickResponse", "Required field: KnowledgeBaseId, is not set");
    return CreateQuickResponseOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/quickResponses");
  };

  return CreateQuickResponseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSessionOutcome QConnectClient::CreateSession(const CreateSessionRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSession", "Required field: AssistantId, is not set");
    return CreateSessionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions");
  };

  return CreateSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeactivateMessageTemplateOutcome QConnectClient::DeactivateMessageTemplate(const DeactivateMessageTemplateRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeactivateMessageTemplate", "Required field: KnowledgeBaseId, is not set");
    return DeactivateMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.MessageTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeactivateMessageTemplate", "Required field: MessageTemplateId, is not set");
    return DeactivateMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [MessageTemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deactivate");
  };

  return DeactivateMessageTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAIAgentOutcome QConnectClient::DeleteAIAgent(const DeleteAIAgentRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAIAgent", "Required field: AssistantId, is not set");
    return DeleteAIAgentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AssistantId]", false));
  }
  if (!request.AiAgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAIAgent", "Required field: AiAgentId, is not set");
    return DeleteAIAgentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AiAgentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiagents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiAgentId());
  };

  return DeleteAIAgentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAIAgentVersionOutcome QConnectClient::DeleteAIAgentVersion(const DeleteAIAgentVersionRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAIAgentVersion", "Required field: AssistantId, is not set");
    return DeleteAIAgentVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AssistantId]", false));
  }
  if (!request.AiAgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAIAgentVersion", "Required field: AiAgentId, is not set");
    return DeleteAIAgentVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AiAgentId]", false));
  }
  if (!request.VersionNumberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAIAgentVersion", "Required field: VersionNumber, is not set");
    return DeleteAIAgentVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [VersionNumber]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiagents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiAgentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionNumber());
  };

  return DeleteAIAgentVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAIGuardrailOutcome QConnectClient::DeleteAIGuardrail(const DeleteAIGuardrailRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAIGuardrail", "Required field: AssistantId, is not set");
    return DeleteAIGuardrailOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AssistantId]", false));
  }
  if (!request.AiGuardrailIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAIGuardrail", "Required field: AiGuardrailId, is not set");
    return DeleteAIGuardrailOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AiGuardrailId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiguardrails/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiGuardrailId());
  };

  return DeleteAIGuardrailOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAIGuardrailVersionOutcome QConnectClient::DeleteAIGuardrailVersion(const DeleteAIGuardrailVersionRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAIGuardrailVersion", "Required field: AssistantId, is not set");
    return DeleteAIGuardrailVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AssistantId]", false));
  }
  if (!request.AiGuardrailIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAIGuardrailVersion", "Required field: AiGuardrailId, is not set");
    return DeleteAIGuardrailVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AiGuardrailId]", false));
  }
  if (!request.VersionNumberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAIGuardrailVersion", "Required field: VersionNumber, is not set");
    return DeleteAIGuardrailVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [VersionNumber]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiguardrails/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiGuardrailId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionNumber());
  };

  return DeleteAIGuardrailVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAIPromptOutcome QConnectClient::DeleteAIPrompt(const DeleteAIPromptRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAIPrompt", "Required field: AssistantId, is not set");
    return DeleteAIPromptOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AssistantId]", false));
  }
  if (!request.AiPromptIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAIPrompt", "Required field: AiPromptId, is not set");
    return DeleteAIPromptOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AiPromptId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiprompts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiPromptId());
  };

  return DeleteAIPromptOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAIPromptVersionOutcome QConnectClient::DeleteAIPromptVersion(const DeleteAIPromptVersionRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAIPromptVersion", "Required field: AssistantId, is not set");
    return DeleteAIPromptVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AssistantId]", false));
  }
  if (!request.AiPromptIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAIPromptVersion", "Required field: AiPromptId, is not set");
    return DeleteAIPromptVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AiPromptId]", false));
  }
  if (!request.VersionNumberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAIPromptVersion", "Required field: VersionNumber, is not set");
    return DeleteAIPromptVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [VersionNumber]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiprompts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiPromptId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionNumber());
  };

  return DeleteAIPromptVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAssistantOutcome QConnectClient::DeleteAssistant(const DeleteAssistantRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssistant", "Required field: AssistantId, is not set");
    return DeleteAssistantOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
  };

  return DeleteAssistantOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAssistantAssociationOutcome QConnectClient::DeleteAssistantAssociation(const DeleteAssistantAssociationRequest& request) const {
  if (!request.AssistantAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssistantAssociation", "Required field: AssistantAssociationId, is not set");
    return DeleteAssistantAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(
        QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantAssociationId]", false));
  }
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssistantAssociation", "Required field: AssistantId, is not set");
    return DeleteAssistantAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [AssistantId]", false));
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

DeleteContentOutcome QConnectClient::DeleteContent(const DeleteContentRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContent", "Required field: KnowledgeBaseId, is not set");
    return DeleteContentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.ContentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContent", "Required field: ContentId, is not set");
    return DeleteContentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ContentId]", false));
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

DeleteContentAssociationOutcome QConnectClient::DeleteContentAssociation(const DeleteContentAssociationRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContentAssociation", "Required field: KnowledgeBaseId, is not set");
    return DeleteContentAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.ContentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContentAssociation", "Required field: ContentId, is not set");
    return DeleteContentAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ContentId]", false));
  }
  if (!request.ContentAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContentAssociation", "Required field: ContentAssociationId, is not set");
    return DeleteContentAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ContentAssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentAssociationId());
  };

  return DeleteContentAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteImportJobOutcome QConnectClient::DeleteImportJob(const DeleteImportJobRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteImportJob", "Required field: KnowledgeBaseId, is not set");
    return DeleteImportJobOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.ImportJobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteImportJob", "Required field: ImportJobId, is not set");
    return DeleteImportJobOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ImportJobId]", false));
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

DeleteKnowledgeBaseOutcome QConnectClient::DeleteKnowledgeBase(const DeleteKnowledgeBaseRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKnowledgeBase", "Required field: KnowledgeBaseId, is not set");
    return DeleteKnowledgeBaseOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
  };

  return DeleteKnowledgeBaseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteMessageTemplateOutcome QConnectClient::DeleteMessageTemplate(const DeleteMessageTemplateRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMessageTemplate", "Required field: KnowledgeBaseId, is not set");
    return DeleteMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.MessageTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMessageTemplate", "Required field: MessageTemplateId, is not set");
    return DeleteMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [MessageTemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
  };

  return DeleteMessageTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteMessageTemplateAttachmentOutcome QConnectClient::DeleteMessageTemplateAttachment(
    const DeleteMessageTemplateAttachmentRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMessageTemplateAttachment", "Required field: KnowledgeBaseId, is not set");
    return DeleteMessageTemplateAttachmentOutcome(Aws::Client::AWSError<QConnectErrors>(
        QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.MessageTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMessageTemplateAttachment", "Required field: MessageTemplateId, is not set");
    return DeleteMessageTemplateAttachmentOutcome(Aws::Client::AWSError<QConnectErrors>(
        QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageTemplateId]", false));
  }
  if (!request.AttachmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMessageTemplateAttachment", "Required field: AttachmentId, is not set");
    return DeleteMessageTemplateAttachmentOutcome(Aws::Client::AWSError<QConnectErrors>(
        QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttachmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attachments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttachmentId());
  };

  return DeleteMessageTemplateAttachmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteQuickResponseOutcome QConnectClient::DeleteQuickResponse(const DeleteQuickResponseRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQuickResponse", "Required field: KnowledgeBaseId, is not set");
    return DeleteQuickResponseOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.QuickResponseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQuickResponse", "Required field: QuickResponseId, is not set");
    return DeleteQuickResponseOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [QuickResponseId]", false));
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

GetAIAgentOutcome QConnectClient::GetAIAgent(const GetAIAgentRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAIAgent", "Required field: AssistantId, is not set");
    return GetAIAgentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [AssistantId]", false));
  }
  if (!request.AiAgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAIAgent", "Required field: AiAgentId, is not set");
    return GetAIAgentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [AiAgentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiagents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiAgentId());
  };

  return GetAIAgentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAIGuardrailOutcome QConnectClient::GetAIGuardrail(const GetAIGuardrailRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAIGuardrail", "Required field: AssistantId, is not set");
    return GetAIGuardrailOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AssistantId]", false));
  }
  if (!request.AiGuardrailIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAIGuardrail", "Required field: AiGuardrailId, is not set");
    return GetAIGuardrailOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AiGuardrailId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiguardrails/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiGuardrailId());
  };

  return GetAIGuardrailOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAIPromptOutcome QConnectClient::GetAIPrompt(const GetAIPromptRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAIPrompt", "Required field: AssistantId, is not set");
    return GetAIPromptOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [AssistantId]", false));
  }
  if (!request.AiPromptIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAIPrompt", "Required field: AiPromptId, is not set");
    return GetAIPromptOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [AiPromptId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiprompts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiPromptId());
  };

  return GetAIPromptOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAssistantOutcome QConnectClient::GetAssistant(const GetAssistantRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssistant", "Required field: AssistantId, is not set");
    return GetAssistantOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
  };

  return GetAssistantOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAssistantAssociationOutcome QConnectClient::GetAssistantAssociation(const GetAssistantAssociationRequest& request) const {
  if (!request.AssistantAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssistantAssociation", "Required field: AssistantAssociationId, is not set");
    return GetAssistantAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AssistantAssociationId]", false));
  }
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssistantAssociation", "Required field: AssistantId, is not set");
    return GetAssistantAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AssistantId]", false));
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

GetContentOutcome QConnectClient::GetContent(const GetContentRequest& request) const {
  if (!request.ContentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetContent", "Required field: ContentId, is not set");
    return GetContentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ContentId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetContent", "Required field: KnowledgeBaseId, is not set");
    return GetContentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [KnowledgeBaseId]", false));
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

GetContentAssociationOutcome QConnectClient::GetContentAssociation(const GetContentAssociationRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetContentAssociation", "Required field: KnowledgeBaseId, is not set");
    return GetContentAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.ContentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetContentAssociation", "Required field: ContentId, is not set");
    return GetContentAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ContentId]", false));
  }
  if (!request.ContentAssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetContentAssociation", "Required field: ContentAssociationId, is not set");
    return GetContentAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ContentAssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentAssociationId());
  };

  return GetContentAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetContentSummaryOutcome QConnectClient::GetContentSummary(const GetContentSummaryRequest& request) const {
  if (!request.ContentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetContentSummary", "Required field: ContentId, is not set");
    return GetContentSummaryOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ContentId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetContentSummary", "Required field: KnowledgeBaseId, is not set");
    return GetContentSummaryOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [KnowledgeBaseId]", false));
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

GetImportJobOutcome QConnectClient::GetImportJob(const GetImportJobRequest& request) const {
  if (!request.ImportJobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImportJob", "Required field: ImportJobId, is not set");
    return GetImportJobOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ImportJobId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImportJob", "Required field: KnowledgeBaseId, is not set");
    return GetImportJobOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [KnowledgeBaseId]", false));
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

GetKnowledgeBaseOutcome QConnectClient::GetKnowledgeBase(const GetKnowledgeBaseRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKnowledgeBase", "Required field: KnowledgeBaseId, is not set");
    return GetKnowledgeBaseOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
  };

  return GetKnowledgeBaseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMessageTemplateOutcome QConnectClient::GetMessageTemplate(const GetMessageTemplateRequest& request) const {
  if (!request.MessageTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMessageTemplate", "Required field: MessageTemplateId, is not set");
    return GetMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [MessageTemplateId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMessageTemplate", "Required field: KnowledgeBaseId, is not set");
    return GetMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
  };

  return GetMessageTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetNextMessageOutcome QConnectClient::GetNextMessage(const GetNextMessageRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNextMessage", "Required field: AssistantId, is not set");
    return GetNextMessageOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNextMessage", "Required field: SessionId, is not set");
    return GetNextMessageOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [SessionId]", false));
  }
  if (!request.NextMessageTokenHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetNextMessage", "Required field: NextMessageToken, is not set");
    return GetNextMessageOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [NextMessageToken]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messages/next");
  };

  return GetNextMessageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetQuickResponseOutcome QConnectClient::GetQuickResponse(const GetQuickResponseRequest& request) const {
  if (!request.QuickResponseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQuickResponse", "Required field: QuickResponseId, is not set");
    return GetQuickResponseOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [QuickResponseId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQuickResponse", "Required field: KnowledgeBaseId, is not set");
    return GetQuickResponseOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [KnowledgeBaseId]", false));
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

GetSessionOutcome QConnectClient::GetSession(const GetSessionRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: AssistantId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: SessionId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [SessionId]", false));
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

ListAIAgentVersionsOutcome QConnectClient::ListAIAgentVersions(const ListAIAgentVersionsRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAIAgentVersions", "Required field: AssistantId, is not set");
    return ListAIAgentVersionsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AssistantId]", false));
  }
  if (!request.AiAgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAIAgentVersions", "Required field: AiAgentId, is not set");
    return ListAIAgentVersionsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AiAgentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiagents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiAgentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListAIAgentVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAIAgentsOutcome QConnectClient::ListAIAgents(const ListAIAgentsRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAIAgents", "Required field: AssistantId, is not set");
    return ListAIAgentsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiagents");
  };

  return ListAIAgentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAIGuardrailVersionsOutcome QConnectClient::ListAIGuardrailVersions(const ListAIGuardrailVersionsRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAIGuardrailVersions", "Required field: AssistantId, is not set");
    return ListAIGuardrailVersionsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AssistantId]", false));
  }
  if (!request.AiGuardrailIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAIGuardrailVersions", "Required field: AiGuardrailId, is not set");
    return ListAIGuardrailVersionsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AiGuardrailId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiguardrails/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiGuardrailId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListAIGuardrailVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAIGuardrailsOutcome QConnectClient::ListAIGuardrails(const ListAIGuardrailsRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAIGuardrails", "Required field: AssistantId, is not set");
    return ListAIGuardrailsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiguardrails");
  };

  return ListAIGuardrailsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAIPromptVersionsOutcome QConnectClient::ListAIPromptVersions(const ListAIPromptVersionsRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAIPromptVersions", "Required field: AssistantId, is not set");
    return ListAIPromptVersionsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AssistantId]", false));
  }
  if (!request.AiPromptIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAIPromptVersions", "Required field: AiPromptId, is not set");
    return ListAIPromptVersionsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AiPromptId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiprompts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiPromptId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListAIPromptVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAIPromptsOutcome QConnectClient::ListAIPrompts(const ListAIPromptsRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAIPrompts", "Required field: AssistantId, is not set");
    return ListAIPromptsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiprompts");
  };

  return ListAIPromptsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssistantAssociationsOutcome QConnectClient::ListAssistantAssociations(const ListAssistantAssociationsRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssistantAssociations", "Required field: AssistantId, is not set");
    return ListAssistantAssociationsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  };

  return ListAssistantAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssistantsOutcome QConnectClient::ListAssistants(const ListAssistantsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants");
  };

  return ListAssistantsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListContentAssociationsOutcome QConnectClient::ListContentAssociations(const ListContentAssociationsRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListContentAssociations", "Required field: KnowledgeBaseId, is not set");
    return ListContentAssociationsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.ContentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListContentAssociations", "Required field: ContentId, is not set");
    return ListContentAssociationsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ContentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  };

  return ListContentAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListContentsOutcome QConnectClient::ListContents(const ListContentsRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListContents", "Required field: KnowledgeBaseId, is not set");
    return ListContentsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contents");
  };

  return ListContentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListImportJobsOutcome QConnectClient::ListImportJobs(const ListImportJobsRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListImportJobs", "Required field: KnowledgeBaseId, is not set");
    return ListImportJobsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/importJobs");
  };

  return ListImportJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListKnowledgeBasesOutcome QConnectClient::ListKnowledgeBases(const ListKnowledgeBasesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases");
  };

  return ListKnowledgeBasesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMessageTemplateVersionsOutcome QConnectClient::ListMessageTemplateVersions(const ListMessageTemplateVersionsRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMessageTemplateVersions", "Required field: KnowledgeBaseId, is not set");
    return ListMessageTemplateVersionsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.MessageTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMessageTemplateVersions", "Required field: MessageTemplateId, is not set");
    return ListMessageTemplateVersionsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [MessageTemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListMessageTemplateVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMessageTemplatesOutcome QConnectClient::ListMessageTemplates(const ListMessageTemplatesRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMessageTemplates", "Required field: KnowledgeBaseId, is not set");
    return ListMessageTemplatesOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates");
  };

  return ListMessageTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMessagesOutcome QConnectClient::ListMessages(const ListMessagesRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMessages", "Required field: AssistantId, is not set");
    return ListMessagesOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMessages", "Required field: SessionId, is not set");
    return ListMessagesOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messages");
  };

  return ListMessagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListQuickResponsesOutcome QConnectClient::ListQuickResponses(const ListQuickResponsesRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQuickResponses", "Required field: KnowledgeBaseId, is not set");
    return ListQuickResponsesOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/quickResponses");
  };

  return ListQuickResponsesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSpansOutcome QConnectClient::ListSpans(const ListSpansRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSpans", "Required field: AssistantId, is not set");
    return ListSpansOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSpans", "Required field: SessionId, is not set");
    return ListSpansOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/spans");
  };

  return ListSpansOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome QConnectClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

NotifyRecommendationsReceivedOutcome QConnectClient::NotifyRecommendationsReceived(
    const NotifyRecommendationsReceivedRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("NotifyRecommendationsReceived", "Required field: AssistantId, is not set");
    return NotifyRecommendationsReceivedOutcome(Aws::Client::AWSError<QConnectErrors>(
        QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("NotifyRecommendationsReceived", "Required field: SessionId, is not set");
    return NotifyRecommendationsReceivedOutcome(Aws::Client::AWSError<QConnectErrors>(
        QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
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

PutFeedbackOutcome QConnectClient::PutFeedback(const PutFeedbackRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutFeedback", "Required field: AssistantId, is not set");
    return PutFeedbackOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/feedback");
  };

  return PutFeedbackOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RemoveAssistantAIAgentOutcome QConnectClient::RemoveAssistantAIAgent(const RemoveAssistantAIAgentRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveAssistantAIAgent", "Required field: AssistantId, is not set");
    return RemoveAssistantAIAgentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AssistantId]", false));
  }
  if (!request.AiAgentTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveAssistantAIAgent", "Required field: AiAgentType, is not set");
    return RemoveAssistantAIAgentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AiAgentType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiagentConfiguration");
  };

  return RemoveAssistantAIAgentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

RemoveKnowledgeBaseTemplateUriOutcome QConnectClient::RemoveKnowledgeBaseTemplateUri(
    const RemoveKnowledgeBaseTemplateUriRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveKnowledgeBaseTemplateUri", "Required field: KnowledgeBaseId, is not set");
    return RemoveKnowledgeBaseTemplateUriOutcome(Aws::Client::AWSError<QConnectErrors>(
        QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/templateUri");
  };

  return RemoveKnowledgeBaseTemplateUriOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

RenderMessageTemplateOutcome QConnectClient::RenderMessageTemplate(const RenderMessageTemplateRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RenderMessageTemplate", "Required field: KnowledgeBaseId, is not set");
    return RenderMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.MessageTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RenderMessageTemplate", "Required field: MessageTemplateId, is not set");
    return RenderMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [MessageTemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/render");
  };

  return RenderMessageTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RetrieveOutcome QConnectClient::Retrieve(const RetrieveRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("Retrieve", "Required field: AssistantId, is not set");
    return RetrieveOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/retrieve");
  };

  return RetrieveOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchContentOutcome QConnectClient::SearchContent(const SearchContentRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchContent", "Required field: KnowledgeBaseId, is not set");
    return SearchContentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search");
  };

  return SearchContentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchMessageTemplatesOutcome QConnectClient::SearchMessageTemplates(const SearchMessageTemplatesRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchMessageTemplates", "Required field: KnowledgeBaseId, is not set");
    return SearchMessageTemplatesOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/messageTemplates");
  };

  return SearchMessageTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchQuickResponsesOutcome QConnectClient::SearchQuickResponses(const SearchQuickResponsesRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchQuickResponses", "Required field: KnowledgeBaseId, is not set");
    return SearchQuickResponsesOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/quickResponses");
  };

  return SearchQuickResponsesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchSessionsOutcome QConnectClient::SearchSessions(const SearchSessionsRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchSessions", "Required field: AssistantId, is not set");
    return SearchSessionsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/searchSessions");
  };

  return SearchSessionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SendMessageOutcome QConnectClient::SendMessage(const SendMessageRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendMessage", "Required field: AssistantId, is not set");
    return SendMessageOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendMessage", "Required field: SessionId, is not set");
    return SendMessageOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/message");
  };

  return SendMessageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartContentUploadOutcome QConnectClient::StartContentUpload(const StartContentUploadRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartContentUpload", "Required field: KnowledgeBaseId, is not set");
    return StartContentUploadOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/upload");
  };

  return StartContentUploadOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartImportJobOutcome QConnectClient::StartImportJob(const StartImportJobRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartImportJob", "Required field: KnowledgeBaseId, is not set");
    return StartImportJobOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/importJobs");
  };

  return StartImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome QConnectClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome QConnectClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateAIAgentOutcome QConnectClient::UpdateAIAgent(const UpdateAIAgentRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAIAgent", "Required field: AssistantId, is not set");
    return UpdateAIAgentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AssistantId]", false));
  }
  if (!request.AiAgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAIAgent", "Required field: AiAgentId, is not set");
    return UpdateAIAgentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AiAgentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiagents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiAgentId());
  };

  return UpdateAIAgentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAIGuardrailOutcome QConnectClient::UpdateAIGuardrail(const UpdateAIGuardrailRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAIGuardrail", "Required field: AssistantId, is not set");
    return UpdateAIGuardrailOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AssistantId]", false));
  }
  if (!request.AiGuardrailIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAIGuardrail", "Required field: AiGuardrailId, is not set");
    return UpdateAIGuardrailOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AiGuardrailId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiguardrails/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiGuardrailId());
  };

  return UpdateAIGuardrailOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAIPromptOutcome QConnectClient::UpdateAIPrompt(const UpdateAIPromptRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAIPrompt", "Required field: AssistantId, is not set");
    return UpdateAIPromptOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AssistantId]", false));
  }
  if (!request.AiPromptIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAIPrompt", "Required field: AiPromptId, is not set");
    return UpdateAIPromptOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AiPromptId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiprompts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiPromptId());
  };

  return UpdateAIPromptOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAssistantAIAgentOutcome QConnectClient::UpdateAssistantAIAgent(const UpdateAssistantAIAgentRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAssistantAIAgent", "Required field: AssistantId, is not set");
    return UpdateAssistantAIAgentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AssistantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aiagentConfiguration");
  };

  return UpdateAssistantAIAgentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateContentOutcome QConnectClient::UpdateContent(const UpdateContentRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateContent", "Required field: KnowledgeBaseId, is not set");
    return UpdateContentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.ContentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateContent", "Required field: ContentId, is not set");
    return UpdateContentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ContentId]", false));
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

UpdateKnowledgeBaseTemplateUriOutcome QConnectClient::UpdateKnowledgeBaseTemplateUri(
    const UpdateKnowledgeBaseTemplateUriRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKnowledgeBaseTemplateUri", "Required field: KnowledgeBaseId, is not set");
    return UpdateKnowledgeBaseTemplateUriOutcome(Aws::Client::AWSError<QConnectErrors>(
        QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/templateUri");
  };

  return UpdateKnowledgeBaseTemplateUriOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMessageTemplateOutcome QConnectClient::UpdateMessageTemplate(const UpdateMessageTemplateRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMessageTemplate", "Required field: KnowledgeBaseId, is not set");
    return UpdateMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.MessageTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMessageTemplate", "Required field: MessageTemplateId, is not set");
    return UpdateMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [MessageTemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
  };

  return UpdateMessageTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMessageTemplateMetadataOutcome QConnectClient::UpdateMessageTemplateMetadata(
    const UpdateMessageTemplateMetadataRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMessageTemplateMetadata", "Required field: KnowledgeBaseId, is not set");
    return UpdateMessageTemplateMetadataOutcome(Aws::Client::AWSError<QConnectErrors>(
        QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.MessageTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMessageTemplateMetadata", "Required field: MessageTemplateId, is not set");
    return UpdateMessageTemplateMetadataOutcome(Aws::Client::AWSError<QConnectErrors>(
        QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageTemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata");
  };

  return UpdateMessageTemplateMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateQuickResponseOutcome QConnectClient::UpdateQuickResponse(const UpdateQuickResponseRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQuickResponse", "Required field: KnowledgeBaseId, is not set");
    return UpdateQuickResponseOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.QuickResponseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQuickResponse", "Required field: QuickResponseId, is not set");
    return UpdateQuickResponseOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [QuickResponseId]", false));
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

UpdateSessionOutcome QConnectClient::UpdateSession(const UpdateSessionRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSession", "Required field: AssistantId, is not set");
    return UpdateSessionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSession", "Required field: SessionId, is not set");
    return UpdateSessionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  };

  return UpdateSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSessionDataOutcome QConnectClient::UpdateSessionData(const UpdateSessionDataRequest& request) const {
  if (!request.AssistantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSessionData", "Required field: AssistantId, is not set");
    return UpdateSessionDataOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSessionData", "Required field: SessionId, is not set");
    return UpdateSessionDataOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data");
  };

  return UpdateSessionDataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
