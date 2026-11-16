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
#include <aws/opensearchmemory/OpenSearchMemoryClient.h>
#include <aws/opensearchmemory/OpenSearchMemoryEndpointProvider.h>
#include <aws/opensearchmemory/OpenSearchMemoryErrorMarshaller.h>
#include <aws/opensearchmemory/model/BatchGetEventRequest.h>
#include <aws/opensearchmemory/model/CreateEventRequest.h>
#include <aws/opensearchmemory/model/CreateMemoryRequest.h>
#include <aws/opensearchmemory/model/CreateSpaceRequest.h>
#include <aws/opensearchmemory/model/DeleteEventRequest.h>
#include <aws/opensearchmemory/model/DeleteMemoryRequest.h>
#include <aws/opensearchmemory/model/DeleteSpaceRequest.h>
#include <aws/opensearchmemory/model/GetEventRequest.h>
#include <aws/opensearchmemory/model/GetMemoryRequest.h>
#include <aws/opensearchmemory/model/GetSpaceRequest.h>
#include <aws/opensearchmemory/model/ListEventsRequest.h>
#include <aws/opensearchmemory/model/ListMemoriesRequest.h>
#include <aws/opensearchmemory/model/ListSpacesRequest.h>
#include <aws/opensearchmemory/model/ListTagsForResourceRequest.h>
#include <aws/opensearchmemory/model/SearchEventsRequest.h>
#include <aws/opensearchmemory/model/SearchMemoriesRequest.h>
#include <aws/opensearchmemory/model/TagResourceRequest.h>
#include <aws/opensearchmemory/model/UntagResourceRequest.h>
#include <aws/opensearchmemory/model/UpdateMemoryRequest.h>
#include <aws/opensearchmemory/model/UpdateSpaceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::OpenSearchMemory;
using namespace Aws::OpenSearchMemory::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace OpenSearchMemory {
const char SERVICE_NAME[] = "osm";
const char ALLOCATION_TAG[] = "OpenSearchMemoryClient";
}  // namespace OpenSearchMemory
}  // namespace Aws
const char* OpenSearchMemoryClient::GetServiceName() { return SERVICE_NAME; }
const char* OpenSearchMemoryClient::GetAllocationTag() { return ALLOCATION_TAG; }

