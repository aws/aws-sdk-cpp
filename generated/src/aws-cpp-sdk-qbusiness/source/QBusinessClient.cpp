/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/AWSClientBidirectionalStreaming.h>
#include <aws/core/client/AWSClientEventStreamingAsyncTask.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/event/EventStream.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/qbusiness/QBusinessClient.h>
#include <aws/qbusiness/QBusinessEndpointProvider.h>
#include <aws/qbusiness/QBusinessErrorMarshaller.h>
#include <aws/qbusiness/model/AssociatePermissionRequest.h>
#include <aws/qbusiness/model/BatchDeleteDocumentRequest.h>
#include <aws/qbusiness/model/BatchPutDocumentRequest.h>
#include <aws/qbusiness/model/CancelSubscriptionRequest.h>
#include <aws/qbusiness/model/ChatRequest.h>
#include <aws/qbusiness/model/ChatSyncRequest.h>
#include <aws/qbusiness/model/CheckDocumentAccessRequest.h>
#include <aws/qbusiness/model/CreateAnonymousWebExperienceUrlRequest.h>
#include <aws/qbusiness/model/CreateApplicationRequest.h>
#include <aws/qbusiness/model/CreateChatResponseConfigurationRequest.h>
#include <aws/qbusiness/model/CreateDataAccessorRequest.h>
#include <aws/qbusiness/model/CreateDataSourceRequest.h>
#include <aws/qbusiness/model/CreateIndexRequest.h>
#include <aws/qbusiness/model/CreatePluginRequest.h>
#include <aws/qbusiness/model/CreateRetrieverRequest.h>
#include <aws/qbusiness/model/CreateSubscriptionRequest.h>
#include <aws/qbusiness/model/CreateUserRequest.h>
#include <aws/qbusiness/model/CreateWebExperienceRequest.h>
#include <aws/qbusiness/model/DeleteApplicationRequest.h>
#include <aws/qbusiness/model/DeleteAttachmentRequest.h>
#include <aws/qbusiness/model/DeleteChatControlsConfigurationRequest.h>
#include <aws/qbusiness/model/DeleteChatResponseConfigurationRequest.h>
#include <aws/qbusiness/model/DeleteConversationRequest.h>
#include <aws/qbusiness/model/DeleteDataAccessorRequest.h>
#include <aws/qbusiness/model/DeleteDataSourceRequest.h>
#include <aws/qbusiness/model/DeleteGroupRequest.h>
#include <aws/qbusiness/model/DeleteIndexRequest.h>
#include <aws/qbusiness/model/DeletePluginRequest.h>
#include <aws/qbusiness/model/DeleteRetrieverRequest.h>
#include <aws/qbusiness/model/DeleteUserRequest.h>
#include <aws/qbusiness/model/DeleteWebExperienceRequest.h>
#include <aws/qbusiness/model/DisassociatePermissionRequest.h>
#include <aws/qbusiness/model/GetApplicationRequest.h>
#include <aws/qbusiness/model/GetChatControlsConfigurationRequest.h>
#include <aws/qbusiness/model/GetChatResponseConfigurationRequest.h>
#include <aws/qbusiness/model/GetDataAccessorRequest.h>
#include <aws/qbusiness/model/GetDataSourceRequest.h>
#include <aws/qbusiness/model/GetDocumentContentRequest.h>
#include <aws/qbusiness/model/GetGroupRequest.h>
#include <aws/qbusiness/model/GetIndexRequest.h>
#include <aws/qbusiness/model/GetMediaRequest.h>
#include <aws/qbusiness/model/GetPluginRequest.h>
#include <aws/qbusiness/model/GetPolicyRequest.h>
#include <aws/qbusiness/model/GetRetrieverRequest.h>
#include <aws/qbusiness/model/GetUserRequest.h>
#include <aws/qbusiness/model/GetWebExperienceRequest.h>
#include <aws/qbusiness/model/ListApplicationsRequest.h>
#include <aws/qbusiness/model/ListAttachmentsRequest.h>
#include <aws/qbusiness/model/ListChatResponseConfigurationsRequest.h>
#include <aws/qbusiness/model/ListConversationsRequest.h>
#include <aws/qbusiness/model/ListDataAccessorsRequest.h>
#include <aws/qbusiness/model/ListDataSourceSyncJobsRequest.h>
#include <aws/qbusiness/model/ListDataSourcesRequest.h>
#include <aws/qbusiness/model/ListDocumentsRequest.h>
#include <aws/qbusiness/model/ListGroupsRequest.h>
#include <aws/qbusiness/model/ListIndicesRequest.h>
#include <aws/qbusiness/model/ListMessagesRequest.h>
#include <aws/qbusiness/model/ListPluginActionsRequest.h>
#include <aws/qbusiness/model/ListPluginTypeActionsRequest.h>
#include <aws/qbusiness/model/ListPluginTypeMetadataRequest.h>
#include <aws/qbusiness/model/ListPluginsRequest.h>
#include <aws/qbusiness/model/ListRetrieversRequest.h>
#include <aws/qbusiness/model/ListSubscriptionsRequest.h>
#include <aws/qbusiness/model/ListTagsForResourceRequest.h>
#include <aws/qbusiness/model/ListWebExperiencesRequest.h>
#include <aws/qbusiness/model/PutFeedbackRequest.h>
#include <aws/qbusiness/model/PutGroupRequest.h>
#include <aws/qbusiness/model/SearchRelevantContentRequest.h>
#include <aws/qbusiness/model/StartDataSourceSyncJobRequest.h>
#include <aws/qbusiness/model/StopDataSourceSyncJobRequest.h>
#include <aws/qbusiness/model/TagResourceRequest.h>
#include <aws/qbusiness/model/UntagResourceRequest.h>
#include <aws/qbusiness/model/UpdateApplicationRequest.h>
#include <aws/qbusiness/model/UpdateChatControlsConfigurationRequest.h>
#include <aws/qbusiness/model/UpdateChatResponseConfigurationRequest.h>
#include <aws/qbusiness/model/UpdateDataAccessorRequest.h>
#include <aws/qbusiness/model/UpdateDataSourceRequest.h>
#include <aws/qbusiness/model/UpdateIndexRequest.h>
#include <aws/qbusiness/model/UpdatePluginRequest.h>
#include <aws/qbusiness/model/UpdateRetrieverRequest.h>
#include <aws/qbusiness/model/UpdateSubscriptionRequest.h>
#include <aws/qbusiness/model/UpdateUserRequest.h>
#include <aws/qbusiness/model/UpdateWebExperienceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::QBusiness;
using namespace Aws::QBusiness::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace QBusiness {
const char SERVICE_NAME[] = "qbusiness";
const char ALLOCATION_TAG[] = "QBusinessClient";
}  // namespace QBusiness
}  // namespace Aws
const char* QBusinessClient::GetServiceName() { return SERVICE_NAME; }
const char* QBusinessClient::GetAllocationTag() { return ALLOCATION_TAG; }

