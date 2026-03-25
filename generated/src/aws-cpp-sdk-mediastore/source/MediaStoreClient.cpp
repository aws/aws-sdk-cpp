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
#include <aws/mediastore/MediaStoreClient.h>
#include <aws/mediastore/MediaStoreEndpointProvider.h>
#include <aws/mediastore/MediaStoreErrorMarshaller.h>
#include <aws/mediastore/model/CreateContainerRequest.h>
#include <aws/mediastore/model/DeleteContainerPolicyRequest.h>
#include <aws/mediastore/model/DeleteContainerRequest.h>
#include <aws/mediastore/model/DeleteCorsPolicyRequest.h>
#include <aws/mediastore/model/DeleteLifecyclePolicyRequest.h>
#include <aws/mediastore/model/DeleteMetricPolicyRequest.h>
#include <aws/mediastore/model/DescribeContainerRequest.h>
#include <aws/mediastore/model/GetContainerPolicyRequest.h>
#include <aws/mediastore/model/GetCorsPolicyRequest.h>
#include <aws/mediastore/model/GetLifecyclePolicyRequest.h>
#include <aws/mediastore/model/GetMetricPolicyRequest.h>
#include <aws/mediastore/model/ListContainersRequest.h>
#include <aws/mediastore/model/ListTagsForResourceRequest.h>
#include <aws/mediastore/model/PutContainerPolicyRequest.h>
#include <aws/mediastore/model/PutCorsPolicyRequest.h>
#include <aws/mediastore/model/PutLifecyclePolicyRequest.h>
#include <aws/mediastore/model/PutMetricPolicyRequest.h>
#include <aws/mediastore/model/StartAccessLoggingRequest.h>
#include <aws/mediastore/model/StopAccessLoggingRequest.h>
#include <aws/mediastore/model/TagResourceRequest.h>
#include <aws/mediastore/model/UntagResourceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaStore;
using namespace Aws::MediaStore::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MediaStore {
const char SERVICE_NAME[] = "mediastore";
const char ALLOCATION_TAG[] = "MediaStoreClient";
}  // namespace MediaStore
}  // namespace Aws
const char* MediaStoreClient::GetServiceName() { return SERVICE_NAME; }
const char* MediaStoreClient::GetAllocationTag() { return ALLOCATION_TAG; }

MediaStoreClient::MediaStoreClient(const MediaStore::MediaStoreClientConfiguration& clientConfiguration,
                                   std::shared_ptr<MediaStoreEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaStoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MediaStoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaStoreClient::MediaStoreClient(const AWSCredentials& credentials, std::shared_ptr<MediaStoreEndpointProviderBase> endpointProvider,
                                   const MediaStore::MediaStoreClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaStoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MediaStoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaStoreClient::MediaStoreClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<MediaStoreEndpointProviderBase> endpointProvider,
                                   const MediaStore::MediaStoreClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaStoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MediaStoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MediaStoreClient::MediaStoreClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaStoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MediaStoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaStoreClient::MediaStoreClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaStoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MediaStoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaStoreClient::MediaStoreClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaStoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MediaStoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MediaStoreClient::~MediaStoreClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MediaStoreEndpointProviderBase>& MediaStoreClient::accessEndpointProvider() { return m_endpointProvider; }

void MediaStoreClient::init(const MediaStore::MediaStoreClientConfiguration& config) {
  AWSClient::SetServiceClientName("MediaStore");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "mediastore");
}

void MediaStoreClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MediaStoreClient::InvokeOperationOutcome MediaStoreClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateContainerOutcome MediaStoreClient::CreateContainer(const CreateContainerRequest& request) const {
  return CreateContainerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteContainerOutcome MediaStoreClient::DeleteContainer(const DeleteContainerRequest& request) const {
  return DeleteContainerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteContainerPolicyOutcome MediaStoreClient::DeleteContainerPolicy(const DeleteContainerPolicyRequest& request) const {
  return DeleteContainerPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCorsPolicyOutcome MediaStoreClient::DeleteCorsPolicy(const DeleteCorsPolicyRequest& request) const {
  return DeleteCorsPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLifecyclePolicyOutcome MediaStoreClient::DeleteLifecyclePolicy(const DeleteLifecyclePolicyRequest& request) const {
  return DeleteLifecyclePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMetricPolicyOutcome MediaStoreClient::DeleteMetricPolicy(const DeleteMetricPolicyRequest& request) const {
  return DeleteMetricPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeContainerOutcome MediaStoreClient::DescribeContainer(const DescribeContainerRequest& request) const {
  return DescribeContainerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetContainerPolicyOutcome MediaStoreClient::GetContainerPolicy(const GetContainerPolicyRequest& request) const {
  return GetContainerPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCorsPolicyOutcome MediaStoreClient::GetCorsPolicy(const GetCorsPolicyRequest& request) const {
  return GetCorsPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLifecyclePolicyOutcome MediaStoreClient::GetLifecyclePolicy(const GetLifecyclePolicyRequest& request) const {
  return GetLifecyclePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMetricPolicyOutcome MediaStoreClient::GetMetricPolicy(const GetMetricPolicyRequest& request) const {
  return GetMetricPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListContainersOutcome MediaStoreClient::ListContainers(const ListContainersRequest& request) const {
  return ListContainersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome MediaStoreClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutContainerPolicyOutcome MediaStoreClient::PutContainerPolicy(const PutContainerPolicyRequest& request) const {
  return PutContainerPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutCorsPolicyOutcome MediaStoreClient::PutCorsPolicy(const PutCorsPolicyRequest& request) const {
  return PutCorsPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutLifecyclePolicyOutcome MediaStoreClient::PutLifecyclePolicy(const PutLifecyclePolicyRequest& request) const {
  return PutLifecyclePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutMetricPolicyOutcome MediaStoreClient::PutMetricPolicy(const PutMetricPolicyRequest& request) const {
  return PutMetricPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartAccessLoggingOutcome MediaStoreClient::StartAccessLogging(const StartAccessLoggingRequest& request) const {
  return StartAccessLoggingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopAccessLoggingOutcome MediaStoreClient::StopAccessLogging(const StopAccessLoggingRequest& request) const {
  return StopAccessLoggingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome MediaStoreClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome MediaStoreClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
