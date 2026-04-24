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
#include <aws/workmail/WorkMailClient.h>
#include <aws/workmail/WorkMailEndpointProvider.h>
#include <aws/workmail/WorkMailErrorMarshaller.h>
#include <aws/workmail/model/AssociateDelegateToResourceRequest.h>
#include <aws/workmail/model/AssociateMemberToGroupRequest.h>
#include <aws/workmail/model/AssumeImpersonationRoleRequest.h>
#include <aws/workmail/model/CancelMailboxExportJobRequest.h>
#include <aws/workmail/model/CreateAliasRequest.h>
#include <aws/workmail/model/CreateAvailabilityConfigurationRequest.h>
#include <aws/workmail/model/CreateGroupRequest.h>
#include <aws/workmail/model/CreateIdentityCenterApplicationRequest.h>
#include <aws/workmail/model/CreateImpersonationRoleRequest.h>
#include <aws/workmail/model/CreateMobileDeviceAccessRuleRequest.h>
#include <aws/workmail/model/CreateOrganizationRequest.h>
#include <aws/workmail/model/CreateResourceRequest.h>
#include <aws/workmail/model/CreateUserRequest.h>
#include <aws/workmail/model/DeleteAccessControlRuleRequest.h>
#include <aws/workmail/model/DeleteAliasRequest.h>
#include <aws/workmail/model/DeleteAvailabilityConfigurationRequest.h>
#include <aws/workmail/model/DeleteEmailMonitoringConfigurationRequest.h>
#include <aws/workmail/model/DeleteGroupRequest.h>
#include <aws/workmail/model/DeleteIdentityCenterApplicationRequest.h>
#include <aws/workmail/model/DeleteIdentityProviderConfigurationRequest.h>
#include <aws/workmail/model/DeleteImpersonationRoleRequest.h>
#include <aws/workmail/model/DeleteMailboxPermissionsRequest.h>
#include <aws/workmail/model/DeleteMobileDeviceAccessOverrideRequest.h>
#include <aws/workmail/model/DeleteMobileDeviceAccessRuleRequest.h>
#include <aws/workmail/model/DeleteOrganizationRequest.h>
#include <aws/workmail/model/DeletePersonalAccessTokenRequest.h>
#include <aws/workmail/model/DeleteResourceRequest.h>
#include <aws/workmail/model/DeleteRetentionPolicyRequest.h>
#include <aws/workmail/model/DeleteUserRequest.h>
#include <aws/workmail/model/DeregisterFromWorkMailRequest.h>
#include <aws/workmail/model/DeregisterMailDomainRequest.h>
#include <aws/workmail/model/DescribeEmailMonitoringConfigurationRequest.h>
#include <aws/workmail/model/DescribeEntityRequest.h>
#include <aws/workmail/model/DescribeGroupRequest.h>
#include <aws/workmail/model/DescribeIdentityProviderConfigurationRequest.h>
#include <aws/workmail/model/DescribeInboundDmarcSettingsRequest.h>
#include <aws/workmail/model/DescribeMailboxExportJobRequest.h>
#include <aws/workmail/model/DescribeOrganizationRequest.h>
#include <aws/workmail/model/DescribeResourceRequest.h>
#include <aws/workmail/model/DescribeUserRequest.h>
#include <aws/workmail/model/DisassociateDelegateFromResourceRequest.h>
#include <aws/workmail/model/DisassociateMemberFromGroupRequest.h>
#include <aws/workmail/model/GetAccessControlEffectRequest.h>
#include <aws/workmail/model/GetDefaultRetentionPolicyRequest.h>
#include <aws/workmail/model/GetImpersonationRoleEffectRequest.h>
#include <aws/workmail/model/GetImpersonationRoleRequest.h>
#include <aws/workmail/model/GetMailDomainRequest.h>
#include <aws/workmail/model/GetMailboxDetailsRequest.h>
#include <aws/workmail/model/GetMobileDeviceAccessEffectRequest.h>
#include <aws/workmail/model/GetMobileDeviceAccessOverrideRequest.h>
#include <aws/workmail/model/GetPersonalAccessTokenMetadataRequest.h>
#include <aws/workmail/model/ListAccessControlRulesRequest.h>
#include <aws/workmail/model/ListAliasesRequest.h>
#include <aws/workmail/model/ListAvailabilityConfigurationsRequest.h>
#include <aws/workmail/model/ListGroupMembersRequest.h>
#include <aws/workmail/model/ListGroupsForEntityRequest.h>
#include <aws/workmail/model/ListGroupsRequest.h>
#include <aws/workmail/model/ListImpersonationRolesRequest.h>
#include <aws/workmail/model/ListMailDomainsRequest.h>
#include <aws/workmail/model/ListMailboxExportJobsRequest.h>
#include <aws/workmail/model/ListMailboxPermissionsRequest.h>
#include <aws/workmail/model/ListMobileDeviceAccessOverridesRequest.h>
#include <aws/workmail/model/ListMobileDeviceAccessRulesRequest.h>
#include <aws/workmail/model/ListOrganizationsRequest.h>
#include <aws/workmail/model/ListPersonalAccessTokensRequest.h>
#include <aws/workmail/model/ListResourceDelegatesRequest.h>
#include <aws/workmail/model/ListResourcesRequest.h>
#include <aws/workmail/model/ListTagsForResourceRequest.h>
#include <aws/workmail/model/ListUsersRequest.h>
#include <aws/workmail/model/PutAccessControlRuleRequest.h>
#include <aws/workmail/model/PutEmailMonitoringConfigurationRequest.h>
#include <aws/workmail/model/PutIdentityProviderConfigurationRequest.h>
#include <aws/workmail/model/PutInboundDmarcSettingsRequest.h>
#include <aws/workmail/model/PutMailboxPermissionsRequest.h>
#include <aws/workmail/model/PutMobileDeviceAccessOverrideRequest.h>
#include <aws/workmail/model/PutRetentionPolicyRequest.h>
#include <aws/workmail/model/RegisterMailDomainRequest.h>
#include <aws/workmail/model/RegisterToWorkMailRequest.h>
#include <aws/workmail/model/ResetPasswordRequest.h>
#include <aws/workmail/model/StartMailboxExportJobRequest.h>
#include <aws/workmail/model/TagResourceRequest.h>
#include <aws/workmail/model/TestAvailabilityConfigurationRequest.h>
#include <aws/workmail/model/UntagResourceRequest.h>
#include <aws/workmail/model/UpdateAvailabilityConfigurationRequest.h>
#include <aws/workmail/model/UpdateDefaultMailDomainRequest.h>
#include <aws/workmail/model/UpdateGroupRequest.h>
#include <aws/workmail/model/UpdateImpersonationRoleRequest.h>
#include <aws/workmail/model/UpdateMailboxQuotaRequest.h>
#include <aws/workmail/model/UpdateMobileDeviceAccessRuleRequest.h>
#include <aws/workmail/model/UpdatePrimaryEmailAddressRequest.h>
#include <aws/workmail/model/UpdateResourceRequest.h>
#include <aws/workmail/model/UpdateUserRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WorkMail;
using namespace Aws::WorkMail::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace WorkMail {
const char SERVICE_NAME[] = "workmail";
const char ALLOCATION_TAG[] = "WorkMailClient";
}  // namespace WorkMail
}  // namespace Aws
const char* WorkMailClient::GetServiceName() { return SERVICE_NAME; }
const char* WorkMailClient::GetAllocationTag() { return ALLOCATION_TAG; }

