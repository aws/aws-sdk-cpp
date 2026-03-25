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
#include <aws/organizations/OrganizationsClient.h>
#include <aws/organizations/OrganizationsEndpointProvider.h>
#include <aws/organizations/OrganizationsErrorMarshaller.h>
#include <aws/organizations/model/AcceptHandshakeRequest.h>
#include <aws/organizations/model/AttachPolicyRequest.h>
#include <aws/organizations/model/CancelHandshakeRequest.h>
#include <aws/organizations/model/CloseAccountRequest.h>
#include <aws/organizations/model/CreateAccountRequest.h>
#include <aws/organizations/model/CreateGovCloudAccountRequest.h>
#include <aws/organizations/model/CreateOrganizationRequest.h>
#include <aws/organizations/model/CreateOrganizationalUnitRequest.h>
#include <aws/organizations/model/CreatePolicyRequest.h>
#include <aws/organizations/model/DeclineHandshakeRequest.h>
#include <aws/organizations/model/DeleteOrganizationRequest.h>
#include <aws/organizations/model/DeleteOrganizationalUnitRequest.h>
#include <aws/organizations/model/DeletePolicyRequest.h>
#include <aws/organizations/model/DeleteResourcePolicyRequest.h>
#include <aws/organizations/model/DeregisterDelegatedAdministratorRequest.h>
#include <aws/organizations/model/DescribeAccountRequest.h>
#include <aws/organizations/model/DescribeCreateAccountStatusRequest.h>
#include <aws/organizations/model/DescribeEffectivePolicyRequest.h>
#include <aws/organizations/model/DescribeHandshakeRequest.h>
#include <aws/organizations/model/DescribeOrganizationRequest.h>
#include <aws/organizations/model/DescribeOrganizationalUnitRequest.h>
#include <aws/organizations/model/DescribePolicyRequest.h>
#include <aws/organizations/model/DescribeResourcePolicyRequest.h>
#include <aws/organizations/model/DescribeResponsibilityTransferRequest.h>
#include <aws/organizations/model/DetachPolicyRequest.h>
#include <aws/organizations/model/DisableAWSServiceAccessRequest.h>
#include <aws/organizations/model/DisablePolicyTypeRequest.h>
#include <aws/organizations/model/EnableAWSServiceAccessRequest.h>
#include <aws/organizations/model/EnableAllFeaturesRequest.h>
#include <aws/organizations/model/EnablePolicyTypeRequest.h>
#include <aws/organizations/model/InviteAccountToOrganizationRequest.h>
#include <aws/organizations/model/InviteOrganizationToTransferResponsibilityRequest.h>
#include <aws/organizations/model/LeaveOrganizationRequest.h>
#include <aws/organizations/model/ListAWSServiceAccessForOrganizationRequest.h>
#include <aws/organizations/model/ListAccountsForParentRequest.h>
#include <aws/organizations/model/ListAccountsRequest.h>
#include <aws/organizations/model/ListAccountsWithInvalidEffectivePolicyRequest.h>
#include <aws/organizations/model/ListChildrenRequest.h>
#include <aws/organizations/model/ListCreateAccountStatusRequest.h>
#include <aws/organizations/model/ListDelegatedAdministratorsRequest.h>
#include <aws/organizations/model/ListDelegatedServicesForAccountRequest.h>
#include <aws/organizations/model/ListEffectivePolicyValidationErrorsRequest.h>
#include <aws/organizations/model/ListHandshakesForAccountRequest.h>
#include <aws/organizations/model/ListHandshakesForOrganizationRequest.h>
#include <aws/organizations/model/ListInboundResponsibilityTransfersRequest.h>
#include <aws/organizations/model/ListOrganizationalUnitsForParentRequest.h>
#include <aws/organizations/model/ListOutboundResponsibilityTransfersRequest.h>
#include <aws/organizations/model/ListParentsRequest.h>
#include <aws/organizations/model/ListPoliciesForTargetRequest.h>
#include <aws/organizations/model/ListPoliciesRequest.h>
#include <aws/organizations/model/ListRootsRequest.h>
#include <aws/organizations/model/ListTagsForResourceRequest.h>
#include <aws/organizations/model/ListTargetsForPolicyRequest.h>
#include <aws/organizations/model/MoveAccountRequest.h>
#include <aws/organizations/model/PutResourcePolicyRequest.h>
#include <aws/organizations/model/RegisterDelegatedAdministratorRequest.h>
#include <aws/organizations/model/RemoveAccountFromOrganizationRequest.h>
#include <aws/organizations/model/TagResourceRequest.h>
#include <aws/organizations/model/TerminateResponsibilityTransferRequest.h>
#include <aws/organizations/model/UntagResourceRequest.h>
#include <aws/organizations/model/UpdateOrganizationalUnitRequest.h>
#include <aws/organizations/model/UpdatePolicyRequest.h>
#include <aws/organizations/model/UpdateResponsibilityTransferRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Organizations;
using namespace Aws::Organizations::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Organizations {
const char SERVICE_NAME[] = "organizations";
const char ALLOCATION_TAG[] = "OrganizationsClient";
}  // namespace Organizations
}  // namespace Aws
const char* OrganizationsClient::GetServiceName() { return SERVICE_NAME; }
const char* OrganizationsClient::GetAllocationTag() { return ALLOCATION_TAG; }

