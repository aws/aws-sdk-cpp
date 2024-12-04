/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/core/utils/event/EventStream.h>

#include <aws/qbusiness/QBusinessClient.h>
#include <aws/qbusiness/QBusinessErrorMarshaller.h>
#include <aws/qbusiness/QBusinessEndpointProvider.h>
#include <aws/qbusiness/model/BatchDeleteDocumentRequest.h>
#include <aws/qbusiness/model/BatchPutDocumentRequest.h>
#include <aws/qbusiness/model/ChatRequest.h>
#include <aws/qbusiness/model/ChatSyncRequest.h>
#include <aws/qbusiness/model/CreateApplicationRequest.h>
#include <aws/qbusiness/model/CreateDataSourceRequest.h>
#include <aws/qbusiness/model/CreateIndexRequest.h>
#include <aws/qbusiness/model/CreatePluginRequest.h>
#include <aws/qbusiness/model/CreateRetrieverRequest.h>
#include <aws/qbusiness/model/CreateUserRequest.h>
#include <aws/qbusiness/model/CreateWebExperienceRequest.h>
#include <aws/qbusiness/model/DeleteApplicationRequest.h>
#include <aws/qbusiness/model/DeleteChatControlsConfigurationRequest.h>
#include <aws/qbusiness/model/DeleteConversationRequest.h>
#include <aws/qbusiness/model/DeleteDataSourceRequest.h>
#include <aws/qbusiness/model/DeleteGroupRequest.h>
#include <aws/qbusiness/model/DeleteIndexRequest.h>
#include <aws/qbusiness/model/DeletePluginRequest.h>
#include <aws/qbusiness/model/DeleteRetrieverRequest.h>
#include <aws/qbusiness/model/DeleteUserRequest.h>
#include <aws/qbusiness/model/DeleteWebExperienceRequest.h>
#include <aws/qbusiness/model/GetApplicationRequest.h>
#include <aws/qbusiness/model/GetChatControlsConfigurationRequest.h>
#include <aws/qbusiness/model/GetDataSourceRequest.h>
#include <aws/qbusiness/model/GetGroupRequest.h>
#include <aws/qbusiness/model/GetIndexRequest.h>
#include <aws/qbusiness/model/GetPluginRequest.h>
#include <aws/qbusiness/model/GetRetrieverRequest.h>
#include <aws/qbusiness/model/GetUserRequest.h>
#include <aws/qbusiness/model/GetWebExperienceRequest.h>
#include <aws/qbusiness/model/ListApplicationsRequest.h>
#include <aws/qbusiness/model/ListConversationsRequest.h>
#include <aws/qbusiness/model/ListDataSourceSyncJobsRequest.h>
#include <aws/qbusiness/model/ListDataSourcesRequest.h>
#include <aws/qbusiness/model/ListDocumentsRequest.h>
#include <aws/qbusiness/model/ListGroupsRequest.h>
#include <aws/qbusiness/model/ListIndicesRequest.h>
#include <aws/qbusiness/model/ListMessagesRequest.h>
#include <aws/qbusiness/model/ListPluginsRequest.h>
#include <aws/qbusiness/model/ListRetrieversRequest.h>
#include <aws/qbusiness/model/ListTagsForResourceRequest.h>
#include <aws/qbusiness/model/ListWebExperiencesRequest.h>
#include <aws/qbusiness/model/PutFeedbackRequest.h>
#include <aws/qbusiness/model/PutGroupRequest.h>
#include <aws/qbusiness/model/StartDataSourceSyncJobRequest.h>
#include <aws/qbusiness/model/StopDataSourceSyncJobRequest.h>
#include <aws/qbusiness/model/TagResourceRequest.h>
#include <aws/qbusiness/model/UntagResourceRequest.h>
#include <aws/qbusiness/model/UpdateApplicationRequest.h>
#include <aws/qbusiness/model/UpdateChatControlsConfigurationRequest.h>
#include <aws/qbusiness/model/UpdateDataSourceRequest.h>
#include <aws/qbusiness/model/UpdateIndexRequest.h>
#include <aws/qbusiness/model/UpdatePluginRequest.h>
#include <aws/qbusiness/model/UpdateRetrieverRequest.h>
#include <aws/qbusiness/model/UpdateUserRequest.h>
#include <aws/qbusiness/model/UpdateWebExperienceRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::QBusiness;
using namespace Aws::QBusiness::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace QBusiness
  {
    const char ALLOCATION_TAG[] = "QBusinessClient";
    const char SERVICE_NAME[] = "qbusiness";
  }
}
const char* QBusinessClient::GetServiceName() {return SERVICE_NAME;}
const char* QBusinessClient::GetAllocationTag() {return ALLOCATION_TAG;}

