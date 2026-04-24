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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetCollectionOutcome(result.GetResultWithOwnership())
                            : BatchGetCollectionOutcome(std::move(result.GetError()));
}

BatchGetCollectionGroupOutcome OpenSearchServerlessClient::BatchGetCollectionGroup(const BatchGetCollectionGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetCollectionGroupOutcome(result.GetResultWithOwnership())
                            : BatchGetCollectionGroupOutcome(std::move(result.GetError()));
}

BatchGetEffectiveLifecyclePolicyOutcome OpenSearchServerlessClient::BatchGetEffectiveLifecyclePolicy(
    const BatchGetEffectiveLifecyclePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetEffectiveLifecyclePolicyOutcome(result.GetResultWithOwnership())
                            : BatchGetEffectiveLifecyclePolicyOutcome(std::move(result.GetError()));
}

BatchGetLifecyclePolicyOutcome OpenSearchServerlessClient::BatchGetLifecyclePolicy(const BatchGetLifecyclePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetLifecyclePolicyOutcome(result.GetResultWithOwnership())
                            : BatchGetLifecyclePolicyOutcome(std::move(result.GetError()));
}

BatchGetVpcEndpointOutcome OpenSearchServerlessClient::BatchGetVpcEndpoint(const BatchGetVpcEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetVpcEndpointOutcome(result.GetResultWithOwnership())
                            : BatchGetVpcEndpointOutcome(std::move(result.GetError()));
}

CreateAccessPolicyOutcome OpenSearchServerlessClient::CreateAccessPolicy(const CreateAccessPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAccessPolicyOutcome(result.GetResultWithOwnership())
                            : CreateAccessPolicyOutcome(std::move(result.GetError()));
}

CreateCollectionOutcome OpenSearchServerlessClient::CreateCollection(const CreateCollectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCollectionOutcome(result.GetResultWithOwnership())
                            : CreateCollectionOutcome(std::move(result.GetError()));
}

CreateCollectionGroupOutcome OpenSearchServerlessClient::CreateCollectionGroup(const CreateCollectionGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCollectionGroupOutcome(result.GetResultWithOwnership())
                            : CreateCollectionGroupOutcome(std::move(result.GetError()));
}

CreateIndexOutcome OpenSearchServerlessClient::CreateIndex(const CreateIndexRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIndexOutcome(result.GetResultWithOwnership()) : CreateIndexOutcome(std::move(result.GetError()));
}

CreateLifecyclePolicyOutcome OpenSearchServerlessClient::CreateLifecyclePolicy(const CreateLifecyclePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLifecyclePolicyOutcome(result.GetResultWithOwnership())
                            : CreateLifecyclePolicyOutcome(std::move(result.GetError()));
}

CreateSecurityConfigOutcome OpenSearchServerlessClient::CreateSecurityConfig(const CreateSecurityConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSecurityConfigOutcome(result.GetResultWithOwnership())
                            : CreateSecurityConfigOutcome(std::move(result.GetError()));
}

CreateSecurityPolicyOutcome OpenSearchServerlessClient::CreateSecurityPolicy(const CreateSecurityPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSecurityPolicyOutcome(result.GetResultWithOwnership())
                            : CreateSecurityPolicyOutcome(std::move(result.GetError()));
}

CreateVpcEndpointOutcome OpenSearchServerlessClient::CreateVpcEndpoint(const CreateVpcEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVpcEndpointOutcome(result.GetResultWithOwnership())
                            : CreateVpcEndpointOutcome(std::move(result.GetError()));
}

DeleteAccessPolicyOutcome OpenSearchServerlessClient::DeleteAccessPolicy(const DeleteAccessPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAccessPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteAccessPolicyOutcome(std::move(result.GetError()));
}

DeleteCollectionOutcome OpenSearchServerlessClient::DeleteCollection(const DeleteCollectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCollectionOutcome(result.GetResultWithOwnership())
                            : DeleteCollectionOutcome(std::move(result.GetError()));
}

DeleteCollectionGroupOutcome OpenSearchServerlessClient::DeleteCollectionGroup(const DeleteCollectionGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCollectionGroupOutcome(result.GetResultWithOwnership())
                            : DeleteCollectionGroupOutcome(std::move(result.GetError()));
}

DeleteIndexOutcome OpenSearchServerlessClient::DeleteIndex(const DeleteIndexRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIndexOutcome(result.GetResultWithOwnership()) : DeleteIndexOutcome(std::move(result.GetError()));
}

DeleteLifecyclePolicyOutcome OpenSearchServerlessClient::DeleteLifecyclePolicy(const DeleteLifecyclePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLifecyclePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteLifecyclePolicyOutcome(std::move(result.GetError()));
}

DeleteSecurityConfigOutcome OpenSearchServerlessClient::DeleteSecurityConfig(const DeleteSecurityConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSecurityConfigOutcome(result.GetResultWithOwnership())
                            : DeleteSecurityConfigOutcome(std::move(result.GetError()));
}

DeleteSecurityPolicyOutcome OpenSearchServerlessClient::DeleteSecurityPolicy(const DeleteSecurityPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSecurityPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteSecurityPolicyOutcome(std::move(result.GetError()));
}

DeleteVpcEndpointOutcome OpenSearchServerlessClient::DeleteVpcEndpoint(const DeleteVpcEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVpcEndpointOutcome(result.GetResultWithOwnership())
                            : DeleteVpcEndpointOutcome(std::move(result.GetError()));
}

GetAccessPolicyOutcome OpenSearchServerlessClient::GetAccessPolicy(const GetAccessPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAccessPolicyOutcome(result.GetResultWithOwnership())
                            : GetAccessPolicyOutcome(std::move(result.GetError()));
}

