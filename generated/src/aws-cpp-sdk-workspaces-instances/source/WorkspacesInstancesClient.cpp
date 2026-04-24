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
#include <aws/workspaces-instances/WorkspacesInstancesClient.h>
#include <aws/workspaces-instances/WorkspacesInstancesEndpointProvider.h>
#include <aws/workspaces-instances/WorkspacesInstancesErrorMarshaller.h>
#include <aws/workspaces-instances/model/AssociateVolumeRequest.h>
#include <aws/workspaces-instances/model/CreateVolumeRequest.h>
#include <aws/workspaces-instances/model/CreateWorkspaceInstanceRequest.h>
#include <aws/workspaces-instances/model/DeleteVolumeRequest.h>
#include <aws/workspaces-instances/model/DeleteWorkspaceInstanceRequest.h>
#include <aws/workspaces-instances/model/DisassociateVolumeRequest.h>
#include <aws/workspaces-instances/model/GetWorkspaceInstanceRequest.h>
#include <aws/workspaces-instances/model/ListInstanceTypesRequest.h>
#include <aws/workspaces-instances/model/ListRegionsRequest.h>
#include <aws/workspaces-instances/model/ListTagsForResourceRequest.h>
#include <aws/workspaces-instances/model/ListWorkspaceInstancesRequest.h>
#include <aws/workspaces-instances/model/TagResourceRequest.h>
#include <aws/workspaces-instances/model/UntagResourceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WorkspacesInstances;
using namespace Aws::WorkspacesInstances::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace WorkspacesInstances {
const char SERVICE_NAME[] = "workspaces-instances";
const char ALLOCATION_TAG[] = "WorkspacesInstancesClient";
}  // namespace WorkspacesInstances
}  // namespace Aws
const char* WorkspacesInstancesClient::GetServiceName() { return SERVICE_NAME; }
const char* WorkspacesInstancesClient::GetAllocationTag() { return ALLOCATION_TAG; }

WorkspacesInstancesClient::WorkspacesInstancesClient(const WorkspacesInstances::WorkspacesInstancesClientConfiguration& clientConfiguration,
                                                     std::shared_ptr<WorkspacesInstancesEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkspacesInstancesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<WorkspacesInstancesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WorkspacesInstancesClient::WorkspacesInstancesClient(const AWSCredentials& credentials,
                                                     std::shared_ptr<WorkspacesInstancesEndpointProviderBase> endpointProvider,
                                                     const WorkspacesInstances::WorkspacesInstancesClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkspacesInstancesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<WorkspacesInstancesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WorkspacesInstancesClient::WorkspacesInstancesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     std::shared_ptr<WorkspacesInstancesEndpointProviderBase> endpointProvider,
                                                     const WorkspacesInstances::WorkspacesInstancesClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkspacesInstancesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<WorkspacesInstancesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
WorkspacesInstancesClient::WorkspacesInstancesClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkspacesInstancesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WorkspacesInstancesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WorkspacesInstancesClient::WorkspacesInstancesClient(const AWSCredentials& credentials,
                                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkspacesInstancesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WorkspacesInstancesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WorkspacesInstancesClient::WorkspacesInstancesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkspacesInstancesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WorkspacesInstancesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
WorkspacesInstancesClient::~WorkspacesInstancesClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<WorkspacesInstancesEndpointProviderBase>& WorkspacesInstancesClient::accessEndpointProvider() { return m_endpointProvider; }

void WorkspacesInstancesClient::init(const WorkspacesInstances::WorkspacesInstancesClientConfiguration& config) {
  AWSClient::SetServiceClientName("Workspaces Instances");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "workspaces-instances");
}

void WorkspacesInstancesClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
WorkspacesInstancesClient::InvokeOperationOutcome WorkspacesInstancesClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const {
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

AssociateVolumeOutcome WorkspacesInstancesClient::AssociateVolume(const AssociateVolumeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateVolumeOutcome(result.GetResultWithOwnership())
                            : AssociateVolumeOutcome(std::move(result.GetError()));
}

CreateVolumeOutcome WorkspacesInstancesClient::CreateVolume(const CreateVolumeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVolumeOutcome(result.GetResultWithOwnership()) : CreateVolumeOutcome(std::move(result.GetError()));
}

CreateWorkspaceInstanceOutcome WorkspacesInstancesClient::CreateWorkspaceInstance(const CreateWorkspaceInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWorkspaceInstanceOutcome(result.GetResultWithOwnership())
                            : CreateWorkspaceInstanceOutcome(std::move(result.GetError()));
}

DeleteVolumeOutcome WorkspacesInstancesClient::DeleteVolume(const DeleteVolumeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVolumeOutcome(result.GetResultWithOwnership()) : DeleteVolumeOutcome(std::move(result.GetError()));
}

DeleteWorkspaceInstanceOutcome WorkspacesInstancesClient::DeleteWorkspaceInstance(const DeleteWorkspaceInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteWorkspaceInstanceOutcome(result.GetResultWithOwnership())
                            : DeleteWorkspaceInstanceOutcome(std::move(result.GetError()));
}

DisassociateVolumeOutcome WorkspacesInstancesClient::DisassociateVolume(const DisassociateVolumeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateVolumeOutcome(result.GetResultWithOwnership())
                            : DisassociateVolumeOutcome(std::move(result.GetError()));
}

GetWorkspaceInstanceOutcome WorkspacesInstancesClient::GetWorkspaceInstance(const GetWorkspaceInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetWorkspaceInstanceOutcome(result.GetResultWithOwnership())
                            : GetWorkspaceInstanceOutcome(std::move(result.GetError()));
}

ListInstanceTypesOutcome WorkspacesInstancesClient::ListInstanceTypes(const ListInstanceTypesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListInstanceTypesOutcome(result.GetResultWithOwnership())
                            : ListInstanceTypesOutcome(std::move(result.GetError()));
}

ListRegionsOutcome WorkspacesInstancesClient::ListRegions(const ListRegionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRegionsOutcome(result.GetResultWithOwnership()) : ListRegionsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome WorkspacesInstancesClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListWorkspaceInstancesOutcome WorkspacesInstancesClient::ListWorkspaceInstances(const ListWorkspaceInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListWorkspaceInstancesOutcome(result.GetResultWithOwnership())
                            : ListWorkspaceInstancesOutcome(std::move(result.GetError()));
}

TagResourceOutcome WorkspacesInstancesClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome WorkspacesInstancesClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}
