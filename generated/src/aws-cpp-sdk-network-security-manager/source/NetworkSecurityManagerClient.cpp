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
#include <aws/network-security-manager/NetworkSecurityManagerClient.h>
#include <aws/network-security-manager/NetworkSecurityManagerEndpointProvider.h>
#include <aws/network-security-manager/NetworkSecurityManagerErrorMarshaller.h>
#include <aws/network-security-manager/model/CreateDeploymentRequest.h>
#include <aws/network-security-manager/model/CreateDeploymentSnapshotRequest.h>
#include <aws/network-security-manager/model/CreatePolicyRequest.h>
#include <aws/network-security-manager/model/CreatePolicySnapshotRequest.h>
#include <aws/network-security-manager/model/CreateRuleRequest.h>
#include <aws/network-security-manager/model/CreateRuleSnapshotRequest.h>
#include <aws/network-security-manager/model/CreateScopeRequest.h>
#include <aws/network-security-manager/model/CreateScopeSnapshotRequest.h>
#include <aws/network-security-manager/model/CreateTemplateRequest.h>
#include <aws/network-security-manager/model/CreateTemplateSnapshotRequest.h>
#include <aws/network-security-manager/model/DeleteAdminAccountRequest.h>
#include <aws/network-security-manager/model/DeleteDeploymentRequest.h>
#include <aws/network-security-manager/model/DeletePolicyRequest.h>
#include <aws/network-security-manager/model/DeleteRuleRequest.h>
#include <aws/network-security-manager/model/DeleteScopeRequest.h>
#include <aws/network-security-manager/model/DeleteTemplateRequest.h>
#include <aws/network-security-manager/model/GenerateRuleConfigurationRequest.h>
#include <aws/network-security-manager/model/GetAdminAccountRequest.h>
#include <aws/network-security-manager/model/GetDeploymentRequest.h>
#include <aws/network-security-manager/model/GetPolicyRequest.h>
#include <aws/network-security-manager/model/GetRuleRequest.h>
#include <aws/network-security-manager/model/GetScopeRequest.h>
#include <aws/network-security-manager/model/GetTemplateRequest.h>
#include <aws/network-security-manager/model/ListAdminAccountsRequest.h>
#include <aws/network-security-manager/model/ListAggregateResourceSynchronizationStatusesRequest.h>
#include <aws/network-security-manager/model/ListDeploymentSnapshotsRequest.h>
#include <aws/network-security-manager/model/ListDeploymentsRequest.h>
#include <aws/network-security-manager/model/ListPoliciesRequest.h>
#include <aws/network-security-manager/model/ListPolicySnapshotsRequest.h>
#include <aws/network-security-manager/model/ListResourceAssociationsRequest.h>
#include <aws/network-security-manager/model/ListResourceSynchronizationStatusesRequest.h>
#include <aws/network-security-manager/model/ListRuleSnapshotsRequest.h>
#include <aws/network-security-manager/model/ListRulesRequest.h>
#include <aws/network-security-manager/model/ListScopeSnapshotsRequest.h>
#include <aws/network-security-manager/model/ListScopesRequest.h>
#include <aws/network-security-manager/model/ListTagsForResourceRequest.h>
#include <aws/network-security-manager/model/ListTemplateSnapshotsRequest.h>
#include <aws/network-security-manager/model/ListTemplatesRequest.h>
#include <aws/network-security-manager/model/PutAdminAccountRequest.h>
#include <aws/network-security-manager/model/TagResourceRequest.h>
#include <aws/network-security-manager/model/UntagResourceRequest.h>
#include <aws/network-security-manager/model/UpdateDeploymentRequest.h>
#include <aws/network-security-manager/model/UpdatePolicyRequest.h>
#include <aws/network-security-manager/model/UpdateRuleRequest.h>
#include <aws/network-security-manager/model/UpdateScopeRequest.h>
#include <aws/network-security-manager/model/UpdateTemplateRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::NetworkSecurityManager;
using namespace Aws::NetworkSecurityManager::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace NetworkSecurityManager {
const char SERVICE_NAME[] = "network-security-manager";
const char ALLOCATION_TAG[] = "NetworkSecurityManagerClient";
}  // namespace NetworkSecurityManager
}  // namespace Aws
const char* NetworkSecurityManagerClient::GetServiceName() { return SERVICE_NAME; }
const char* NetworkSecurityManagerClient::GetAllocationTag() { return ALLOCATION_TAG; }

