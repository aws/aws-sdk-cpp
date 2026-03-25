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
#include <aws/secretsmanager/SecretsManagerClient.h>
#include <aws/secretsmanager/SecretsManagerEndpointProvider.h>
#include <aws/secretsmanager/SecretsManagerErrorMarshaller.h>
#include <aws/secretsmanager/model/BatchGetSecretValueRequest.h>
#include <aws/secretsmanager/model/CancelRotateSecretRequest.h>
#include <aws/secretsmanager/model/CreateSecretRequest.h>
#include <aws/secretsmanager/model/DeleteResourcePolicyRequest.h>
#include <aws/secretsmanager/model/DeleteSecretRequest.h>
#include <aws/secretsmanager/model/DescribeSecretRequest.h>
#include <aws/secretsmanager/model/GetRandomPasswordRequest.h>
#include <aws/secretsmanager/model/GetResourcePolicyRequest.h>
#include <aws/secretsmanager/model/GetSecretValueRequest.h>
#include <aws/secretsmanager/model/ListSecretVersionIdsRequest.h>
#include <aws/secretsmanager/model/ListSecretsRequest.h>
#include <aws/secretsmanager/model/PutResourcePolicyRequest.h>
#include <aws/secretsmanager/model/PutSecretValueRequest.h>
#include <aws/secretsmanager/model/RemoveRegionsFromReplicationRequest.h>
#include <aws/secretsmanager/model/ReplicateSecretToRegionsRequest.h>
#include <aws/secretsmanager/model/RestoreSecretRequest.h>
#include <aws/secretsmanager/model/RotateSecretRequest.h>
#include <aws/secretsmanager/model/StopReplicationToReplicaRequest.h>
#include <aws/secretsmanager/model/TagResourceRequest.h>
#include <aws/secretsmanager/model/UntagResourceRequest.h>
#include <aws/secretsmanager/model/UpdateSecretRequest.h>
#include <aws/secretsmanager/model/UpdateSecretVersionStageRequest.h>
#include <aws/secretsmanager/model/ValidateResourcePolicyRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SecretsManager;
using namespace Aws::SecretsManager::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SecretsManager {
const char SERVICE_NAME[] = "secretsmanager";
const char ALLOCATION_TAG[] = "SecretsManagerClient";
}  // namespace SecretsManager
}  // namespace Aws
const char* SecretsManagerClient::GetServiceName() { return SERVICE_NAME; }
const char* SecretsManagerClient::GetAllocationTag() { return ALLOCATION_TAG; }

SecretsManagerClient::SecretsManagerClient(const SecretsManager::SecretsManagerClientConfiguration& clientConfiguration,
                                           std::shared_ptr<SecretsManagerEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecretsManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SecretsManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SecretsManagerClient::SecretsManagerClient(const AWSCredentials& credentials,
                                           std::shared_ptr<SecretsManagerEndpointProviderBase> endpointProvider,
                                           const SecretsManager::SecretsManagerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecretsManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SecretsManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SecretsManagerClient::SecretsManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<SecretsManagerEndpointProviderBase> endpointProvider,
                                           const SecretsManager::SecretsManagerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecretsManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SecretsManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SecretsManagerClient::SecretsManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecretsManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SecretsManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SecretsManagerClient::SecretsManagerClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecretsManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SecretsManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SecretsManagerClient::SecretsManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SecretsManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SecretsManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SecretsManagerClient::~SecretsManagerClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SecretsManagerEndpointProviderBase>& SecretsManagerClient::accessEndpointProvider() { return m_endpointProvider; }

void SecretsManagerClient::init(const SecretsManager::SecretsManagerClientConfiguration& config) {
  AWSClient::SetServiceClientName("Secrets Manager");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "secretsmanager");
}

void SecretsManagerClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SecretsManagerClient::InvokeOperationOutcome SecretsManagerClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

BatchGetSecretValueOutcome SecretsManagerClient::BatchGetSecretValue(const BatchGetSecretValueRequest& request) const {
  return BatchGetSecretValueOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelRotateSecretOutcome SecretsManagerClient::CancelRotateSecret(const CancelRotateSecretRequest& request) const {
  return CancelRotateSecretOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSecretOutcome SecretsManagerClient::CreateSecret(const CreateSecretRequest& request) const {
  return CreateSecretOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourcePolicyOutcome SecretsManagerClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSecretOutcome SecretsManagerClient::DeleteSecret(const DeleteSecretRequest& request) const {
  return DeleteSecretOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSecretOutcome SecretsManagerClient::DescribeSecret(const DescribeSecretRequest& request) const {
  return DescribeSecretOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRandomPasswordOutcome SecretsManagerClient::GetRandomPassword(const GetRandomPasswordRequest& request) const {
  return GetRandomPasswordOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourcePolicyOutcome SecretsManagerClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  return GetResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSecretValueOutcome SecretsManagerClient::GetSecretValue(const GetSecretValueRequest& request) const {
  return GetSecretValueOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSecretVersionIdsOutcome SecretsManagerClient::ListSecretVersionIds(const ListSecretVersionIdsRequest& request) const {
  return ListSecretVersionIdsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSecretsOutcome SecretsManagerClient::ListSecrets(const ListSecretsRequest& request) const {
  return ListSecretsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourcePolicyOutcome SecretsManagerClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  return PutResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutSecretValueOutcome SecretsManagerClient::PutSecretValue(const PutSecretValueRequest& request) const {
  return PutSecretValueOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveRegionsFromReplicationOutcome SecretsManagerClient::RemoveRegionsFromReplication(
    const RemoveRegionsFromReplicationRequest& request) const {
  return RemoveRegionsFromReplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReplicateSecretToRegionsOutcome SecretsManagerClient::ReplicateSecretToRegions(const ReplicateSecretToRegionsRequest& request) const {
  return ReplicateSecretToRegionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreSecretOutcome SecretsManagerClient::RestoreSecret(const RestoreSecretRequest& request) const {
  return RestoreSecretOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RotateSecretOutcome SecretsManagerClient::RotateSecret(const RotateSecretRequest& request) const {
  return RotateSecretOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopReplicationToReplicaOutcome SecretsManagerClient::StopReplicationToReplica(const StopReplicationToReplicaRequest& request) const {
  return StopReplicationToReplicaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome SecretsManagerClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome SecretsManagerClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSecretOutcome SecretsManagerClient::UpdateSecret(const UpdateSecretRequest& request) const {
  return UpdateSecretOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSecretVersionStageOutcome SecretsManagerClient::UpdateSecretVersionStage(const UpdateSecretVersionStageRequest& request) const {
  return UpdateSecretVersionStageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ValidateResourcePolicyOutcome SecretsManagerClient::ValidateResourcePolicy(const ValidateResourcePolicyRequest& request) const {
  return ValidateResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
