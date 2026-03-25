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
#include <aws/servicediscovery/ServiceDiscoveryClient.h>
#include <aws/servicediscovery/ServiceDiscoveryEndpointProvider.h>
#include <aws/servicediscovery/ServiceDiscoveryErrorMarshaller.h>
#include <aws/servicediscovery/model/CreateHttpNamespaceRequest.h>
#include <aws/servicediscovery/model/CreatePrivateDnsNamespaceRequest.h>
#include <aws/servicediscovery/model/CreatePublicDnsNamespaceRequest.h>
#include <aws/servicediscovery/model/CreateServiceRequest.h>
#include <aws/servicediscovery/model/DeleteNamespaceRequest.h>
#include <aws/servicediscovery/model/DeleteServiceAttributesRequest.h>
#include <aws/servicediscovery/model/DeleteServiceRequest.h>
#include <aws/servicediscovery/model/DeregisterInstanceRequest.h>
#include <aws/servicediscovery/model/DiscoverInstancesRequest.h>
#include <aws/servicediscovery/model/DiscoverInstancesRevisionRequest.h>
#include <aws/servicediscovery/model/GetInstanceRequest.h>
#include <aws/servicediscovery/model/GetInstancesHealthStatusRequest.h>
#include <aws/servicediscovery/model/GetNamespaceRequest.h>
#include <aws/servicediscovery/model/GetOperationRequest.h>
#include <aws/servicediscovery/model/GetServiceAttributesRequest.h>
#include <aws/servicediscovery/model/GetServiceRequest.h>
#include <aws/servicediscovery/model/ListInstancesRequest.h>
#include <aws/servicediscovery/model/ListNamespacesRequest.h>
#include <aws/servicediscovery/model/ListOperationsRequest.h>
#include <aws/servicediscovery/model/ListServicesRequest.h>
#include <aws/servicediscovery/model/ListTagsForResourceRequest.h>
#include <aws/servicediscovery/model/RegisterInstanceRequest.h>
#include <aws/servicediscovery/model/TagResourceRequest.h>
#include <aws/servicediscovery/model/UntagResourceRequest.h>
#include <aws/servicediscovery/model/UpdateHttpNamespaceRequest.h>
#include <aws/servicediscovery/model/UpdateInstanceCustomHealthStatusRequest.h>
#include <aws/servicediscovery/model/UpdatePrivateDnsNamespaceRequest.h>
#include <aws/servicediscovery/model/UpdatePublicDnsNamespaceRequest.h>
#include <aws/servicediscovery/model/UpdateServiceAttributesRequest.h>
#include <aws/servicediscovery/model/UpdateServiceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ServiceDiscovery;
using namespace Aws::ServiceDiscovery::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ServiceDiscovery {
const char SERVICE_NAME[] = "servicediscovery";
const char ALLOCATION_TAG[] = "ServiceDiscoveryClient";
}  // namespace ServiceDiscovery
}  // namespace Aws
const char* ServiceDiscoveryClient::GetServiceName() { return SERVICE_NAME; }
const char* ServiceDiscoveryClient::GetAllocationTag() { return ALLOCATION_TAG; }

