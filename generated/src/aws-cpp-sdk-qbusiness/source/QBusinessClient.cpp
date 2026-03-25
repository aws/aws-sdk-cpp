/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
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

  return AssociatePermissionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return BatchDeleteDocumentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return BatchPutDocumentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CancelSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  auto eventEncoderStream = Aws::MakeShared<Model::ChatInputStream>(ALLOCATION_TAG);
  eventEncoderStream->SetSigner(GetSignerByName(Aws::Auth::EVENTSTREAM_SIGV4_SIGNER));
  auto requestCopy = Aws::MakeShared<ChatRequest>("Chat", request);
  requestCopy->SetInputStream(eventEncoderStream);  // this becomes the body of the request
  request.SetInputStream(eventEncoderStream);

  auto asyncTask = CreateBidirectionalEventStreamTask<ChatOutcome>(this, endpointResolutionOutcome.GetResultWithOwnership(), requestCopy,
                                                                   handler, handlerContext, eventEncoderStream);
  auto sem = asyncTask.GetSemaphore();
  m_clientConfiguration.executor->Submit(std::move(asyncTask));
  sem->WaitOne();
  streamReadyHandler(*eventEncoderStream);
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

  return ChatSyncOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CheckDocumentAccessOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return CreateAnonymousWebExperienceUrlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApplicationOutcome QBusinessClient::CreateApplication(const CreateApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  };

  return CreateApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateChatResponseConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateDataAccessorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateIndexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreatePluginOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateRetrieverOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateWebExperienceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DeleteApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteAttachmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteChatControlsConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteChatResponseConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteConversationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteDataAccessorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteIndexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeletePluginOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteRetrieverOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteWebExperienceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DisassociatePermissionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return GetApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetChatControlsConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetChatResponseConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetDataAccessorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetDocumentContentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetIndexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetMediaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetPluginOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetRetrieverOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetWebExperienceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListApplicationsOutcome QBusinessClient::ListApplications(const ListApplicationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  };

  return ListApplicationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListAttachmentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListChatResponseConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListConversationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListDataAccessorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListDataSourceSyncJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListDataSourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListDocumentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListIndicesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListMessagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListPluginActionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListPluginTypeActionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPluginTypeMetadataOutcome QBusinessClient::ListPluginTypeMetadata(const ListPluginTypeMetadataRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/pluginTypeMetadata");
  };

  return ListPluginTypeMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListPluginsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListRetrieversOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListSubscriptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListWebExperiencesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return PutFeedbackOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return PutGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return SearchRelevantContentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return StartDataSourceSyncJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return StopDataSourceSyncJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return UpdateApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateChatControlsConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
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

  return UpdateChatResponseConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateDataAccessorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateIndexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdatePluginOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateRetrieverOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateWebExperienceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