QBusinessClient::QBusinessClient(const QBusiness::QBusinessClientConfiguration& clientConfiguration,
                                 std::shared_ptr<QBusinessEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QBusinessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<QBusinessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QBusinessClient::QBusinessClient(const AWSCredentials& credentials, std::shared_ptr<QBusinessEndpointProviderBase> endpointProvider,
                                 const QBusiness::QBusinessClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QBusinessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<QBusinessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QBusinessClient::QBusinessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<QBusinessEndpointProviderBase> endpointProvider,
                                 const QBusiness::QBusinessClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QBusinessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<QBusinessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
QBusinessClient::QBusinessClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QBusinessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<QBusinessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QBusinessClient::QBusinessClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QBusinessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<QBusinessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QBusinessClient::QBusinessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QBusinessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<QBusinessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
QBusinessClient::~QBusinessClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<QBusinessEndpointProviderBase>& QBusinessClient::accessEndpointProvider() { return m_endpointProvider; }

void QBusinessClient::init(const QBusiness::QBusinessClientConfiguration& config) {
  AWSClient::SetServiceClientName("QBusiness");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "qbusiness");
}

void QBusinessClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
QBusinessClient::InvokeOperationOutcome QBusinessClient::InvokeServiceOperation(
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

AssociatePermissionOutcome QBusinessClient::AssociatePermission(const AssociatePermissionRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociatePermission", "Required field: ApplicationId, is not set");
    return AssociatePermissionOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociatePermissionOutcome(result.GetResultWithOwnership())
                            : AssociatePermissionOutcome(std::move(result.GetError()));
}

BatchDeleteDocumentOutcome QBusinessClient::BatchDeleteDocument(const BatchDeleteDocumentRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteDocument", "Required field: ApplicationId, is not set");
    return BatchDeleteDocumentOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteDocument", "Required field: IndexId, is not set");
    return BatchDeleteDocumentOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [IndexId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/documents/delete");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteDocumentOutcome(result.GetResultWithOwnership())
                            : BatchDeleteDocumentOutcome(std::move(result.GetError()));
}

BatchPutDocumentOutcome QBusinessClient::BatchPutDocument(const BatchPutDocumentRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchPutDocument", "Required field: ApplicationId, is not set");
    return BatchPutDocumentOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchPutDocument", "Required field: IndexId, is not set");
    return BatchPutDocumentOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [IndexId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/documents");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchPutDocumentOutcome(result.GetResultWithOwnership())
                            : BatchPutDocumentOutcome(std::move(result.GetError()));
}

CancelSubscriptionOutcome QBusinessClient::CancelSubscription(const CancelSubscriptionRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelSubscription", "Required field: ApplicationId, is not set");
    return CancelSubscriptionOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ApplicationId]", false));
  }
  if (!request.SubscriptionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelSubscription", "Required field: SubscriptionId, is not set");
    return CancelSubscriptionOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [SubscriptionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? CancelSubscriptionOutcome(result.GetResultWithOwnership())
                            : CancelSubscriptionOutcome(std::move(result.GetError()));
}

void QBusinessClient::ChatAsync(Model::ChatRequest& request, const ChatStreamReadyHandler& streamReadyHandler,
                                const ChatResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const {
  AWS_ASYNC_OPERATION_GUARD(Chat);
  if (!m_endpointProvider) {
    handler(this, request,
            ChatOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE",
                                                               "Endpoint provider is not initialized", false)),
            handlerContext);
    return;
  }
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("Chat", "Required field: ApplicationId, is not set");
    handler(this, request,
            ChatOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [ApplicationId]", false)),
            handlerContext);
    return;
  }
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
      [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
      TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
  if (!endpointResolutionOutcome.IsSuccess()) {
    handler(this, request,
            ChatOutcome(Aws::Client::AWSError<CoreErrors>(CoreErrors::ENDPOINT_RESOLUTION_FAILURE, "ENDPOINT_RESOLUTION_FAILURE",
                                                          endpointResolutionOutcome.GetError().GetMessage(), false)),
            handlerContext);
    return;
  }
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/conversations");

#if AWS_SDK_USE_CRT_HTTP
  // Push-based WriteData path (CRT HTTP client only)
  auto writeDataStreamBuf = Aws::MakeShared<Aws::Utils::Stream::HttpWriteDataStreamBuf>(ALLOCATION_TAG, GetHttpClient());
  auto signer = GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER);

  auto eventEncoderStream = Aws::MakeShared<Model::ChatInputStream>(ALLOCATION_TAG, writeDataStreamBuf);
  eventEncoderStream->SetSigner(signer);

  auto requestCopy = Aws::MakeShared<ChatRequest>(ALLOCATION_TAG, request);
  request.SetInputStream(eventEncoderStream);

  auto& endpoint = endpointResolutionOutcome.GetResult();
  auto httpRequest =
      CreateHttpRequest(endpoint.GetURI(), Aws::Http::HttpMethod::HTTP_POST, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
  httpRequest->SetEventStreamRequest(true);
  httpRequest->SetHasEventStreamResponse(true);
  BuildHttpRequest(*requestCopy, httpRequest);

  if (!signer->SignRequest(*httpRequest, nullptr, nullptr, true)) {
    handler(this, request,
            ChatOutcome(Aws::Client::AWSError<CoreErrors>(CoreErrors::CLIENT_SIGNING_FAILURE, "", "Failed to sign request", false)),
            handlerContext);
    return;
  }
  eventEncoderStream->SetSignatureSeed(Aws::Client::GetAuthorizationHeader(*httpRequest));

  Aws::Client::SubmitBidirectionalStreamingRequest<QBusinessClient, ChatOutcome, ChatRequest, Model::ChatInputStream>(
      this, request, requestCopy, eventEncoderStream, writeDataStreamBuf, httpRequest, m_clientConfiguration.executor.get(),
      streamReadyHandler, handler, handlerContext);
#else
  // Pull-based path (curl/WinHTTP)
  auto eventEncoderStream = Aws::MakeShared<Model::ChatInputStream>(ALLOCATION_TAG);
  eventEncoderStream->SetSigner(GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER));
  auto requestCopy = Aws::MakeShared<ChatRequest>("Chat", request);
  requestCopy->SetInputStream(eventEncoderStream);
  request.SetInputStream(eventEncoderStream);

  auto asyncTask = CreateBidirectionalEventStreamTask<ChatOutcome>(this, endpointResolutionOutcome.GetResultWithOwnership(), requestCopy,
                                                                   handler, handlerContext, eventEncoderStream);
  auto sem = asyncTask.GetSemaphore();
  m_clientConfiguration.executor->Submit(std::move(asyncTask));
  sem->WaitOne();
  streamReadyHandler(*eventEncoderStream);
#endif
}
ChatSyncOutcome QBusinessClient::ChatSync(const ChatSyncRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ChatSync", "Required field: ApplicationId, is not set");
    return ChatSyncOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/conversations");
    ss.str("?sync");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ChatSyncOutcome(result.GetResultWithOwnership()) : ChatSyncOutcome(std::move(result.GetError()));
}

CheckDocumentAccessOutcome QBusinessClient::CheckDocumentAccess(const CheckDocumentAccessRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CheckDocumentAccess", "Required field: ApplicationId, is not set");
    return CheckDocumentAccessOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CheckDocumentAccess", "Required field: IndexId, is not set");
    return CheckDocumentAccessOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [IndexId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CheckDocumentAccess", "Required field: UserId, is not set");
    return CheckDocumentAccessOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [UserId]", false));
  }
  if (!request.DocumentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CheckDocumentAccess", "Required field: DocumentId, is not set");
    return CheckDocumentAccessOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DocumentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/index/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/documents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/check-document-access");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? CheckDocumentAccessOutcome(result.GetResultWithOwnership())
                            : CheckDocumentAccessOutcome(std::move(result.GetError()));
}

CreateAnonymousWebExperienceUrlOutcome QBusinessClient::CreateAnonymousWebExperienceUrl(
    const CreateAnonymousWebExperienceUrlRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAnonymousWebExperienceUrl", "Required field: ApplicationId, is not set");
    return CreateAnonymousWebExperienceUrlOutcome(Aws::Client::AWSError<QBusinessErrors>(
        QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.WebExperienceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAnonymousWebExperienceUrl", "Required field: WebExperienceId, is not set");
    return CreateAnonymousWebExperienceUrlOutcome(Aws::Client::AWSError<QBusinessErrors>(
        QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WebExperienceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/experiences/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWebExperienceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/anonymous-url");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAnonymousWebExperienceUrlOutcome(result.GetResultWithOwnership())
                            : CreateAnonymousWebExperienceUrlOutcome(std::move(result.GetError()));
}

CreateApplicationOutcome QBusinessClient::CreateApplication(const CreateApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateApplicationOutcome(result.GetResultWithOwnership())
                            : CreateApplicationOutcome(std::move(result.GetError()));
}

CreateChatResponseConfigurationOutcome QBusinessClient::CreateChatResponseConfiguration(
    const CreateChatResponseConfigurationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateChatResponseConfiguration", "Required field: ApplicationId, is not set");
    return CreateChatResponseConfigurationOutcome(Aws::Client::AWSError<QBusinessErrors>(
        QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/chatresponseconfigurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateChatResponseConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateChatResponseConfigurationOutcome(std::move(result.GetError()));
}

CreateDataAccessorOutcome QBusinessClient::CreateDataAccessor(const CreateDataAccessorRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataAccessor", "Required field: ApplicationId, is not set");
    return CreateDataAccessorOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataaccessors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDataAccessorOutcome(result.GetResultWithOwnership())
                            : CreateDataAccessorOutcome(std::move(result.GetError()));
}

CreateDataSourceOutcome QBusinessClient::CreateDataSource(const CreateDataSourceRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataSource", "Required field: ApplicationId, is not set");
    return CreateDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataSource", "Required field: IndexId, is not set");
    return CreateDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [IndexId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDataSourceOutcome(result.GetResultWithOwnership())
                            : CreateDataSourceOutcome(std::move(result.GetError()));
}

CreateIndexOutcome QBusinessClient::CreateIndex(const CreateIndexRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIndex", "Required field: ApplicationId, is not set");
    return CreateIndexOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIndexOutcome(result.GetResultWithOwnership()) : CreateIndexOutcome(std::move(result.GetError()));
}

CreatePluginOutcome QBusinessClient::CreatePlugin(const CreatePluginRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePlugin", "Required field: ApplicationId, is not set");
    return CreatePluginOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/plugins");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePluginOutcome(result.GetResultWithOwnership()) : CreatePluginOutcome(std::move(result.GetError()));
}

CreateRetrieverOutcome QBusinessClient::CreateRetriever(const CreateRetrieverRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRetriever", "Required field: ApplicationId, is not set");
    return CreateRetrieverOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/retrievers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRetrieverOutcome(result.GetResultWithOwnership())
                            : CreateRetrieverOutcome(std::move(result.GetError()));
}

CreateSubscriptionOutcome QBusinessClient::CreateSubscription(const CreateSubscriptionRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSubscription", "Required field: ApplicationId, is not set");
    return CreateSubscriptionOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSubscriptionOutcome(result.GetResultWithOwnership())
                            : CreateSubscriptionOutcome(std::move(result.GetError()));
}

CreateUserOutcome QBusinessClient::CreateUser(const CreateUserRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateUser", "Required field: ApplicationId, is not set");
    return CreateUserOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUserOutcome(result.GetResultWithOwnership()) : CreateUserOutcome(std::move(result.GetError()));
}

CreateWebExperienceOutcome QBusinessClient::CreateWebExperience(const CreateWebExperienceRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWebExperience", "Required field: ApplicationId, is not set");
    return CreateWebExperienceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/experiences");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWebExperienceOutcome(result.GetResultWithOwnership())
                            : CreateWebExperienceOutcome(std::move(result.GetError()));
}

DeleteApplicationOutcome QBusinessClient::DeleteApplication(const DeleteApplicationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: ApplicationId, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteApplicationOutcome(result.GetResultWithOwnership())
                            : DeleteApplicationOutcome(std::move(result.GetError()));
}

DeleteAttachmentOutcome QBusinessClient::DeleteAttachment(const DeleteAttachmentRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAttachment", "Required field: ApplicationId, is not set");
    return DeleteAttachmentOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ApplicationId]", false));
  }
  if (!request.ConversationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAttachment", "Required field: ConversationId, is not set");
    return DeleteAttachmentOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ConversationId]", false));
  }
  if (!request.AttachmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAttachment", "Required field: AttachmentId, is not set");
    return DeleteAttachmentOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AttachmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/conversations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConversationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attachments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttachmentId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAttachmentOutcome(result.GetResultWithOwnership())
                            : DeleteAttachmentOutcome(std::move(result.GetError()));
}

DeleteChatControlsConfigurationOutcome QBusinessClient::DeleteChatControlsConfiguration(
    const DeleteChatControlsConfigurationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChatControlsConfiguration", "Required field: ApplicationId, is not set");
    return DeleteChatControlsConfigurationOutcome(Aws::Client::AWSError<QBusinessErrors>(
        QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/chatcontrols");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteChatControlsConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteChatControlsConfigurationOutcome(std::move(result.GetError()));
}

DeleteChatResponseConfigurationOutcome QBusinessClient::DeleteChatResponseConfiguration(
    const DeleteChatResponseConfigurationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChatResponseConfiguration", "Required field: ApplicationId, is not set");
    return DeleteChatResponseConfigurationOutcome(Aws::Client::AWSError<QBusinessErrors>(
        QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ChatResponseConfigurationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChatResponseConfiguration", "Required field: ChatResponseConfigurationId, is not set");
    return DeleteChatResponseConfigurationOutcome(Aws::Client::AWSError<QBusinessErrors>(
        QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChatResponseConfigurationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/chatresponseconfigurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChatResponseConfigurationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteChatResponseConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteChatResponseConfigurationOutcome(std::move(result.GetError()));
}

DeleteConversationOutcome QBusinessClient::DeleteConversation(const DeleteConversationRequest& request) const {
  if (!request.ConversationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConversation", "Required field: ConversationId, is not set");
    return DeleteConversationOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ConversationId]", false));
  }
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConversation", "Required field: ApplicationId, is not set");
    return DeleteConversationOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/conversations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConversationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConversationOutcome(result.GetResultWithOwnership())
                            : DeleteConversationOutcome(std::move(result.GetError()));
}

DeleteDataAccessorOutcome QBusinessClient::DeleteDataAccessor(const DeleteDataAccessorRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataAccessor", "Required field: ApplicationId, is not set");
    return DeleteDataAccessorOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ApplicationId]", false));
  }
  if (!request.DataAccessorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataAccessor", "Required field: DataAccessorId, is not set");
    return DeleteDataAccessorOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [DataAccessorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataaccessors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataAccessorId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDataAccessorOutcome(result.GetResultWithOwnership())
                            : DeleteDataAccessorOutcome(std::move(result.GetError()));
}

DeleteDataSourceOutcome QBusinessClient::DeleteDataSource(const DeleteDataSourceRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: ApplicationId, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: IndexId, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [IndexId]", false));
  }
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: DataSourceId, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DataSourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDataSourceOutcome(result.GetResultWithOwnership())
                            : DeleteDataSourceOutcome(std::move(result.GetError()));
}

DeleteGroupOutcome QBusinessClient::DeleteGroup(const DeleteGroupRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGroup", "Required field: ApplicationId, is not set");
    return DeleteGroupOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGroup", "Required field: IndexId, is not set");
    return DeleteGroupOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [IndexId]", false));
  }
  if (!request.GroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGroup", "Required field: GroupName, is not set");
    return DeleteGroupOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [GroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteGroupOutcome(result.GetResultWithOwnership()) : DeleteGroupOutcome(std::move(result.GetError()));
}

DeleteIndexOutcome QBusinessClient::DeleteIndex(const DeleteIndexRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIndex", "Required field: ApplicationId, is not set");
    return DeleteIndexOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIndex", "Required field: IndexId, is not set");
    return DeleteIndexOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [IndexId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteIndexOutcome(result.GetResultWithOwnership()) : DeleteIndexOutcome(std::move(result.GetError()));
}

DeletePluginOutcome QBusinessClient::DeletePlugin(const DeletePluginRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePlugin", "Required field: ApplicationId, is not set");
    return DeletePluginOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApplicationId]", false));
  }
  if (!request.PluginIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePlugin", "Required field: PluginId, is not set");
    return DeletePluginOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [PluginId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/plugins/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPluginId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePluginOutcome(result.GetResultWithOwnership()) : DeletePluginOutcome(std::move(result.GetError()));
}

DeleteRetrieverOutcome QBusinessClient::DeleteRetriever(const DeleteRetrieverRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRetriever", "Required field: ApplicationId, is not set");
    return DeleteRetrieverOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ApplicationId]", false));
  }
  if (!request.RetrieverIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRetriever", "Required field: RetrieverId, is not set");
    return DeleteRetrieverOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [RetrieverId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/retrievers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRetrieverId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRetrieverOutcome(result.GetResultWithOwnership())
                            : DeleteRetrieverOutcome(std::move(result.GetError()));
}

DeleteUserOutcome QBusinessClient::DeleteUser(const DeleteUserRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: ApplicationId, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ApplicationId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: UserId, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteUserOutcome(result.GetResultWithOwnership()) : DeleteUserOutcome(std::move(result.GetError()));
}

DeleteWebExperienceOutcome QBusinessClient::DeleteWebExperience(const DeleteWebExperienceRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWebExperience", "Required field: ApplicationId, is not set");
    return DeleteWebExperienceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApplicationId]", false));
  }
  if (!request.WebExperienceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWebExperience", "Required field: WebExperienceId, is not set");
    return DeleteWebExperienceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [WebExperienceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/experiences/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWebExperienceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteWebExperienceOutcome(result.GetResultWithOwnership())
                            : DeleteWebExperienceOutcome(std::move(result.GetError()));
}

DisassociatePermissionOutcome QBusinessClient::DisassociatePermission(const DisassociatePermissionRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociatePermission", "Required field: ApplicationId, is not set");
    return DisassociatePermissionOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ApplicationId]", false));
  }
  if (!request.StatementIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociatePermission", "Required field: StatementId, is not set");
    return DisassociatePermissionOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [StatementId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStatementId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisassociatePermissionOutcome(result.GetResultWithOwnership())
                            : DisassociatePermissionOutcome(std::move(result.GetError()));
}

GetApplicationOutcome QBusinessClient::GetApplication(const GetApplicationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: ApplicationId, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetApplicationOutcome(result.GetResultWithOwnership()) : GetApplicationOutcome(std::move(result.GetError()));
}

GetChatControlsConfigurationOutcome QBusinessClient::GetChatControlsConfiguration(
    const GetChatControlsConfigurationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChatControlsConfiguration", "Required field: ApplicationId, is not set");
    return GetChatControlsConfigurationOutcome(Aws::Client::AWSError<QBusinessErrors>(
        QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/chatcontrols");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetChatControlsConfigurationOutcome(result.GetResultWithOwnership())
                            : GetChatControlsConfigurationOutcome(std::move(result.GetError()));
}

GetChatResponseConfigurationOutcome QBusinessClient::GetChatResponseConfiguration(
    const GetChatResponseConfigurationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChatResponseConfiguration", "Required field: ApplicationId, is not set");
    return GetChatResponseConfigurationOutcome(Aws::Client::AWSError<QBusinessErrors>(
        QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ChatResponseConfigurationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChatResponseConfiguration", "Required field: ChatResponseConfigurationId, is not set");
    return GetChatResponseConfigurationOutcome(Aws::Client::AWSError<QBusinessErrors>(
        QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChatResponseConfigurationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/chatresponseconfigurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChatResponseConfigurationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetChatResponseConfigurationOutcome(result.GetResultWithOwnership())
                            : GetChatResponseConfigurationOutcome(std::move(result.GetError()));
}

GetDataAccessorOutcome QBusinessClient::GetDataAccessor(const GetDataAccessorRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataAccessor", "Required field: ApplicationId, is not set");
    return GetDataAccessorOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ApplicationId]", false));
  }
  if (!request.DataAccessorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataAccessor", "Required field: DataAccessorId, is not set");
    return GetDataAccessorOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DataAccessorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataaccessors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataAccessorId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDataAccessorOutcome(result.GetResultWithOwnership())
                            : GetDataAccessorOutcome(std::move(result.GetError()));
}

GetDataSourceOutcome QBusinessClient::GetDataSource(const GetDataSourceRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSource", "Required field: ApplicationId, is not set");
    return GetDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSource", "Required field: IndexId, is not set");
    return GetDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [IndexId]", false));
  }
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSource", "Required field: DataSourceId, is not set");
    return GetDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DataSourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDataSourceOutcome(result.GetResultWithOwnership()) : GetDataSourceOutcome(std::move(result.GetError()));
}

GetDocumentContentOutcome QBusinessClient::GetDocumentContent(const GetDocumentContentRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDocumentContent", "Required field: ApplicationId, is not set");
    return GetDocumentContentOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDocumentContent", "Required field: IndexId, is not set");
    return GetDocumentContentOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [IndexId]", false));
  }
  if (!request.DocumentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDocumentContent", "Required field: DocumentId, is not set");
    return GetDocumentContentOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [DocumentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/index/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/documents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/content");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDocumentContentOutcome(result.GetResultWithOwnership())
                            : GetDocumentContentOutcome(std::move(result.GetError()));
}

GetGroupOutcome QBusinessClient::GetGroup(const GetGroupRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGroup", "Required field: ApplicationId, is not set");
    return GetGroupOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGroup", "Required field: IndexId, is not set");
    return GetGroupOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [IndexId]", false));
  }
  if (!request.GroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGroup", "Required field: GroupName, is not set");
    return GetGroupOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [GroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetGroupOutcome(result.GetResultWithOwnership()) : GetGroupOutcome(std::move(result.GetError()));
}

GetIndexOutcome QBusinessClient::GetIndex(const GetIndexRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIndex", "Required field: ApplicationId, is not set");
    return GetIndexOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIndex", "Required field: IndexId, is not set");
    return GetIndexOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [IndexId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetIndexOutcome(result.GetResultWithOwnership()) : GetIndexOutcome(std::move(result.GetError()));
}

GetMediaOutcome QBusinessClient::GetMedia(const GetMediaRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMedia", "Required field: ApplicationId, is not set");
    return GetMediaOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ApplicationId]", false));
  }
  if (!request.ConversationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMedia", "Required field: ConversationId, is not set");
    return GetMediaOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ConversationId]", false));
  }
  if (!request.MessageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMedia", "Required field: MessageId, is not set");
    return GetMediaOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [MessageId]", false));
  }
  if (!request.MediaIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMedia", "Required field: MediaId, is not set");
    return GetMediaOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [MediaId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/conversations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConversationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/media/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMediaId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMediaOutcome(result.GetResultWithOwnership()) : GetMediaOutcome(std::move(result.GetError()));
}

GetPluginOutcome QBusinessClient::GetPlugin(const GetPluginRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPlugin", "Required field: ApplicationId, is not set");
    return GetPluginOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ApplicationId]", false));
  }
  if (!request.PluginIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPlugin", "Required field: PluginId, is not set");
    return GetPluginOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [PluginId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/plugins/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPluginId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPluginOutcome(result.GetResultWithOwnership()) : GetPluginOutcome(std::move(result.GetError()));
}

GetPolicyOutcome QBusinessClient::GetPolicy(const GetPolicyRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPolicy", "Required field: ApplicationId, is not set");
    return GetPolicyOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPolicyOutcome(result.GetResultWithOwnership()) : GetPolicyOutcome(std::move(result.GetError()));
}

GetRetrieverOutcome QBusinessClient::GetRetriever(const GetRetrieverRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRetriever", "Required field: ApplicationId, is not set");
    return GetRetrieverOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApplicationId]", false));
  }
  if (!request.RetrieverIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRetriever", "Required field: RetrieverId, is not set");
    return GetRetrieverOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [RetrieverId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/retrievers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRetrieverId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRetrieverOutcome(result.GetResultWithOwnership()) : GetRetrieverOutcome(std::move(result.GetError()));
}

GetUserOutcome QBusinessClient::GetUser(const GetUserRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUser", "Required field: ApplicationId, is not set");
    return GetUserOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [ApplicationId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUser", "Required field: UserId, is not set");
    return GetUserOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetUserOutcome(result.GetResultWithOwnership()) : GetUserOutcome(std::move(result.GetError()));
}

GetWebExperienceOutcome QBusinessClient::GetWebExperience(const GetWebExperienceRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWebExperience", "Required field: ApplicationId, is not set");
    return GetWebExperienceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ApplicationId]", false));
  }
  if (!request.WebExperienceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWebExperience", "Required field: WebExperienceId, is not set");
    return GetWebExperienceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [WebExperienceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/experiences/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWebExperienceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetWebExperienceOutcome(result.GetResultWithOwnership())
                            : GetWebExperienceOutcome(std::move(result.GetError()));
}

ListApplicationsOutcome QBusinessClient::ListApplications(const ListApplicationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListApplicationsOutcome(result.GetResultWithOwnership())
                            : ListApplicationsOutcome(std::move(result.GetError()));
}

ListAttachmentsOutcome QBusinessClient::ListAttachments(const ListAttachmentsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAttachments", "Required field: ApplicationId, is not set");
    return ListAttachmentsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attachments");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAttachmentsOutcome(result.GetResultWithOwnership())
                            : ListAttachmentsOutcome(std::move(result.GetError()));
}

ListChatResponseConfigurationsOutcome QBusinessClient::ListChatResponseConfigurations(
    const ListChatResponseConfigurationsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChatResponseConfigurations", "Required field: ApplicationId, is not set");
    return ListChatResponseConfigurationsOutcome(Aws::Client::AWSError<QBusinessErrors>(
        QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/chatresponseconfigurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListChatResponseConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListChatResponseConfigurationsOutcome(std::move(result.GetError()));
}

ListConversationsOutcome QBusinessClient::ListConversations(const ListConversationsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListConversations", "Required field: ApplicationId, is not set");
    return ListConversationsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/conversations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListConversationsOutcome(result.GetResultWithOwnership())
                            : ListConversationsOutcome(std::move(result.GetError()));
}

ListDataAccessorsOutcome QBusinessClient::ListDataAccessors(const ListDataAccessorsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataAccessors", "Required field: ApplicationId, is not set");
    return ListDataAccessorsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataaccessors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDataAccessorsOutcome(result.GetResultWithOwnership())
                            : ListDataAccessorsOutcome(std::move(result.GetError()));
}

ListDataSourceSyncJobsOutcome QBusinessClient::ListDataSourceSyncJobs(const ListDataSourceSyncJobsRequest& request) const {
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataSourceSyncJobs", "Required field: DataSourceId, is not set");
    return ListDataSourceSyncJobsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DataSourceId]", false));
  }
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataSourceSyncJobs", "Required field: ApplicationId, is not set");
    return ListDataSourceSyncJobsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataSourceSyncJobs", "Required field: IndexId, is not set");
    return ListDataSourceSyncJobsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [IndexId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/syncjobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDataSourceSyncJobsOutcome(result.GetResultWithOwnership())
                            : ListDataSourceSyncJobsOutcome(std::move(result.GetError()));
}

ListDataSourcesOutcome QBusinessClient::ListDataSources(const ListDataSourcesRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataSources", "Required field: ApplicationId, is not set");
    return ListDataSourcesOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataSources", "Required field: IndexId, is not set");
    return ListDataSourcesOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [IndexId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDataSourcesOutcome(result.GetResultWithOwnership())
                            : ListDataSourcesOutcome(std::move(result.GetError()));
}

ListDocumentsOutcome QBusinessClient::ListDocuments(const ListDocumentsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDocuments", "Required field: ApplicationId, is not set");
    return ListDocumentsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDocuments", "Required field: IndexId, is not set");
    return ListDocumentsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [IndexId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/index/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/documents");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDocumentsOutcome(result.GetResultWithOwnership()) : ListDocumentsOutcome(std::move(result.GetError()));
}

ListGroupsOutcome QBusinessClient::ListGroups(const ListGroupsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListGroups", "Required field: ApplicationId, is not set");
    return ListGroupsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListGroups", "Required field: IndexId, is not set");
    return ListGroupsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [IndexId]", false));
  }
  if (!request.UpdatedEarlierThanHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListGroups", "Required field: UpdatedEarlierThan, is not set");
    return ListGroupsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [UpdatedEarlierThan]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/groups");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListGroupsOutcome(result.GetResultWithOwnership()) : ListGroupsOutcome(std::move(result.GetError()));
}

ListIndicesOutcome QBusinessClient::ListIndices(const ListIndicesRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIndices", "Required field: ApplicationId, is not set");
    return ListIndicesOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListIndicesOutcome(result.GetResultWithOwnership()) : ListIndicesOutcome(std::move(result.GetError()));
}

ListMessagesOutcome QBusinessClient::ListMessages(const ListMessagesRequest& request) const {
  if (!request.ConversationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMessages", "Required field: ConversationId, is not set");
    return ListMessagesOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ConversationId]", false));
  }
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMessages", "Required field: ApplicationId, is not set");
    return ListMessagesOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/conversations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConversationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMessagesOutcome(result.GetResultWithOwnership()) : ListMessagesOutcome(std::move(result.GetError()));
}

ListPluginActionsOutcome QBusinessClient::ListPluginActions(const ListPluginActionsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPluginActions", "Required field: ApplicationId, is not set");
    return ListPluginActionsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }
  if (!request.PluginIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPluginActions", "Required field: PluginId, is not set");
    return ListPluginActionsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [PluginId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/plugins/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPluginId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/actions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPluginActionsOutcome(result.GetResultWithOwnership())
                            : ListPluginActionsOutcome(std::move(result.GetError()));
}

ListPluginTypeActionsOutcome QBusinessClient::ListPluginTypeActions(const ListPluginTypeActionsRequest& request) const {
  if (!request.PluginTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPluginTypeActions", "Required field: PluginType, is not set");
    return ListPluginTypeActionsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [PluginType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/pluginTypes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(PluginTypeMapper::GetNameForPluginType(request.GetPluginType()));
    endpointResolutionOutcome.GetResult().AddPathSegments("/actions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPluginTypeActionsOutcome(result.GetResultWithOwnership())
                            : ListPluginTypeActionsOutcome(std::move(result.GetError()));
}

ListPluginTypeMetadataOutcome QBusinessClient::ListPluginTypeMetadata(const ListPluginTypeMetadataRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/pluginTypeMetadata");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPluginTypeMetadataOutcome(result.GetResultWithOwnership())
                            : ListPluginTypeMetadataOutcome(std::move(result.GetError()));
}

ListPluginsOutcome QBusinessClient::ListPlugins(const ListPluginsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPlugins", "Required field: ApplicationId, is not set");
    return ListPluginsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/plugins");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPluginsOutcome(result.GetResultWithOwnership()) : ListPluginsOutcome(std::move(result.GetError()));
}

ListRetrieversOutcome QBusinessClient::ListRetrievers(const ListRetrieversRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRetrievers", "Required field: ApplicationId, is not set");
    return ListRetrieversOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/retrievers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRetrieversOutcome(result.GetResultWithOwnership()) : ListRetrieversOutcome(std::move(result.GetError()));
}

ListSubscriptionsOutcome QBusinessClient::ListSubscriptions(const ListSubscriptionsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSubscriptions", "Required field: ApplicationId, is not set");
    return ListSubscriptionsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSubscriptionsOutcome(result.GetResultWithOwnership())
                            : ListSubscriptionsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome QBusinessClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceARN, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceARN());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListWebExperiencesOutcome QBusinessClient::ListWebExperiences(const ListWebExperiencesRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWebExperiences", "Required field: ApplicationId, is not set");
    return ListWebExperiencesOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/experiences");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListWebExperiencesOutcome(result.GetResultWithOwnership())
                            : ListWebExperiencesOutcome(std::move(result.GetError()));
}

PutFeedbackOutcome QBusinessClient::PutFeedback(const PutFeedbackRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutFeedback", "Required field: ApplicationId, is not set");
    return PutFeedbackOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ApplicationId]", false));
  }
  if (!request.ConversationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutFeedback", "Required field: ConversationId, is not set");
    return PutFeedbackOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ConversationId]", false));
  }
  if (!request.MessageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutFeedback", "Required field: MessageId, is not set");
    return PutFeedbackOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [MessageId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/conversations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConversationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/feedback");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutFeedbackOutcome(result.GetResultWithOwnership()) : PutFeedbackOutcome(std::move(result.GetError()));
}

PutGroupOutcome QBusinessClient::PutGroup(const PutGroupRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutGroup", "Required field: ApplicationId, is not set");
    return PutGroupOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutGroup", "Required field: IndexId, is not set");
    return PutGroupOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [IndexId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/groups");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutGroupOutcome(result.GetResultWithOwnership()) : PutGroupOutcome(std::move(result.GetError()));
}

SearchRelevantContentOutcome QBusinessClient::SearchRelevantContent(const SearchRelevantContentRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchRelevantContent", "Required field: ApplicationId, is not set");
    return SearchRelevantContentOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/relevant-content");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchRelevantContentOutcome(result.GetResultWithOwnership())
                            : SearchRelevantContentOutcome(std::move(result.GetError()));
}

StartDataSourceSyncJobOutcome QBusinessClient::StartDataSourceSyncJob(const StartDataSourceSyncJobRequest& request) const {
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDataSourceSyncJob", "Required field: DataSourceId, is not set");
    return StartDataSourceSyncJobOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DataSourceId]", false));
  }
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDataSourceSyncJob", "Required field: ApplicationId, is not set");
    return StartDataSourceSyncJobOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDataSourceSyncJob", "Required field: IndexId, is not set");
    return StartDataSourceSyncJobOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [IndexId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/startsync");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartDataSourceSyncJobOutcome(result.GetResultWithOwnership())
                            : StartDataSourceSyncJobOutcome(std::move(result.GetError()));
}

StopDataSourceSyncJobOutcome QBusinessClient::StopDataSourceSyncJob(const StopDataSourceSyncJobRequest& request) const {
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopDataSourceSyncJob", "Required field: DataSourceId, is not set");
    return StopDataSourceSyncJobOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DataSourceId]", false));
  }
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopDataSourceSyncJob", "Required field: ApplicationId, is not set");
    return StopDataSourceSyncJobOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopDataSourceSyncJob", "Required field: IndexId, is not set");
    return StopDataSourceSyncJobOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [IndexId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stopsync");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopDataSourceSyncJobOutcome(result.GetResultWithOwnership())
                            : StopDataSourceSyncJobOutcome(std::move(result.GetError()));
}

TagResourceOutcome QBusinessClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceARN, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ResourceARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceARN());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome QBusinessClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceARN, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ResourceARN]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceARN());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateApplicationOutcome QBusinessClient::UpdateApplication(const UpdateApplicationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApplication", "Required field: ApplicationId, is not set");
    return UpdateApplicationOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateApplicationOutcome(result.GetResultWithOwnership())
                            : UpdateApplicationOutcome(std::move(result.GetError()));
}

UpdateChatControlsConfigurationOutcome QBusinessClient::UpdateChatControlsConfiguration(
    const UpdateChatControlsConfigurationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChatControlsConfiguration", "Required field: ApplicationId, is not set");
    return UpdateChatControlsConfigurationOutcome(Aws::Client::AWSError<QBusinessErrors>(
        QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/chatcontrols");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateChatControlsConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateChatControlsConfigurationOutcome(std::move(result.GetError()));
}

UpdateChatResponseConfigurationOutcome QBusinessClient::UpdateChatResponseConfiguration(
    const UpdateChatResponseConfigurationRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChatResponseConfiguration", "Required field: ApplicationId, is not set");
    return UpdateChatResponseConfigurationOutcome(Aws::Client::AWSError<QBusinessErrors>(
        QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ChatResponseConfigurationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChatResponseConfiguration", "Required field: ChatResponseConfigurationId, is not set");
    return UpdateChatResponseConfigurationOutcome(Aws::Client::AWSError<QBusinessErrors>(
        QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChatResponseConfigurationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/chatresponseconfigurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChatResponseConfigurationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateChatResponseConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateChatResponseConfigurationOutcome(std::move(result.GetError()));
}

UpdateDataAccessorOutcome QBusinessClient::UpdateDataAccessor(const UpdateDataAccessorRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataAccessor", "Required field: ApplicationId, is not set");
    return UpdateDataAccessorOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ApplicationId]", false));
  }
  if (!request.DataAccessorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataAccessor", "Required field: DataAccessorId, is not set");
    return UpdateDataAccessorOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [DataAccessorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataaccessors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataAccessorId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateDataAccessorOutcome(result.GetResultWithOwnership())
                            : UpdateDataAccessorOutcome(std::move(result.GetError()));
}

UpdateDataSourceOutcome QBusinessClient::UpdateDataSource(const UpdateDataSourceRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: ApplicationId, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: IndexId, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [IndexId]", false));
  }
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: DataSourceId, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DataSourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateDataSourceOutcome(result.GetResultWithOwnership())
                            : UpdateDataSourceOutcome(std::move(result.GetError()));
}

UpdateIndexOutcome QBusinessClient::UpdateIndex(const UpdateIndexRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIndex", "Required field: ApplicationId, is not set");
    return UpdateIndexOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIndex", "Required field: IndexId, is not set");
    return UpdateIndexOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [IndexId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/indices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIndexId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateIndexOutcome(result.GetResultWithOwnership()) : UpdateIndexOutcome(std::move(result.GetError()));
}

UpdatePluginOutcome QBusinessClient::UpdatePlugin(const UpdatePluginRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePlugin", "Required field: ApplicationId, is not set");
    return UpdatePluginOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApplicationId]", false));
  }
  if (!request.PluginIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePlugin", "Required field: PluginId, is not set");
    return UpdatePluginOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [PluginId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/plugins/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPluginId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdatePluginOutcome(result.GetResultWithOwnership()) : UpdatePluginOutcome(std::move(result.GetError()));
}

UpdateRetrieverOutcome QBusinessClient::UpdateRetriever(const UpdateRetrieverRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRetriever", "Required field: ApplicationId, is not set");
    return UpdateRetrieverOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ApplicationId]", false));
  }
  if (!request.RetrieverIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRetriever", "Required field: RetrieverId, is not set");
    return UpdateRetrieverOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [RetrieverId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/retrievers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRetrieverId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateRetrieverOutcome(result.GetResultWithOwnership())
                            : UpdateRetrieverOutcome(std::move(result.GetError()));
}

UpdateSubscriptionOutcome QBusinessClient::UpdateSubscription(const UpdateSubscriptionRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSubscription", "Required field: ApplicationId, is not set");
    return UpdateSubscriptionOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ApplicationId]", false));
  }
  if (!request.SubscriptionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSubscription", "Required field: SubscriptionId, is not set");
    return UpdateSubscriptionOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [SubscriptionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateSubscriptionOutcome(result.GetResultWithOwnership())
                            : UpdateSubscriptionOutcome(std::move(result.GetError()));
}

UpdateUserOutcome QBusinessClient::UpdateUser(const UpdateUserRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: ApplicationId, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ApplicationId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: UserId, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateUserOutcome(result.GetResultWithOwnership()) : UpdateUserOutcome(std::move(result.GetError()));
}

UpdateWebExperienceOutcome QBusinessClient::UpdateWebExperience(const UpdateWebExperienceRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWebExperience", "Required field: ApplicationId, is not set");
    return UpdateWebExperienceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApplicationId]", false));
  }
  if (!request.WebExperienceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWebExperience", "Required field: WebExperienceId, is not set");
    return UpdateWebExperienceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [WebExperienceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/experiences/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWebExperienceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateWebExperienceOutcome(result.GetResultWithOwnership())
                            : UpdateWebExperienceOutcome(std::move(result.GetError()));
}