ServiceDiscoveryClient::ServiceDiscoveryClient(const ServiceDiscovery::ServiceDiscoveryClientConfiguration& clientConfiguration,
                                               std::shared_ptr<ServiceDiscoveryEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ServiceDiscoveryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ServiceDiscoveryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ServiceDiscoveryClient::ServiceDiscoveryClient(const AWSCredentials& credentials,
                                               std::shared_ptr<ServiceDiscoveryEndpointProviderBase> endpointProvider,
                                               const ServiceDiscovery::ServiceDiscoveryClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ServiceDiscoveryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ServiceDiscoveryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ServiceDiscoveryClient::ServiceDiscoveryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<ServiceDiscoveryEndpointProviderBase> endpointProvider,
                                               const ServiceDiscovery::ServiceDiscoveryClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ServiceDiscoveryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ServiceDiscoveryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ServiceDiscoveryClient::ServiceDiscoveryClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ServiceDiscoveryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ServiceDiscoveryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ServiceDiscoveryClient::ServiceDiscoveryClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ServiceDiscoveryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ServiceDiscoveryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ServiceDiscoveryClient::ServiceDiscoveryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ServiceDiscoveryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ServiceDiscoveryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ServiceDiscoveryClient::~ServiceDiscoveryClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ServiceDiscoveryEndpointProviderBase>& ServiceDiscoveryClient::accessEndpointProvider() { return m_endpointProvider; }

void ServiceDiscoveryClient::init(const ServiceDiscovery::ServiceDiscoveryClientConfiguration& config) {
  AWSClient::SetServiceClientName("ServiceDiscovery");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "servicediscovery");
}

void ServiceDiscoveryClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ServiceDiscoveryClient::InvokeOperationOutcome ServiceDiscoveryClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateHttpNamespaceOutcome ServiceDiscoveryClient::CreateHttpNamespace(const CreateHttpNamespaceRequest& request) const {
  return CreateHttpNamespaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePrivateDnsNamespaceOutcome ServiceDiscoveryClient::CreatePrivateDnsNamespace(const CreatePrivateDnsNamespaceRequest& request) const {
  return CreatePrivateDnsNamespaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePublicDnsNamespaceOutcome ServiceDiscoveryClient::CreatePublicDnsNamespace(const CreatePublicDnsNamespaceRequest& request) const {
  return CreatePublicDnsNamespaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateServiceOutcome ServiceDiscoveryClient::CreateService(const CreateServiceRequest& request) const {
  return CreateServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteNamespaceOutcome ServiceDiscoveryClient::DeleteNamespace(const DeleteNamespaceRequest& request) const {
  return DeleteNamespaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteServiceOutcome ServiceDiscoveryClient::DeleteService(const DeleteServiceRequest& request) const {
  return DeleteServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteServiceAttributesOutcome ServiceDiscoveryClient::DeleteServiceAttributes(const DeleteServiceAttributesRequest& request) const {
  return DeleteServiceAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterInstanceOutcome ServiceDiscoveryClient::DeregisterInstance(const DeregisterInstanceRequest& request) const {
  return DeregisterInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DiscoverInstancesOutcome ServiceDiscoveryClient::DiscoverInstances(const DiscoverInstancesRequest& request) const {
  return DiscoverInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DiscoverInstancesRevisionOutcome ServiceDiscoveryClient::DiscoverInstancesRevision(const DiscoverInstancesRevisionRequest& request) const {
  return DiscoverInstancesRevisionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetInstanceOutcome ServiceDiscoveryClient::GetInstance(const GetInstanceRequest& request) const {
  return GetInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetInstancesHealthStatusOutcome ServiceDiscoveryClient::GetInstancesHealthStatus(const GetInstancesHealthStatusRequest& request) const {
  return GetInstancesHealthStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetNamespaceOutcome ServiceDiscoveryClient::GetNamespace(const GetNamespaceRequest& request) const {
  return GetNamespaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOperationOutcome ServiceDiscoveryClient::GetOperation(const GetOperationRequest& request) const {
  return GetOperationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetServiceOutcome ServiceDiscoveryClient::GetService(const GetServiceRequest& request) const {
  return GetServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetServiceAttributesOutcome ServiceDiscoveryClient::GetServiceAttributes(const GetServiceAttributesRequest& request) const {
  return GetServiceAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInstancesOutcome ServiceDiscoveryClient::ListInstances(const ListInstancesRequest& request) const {
  return ListInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNamespacesOutcome ServiceDiscoveryClient::ListNamespaces(const ListNamespacesRequest& request) const {
  return ListNamespacesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOperationsOutcome ServiceDiscoveryClient::ListOperations(const ListOperationsRequest& request) const {
  return ListOperationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListServicesOutcome ServiceDiscoveryClient::ListServices(const ListServicesRequest& request) const {
  return ListServicesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome ServiceDiscoveryClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterInstanceOutcome ServiceDiscoveryClient::RegisterInstance(const RegisterInstanceRequest& request) const {
  return RegisterInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome ServiceDiscoveryClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome ServiceDiscoveryClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateHttpNamespaceOutcome ServiceDiscoveryClient::UpdateHttpNamespace(const UpdateHttpNamespaceRequest& request) const {
  return UpdateHttpNamespaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateInstanceCustomHealthStatusOutcome ServiceDiscoveryClient::UpdateInstanceCustomHealthStatus(
    const UpdateInstanceCustomHealthStatusRequest& request) const {
  return UpdateInstanceCustomHealthStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePrivateDnsNamespaceOutcome ServiceDiscoveryClient::UpdatePrivateDnsNamespace(const UpdatePrivateDnsNamespaceRequest& request) const {
  return UpdatePrivateDnsNamespaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePublicDnsNamespaceOutcome ServiceDiscoveryClient::UpdatePublicDnsNamespace(const UpdatePublicDnsNamespaceRequest& request) const {
  return UpdatePublicDnsNamespaceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateServiceOutcome ServiceDiscoveryClient::UpdateService(const UpdateServiceRequest& request) const {
  return UpdateServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateServiceAttributesOutcome ServiceDiscoveryClient::UpdateServiceAttributes(const UpdateServiceAttributesRequest& request) const {
  return UpdateServiceAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