QBusinessClient::QBusinessClient(const QBusiness::QBusinessClientConfiguration& clientConfiguration,
                           std::shared_ptr<QBusinessEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<QBusinessErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<QBusinessEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region, true}},
        })
{
  init(m_clientConfiguration);
}

QBusinessClient::QBusinessClient(const AWSCredentials& credentials,
                           std::shared_ptr<QBusinessEndpointProviderBase> endpointProvider,
                           const QBusiness::QBusinessClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<QBusinessErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<QBusinessEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region , true}},
        })
{
  init(m_clientConfiguration);
}

QBusinessClient::QBusinessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<QBusinessEndpointProviderBase> endpointProvider,
                           const QBusiness::QBusinessClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<QBusinessErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<QBusinessEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region , true}}
        })
{
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
QBusinessClient::QBusinessClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<QBusinessErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<QBusinessEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region , true}}
      })
{
  init(m_clientConfiguration);
}

QBusinessClient::QBusinessClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<QBusinessErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<QBusinessEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region , true}}
        })
{
  init(m_clientConfiguration);
}

QBusinessClient::QBusinessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<QBusinessErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<QBusinessEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region , true}}
        })
{
  init(m_clientConfiguration);
}
/* End of legacy constructors due deprecation */

