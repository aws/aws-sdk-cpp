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
#include <aws/pcs/PCSClient.h>
#include <aws/pcs/PCSEndpointProvider.h>
#include <aws/pcs/PCSErrorMarshaller.h>
#include <aws/pcs/model/CreateClusterRequest.h>
#include <aws/pcs/model/CreateComputeNodeGroupRequest.h>
#include <aws/pcs/model/CreateQueueRequest.h>
#include <aws/pcs/model/DeleteClusterRequest.h>
#include <aws/pcs/model/DeleteComputeNodeGroupRequest.h>
#include <aws/pcs/model/DeleteQueueRequest.h>
#include <aws/pcs/model/GetClusterRequest.h>
#include <aws/pcs/model/GetComputeNodeGroupRequest.h>
#include <aws/pcs/model/GetQueueRequest.h>
#include <aws/pcs/model/ListClustersRequest.h>
#include <aws/pcs/model/ListComputeNodeGroupsRequest.h>
#include <aws/pcs/model/ListQueuesRequest.h>
#include <aws/pcs/model/ListTagsForResourceRequest.h>
#include <aws/pcs/model/RegisterComputeNodeGroupInstanceRequest.h>
#include <aws/pcs/model/TagResourceRequest.h>
#include <aws/pcs/model/UntagResourceRequest.h>
#include <aws/pcs/model/UpdateClusterRequest.h>
#include <aws/pcs/model/UpdateComputeNodeGroupRequest.h>
#include <aws/pcs/model/UpdateQueueRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PCS;
using namespace Aws::PCS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace PCS {
const char SERVICE_NAME[] = "pcs";
const char ALLOCATION_TAG[] = "PCSClient";
}  // namespace PCS
}  // namespace Aws
const char* PCSClient::GetServiceName() { return SERVICE_NAME; }
const char* PCSClient::GetAllocationTag() { return ALLOCATION_TAG; }

PCSClient::PCSClient(const PCS::PCSClientConfiguration& clientConfiguration, std::shared_ptr<PCSEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PCSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PCSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PCSClient::PCSClient(const AWSCredentials& credentials, std::shared_ptr<PCSEndpointProviderBase> endpointProvider,
                     const PCS::PCSClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PCSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PCSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PCSClient::PCSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<PCSEndpointProviderBase> endpointProvider, const PCS::PCSClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PCSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PCSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
PCSClient::PCSClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PCSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PCSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PCSClient::PCSClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PCSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PCSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PCSClient::PCSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PCSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PCSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
PCSClient::~PCSClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<PCSEndpointProviderBase>& PCSClient::accessEndpointProvider() { return m_endpointProvider; }

void PCSClient::init(const PCS::PCSClientConfiguration& config) {
  AWSClient::SetServiceClientName("PCS");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "pcs");
}

void PCSClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
PCSClient::InvokeOperationOutcome PCSClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateClusterOutcome PCSClient::CreateCluster(const CreateClusterRequest& request) const {
  return CreateClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateComputeNodeGroupOutcome PCSClient::CreateComputeNodeGroup(const CreateComputeNodeGroupRequest& request) const {
  return CreateComputeNodeGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateQueueOutcome PCSClient::CreateQueue(const CreateQueueRequest& request) const {
  return CreateQueueOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteClusterOutcome PCSClient::DeleteCluster(const DeleteClusterRequest& request) const {
  return DeleteClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteComputeNodeGroupOutcome PCSClient::DeleteComputeNodeGroup(const DeleteComputeNodeGroupRequest& request) const {
  return DeleteComputeNodeGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteQueueOutcome PCSClient::DeleteQueue(const DeleteQueueRequest& request) const {
  return DeleteQueueOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetClusterOutcome PCSClient::GetCluster(const GetClusterRequest& request) const {
  return GetClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetComputeNodeGroupOutcome PCSClient::GetComputeNodeGroup(const GetComputeNodeGroupRequest& request) const {
  return GetComputeNodeGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetQueueOutcome PCSClient::GetQueue(const GetQueueRequest& request) const {
  return GetQueueOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListClustersOutcome PCSClient::ListClusters(const ListClustersRequest& request) const {
  return ListClustersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListComputeNodeGroupsOutcome PCSClient::ListComputeNodeGroups(const ListComputeNodeGroupsRequest& request) const {
  return ListComputeNodeGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListQueuesOutcome PCSClient::ListQueues(const ListQueuesRequest& request) const {
  return ListQueuesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome PCSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterComputeNodeGroupInstanceOutcome PCSClient::RegisterComputeNodeGroupInstance(
    const RegisterComputeNodeGroupInstanceRequest& request) const {
  return RegisterComputeNodeGroupInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome PCSClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome PCSClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateClusterOutcome PCSClient::UpdateCluster(const UpdateClusterRequest& request) const {
  return UpdateClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateComputeNodeGroupOutcome PCSClient::UpdateComputeNodeGroup(const UpdateComputeNodeGroupRequest& request) const {
  return UpdateComputeNodeGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateQueueOutcome PCSClient::UpdateQueue(const UpdateQueueRequest& request) const {
  return UpdateQueueOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