NetworkSecurityManagerClient::NetworkSecurityManagerClient(
    const NetworkSecurityManager::NetworkSecurityManagerClientConfiguration& clientConfiguration,
    std::shared_ptr<NetworkSecurityManagerEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkSecurityManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<NetworkSecurityManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NetworkSecurityManagerClient::NetworkSecurityManagerClient(
    const AWSCredentials& credentials, std::shared_ptr<NetworkSecurityManagerEndpointProviderBase> endpointProvider,
    const NetworkSecurityManager::NetworkSecurityManagerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkSecurityManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<NetworkSecurityManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NetworkSecurityManagerClient::NetworkSecurityManagerClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<NetworkSecurityManagerEndpointProviderBase> endpointProvider,
    const NetworkSecurityManager::NetworkSecurityManagerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkSecurityManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<NetworkSecurityManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
NetworkSecurityManagerClient::NetworkSecurityManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkSecurityManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NetworkSecurityManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NetworkSecurityManagerClient::NetworkSecurityManagerClient(const AWSCredentials& credentials,
                                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkSecurityManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NetworkSecurityManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NetworkSecurityManagerClient::NetworkSecurityManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkSecurityManagerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NetworkSecurityManagerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
NetworkSecurityManagerClient::~NetworkSecurityManagerClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<NetworkSecurityManagerEndpointProviderBase>& NetworkSecurityManagerClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void NetworkSecurityManagerClient::init(const NetworkSecurityManager::NetworkSecurityManagerClientConfiguration& config) {
  AWSClient::SetServiceClientName("Network Security Manager");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "network-security-manager");
}

void NetworkSecurityManagerClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
NetworkSecurityManagerClient::InvokeOperationOutcome NetworkSecurityManagerClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
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

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateDeploymentOutcome NetworkSecurityManagerClient::CreateDeployment(const CreateDeploymentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDeploymentOutcome(result.GetResultWithOwnership())
                            : CreateDeploymentOutcome(std::move(result.GetError()));
}

CreateDeploymentSnapshotOutcome NetworkSecurityManagerClient::CreateDeploymentSnapshot(
    const CreateDeploymentSnapshotRequest& request) const {
  if (!request.DeploymentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDeploymentSnapshot", "Required field: DeploymentIdentifier, is not set");
    return CreateDeploymentSnapshotOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDeploymentSnapshotOutcome(result.GetResultWithOwnership())
                            : CreateDeploymentSnapshotOutcome(std::move(result.GetError()));
}

CreatePolicyOutcome NetworkSecurityManagerClient::CreatePolicy(const CreatePolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePolicyOutcome(result.GetResultWithOwnership()) : CreatePolicyOutcome(std::move(result.GetError()));
}

CreatePolicySnapshotOutcome NetworkSecurityManagerClient::CreatePolicySnapshot(const CreatePolicySnapshotRequest& request) const {
  if (!request.PolicyIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePolicySnapshot", "Required field: PolicyIdentifier, is not set");
    return CreatePolicySnapshotOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePolicySnapshotOutcome(result.GetResultWithOwnership())
                            : CreatePolicySnapshotOutcome(std::move(result.GetError()));
}

CreateRuleOutcome NetworkSecurityManagerClient::CreateRule(const CreateRuleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRuleOutcome(result.GetResultWithOwnership()) : CreateRuleOutcome(std::move(result.GetError()));
}

CreateRuleSnapshotOutcome NetworkSecurityManagerClient::CreateRuleSnapshot(const CreateRuleSnapshotRequest& request) const {
  if (!request.RuleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRuleSnapshot", "Required field: RuleIdentifier, is not set");
    return CreateRuleSnapshotOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRuleSnapshotOutcome(result.GetResultWithOwnership())
                            : CreateRuleSnapshotOutcome(std::move(result.GetError()));
}

CreateScopeOutcome NetworkSecurityManagerClient::CreateScope(const CreateScopeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scopes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateScopeOutcome(result.GetResultWithOwnership()) : CreateScopeOutcome(std::move(result.GetError()));
}

CreateScopeSnapshotOutcome NetworkSecurityManagerClient::CreateScopeSnapshot(const CreateScopeSnapshotRequest& request) const {
  if (!request.ScopeIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateScopeSnapshot", "Required field: ScopeIdentifier, is not set");
    return CreateScopeSnapshotOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scopes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateScopeSnapshotOutcome(result.GetResultWithOwnership())
                            : CreateScopeSnapshotOutcome(std::move(result.GetError()));
}

CreateTemplateOutcome NetworkSecurityManagerClient::CreateTemplate(const CreateTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTemplateOutcome(result.GetResultWithOwnership()) : CreateTemplateOutcome(std::move(result.GetError()));
}

CreateTemplateSnapshotOutcome NetworkSecurityManagerClient::CreateTemplateSnapshot(const CreateTemplateSnapshotRequest& request) const {
  if (!request.TemplateIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTemplateSnapshot", "Required field: TemplateIdentifier, is not set");
    return CreateTemplateSnapshotOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTemplateSnapshotOutcome(result.GetResultWithOwnership())
                            : CreateTemplateSnapshotOutcome(std::move(result.GetError()));
}

DeleteAdminAccountOutcome NetworkSecurityManagerClient::DeleteAdminAccount(const DeleteAdminAccountRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAdminAccount", "Required field: AccountId, is not set");
    return DeleteAdminAccountOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/admin-account/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAdminAccountOutcome(result.GetResultWithOwnership())
                            : DeleteAdminAccountOutcome(std::move(result.GetError()));
}

DeleteDeploymentOutcome NetworkSecurityManagerClient::DeleteDeployment(const DeleteDeploymentRequest& request) const {
  if (!request.DeploymentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDeployment", "Required field: DeploymentIdentifier, is not set");
    return DeleteDeploymentOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDeploymentOutcome(result.GetResultWithOwnership())
                            : DeleteDeploymentOutcome(std::move(result.GetError()));
}

DeletePolicyOutcome NetworkSecurityManagerClient::DeletePolicy(const DeletePolicyRequest& request) const {
  if (!request.PolicyIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePolicy", "Required field: PolicyIdentifier, is not set");
    return DeletePolicyOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePolicyOutcome(result.GetResultWithOwnership()) : DeletePolicyOutcome(std::move(result.GetError()));
}

DeleteRuleOutcome NetworkSecurityManagerClient::DeleteRule(const DeleteRuleRequest& request) const {
  if (!request.RuleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRule", "Required field: RuleIdentifier, is not set");
    return DeleteRuleOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRuleOutcome(result.GetResultWithOwnership()) : DeleteRuleOutcome(std::move(result.GetError()));
}

DeleteScopeOutcome NetworkSecurityManagerClient::DeleteScope(const DeleteScopeRequest& request) const {
  if (!request.ScopeIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteScope", "Required field: ScopeIdentifier, is not set");
    return DeleteScopeOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scopes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteScopeOutcome(result.GetResultWithOwnership()) : DeleteScopeOutcome(std::move(result.GetError()));
}

DeleteTemplateOutcome NetworkSecurityManagerClient::DeleteTemplate(const DeleteTemplateRequest& request) const {
  if (!request.TemplateIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTemplate", "Required field: TemplateIdentifier, is not set");
    return DeleteTemplateOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTemplateOutcome(result.GetResultWithOwnership()) : DeleteTemplateOutcome(std::move(result.GetError()));
}

GenerateRuleConfigurationOutcome NetworkSecurityManagerClient::GenerateRuleConfiguration(
    const GenerateRuleConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GenerateRuleConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GenerateRuleConfigurationOutcome(result.GetResultWithOwnership())
                            : GenerateRuleConfigurationOutcome(std::move(result.GetError()));
}

GetAdminAccountOutcome NetworkSecurityManagerClient::GetAdminAccount(const GetAdminAccountRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAdminAccount", "Required field: AccountId, is not set");
    return GetAdminAccountOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/admin-account/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAdminAccountOutcome(result.GetResultWithOwnership())
                            : GetAdminAccountOutcome(std::move(result.GetError()));
}

GetDeploymentOutcome NetworkSecurityManagerClient::GetDeployment(const GetDeploymentRequest& request) const {
  if (!request.DeploymentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: DeploymentIdentifier, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDeploymentOutcome(result.GetResultWithOwnership()) : GetDeploymentOutcome(std::move(result.GetError()));
}

GetPolicyOutcome NetworkSecurityManagerClient::GetPolicy(const GetPolicyRequest& request) const {
  if (!request.PolicyIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPolicy", "Required field: PolicyIdentifier, is not set");
    return GetPolicyOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPolicyOutcome(result.GetResultWithOwnership()) : GetPolicyOutcome(std::move(result.GetError()));
}

GetRuleOutcome NetworkSecurityManagerClient::GetRule(const GetRuleRequest& request) const {
  if (!request.RuleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRule", "Required field: RuleIdentifier, is not set");
    return GetRuleOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRuleOutcome(result.GetResultWithOwnership()) : GetRuleOutcome(std::move(result.GetError()));
}

GetScopeOutcome NetworkSecurityManagerClient::GetScope(const GetScopeRequest& request) const {
  if (!request.ScopeIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetScope", "Required field: ScopeIdentifier, is not set");
    return GetScopeOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scopes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetScopeOutcome(result.GetResultWithOwnership()) : GetScopeOutcome(std::move(result.GetError()));
}

GetTemplateOutcome NetworkSecurityManagerClient::GetTemplate(const GetTemplateRequest& request) const {
  if (!request.TemplateIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTemplate", "Required field: TemplateIdentifier, is not set");
    return GetTemplateOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTemplateOutcome(result.GetResultWithOwnership()) : GetTemplateOutcome(std::move(result.GetError()));
}

ListAdminAccountsOutcome NetworkSecurityManagerClient::ListAdminAccounts(const ListAdminAccountsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/admin-accounts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAdminAccountsOutcome(result.GetResultWithOwnership())
                            : ListAdminAccountsOutcome(std::move(result.GetError()));
}

ListAggregateResourceSynchronizationStatusesOutcome NetworkSecurityManagerClient::ListAggregateResourceSynchronizationStatuses(
    const ListAggregateResourceSynchronizationStatusesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/aggregate-sync-statuses");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAggregateResourceSynchronizationStatusesOutcome(result.GetResultWithOwnership())
                            : ListAggregateResourceSynchronizationStatusesOutcome(std::move(result.GetError()));
}

ListDeploymentSnapshotsOutcome NetworkSecurityManagerClient::ListDeploymentSnapshots(const ListDeploymentSnapshotsRequest& request) const {
  if (!request.DeploymentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDeploymentSnapshots", "Required field: DeploymentIdentifier, is not set");
    return ListDeploymentSnapshotsOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDeploymentSnapshotsOutcome(result.GetResultWithOwnership())
                            : ListDeploymentSnapshotsOutcome(std::move(result.GetError()));
}

ListDeploymentsOutcome NetworkSecurityManagerClient::ListDeployments(const ListDeploymentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDeploymentsOutcome(result.GetResultWithOwnership())
                            : ListDeploymentsOutcome(std::move(result.GetError()));
}

ListPoliciesOutcome NetworkSecurityManagerClient::ListPolicies(const ListPoliciesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPoliciesOutcome(result.GetResultWithOwnership()) : ListPoliciesOutcome(std::move(result.GetError()));
}

ListPolicySnapshotsOutcome NetworkSecurityManagerClient::ListPolicySnapshots(const ListPolicySnapshotsRequest& request) const {
  if (!request.PolicyIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPolicySnapshots", "Required field: PolicyIdentifier, is not set");
    return ListPolicySnapshotsOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPolicySnapshotsOutcome(result.GetResultWithOwnership())
                            : ListPolicySnapshotsOutcome(std::move(result.GetError()));
}

ListResourceAssociationsOutcome NetworkSecurityManagerClient::ListResourceAssociations(
    const ListResourceAssociationsRequest& request) const {
  if (!request.ResourceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListResourceAssociations", "Required field: ResourceIdentifier, is not set");
    return ListResourceAssociationsOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource-associations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListResourceAssociationsOutcome(result.GetResultWithOwnership())
                            : ListResourceAssociationsOutcome(std::move(result.GetError()));
}

ListResourceSynchronizationStatusesOutcome NetworkSecurityManagerClient::ListResourceSynchronizationStatuses(
    const ListResourceSynchronizationStatusesRequest& request) const {
  if (!request.DeploymentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListResourceSynchronizationStatuses", "Required field: DeploymentIdentifier, is not set");
    return ListResourceSynchronizationStatusesOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource-sync-statuses");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListResourceSynchronizationStatusesOutcome(result.GetResultWithOwnership())
                            : ListResourceSynchronizationStatusesOutcome(std::move(result.GetError()));
}

ListRuleSnapshotsOutcome NetworkSecurityManagerClient::ListRuleSnapshots(const ListRuleSnapshotsRequest& request) const {
  if (!request.RuleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRuleSnapshots", "Required field: RuleIdentifier, is not set");
    return ListRuleSnapshotsOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRuleSnapshotsOutcome(result.GetResultWithOwnership())
                            : ListRuleSnapshotsOutcome(std::move(result.GetError()));
}

ListRulesOutcome NetworkSecurityManagerClient::ListRules(const ListRulesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRulesOutcome(result.GetResultWithOwnership()) : ListRulesOutcome(std::move(result.GetError()));
}

ListScopeSnapshotsOutcome NetworkSecurityManagerClient::ListScopeSnapshots(const ListScopeSnapshotsRequest& request) const {
  if (!request.ScopeIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListScopeSnapshots", "Required field: ScopeIdentifier, is not set");
    return ListScopeSnapshotsOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scopes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListScopeSnapshotsOutcome(result.GetResultWithOwnership())
                            : ListScopeSnapshotsOutcome(std::move(result.GetError()));
}

ListScopesOutcome NetworkSecurityManagerClient::ListScopes(const ListScopesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scopes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListScopesOutcome(result.GetResultWithOwnership()) : ListScopesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome NetworkSecurityManagerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListTemplateSnapshotsOutcome NetworkSecurityManagerClient::ListTemplateSnapshots(const ListTemplateSnapshotsRequest& request) const {
  if (!request.TemplateIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTemplateSnapshots", "Required field: TemplateIdentifier, is not set");
    return ListTemplateSnapshotsOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTemplateSnapshotsOutcome(result.GetResultWithOwnership())
                            : ListTemplateSnapshotsOutcome(std::move(result.GetError()));
}

ListTemplatesOutcome NetworkSecurityManagerClient::ListTemplates(const ListTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTemplatesOutcome(result.GetResultWithOwnership()) : ListTemplatesOutcome(std::move(result.GetError()));
}

PutAdminAccountOutcome NetworkSecurityManagerClient::PutAdminAccount(const PutAdminAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/admin-account");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutAdminAccountOutcome(result.GetResultWithOwnership())
                            : PutAdminAccountOutcome(std::move(result.GetError()));
}

TagResourceOutcome NetworkSecurityManagerClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome NetworkSecurityManagerClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateDeploymentOutcome NetworkSecurityManagerClient::UpdateDeployment(const UpdateDeploymentRequest& request) const {
  if (!request.DeploymentIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDeployment", "Required field: DeploymentIdentifier, is not set");
    return UpdateDeploymentOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeploymentIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateDeploymentOutcome(result.GetResultWithOwnership())
                            : UpdateDeploymentOutcome(std::move(result.GetError()));
}

UpdatePolicyOutcome NetworkSecurityManagerClient::UpdatePolicy(const UpdatePolicyRequest& request) const {
  if (!request.PolicyIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePolicy", "Required field: PolicyIdentifier, is not set");
    return UpdatePolicyOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdatePolicyOutcome(result.GetResultWithOwnership()) : UpdatePolicyOutcome(std::move(result.GetError()));
}

UpdateRuleOutcome NetworkSecurityManagerClient::UpdateRule(const UpdateRuleRequest& request) const {
  if (!request.RuleIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRule", "Required field: RuleIdentifier, is not set");
    return UpdateRuleOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateRuleOutcome(result.GetResultWithOwnership()) : UpdateRuleOutcome(std::move(result.GetError()));
}

UpdateScopeOutcome NetworkSecurityManagerClient::UpdateScope(const UpdateScopeRequest& request) const {
  if (!request.ScopeIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateScope", "Required field: ScopeIdentifier, is not set");
    return UpdateScopeOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scopes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateScopeOutcome(result.GetResultWithOwnership()) : UpdateScopeOutcome(std::move(result.GetError()));
}

UpdateTemplateOutcome NetworkSecurityManagerClient::UpdateTemplate(const UpdateTemplateRequest& request) const {
  if (!request.TemplateIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTemplate", "Required field: TemplateIdentifier, is not set");
    return UpdateTemplateOutcome(Aws::Client::AWSError<NetworkSecurityManagerErrors>(
        NetworkSecurityManagerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateTemplateOutcome(result.GetResultWithOwnership()) : UpdateTemplateOutcome(std::move(result.GetError()));
}
