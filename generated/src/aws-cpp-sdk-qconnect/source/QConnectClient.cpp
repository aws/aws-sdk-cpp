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

#include <aws/qconnect/QConnectClient.h>
#include <aws/qconnect/QConnectErrorMarshaller.h>
#include <aws/qconnect/QConnectEndpointProvider.h>
#include <aws/qconnect/model/ActivateMessageTemplateRequest.h>
#include <aws/qconnect/model/CreateAIAgentRequest.h>
#include <aws/qconnect/model/CreateAIAgentVersionRequest.h>
#include <aws/qconnect/model/CreateAIGuardrailRequest.h>
#include <aws/qconnect/model/CreateAIGuardrailVersionRequest.h>
#include <aws/qconnect/model/CreateAIPromptRequest.h>
#include <aws/qconnect/model/CreateAIPromptVersionRequest.h>
#include <aws/qconnect/model/CreateAssistantRequest.h>
#include <aws/qconnect/model/CreateAssistantAssociationRequest.h>
#include <aws/qconnect/model/CreateContentRequest.h>
#include <aws/qconnect/model/CreateContentAssociationRequest.h>
#include <aws/qconnect/model/CreateKnowledgeBaseRequest.h>
#include <aws/qconnect/model/CreateMessageTemplateRequest.h>
#include <aws/qconnect/model/CreateMessageTemplateAttachmentRequest.h>
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
#include <aws/qconnect/model/DeleteAssistantRequest.h>
#include <aws/qconnect/model/DeleteAssistantAssociationRequest.h>
#include <aws/qconnect/model/DeleteContentRequest.h>
#include <aws/qconnect/model/DeleteContentAssociationRequest.h>
#include <aws/qconnect/model/DeleteImportJobRequest.h>
#include <aws/qconnect/model/DeleteKnowledgeBaseRequest.h>
#include <aws/qconnect/model/DeleteMessageTemplateRequest.h>
#include <aws/qconnect/model/DeleteMessageTemplateAttachmentRequest.h>
#include <aws/qconnect/model/DeleteQuickResponseRequest.h>
#include <aws/qconnect/model/GetAIAgentRequest.h>
#include <aws/qconnect/model/GetAIGuardrailRequest.h>
#include <aws/qconnect/model/GetAIPromptRequest.h>
#include <aws/qconnect/model/GetAssistantRequest.h>
#include <aws/qconnect/model/GetAssistantAssociationRequest.h>
#include <aws/qconnect/model/GetContentRequest.h>
#include <aws/qconnect/model/GetContentAssociationRequest.h>
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
#include <aws/qconnect/model/ListTagsForResourceRequest.h>
#include <aws/qconnect/model/NotifyRecommendationsReceivedRequest.h>
#include <aws/qconnect/model/PutFeedbackRequest.h>
#include <aws/qconnect/model/RemoveAssistantAIAgentRequest.h>
#include <aws/qconnect/model/RemoveKnowledgeBaseTemplateUriRequest.h>
#include <aws/qconnect/model/RenderMessageTemplateRequest.h>
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
#include <aws/qconnect/model/UpdateMessageTemplateRequest.h>
#include <aws/qconnect/model/UpdateMessageTemplateMetadataRequest.h>
#include <aws/qconnect/model/UpdateQuickResponseRequest.h>
#include <aws/qconnect/model/UpdateSessionRequest.h>
#include <aws/qconnect/model/UpdateSessionDataRequest.h>

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

namespace Aws
{
  namespace QConnect
  {
    const char SERVICE_NAME[] = "wisdom";
    const char ALLOCATION_TAG[] = "QConnectClient";
  }
}
const char* QConnectClient::GetServiceName() {return SERVICE_NAME;}
const char* QConnectClient::GetAllocationTag() {return ALLOCATION_TAG;}