WorkMailClient::WorkMailClient(const WorkMail::WorkMailClientConfiguration& clientConfiguration,
                               std::shared_ptr<WorkMailEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkMailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WorkMailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WorkMailClient::WorkMailClient(const AWSCredentials& credentials, std::shared_ptr<WorkMailEndpointProviderBase> endpointProvider,
                               const WorkMail::WorkMailClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkMailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WorkMailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WorkMailClient::WorkMailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<WorkMailEndpointProviderBase> endpointProvider,
                               const WorkMail::WorkMailClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkMailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WorkMailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
WorkMailClient::WorkMailClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkMailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WorkMailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WorkMailClient::WorkMailClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkMailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WorkMailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WorkMailClient::WorkMailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkMailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WorkMailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
WorkMailClient::~WorkMailClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<WorkMailEndpointProviderBase>& WorkMailClient::accessEndpointProvider() { return m_endpointProvider; }

void WorkMailClient::init(const WorkMail::WorkMailClientConfiguration& config) {
  AWSClient::SetServiceClientName("WorkMail");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "workmail");
}

void WorkMailClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
WorkMailClient::InvokeOperationOutcome WorkMailClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AssociateDelegateToResourceOutcome WorkMailClient::AssociateDelegateToResource(const AssociateDelegateToResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateDelegateToResourceOutcome(result.GetResultWithOwnership())
                            : AssociateDelegateToResourceOutcome(std::move(result.GetError()));
}

AssociateMemberToGroupOutcome WorkMailClient::AssociateMemberToGroup(const AssociateMemberToGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateMemberToGroupOutcome(result.GetResultWithOwnership())
                            : AssociateMemberToGroupOutcome(std::move(result.GetError()));
}

AssumeImpersonationRoleOutcome WorkMailClient::AssumeImpersonationRole(const AssumeImpersonationRoleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssumeImpersonationRoleOutcome(result.GetResultWithOwnership())
                            : AssumeImpersonationRoleOutcome(std::move(result.GetError()));
}

CancelMailboxExportJobOutcome WorkMailClient::CancelMailboxExportJob(const CancelMailboxExportJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelMailboxExportJobOutcome(result.GetResultWithOwnership())
                            : CancelMailboxExportJobOutcome(std::move(result.GetError()));
}

CreateAliasOutcome WorkMailClient::CreateAlias(const CreateAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAliasOutcome(result.GetResultWithOwnership()) : CreateAliasOutcome(std::move(result.GetError()));
}

CreateAvailabilityConfigurationOutcome WorkMailClient::CreateAvailabilityConfiguration(
    const CreateAvailabilityConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAvailabilityConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateAvailabilityConfigurationOutcome(std::move(result.GetError()));
}

CreateGroupOutcome WorkMailClient::CreateGroup(const CreateGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGroupOutcome(result.GetResultWithOwnership()) : CreateGroupOutcome(std::move(result.GetError()));
}

CreateIdentityCenterApplicationOutcome WorkMailClient::CreateIdentityCenterApplication(
    const CreateIdentityCenterApplicationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIdentityCenterApplicationOutcome(result.GetResultWithOwnership())
                            : CreateIdentityCenterApplicationOutcome(std::move(result.GetError()));
}

CreateImpersonationRoleOutcome WorkMailClient::CreateImpersonationRole(const CreateImpersonationRoleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateImpersonationRoleOutcome(result.GetResultWithOwnership())
                            : CreateImpersonationRoleOutcome(std::move(result.GetError()));
}

CreateMobileDeviceAccessRuleOutcome WorkMailClient::CreateMobileDeviceAccessRule(const CreateMobileDeviceAccessRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMobileDeviceAccessRuleOutcome(result.GetResultWithOwnership())
                            : CreateMobileDeviceAccessRuleOutcome(std::move(result.GetError()));
}

CreateOrganizationOutcome WorkMailClient::CreateOrganization(const CreateOrganizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOrganizationOutcome(result.GetResultWithOwnership())
                            : CreateOrganizationOutcome(std::move(result.GetError()));
}

CreateResourceOutcome WorkMailClient::CreateResource(const CreateResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateResourceOutcome(result.GetResultWithOwnership()) : CreateResourceOutcome(std::move(result.GetError()));
}

CreateUserOutcome WorkMailClient::CreateUser(const CreateUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUserOutcome(result.GetResultWithOwnership()) : CreateUserOutcome(std::move(result.GetError()));
}

DeleteAccessControlRuleOutcome WorkMailClient::DeleteAccessControlRule(const DeleteAccessControlRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAccessControlRuleOutcome(result.GetResultWithOwnership())
                            : DeleteAccessControlRuleOutcome(std::move(result.GetError()));
}

DeleteAliasOutcome WorkMailClient::DeleteAlias(const DeleteAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAliasOutcome(result.GetResultWithOwnership()) : DeleteAliasOutcome(std::move(result.GetError()));
}

DeleteAvailabilityConfigurationOutcome WorkMailClient::DeleteAvailabilityConfiguration(
    const DeleteAvailabilityConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAvailabilityConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteAvailabilityConfigurationOutcome(std::move(result.GetError()));
}

DeleteEmailMonitoringConfigurationOutcome WorkMailClient::DeleteEmailMonitoringConfiguration(
    const DeleteEmailMonitoringConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEmailMonitoringConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteEmailMonitoringConfigurationOutcome(std::move(result.GetError()));
}

DeleteGroupOutcome WorkMailClient::DeleteGroup(const DeleteGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteGroupOutcome(result.GetResultWithOwnership()) : DeleteGroupOutcome(std::move(result.GetError()));
}

DeleteIdentityCenterApplicationOutcome WorkMailClient::DeleteIdentityCenterApplication(
    const DeleteIdentityCenterApplicationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIdentityCenterApplicationOutcome(result.GetResultWithOwnership())
                            : DeleteIdentityCenterApplicationOutcome(std::move(result.GetError()));
}

DeleteIdentityProviderConfigurationOutcome WorkMailClient::DeleteIdentityProviderConfiguration(
    const DeleteIdentityProviderConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIdentityProviderConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteIdentityProviderConfigurationOutcome(std::move(result.GetError()));
}

DeleteImpersonationRoleOutcome WorkMailClient::DeleteImpersonationRole(const DeleteImpersonationRoleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteImpersonationRoleOutcome(result.GetResultWithOwnership())
                            : DeleteImpersonationRoleOutcome(std::move(result.GetError()));
}

DeleteMailboxPermissionsOutcome WorkMailClient::DeleteMailboxPermissions(const DeleteMailboxPermissionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMailboxPermissionsOutcome(result.GetResultWithOwnership())
                            : DeleteMailboxPermissionsOutcome(std::move(result.GetError()));
}

DeleteMobileDeviceAccessOverrideOutcome WorkMailClient::DeleteMobileDeviceAccessOverride(
    const DeleteMobileDeviceAccessOverrideRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMobileDeviceAccessOverrideOutcome(result.GetResultWithOwnership())
                            : DeleteMobileDeviceAccessOverrideOutcome(std::move(result.GetError()));
}

DeleteMobileDeviceAccessRuleOutcome WorkMailClient::DeleteMobileDeviceAccessRule(const DeleteMobileDeviceAccessRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMobileDeviceAccessRuleOutcome(result.GetResultWithOwnership())
                            : DeleteMobileDeviceAccessRuleOutcome(std::move(result.GetError()));
}

DeleteOrganizationOutcome WorkMailClient::DeleteOrganization(const DeleteOrganizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteOrganizationOutcome(result.GetResultWithOwnership())
                            : DeleteOrganizationOutcome(std::move(result.GetError()));
}

DeletePersonalAccessTokenOutcome WorkMailClient::DeletePersonalAccessToken(const DeletePersonalAccessTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePersonalAccessTokenOutcome(result.GetResultWithOwnership())
                            : DeletePersonalAccessTokenOutcome(std::move(result.GetError()));
}

DeleteResourceOutcome WorkMailClient::DeleteResource(const DeleteResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteResourceOutcome(result.GetResultWithOwnership()) : DeleteResourceOutcome(std::move(result.GetError()));
}

DeleteRetentionPolicyOutcome WorkMailClient::DeleteRetentionPolicy(const DeleteRetentionPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRetentionPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteRetentionPolicyOutcome(std::move(result.GetError()));
}

DeleteUserOutcome WorkMailClient::DeleteUser(const DeleteUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUserOutcome(result.GetResultWithOwnership()) : DeleteUserOutcome(std::move(result.GetError()));
}

DeregisterFromWorkMailOutcome WorkMailClient::DeregisterFromWorkMail(const DeregisterFromWorkMailRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterFromWorkMailOutcome(result.GetResultWithOwnership())
                            : DeregisterFromWorkMailOutcome(std::move(result.GetError()));
}

DeregisterMailDomainOutcome WorkMailClient::DeregisterMailDomain(const DeregisterMailDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterMailDomainOutcome(result.GetResultWithOwnership())
                            : DeregisterMailDomainOutcome(std::move(result.GetError()));
}

DescribeEmailMonitoringConfigurationOutcome WorkMailClient::DescribeEmailMonitoringConfiguration(
    const DescribeEmailMonitoringConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEmailMonitoringConfigurationOutcome(result.GetResultWithOwnership())
                            : DescribeEmailMonitoringConfigurationOutcome(std::move(result.GetError()));
}

DescribeEntityOutcome WorkMailClient::DescribeEntity(const DescribeEntityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEntityOutcome(result.GetResultWithOwnership()) : DescribeEntityOutcome(std::move(result.GetError()));
}

DescribeGroupOutcome WorkMailClient::DescribeGroup(const DescribeGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeGroupOutcome(result.GetResultWithOwnership()) : DescribeGroupOutcome(std::move(result.GetError()));
}

DescribeIdentityProviderConfigurationOutcome WorkMailClient::DescribeIdentityProviderConfiguration(
    const DescribeIdentityProviderConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIdentityProviderConfigurationOutcome(result.GetResultWithOwnership())
                            : DescribeIdentityProviderConfigurationOutcome(std::move(result.GetError()));
}

DescribeInboundDmarcSettingsOutcome WorkMailClient::DescribeInboundDmarcSettings(const DescribeInboundDmarcSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInboundDmarcSettingsOutcome(result.GetResultWithOwnership())
                            : DescribeInboundDmarcSettingsOutcome(std::move(result.GetError()));
}

DescribeMailboxExportJobOutcome WorkMailClient::DescribeMailboxExportJob(const DescribeMailboxExportJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMailboxExportJobOutcome(result.GetResultWithOwnership())
                            : DescribeMailboxExportJobOutcome(std::move(result.GetError()));
}

DescribeOrganizationOutcome WorkMailClient::DescribeOrganization(const DescribeOrganizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOrganizationOutcome(result.GetResultWithOwnership())
                            : DescribeOrganizationOutcome(std::move(result.GetError()));
}

DescribeResourceOutcome WorkMailClient::DescribeResource(const DescribeResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeResourceOutcome(result.GetResultWithOwnership())
                            : DescribeResourceOutcome(std::move(result.GetError()));
}

DescribeUserOutcome WorkMailClient::DescribeUser(const DescribeUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeUserOutcome(result.GetResultWithOwnership()) : DescribeUserOutcome(std::move(result.GetError()));
}

DisassociateDelegateFromResourceOutcome WorkMailClient::DisassociateDelegateFromResource(
    const DisassociateDelegateFromResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateDelegateFromResourceOutcome(result.GetResultWithOwnership())
                            : DisassociateDelegateFromResourceOutcome(std::move(result.GetError()));
}

DisassociateMemberFromGroupOutcome WorkMailClient::DisassociateMemberFromGroup(const DisassociateMemberFromGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateMemberFromGroupOutcome(result.GetResultWithOwnership())
                            : DisassociateMemberFromGroupOutcome(std::move(result.GetError()));
}

GetAccessControlEffectOutcome WorkMailClient::GetAccessControlEffect(const GetAccessControlEffectRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAccessControlEffectOutcome(result.GetResultWithOwnership())
                            : GetAccessControlEffectOutcome(std::move(result.GetError()));
}

GetDefaultRetentionPolicyOutcome WorkMailClient::GetDefaultRetentionPolicy(const GetDefaultRetentionPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDefaultRetentionPolicyOutcome(result.GetResultWithOwnership())
                            : GetDefaultRetentionPolicyOutcome(std::move(result.GetError()));
}

GetImpersonationRoleOutcome WorkMailClient::GetImpersonationRole(const GetImpersonationRoleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetImpersonationRoleOutcome(result.GetResultWithOwnership())
                            : GetImpersonationRoleOutcome(std::move(result.GetError()));
}

GetImpersonationRoleEffectOutcome WorkMailClient::GetImpersonationRoleEffect(const GetImpersonationRoleEffectRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetImpersonationRoleEffectOutcome(result.GetResultWithOwnership())
                            : GetImpersonationRoleEffectOutcome(std::move(result.GetError()));
}

GetMailDomainOutcome WorkMailClient::GetMailDomain(const GetMailDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMailDomainOutcome(result.GetResultWithOwnership()) : GetMailDomainOutcome(std::move(result.GetError()));
}

GetMailboxDetailsOutcome WorkMailClient::GetMailboxDetails(const GetMailboxDetailsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMailboxDetailsOutcome(result.GetResultWithOwnership())
                            : GetMailboxDetailsOutcome(std::move(result.GetError()));
}

GetMobileDeviceAccessEffectOutcome WorkMailClient::GetMobileDeviceAccessEffect(const GetMobileDeviceAccessEffectRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMobileDeviceAccessEffectOutcome(result.GetResultWithOwnership())
                            : GetMobileDeviceAccessEffectOutcome(std::move(result.GetError()));
}

GetMobileDeviceAccessOverrideOutcome WorkMailClient::GetMobileDeviceAccessOverride(
    const GetMobileDeviceAccessOverrideRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMobileDeviceAccessOverrideOutcome(result.GetResultWithOwnership())
                            : GetMobileDeviceAccessOverrideOutcome(std::move(result.GetError()));
}

GetPersonalAccessTokenMetadataOutcome WorkMailClient::GetPersonalAccessTokenMetadata(
    const GetPersonalAccessTokenMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPersonalAccessTokenMetadataOutcome(result.GetResultWithOwnership())
                            : GetPersonalAccessTokenMetadataOutcome(std::move(result.GetError()));
}

ListAccessControlRulesOutcome WorkMailClient::ListAccessControlRules(const ListAccessControlRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAccessControlRulesOutcome(result.GetResultWithOwnership())
                            : ListAccessControlRulesOutcome(std::move(result.GetError()));
}

ListAliasesOutcome WorkMailClient::ListAliases(const ListAliasesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAliasesOutcome(result.GetResultWithOwnership()) : ListAliasesOutcome(std::move(result.GetError()));
}

ListAvailabilityConfigurationsOutcome WorkMailClient::ListAvailabilityConfigurations(
    const ListAvailabilityConfigurationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAvailabilityConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListAvailabilityConfigurationsOutcome(std::move(result.GetError()));
}

ListGroupMembersOutcome WorkMailClient::ListGroupMembers(const ListGroupMembersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListGroupMembersOutcome(result.GetResultWithOwnership())
                            : ListGroupMembersOutcome(std::move(result.GetError()));
}

ListGroupsOutcome WorkMailClient::ListGroups(const ListGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListGroupsOutcome(result.GetResultWithOwnership()) : ListGroupsOutcome(std::move(result.GetError()));
}

ListGroupsForEntityOutcome WorkMailClient::ListGroupsForEntity(const ListGroupsForEntityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListGroupsForEntityOutcome(result.GetResultWithOwnership())
                            : ListGroupsForEntityOutcome(std::move(result.GetError()));
}

ListImpersonationRolesOutcome WorkMailClient::ListImpersonationRoles(const ListImpersonationRolesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListImpersonationRolesOutcome(result.GetResultWithOwnership())
                            : ListImpersonationRolesOutcome(std::move(result.GetError()));
}

ListMailDomainsOutcome WorkMailClient::ListMailDomains(const ListMailDomainsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMailDomainsOutcome(result.GetResultWithOwnership())
                            : ListMailDomainsOutcome(std::move(result.GetError()));
}

ListMailboxExportJobsOutcome WorkMailClient::ListMailboxExportJobs(const ListMailboxExportJobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMailboxExportJobsOutcome(result.GetResultWithOwnership())
                            : ListMailboxExportJobsOutcome(std::move(result.GetError()));
}

ListMailboxPermissionsOutcome WorkMailClient::ListMailboxPermissions(const ListMailboxPermissionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMailboxPermissionsOutcome(result.GetResultWithOwnership())
                            : ListMailboxPermissionsOutcome(std::move(result.GetError()));
}

ListMobileDeviceAccessOverridesOutcome WorkMailClient::ListMobileDeviceAccessOverrides(
    const ListMobileDeviceAccessOverridesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMobileDeviceAccessOverridesOutcome(result.GetResultWithOwnership())
                            : ListMobileDeviceAccessOverridesOutcome(std::move(result.GetError()));
}

ListMobileDeviceAccessRulesOutcome WorkMailClient::ListMobileDeviceAccessRules(const ListMobileDeviceAccessRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMobileDeviceAccessRulesOutcome(result.GetResultWithOwnership())
                            : ListMobileDeviceAccessRulesOutcome(std::move(result.GetError()));
}

ListOrganizationsOutcome WorkMailClient::ListOrganizations(const ListOrganizationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListOrganizationsOutcome(result.GetResultWithOwnership())
                            : ListOrganizationsOutcome(std::move(result.GetError()));
}

ListPersonalAccessTokensOutcome WorkMailClient::ListPersonalAccessTokens(const ListPersonalAccessTokensRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPersonalAccessTokensOutcome(result.GetResultWithOwnership())
                            : ListPersonalAccessTokensOutcome(std::move(result.GetError()));
}

ListResourceDelegatesOutcome WorkMailClient::ListResourceDelegates(const ListResourceDelegatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListResourceDelegatesOutcome(result.GetResultWithOwnership())
                            : ListResourceDelegatesOutcome(std::move(result.GetError()));
}

ListResourcesOutcome WorkMailClient::ListResources(const ListResourcesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListResourcesOutcome(result.GetResultWithOwnership()) : ListResourcesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome WorkMailClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListUsersOutcome WorkMailClient::ListUsers(const ListUsersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListUsersOutcome(result.GetResultWithOwnership()) : ListUsersOutcome(std::move(result.GetError()));
}

PutAccessControlRuleOutcome WorkMailClient::PutAccessControlRule(const PutAccessControlRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutAccessControlRuleOutcome(result.GetResultWithOwnership())
                            : PutAccessControlRuleOutcome(std::move(result.GetError()));
}

PutEmailMonitoringConfigurationOutcome WorkMailClient::PutEmailMonitoringConfiguration(
    const PutEmailMonitoringConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutEmailMonitoringConfigurationOutcome(result.GetResultWithOwnership())
                            : PutEmailMonitoringConfigurationOutcome(std::move(result.GetError()));
}

PutIdentityProviderConfigurationOutcome WorkMailClient::PutIdentityProviderConfiguration(
    const PutIdentityProviderConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutIdentityProviderConfigurationOutcome(result.GetResultWithOwnership())
                            : PutIdentityProviderConfigurationOutcome(std::move(result.GetError()));
}

PutInboundDmarcSettingsOutcome WorkMailClient::PutInboundDmarcSettings(const PutInboundDmarcSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutInboundDmarcSettingsOutcome(result.GetResultWithOwnership())
                            : PutInboundDmarcSettingsOutcome(std::move(result.GetError()));
}

PutMailboxPermissionsOutcome WorkMailClient::PutMailboxPermissions(const PutMailboxPermissionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutMailboxPermissionsOutcome(result.GetResultWithOwnership())
                            : PutMailboxPermissionsOutcome(std::move(result.GetError()));
}

PutMobileDeviceAccessOverrideOutcome WorkMailClient::PutMobileDeviceAccessOverride(
    const PutMobileDeviceAccessOverrideRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutMobileDeviceAccessOverrideOutcome(result.GetResultWithOwnership())
                            : PutMobileDeviceAccessOverrideOutcome(std::move(result.GetError()));
}

PutRetentionPolicyOutcome WorkMailClient::PutRetentionPolicy(const PutRetentionPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutRetentionPolicyOutcome(result.GetResultWithOwnership())
                            : PutRetentionPolicyOutcome(std::move(result.GetError()));
}

RegisterMailDomainOutcome WorkMailClient::RegisterMailDomain(const RegisterMailDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterMailDomainOutcome(result.GetResultWithOwnership())
                            : RegisterMailDomainOutcome(std::move(result.GetError()));
}

RegisterToWorkMailOutcome WorkMailClient::RegisterToWorkMail(const RegisterToWorkMailRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterToWorkMailOutcome(result.GetResultWithOwnership())
                            : RegisterToWorkMailOutcome(std::move(result.GetError()));
}

ResetPasswordOutcome WorkMailClient::ResetPassword(const ResetPasswordRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetPasswordOutcome(result.GetResultWithOwnership()) : ResetPasswordOutcome(std::move(result.GetError()));
}

StartMailboxExportJobOutcome WorkMailClient::StartMailboxExportJob(const StartMailboxExportJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMailboxExportJobOutcome(result.GetResultWithOwnership())
                            : StartMailboxExportJobOutcome(std::move(result.GetError()));
}

TagResourceOutcome WorkMailClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

TestAvailabilityConfigurationOutcome WorkMailClient::TestAvailabilityConfiguration(
    const TestAvailabilityConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestAvailabilityConfigurationOutcome(result.GetResultWithOwnership())
                            : TestAvailabilityConfigurationOutcome(std::move(result.GetError()));
}

UntagResourceOutcome WorkMailClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAvailabilityConfigurationOutcome WorkMailClient::UpdateAvailabilityConfiguration(
    const UpdateAvailabilityConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAvailabilityConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateAvailabilityConfigurationOutcome(std::move(result.GetError()));
}

UpdateDefaultMailDomainOutcome WorkMailClient::UpdateDefaultMailDomain(const UpdateDefaultMailDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDefaultMailDomainOutcome(result.GetResultWithOwnership())
                            : UpdateDefaultMailDomainOutcome(std::move(result.GetError()));
}

UpdateGroupOutcome WorkMailClient::UpdateGroup(const UpdateGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateGroupOutcome(result.GetResultWithOwnership()) : UpdateGroupOutcome(std::move(result.GetError()));
}

UpdateImpersonationRoleOutcome WorkMailClient::UpdateImpersonationRole(const UpdateImpersonationRoleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateImpersonationRoleOutcome(result.GetResultWithOwnership())
                            : UpdateImpersonationRoleOutcome(std::move(result.GetError()));
}

UpdateMailboxQuotaOutcome WorkMailClient::UpdateMailboxQuota(const UpdateMailboxQuotaRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateMailboxQuotaOutcome(result.GetResultWithOwnership())
                            : UpdateMailboxQuotaOutcome(std::move(result.GetError()));
}

UpdateMobileDeviceAccessRuleOutcome WorkMailClient::UpdateMobileDeviceAccessRule(const UpdateMobileDeviceAccessRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateMobileDeviceAccessRuleOutcome(result.GetResultWithOwnership())
                            : UpdateMobileDeviceAccessRuleOutcome(std::move(result.GetError()));
}

UpdatePrimaryEmailAddressOutcome WorkMailClient::UpdatePrimaryEmailAddress(const UpdatePrimaryEmailAddressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePrimaryEmailAddressOutcome(result.GetResultWithOwnership())
                            : UpdatePrimaryEmailAddressOutcome(std::move(result.GetError()));
}

UpdateResourceOutcome WorkMailClient::UpdateResource(const UpdateResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateResourceOutcome(result.GetResultWithOwnership()) : UpdateResourceOutcome(std::move(result.GetError()));
}

UpdateUserOutcome WorkMailClient::UpdateUser(const UpdateUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateUserOutcome(result.GetResultWithOwnership()) : UpdateUserOutcome(std::move(result.GetError()));
}
