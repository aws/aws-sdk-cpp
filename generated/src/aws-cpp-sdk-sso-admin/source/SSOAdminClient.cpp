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
#include <aws/sso-admin/SSOAdminClient.h>
#include <aws/sso-admin/SSOAdminEndpointProvider.h>
#include <aws/sso-admin/SSOAdminErrorMarshaller.h>
#include <aws/sso-admin/model/AddRegionRequest.h>
#include <aws/sso-admin/model/AttachCustomerManagedPolicyReferenceToPermissionSetRequest.h>
#include <aws/sso-admin/model/AttachManagedPolicyToPermissionSetRequest.h>
#include <aws/sso-admin/model/CreateAccountAssignmentRequest.h>
#include <aws/sso-admin/model/CreateApplicationAssignmentRequest.h>
#include <aws/sso-admin/model/CreateApplicationRequest.h>
#include <aws/sso-admin/model/CreateInstanceAccessControlAttributeConfigurationRequest.h>
#include <aws/sso-admin/model/CreateInstanceRequest.h>
#include <aws/sso-admin/model/CreatePermissionSetRequest.h>
#include <aws/sso-admin/model/CreateTrustedTokenIssuerRequest.h>
#include <aws/sso-admin/model/DeleteAccountAssignmentRequest.h>
#include <aws/sso-admin/model/DeleteApplicationAccessScopeRequest.h>
#include <aws/sso-admin/model/DeleteApplicationAssignmentRequest.h>
#include <aws/sso-admin/model/DeleteApplicationAuthenticationMethodRequest.h>
#include <aws/sso-admin/model/DeleteApplicationGrantRequest.h>
#include <aws/sso-admin/model/DeleteApplicationRequest.h>
#include <aws/sso-admin/model/DeleteInlinePolicyFromPermissionSetRequest.h>
#include <aws/sso-admin/model/DeleteInstanceAccessControlAttributeConfigurationRequest.h>
#include <aws/sso-admin/model/DeleteInstanceRequest.h>
#include <aws/sso-admin/model/DeletePermissionSetRequest.h>
#include <aws/sso-admin/model/DeletePermissionsBoundaryFromPermissionSetRequest.h>
#include <aws/sso-admin/model/DeleteTrustedTokenIssuerRequest.h>
#include <aws/sso-admin/model/DescribeAccountAssignmentCreationStatusRequest.h>
#include <aws/sso-admin/model/DescribeAccountAssignmentDeletionStatusRequest.h>
#include <aws/sso-admin/model/DescribeApplicationAssignmentRequest.h>
#include <aws/sso-admin/model/DescribeApplicationProviderRequest.h>
#include <aws/sso-admin/model/DescribeApplicationRequest.h>
#include <aws/sso-admin/model/DescribeInstanceAccessControlAttributeConfigurationRequest.h>
#include <aws/sso-admin/model/DescribeInstanceRequest.h>
#include <aws/sso-admin/model/DescribePermissionSetProvisioningStatusRequest.h>
#include <aws/sso-admin/model/DescribePermissionSetRequest.h>
#include <aws/sso-admin/model/DescribeRegionRequest.h>
#include <aws/sso-admin/model/DescribeTrustedTokenIssuerRequest.h>
#include <aws/sso-admin/model/DetachCustomerManagedPolicyReferenceFromPermissionSetRequest.h>
#include <aws/sso-admin/model/DetachManagedPolicyFromPermissionSetRequest.h>
#include <aws/sso-admin/model/GetApplicationAccessScopeRequest.h>
#include <aws/sso-admin/model/GetApplicationAssignmentConfigurationRequest.h>
#include <aws/sso-admin/model/GetApplicationAuthenticationMethodRequest.h>
#include <aws/sso-admin/model/GetApplicationGrantRequest.h>
#include <aws/sso-admin/model/GetApplicationSessionConfigurationRequest.h>
#include <aws/sso-admin/model/GetInlinePolicyForPermissionSetRequest.h>
#include <aws/sso-admin/model/GetPermissionsBoundaryForPermissionSetRequest.h>
#include <aws/sso-admin/model/ListAccountAssignmentCreationStatusRequest.h>
#include <aws/sso-admin/model/ListAccountAssignmentDeletionStatusRequest.h>
#include <aws/sso-admin/model/ListAccountAssignmentsForPrincipalRequest.h>
#include <aws/sso-admin/model/ListAccountAssignmentsRequest.h>
#include <aws/sso-admin/model/ListAccountsForProvisionedPermissionSetRequest.h>
#include <aws/sso-admin/model/ListApplicationAccessScopesRequest.h>
#include <aws/sso-admin/model/ListApplicationAssignmentsForPrincipalRequest.h>
#include <aws/sso-admin/model/ListApplicationAssignmentsRequest.h>
#include <aws/sso-admin/model/ListApplicationAuthenticationMethodsRequest.h>
#include <aws/sso-admin/model/ListApplicationGrantsRequest.h>
#include <aws/sso-admin/model/ListApplicationProvidersRequest.h>
#include <aws/sso-admin/model/ListApplicationsRequest.h>
#include <aws/sso-admin/model/ListCustomerManagedPolicyReferencesInPermissionSetRequest.h>
#include <aws/sso-admin/model/ListInstancesRequest.h>
#include <aws/sso-admin/model/ListManagedPoliciesInPermissionSetRequest.h>
#include <aws/sso-admin/model/ListPermissionSetProvisioningStatusRequest.h>
#include <aws/sso-admin/model/ListPermissionSetsProvisionedToAccountRequest.h>
#include <aws/sso-admin/model/ListPermissionSetsRequest.h>
#include <aws/sso-admin/model/ListRegionsRequest.h>
#include <aws/sso-admin/model/ListTagsForResourceRequest.h>
#include <aws/sso-admin/model/ListTrustedTokenIssuersRequest.h>
#include <aws/sso-admin/model/ProvisionPermissionSetRequest.h>
#include <aws/sso-admin/model/PutApplicationAccessScopeRequest.h>
#include <aws/sso-admin/model/PutApplicationAssignmentConfigurationRequest.h>
#include <aws/sso-admin/model/PutApplicationAuthenticationMethodRequest.h>
#include <aws/sso-admin/model/PutApplicationGrantRequest.h>
#include <aws/sso-admin/model/PutApplicationSessionConfigurationRequest.h>
#include <aws/sso-admin/model/PutInlinePolicyToPermissionSetRequest.h>
#include <aws/sso-admin/model/PutPermissionsBoundaryToPermissionSetRequest.h>
#include <aws/sso-admin/model/RemoveRegionRequest.h>
#include <aws/sso-admin/model/TagResourceRequest.h>
#include <aws/sso-admin/model/UntagResourceRequest.h>
#include <aws/sso-admin/model/UpdateApplicationRequest.h>
#include <aws/sso-admin/model/UpdateInstanceAccessControlAttributeConfigurationRequest.h>
#include <aws/sso-admin/model/UpdateInstanceRequest.h>
#include <aws/sso-admin/model/UpdatePermissionSetRequest.h>
#include <aws/sso-admin/model/UpdateTrustedTokenIssuerRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SSOAdmin;
using namespace Aws::SSOAdmin::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SSOAdmin {
const char SERVICE_NAME[] = "sso";
const char ALLOCATION_TAG[] = "SSOAdminClient";
}  // namespace SSOAdmin
}  // namespace Aws
const char* SSOAdminClient::GetServiceName() { return SERVICE_NAME; }
const char* SSOAdminClient::GetAllocationTag() { return ALLOCATION_TAG; }