QConnectClient::QConnectClient(const QConnect::QConnectClientConfiguration& clientConfiguration,
                               std::shared_ptr<QConnectEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QConnectErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<QConnectEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

QConnectClient::QConnectClient(const AWSCredentials& credentials,
                               std::shared_ptr<QConnectEndpointProviderBase> endpointProvider,
                               const QConnect::QConnectClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<QConnectEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

QConnectClient::QConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<QConnectEndpointProviderBase> endpointProvider,
                               const QConnect::QConnectClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<QConnectEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  QConnectClient::QConnectClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QConnectErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_endpointProvider(Aws::MakeShared<QConnectEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

QConnectClient::QConnectClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(Aws::MakeShared<QConnectEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

QConnectClient::QConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(Aws::MakeShared<QConnectEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
QConnectClient::~QConnectClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<QConnectEndpointProviderBase>& QConnectClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void QConnectClient::init(const QConnect::QConnectClientConfiguration& config)
{
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
  m_endpointProvider->InitBuiltInParameters(config);
}

void QConnectClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

ActivateMessageTemplateOutcome QConnectClient::ActivateMessageTemplate(const ActivateMessageTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(ActivateMessageTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ActivateMessageTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ActivateMessageTemplate", "Required field: KnowledgeBaseId, is not set");
    return ActivateMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.MessageTemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ActivateMessageTemplate", "Required field: MessageTemplateId, is not set");
    return ActivateMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageTemplateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ActivateMessageTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ActivateMessageTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ActivateMessageTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ActivateMessageTemplateOutcome>(
    [&]()-> ActivateMessageTemplateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ActivateMessageTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/activate");
      return ActivateMessageTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAIAgentOutcome QConnectClient::CreateAIAgent(const CreateAIAgentRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAIAgent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAIAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAIAgent", "Required field: AssistantId, is not set");
    return CreateAIAgentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateAIAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAIAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAIAgent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAIAgentOutcome>(
    [&]()-> CreateAIAgentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAIAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiagents");
      return CreateAIAgentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAIAgentVersionOutcome QConnectClient::CreateAIAgentVersion(const CreateAIAgentVersionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAIAgentVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAIAgentVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAIAgentVersion", "Required field: AssistantId, is not set");
    return CreateAIAgentVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.AiAgentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAIAgentVersion", "Required field: AiAgentId, is not set");
    return CreateAIAgentVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AiAgentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateAIAgentVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAIAgentVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAIAgentVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAIAgentVersionOutcome>(
    [&]()-> CreateAIAgentVersionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAIAgentVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiagents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiAgentId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
      return CreateAIAgentVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAIGuardrailOutcome QConnectClient::CreateAIGuardrail(const CreateAIGuardrailRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAIGuardrail);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAIGuardrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAIGuardrail", "Required field: AssistantId, is not set");
    return CreateAIGuardrailOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateAIGuardrail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAIGuardrail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAIGuardrail",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAIGuardrailOutcome>(
    [&]()-> CreateAIGuardrailOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAIGuardrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiguardrails");
      return CreateAIGuardrailOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAIGuardrailVersionOutcome QConnectClient::CreateAIGuardrailVersion(const CreateAIGuardrailVersionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAIGuardrailVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAIGuardrailVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAIGuardrailVersion", "Required field: AssistantId, is not set");
    return CreateAIGuardrailVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.AiGuardrailIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAIGuardrailVersion", "Required field: AiGuardrailId, is not set");
    return CreateAIGuardrailVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AiGuardrailId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateAIGuardrailVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAIGuardrailVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAIGuardrailVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAIGuardrailVersionOutcome>(
    [&]()-> CreateAIGuardrailVersionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAIGuardrailVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiguardrails/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiGuardrailId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
      return CreateAIGuardrailVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAIPromptOutcome QConnectClient::CreateAIPrompt(const CreateAIPromptRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAIPrompt);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAIPrompt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAIPrompt", "Required field: AssistantId, is not set");
    return CreateAIPromptOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateAIPrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAIPrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAIPrompt",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAIPromptOutcome>(
    [&]()-> CreateAIPromptOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAIPrompt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiprompts");
      return CreateAIPromptOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAIPromptVersionOutcome QConnectClient::CreateAIPromptVersion(const CreateAIPromptVersionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAIPromptVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAIPromptVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAIPromptVersion", "Required field: AssistantId, is not set");
    return CreateAIPromptVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.AiPromptIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAIPromptVersion", "Required field: AiPromptId, is not set");
    return CreateAIPromptVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AiPromptId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateAIPromptVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAIPromptVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAIPromptVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAIPromptVersionOutcome>(
    [&]()-> CreateAIPromptVersionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAIPromptVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiprompts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiPromptId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
      return CreateAIPromptVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAssistantOutcome QConnectClient::CreateAssistant(const CreateAssistantRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAssistant);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAssistant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateAssistant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAssistant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAssistant",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAssistantOutcome>(
    [&]()-> CreateAssistantOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAssistant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants");
      return CreateAssistantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAssistantAssociationOutcome QConnectClient::CreateAssistantAssociation(const CreateAssistantAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAssistantAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAssistantAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAssistantAssociation", "Required field: AssistantId, is not set");
    return CreateAssistantAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateAssistantAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAssistantAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAssistantAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAssistantAssociationOutcome>(
    [&]()-> CreateAssistantAssociationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAssistantAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
      return CreateAssistantAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateContentOutcome QConnectClient::CreateContent(const CreateContentRequest& request) const
{
  AWS_OPERATION_GUARD(CreateContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateContent", "Required field: KnowledgeBaseId, is not set");
    return CreateContentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateContent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateContentOutcome>(
    [&]()-> CreateContentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/contents");
      return CreateContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateContentAssociationOutcome QConnectClient::CreateContentAssociation(const CreateContentAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateContentAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContentAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateContentAssociation", "Required field: KnowledgeBaseId, is not set");
    return CreateContentAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.ContentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateContentAssociation", "Required field: ContentId, is not set");
    return CreateContentAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateContentAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateContentAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateContentAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateContentAssociationOutcome>(
    [&]()-> CreateContentAssociationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContentAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/contents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
      return CreateContentAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateKnowledgeBaseOutcome QConnectClient::CreateKnowledgeBase(const CreateKnowledgeBaseRequest& request) const
{
  AWS_OPERATION_GUARD(CreateKnowledgeBase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateKnowledgeBase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateKnowledgeBase",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateKnowledgeBaseOutcome>(
    [&]()-> CreateKnowledgeBaseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateKnowledgeBase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases");
      return CreateKnowledgeBaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMessageTemplateOutcome QConnectClient::CreateMessageTemplate(const CreateMessageTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMessageTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMessageTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMessageTemplate", "Required field: KnowledgeBaseId, is not set");
    return CreateMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateMessageTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMessageTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMessageTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMessageTemplateOutcome>(
    [&]()-> CreateMessageTemplateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMessageTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates");
      return CreateMessageTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMessageTemplateAttachmentOutcome QConnectClient::CreateMessageTemplateAttachment(const CreateMessageTemplateAttachmentRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMessageTemplateAttachment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMessageTemplateAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMessageTemplateAttachment", "Required field: KnowledgeBaseId, is not set");
    return CreateMessageTemplateAttachmentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.MessageTemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMessageTemplateAttachment", "Required field: MessageTemplateId, is not set");
    return CreateMessageTemplateAttachmentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageTemplateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateMessageTemplateAttachment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMessageTemplateAttachment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMessageTemplateAttachment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMessageTemplateAttachmentOutcome>(
    [&]()-> CreateMessageTemplateAttachmentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMessageTemplateAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/attachments");
      return CreateMessageTemplateAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMessageTemplateVersionOutcome QConnectClient::CreateMessageTemplateVersion(const CreateMessageTemplateVersionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMessageTemplateVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMessageTemplateVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMessageTemplateVersion", "Required field: KnowledgeBaseId, is not set");
    return CreateMessageTemplateVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.MessageTemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMessageTemplateVersion", "Required field: MessageTemplateId, is not set");
    return CreateMessageTemplateVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageTemplateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateMessageTemplateVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMessageTemplateVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMessageTemplateVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMessageTemplateVersionOutcome>(
    [&]()-> CreateMessageTemplateVersionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMessageTemplateVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
      return CreateMessageTemplateVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateQuickResponseOutcome QConnectClient::CreateQuickResponse(const CreateQuickResponseRequest& request) const
{
  AWS_OPERATION_GUARD(CreateQuickResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateQuickResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateQuickResponse", "Required field: KnowledgeBaseId, is not set");
    return CreateQuickResponseOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateQuickResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateQuickResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateQuickResponse",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateQuickResponseOutcome>(
    [&]()-> CreateQuickResponseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateQuickResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/quickResponses");
      return CreateQuickResponseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSessionOutcome QConnectClient::CreateSession(const CreateSessionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSession", "Required field: AssistantId, is not set");
    return CreateSessionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSessionOutcome>(
    [&]()-> CreateSessionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions");
      return CreateSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeactivateMessageTemplateOutcome QConnectClient::DeactivateMessageTemplate(const DeactivateMessageTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(DeactivateMessageTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeactivateMessageTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeactivateMessageTemplate", "Required field: KnowledgeBaseId, is not set");
    return DeactivateMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.MessageTemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeactivateMessageTemplate", "Required field: MessageTemplateId, is not set");
    return DeactivateMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageTemplateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeactivateMessageTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeactivateMessageTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeactivateMessageTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeactivateMessageTemplateOutcome>(
    [&]()-> DeactivateMessageTemplateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeactivateMessageTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/deactivate");
      return DeactivateMessageTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAIAgentOutcome QConnectClient::DeleteAIAgent(const DeleteAIAgentRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAIAgent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAIAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAIAgent", "Required field: AssistantId, is not set");
    return DeleteAIAgentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.AiAgentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAIAgent", "Required field: AiAgentId, is not set");
    return DeleteAIAgentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AiAgentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteAIAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAIAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAIAgent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAIAgentOutcome>(
    [&]()-> DeleteAIAgentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAIAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiagents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiAgentId());
      return DeleteAIAgentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAIAgentVersionOutcome QConnectClient::DeleteAIAgentVersion(const DeleteAIAgentVersionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAIAgentVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAIAgentVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAIAgentVersion", "Required field: AssistantId, is not set");
    return DeleteAIAgentVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.AiAgentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAIAgentVersion", "Required field: AiAgentId, is not set");
    return DeleteAIAgentVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AiAgentId]", false));
  }
  if (!request.VersionNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAIAgentVersion", "Required field: VersionNumber, is not set");
    return DeleteAIAgentVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionNumber]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteAIAgentVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAIAgentVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAIAgentVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAIAgentVersionOutcome>(
    [&]()-> DeleteAIAgentVersionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAIAgentVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiagents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiAgentId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionNumber());
      return DeleteAIAgentVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAIGuardrailOutcome QConnectClient::DeleteAIGuardrail(const DeleteAIGuardrailRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAIGuardrail);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAIGuardrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAIGuardrail", "Required field: AssistantId, is not set");
    return DeleteAIGuardrailOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.AiGuardrailIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAIGuardrail", "Required field: AiGuardrailId, is not set");
    return DeleteAIGuardrailOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AiGuardrailId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteAIGuardrail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAIGuardrail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAIGuardrail",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAIGuardrailOutcome>(
    [&]()-> DeleteAIGuardrailOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAIGuardrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiguardrails/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiGuardrailId());
      return DeleteAIGuardrailOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAIGuardrailVersionOutcome QConnectClient::DeleteAIGuardrailVersion(const DeleteAIGuardrailVersionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAIGuardrailVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAIGuardrailVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAIGuardrailVersion", "Required field: AssistantId, is not set");
    return DeleteAIGuardrailVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.AiGuardrailIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAIGuardrailVersion", "Required field: AiGuardrailId, is not set");
    return DeleteAIGuardrailVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AiGuardrailId]", false));
  }
  if (!request.VersionNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAIGuardrailVersion", "Required field: VersionNumber, is not set");
    return DeleteAIGuardrailVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionNumber]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteAIGuardrailVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAIGuardrailVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAIGuardrailVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAIGuardrailVersionOutcome>(
    [&]()-> DeleteAIGuardrailVersionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAIGuardrailVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiguardrails/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiGuardrailId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionNumber());
      return DeleteAIGuardrailVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAIPromptOutcome QConnectClient::DeleteAIPrompt(const DeleteAIPromptRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAIPrompt);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAIPrompt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAIPrompt", "Required field: AssistantId, is not set");
    return DeleteAIPromptOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.AiPromptIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAIPrompt", "Required field: AiPromptId, is not set");
    return DeleteAIPromptOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AiPromptId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteAIPrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAIPrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAIPrompt",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAIPromptOutcome>(
    [&]()-> DeleteAIPromptOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAIPrompt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiprompts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiPromptId());
      return DeleteAIPromptOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAIPromptVersionOutcome QConnectClient::DeleteAIPromptVersion(const DeleteAIPromptVersionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAIPromptVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAIPromptVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAIPromptVersion", "Required field: AssistantId, is not set");
    return DeleteAIPromptVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.AiPromptIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAIPromptVersion", "Required field: AiPromptId, is not set");
    return DeleteAIPromptVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AiPromptId]", false));
  }
  if (!request.VersionNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAIPromptVersion", "Required field: VersionNumber, is not set");
    return DeleteAIPromptVersionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionNumber]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteAIPromptVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAIPromptVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAIPromptVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAIPromptVersionOutcome>(
    [&]()-> DeleteAIPromptVersionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAIPromptVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiprompts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiPromptId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionNumber());
      return DeleteAIPromptVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAssistantOutcome QConnectClient::DeleteAssistant(const DeleteAssistantRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAssistant);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAssistant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssistant", "Required field: AssistantId, is not set");
    return DeleteAssistantOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteAssistant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAssistant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAssistant",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAssistantOutcome>(
    [&]()-> DeleteAssistantOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAssistant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      return DeleteAssistantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAssistantAssociationOutcome QConnectClient::DeleteAssistantAssociation(const DeleteAssistantAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAssistantAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAssistantAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssistantAssociation", "Required field: AssistantAssociationId, is not set");
    return DeleteAssistantAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantAssociationId]", false));
  }
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAssistantAssociation", "Required field: AssistantId, is not set");
    return DeleteAssistantAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteAssistantAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAssistantAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAssistantAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAssistantAssociationOutcome>(
    [&]()-> DeleteAssistantAssociationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAssistantAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/associations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantAssociationId());
      return DeleteAssistantAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteContentOutcome QConnectClient::DeleteContent(const DeleteContentRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContent", "Required field: KnowledgeBaseId, is not set");
    return DeleteContentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.ContentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContent", "Required field: ContentId, is not set");
    return DeleteContentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteContent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteContentOutcome>(
    [&]()-> DeleteContentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/contents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentId());
      return DeleteContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteContentAssociationOutcome QConnectClient::DeleteContentAssociation(const DeleteContentAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteContentAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContentAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContentAssociation", "Required field: KnowledgeBaseId, is not set");
    return DeleteContentAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.ContentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContentAssociation", "Required field: ContentId, is not set");
    return DeleteContentAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentId]", false));
  }
  if (!request.ContentAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContentAssociation", "Required field: ContentAssociationId, is not set");
    return DeleteContentAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentAssociationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteContentAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteContentAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteContentAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteContentAssociationOutcome>(
    [&]()-> DeleteContentAssociationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContentAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/contents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/associations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentAssociationId());
      return DeleteContentAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteImportJobOutcome QConnectClient::DeleteImportJob(const DeleteImportJobRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteImportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteImportJob", "Required field: KnowledgeBaseId, is not set");
    return DeleteImportJobOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.ImportJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteImportJob", "Required field: ImportJobId, is not set");
    return DeleteImportJobOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImportJobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteImportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteImportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteImportJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteImportJobOutcome>(
    [&]()-> DeleteImportJobOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/importJobs/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImportJobId());
      return DeleteImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteKnowledgeBaseOutcome QConnectClient::DeleteKnowledgeBase(const DeleteKnowledgeBaseRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteKnowledgeBase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKnowledgeBase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKnowledgeBase", "Required field: KnowledgeBaseId, is not set");
    return DeleteKnowledgeBaseOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteKnowledgeBase",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteKnowledgeBaseOutcome>(
    [&]()-> DeleteKnowledgeBaseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteKnowledgeBase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      return DeleteKnowledgeBaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMessageTemplateOutcome QConnectClient::DeleteMessageTemplate(const DeleteMessageTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMessageTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMessageTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMessageTemplate", "Required field: KnowledgeBaseId, is not set");
    return DeleteMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.MessageTemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMessageTemplate", "Required field: MessageTemplateId, is not set");
    return DeleteMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageTemplateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteMessageTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMessageTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMessageTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMessageTemplateOutcome>(
    [&]()-> DeleteMessageTemplateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMessageTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
      return DeleteMessageTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMessageTemplateAttachmentOutcome QConnectClient::DeleteMessageTemplateAttachment(const DeleteMessageTemplateAttachmentRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMessageTemplateAttachment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMessageTemplateAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMessageTemplateAttachment", "Required field: KnowledgeBaseId, is not set");
    return DeleteMessageTemplateAttachmentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.MessageTemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMessageTemplateAttachment", "Required field: MessageTemplateId, is not set");
    return DeleteMessageTemplateAttachmentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageTemplateId]", false));
  }
  if (!request.AttachmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMessageTemplateAttachment", "Required field: AttachmentId, is not set");
    return DeleteMessageTemplateAttachmentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttachmentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteMessageTemplateAttachment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMessageTemplateAttachment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMessageTemplateAttachment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMessageTemplateAttachmentOutcome>(
    [&]()-> DeleteMessageTemplateAttachmentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMessageTemplateAttachment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/attachments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttachmentId());
      return DeleteMessageTemplateAttachmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteQuickResponseOutcome QConnectClient::DeleteQuickResponse(const DeleteQuickResponseRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteQuickResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteQuickResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQuickResponse", "Required field: KnowledgeBaseId, is not set");
    return DeleteQuickResponseOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.QuickResponseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteQuickResponse", "Required field: QuickResponseId, is not set");
    return DeleteQuickResponseOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QuickResponseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteQuickResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteQuickResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteQuickResponse",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteQuickResponseOutcome>(
    [&]()-> DeleteQuickResponseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteQuickResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/quickResponses/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQuickResponseId());
      return DeleteQuickResponseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAIAgentOutcome QConnectClient::GetAIAgent(const GetAIAgentRequest& request) const
{
  AWS_OPERATION_GUARD(GetAIAgent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAIAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAIAgent", "Required field: AssistantId, is not set");
    return GetAIAgentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.AiAgentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAIAgent", "Required field: AiAgentId, is not set");
    return GetAIAgentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AiAgentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetAIAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAIAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAIAgent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAIAgentOutcome>(
    [&]()-> GetAIAgentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAIAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiagents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiAgentId());
      return GetAIAgentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAIGuardrailOutcome QConnectClient::GetAIGuardrail(const GetAIGuardrailRequest& request) const
{
  AWS_OPERATION_GUARD(GetAIGuardrail);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAIGuardrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAIGuardrail", "Required field: AssistantId, is not set");
    return GetAIGuardrailOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.AiGuardrailIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAIGuardrail", "Required field: AiGuardrailId, is not set");
    return GetAIGuardrailOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AiGuardrailId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetAIGuardrail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAIGuardrail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAIGuardrail",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAIGuardrailOutcome>(
    [&]()-> GetAIGuardrailOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAIGuardrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiguardrails/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiGuardrailId());
      return GetAIGuardrailOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAIPromptOutcome QConnectClient::GetAIPrompt(const GetAIPromptRequest& request) const
{
  AWS_OPERATION_GUARD(GetAIPrompt);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAIPrompt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAIPrompt", "Required field: AssistantId, is not set");
    return GetAIPromptOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.AiPromptIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAIPrompt", "Required field: AiPromptId, is not set");
    return GetAIPromptOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AiPromptId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetAIPrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAIPrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAIPrompt",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAIPromptOutcome>(
    [&]()-> GetAIPromptOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAIPrompt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiprompts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiPromptId());
      return GetAIPromptOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAssistantOutcome QConnectClient::GetAssistant(const GetAssistantRequest& request) const
{
  AWS_OPERATION_GUARD(GetAssistant);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAssistant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssistant", "Required field: AssistantId, is not set");
    return GetAssistantOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetAssistant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAssistant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAssistant",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAssistantOutcome>(
    [&]()-> GetAssistantOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAssistant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      return GetAssistantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAssistantAssociationOutcome QConnectClient::GetAssistantAssociation(const GetAssistantAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(GetAssistantAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAssistantAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssistantAssociation", "Required field: AssistantAssociationId, is not set");
    return GetAssistantAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantAssociationId]", false));
  }
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssistantAssociation", "Required field: AssistantId, is not set");
    return GetAssistantAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetAssistantAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAssistantAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAssistantAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAssistantAssociationOutcome>(
    [&]()-> GetAssistantAssociationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAssistantAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/associations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantAssociationId());
      return GetAssistantAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetContentOutcome QConnectClient::GetContent(const GetContentRequest& request) const
{
  AWS_OPERATION_GUARD(GetContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ContentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContent", "Required field: ContentId, is not set");
    return GetContentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContent", "Required field: KnowledgeBaseId, is not set");
    return GetContentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetContent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetContentOutcome>(
    [&]()-> GetContentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/contents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentId());
      return GetContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetContentAssociationOutcome QConnectClient::GetContentAssociation(const GetContentAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(GetContentAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContentAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContentAssociation", "Required field: KnowledgeBaseId, is not set");
    return GetContentAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.ContentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContentAssociation", "Required field: ContentId, is not set");
    return GetContentAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentId]", false));
  }
  if (!request.ContentAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContentAssociation", "Required field: ContentAssociationId, is not set");
    return GetContentAssociationOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentAssociationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetContentAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetContentAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetContentAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetContentAssociationOutcome>(
    [&]()-> GetContentAssociationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContentAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/contents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/associations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentAssociationId());
      return GetContentAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetContentSummaryOutcome QConnectClient::GetContentSummary(const GetContentSummaryRequest& request) const
{
  AWS_OPERATION_GUARD(GetContentSummary);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContentSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ContentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContentSummary", "Required field: ContentId, is not set");
    return GetContentSummaryOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContentSummary", "Required field: KnowledgeBaseId, is not set");
    return GetContentSummaryOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetContentSummary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetContentSummary, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetContentSummary",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetContentSummaryOutcome>(
    [&]()-> GetContentSummaryOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContentSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/contents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/summary");
      return GetContentSummaryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetImportJobOutcome QConnectClient::GetImportJob(const GetImportJobRequest& request) const
{
  AWS_OPERATION_GUARD(GetImportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ImportJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImportJob", "Required field: ImportJobId, is not set");
    return GetImportJobOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImportJobId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImportJob", "Required field: KnowledgeBaseId, is not set");
    return GetImportJobOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetImportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetImportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetImportJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetImportJobOutcome>(
    [&]()-> GetImportJobOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/importJobs/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetImportJobId());
      return GetImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKnowledgeBaseOutcome QConnectClient::GetKnowledgeBase(const GetKnowledgeBaseRequest& request) const
{
  AWS_OPERATION_GUARD(GetKnowledgeBase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKnowledgeBase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKnowledgeBase", "Required field: KnowledgeBaseId, is not set");
    return GetKnowledgeBaseOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKnowledgeBase",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKnowledgeBaseOutcome>(
    [&]()-> GetKnowledgeBaseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKnowledgeBase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      return GetKnowledgeBaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMessageTemplateOutcome QConnectClient::GetMessageTemplate(const GetMessageTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(GetMessageTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMessageTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MessageTemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMessageTemplate", "Required field: MessageTemplateId, is not set");
    return GetMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageTemplateId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMessageTemplate", "Required field: KnowledgeBaseId, is not set");
    return GetMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetMessageTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMessageTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMessageTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMessageTemplateOutcome>(
    [&]()-> GetMessageTemplateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMessageTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
      return GetMessageTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetNextMessageOutcome QConnectClient::GetNextMessage(const GetNextMessageRequest& request) const
{
  AWS_OPERATION_GUARD(GetNextMessage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetNextMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNextMessage", "Required field: AssistantId, is not set");
    return GetNextMessageOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNextMessage", "Required field: SessionId, is not set");
    return GetNextMessageOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  if (!request.NextMessageTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNextMessage", "Required field: NextMessageToken, is not set");
    return GetNextMessageOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NextMessageToken]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetNextMessage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetNextMessage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetNextMessage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetNextMessageOutcome>(
    [&]()-> GetNextMessageOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetNextMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/messages/next");
      return GetNextMessageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetQuickResponseOutcome QConnectClient::GetQuickResponse(const GetQuickResponseRequest& request) const
{
  AWS_OPERATION_GUARD(GetQuickResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetQuickResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.QuickResponseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQuickResponse", "Required field: QuickResponseId, is not set");
    return GetQuickResponseOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QuickResponseId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQuickResponse", "Required field: KnowledgeBaseId, is not set");
    return GetQuickResponseOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetQuickResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQuickResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQuickResponse",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQuickResponseOutcome>(
    [&]()-> GetQuickResponseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetQuickResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/quickResponses/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQuickResponseId());
      return GetQuickResponseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSessionOutcome QConnectClient::GetSession(const GetSessionRequest& request) const
{
  AWS_OPERATION_GUARD(GetSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: AssistantId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: SessionId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSessionOutcome>(
    [&]()-> GetSessionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
      return GetSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAIAgentVersionsOutcome QConnectClient::ListAIAgentVersions(const ListAIAgentVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAIAgentVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAIAgentVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAIAgentVersions", "Required field: AssistantId, is not set");
    return ListAIAgentVersionsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.AiAgentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAIAgentVersions", "Required field: AiAgentId, is not set");
    return ListAIAgentVersionsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AiAgentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAIAgentVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAIAgentVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAIAgentVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAIAgentVersionsOutcome>(
    [&]()-> ListAIAgentVersionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAIAgentVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiagents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiAgentId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
      return ListAIAgentVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAIAgentsOutcome QConnectClient::ListAIAgents(const ListAIAgentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAIAgents);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAIAgents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAIAgents", "Required field: AssistantId, is not set");
    return ListAIAgentsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAIAgents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAIAgents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAIAgents",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAIAgentsOutcome>(
    [&]()-> ListAIAgentsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAIAgents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiagents");
      return ListAIAgentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAIGuardrailVersionsOutcome QConnectClient::ListAIGuardrailVersions(const ListAIGuardrailVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAIGuardrailVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAIGuardrailVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAIGuardrailVersions", "Required field: AssistantId, is not set");
    return ListAIGuardrailVersionsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.AiGuardrailIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAIGuardrailVersions", "Required field: AiGuardrailId, is not set");
    return ListAIGuardrailVersionsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AiGuardrailId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAIGuardrailVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAIGuardrailVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAIGuardrailVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAIGuardrailVersionsOutcome>(
    [&]()-> ListAIGuardrailVersionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAIGuardrailVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiguardrails/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiGuardrailId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
      return ListAIGuardrailVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAIGuardrailsOutcome QConnectClient::ListAIGuardrails(const ListAIGuardrailsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAIGuardrails);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAIGuardrails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAIGuardrails", "Required field: AssistantId, is not set");
    return ListAIGuardrailsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAIGuardrails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAIGuardrails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAIGuardrails",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAIGuardrailsOutcome>(
    [&]()-> ListAIGuardrailsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAIGuardrails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiguardrails");
      return ListAIGuardrailsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAIPromptVersionsOutcome QConnectClient::ListAIPromptVersions(const ListAIPromptVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAIPromptVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAIPromptVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAIPromptVersions", "Required field: AssistantId, is not set");
    return ListAIPromptVersionsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.AiPromptIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAIPromptVersions", "Required field: AiPromptId, is not set");
    return ListAIPromptVersionsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AiPromptId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAIPromptVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAIPromptVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAIPromptVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAIPromptVersionsOutcome>(
    [&]()-> ListAIPromptVersionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAIPromptVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiprompts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiPromptId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
      return ListAIPromptVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAIPromptsOutcome QConnectClient::ListAIPrompts(const ListAIPromptsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAIPrompts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAIPrompts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAIPrompts", "Required field: AssistantId, is not set");
    return ListAIPromptsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAIPrompts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAIPrompts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAIPrompts",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAIPromptsOutcome>(
    [&]()-> ListAIPromptsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAIPrompts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiprompts");
      return ListAIPromptsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAssistantAssociationsOutcome QConnectClient::ListAssistantAssociations(const ListAssistantAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAssistantAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssistantAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssistantAssociations", "Required field: AssistantId, is not set");
    return ListAssistantAssociationsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAssistantAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAssistantAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAssistantAssociations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAssistantAssociationsOutcome>(
    [&]()-> ListAssistantAssociationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssistantAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
      return ListAssistantAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAssistantsOutcome QConnectClient::ListAssistants(const ListAssistantsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAssistants);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssistants, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAssistants, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAssistants, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAssistants",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAssistantsOutcome>(
    [&]()-> ListAssistantsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssistants, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants");
      return ListAssistantsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListContentAssociationsOutcome QConnectClient::ListContentAssociations(const ListContentAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListContentAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListContentAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListContentAssociations", "Required field: KnowledgeBaseId, is not set");
    return ListContentAssociationsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.ContentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListContentAssociations", "Required field: ContentId, is not set");
    return ListContentAssociationsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListContentAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListContentAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListContentAssociations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListContentAssociationsOutcome>(
    [&]()-> ListContentAssociationsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListContentAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/contents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
      return ListContentAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListContentsOutcome QConnectClient::ListContents(const ListContentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListContents);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListContents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListContents", "Required field: KnowledgeBaseId, is not set");
    return ListContentsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListContents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListContents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListContents",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListContentsOutcome>(
    [&]()-> ListContentsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListContents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/contents");
      return ListContentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListImportJobsOutcome QConnectClient::ListImportJobs(const ListImportJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListImportJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListImportJobs", "Required field: KnowledgeBaseId, is not set");
    return ListImportJobsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListImportJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListImportJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListImportJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListImportJobsOutcome>(
    [&]()-> ListImportJobsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/importJobs");
      return ListImportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKnowledgeBasesOutcome QConnectClient::ListKnowledgeBases(const ListKnowledgeBasesRequest& request) const
{
  AWS_OPERATION_GUARD(ListKnowledgeBases);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListKnowledgeBases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListKnowledgeBases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKnowledgeBases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKnowledgeBases",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKnowledgeBasesOutcome>(
    [&]()-> ListKnowledgeBasesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListKnowledgeBases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases");
      return ListKnowledgeBasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMessageTemplateVersionsOutcome QConnectClient::ListMessageTemplateVersions(const ListMessageTemplateVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMessageTemplateVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMessageTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMessageTemplateVersions", "Required field: KnowledgeBaseId, is not set");
    return ListMessageTemplateVersionsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.MessageTemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMessageTemplateVersions", "Required field: MessageTemplateId, is not set");
    return ListMessageTemplateVersionsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageTemplateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListMessageTemplateVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMessageTemplateVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMessageTemplateVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMessageTemplateVersionsOutcome>(
    [&]()-> ListMessageTemplateVersionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMessageTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
      return ListMessageTemplateVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMessageTemplatesOutcome QConnectClient::ListMessageTemplates(const ListMessageTemplatesRequest& request) const
{
  AWS_OPERATION_GUARD(ListMessageTemplates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMessageTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMessageTemplates", "Required field: KnowledgeBaseId, is not set");
    return ListMessageTemplatesOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListMessageTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMessageTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMessageTemplates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMessageTemplatesOutcome>(
    [&]()-> ListMessageTemplatesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMessageTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates");
      return ListMessageTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMessagesOutcome QConnectClient::ListMessages(const ListMessagesRequest& request) const
{
  AWS_OPERATION_GUARD(ListMessages);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMessages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMessages", "Required field: AssistantId, is not set");
    return ListMessagesOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMessages", "Required field: SessionId, is not set");
    return ListMessagesOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListMessages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMessages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMessages",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMessagesOutcome>(
    [&]()-> ListMessagesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMessages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/messages");
      return ListMessagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListQuickResponsesOutcome QConnectClient::ListQuickResponses(const ListQuickResponsesRequest& request) const
{
  AWS_OPERATION_GUARD(ListQuickResponses);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListQuickResponses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListQuickResponses", "Required field: KnowledgeBaseId, is not set");
    return ListQuickResponsesOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListQuickResponses, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListQuickResponses, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListQuickResponses",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListQuickResponsesOutcome>(
    [&]()-> ListQuickResponsesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListQuickResponses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/quickResponses");
      return ListQuickResponsesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome QConnectClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

NotifyRecommendationsReceivedOutcome QConnectClient::NotifyRecommendationsReceived(const NotifyRecommendationsReceivedRequest& request) const
{
  AWS_OPERATION_GUARD(NotifyRecommendationsReceived);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, NotifyRecommendationsReceived, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("NotifyRecommendationsReceived", "Required field: AssistantId, is not set");
    return NotifyRecommendationsReceivedOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("NotifyRecommendationsReceived", "Required field: SessionId, is not set");
    return NotifyRecommendationsReceivedOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, NotifyRecommendationsReceived, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, NotifyRecommendationsReceived, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".NotifyRecommendationsReceived",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<NotifyRecommendationsReceivedOutcome>(
    [&]()-> NotifyRecommendationsReceivedOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, NotifyRecommendationsReceived, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/recommendations/notify");
      return NotifyRecommendationsReceivedOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutFeedbackOutcome QConnectClient::PutFeedback(const PutFeedbackRequest& request) const
{
  AWS_OPERATION_GUARD(PutFeedback);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutFeedback", "Required field: AssistantId, is not set");
    return PutFeedbackOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutFeedback, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutFeedback, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutFeedback",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutFeedbackOutcome>(
    [&]()-> PutFeedbackOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/feedback");
      return PutFeedbackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RemoveAssistantAIAgentOutcome QConnectClient::RemoveAssistantAIAgent(const RemoveAssistantAIAgentRequest& request) const
{
  AWS_OPERATION_GUARD(RemoveAssistantAIAgent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveAssistantAIAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveAssistantAIAgent", "Required field: AssistantId, is not set");
    return RemoveAssistantAIAgentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.AiAgentTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveAssistantAIAgent", "Required field: AiAgentType, is not set");
    return RemoveAssistantAIAgentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AiAgentType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RemoveAssistantAIAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RemoveAssistantAIAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RemoveAssistantAIAgent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RemoveAssistantAIAgentOutcome>(
    [&]()-> RemoveAssistantAIAgentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveAssistantAIAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiagentConfiguration");
      return RemoveAssistantAIAgentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RemoveKnowledgeBaseTemplateUriOutcome QConnectClient::RemoveKnowledgeBaseTemplateUri(const RemoveKnowledgeBaseTemplateUriRequest& request) const
{
  AWS_OPERATION_GUARD(RemoveKnowledgeBaseTemplateUri);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveKnowledgeBaseTemplateUri, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveKnowledgeBaseTemplateUri", "Required field: KnowledgeBaseId, is not set");
    return RemoveKnowledgeBaseTemplateUriOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RemoveKnowledgeBaseTemplateUri, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RemoveKnowledgeBaseTemplateUri, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RemoveKnowledgeBaseTemplateUri",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RemoveKnowledgeBaseTemplateUriOutcome>(
    [&]()-> RemoveKnowledgeBaseTemplateUriOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveKnowledgeBaseTemplateUri, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/templateUri");
      return RemoveKnowledgeBaseTemplateUriOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RenderMessageTemplateOutcome QConnectClient::RenderMessageTemplate(const RenderMessageTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(RenderMessageTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RenderMessageTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RenderMessageTemplate", "Required field: KnowledgeBaseId, is not set");
    return RenderMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.MessageTemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RenderMessageTemplate", "Required field: MessageTemplateId, is not set");
    return RenderMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageTemplateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RenderMessageTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RenderMessageTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RenderMessageTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RenderMessageTemplateOutcome>(
    [&]()-> RenderMessageTemplateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RenderMessageTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/render");
      return RenderMessageTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchContentOutcome QConnectClient::SearchContent(const SearchContentRequest& request) const
{
  AWS_OPERATION_GUARD(SearchContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchContent", "Required field: KnowledgeBaseId, is not set");
    return SearchContentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchContent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchContentOutcome>(
    [&]()-> SearchContentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/search");
      return SearchContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchMessageTemplatesOutcome QConnectClient::SearchMessageTemplates(const SearchMessageTemplatesRequest& request) const
{
  AWS_OPERATION_GUARD(SearchMessageTemplates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchMessageTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchMessageTemplates", "Required field: KnowledgeBaseId, is not set");
    return SearchMessageTemplatesOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchMessageTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchMessageTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchMessageTemplates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchMessageTemplatesOutcome>(
    [&]()-> SearchMessageTemplatesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchMessageTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/search/messageTemplates");
      return SearchMessageTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchQuickResponsesOutcome QConnectClient::SearchQuickResponses(const SearchQuickResponsesRequest& request) const
{
  AWS_OPERATION_GUARD(SearchQuickResponses);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchQuickResponses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchQuickResponses", "Required field: KnowledgeBaseId, is not set");
    return SearchQuickResponsesOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchQuickResponses, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchQuickResponses, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchQuickResponses",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchQuickResponsesOutcome>(
    [&]()-> SearchQuickResponsesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchQuickResponses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/search/quickResponses");
      return SearchQuickResponsesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchSessionsOutcome QConnectClient::SearchSessions(const SearchSessionsRequest& request) const
{
  AWS_OPERATION_GUARD(SearchSessions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchSessions", "Required field: AssistantId, is not set");
    return SearchSessionsOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchSessions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchSessions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchSessions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchSessionsOutcome>(
    [&]()-> SearchSessionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/searchSessions");
      return SearchSessionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SendMessageOutcome QConnectClient::SendMessage(const SendMessageRequest& request) const
{
  AWS_OPERATION_GUARD(SendMessage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendMessage", "Required field: AssistantId, is not set");
    return SendMessageOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendMessage", "Required field: SessionId, is not set");
    return SendMessageOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SendMessage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SendMessage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SendMessage",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SendMessageOutcome>(
    [&]()-> SendMessageOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/message");
      return SendMessageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartContentUploadOutcome QConnectClient::StartContentUpload(const StartContentUploadRequest& request) const
{
  AWS_OPERATION_GUARD(StartContentUpload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartContentUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartContentUpload", "Required field: KnowledgeBaseId, is not set");
    return StartContentUploadOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartContentUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartContentUpload, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartContentUpload",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartContentUploadOutcome>(
    [&]()-> StartContentUploadOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartContentUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/upload");
      return StartContentUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartImportJobOutcome QConnectClient::StartImportJob(const StartImportJobRequest& request) const
{
  AWS_OPERATION_GUARD(StartImportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartImportJob", "Required field: KnowledgeBaseId, is not set");
    return StartImportJobOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartImportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartImportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartImportJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartImportJobOutcome>(
    [&]()-> StartImportJobOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/importJobs");
      return StartImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome QConnectClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome QConnectClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAIAgentOutcome QConnectClient::UpdateAIAgent(const UpdateAIAgentRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAIAgent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAIAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAIAgent", "Required field: AssistantId, is not set");
    return UpdateAIAgentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.AiAgentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAIAgent", "Required field: AiAgentId, is not set");
    return UpdateAIAgentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AiAgentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateAIAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAIAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAIAgent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAIAgentOutcome>(
    [&]()-> UpdateAIAgentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAIAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiagents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiAgentId());
      return UpdateAIAgentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAIGuardrailOutcome QConnectClient::UpdateAIGuardrail(const UpdateAIGuardrailRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAIGuardrail);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAIGuardrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAIGuardrail", "Required field: AssistantId, is not set");
    return UpdateAIGuardrailOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.AiGuardrailIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAIGuardrail", "Required field: AiGuardrailId, is not set");
    return UpdateAIGuardrailOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AiGuardrailId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateAIGuardrail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAIGuardrail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAIGuardrail",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAIGuardrailOutcome>(
    [&]()-> UpdateAIGuardrailOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAIGuardrail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiguardrails/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiGuardrailId());
      return UpdateAIGuardrailOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAIPromptOutcome QConnectClient::UpdateAIPrompt(const UpdateAIPromptRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAIPrompt);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAIPrompt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAIPrompt", "Required field: AssistantId, is not set");
    return UpdateAIPromptOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.AiPromptIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAIPrompt", "Required field: AiPromptId, is not set");
    return UpdateAIPromptOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AiPromptId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateAIPrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAIPrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAIPrompt",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAIPromptOutcome>(
    [&]()-> UpdateAIPromptOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAIPrompt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiprompts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAiPromptId());
      return UpdateAIPromptOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAssistantAIAgentOutcome QConnectClient::UpdateAssistantAIAgent(const UpdateAssistantAIAgentRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAssistantAIAgent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAssistantAIAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAssistantAIAgent", "Required field: AssistantId, is not set");
    return UpdateAssistantAIAgentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateAssistantAIAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAssistantAIAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAssistantAIAgent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAssistantAIAgentOutcome>(
    [&]()-> UpdateAssistantAIAgentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAssistantAIAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aiagentConfiguration");
      return UpdateAssistantAIAgentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateContentOutcome QConnectClient::UpdateContent(const UpdateContentRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContent", "Required field: KnowledgeBaseId, is not set");
    return UpdateContentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.ContentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContent", "Required field: ContentId, is not set");
    return UpdateContentOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateContent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateContentOutcome>(
    [&]()-> UpdateContentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/contents/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContentId());
      return UpdateContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKnowledgeBaseTemplateUriOutcome QConnectClient::UpdateKnowledgeBaseTemplateUri(const UpdateKnowledgeBaseTemplateUriRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateKnowledgeBaseTemplateUri);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateKnowledgeBaseTemplateUri, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKnowledgeBaseTemplateUri", "Required field: KnowledgeBaseId, is not set");
    return UpdateKnowledgeBaseTemplateUriOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateKnowledgeBaseTemplateUri, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKnowledgeBaseTemplateUri, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKnowledgeBaseTemplateUri",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKnowledgeBaseTemplateUriOutcome>(
    [&]()-> UpdateKnowledgeBaseTemplateUriOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateKnowledgeBaseTemplateUri, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/templateUri");
      return UpdateKnowledgeBaseTemplateUriOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateMessageTemplateOutcome QConnectClient::UpdateMessageTemplate(const UpdateMessageTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateMessageTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMessageTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMessageTemplate", "Required field: KnowledgeBaseId, is not set");
    return UpdateMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.MessageTemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMessageTemplate", "Required field: MessageTemplateId, is not set");
    return UpdateMessageTemplateOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageTemplateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateMessageTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMessageTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMessageTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMessageTemplateOutcome>(
    [&]()-> UpdateMessageTemplateOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMessageTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
      return UpdateMessageTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateMessageTemplateMetadataOutcome QConnectClient::UpdateMessageTemplateMetadata(const UpdateMessageTemplateMetadataRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateMessageTemplateMetadata);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMessageTemplateMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMessageTemplateMetadata", "Required field: KnowledgeBaseId, is not set");
    return UpdateMessageTemplateMetadataOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.MessageTemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMessageTemplateMetadata", "Required field: MessageTemplateId, is not set");
    return UpdateMessageTemplateMetadataOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageTemplateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateMessageTemplateMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMessageTemplateMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMessageTemplateMetadata",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMessageTemplateMetadataOutcome>(
    [&]()-> UpdateMessageTemplateMetadataOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMessageTemplateMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/messageTemplates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageTemplateId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/metadata");
      return UpdateMessageTemplateMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateQuickResponseOutcome QConnectClient::UpdateQuickResponse(const UpdateQuickResponseRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateQuickResponse);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateQuickResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQuickResponse", "Required field: KnowledgeBaseId, is not set");
    return UpdateQuickResponseOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.QuickResponseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQuickResponse", "Required field: QuickResponseId, is not set");
    return UpdateQuickResponseOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QuickResponseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateQuickResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateQuickResponse, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateQuickResponse",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateQuickResponseOutcome>(
    [&]()-> UpdateQuickResponseOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateQuickResponse, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/knowledgeBases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/quickResponses/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQuickResponseId());
      return UpdateQuickResponseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateSessionOutcome QConnectClient::UpdateSession(const UpdateSessionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSession", "Required field: AssistantId, is not set");
    return UpdateSessionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSession", "Required field: SessionId, is not set");
    return UpdateSessionOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSessionOutcome>(
    [&]()-> UpdateSessionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
      return UpdateSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateSessionDataOutcome QConnectClient::UpdateSessionData(const UpdateSessionDataRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSessionData);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSessionData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssistantIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSessionData", "Required field: AssistantId, is not set");
    return UpdateSessionDataOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssistantId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSessionData", "Required field: SessionId, is not set");
    return UpdateSessionDataOutcome(Aws::Client::AWSError<QConnectErrors>(QConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateSessionData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSessionData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSessionData",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSessionDataOutcome>(
    [&]()-> UpdateSessionDataOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSessionData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/assistants/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssistantId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/data");
      return UpdateSessionDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

