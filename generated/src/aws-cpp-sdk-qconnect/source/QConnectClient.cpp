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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ActivateMessageTemplateOutcome(result.GetResultWithOwnership())
                            : ActivateMessageTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAIAgentOutcome(result.GetResultWithOwnership()) : CreateAIAgentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAIAgentVersionOutcome(result.GetResultWithOwnership())
                            : CreateAIAgentVersionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAIGuardrailOutcome(result.GetResultWithOwnership())
                            : CreateAIGuardrailOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAIGuardrailVersionOutcome(result.GetResultWithOwnership())
                            : CreateAIGuardrailVersionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAIPromptOutcome(result.GetResultWithOwnership()) : CreateAIPromptOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAIPromptVersionOutcome(result.GetResultWithOwnership())
                            : CreateAIPromptVersionOutcome(std::move(result.GetError()));
}

CreateAssistantOutcome QConnectClient::CreateAssistant(const CreateAssistantRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAssistantOutcome(result.GetResultWithOwnership())
                            : CreateAssistantOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAssistantAssociationOutcome(result.GetResultWithOwnership())
                            : CreateAssistantAssociationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateContentOutcome(result.GetResultWithOwnership()) : CreateContentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateContentAssociationOutcome(result.GetResultWithOwnership())
                            : CreateContentAssociationOutcome(std::move(result.GetError()));
}

CreateKnowledgeBaseOutcome QConnectClient::CreateKnowledgeBase(const CreateKnowledgeBaseRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateKnowledgeBaseOutcome(result.GetResultWithOwnership())
                            : CreateKnowledgeBaseOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMessageTemplateOutcome(result.GetResultWithOwnership())
                            : CreateMessageTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMessageTemplateAttachmentOutcome(result.GetResultWithOwnership())
                            : CreateMessageTemplateAttachmentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMessageTemplateVersionOutcome(result.GetResultWithOwnership())
                            : CreateMessageTemplateVersionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateQuickResponseOutcome(result.GetResultWithOwnership())
                            : CreateQuickResponseOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSessionOutcome(result.GetResultWithOwnership()) : CreateSessionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeactivateMessageTemplateOutcome(result.GetResultWithOwnership())
                            : DeactivateMessageTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAIAgentOutcome(result.GetResultWithOwnership()) : DeleteAIAgentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAIAgentVersionOutcome(result.GetResultWithOwnership())
                            : DeleteAIAgentVersionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAIGuardrailOutcome(result.GetResultWithOwnership())
                            : DeleteAIGuardrailOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAIGuardrailVersionOutcome(result.GetResultWithOwnership())
                            : DeleteAIGuardrailVersionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAIPromptOutcome(result.GetResultWithOwnership()) : DeleteAIPromptOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAIPromptVersionOutcome(result.GetResultWithOwnership())
                            : DeleteAIPromptVersionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAssistantOutcome(result.GetResultWithOwnership())
                            : DeleteAssistantOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAssistantAssociationOutcome(result.GetResultWithOwnership())
                            : DeleteAssistantAssociationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteContentOutcome(result.GetResultWithOwnership()) : DeleteContentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteContentAssociationOutcome(result.GetResultWithOwnership())
                            : DeleteContentAssociationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteImportJobOutcome(result.GetResultWithOwnership())
                            : DeleteImportJobOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteKnowledgeBaseOutcome(result.GetResultWithOwnership())
                            : DeleteKnowledgeBaseOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMessageTemplateOutcome(result.GetResultWithOwnership())
                            : DeleteMessageTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMessageTemplateAttachmentOutcome(result.GetResultWithOwnership())
                            : DeleteMessageTemplateAttachmentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteQuickResponseOutcome(result.GetResultWithOwnership())
                            : DeleteQuickResponseOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAIAgentOutcome(result.GetResultWithOwnership()) : GetAIAgentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAIGuardrailOutcome(result.GetResultWithOwnership()) : GetAIGuardrailOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAIPromptOutcome(result.GetResultWithOwnership()) : GetAIPromptOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAssistantOutcome(result.GetResultWithOwnership()) : GetAssistantOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAssistantAssociationOutcome(result.GetResultWithOwnership())
                            : GetAssistantAssociationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetContentOutcome(result.GetResultWithOwnership()) : GetContentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetContentAssociationOutcome(result.GetResultWithOwnership())
                            : GetContentAssociationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetContentSummaryOutcome(result.GetResultWithOwnership())
                            : GetContentSummaryOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetImportJobOutcome(result.GetResultWithOwnership()) : GetImportJobOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetKnowledgeBaseOutcome(result.GetResultWithOwnership())
                            : GetKnowledgeBaseOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMessageTemplateOutcome(result.GetResultWithOwnership())
                            : GetMessageTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetNextMessageOutcome(result.GetResultWithOwnership()) : GetNextMessageOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetQuickResponseOutcome(result.GetResultWithOwnership())
                            : GetQuickResponseOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSessionOutcome(result.GetResultWithOwnership()) : GetSessionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAIAgentVersionsOutcome(result.GetResultWithOwnership())
                            : ListAIAgentVersionsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAIAgentsOutcome(result.GetResultWithOwnership()) : ListAIAgentsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAIGuardrailVersionsOutcome(result.GetResultWithOwnership())
                            : ListAIGuardrailVersionsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAIGuardrailsOutcome(result.GetResultWithOwnership())
                            : ListAIGuardrailsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAIPromptVersionsOutcome(result.GetResultWithOwnership())
                            : ListAIPromptVersionsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAIPromptsOutcome(result.GetResultWithOwnership()) : ListAIPromptsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAssistantAssociationsOutcome(result.GetResultWithOwnership())
                            : ListAssistantAssociationsOutcome(std::move(result.GetError()));
}

