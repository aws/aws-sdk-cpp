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
  return AddRegionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AttachCustomerManagedPolicyReferenceToPermissionSetOutcome SSOAdminClient::AttachCustomerManagedPolicyReferenceToPermissionSet(
    const AttachCustomerManagedPolicyReferenceToPermissionSetRequest& request) const {
  return AttachCustomerManagedPolicyReferenceToPermissionSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AttachManagedPolicyToPermissionSetOutcome SSOAdminClient::AttachManagedPolicyToPermissionSet(
    const AttachManagedPolicyToPermissionSetRequest& request) const {
  return AttachManagedPolicyToPermissionSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAccountAssignmentOutcome SSOAdminClient::CreateAccountAssignment(const CreateAccountAssignmentRequest& request) const {
  return CreateAccountAssignmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApplicationOutcome SSOAdminClient::CreateApplication(const CreateApplicationRequest& request) const {
  return CreateApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateApplicationAssignmentOutcome SSOAdminClient::CreateApplicationAssignment(const CreateApplicationAssignmentRequest& request) const {
  return CreateApplicationAssignmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateInstanceOutcome SSOAdminClient::CreateInstance(const CreateInstanceRequest& request) const {
  return CreateInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateInstanceAccessControlAttributeConfigurationOutcome SSOAdminClient::CreateInstanceAccessControlAttributeConfiguration(
    const CreateInstanceAccessControlAttributeConfigurationRequest& request) const {
  return CreateInstanceAccessControlAttributeConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePermissionSetOutcome SSOAdminClient::CreatePermissionSet(const CreatePermissionSetRequest& request) const {
  return CreatePermissionSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTrustedTokenIssuerOutcome SSOAdminClient::CreateTrustedTokenIssuer(const CreateTrustedTokenIssuerRequest& request) const {
  return CreateTrustedTokenIssuerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAccountAssignmentOutcome SSOAdminClient::DeleteAccountAssignment(const DeleteAccountAssignmentRequest& request) const {
  return DeleteAccountAssignmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationOutcome SSOAdminClient::DeleteApplication(const DeleteApplicationRequest& request) const {
  return DeleteApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationAccessScopeOutcome SSOAdminClient::DeleteApplicationAccessScope(const DeleteApplicationAccessScopeRequest& request) const {
  return DeleteApplicationAccessScopeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationAssignmentOutcome SSOAdminClient::DeleteApplicationAssignment(const DeleteApplicationAssignmentRequest& request) const {
  return DeleteApplicationAssignmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationAuthenticationMethodOutcome SSOAdminClient::DeleteApplicationAuthenticationMethod(
    const DeleteApplicationAuthenticationMethodRequest& request) const {
  return DeleteApplicationAuthenticationMethodOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationGrantOutcome SSOAdminClient::DeleteApplicationGrant(const DeleteApplicationGrantRequest& request) const {
  return DeleteApplicationGrantOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteInlinePolicyFromPermissionSetOutcome SSOAdminClient::DeleteInlinePolicyFromPermissionSet(
    const DeleteInlinePolicyFromPermissionSetRequest& request) const {
  return DeleteInlinePolicyFromPermissionSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteInstanceOutcome SSOAdminClient::DeleteInstance(const DeleteInstanceRequest& request) const {
  return DeleteInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteInstanceAccessControlAttributeConfigurationOutcome SSOAdminClient::DeleteInstanceAccessControlAttributeConfiguration(
    const DeleteInstanceAccessControlAttributeConfigurationRequest& request) const {
  return DeleteInstanceAccessControlAttributeConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePermissionSetOutcome SSOAdminClient::DeletePermissionSet(const DeletePermissionSetRequest& request) const {
  return DeletePermissionSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePermissionsBoundaryFromPermissionSetOutcome SSOAdminClient::DeletePermissionsBoundaryFromPermissionSet(
    const DeletePermissionsBoundaryFromPermissionSetRequest& request) const {
  return DeletePermissionsBoundaryFromPermissionSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTrustedTokenIssuerOutcome SSOAdminClient::DeleteTrustedTokenIssuer(const DeleteTrustedTokenIssuerRequest& request) const {
  return DeleteTrustedTokenIssuerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAccountAssignmentCreationStatusOutcome SSOAdminClient::DescribeAccountAssignmentCreationStatus(
    const DescribeAccountAssignmentCreationStatusRequest& request) const {
  return DescribeAccountAssignmentCreationStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAccountAssignmentDeletionStatusOutcome SSOAdminClient::DescribeAccountAssignmentDeletionStatus(
    const DescribeAccountAssignmentDeletionStatusRequest& request) const {
  return DescribeAccountAssignmentDeletionStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeApplicationOutcome SSOAdminClient::DescribeApplication(const DescribeApplicationRequest& request) const {
  return DescribeApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeApplicationAssignmentOutcome SSOAdminClient::DescribeApplicationAssignment(
    const DescribeApplicationAssignmentRequest& request) const {
  return DescribeApplicationAssignmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeApplicationProviderOutcome SSOAdminClient::DescribeApplicationProvider(const DescribeApplicationProviderRequest& request) const {
  return DescribeApplicationProviderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstanceOutcome SSOAdminClient::DescribeInstance(const DescribeInstanceRequest& request) const {
  return DescribeInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstanceAccessControlAttributeConfigurationOutcome SSOAdminClient::DescribeInstanceAccessControlAttributeConfiguration(
    const DescribeInstanceAccessControlAttributeConfigurationRequest& request) const {
  return DescribeInstanceAccessControlAttributeConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePermissionSetOutcome SSOAdminClient::DescribePermissionSet(const DescribePermissionSetRequest& request) const {
  return DescribePermissionSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePermissionSetProvisioningStatusOutcome SSOAdminClient::DescribePermissionSetProvisioningStatus(
    const DescribePermissionSetProvisioningStatusRequest& request) const {
  return DescribePermissionSetProvisioningStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRegionOutcome SSOAdminClient::DescribeRegion(const DescribeRegionRequest& request) const {
  return DescribeRegionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTrustedTokenIssuerOutcome SSOAdminClient::DescribeTrustedTokenIssuer(const DescribeTrustedTokenIssuerRequest& request) const {
  return DescribeTrustedTokenIssuerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachCustomerManagedPolicyReferenceFromPermissionSetOutcome SSOAdminClient::DetachCustomerManagedPolicyReferenceFromPermissionSet(
    const DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& request) const {
  return DetachCustomerManagedPolicyReferenceFromPermissionSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachManagedPolicyFromPermissionSetOutcome SSOAdminClient::DetachManagedPolicyFromPermissionSet(
    const DetachManagedPolicyFromPermissionSetRequest& request) const {
  return DetachManagedPolicyFromPermissionSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetApplicationAccessScopeOutcome SSOAdminClient::GetApplicationAccessScope(const GetApplicationAccessScopeRequest& request) const {
  return GetApplicationAccessScopeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetApplicationAssignmentConfigurationOutcome SSOAdminClient::GetApplicationAssignmentConfiguration(
    const GetApplicationAssignmentConfigurationRequest& request) const {
  return GetApplicationAssignmentConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetApplicationAuthenticationMethodOutcome SSOAdminClient::GetApplicationAuthenticationMethod(
    const GetApplicationAuthenticationMethodRequest& request) const {
  return GetApplicationAuthenticationMethodOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetApplicationGrantOutcome SSOAdminClient::GetApplicationGrant(const GetApplicationGrantRequest& request) const {
  return GetApplicationGrantOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetApplicationSessionConfigurationOutcome SSOAdminClient::GetApplicationSessionConfiguration(
    const GetApplicationSessionConfigurationRequest& request) const {
  return GetApplicationSessionConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetInlinePolicyForPermissionSetOutcome SSOAdminClient::GetInlinePolicyForPermissionSet(
    const GetInlinePolicyForPermissionSetRequest& request) const {
  return GetInlinePolicyForPermissionSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPermissionsBoundaryForPermissionSetOutcome SSOAdminClient::GetPermissionsBoundaryForPermissionSet(
    const GetPermissionsBoundaryForPermissionSetRequest& request) const {
  return GetPermissionsBoundaryForPermissionSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAccountAssignmentCreationStatusOutcome SSOAdminClient::ListAccountAssignmentCreationStatus(
    const ListAccountAssignmentCreationStatusRequest& request) const {
  return ListAccountAssignmentCreationStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAccountAssignmentDeletionStatusOutcome SSOAdminClient::ListAccountAssignmentDeletionStatus(
    const ListAccountAssignmentDeletionStatusRequest& request) const {
  return ListAccountAssignmentDeletionStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAccountAssignmentsOutcome SSOAdminClient::ListAccountAssignments(const ListAccountAssignmentsRequest& request) const {
  return ListAccountAssignmentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAccountAssignmentsForPrincipalOutcome SSOAdminClient::ListAccountAssignmentsForPrincipal(
    const ListAccountAssignmentsForPrincipalRequest& request) const {
  return ListAccountAssignmentsForPrincipalOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAccountsForProvisionedPermissionSetOutcome SSOAdminClient::ListAccountsForProvisionedPermissionSet(
    const ListAccountsForProvisionedPermissionSetRequest& request) const {
  return ListAccountsForProvisionedPermissionSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApplicationAccessScopesOutcome SSOAdminClient::ListApplicationAccessScopes(const ListApplicationAccessScopesRequest& request) const {
  return ListApplicationAccessScopesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApplicationAssignmentsOutcome SSOAdminClient::ListApplicationAssignments(const ListApplicationAssignmentsRequest& request) const {
  return ListApplicationAssignmentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApplicationAssignmentsForPrincipalOutcome SSOAdminClient::ListApplicationAssignmentsForPrincipal(
    const ListApplicationAssignmentsForPrincipalRequest& request) const {
  return ListApplicationAssignmentsForPrincipalOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApplicationAuthenticationMethodsOutcome SSOAdminClient::ListApplicationAuthenticationMethods(
    const ListApplicationAuthenticationMethodsRequest& request) const {
  return ListApplicationAuthenticationMethodsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApplicationGrantsOutcome SSOAdminClient::ListApplicationGrants(const ListApplicationGrantsRequest& request) const {
  return ListApplicationGrantsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApplicationProvidersOutcome SSOAdminClient::ListApplicationProviders(const ListApplicationProvidersRequest& request) const {
  return ListApplicationProvidersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApplicationsOutcome SSOAdminClient::ListApplications(const ListApplicationsRequest& request) const {
  return ListApplicationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCustomerManagedPolicyReferencesInPermissionSetOutcome SSOAdminClient::ListCustomerManagedPolicyReferencesInPermissionSet(
    const ListCustomerManagedPolicyReferencesInPermissionSetRequest& request) const {
  return ListCustomerManagedPolicyReferencesInPermissionSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInstancesOutcome SSOAdminClient::ListInstances(const ListInstancesRequest& request) const {
  return ListInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListManagedPoliciesInPermissionSetOutcome SSOAdminClient::ListManagedPoliciesInPermissionSet(
    const ListManagedPoliciesInPermissionSetRequest& request) const {
  return ListManagedPoliciesInPermissionSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPermissionSetProvisioningStatusOutcome SSOAdminClient::ListPermissionSetProvisioningStatus(
    const ListPermissionSetProvisioningStatusRequest& request) const {
  return ListPermissionSetProvisioningStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPermissionSetsOutcome SSOAdminClient::ListPermissionSets(const ListPermissionSetsRequest& request) const {
  return ListPermissionSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPermissionSetsProvisionedToAccountOutcome SSOAdminClient::ListPermissionSetsProvisionedToAccount(
    const ListPermissionSetsProvisionedToAccountRequest& request) const {
  return ListPermissionSetsProvisionedToAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRegionsOutcome SSOAdminClient::ListRegions(const ListRegionsRequest& request) const {
  return ListRegionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome SSOAdminClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTrustedTokenIssuersOutcome SSOAdminClient::ListTrustedTokenIssuers(const ListTrustedTokenIssuersRequest& request) const {
  return ListTrustedTokenIssuersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ProvisionPermissionSetOutcome SSOAdminClient::ProvisionPermissionSet(const ProvisionPermissionSetRequest& request) const {
  return ProvisionPermissionSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutApplicationAccessScopeOutcome SSOAdminClient::PutApplicationAccessScope(const PutApplicationAccessScopeRequest& request) const {
  return PutApplicationAccessScopeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutApplicationAssignmentConfigurationOutcome SSOAdminClient::PutApplicationAssignmentConfiguration(
    const PutApplicationAssignmentConfigurationRequest& request) const {
  return PutApplicationAssignmentConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutApplicationAuthenticationMethodOutcome SSOAdminClient::PutApplicationAuthenticationMethod(
    const PutApplicationAuthenticationMethodRequest& request) const {
  return PutApplicationAuthenticationMethodOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutApplicationGrantOutcome SSOAdminClient::PutApplicationGrant(const PutApplicationGrantRequest& request) const {
  return PutApplicationGrantOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutApplicationSessionConfigurationOutcome SSOAdminClient::PutApplicationSessionConfiguration(
    const PutApplicationSessionConfigurationRequest& request) const {
  return PutApplicationSessionConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutInlinePolicyToPermissionSetOutcome SSOAdminClient::PutInlinePolicyToPermissionSet(
    const PutInlinePolicyToPermissionSetRequest& request) const {
  return PutInlinePolicyToPermissionSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutPermissionsBoundaryToPermissionSetOutcome SSOAdminClient::PutPermissionsBoundaryToPermissionSet(
    const PutPermissionsBoundaryToPermissionSetRequest& request) const {
  return PutPermissionsBoundaryToPermissionSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveRegionOutcome SSOAdminClient::RemoveRegion(const RemoveRegionRequest& request) const {
  return RemoveRegionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome SSOAdminClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome SSOAdminClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateApplicationOutcome SSOAdminClient::UpdateApplication(const UpdateApplicationRequest& request) const {
  return UpdateApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateInstanceOutcome SSOAdminClient::UpdateInstance(const UpdateInstanceRequest& request) const {
  return UpdateInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateInstanceAccessControlAttributeConfigurationOutcome SSOAdminClient::UpdateInstanceAccessControlAttributeConfiguration(
    const UpdateInstanceAccessControlAttributeConfigurationRequest& request) const {
  return UpdateInstanceAccessControlAttributeConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePermissionSetOutcome SSOAdminClient::UpdatePermissionSet(const UpdatePermissionSetRequest& request) const {
  return UpdatePermissionSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTrustedTokenIssuerOutcome SSOAdminClient::UpdateTrustedTokenIssuer(const UpdateTrustedTokenIssuerRequest& request) const {
  return UpdateTrustedTokenIssuerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