SSOAdminClient::SSOAdminClient(const SSOAdmin::SSOAdminClientConfiguration& clientConfiguration,
                               std::shared_ptr<SSOAdminEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSOAdminErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SSOAdminEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SSOAdminClient::SSOAdminClient(const AWSCredentials& credentials, std::shared_ptr<SSOAdminEndpointProviderBase> endpointProvider,
                               const SSOAdmin::SSOAdminClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSOAdminErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SSOAdminEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SSOAdminClient::SSOAdminClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<SSOAdminEndpointProviderBase> endpointProvider,
                               const SSOAdmin::SSOAdminClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSOAdminErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SSOAdminEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SSOAdminClient::SSOAdminClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSOAdminErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SSOAdminEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SSOAdminClient::SSOAdminClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSOAdminErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SSOAdminEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SSOAdminClient::SSOAdminClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSOAdminErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SSOAdminEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SSOAdminClient::~SSOAdminClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SSOAdminEndpointProviderBase>& SSOAdminClient::accessEndpointProvider() { return m_endpointProvider; }

void SSOAdminClient::init(const SSOAdmin::SSOAdminClientConfiguration& config) {
  AWSClient::SetServiceClientName("SSO Admin");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "sso");
}

void SSOAdminClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SSOAdminClient::InvokeOperationOutcome SSOAdminClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AddRegionOutcome SSOAdminClient::AddRegion(const AddRegionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddRegionOutcome(result.GetResultWithOwnership()) : AddRegionOutcome(std::move(result.GetError()));
}

AttachCustomerManagedPolicyReferenceToPermissionSetOutcome SSOAdminClient::AttachCustomerManagedPolicyReferenceToPermissionSet(
    const AttachCustomerManagedPolicyReferenceToPermissionSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachCustomerManagedPolicyReferenceToPermissionSetOutcome(result.GetResultWithOwnership())
                            : AttachCustomerManagedPolicyReferenceToPermissionSetOutcome(std::move(result.GetError()));
}

AttachManagedPolicyToPermissionSetOutcome SSOAdminClient::AttachManagedPolicyToPermissionSet(
    const AttachManagedPolicyToPermissionSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachManagedPolicyToPermissionSetOutcome(result.GetResultWithOwnership())
                            : AttachManagedPolicyToPermissionSetOutcome(std::move(result.GetError()));
}

CreateAccountAssignmentOutcome SSOAdminClient::CreateAccountAssignment(const CreateAccountAssignmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAccountAssignmentOutcome(result.GetResultWithOwnership())
                            : CreateAccountAssignmentOutcome(std::move(result.GetError()));
}

CreateApplicationOutcome SSOAdminClient::CreateApplication(const CreateApplicationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateApplicationOutcome(result.GetResultWithOwnership())
                            : CreateApplicationOutcome(std::move(result.GetError()));
}

CreateApplicationAssignmentOutcome SSOAdminClient::CreateApplicationAssignment(const CreateApplicationAssignmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateApplicationAssignmentOutcome(result.GetResultWithOwnership())
                            : CreateApplicationAssignmentOutcome(std::move(result.GetError()));
}

CreateInstanceOutcome SSOAdminClient::CreateInstance(const CreateInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInstanceOutcome(result.GetResultWithOwnership()) : CreateInstanceOutcome(std::move(result.GetError()));
}

CreateInstanceAccessControlAttributeConfigurationOutcome SSOAdminClient::CreateInstanceAccessControlAttributeConfiguration(
    const CreateInstanceAccessControlAttributeConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInstanceAccessControlAttributeConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateInstanceAccessControlAttributeConfigurationOutcome(std::move(result.GetError()));
}

CreatePermissionSetOutcome SSOAdminClient::CreatePermissionSet(const CreatePermissionSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePermissionSetOutcome(result.GetResultWithOwnership())
                            : CreatePermissionSetOutcome(std::move(result.GetError()));
}

CreateTrustedTokenIssuerOutcome SSOAdminClient::CreateTrustedTokenIssuer(const CreateTrustedTokenIssuerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTrustedTokenIssuerOutcome(result.GetResultWithOwnership())
                            : CreateTrustedTokenIssuerOutcome(std::move(result.GetError()));
}

DeleteAccountAssignmentOutcome SSOAdminClient::DeleteAccountAssignment(const DeleteAccountAssignmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAccountAssignmentOutcome(result.GetResultWithOwnership())
                            : DeleteAccountAssignmentOutcome(std::move(result.GetError()));
}

DeleteApplicationOutcome SSOAdminClient::DeleteApplication(const DeleteApplicationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteApplicationOutcome(result.GetResultWithOwnership())
                            : DeleteApplicationOutcome(std::move(result.GetError()));
}

DeleteApplicationAccessScopeOutcome SSOAdminClient::DeleteApplicationAccessScope(const DeleteApplicationAccessScopeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteApplicationAccessScopeOutcome(result.GetResultWithOwnership())
                            : DeleteApplicationAccessScopeOutcome(std::move(result.GetError()));
}

DeleteApplicationAssignmentOutcome SSOAdminClient::DeleteApplicationAssignment(const DeleteApplicationAssignmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteApplicationAssignmentOutcome(result.GetResultWithOwnership())
                            : DeleteApplicationAssignmentOutcome(std::move(result.GetError()));
}

DeleteApplicationAuthenticationMethodOutcome SSOAdminClient::DeleteApplicationAuthenticationMethod(
    const DeleteApplicationAuthenticationMethodRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteApplicationAuthenticationMethodOutcome(result.GetResultWithOwnership())
                            : DeleteApplicationAuthenticationMethodOutcome(std::move(result.GetError()));
}

DeleteApplicationGrantOutcome SSOAdminClient::DeleteApplicationGrant(const DeleteApplicationGrantRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteApplicationGrantOutcome(result.GetResultWithOwnership())
                            : DeleteApplicationGrantOutcome(std::move(result.GetError()));
}

DeleteInlinePolicyFromPermissionSetOutcome SSOAdminClient::DeleteInlinePolicyFromPermissionSet(
    const DeleteInlinePolicyFromPermissionSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteInlinePolicyFromPermissionSetOutcome(result.GetResultWithOwnership())
                            : DeleteInlinePolicyFromPermissionSetOutcome(std::move(result.GetError()));
}

DeleteInstanceOutcome SSOAdminClient::DeleteInstance(const DeleteInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteInstanceOutcome(result.GetResultWithOwnership()) : DeleteInstanceOutcome(std::move(result.GetError()));
}

DeleteInstanceAccessControlAttributeConfigurationOutcome SSOAdminClient::DeleteInstanceAccessControlAttributeConfiguration(
    const DeleteInstanceAccessControlAttributeConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteInstanceAccessControlAttributeConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteInstanceAccessControlAttributeConfigurationOutcome(std::move(result.GetError()));
}

DeletePermissionSetOutcome SSOAdminClient::DeletePermissionSet(const DeletePermissionSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePermissionSetOutcome(result.GetResultWithOwnership())
                            : DeletePermissionSetOutcome(std::move(result.GetError()));
}

DeletePermissionsBoundaryFromPermissionSetOutcome SSOAdminClient::DeletePermissionsBoundaryFromPermissionSet(
    const DeletePermissionsBoundaryFromPermissionSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePermissionsBoundaryFromPermissionSetOutcome(result.GetResultWithOwnership())
                            : DeletePermissionsBoundaryFromPermissionSetOutcome(std::move(result.GetError()));
}

DeleteTrustedTokenIssuerOutcome SSOAdminClient::DeleteTrustedTokenIssuer(const DeleteTrustedTokenIssuerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTrustedTokenIssuerOutcome(result.GetResultWithOwnership())
                            : DeleteTrustedTokenIssuerOutcome(std::move(result.GetError()));
}

DescribeAccountAssignmentCreationStatusOutcome SSOAdminClient::DescribeAccountAssignmentCreationStatus(
    const DescribeAccountAssignmentCreationStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAccountAssignmentCreationStatusOutcome(result.GetResultWithOwnership())
                            : DescribeAccountAssignmentCreationStatusOutcome(std::move(result.GetError()));
}

DescribeAccountAssignmentDeletionStatusOutcome SSOAdminClient::DescribeAccountAssignmentDeletionStatus(
    const DescribeAccountAssignmentDeletionStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAccountAssignmentDeletionStatusOutcome(result.GetResultWithOwnership())
                            : DescribeAccountAssignmentDeletionStatusOutcome(std::move(result.GetError()));
}

DescribeApplicationOutcome SSOAdminClient::DescribeApplication(const DescribeApplicationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeApplicationOutcome(result.GetResultWithOwnership())
                            : DescribeApplicationOutcome(std::move(result.GetError()));
}

DescribeApplicationAssignmentOutcome SSOAdminClient::DescribeApplicationAssignment(
    const DescribeApplicationAssignmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeApplicationAssignmentOutcome(result.GetResultWithOwnership())
                            : DescribeApplicationAssignmentOutcome(std::move(result.GetError()));
}

DescribeApplicationProviderOutcome SSOAdminClient::DescribeApplicationProvider(const DescribeApplicationProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeApplicationProviderOutcome(result.GetResultWithOwnership())
                            : DescribeApplicationProviderOutcome(std::move(result.GetError()));
}

DescribeInstanceOutcome SSOAdminClient::DescribeInstance(const DescribeInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstanceOutcome(result.GetResultWithOwnership())
                            : DescribeInstanceOutcome(std::move(result.GetError()));
}

DescribeInstanceAccessControlAttributeConfigurationOutcome SSOAdminClient::DescribeInstanceAccessControlAttributeConfiguration(
    const DescribeInstanceAccessControlAttributeConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstanceAccessControlAttributeConfigurationOutcome(result.GetResultWithOwnership())
                            : DescribeInstanceAccessControlAttributeConfigurationOutcome(std::move(result.GetError()));
}

DescribePermissionSetOutcome SSOAdminClient::DescribePermissionSet(const DescribePermissionSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePermissionSetOutcome(result.GetResultWithOwnership())
                            : DescribePermissionSetOutcome(std::move(result.GetError()));
}

DescribePermissionSetProvisioningStatusOutcome SSOAdminClient::DescribePermissionSetProvisioningStatus(
    const DescribePermissionSetProvisioningStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePermissionSetProvisioningStatusOutcome(result.GetResultWithOwnership())
                            : DescribePermissionSetProvisioningStatusOutcome(std::move(result.GetError()));
}

DescribeRegionOutcome SSOAdminClient::DescribeRegion(const DescribeRegionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRegionOutcome(result.GetResultWithOwnership()) : DescribeRegionOutcome(std::move(result.GetError()));
}

DescribeTrustedTokenIssuerOutcome SSOAdminClient::DescribeTrustedTokenIssuer(const DescribeTrustedTokenIssuerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTrustedTokenIssuerOutcome(result.GetResultWithOwnership())
                            : DescribeTrustedTokenIssuerOutcome(std::move(result.GetError()));
}

DetachCustomerManagedPolicyReferenceFromPermissionSetOutcome SSOAdminClient::DetachCustomerManagedPolicyReferenceFromPermissionSet(
    const DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachCustomerManagedPolicyReferenceFromPermissionSetOutcome(result.GetResultWithOwnership())
                            : DetachCustomerManagedPolicyReferenceFromPermissionSetOutcome(std::move(result.GetError()));
}

DetachManagedPolicyFromPermissionSetOutcome SSOAdminClient::DetachManagedPolicyFromPermissionSet(
    const DetachManagedPolicyFromPermissionSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachManagedPolicyFromPermissionSetOutcome(result.GetResultWithOwnership())
                            : DetachManagedPolicyFromPermissionSetOutcome(std::move(result.GetError()));
}

GetApplicationAccessScopeOutcome SSOAdminClient::GetApplicationAccessScope(const GetApplicationAccessScopeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetApplicationAccessScopeOutcome(result.GetResultWithOwnership())
                            : GetApplicationAccessScopeOutcome(std::move(result.GetError()));
}

GetApplicationAssignmentConfigurationOutcome SSOAdminClient::GetApplicationAssignmentConfiguration(
    const GetApplicationAssignmentConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetApplicationAssignmentConfigurationOutcome(result.GetResultWithOwnership())
                            : GetApplicationAssignmentConfigurationOutcome(std::move(result.GetError()));
}

GetApplicationAuthenticationMethodOutcome SSOAdminClient::GetApplicationAuthenticationMethod(
    const GetApplicationAuthenticationMethodRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetApplicationAuthenticationMethodOutcome(result.GetResultWithOwnership())
                            : GetApplicationAuthenticationMethodOutcome(std::move(result.GetError()));
}

GetApplicationGrantOutcome SSOAdminClient::GetApplicationGrant(const GetApplicationGrantRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetApplicationGrantOutcome(result.GetResultWithOwnership())
                            : GetApplicationGrantOutcome(std::move(result.GetError()));
}

GetApplicationSessionConfigurationOutcome SSOAdminClient::GetApplicationSessionConfiguration(
    const GetApplicationSessionConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetApplicationSessionConfigurationOutcome(result.GetResultWithOwnership())
                            : GetApplicationSessionConfigurationOutcome(std::move(result.GetError()));
}

GetInlinePolicyForPermissionSetOutcome SSOAdminClient::GetInlinePolicyForPermissionSet(
    const GetInlinePolicyForPermissionSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInlinePolicyForPermissionSetOutcome(result.GetResultWithOwnership())
                            : GetInlinePolicyForPermissionSetOutcome(std::move(result.GetError()));
}

GetPermissionsBoundaryForPermissionSetOutcome SSOAdminClient::GetPermissionsBoundaryForPermissionSet(
    const GetPermissionsBoundaryForPermissionSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPermissionsBoundaryForPermissionSetOutcome(result.GetResultWithOwnership())
                            : GetPermissionsBoundaryForPermissionSetOutcome(std::move(result.GetError()));
}

ListAccountAssignmentCreationStatusOutcome SSOAdminClient::ListAccountAssignmentCreationStatus(
    const ListAccountAssignmentCreationStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAccountAssignmentCreationStatusOutcome(result.GetResultWithOwnership())
                            : ListAccountAssignmentCreationStatusOutcome(std::move(result.GetError()));
}

ListAccountAssignmentDeletionStatusOutcome SSOAdminClient::ListAccountAssignmentDeletionStatus(
    const ListAccountAssignmentDeletionStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAccountAssignmentDeletionStatusOutcome(result.GetResultWithOwnership())
                            : ListAccountAssignmentDeletionStatusOutcome(std::move(result.GetError()));
}

ListAccountAssignmentsOutcome SSOAdminClient::ListAccountAssignments(const ListAccountAssignmentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAccountAssignmentsOutcome(result.GetResultWithOwnership())
                            : ListAccountAssignmentsOutcome(std::move(result.GetError()));
}

ListAccountAssignmentsForPrincipalOutcome SSOAdminClient::ListAccountAssignmentsForPrincipal(
    const ListAccountAssignmentsForPrincipalRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAccountAssignmentsForPrincipalOutcome(result.GetResultWithOwnership())
                            : ListAccountAssignmentsForPrincipalOutcome(std::move(result.GetError()));
}

ListAccountsForProvisionedPermissionSetOutcome SSOAdminClient::ListAccountsForProvisionedPermissionSet(
    const ListAccountsForProvisionedPermissionSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAccountsForProvisionedPermissionSetOutcome(result.GetResultWithOwnership())
                            : ListAccountsForProvisionedPermissionSetOutcome(std::move(result.GetError()));
}

ListApplicationAccessScopesOutcome SSOAdminClient::ListApplicationAccessScopes(const ListApplicationAccessScopesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListApplicationAccessScopesOutcome(result.GetResultWithOwnership())
                            : ListApplicationAccessScopesOutcome(std::move(result.GetError()));
}

ListApplicationAssignmentsOutcome SSOAdminClient::ListApplicationAssignments(const ListApplicationAssignmentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListApplicationAssignmentsOutcome(result.GetResultWithOwnership())
                            : ListApplicationAssignmentsOutcome(std::move(result.GetError()));
}

ListApplicationAssignmentsForPrincipalOutcome SSOAdminClient::ListApplicationAssignmentsForPrincipal(
    const ListApplicationAssignmentsForPrincipalRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListApplicationAssignmentsForPrincipalOutcome(result.GetResultWithOwnership())
                            : ListApplicationAssignmentsForPrincipalOutcome(std::move(result.GetError()));
}

ListApplicationAuthenticationMethodsOutcome SSOAdminClient::ListApplicationAuthenticationMethods(
    const ListApplicationAuthenticationMethodsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListApplicationAuthenticationMethodsOutcome(result.GetResultWithOwnership())
                            : ListApplicationAuthenticationMethodsOutcome(std::move(result.GetError()));
}

ListApplicationGrantsOutcome SSOAdminClient::ListApplicationGrants(const ListApplicationGrantsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListApplicationGrantsOutcome(result.GetResultWithOwnership())
                            : ListApplicationGrantsOutcome(std::move(result.GetError()));
}

ListApplicationProvidersOutcome SSOAdminClient::ListApplicationProviders(const ListApplicationProvidersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListApplicationProvidersOutcome(result.GetResultWithOwnership())
                            : ListApplicationProvidersOutcome(std::move(result.GetError()));
}

ListApplicationsOutcome SSOAdminClient::ListApplications(const ListApplicationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListApplicationsOutcome(result.GetResultWithOwnership())
                            : ListApplicationsOutcome(std::move(result.GetError()));
}

ListCustomerManagedPolicyReferencesInPermissionSetOutcome SSOAdminClient::ListCustomerManagedPolicyReferencesInPermissionSet(
    const ListCustomerManagedPolicyReferencesInPermissionSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCustomerManagedPolicyReferencesInPermissionSetOutcome(result.GetResultWithOwnership())
                            : ListCustomerManagedPolicyReferencesInPermissionSetOutcome(std::move(result.GetError()));
}

ListInstancesOutcome SSOAdminClient::ListInstances(const ListInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListInstancesOutcome(result.GetResultWithOwnership()) : ListInstancesOutcome(std::move(result.GetError()));
}

ListManagedPoliciesInPermissionSetOutcome SSOAdminClient::ListManagedPoliciesInPermissionSet(
    const ListManagedPoliciesInPermissionSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListManagedPoliciesInPermissionSetOutcome(result.GetResultWithOwnership())
                            : ListManagedPoliciesInPermissionSetOutcome(std::move(result.GetError()));
}

ListPermissionSetProvisioningStatusOutcome SSOAdminClient::ListPermissionSetProvisioningStatus(
    const ListPermissionSetProvisioningStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPermissionSetProvisioningStatusOutcome(result.GetResultWithOwnership())
                            : ListPermissionSetProvisioningStatusOutcome(std::move(result.GetError()));
}

ListPermissionSetsOutcome SSOAdminClient::ListPermissionSets(const ListPermissionSetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPermissionSetsOutcome(result.GetResultWithOwnership())
                            : ListPermissionSetsOutcome(std::move(result.GetError()));
}

ListPermissionSetsProvisionedToAccountOutcome SSOAdminClient::ListPermissionSetsProvisionedToAccount(
    const ListPermissionSetsProvisionedToAccountRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPermissionSetsProvisionedToAccountOutcome(result.GetResultWithOwnership())
                            : ListPermissionSetsProvisionedToAccountOutcome(std::move(result.GetError()));
}

ListRegionsOutcome SSOAdminClient::ListRegions(const ListRegionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRegionsOutcome(result.GetResultWithOwnership()) : ListRegionsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome SSOAdminClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListTrustedTokenIssuersOutcome SSOAdminClient::ListTrustedTokenIssuers(const ListTrustedTokenIssuersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTrustedTokenIssuersOutcome(result.GetResultWithOwnership())
                            : ListTrustedTokenIssuersOutcome(std::move(result.GetError()));
}

ProvisionPermissionSetOutcome SSOAdminClient::ProvisionPermissionSet(const ProvisionPermissionSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ProvisionPermissionSetOutcome(result.GetResultWithOwnership())
                            : ProvisionPermissionSetOutcome(std::move(result.GetError()));
}

PutApplicationAccessScopeOutcome SSOAdminClient::PutApplicationAccessScope(const PutApplicationAccessScopeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutApplicationAccessScopeOutcome(result.GetResultWithOwnership())
                            : PutApplicationAccessScopeOutcome(std::move(result.GetError()));
}

PutApplicationAssignmentConfigurationOutcome SSOAdminClient::PutApplicationAssignmentConfiguration(
    const PutApplicationAssignmentConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutApplicationAssignmentConfigurationOutcome(result.GetResultWithOwnership())
                            : PutApplicationAssignmentConfigurationOutcome(std::move(result.GetError()));
}

PutApplicationAuthenticationMethodOutcome SSOAdminClient::PutApplicationAuthenticationMethod(
    const PutApplicationAuthenticationMethodRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutApplicationAuthenticationMethodOutcome(result.GetResultWithOwnership())
                            : PutApplicationAuthenticationMethodOutcome(std::move(result.GetError()));
}

PutApplicationGrantOutcome SSOAdminClient::PutApplicationGrant(const PutApplicationGrantRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutApplicationGrantOutcome(result.GetResultWithOwnership())
                            : PutApplicationGrantOutcome(std::move(result.GetError()));
}

PutApplicationSessionConfigurationOutcome SSOAdminClient::PutApplicationSessionConfiguration(
    const PutApplicationSessionConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutApplicationSessionConfigurationOutcome(result.GetResultWithOwnership())
                            : PutApplicationSessionConfigurationOutcome(std::move(result.GetError()));
}

PutInlinePolicyToPermissionSetOutcome SSOAdminClient::PutInlinePolicyToPermissionSet(
    const PutInlinePolicyToPermissionSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutInlinePolicyToPermissionSetOutcome(result.GetResultWithOwnership())
                            : PutInlinePolicyToPermissionSetOutcome(std::move(result.GetError()));
}

PutPermissionsBoundaryToPermissionSetOutcome SSOAdminClient::PutPermissionsBoundaryToPermissionSet(
    const PutPermissionsBoundaryToPermissionSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutPermissionsBoundaryToPermissionSetOutcome(result.GetResultWithOwnership())
                            : PutPermissionsBoundaryToPermissionSetOutcome(std::move(result.GetError()));
}

RemoveRegionOutcome SSOAdminClient::RemoveRegion(const RemoveRegionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveRegionOutcome(result.GetResultWithOwnership()) : RemoveRegionOutcome(std::move(result.GetError()));
}

TagResourceOutcome SSOAdminClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome SSOAdminClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateApplicationOutcome SSOAdminClient::UpdateApplication(const UpdateApplicationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateApplicationOutcome(result.GetResultWithOwnership())
                            : UpdateApplicationOutcome(std::move(result.GetError()));
}

UpdateInstanceOutcome SSOAdminClient::UpdateInstance(const UpdateInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateInstanceOutcome(result.GetResultWithOwnership()) : UpdateInstanceOutcome(std::move(result.GetError()));
}

UpdateInstanceAccessControlAttributeConfigurationOutcome SSOAdminClient::UpdateInstanceAccessControlAttributeConfiguration(
    const UpdateInstanceAccessControlAttributeConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateInstanceAccessControlAttributeConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateInstanceAccessControlAttributeConfigurationOutcome(std::move(result.GetError()));
}

UpdatePermissionSetOutcome SSOAdminClient::UpdatePermissionSet(const UpdatePermissionSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePermissionSetOutcome(result.GetResultWithOwnership())
                            : UpdatePermissionSetOutcome(std::move(result.GetError()));
}

UpdateTrustedTokenIssuerOutcome SSOAdminClient::UpdateTrustedTokenIssuer(const UpdateTrustedTokenIssuerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTrustedTokenIssuerOutcome(result.GetResultWithOwnership())
                            : UpdateTrustedTokenIssuerOutcome(std::move(result.GetError()));
}