GetAccountSettingsOutcome OpenSearchServerlessClient::GetAccountSettings(const GetAccountSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAccountSettingsOutcome(result.GetResultWithOwnership())
                            : GetAccountSettingsOutcome(std::move(result.GetError()));
}

GetIndexOutcome OpenSearchServerlessClient::GetIndex(const GetIndexRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIndexOutcome(result.GetResultWithOwnership()) : GetIndexOutcome(std::move(result.GetError()));
}

GetPoliciesStatsOutcome OpenSearchServerlessClient::GetPoliciesStats(const GetPoliciesStatsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPoliciesStatsOutcome(result.GetResultWithOwnership())
                            : GetPoliciesStatsOutcome(std::move(result.GetError()));
}

GetSecurityConfigOutcome OpenSearchServerlessClient::GetSecurityConfig(const GetSecurityConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSecurityConfigOutcome(result.GetResultWithOwnership())
                            : GetSecurityConfigOutcome(std::move(result.GetError()));
}

GetSecurityPolicyOutcome OpenSearchServerlessClient::GetSecurityPolicy(const GetSecurityPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSecurityPolicyOutcome(result.GetResultWithOwnership())
                            : GetSecurityPolicyOutcome(std::move(result.GetError()));
}

ListAccessPoliciesOutcome OpenSearchServerlessClient::ListAccessPolicies(const ListAccessPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAccessPoliciesOutcome(result.GetResultWithOwnership())
                            : ListAccessPoliciesOutcome(std::move(result.GetError()));
}

ListCollectionGroupsOutcome OpenSearchServerlessClient::ListCollectionGroups(const ListCollectionGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCollectionGroupsOutcome(result.GetResultWithOwnership())
                            : ListCollectionGroupsOutcome(std::move(result.GetError()));
}

ListCollectionsOutcome OpenSearchServerlessClient::ListCollections(const ListCollectionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCollectionsOutcome(result.GetResultWithOwnership())
                            : ListCollectionsOutcome(std::move(result.GetError()));
}

ListLifecyclePoliciesOutcome OpenSearchServerlessClient::ListLifecyclePolicies(const ListLifecyclePoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListLifecyclePoliciesOutcome(result.GetResultWithOwnership())
                            : ListLifecyclePoliciesOutcome(std::move(result.GetError()));
}

ListSecurityConfigsOutcome OpenSearchServerlessClient::ListSecurityConfigs(const ListSecurityConfigsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSecurityConfigsOutcome(result.GetResultWithOwnership())
                            : ListSecurityConfigsOutcome(std::move(result.GetError()));
}

ListSecurityPoliciesOutcome OpenSearchServerlessClient::ListSecurityPolicies(const ListSecurityPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSecurityPoliciesOutcome(result.GetResultWithOwnership())
                            : ListSecurityPoliciesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome OpenSearchServerlessClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListVpcEndpointsOutcome OpenSearchServerlessClient::ListVpcEndpoints(const ListVpcEndpointsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListVpcEndpointsOutcome(result.GetResultWithOwnership())
                            : ListVpcEndpointsOutcome(std::move(result.GetError()));
}

TagResourceOutcome OpenSearchServerlessClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome OpenSearchServerlessClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAccessPolicyOutcome OpenSearchServerlessClient::UpdateAccessPolicy(const UpdateAccessPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAccessPolicyOutcome(result.GetResultWithOwnership())
                            : UpdateAccessPolicyOutcome(std::move(result.GetError()));
}

UpdateAccountSettingsOutcome OpenSearchServerlessClient::UpdateAccountSettings(const UpdateAccountSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAccountSettingsOutcome(result.GetResultWithOwnership())
                            : UpdateAccountSettingsOutcome(std::move(result.GetError()));
}

UpdateCollectionOutcome OpenSearchServerlessClient::UpdateCollection(const UpdateCollectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCollectionOutcome(result.GetResultWithOwnership())
                            : UpdateCollectionOutcome(std::move(result.GetError()));
}

UpdateCollectionGroupOutcome OpenSearchServerlessClient::UpdateCollectionGroup(const UpdateCollectionGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCollectionGroupOutcome(result.GetResultWithOwnership())
                            : UpdateCollectionGroupOutcome(std::move(result.GetError()));
}

UpdateIndexOutcome OpenSearchServerlessClient::UpdateIndex(const UpdateIndexRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateIndexOutcome(result.GetResultWithOwnership()) : UpdateIndexOutcome(std::move(result.GetError()));
}

UpdateLifecyclePolicyOutcome OpenSearchServerlessClient::UpdateLifecyclePolicy(const UpdateLifecyclePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateLifecyclePolicyOutcome(result.GetResultWithOwnership())
                            : UpdateLifecyclePolicyOutcome(std::move(result.GetError()));
}

UpdateSecurityConfigOutcome OpenSearchServerlessClient::UpdateSecurityConfig(const UpdateSecurityConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSecurityConfigOutcome(result.GetResultWithOwnership())
                            : UpdateSecurityConfigOutcome(std::move(result.GetError()));
}

UpdateSecurityPolicyOutcome OpenSearchServerlessClient::UpdateSecurityPolicy(const UpdateSecurityPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSecurityPolicyOutcome(result.GetResultWithOwnership())
                            : UpdateSecurityPolicyOutcome(std::move(result.GetError()));
}

UpdateVpcEndpointOutcome OpenSearchServerlessClient::UpdateVpcEndpoint(const UpdateVpcEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateVpcEndpointOutcome(result.GetResultWithOwnership())
                            : UpdateVpcEndpointOutcome(std::move(result.GetError()));
}