OrganizationsClient::OrganizationsClient(const Organizations::OrganizationsClientConfiguration& clientConfiguration,
                                         std::shared_ptr<OrganizationsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OrganizationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<OrganizationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OrganizationsClient::OrganizationsClient(const AWSCredentials& credentials,
                                         std::shared_ptr<OrganizationsEndpointProviderBase> endpointProvider,
                                         const Organizations::OrganizationsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OrganizationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<OrganizationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OrganizationsClient::OrganizationsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<OrganizationsEndpointProviderBase> endpointProvider,
                                         const Organizations::OrganizationsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OrganizationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<OrganizationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
OrganizationsClient::OrganizationsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OrganizationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OrganizationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OrganizationsClient::OrganizationsClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OrganizationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OrganizationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OrganizationsClient::OrganizationsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OrganizationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OrganizationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
OrganizationsClient::~OrganizationsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<OrganizationsEndpointProviderBase>& OrganizationsClient::accessEndpointProvider() { return m_endpointProvider; }

void OrganizationsClient::init(const Organizations::OrganizationsClientConfiguration& config) {
  AWSClient::SetServiceClientName("Organizations");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "organizations");
}

void OrganizationsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
OrganizationsClient::InvokeOperationOutcome OrganizationsClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AcceptHandshakeOutcome OrganizationsClient::AcceptHandshake(const AcceptHandshakeRequest& request) const {
  return AcceptHandshakeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AttachPolicyOutcome OrganizationsClient::AttachPolicy(const AttachPolicyRequest& request) const {
  return AttachPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelHandshakeOutcome OrganizationsClient::CancelHandshake(const CancelHandshakeRequest& request) const {
  return CancelHandshakeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CloseAccountOutcome OrganizationsClient::CloseAccount(const CloseAccountRequest& request) const {
  return CloseAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAccountOutcome OrganizationsClient::CreateAccount(const CreateAccountRequest& request) const {
  return CreateAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGovCloudAccountOutcome OrganizationsClient::CreateGovCloudAccount(const CreateGovCloudAccountRequest& request) const {
  return CreateGovCloudAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOrganizationOutcome OrganizationsClient::CreateOrganization(const CreateOrganizationRequest& request) const {
  return CreateOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOrganizationalUnitOutcome OrganizationsClient::CreateOrganizationalUnit(const CreateOrganizationalUnitRequest& request) const {
  return CreateOrganizationalUnitOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePolicyOutcome OrganizationsClient::CreatePolicy(const CreatePolicyRequest& request) const {
  return CreatePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeclineHandshakeOutcome OrganizationsClient::DeclineHandshake(const DeclineHandshakeRequest& request) const {
  return DeclineHandshakeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteOrganizationOutcome OrganizationsClient::DeleteOrganization(const DeleteOrganizationRequest& request) const {
  return DeleteOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteOrganizationalUnitOutcome OrganizationsClient::DeleteOrganizationalUnit(const DeleteOrganizationalUnitRequest& request) const {
  return DeleteOrganizationalUnitOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePolicyOutcome OrganizationsClient::DeletePolicy(const DeletePolicyRequest& request) const {
  return DeletePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourcePolicyOutcome OrganizationsClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterDelegatedAdministratorOutcome OrganizationsClient::DeregisterDelegatedAdministrator(
    const DeregisterDelegatedAdministratorRequest& request) const {
  return DeregisterDelegatedAdministratorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAccountOutcome OrganizationsClient::DescribeAccount(const DescribeAccountRequest& request) const {
  return DescribeAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCreateAccountStatusOutcome OrganizationsClient::DescribeCreateAccountStatus(
    const DescribeCreateAccountStatusRequest& request) const {
  return DescribeCreateAccountStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEffectivePolicyOutcome OrganizationsClient::DescribeEffectivePolicy(const DescribeEffectivePolicyRequest& request) const {
  return DescribeEffectivePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeHandshakeOutcome OrganizationsClient::DescribeHandshake(const DescribeHandshakeRequest& request) const {
  return DescribeHandshakeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOrganizationOutcome OrganizationsClient::DescribeOrganization(const DescribeOrganizationRequest& request) const {
  return DescribeOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOrganizationalUnitOutcome OrganizationsClient::DescribeOrganizationalUnit(const DescribeOrganizationalUnitRequest& request) const {
  return DescribeOrganizationalUnitOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePolicyOutcome OrganizationsClient::DescribePolicy(const DescribePolicyRequest& request) const {
  return DescribePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeResourcePolicyOutcome OrganizationsClient::DescribeResourcePolicy(const DescribeResourcePolicyRequest& request) const {
  return DescribeResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeResponsibilityTransferOutcome OrganizationsClient::DescribeResponsibilityTransfer(
    const DescribeResponsibilityTransferRequest& request) const {
  return DescribeResponsibilityTransferOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachPolicyOutcome OrganizationsClient::DetachPolicy(const DetachPolicyRequest& request) const {
  return DetachPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableAWSServiceAccessOutcome OrganizationsClient::DisableAWSServiceAccess(const DisableAWSServiceAccessRequest& request) const {
  return DisableAWSServiceAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisablePolicyTypeOutcome OrganizationsClient::DisablePolicyType(const DisablePolicyTypeRequest& request) const {
  return DisablePolicyTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableAWSServiceAccessOutcome OrganizationsClient::EnableAWSServiceAccess(const EnableAWSServiceAccessRequest& request) const {
  return EnableAWSServiceAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableAllFeaturesOutcome OrganizationsClient::EnableAllFeatures(const EnableAllFeaturesRequest& request) const {
  return EnableAllFeaturesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnablePolicyTypeOutcome OrganizationsClient::EnablePolicyType(const EnablePolicyTypeRequest& request) const {
  return EnablePolicyTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

InviteAccountToOrganizationOutcome OrganizationsClient::InviteAccountToOrganization(
    const InviteAccountToOrganizationRequest& request) const {
  return InviteAccountToOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

InviteOrganizationToTransferResponsibilityOutcome OrganizationsClient::InviteOrganizationToTransferResponsibility(
    const InviteOrganizationToTransferResponsibilityRequest& request) const {
  return InviteOrganizationToTransferResponsibilityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

LeaveOrganizationOutcome OrganizationsClient::LeaveOrganization(const LeaveOrganizationRequest& request) const {
  return LeaveOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAWSServiceAccessForOrganizationOutcome OrganizationsClient::ListAWSServiceAccessForOrganization(
    const ListAWSServiceAccessForOrganizationRequest& request) const {
  return ListAWSServiceAccessForOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAccountsOutcome OrganizationsClient::ListAccounts(const ListAccountsRequest& request) const {
  return ListAccountsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAccountsForParentOutcome OrganizationsClient::ListAccountsForParent(const ListAccountsForParentRequest& request) const {
  return ListAccountsForParentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAccountsWithInvalidEffectivePolicyOutcome OrganizationsClient::ListAccountsWithInvalidEffectivePolicy(
    const ListAccountsWithInvalidEffectivePolicyRequest& request) const {
  return ListAccountsWithInvalidEffectivePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListChildrenOutcome OrganizationsClient::ListChildren(const ListChildrenRequest& request) const {
  return ListChildrenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCreateAccountStatusOutcome OrganizationsClient::ListCreateAccountStatus(const ListCreateAccountStatusRequest& request) const {
  return ListCreateAccountStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDelegatedAdministratorsOutcome OrganizationsClient::ListDelegatedAdministrators(
    const ListDelegatedAdministratorsRequest& request) const {
  return ListDelegatedAdministratorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDelegatedServicesForAccountOutcome OrganizationsClient::ListDelegatedServicesForAccount(
    const ListDelegatedServicesForAccountRequest& request) const {
  return ListDelegatedServicesForAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEffectivePolicyValidationErrorsOutcome OrganizationsClient::ListEffectivePolicyValidationErrors(
    const ListEffectivePolicyValidationErrorsRequest& request) const {
  return ListEffectivePolicyValidationErrorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListHandshakesForAccountOutcome OrganizationsClient::ListHandshakesForAccount(const ListHandshakesForAccountRequest& request) const {
  return ListHandshakesForAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListHandshakesForOrganizationOutcome OrganizationsClient::ListHandshakesForOrganization(
    const ListHandshakesForOrganizationRequest& request) const {
  return ListHandshakesForOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInboundResponsibilityTransfersOutcome OrganizationsClient::ListInboundResponsibilityTransfers(
    const ListInboundResponsibilityTransfersRequest& request) const {
  return ListInboundResponsibilityTransfersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOrganizationalUnitsForParentOutcome OrganizationsClient::ListOrganizationalUnitsForParent(
    const ListOrganizationalUnitsForParentRequest& request) const {
  return ListOrganizationalUnitsForParentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOutboundResponsibilityTransfersOutcome OrganizationsClient::ListOutboundResponsibilityTransfers(
    const ListOutboundResponsibilityTransfersRequest& request) const {
  return ListOutboundResponsibilityTransfersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListParentsOutcome OrganizationsClient::ListParents(const ListParentsRequest& request) const {
  return ListParentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPoliciesOutcome OrganizationsClient::ListPolicies(const ListPoliciesRequest& request) const {
  return ListPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPoliciesForTargetOutcome OrganizationsClient::ListPoliciesForTarget(const ListPoliciesForTargetRequest& request) const {
  return ListPoliciesForTargetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRootsOutcome OrganizationsClient::ListRoots(const ListRootsRequest& request) const {
  return ListRootsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome OrganizationsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTargetsForPolicyOutcome OrganizationsClient::ListTargetsForPolicy(const ListTargetsForPolicyRequest& request) const {
  return ListTargetsForPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

MoveAccountOutcome OrganizationsClient::MoveAccount(const MoveAccountRequest& request) const {
  return MoveAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourcePolicyOutcome OrganizationsClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  return PutResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterDelegatedAdministratorOutcome OrganizationsClient::RegisterDelegatedAdministrator(
    const RegisterDelegatedAdministratorRequest& request) const {
  return RegisterDelegatedAdministratorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveAccountFromOrganizationOutcome OrganizationsClient::RemoveAccountFromOrganization(
    const RemoveAccountFromOrganizationRequest& request) const {
  return RemoveAccountFromOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome OrganizationsClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TerminateResponsibilityTransferOutcome OrganizationsClient::TerminateResponsibilityTransfer(
    const TerminateResponsibilityTransferRequest& request) const {
  return TerminateResponsibilityTransferOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome OrganizationsClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateOrganizationalUnitOutcome OrganizationsClient::UpdateOrganizationalUnit(const UpdateOrganizationalUnitRequest& request) const {
  return UpdateOrganizationalUnitOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePolicyOutcome OrganizationsClient::UpdatePolicy(const UpdatePolicyRequest& request) const {
  return UpdatePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateResponsibilityTransferOutcome OrganizationsClient::UpdateResponsibilityTransfer(
    const UpdateResponsibilityTransferRequest& request) const {
  return UpdateResponsibilityTransferOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
