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
#include <aws/opensearchserverless/OpenSearchServerlessClient.h>
#include <aws/opensearchserverless/OpenSearchServerlessEndpointProvider.h>
#include <aws/opensearchserverless/OpenSearchServerlessErrorMarshaller.h>
#include <aws/opensearchserverless/model/BatchGetCollectionGroupRequest.h>
#include <aws/opensearchserverless/model/BatchGetCollectionRequest.h>
#include <aws/opensearchserverless/model/BatchGetEffectiveLifecyclePolicyRequest.h>
#include <aws/opensearchserverless/model/BatchGetLifecyclePolicyRequest.h>
#include <aws/opensearchserverless/model/BatchGetVpcEndpointRequest.h>
#include <aws/opensearchserverless/model/CreateAccessPolicyRequest.h>
#include <aws/opensearchserverless/model/CreateCollectionGroupRequest.h>
#include <aws/opensearchserverless/model/CreateCollectionRequest.h>
#include <aws/opensearchserverless/model/CreateIndexRequest.h>
#include <aws/opensearchserverless/model/CreateLifecyclePolicyRequest.h>
#include <aws/opensearchserverless/model/CreateSecurityConfigRequest.h>
#include <aws/opensearchserverless/model/CreateSecurityPolicyRequest.h>
#include <aws/opensearchserverless/model/CreateVpcEndpointRequest.h>
#include <aws/opensearchserverless/model/DeleteAccessPolicyRequest.h>
#include <aws/opensearchserverless/model/DeleteCollectionGroupRequest.h>
#include <aws/opensearchserverless/model/DeleteCollectionRequest.h>
#include <aws/opensearchserverless/model/DeleteIndexRequest.h>
#include <aws/opensearchserverless/model/DeleteLifecyclePolicyRequest.h>
#include <aws/opensearchserverless/model/DeleteSecurityConfigRequest.h>
#include <aws/opensearchserverless/model/DeleteSecurityPolicyRequest.h>
#include <aws/opensearchserverless/model/DeleteVpcEndpointRequest.h>
#include <aws/opensearchserverless/model/GetAccessPolicyRequest.h>
#include <aws/opensearchserverless/model/GetAccountSettingsRequest.h>
#include <aws/opensearchserverless/model/GetIndexRequest.h>
#include <aws/opensearchserverless/model/GetPoliciesStatsRequest.h>
#include <aws/opensearchserverless/model/GetSecurityConfigRequest.h>
#include <aws/opensearchserverless/model/GetSecurityPolicyRequest.h>
#include <aws/opensearchserverless/model/ListAccessPoliciesRequest.h>
#include <aws/opensearchserverless/model/ListCollectionGroupsRequest.h>
#include <aws/opensearchserverless/model/ListCollectionsRequest.h>
#include <aws/opensearchserverless/model/ListLifecyclePoliciesRequest.h>
#include <aws/opensearchserverless/model/ListSecurityConfigsRequest.h>
#include <aws/opensearchserverless/model/ListSecurityPoliciesRequest.h>
#include <aws/opensearchserverless/model/ListTagsForResourceRequest.h>
#include <aws/opensearchserverless/model/ListVpcEndpointsRequest.h>
#include <aws/opensearchserverless/model/TagResourceRequest.h>
#include <aws/opensearchserverless/model/UntagResourceRequest.h>
#include <aws/opensearchserverless/model/UpdateAccessPolicyRequest.h>
#include <aws/opensearchserverless/model/UpdateAccountSettingsRequest.h>
#include <aws/opensearchserverless/model/UpdateCollectionGroupRequest.h>
#include <aws/opensearchserverless/model/UpdateCollectionRequest.h>
#include <aws/opensearchserverless/model/UpdateIndexRequest.h>
#include <aws/opensearchserverless/model/UpdateLifecyclePolicyRequest.h>
#include <aws/opensearchserverless/model/UpdateSecurityConfigRequest.h>
#include <aws/opensearchserverless/model/UpdateSecurityPolicyRequest.h>
#include <aws/opensearchserverless/model/UpdateVpcEndpointRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::OpenSearchServerless;
using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace OpenSearchServerless {
const char SERVICE_NAME[] = "aoss";
const char ALLOCATION_TAG[] = "OpenSearchServerlessClient";
}  // namespace OpenSearchServerless
}  // namespace Aws
const char* OpenSearchServerlessClient::GetServiceName() { return SERVICE_NAME; }
const char* OpenSearchServerlessClient::GetAllocationTag() { return ALLOCATION_TAG; }