OpenSearchMemoryClient::OpenSearchMemoryClient(const OpenSearchMemory::OpenSearchMemoryClientConfiguration& clientConfiguration,
                                               std::shared_ptr<OpenSearchMemoryEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OpenSearchMemoryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<OpenSearchMemoryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OpenSearchMemoryClient::OpenSearchMemoryClient(const AWSCredentials& credentials,
                                               std::shared_ptr<OpenSearchMemoryEndpointProviderBase> endpointProvider,
                                               const OpenSearchMemory::OpenSearchMemoryClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OpenSearchMemoryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<OpenSearchMemoryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OpenSearchMemoryClient::OpenSearchMemoryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<OpenSearchMemoryEndpointProviderBase> endpointProvider,
                                               const OpenSearchMemory::OpenSearchMemoryClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OpenSearchMemoryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<OpenSearchMemoryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
OpenSearchMemoryClient::OpenSearchMemoryClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OpenSearchMemoryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OpenSearchMemoryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OpenSearchMemoryClient::OpenSearchMemoryClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OpenSearchMemoryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OpenSearchMemoryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OpenSearchMemoryClient::OpenSearchMemoryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OpenSearchMemoryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OpenSearchMemoryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
OpenSearchMemoryClient::~OpenSearchMemoryClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<OpenSearchMemoryEndpointProviderBase>& OpenSearchMemoryClient::accessEndpointProvider() { return m_endpointProvider; }

void OpenSearchMemoryClient::init(const OpenSearchMemory::OpenSearchMemoryClientConfiguration& config) {
  AWSClient::SetServiceClientName("OpenSearchMemory");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "osm");
}

void OpenSearchMemoryClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
OpenSearchMemoryClient::InvokeOperationOutcome OpenSearchMemoryClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

  return Aws::Client::AsyncOperationState::MakeCallWithTiming<InvokeOperationOutcome>(
      request, std::move(span),
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

BatchGetEventOutcome OpenSearchMemoryClient::BatchGetEvent(const BatchGetEventRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetEventOutcome(result.GetResultWithOwnership()) : BatchGetEventOutcome(std::move(result.GetError()));
}

CreateEventOutcome OpenSearchMemoryClient::CreateEvent(const CreateEventRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEventOutcome(result.GetResultWithOwnership()) : CreateEventOutcome(std::move(result.GetError()));
}

CreateMemoryOutcome OpenSearchMemoryClient::CreateMemory(const CreateMemoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMemoryOutcome(result.GetResultWithOwnership()) : CreateMemoryOutcome(std::move(result.GetError()));
}

CreateSpaceOutcome OpenSearchMemoryClient::CreateSpace(const CreateSpaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSpaceOutcome(result.GetResultWithOwnership()) : CreateSpaceOutcome(std::move(result.GetError()));
}

DeleteEventOutcome OpenSearchMemoryClient::DeleteEvent(const DeleteEventRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEventOutcome(result.GetResultWithOwnership()) : DeleteEventOutcome(std::move(result.GetError()));
}

DeleteMemoryOutcome OpenSearchMemoryClient::DeleteMemory(const DeleteMemoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMemoryOutcome(result.GetResultWithOwnership()) : DeleteMemoryOutcome(std::move(result.GetError()));
}

DeleteSpaceOutcome OpenSearchMemoryClient::DeleteSpace(const DeleteSpaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSpaceOutcome(result.GetResultWithOwnership()) : DeleteSpaceOutcome(std::move(result.GetError()));
}

GetEventOutcome OpenSearchMemoryClient::GetEvent(const GetEventRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetEventOutcome(result.GetResultWithOwnership()) : GetEventOutcome(std::move(result.GetError()));
}

GetMemoryOutcome OpenSearchMemoryClient::GetMemory(const GetMemoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMemoryOutcome(result.GetResultWithOwnership()) : GetMemoryOutcome(std::move(result.GetError()));
}

GetSpaceOutcome OpenSearchMemoryClient::GetSpace(const GetSpaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSpaceOutcome(result.GetResultWithOwnership()) : GetSpaceOutcome(std::move(result.GetError()));
}

ListEventsOutcome OpenSearchMemoryClient::ListEvents(const ListEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEventsOutcome(result.GetResultWithOwnership()) : ListEventsOutcome(std::move(result.GetError()));
}

ListMemoriesOutcome OpenSearchMemoryClient::ListMemories(const ListMemoriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMemoriesOutcome(result.GetResultWithOwnership()) : ListMemoriesOutcome(std::move(result.GetError()));
}

ListSpacesOutcome OpenSearchMemoryClient::ListSpaces(const ListSpacesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSpacesOutcome(result.GetResultWithOwnership()) : ListSpacesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome OpenSearchMemoryClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

SearchEventsOutcome OpenSearchMemoryClient::SearchEvents(const SearchEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchEventsOutcome(result.GetResultWithOwnership()) : SearchEventsOutcome(std::move(result.GetError()));
}

SearchMemoriesOutcome OpenSearchMemoryClient::SearchMemories(const SearchMemoriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchMemoriesOutcome(result.GetResultWithOwnership()) : SearchMemoriesOutcome(std::move(result.GetError()));
}

TagResourceOutcome OpenSearchMemoryClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome OpenSearchMemoryClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateMemoryOutcome OpenSearchMemoryClient::UpdateMemory(const UpdateMemoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateMemoryOutcome(result.GetResultWithOwnership()) : UpdateMemoryOutcome(std::move(result.GetError()));
}

UpdateSpaceOutcome OpenSearchMemoryClient::UpdateSpace(const UpdateSpaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSpaceOutcome(result.GetResultWithOwnership()) : UpdateSpaceOutcome(std::move(result.GetError()));
}