ListAssistantsOutcome QConnectClient::ListAssistants(const ListAssistantsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assistants");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAssistantsOutcome(result.GetResultWithOwnership()) : ListAssistantsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListContentAssociationsOutcome(result.GetResultWithOwnership())
                            : ListContentAssociationsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListContentsOutcome(result.GetResultWithOwnership()) : ListContentsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListImportJobsOutcome(result.GetResultWithOwnership()) : ListImportJobsOutcome(std::move(result.GetError()));
}

ListKnowledgeBasesOutcome QConnectClient::ListKnowledgeBases(const ListKnowledgeBasesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListKnowledgeBasesOutcome(result.GetResultWithOwnership())
                            : ListKnowledgeBasesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMessageTemplateVersionsOutcome(result.GetResultWithOwnership())
                            : ListMessageTemplateVersionsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMessageTemplatesOutcome(result.GetResultWithOwnership())
                            : ListMessageTemplatesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMessagesOutcome(result.GetResultWithOwnership()) : ListMessagesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListQuickResponsesOutcome(result.GetResultWithOwnership())
                            : ListQuickResponsesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSpansOutcome(result.GetResultWithOwnership()) : ListSpansOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? NotifyRecommendationsReceivedOutcome(result.GetResultWithOwnership())
                            : NotifyRecommendationsReceivedOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutFeedbackOutcome(result.GetResultWithOwnership()) : PutFeedbackOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? RemoveAssistantAIAgentOutcome(result.GetResultWithOwnership())
                            : RemoveAssistantAIAgentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? RemoveKnowledgeBaseTemplateUriOutcome(result.GetResultWithOwnership())
                            : RemoveKnowledgeBaseTemplateUriOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RenderMessageTemplateOutcome(result.GetResultWithOwnership())
                            : RenderMessageTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RetrieveOutcome(result.GetResultWithOwnership()) : RetrieveOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchContentOutcome(result.GetResultWithOwnership()) : SearchContentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchMessageTemplatesOutcome(result.GetResultWithOwnership())
                            : SearchMessageTemplatesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchQuickResponsesOutcome(result.GetResultWithOwnership())
                            : SearchQuickResponsesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchSessionsOutcome(result.GetResultWithOwnership()) : SearchSessionsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendMessageOutcome(result.GetResultWithOwnership()) : SendMessageOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartContentUploadOutcome(result.GetResultWithOwnership())
                            : StartContentUploadOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartImportJobOutcome(result.GetResultWithOwnership()) : StartImportJobOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAIAgentOutcome(result.GetResultWithOwnership()) : UpdateAIAgentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAIGuardrailOutcome(result.GetResultWithOwnership())
                            : UpdateAIGuardrailOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAIPromptOutcome(result.GetResultWithOwnership()) : UpdateAIPromptOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAssistantAIAgentOutcome(result.GetResultWithOwnership())
                            : UpdateAssistantAIAgentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateContentOutcome(result.GetResultWithOwnership()) : UpdateContentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateKnowledgeBaseTemplateUriOutcome(result.GetResultWithOwnership())
                            : UpdateKnowledgeBaseTemplateUriOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateMessageTemplateOutcome(result.GetResultWithOwnership())
                            : UpdateMessageTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateMessageTemplateMetadataOutcome(result.GetResultWithOwnership())
                            : UpdateMessageTemplateMetadataOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateQuickResponseOutcome(result.GetResultWithOwnership())
                            : UpdateQuickResponseOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSessionOutcome(result.GetResultWithOwnership()) : UpdateSessionOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateSessionDataOutcome(result.GetResultWithOwnership())
                            : UpdateSessionDataOutcome(std::move(result.GetError()));
}