OpenSearchServerlessClient::OpenSearchServerlessClient(
    const OpenSearchServerless::OpenSearchServerlessClientConfiguration& clientConfiguration,
    std::shared_ptr<OpenSearchServerlessEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OpenSearchServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<OpenSearchServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OpenSearchServerlessClient::OpenSearchServerlessClient(
    const AWSCredentials& credentials, std::shared_ptr<OpenSearchServerlessEndpointProviderBase> endpointProvider,
    const OpenSearchServerless::OpenSearchServerlessClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OpenSearchServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<OpenSearchServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OpenSearchServerlessClient::OpenSearchServerlessClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<OpenSearchServerlessEndpointProviderBase> endpointProvider,
    const OpenSearchServerless::OpenSearchServerlessClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OpenSearchServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<OpenSearchServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
OpenSearchServerlessClient::OpenSearchServerlessClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OpenSearchServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OpenSearchServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OpenSearchServerlessClient::OpenSearchServerlessClient(const AWSCredentials& credentials,
                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OpenSearchServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OpenSearchServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OpenSearchServerlessClient::OpenSearchServerlessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OpenSearchServerlessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OpenSearchServerlessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
OpenSearchServerlessClient::~OpenSearchServerlessClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<OpenSearchServerlessEndpointProviderBase>& OpenSearchServerlessClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void OpenSearchServerlessClient::init(const OpenSearchServerless::OpenSearchServerlessClientConfiguration& config) {
  AWSClient::SetServiceClientName("OpenSearchServerless");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "aoss");
}

void OpenSearchServerlessClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
OpenSearchServerlessClient::InvokeOperationOutcome OpenSearchServerlessClient::InvokeServiceOperation(
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

BatchGetCollectionOutcome OpenSearchServerlessClient::BatchGetCollection(const BatchGetCollectionRequest& request) const {
  return BatchGetCollectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetCollectionGroupOutcome OpenSearchServerlessClient::BatchGetCollectionGroup(const BatchGetCollectionGroupRequest& request) const {
  return BatchGetCollectionGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetEffectiveLifecyclePolicyOutcome OpenSearchServerlessClient::BatchGetEffectiveLifecyclePolicy(
    const BatchGetEffectiveLifecyclePolicyRequest& request) const {
  return BatchGetEffectiveLifecyclePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetLifecyclePolicyOutcome OpenSearchServerlessClient::BatchGetLifecyclePolicy(const BatchGetLifecyclePolicyRequest& request) const {
  return BatchGetLifecyclePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetVpcEndpointOutcome OpenSearchServerlessClient::BatchGetVpcEndpoint(const BatchGetVpcEndpointRequest& request) const {
  return BatchGetVpcEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAccessPolicyOutcome OpenSearchServerlessClient::CreateAccessPolicy(const CreateAccessPolicyRequest& request) const {
  return CreateAccessPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCollectionOutcome OpenSearchServerlessClient::CreateCollection(const CreateCollectionRequest& request) const {
  return CreateCollectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCollectionGroupOutcome OpenSearchServerlessClient::CreateCollectionGroup(const CreateCollectionGroupRequest& request) const {
  return CreateCollectionGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIndexOutcome OpenSearchServerlessClient::CreateIndex(const CreateIndexRequest& request) const {
  return CreateIndexOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLifecyclePolicyOutcome OpenSearchServerlessClient::CreateLifecyclePolicy(const CreateLifecyclePolicyRequest& request) const {
  return CreateLifecyclePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSecurityConfigOutcome OpenSearchServerlessClient::CreateSecurityConfig(const CreateSecurityConfigRequest& request) const {
  return CreateSecurityConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSecurityPolicyOutcome OpenSearchServerlessClient::CreateSecurityPolicy(const CreateSecurityPolicyRequest& request) const {
  return CreateSecurityPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVpcEndpointOutcome OpenSearchServerlessClient::CreateVpcEndpoint(const CreateVpcEndpointRequest& request) const {
  return CreateVpcEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAccessPolicyOutcome OpenSearchServerlessClient::DeleteAccessPolicy(const DeleteAccessPolicyRequest& request) const {
  return DeleteAccessPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCollectionOutcome OpenSearchServerlessClient::DeleteCollection(const DeleteCollectionRequest& request) const {
  return DeleteCollectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCollectionGroupOutcome OpenSearchServerlessClient::DeleteCollectionGroup(const DeleteCollectionGroupRequest& request) const {
  return DeleteCollectionGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIndexOutcome OpenSearchServerlessClient::DeleteIndex(const DeleteIndexRequest& request) const {
  return DeleteIndexOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLifecyclePolicyOutcome OpenSearchServerlessClient::DeleteLifecyclePolicy(const DeleteLifecyclePolicyRequest& request) const {
  return DeleteLifecyclePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSecurityConfigOutcome OpenSearchServerlessClient::DeleteSecurityConfig(const DeleteSecurityConfigRequest& request) const {
  return DeleteSecurityConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSecurityPolicyOutcome OpenSearchServerlessClient::DeleteSecurityPolicy(const DeleteSecurityPolicyRequest& request) const {
  return DeleteSecurityPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteVpcEndpointOutcome OpenSearchServerlessClient::DeleteVpcEndpoint(const DeleteVpcEndpointRequest& request) const {
  return DeleteVpcEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAccessPolicyOutcome OpenSearchServerlessClient::GetAccessPolicy(const GetAccessPolicyRequest& request) const {
  return GetAccessPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAccountSettingsOutcome OpenSearchServerlessClient::GetAccountSettings(const GetAccountSettingsRequest& request) const {
  return GetAccountSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIndexOutcome OpenSearchServerlessClient::GetIndex(const GetIndexRequest& request) const {
  return GetIndexOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPoliciesStatsOutcome OpenSearchServerlessClient::GetPoliciesStats(const GetPoliciesStatsRequest& request) const {
  return GetPoliciesStatsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSecurityConfigOutcome OpenSearchServerlessClient::GetSecurityConfig(const GetSecurityConfigRequest& request) const {
  return GetSecurityConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSecurityPolicyOutcome OpenSearchServerlessClient::GetSecurityPolicy(const GetSecurityPolicyRequest& request) const {
  return GetSecurityPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAccessPoliciesOutcome OpenSearchServerlessClient::ListAccessPolicies(const ListAccessPoliciesRequest& request) const {
  return ListAccessPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCollectionGroupsOutcome OpenSearchServerlessClient::ListCollectionGroups(const ListCollectionGroupsRequest& request) const {
  return ListCollectionGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCollectionsOutcome OpenSearchServerlessClient::ListCollections(const ListCollectionsRequest& request) const {
  return ListCollectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLifecyclePoliciesOutcome OpenSearchServerlessClient::ListLifecyclePolicies(const ListLifecyclePoliciesRequest& request) const {
  return ListLifecyclePoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSecurityConfigsOutcome OpenSearchServerlessClient::ListSecurityConfigs(const ListSecurityConfigsRequest& request) const {
  return ListSecurityConfigsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSecurityPoliciesOutcome OpenSearchServerlessClient::ListSecurityPolicies(const ListSecurityPoliciesRequest& request) const {
  return ListSecurityPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome OpenSearchServerlessClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListVpcEndpointsOutcome OpenSearchServerlessClient::ListVpcEndpoints(const ListVpcEndpointsRequest& request) const {
  return ListVpcEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome OpenSearchServerlessClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome OpenSearchServerlessClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAccessPolicyOutcome OpenSearchServerlessClient::UpdateAccessPolicy(const UpdateAccessPolicyRequest& request) const {
  return UpdateAccessPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAccountSettingsOutcome OpenSearchServerlessClient::UpdateAccountSettings(const UpdateAccountSettingsRequest& request) const {
  return UpdateAccountSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCollectionOutcome OpenSearchServerlessClient::UpdateCollection(const UpdateCollectionRequest& request) const {
  return UpdateCollectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCollectionGroupOutcome OpenSearchServerlessClient::UpdateCollectionGroup(const UpdateCollectionGroupRequest& request) const {
  return UpdateCollectionGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateIndexOutcome OpenSearchServerlessClient::UpdateIndex(const UpdateIndexRequest& request) const {
  return UpdateIndexOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLifecyclePolicyOutcome OpenSearchServerlessClient::UpdateLifecyclePolicy(const UpdateLifecyclePolicyRequest& request) const {
  return UpdateLifecyclePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSecurityConfigOutcome OpenSearchServerlessClient::UpdateSecurityConfig(const UpdateSecurityConfigRequest& request) const {
  return UpdateSecurityConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSecurityPolicyOutcome OpenSearchServerlessClient::UpdateSecurityPolicy(const UpdateSecurityPolicyRequest& request) const {
  return UpdateSecurityPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateVpcEndpointOutcome OpenSearchServerlessClient::UpdateVpcEndpoint(const UpdateVpcEndpointRequest& request) const {
  return UpdateVpcEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
