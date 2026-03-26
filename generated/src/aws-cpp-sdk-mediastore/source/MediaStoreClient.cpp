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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateContainerOutcome(result.GetResultWithOwnership())
                            : CreateContainerOutcome(std::move(result.GetError()));
}

DeleteContainerOutcome MediaStoreClient::DeleteContainer(const DeleteContainerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteContainerOutcome(result.GetResultWithOwnership())
                            : DeleteContainerOutcome(std::move(result.GetError()));
}

DeleteContainerPolicyOutcome MediaStoreClient::DeleteContainerPolicy(const DeleteContainerPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteContainerPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteContainerPolicyOutcome(std::move(result.GetError()));
}

DeleteCorsPolicyOutcome MediaStoreClient::DeleteCorsPolicy(const DeleteCorsPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCorsPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteCorsPolicyOutcome(std::move(result.GetError()));
}

DeleteLifecyclePolicyOutcome MediaStoreClient::DeleteLifecyclePolicy(const DeleteLifecyclePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLifecyclePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteLifecyclePolicyOutcome(std::move(result.GetError()));
}

DeleteMetricPolicyOutcome MediaStoreClient::DeleteMetricPolicy(const DeleteMetricPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMetricPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteMetricPolicyOutcome(std::move(result.GetError()));
}

DescribeContainerOutcome MediaStoreClient::DescribeContainer(const DescribeContainerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeContainerOutcome(result.GetResultWithOwnership())
                            : DescribeContainerOutcome(std::move(result.GetError()));
}

GetContainerPolicyOutcome MediaStoreClient::GetContainerPolicy(const GetContainerPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetContainerPolicyOutcome(result.GetResultWithOwnership())
                            : GetContainerPolicyOutcome(std::move(result.GetError()));
}

GetCorsPolicyOutcome MediaStoreClient::GetCorsPolicy(const GetCorsPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCorsPolicyOutcome(result.GetResultWithOwnership()) : GetCorsPolicyOutcome(std::move(result.GetError()));
}

GetLifecyclePolicyOutcome MediaStoreClient::GetLifecyclePolicy(const GetLifecyclePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLifecyclePolicyOutcome(result.GetResultWithOwnership())
                            : GetLifecyclePolicyOutcome(std::move(result.GetError()));
}

GetMetricPolicyOutcome MediaStoreClient::GetMetricPolicy(const GetMetricPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMetricPolicyOutcome(result.GetResultWithOwnership())
                            : GetMetricPolicyOutcome(std::move(result.GetError()));
}

ListContainersOutcome MediaStoreClient::ListContainers(const ListContainersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListContainersOutcome(result.GetResultWithOwnership()) : ListContainersOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome MediaStoreClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutContainerPolicyOutcome MediaStoreClient::PutContainerPolicy(const PutContainerPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutContainerPolicyOutcome(result.GetResultWithOwnership())
                            : PutContainerPolicyOutcome(std::move(result.GetError()));
}

PutCorsPolicyOutcome MediaStoreClient::PutCorsPolicy(const PutCorsPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutCorsPolicyOutcome(result.GetResultWithOwnership()) : PutCorsPolicyOutcome(std::move(result.GetError()));
}

PutLifecyclePolicyOutcome MediaStoreClient::PutLifecyclePolicy(const PutLifecyclePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutLifecyclePolicyOutcome(result.GetResultWithOwnership())
                            : PutLifecyclePolicyOutcome(std::move(result.GetError()));
}

PutMetricPolicyOutcome MediaStoreClient::PutMetricPolicy(const PutMetricPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutMetricPolicyOutcome(result.GetResultWithOwnership())
                            : PutMetricPolicyOutcome(std::move(result.GetError()));
}

StartAccessLoggingOutcome MediaStoreClient::StartAccessLogging(const StartAccessLoggingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartAccessLoggingOutcome(result.GetResultWithOwnership())
                            : StartAccessLoggingOutcome(std::move(result.GetError()));
}

StopAccessLoggingOutcome MediaStoreClient::StopAccessLogging(const StopAccessLoggingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopAccessLoggingOutcome(result.GetResultWithOwnership())
                            : StopAccessLoggingOutcome(std::move(result.GetError()));
}

TagResourceOutcome MediaStoreClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome MediaStoreClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}