QBusinessClient::~QBusinessClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<QBusinessEndpointProviderBase>& QBusinessClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void QBusinessClient::init(const QBusiness::QBusinessClientConfiguration& config)
{
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

void QBusinessClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchDeleteDocumentOutcome QBusinessClient::BatchDeleteDocument(const BatchDeleteDocumentRequest& request) const
{
  AWS_OPERATION_GUARD(BatchDeleteDocument);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDeleteDocument, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteDocument", "Required field: ApplicationId, is not set");
    return BatchDeleteDocumentOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteDocument", "Required field: IndexId, is not set");
    return BatchDeleteDocumentOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchDeleteDocument, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchDeleteDocument, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchDeleteDocument",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchDeleteDocumentOutcome>(
    [&]()-> BatchDeleteDocumentOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/indices/");
      endpointOverrides.pathSegments.emplace_back(request.GetIndexId());
      endpointOverrides.pathSegments.emplace_back("/documents/delete");
      return BatchDeleteDocumentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchPutDocumentOutcome QBusinessClient::BatchPutDocument(const BatchPutDocumentRequest& request) const
{
  AWS_OPERATION_GUARD(BatchPutDocument);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchPutDocument, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchPutDocument", "Required field: ApplicationId, is not set");
    return BatchPutDocumentOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchPutDocument", "Required field: IndexId, is not set");
    return BatchPutDocumentOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchPutDocument, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchPutDocument, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchPutDocument",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchPutDocumentOutcome>(
    [&]()-> BatchPutDocumentOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/indices/");
      endpointOverrides.pathSegments.emplace_back(request.GetIndexId());
      endpointOverrides.pathSegments.emplace_back("/documents");
      return BatchPutDocumentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

void QBusinessClient::ChatAsync(Model::ChatRequest& request,
                const ChatStreamReadyHandler& streamReadyHandler,
                const ChatResponseReceivedHandler& handler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext) const
{
  AWS_ASYNC_OPERATION_GUARD(Chat);
  if (!m_endpointProvider) {
    handler(this, request, ChatOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::INTERNAL_FAILURE, "INTERNAL_FAILURE", "Endpoint provider is not initialized", false)), handlerContext);
    return;
  }
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("Chat", "Required field: ApplicationId, is not set");
    handler(this, request, ChatOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false)), handlerContext);
    return;
  }
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
  endpointOverrides.pathSegments.emplace_back("/applications/");
  endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
  endpointOverrides.pathSegments.emplace_back("/conversations");
  request.SetResponseStreamFactory(
      [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
  );

  auto eventEncoderStream = Aws::MakeShared<Model::ChatInputStream>(ALLOCATION_TAG);
  request.SetInputStream(eventEncoderStream); // this becomes the body of the request
  m_clientConfiguration.executor->Submit([this, &request, handler, handlerContext,  endpointOverrides , eventEncoderStream] () mutable {
  JsonOutcome outcome = MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      },
      true,
      eventEncoderStream
      );
      if(outcome.IsSuccess())
      {
        handler(this, request, ChatOutcome(NoResult()), handlerContext);
      }
      else
      {
        request.GetInputStream()->Close();
        handler(this, request, ChatOutcome(outcome.GetError()), handlerContext);
      }
      return ChatOutcome(NoResult());
  });
  streamReadyHandler(*request.GetInputStream());
}
ChatSyncOutcome QBusinessClient::ChatSync(const ChatSyncRequest& request) const
{
  AWS_OPERATION_GUARD(ChatSync);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ChatSync, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ChatSync", "Required field: ApplicationId, is not set");
    return ChatSyncOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ChatSync, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ChatSync, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ChatSync",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ChatSyncOutcome>(
    [&]()-> ChatSyncOutcome {
      Aws::StringStream ss;
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/conversations");
      ss.str("?sync");
      endpointOverrides.queryString = ss.str();
      return ChatSyncOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateApplicationOutcome QBusinessClient::CreateApplication(const CreateApplicationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateApplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateApplication",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateApplicationOutcome>(
    [&]()-> CreateApplicationOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications");
      return CreateApplicationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDataSourceOutcome QBusinessClient::CreateDataSource(const CreateDataSourceRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDataSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDataSource", "Required field: ApplicationId, is not set");
    return CreateDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDataSource", "Required field: IndexId, is not set");
    return CreateDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDataSource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDataSourceOutcome>(
    [&]()-> CreateDataSourceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/indices/");
      endpointOverrides.pathSegments.emplace_back(request.GetIndexId());
      endpointOverrides.pathSegments.emplace_back("/datasources");
      return CreateDataSourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateIndexOutcome QBusinessClient::CreateIndex(const CreateIndexRequest& request) const
{
  AWS_OPERATION_GUARD(CreateIndex);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIndex, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIndex", "Required field: ApplicationId, is not set");
    return CreateIndexOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateIndex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateIndex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateIndex",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateIndexOutcome>(
    [&]()-> CreateIndexOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/indices");
      return CreateIndexOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreatePluginOutcome QBusinessClient::CreatePlugin(const CreatePluginRequest& request) const
{
  AWS_OPERATION_GUARD(CreatePlugin);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePlugin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreatePlugin", "Required field: ApplicationId, is not set");
    return CreatePluginOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreatePlugin, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreatePlugin, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreatePlugin",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreatePluginOutcome>(
    [&]()-> CreatePluginOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/plugins");
      return CreatePluginOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRetrieverOutcome QBusinessClient::CreateRetriever(const CreateRetrieverRequest& request) const
{
  AWS_OPERATION_GUARD(CreateRetriever);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRetriever, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRetriever", "Required field: ApplicationId, is not set");
    return CreateRetrieverOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateRetriever, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateRetriever, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateRetriever",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateRetrieverOutcome>(
    [&]()-> CreateRetrieverOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/retrievers");
      return CreateRetrieverOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateUserOutcome QBusinessClient::CreateUser(const CreateUserRequest& request) const
{
  AWS_OPERATION_GUARD(CreateUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateUser", "Required field: ApplicationId, is not set");
    return CreateUserOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateUser",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateUserOutcome>(
    [&]()-> CreateUserOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/users");
      return CreateUserOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateWebExperienceOutcome QBusinessClient::CreateWebExperience(const CreateWebExperienceRequest& request) const
{
  AWS_OPERATION_GUARD(CreateWebExperience);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWebExperience, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateWebExperience", "Required field: ApplicationId, is not set");
    return CreateWebExperienceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateWebExperience, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateWebExperience, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateWebExperience",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateWebExperienceOutcome>(
    [&]()-> CreateWebExperienceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/experiences");
      return CreateWebExperienceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteApplicationOutcome QBusinessClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteApplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: ApplicationId, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteApplication",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteApplicationOutcome>(
    [&]()-> DeleteApplicationOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      return DeleteApplicationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteChatControlsConfigurationOutcome QBusinessClient::DeleteChatControlsConfiguration(const DeleteChatControlsConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteChatControlsConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteChatControlsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChatControlsConfiguration", "Required field: ApplicationId, is not set");
    return DeleteChatControlsConfigurationOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteChatControlsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteChatControlsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteChatControlsConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteChatControlsConfigurationOutcome>(
    [&]()-> DeleteChatControlsConfigurationOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/chatcontrols");
      return DeleteChatControlsConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteConversationOutcome QBusinessClient::DeleteConversation(const DeleteConversationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteConversation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConversation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConversationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConversation", "Required field: ConversationId, is not set");
    return DeleteConversationOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConversationId]", false));
  }
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConversation", "Required field: ApplicationId, is not set");
    return DeleteConversationOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteConversation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteConversation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteConversation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteConversationOutcome>(
    [&]()-> DeleteConversationOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/conversations/");
      endpointOverrides.pathSegments.emplace_back(request.GetConversationId());
      return DeleteConversationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDataSourceOutcome QBusinessClient::DeleteDataSource(const DeleteDataSourceRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDataSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: ApplicationId, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: IndexId, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexId]", false));
  }
  if (!request.DataSourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: DataSourceId, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDataSource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDataSourceOutcome>(
    [&]()-> DeleteDataSourceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/indices/");
      endpointOverrides.pathSegments.emplace_back(request.GetIndexId());
      endpointOverrides.pathSegments.emplace_back("/datasources/");
      endpointOverrides.pathSegments.emplace_back(request.GetDataSourceId());
      return DeleteDataSourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteGroupOutcome QBusinessClient::DeleteGroup(const DeleteGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGroup", "Required field: ApplicationId, is not set");
    return DeleteGroupOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGroup", "Required field: IndexId, is not set");
    return DeleteGroupOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexId]", false));
  }
  if (!request.GroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGroup", "Required field: GroupName, is not set");
    return DeleteGroupOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteGroupOutcome>(
    [&]()-> DeleteGroupOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/indices/");
      endpointOverrides.pathSegments.emplace_back(request.GetIndexId());
      endpointOverrides.pathSegments.emplace_back("/groups/");
      endpointOverrides.pathSegments.emplace_back(request.GetGroupName());
      return DeleteGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteIndexOutcome QBusinessClient::DeleteIndex(const DeleteIndexRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteIndex);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIndex, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIndex", "Required field: ApplicationId, is not set");
    return DeleteIndexOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIndex", "Required field: IndexId, is not set");
    return DeleteIndexOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteIndex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteIndex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteIndex",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteIndexOutcome>(
    [&]()-> DeleteIndexOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/indices/");
      endpointOverrides.pathSegments.emplace_back(request.GetIndexId());
      return DeleteIndexOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeletePluginOutcome QBusinessClient::DeletePlugin(const DeletePluginRequest& request) const
{
  AWS_OPERATION_GUARD(DeletePlugin);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePlugin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePlugin", "Required field: ApplicationId, is not set");
    return DeletePluginOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.PluginIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePlugin", "Required field: PluginId, is not set");
    return DeletePluginOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PluginId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeletePlugin, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeletePlugin, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeletePlugin",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeletePluginOutcome>(
    [&]()-> DeletePluginOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/plugins/");
      endpointOverrides.pathSegments.emplace_back(request.GetPluginId());
      return DeletePluginOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRetrieverOutcome QBusinessClient::DeleteRetriever(const DeleteRetrieverRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteRetriever);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRetriever, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRetriever", "Required field: ApplicationId, is not set");
    return DeleteRetrieverOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.RetrieverIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRetriever", "Required field: RetrieverId, is not set");
    return DeleteRetrieverOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RetrieverId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteRetriever, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteRetriever, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteRetriever",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteRetrieverOutcome>(
    [&]()-> DeleteRetrieverOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/retrievers/");
      endpointOverrides.pathSegments.emplace_back(request.GetRetrieverId());
      return DeleteRetrieverOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteUserOutcome QBusinessClient::DeleteUser(const DeleteUserRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: ApplicationId, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: UserId, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteUser",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteUserOutcome>(
    [&]()-> DeleteUserOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/users/");
      endpointOverrides.pathSegments.emplace_back(request.GetUserId());
      return DeleteUserOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteWebExperienceOutcome QBusinessClient::DeleteWebExperience(const DeleteWebExperienceRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteWebExperience);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWebExperience, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWebExperience", "Required field: ApplicationId, is not set");
    return DeleteWebExperienceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.WebExperienceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWebExperience", "Required field: WebExperienceId, is not set");
    return DeleteWebExperienceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WebExperienceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteWebExperience, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteWebExperience, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteWebExperience",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteWebExperienceOutcome>(
    [&]()-> DeleteWebExperienceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/experiences/");
      endpointOverrides.pathSegments.emplace_back(request.GetWebExperienceId());
      return DeleteWebExperienceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetApplicationOutcome QBusinessClient::GetApplication(const GetApplicationRequest& request) const
{
  AWS_OPERATION_GUARD(GetApplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: ApplicationId, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetApplication",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetApplicationOutcome>(
    [&]()-> GetApplicationOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      return GetApplicationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetChatControlsConfigurationOutcome QBusinessClient::GetChatControlsConfiguration(const GetChatControlsConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetChatControlsConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetChatControlsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChatControlsConfiguration", "Required field: ApplicationId, is not set");
    return GetChatControlsConfigurationOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetChatControlsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetChatControlsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetChatControlsConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetChatControlsConfigurationOutcome>(
    [&]()-> GetChatControlsConfigurationOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/chatcontrols");
      return GetChatControlsConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDataSourceOutcome QBusinessClient::GetDataSource(const GetDataSourceRequest& request) const
{
  AWS_OPERATION_GUARD(GetDataSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataSource", "Required field: ApplicationId, is not set");
    return GetDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataSource", "Required field: IndexId, is not set");
    return GetDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexId]", false));
  }
  if (!request.DataSourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataSource", "Required field: DataSourceId, is not set");
    return GetDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDataSource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDataSourceOutcome>(
    [&]()-> GetDataSourceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/indices/");
      endpointOverrides.pathSegments.emplace_back(request.GetIndexId());
      endpointOverrides.pathSegments.emplace_back("/datasources/");
      endpointOverrides.pathSegments.emplace_back(request.GetDataSourceId());
      return GetDataSourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetGroupOutcome QBusinessClient::GetGroup(const GetGroupRequest& request) const
{
  AWS_OPERATION_GUARD(GetGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGroup", "Required field: ApplicationId, is not set");
    return GetGroupOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGroup", "Required field: IndexId, is not set");
    return GetGroupOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexId]", false));
  }
  if (!request.GroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGroup", "Required field: GroupName, is not set");
    return GetGroupOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetGroupOutcome>(
    [&]()-> GetGroupOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/indices/");
      endpointOverrides.pathSegments.emplace_back(request.GetIndexId());
      endpointOverrides.pathSegments.emplace_back("/groups/");
      endpointOverrides.pathSegments.emplace_back(request.GetGroupName());
      return GetGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIndexOutcome QBusinessClient::GetIndex(const GetIndexRequest& request) const
{
  AWS_OPERATION_GUARD(GetIndex);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIndex, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIndex", "Required field: ApplicationId, is not set");
    return GetIndexOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIndex", "Required field: IndexId, is not set");
    return GetIndexOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetIndex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetIndex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetIndex",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetIndexOutcome>(
    [&]()-> GetIndexOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/indices/");
      endpointOverrides.pathSegments.emplace_back(request.GetIndexId());
      return GetIndexOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetPluginOutcome QBusinessClient::GetPlugin(const GetPluginRequest& request) const
{
  AWS_OPERATION_GUARD(GetPlugin);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPlugin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPlugin", "Required field: ApplicationId, is not set");
    return GetPluginOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.PluginIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPlugin", "Required field: PluginId, is not set");
    return GetPluginOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PluginId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetPlugin, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetPlugin, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetPlugin",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetPluginOutcome>(
    [&]()-> GetPluginOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/plugins/");
      endpointOverrides.pathSegments.emplace_back(request.GetPluginId());
      return GetPluginOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRetrieverOutcome QBusinessClient::GetRetriever(const GetRetrieverRequest& request) const
{
  AWS_OPERATION_GUARD(GetRetriever);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRetriever, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRetriever", "Required field: ApplicationId, is not set");
    return GetRetrieverOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.RetrieverIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRetriever", "Required field: RetrieverId, is not set");
    return GetRetrieverOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RetrieverId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetRetriever, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRetriever, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRetriever",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRetrieverOutcome>(
    [&]()-> GetRetrieverOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/retrievers/");
      endpointOverrides.pathSegments.emplace_back(request.GetRetrieverId());
      return GetRetrieverOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetUserOutcome QBusinessClient::GetUser(const GetUserRequest& request) const
{
  AWS_OPERATION_GUARD(GetUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUser", "Required field: ApplicationId, is not set");
    return GetUserOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUser", "Required field: UserId, is not set");
    return GetUserOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetUser",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetUserOutcome>(
    [&]()-> GetUserOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/users/");
      endpointOverrides.pathSegments.emplace_back(request.GetUserId());
      return GetUserOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetWebExperienceOutcome QBusinessClient::GetWebExperience(const GetWebExperienceRequest& request) const
{
  AWS_OPERATION_GUARD(GetWebExperience);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWebExperience, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWebExperience", "Required field: ApplicationId, is not set");
    return GetWebExperienceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.WebExperienceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWebExperience", "Required field: WebExperienceId, is not set");
    return GetWebExperienceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WebExperienceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetWebExperience, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetWebExperience, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetWebExperience",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetWebExperienceOutcome>(
    [&]()-> GetWebExperienceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/experiences/");
      endpointOverrides.pathSegments.emplace_back(request.GetWebExperienceId());
      return GetWebExperienceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListApplicationsOutcome QBusinessClient::ListApplications(const ListApplicationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListApplications);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListApplications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListApplications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListApplications",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListApplicationsOutcome>(
    [&]()-> ListApplicationsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications");
      return ListApplicationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListConversationsOutcome QBusinessClient::ListConversations(const ListConversationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListConversations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConversations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListConversations", "Required field: ApplicationId, is not set");
    return ListConversationsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListConversations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListConversations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListConversations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListConversationsOutcome>(
    [&]()-> ListConversationsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/conversations");
      return ListConversationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDataSourceSyncJobsOutcome QBusinessClient::ListDataSourceSyncJobs(const ListDataSourceSyncJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDataSourceSyncJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataSourceSyncJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSourceSyncJobs", "Required field: DataSourceId, is not set");
    return ListDataSourceSyncJobsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSourceSyncJobs", "Required field: ApplicationId, is not set");
    return ListDataSourceSyncJobsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSourceSyncJobs", "Required field: IndexId, is not set");
    return ListDataSourceSyncJobsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDataSourceSyncJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDataSourceSyncJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDataSourceSyncJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDataSourceSyncJobsOutcome>(
    [&]()-> ListDataSourceSyncJobsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/indices/");
      endpointOverrides.pathSegments.emplace_back(request.GetIndexId());
      endpointOverrides.pathSegments.emplace_back("/datasources/");
      endpointOverrides.pathSegments.emplace_back(request.GetDataSourceId());
      endpointOverrides.pathSegments.emplace_back("/syncjobs");
      return ListDataSourceSyncJobsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDataSourcesOutcome QBusinessClient::ListDataSources(const ListDataSourcesRequest& request) const
{
  AWS_OPERATION_GUARD(ListDataSources);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSources", "Required field: ApplicationId, is not set");
    return ListDataSourcesOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSources", "Required field: IndexId, is not set");
    return ListDataSourcesOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDataSources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDataSources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDataSources",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDataSourcesOutcome>(
    [&]()-> ListDataSourcesOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/indices/");
      endpointOverrides.pathSegments.emplace_back(request.GetIndexId());
      endpointOverrides.pathSegments.emplace_back("/datasources");
      return ListDataSourcesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDocumentsOutcome QBusinessClient::ListDocuments(const ListDocumentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDocuments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDocuments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDocuments", "Required field: ApplicationId, is not set");
    return ListDocumentsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDocuments", "Required field: IndexId, is not set");
    return ListDocumentsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDocuments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDocuments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDocuments",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDocumentsOutcome>(
    [&]()-> ListDocumentsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/index/");
      endpointOverrides.pathSegments.emplace_back(request.GetIndexId());
      endpointOverrides.pathSegments.emplace_back("/documents");
      return ListDocumentsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListGroupsOutcome QBusinessClient::ListGroups(const ListGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroups", "Required field: ApplicationId, is not set");
    return ListGroupsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroups", "Required field: IndexId, is not set");
    return ListGroupsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexId]", false));
  }
  if (!request.UpdatedEarlierThanHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroups", "Required field: UpdatedEarlierThan, is not set");
    return ListGroupsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UpdatedEarlierThan]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListGroups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListGroupsOutcome>(
    [&]()-> ListGroupsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/indices/");
      endpointOverrides.pathSegments.emplace_back(request.GetIndexId());
      endpointOverrides.pathSegments.emplace_back("/groups");
      return ListGroupsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIndicesOutcome QBusinessClient::ListIndices(const ListIndicesRequest& request) const
{
  AWS_OPERATION_GUARD(ListIndices);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIndices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIndices", "Required field: ApplicationId, is not set");
    return ListIndicesOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListIndices, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIndices, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIndices",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIndicesOutcome>(
    [&]()-> ListIndicesOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/indices");
      return ListIndicesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMessagesOutcome QBusinessClient::ListMessages(const ListMessagesRequest& request) const
{
  AWS_OPERATION_GUARD(ListMessages);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMessages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConversationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMessages", "Required field: ConversationId, is not set");
    return ListMessagesOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConversationId]", false));
  }
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMessages", "Required field: ApplicationId, is not set");
    return ListMessagesOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMessages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMessages, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMessages",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMessagesOutcome>(
    [&]()-> ListMessagesOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/conversations/");
      endpointOverrides.pathSegments.emplace_back(request.GetConversationId());
      return ListMessagesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPluginsOutcome QBusinessClient::ListPlugins(const ListPluginsRequest& request) const
{
  AWS_OPERATION_GUARD(ListPlugins);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPlugins, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPlugins", "Required field: ApplicationId, is not set");
    return ListPluginsOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListPlugins, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPlugins, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPlugins",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPluginsOutcome>(
    [&]()-> ListPluginsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/plugins");
      return ListPluginsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRetrieversOutcome QBusinessClient::ListRetrievers(const ListRetrieversRequest& request) const
{
  AWS_OPERATION_GUARD(ListRetrievers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRetrievers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRetrievers", "Required field: ApplicationId, is not set");
    return ListRetrieversOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListRetrievers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRetrievers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRetrievers",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRetrieversOutcome>(
    [&]()-> ListRetrieversOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/retrievers");
      return ListRetrieversOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome QBusinessClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceARN, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/tags/");
      endpointOverrides.pathSegments.emplace_back(request.GetResourceARN());
      return ListTagsForResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWebExperiencesOutcome QBusinessClient::ListWebExperiences(const ListWebExperiencesRequest& request) const
{
  AWS_OPERATION_GUARD(ListWebExperiences);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWebExperiences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListWebExperiences", "Required field: ApplicationId, is not set");
    return ListWebExperiencesOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListWebExperiences, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWebExperiences, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWebExperiences",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWebExperiencesOutcome>(
    [&]()-> ListWebExperiencesOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/experiences");
      return ListWebExperiencesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutFeedbackOutcome QBusinessClient::PutFeedback(const PutFeedbackRequest& request) const
{
  AWS_OPERATION_GUARD(PutFeedback);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutFeedback", "Required field: ApplicationId, is not set");
    return PutFeedbackOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ConversationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutFeedback", "Required field: ConversationId, is not set");
    return PutFeedbackOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConversationId]", false));
  }
  if (!request.MessageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutFeedback", "Required field: MessageId, is not set");
    return PutFeedbackOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutFeedback, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutFeedback, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutFeedback",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutFeedbackOutcome>(
    [&]()-> PutFeedbackOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/conversations/");
      endpointOverrides.pathSegments.emplace_back(request.GetConversationId());
      endpointOverrides.pathSegments.emplace_back("/messages/");
      endpointOverrides.pathSegments.emplace_back(request.GetMessageId());
      endpointOverrides.pathSegments.emplace_back("/feedback");
      return PutFeedbackOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutGroupOutcome QBusinessClient::PutGroup(const PutGroupRequest& request) const
{
  AWS_OPERATION_GUARD(PutGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutGroup", "Required field: ApplicationId, is not set");
    return PutGroupOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutGroup", "Required field: IndexId, is not set");
    return PutGroupOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutGroupOutcome>(
    [&]()-> PutGroupOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/indices/");
      endpointOverrides.pathSegments.emplace_back(request.GetIndexId());
      endpointOverrides.pathSegments.emplace_back("/groups");
      return PutGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartDataSourceSyncJobOutcome QBusinessClient::StartDataSourceSyncJob(const StartDataSourceSyncJobRequest& request) const
{
  AWS_OPERATION_GUARD(StartDataSourceSyncJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartDataSourceSyncJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDataSourceSyncJob", "Required field: DataSourceId, is not set");
    return StartDataSourceSyncJobOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDataSourceSyncJob", "Required field: ApplicationId, is not set");
    return StartDataSourceSyncJobOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDataSourceSyncJob", "Required field: IndexId, is not set");
    return StartDataSourceSyncJobOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartDataSourceSyncJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartDataSourceSyncJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartDataSourceSyncJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartDataSourceSyncJobOutcome>(
    [&]()-> StartDataSourceSyncJobOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/indices/");
      endpointOverrides.pathSegments.emplace_back(request.GetIndexId());
      endpointOverrides.pathSegments.emplace_back("/datasources/");
      endpointOverrides.pathSegments.emplace_back(request.GetDataSourceId());
      endpointOverrides.pathSegments.emplace_back("/startsync");
      return StartDataSourceSyncJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopDataSourceSyncJobOutcome QBusinessClient::StopDataSourceSyncJob(const StopDataSourceSyncJobRequest& request) const
{
  AWS_OPERATION_GUARD(StopDataSourceSyncJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopDataSourceSyncJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopDataSourceSyncJob", "Required field: DataSourceId, is not set");
    return StopDataSourceSyncJobOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopDataSourceSyncJob", "Required field: ApplicationId, is not set");
    return StopDataSourceSyncJobOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopDataSourceSyncJob", "Required field: IndexId, is not set");
    return StopDataSourceSyncJobOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StopDataSourceSyncJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopDataSourceSyncJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopDataSourceSyncJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopDataSourceSyncJobOutcome>(
    [&]()-> StopDataSourceSyncJobOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/indices/");
      endpointOverrides.pathSegments.emplace_back(request.GetIndexId());
      endpointOverrides.pathSegments.emplace_back("/datasources/");
      endpointOverrides.pathSegments.emplace_back(request.GetDataSourceId());
      endpointOverrides.pathSegments.emplace_back("/stopsync");
      return StopDataSourceSyncJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome QBusinessClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceARN, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/tags/");
      endpointOverrides.pathSegments.emplace_back(request.GetResourceARN());
      return TagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome QBusinessClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceARN, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/v1/tags/");
      endpointOverrides.pathSegments.emplace_back(request.GetResourceARN());
      return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateApplicationOutcome QBusinessClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateApplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApplication", "Required field: ApplicationId, is not set");
    return UpdateApplicationOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateApplication",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateApplicationOutcome>(
    [&]()-> UpdateApplicationOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      return UpdateApplicationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateChatControlsConfigurationOutcome QBusinessClient::UpdateChatControlsConfiguration(const UpdateChatControlsConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateChatControlsConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateChatControlsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChatControlsConfiguration", "Required field: ApplicationId, is not set");
    return UpdateChatControlsConfigurationOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateChatControlsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateChatControlsConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateChatControlsConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateChatControlsConfigurationOutcome>(
    [&]()-> UpdateChatControlsConfigurationOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/chatcontrols");
      return UpdateChatControlsConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDataSourceOutcome QBusinessClient::UpdateDataSource(const UpdateDataSourceRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDataSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: ApplicationId, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: IndexId, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexId]", false));
  }
  if (!request.DataSourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: DataSourceId, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDataSource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDataSourceOutcome>(
    [&]()-> UpdateDataSourceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/indices/");
      endpointOverrides.pathSegments.emplace_back(request.GetIndexId());
      endpointOverrides.pathSegments.emplace_back("/datasources/");
      endpointOverrides.pathSegments.emplace_back(request.GetDataSourceId());
      return UpdateDataSourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateIndexOutcome QBusinessClient::UpdateIndex(const UpdateIndexRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateIndex);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIndex, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIndex", "Required field: ApplicationId, is not set");
    return UpdateIndexOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.IndexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIndex", "Required field: IndexId, is not set");
    return UpdateIndexOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IndexId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateIndex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateIndex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateIndex",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateIndexOutcome>(
    [&]()-> UpdateIndexOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/indices/");
      endpointOverrides.pathSegments.emplace_back(request.GetIndexId());
      return UpdateIndexOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdatePluginOutcome QBusinessClient::UpdatePlugin(const UpdatePluginRequest& request) const
{
  AWS_OPERATION_GUARD(UpdatePlugin);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePlugin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePlugin", "Required field: ApplicationId, is not set");
    return UpdatePluginOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.PluginIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePlugin", "Required field: PluginId, is not set");
    return UpdatePluginOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PluginId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdatePlugin, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdatePlugin, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdatePlugin",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdatePluginOutcome>(
    [&]()-> UpdatePluginOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/plugins/");
      endpointOverrides.pathSegments.emplace_back(request.GetPluginId());
      return UpdatePluginOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRetrieverOutcome QBusinessClient::UpdateRetriever(const UpdateRetrieverRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateRetriever);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRetriever, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRetriever", "Required field: ApplicationId, is not set");
    return UpdateRetrieverOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.RetrieverIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRetriever", "Required field: RetrieverId, is not set");
    return UpdateRetrieverOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RetrieverId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateRetriever, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateRetriever, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateRetriever",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateRetrieverOutcome>(
    [&]()-> UpdateRetrieverOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/retrievers/");
      endpointOverrides.pathSegments.emplace_back(request.GetRetrieverId());
      return UpdateRetrieverOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateUserOutcome QBusinessClient::UpdateUser(const UpdateUserRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: ApplicationId, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: UserId, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateUser",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateUserOutcome>(
    [&]()-> UpdateUserOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/users/");
      endpointOverrides.pathSegments.emplace_back(request.GetUserId());
      return UpdateUserOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateWebExperienceOutcome QBusinessClient::UpdateWebExperience(const UpdateWebExperienceRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateWebExperience);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWebExperience, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWebExperience", "Required field: ApplicationId, is not set");
    return UpdateWebExperienceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.WebExperienceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWebExperience", "Required field: WebExperienceId, is not set");
    return UpdateWebExperienceOutcome(Aws::Client::AWSError<QBusinessErrors>(QBusinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WebExperienceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateWebExperience, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateWebExperience, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateWebExperience",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateWebExperienceOutcome>(
    [&]()-> UpdateWebExperienceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.pathSegments.emplace_back("/applications/");
      endpointOverrides.pathSegments.emplace_back(request.GetApplicationId());
      endpointOverrides.pathSegments.emplace_back("/experiences/");
      endpointOverrides.pathSegments.emplace_back(request.GetWebExperienceId());
      return UpdateWebExperienceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


