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
  return AssociateDelegateToResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateMemberToGroupOutcome WorkMailClient::AssociateMemberToGroup(const AssociateMemberToGroupRequest& request) const {
  return AssociateMemberToGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssumeImpersonationRoleOutcome WorkMailClient::AssumeImpersonationRole(const AssumeImpersonationRoleRequest& request) const {
  return AssumeImpersonationRoleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelMailboxExportJobOutcome WorkMailClient::CancelMailboxExportJob(const CancelMailboxExportJobRequest& request) const {
  return CancelMailboxExportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAliasOutcome WorkMailClient::CreateAlias(const CreateAliasRequest& request) const {
  return CreateAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAvailabilityConfigurationOutcome WorkMailClient::CreateAvailabilityConfiguration(
    const CreateAvailabilityConfigurationRequest& request) const {
  return CreateAvailabilityConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGroupOutcome WorkMailClient::CreateGroup(const CreateGroupRequest& request) const {
  return CreateGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIdentityCenterApplicationOutcome WorkMailClient::CreateIdentityCenterApplication(
    const CreateIdentityCenterApplicationRequest& request) const {
  return CreateIdentityCenterApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateImpersonationRoleOutcome WorkMailClient::CreateImpersonationRole(const CreateImpersonationRoleRequest& request) const {
  return CreateImpersonationRoleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMobileDeviceAccessRuleOutcome WorkMailClient::CreateMobileDeviceAccessRule(const CreateMobileDeviceAccessRuleRequest& request) const {
  return CreateMobileDeviceAccessRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOrganizationOutcome WorkMailClient::CreateOrganization(const CreateOrganizationRequest& request) const {
  return CreateOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateResourceOutcome WorkMailClient::CreateResource(const CreateResourceRequest& request) const {
  return CreateResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserOutcome WorkMailClient::CreateUser(const CreateUserRequest& request) const {
  return CreateUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAccessControlRuleOutcome WorkMailClient::DeleteAccessControlRule(const DeleteAccessControlRuleRequest& request) const {
  return DeleteAccessControlRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAliasOutcome WorkMailClient::DeleteAlias(const DeleteAliasRequest& request) const {
  return DeleteAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAvailabilityConfigurationOutcome WorkMailClient::DeleteAvailabilityConfiguration(
    const DeleteAvailabilityConfigurationRequest& request) const {
  return DeleteAvailabilityConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEmailMonitoringConfigurationOutcome WorkMailClient::DeleteEmailMonitoringConfiguration(
    const DeleteEmailMonitoringConfigurationRequest& request) const {
  return DeleteEmailMonitoringConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGroupOutcome WorkMailClient::DeleteGroup(const DeleteGroupRequest& request) const {
  return DeleteGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIdentityCenterApplicationOutcome WorkMailClient::DeleteIdentityCenterApplication(
    const DeleteIdentityCenterApplicationRequest& request) const {
  return DeleteIdentityCenterApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIdentityProviderConfigurationOutcome WorkMailClient::DeleteIdentityProviderConfiguration(
    const DeleteIdentityProviderConfigurationRequest& request) const {
  return DeleteIdentityProviderConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteImpersonationRoleOutcome WorkMailClient::DeleteImpersonationRole(const DeleteImpersonationRoleRequest& request) const {
  return DeleteImpersonationRoleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMailboxPermissionsOutcome WorkMailClient::DeleteMailboxPermissions(const DeleteMailboxPermissionsRequest& request) const {
  return DeleteMailboxPermissionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMobileDeviceAccessOverrideOutcome WorkMailClient::DeleteMobileDeviceAccessOverride(
    const DeleteMobileDeviceAccessOverrideRequest& request) const {
  return DeleteMobileDeviceAccessOverrideOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMobileDeviceAccessRuleOutcome WorkMailClient::DeleteMobileDeviceAccessRule(const DeleteMobileDeviceAccessRuleRequest& request) const {
  return DeleteMobileDeviceAccessRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteOrganizationOutcome WorkMailClient::DeleteOrganization(const DeleteOrganizationRequest& request) const {
  return DeleteOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePersonalAccessTokenOutcome WorkMailClient::DeletePersonalAccessToken(const DeletePersonalAccessTokenRequest& request) const {
  return DeletePersonalAccessTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourceOutcome WorkMailClient::DeleteResource(const DeleteResourceRequest& request) const {
  return DeleteResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRetentionPolicyOutcome WorkMailClient::DeleteRetentionPolicy(const DeleteRetentionPolicyRequest& request) const {
  return DeleteRetentionPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUserOutcome WorkMailClient::DeleteUser(const DeleteUserRequest& request) const {
  return DeleteUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterFromWorkMailOutcome WorkMailClient::DeregisterFromWorkMail(const DeregisterFromWorkMailRequest& request) const {
  return DeregisterFromWorkMailOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterMailDomainOutcome WorkMailClient::DeregisterMailDomain(const DeregisterMailDomainRequest& request) const {
  return DeregisterMailDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEmailMonitoringConfigurationOutcome WorkMailClient::DescribeEmailMonitoringConfiguration(
    const DescribeEmailMonitoringConfigurationRequest& request) const {
  return DescribeEmailMonitoringConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEntityOutcome WorkMailClient::DescribeEntity(const DescribeEntityRequest& request) const {
  return DescribeEntityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeGroupOutcome WorkMailClient::DescribeGroup(const DescribeGroupRequest& request) const {
  return DescribeGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIdentityProviderConfigurationOutcome WorkMailClient::DescribeIdentityProviderConfiguration(
    const DescribeIdentityProviderConfigurationRequest& request) const {
  return DescribeIdentityProviderConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInboundDmarcSettingsOutcome WorkMailClient::DescribeInboundDmarcSettings(const DescribeInboundDmarcSettingsRequest& request) const {
  return DescribeInboundDmarcSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMailboxExportJobOutcome WorkMailClient::DescribeMailboxExportJob(const DescribeMailboxExportJobRequest& request) const {
  return DescribeMailboxExportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOrganizationOutcome WorkMailClient::DescribeOrganization(const DescribeOrganizationRequest& request) const {
  return DescribeOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeResourceOutcome WorkMailClient::DescribeResource(const DescribeResourceRequest& request) const {
  return DescribeResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeUserOutcome WorkMailClient::DescribeUser(const DescribeUserRequest& request) const {
  return DescribeUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateDelegateFromResourceOutcome WorkMailClient::DisassociateDelegateFromResource(
    const DisassociateDelegateFromResourceRequest& request) const {
  return DisassociateDelegateFromResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateMemberFromGroupOutcome WorkMailClient::DisassociateMemberFromGroup(const DisassociateMemberFromGroupRequest& request) const {
  return DisassociateMemberFromGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAccessControlEffectOutcome WorkMailClient::GetAccessControlEffect(const GetAccessControlEffectRequest& request) const {
  return GetAccessControlEffectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDefaultRetentionPolicyOutcome WorkMailClient::GetDefaultRetentionPolicy(const GetDefaultRetentionPolicyRequest& request) const {
  return GetDefaultRetentionPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetImpersonationRoleOutcome WorkMailClient::GetImpersonationRole(const GetImpersonationRoleRequest& request) const {
  return GetImpersonationRoleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetImpersonationRoleEffectOutcome WorkMailClient::GetImpersonationRoleEffect(const GetImpersonationRoleEffectRequest& request) const {
  return GetImpersonationRoleEffectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMailDomainOutcome WorkMailClient::GetMailDomain(const GetMailDomainRequest& request) const {
  return GetMailDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMailboxDetailsOutcome WorkMailClient::GetMailboxDetails(const GetMailboxDetailsRequest& request) const {
  return GetMailboxDetailsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMobileDeviceAccessEffectOutcome WorkMailClient::GetMobileDeviceAccessEffect(const GetMobileDeviceAccessEffectRequest& request) const {
  return GetMobileDeviceAccessEffectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMobileDeviceAccessOverrideOutcome WorkMailClient::GetMobileDeviceAccessOverride(
    const GetMobileDeviceAccessOverrideRequest& request) const {
  return GetMobileDeviceAccessOverrideOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPersonalAccessTokenMetadataOutcome WorkMailClient::GetPersonalAccessTokenMetadata(
    const GetPersonalAccessTokenMetadataRequest& request) const {
  return GetPersonalAccessTokenMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAccessControlRulesOutcome WorkMailClient::ListAccessControlRules(const ListAccessControlRulesRequest& request) const {
  return ListAccessControlRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAliasesOutcome WorkMailClient::ListAliases(const ListAliasesRequest& request) const {
  return ListAliasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAvailabilityConfigurationsOutcome WorkMailClient::ListAvailabilityConfigurations(
    const ListAvailabilityConfigurationsRequest& request) const {
  return ListAvailabilityConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGroupMembersOutcome WorkMailClient::ListGroupMembers(const ListGroupMembersRequest& request) const {
  return ListGroupMembersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGroupsOutcome WorkMailClient::ListGroups(const ListGroupsRequest& request) const {
  return ListGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGroupsForEntityOutcome WorkMailClient::ListGroupsForEntity(const ListGroupsForEntityRequest& request) const {
  return ListGroupsForEntityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListImpersonationRolesOutcome WorkMailClient::ListImpersonationRoles(const ListImpersonationRolesRequest& request) const {
  return ListImpersonationRolesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMailDomainsOutcome WorkMailClient::ListMailDomains(const ListMailDomainsRequest& request) const {
  return ListMailDomainsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMailboxExportJobsOutcome WorkMailClient::ListMailboxExportJobs(const ListMailboxExportJobsRequest& request) const {
  return ListMailboxExportJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMailboxPermissionsOutcome WorkMailClient::ListMailboxPermissions(const ListMailboxPermissionsRequest& request) const {
  return ListMailboxPermissionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMobileDeviceAccessOverridesOutcome WorkMailClient::ListMobileDeviceAccessOverrides(
    const ListMobileDeviceAccessOverridesRequest& request) const {
  return ListMobileDeviceAccessOverridesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMobileDeviceAccessRulesOutcome WorkMailClient::ListMobileDeviceAccessRules(const ListMobileDeviceAccessRulesRequest& request) const {
  return ListMobileDeviceAccessRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOrganizationsOutcome WorkMailClient::ListOrganizations(const ListOrganizationsRequest& request) const {
  return ListOrganizationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPersonalAccessTokensOutcome WorkMailClient::ListPersonalAccessTokens(const ListPersonalAccessTokensRequest& request) const {
  return ListPersonalAccessTokensOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourceDelegatesOutcome WorkMailClient::ListResourceDelegates(const ListResourceDelegatesRequest& request) const {
  return ListResourceDelegatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourcesOutcome WorkMailClient::ListResources(const ListResourcesRequest& request) const {
  return ListResourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome WorkMailClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListUsersOutcome WorkMailClient::ListUsers(const ListUsersRequest& request) const {
  return ListUsersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutAccessControlRuleOutcome WorkMailClient::PutAccessControlRule(const PutAccessControlRuleRequest& request) const {
  return PutAccessControlRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutEmailMonitoringConfigurationOutcome WorkMailClient::PutEmailMonitoringConfiguration(
    const PutEmailMonitoringConfigurationRequest& request) const {
  return PutEmailMonitoringConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutIdentityProviderConfigurationOutcome WorkMailClient::PutIdentityProviderConfiguration(
    const PutIdentityProviderConfigurationRequest& request) const {
  return PutIdentityProviderConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutInboundDmarcSettingsOutcome WorkMailClient::PutInboundDmarcSettings(const PutInboundDmarcSettingsRequest& request) const {
  return PutInboundDmarcSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutMailboxPermissionsOutcome WorkMailClient::PutMailboxPermissions(const PutMailboxPermissionsRequest& request) const {
  return PutMailboxPermissionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutMobileDeviceAccessOverrideOutcome WorkMailClient::PutMobileDeviceAccessOverride(
    const PutMobileDeviceAccessOverrideRequest& request) const {
  return PutMobileDeviceAccessOverrideOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutRetentionPolicyOutcome WorkMailClient::PutRetentionPolicy(const PutRetentionPolicyRequest& request) const {
  return PutRetentionPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterMailDomainOutcome WorkMailClient::RegisterMailDomain(const RegisterMailDomainRequest& request) const {
  return RegisterMailDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterToWorkMailOutcome WorkMailClient::RegisterToWorkMail(const RegisterToWorkMailRequest& request) const {
  return RegisterToWorkMailOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResetPasswordOutcome WorkMailClient::ResetPassword(const ResetPasswordRequest& request) const {
  return ResetPasswordOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMailboxExportJobOutcome WorkMailClient::StartMailboxExportJob(const StartMailboxExportJobRequest& request) const {
  return StartMailboxExportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome WorkMailClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TestAvailabilityConfigurationOutcome WorkMailClient::TestAvailabilityConfiguration(
    const TestAvailabilityConfigurationRequest& request) const {
  return TestAvailabilityConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome WorkMailClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAvailabilityConfigurationOutcome WorkMailClient::UpdateAvailabilityConfiguration(
    const UpdateAvailabilityConfigurationRequest& request) const {
  return UpdateAvailabilityConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDefaultMailDomainOutcome WorkMailClient::UpdateDefaultMailDomain(const UpdateDefaultMailDomainRequest& request) const {
  return UpdateDefaultMailDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGroupOutcome WorkMailClient::UpdateGroup(const UpdateGroupRequest& request) const {
  return UpdateGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateImpersonationRoleOutcome WorkMailClient::UpdateImpersonationRole(const UpdateImpersonationRoleRequest& request) const {
  return UpdateImpersonationRoleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMailboxQuotaOutcome WorkMailClient::UpdateMailboxQuota(const UpdateMailboxQuotaRequest& request) const {
  return UpdateMailboxQuotaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMobileDeviceAccessRuleOutcome WorkMailClient::UpdateMobileDeviceAccessRule(const UpdateMobileDeviceAccessRuleRequest& request) const {
  return UpdateMobileDeviceAccessRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePrimaryEmailAddressOutcome WorkMailClient::UpdatePrimaryEmailAddress(const UpdatePrimaryEmailAddressRequest& request) const {
  return UpdatePrimaryEmailAddressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateResourceOutcome WorkMailClient::UpdateResource(const UpdateResourceRequest& request) const {
  return UpdateResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateUserOutcome WorkMailClient::UpdateUser(const UpdateUserRequest& request) const {
  return UpdateUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
