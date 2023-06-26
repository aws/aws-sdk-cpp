/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/sso-admin/SSOAdminClient.h>
#include <aws/sso-admin/SSOAdminErrorMarshaller.h>
#include <aws/sso-admin/SSOAdminEndpointProvider.h>
#include <aws/sso-admin/model/AttachCustomerManagedPolicyReferenceToPermissionSetRequest.h>
#include <aws/sso-admin/model/AttachManagedPolicyToPermissionSetRequest.h>
#include <aws/sso-admin/model/CreateAccountAssignmentRequest.h>
#include <aws/sso-admin/model/CreateInstanceAccessControlAttributeConfigurationRequest.h>
#include <aws/sso-admin/model/CreatePermissionSetRequest.h>
#include <aws/sso-admin/model/DeleteAccountAssignmentRequest.h>
#include <aws/sso-admin/model/DeleteInlinePolicyFromPermissionSetRequest.h>
#include <aws/sso-admin/model/DeleteInstanceAccessControlAttributeConfigurationRequest.h>
#include <aws/sso-admin/model/DeletePermissionSetRequest.h>
#include <aws/sso-admin/model/DeletePermissionsBoundaryFromPermissionSetRequest.h>
#include <aws/sso-admin/model/DescribeAccountAssignmentCreationStatusRequest.h>
#include <aws/sso-admin/model/DescribeAccountAssignmentDeletionStatusRequest.h>
#include <aws/sso-admin/model/DescribeInstanceAccessControlAttributeConfigurationRequest.h>
#include <aws/sso-admin/model/DescribePermissionSetRequest.h>
#include <aws/sso-admin/model/DescribePermissionSetProvisioningStatusRequest.h>
#include <aws/sso-admin/model/DetachCustomerManagedPolicyReferenceFromPermissionSetRequest.h>
#include <aws/sso-admin/model/DetachManagedPolicyFromPermissionSetRequest.h>
#include <aws/sso-admin/model/GetInlinePolicyForPermissionSetRequest.h>
#include <aws/sso-admin/model/GetPermissionsBoundaryForPermissionSetRequest.h>
#include <aws/sso-admin/model/ListAccountAssignmentCreationStatusRequest.h>
#include <aws/sso-admin/model/ListAccountAssignmentDeletionStatusRequest.h>
#include <aws/sso-admin/model/ListAccountAssignmentsRequest.h>
#include <aws/sso-admin/model/ListAccountsForProvisionedPermissionSetRequest.h>
#include <aws/sso-admin/model/ListCustomerManagedPolicyReferencesInPermissionSetRequest.h>
#include <aws/sso-admin/model/ListInstancesRequest.h>
#include <aws/sso-admin/model/ListManagedPoliciesInPermissionSetRequest.h>
#include <aws/sso-admin/model/ListPermissionSetProvisioningStatusRequest.h>
#include <aws/sso-admin/model/ListPermissionSetsRequest.h>
#include <aws/sso-admin/model/ListPermissionSetsProvisionedToAccountRequest.h>
#include <aws/sso-admin/model/ListTagsForResourceRequest.h>
#include <aws/sso-admin/model/ProvisionPermissionSetRequest.h>
#include <aws/sso-admin/model/PutInlinePolicyToPermissionSetRequest.h>
#include <aws/sso-admin/model/PutPermissionsBoundaryToPermissionSetRequest.h>
#include <aws/sso-admin/model/TagResourceRequest.h>
#include <aws/sso-admin/model/UntagResourceRequest.h>
#include <aws/sso-admin/model/UpdateInstanceAccessControlAttributeConfigurationRequest.h>
#include <aws/sso-admin/model/UpdatePermissionSetRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SSOAdmin;
using namespace Aws::SSOAdmin::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* SSOAdminClient::SERVICE_NAME = "sso";
const char* SSOAdminClient::ALLOCATION_TAG = "SSOAdminClient";

SSOAdminClient::SSOAdminClient(const SSOAdmin::SSOAdminClientConfiguration& clientConfiguration,
                               std::shared_ptr<SSOAdminEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSOAdminErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SSOAdminClient::SSOAdminClient(const AWSCredentials& credentials,
                               std::shared_ptr<SSOAdminEndpointProviderBase> endpointProvider,
                               const SSOAdmin::SSOAdminClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSOAdminErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SSOAdminClient::SSOAdminClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<SSOAdminEndpointProviderBase> endpointProvider,
                               const SSOAdmin::SSOAdminClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSOAdminErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SSOAdminClient::SSOAdminClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSOAdminErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SSOAdminEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SSOAdminClient::SSOAdminClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSOAdminErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SSOAdminEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SSOAdminClient::SSOAdminClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SSOAdminErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SSOAdminEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SSOAdminClient::~SSOAdminClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<SSOAdminEndpointProviderBase>& SSOAdminClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SSOAdminClient::init(const SSOAdmin::SSOAdminClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SSO Admin");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SSOAdminClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AttachCustomerManagedPolicyReferenceToPermissionSetOutcome SSOAdminClient::AttachCustomerManagedPolicyReferenceToPermissionSet(const AttachCustomerManagedPolicyReferenceToPermissionSetRequest& request) const
{
  AWS_OPERATION_GUARD(AttachCustomerManagedPolicyReferenceToPermissionSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachCustomerManagedPolicyReferenceToPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachCustomerManagedPolicyReferenceToPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachCustomerManagedPolicyReferenceToPermissionSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AttachManagedPolicyToPermissionSetOutcome SSOAdminClient::AttachManagedPolicyToPermissionSet(const AttachManagedPolicyToPermissionSetRequest& request) const
{
  AWS_OPERATION_GUARD(AttachManagedPolicyToPermissionSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachManagedPolicyToPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachManagedPolicyToPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachManagedPolicyToPermissionSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAccountAssignmentOutcome SSOAdminClient::CreateAccountAssignment(const CreateAccountAssignmentRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAccountAssignment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAccountAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAccountAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAccountAssignmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInstanceAccessControlAttributeConfigurationOutcome SSOAdminClient::CreateInstanceAccessControlAttributeConfiguration(const CreateInstanceAccessControlAttributeConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateInstanceAccessControlAttributeConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInstanceAccessControlAttributeConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInstanceAccessControlAttributeConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateInstanceAccessControlAttributeConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePermissionSetOutcome SSOAdminClient::CreatePermissionSet(const CreatePermissionSetRequest& request) const
{
  AWS_OPERATION_GUARD(CreatePermissionSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePermissionSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccountAssignmentOutcome SSOAdminClient::DeleteAccountAssignment(const DeleteAccountAssignmentRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAccountAssignment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccountAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccountAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAccountAssignmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInlinePolicyFromPermissionSetOutcome SSOAdminClient::DeleteInlinePolicyFromPermissionSet(const DeleteInlinePolicyFromPermissionSetRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteInlinePolicyFromPermissionSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInlinePolicyFromPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInlinePolicyFromPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteInlinePolicyFromPermissionSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInstanceAccessControlAttributeConfigurationOutcome SSOAdminClient::DeleteInstanceAccessControlAttributeConfiguration(const DeleteInstanceAccessControlAttributeConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteInstanceAccessControlAttributeConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInstanceAccessControlAttributeConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInstanceAccessControlAttributeConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteInstanceAccessControlAttributeConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePermissionSetOutcome SSOAdminClient::DeletePermissionSet(const DeletePermissionSetRequest& request) const
{
  AWS_OPERATION_GUARD(DeletePermissionSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePermissionSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePermissionsBoundaryFromPermissionSetOutcome SSOAdminClient::DeletePermissionsBoundaryFromPermissionSet(const DeletePermissionsBoundaryFromPermissionSetRequest& request) const
{
  AWS_OPERATION_GUARD(DeletePermissionsBoundaryFromPermissionSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePermissionsBoundaryFromPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePermissionsBoundaryFromPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePermissionsBoundaryFromPermissionSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountAssignmentCreationStatusOutcome SSOAdminClient::DescribeAccountAssignmentCreationStatus(const DescribeAccountAssignmentCreationStatusRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeAccountAssignmentCreationStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountAssignmentCreationStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountAssignmentCreationStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAccountAssignmentCreationStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountAssignmentDeletionStatusOutcome SSOAdminClient::DescribeAccountAssignmentDeletionStatus(const DescribeAccountAssignmentDeletionStatusRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeAccountAssignmentDeletionStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountAssignmentDeletionStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountAssignmentDeletionStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAccountAssignmentDeletionStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstanceAccessControlAttributeConfigurationOutcome SSOAdminClient::DescribeInstanceAccessControlAttributeConfiguration(const DescribeInstanceAccessControlAttributeConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeInstanceAccessControlAttributeConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInstanceAccessControlAttributeConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInstanceAccessControlAttributeConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInstanceAccessControlAttributeConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePermissionSetOutcome SSOAdminClient::DescribePermissionSet(const DescribePermissionSetRequest& request) const
{
  AWS_OPERATION_GUARD(DescribePermissionSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePermissionSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePermissionSetProvisioningStatusOutcome SSOAdminClient::DescribePermissionSetProvisioningStatus(const DescribePermissionSetProvisioningStatusRequest& request) const
{
  AWS_OPERATION_GUARD(DescribePermissionSetProvisioningStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePermissionSetProvisioningStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePermissionSetProvisioningStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePermissionSetProvisioningStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetachCustomerManagedPolicyReferenceFromPermissionSetOutcome SSOAdminClient::DetachCustomerManagedPolicyReferenceFromPermissionSet(const DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& request) const
{
  AWS_OPERATION_GUARD(DetachCustomerManagedPolicyReferenceFromPermissionSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachCustomerManagedPolicyReferenceFromPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachCustomerManagedPolicyReferenceFromPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachCustomerManagedPolicyReferenceFromPermissionSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetachManagedPolicyFromPermissionSetOutcome SSOAdminClient::DetachManagedPolicyFromPermissionSet(const DetachManagedPolicyFromPermissionSetRequest& request) const
{
  AWS_OPERATION_GUARD(DetachManagedPolicyFromPermissionSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachManagedPolicyFromPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachManagedPolicyFromPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachManagedPolicyFromPermissionSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInlinePolicyForPermissionSetOutcome SSOAdminClient::GetInlinePolicyForPermissionSet(const GetInlinePolicyForPermissionSetRequest& request) const
{
  AWS_OPERATION_GUARD(GetInlinePolicyForPermissionSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInlinePolicyForPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInlinePolicyForPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInlinePolicyForPermissionSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPermissionsBoundaryForPermissionSetOutcome SSOAdminClient::GetPermissionsBoundaryForPermissionSet(const GetPermissionsBoundaryForPermissionSetRequest& request) const
{
  AWS_OPERATION_GUARD(GetPermissionsBoundaryForPermissionSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPermissionsBoundaryForPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPermissionsBoundaryForPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetPermissionsBoundaryForPermissionSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountAssignmentCreationStatusOutcome SSOAdminClient::ListAccountAssignmentCreationStatus(const ListAccountAssignmentCreationStatusRequest& request) const
{
  AWS_OPERATION_GUARD(ListAccountAssignmentCreationStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccountAssignmentCreationStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccountAssignmentCreationStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAccountAssignmentCreationStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountAssignmentDeletionStatusOutcome SSOAdminClient::ListAccountAssignmentDeletionStatus(const ListAccountAssignmentDeletionStatusRequest& request) const
{
  AWS_OPERATION_GUARD(ListAccountAssignmentDeletionStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccountAssignmentDeletionStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccountAssignmentDeletionStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAccountAssignmentDeletionStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountAssignmentsOutcome SSOAdminClient::ListAccountAssignments(const ListAccountAssignmentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAccountAssignments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccountAssignments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccountAssignments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAccountAssignmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccountsForProvisionedPermissionSetOutcome SSOAdminClient::ListAccountsForProvisionedPermissionSet(const ListAccountsForProvisionedPermissionSetRequest& request) const
{
  AWS_OPERATION_GUARD(ListAccountsForProvisionedPermissionSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccountsForProvisionedPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccountsForProvisionedPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAccountsForProvisionedPermissionSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomerManagedPolicyReferencesInPermissionSetOutcome SSOAdminClient::ListCustomerManagedPolicyReferencesInPermissionSet(const ListCustomerManagedPolicyReferencesInPermissionSetRequest& request) const
{
  AWS_OPERATION_GUARD(ListCustomerManagedPolicyReferencesInPermissionSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCustomerManagedPolicyReferencesInPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCustomerManagedPolicyReferencesInPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListCustomerManagedPolicyReferencesInPermissionSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInstancesOutcome SSOAdminClient::ListInstances(const ListInstancesRequest& request) const
{
  AWS_OPERATION_GUARD(ListInstances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListManagedPoliciesInPermissionSetOutcome SSOAdminClient::ListManagedPoliciesInPermissionSet(const ListManagedPoliciesInPermissionSetRequest& request) const
{
  AWS_OPERATION_GUARD(ListManagedPoliciesInPermissionSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListManagedPoliciesInPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListManagedPoliciesInPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListManagedPoliciesInPermissionSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPermissionSetProvisioningStatusOutcome SSOAdminClient::ListPermissionSetProvisioningStatus(const ListPermissionSetProvisioningStatusRequest& request) const
{
  AWS_OPERATION_GUARD(ListPermissionSetProvisioningStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPermissionSetProvisioningStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPermissionSetProvisioningStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPermissionSetProvisioningStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPermissionSetsOutcome SSOAdminClient::ListPermissionSets(const ListPermissionSetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListPermissionSets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPermissionSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPermissionSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPermissionSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPermissionSetsProvisionedToAccountOutcome SSOAdminClient::ListPermissionSetsProvisionedToAccount(const ListPermissionSetsProvisionedToAccountRequest& request) const
{
  AWS_OPERATION_GUARD(ListPermissionSetsProvisionedToAccount);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPermissionSetsProvisionedToAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPermissionSetsProvisionedToAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPermissionSetsProvisionedToAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome SSOAdminClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ProvisionPermissionSetOutcome SSOAdminClient::ProvisionPermissionSet(const ProvisionPermissionSetRequest& request) const
{
  AWS_OPERATION_GUARD(ProvisionPermissionSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ProvisionPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ProvisionPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ProvisionPermissionSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutInlinePolicyToPermissionSetOutcome SSOAdminClient::PutInlinePolicyToPermissionSet(const PutInlinePolicyToPermissionSetRequest& request) const
{
  AWS_OPERATION_GUARD(PutInlinePolicyToPermissionSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutInlinePolicyToPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutInlinePolicyToPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutInlinePolicyToPermissionSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutPermissionsBoundaryToPermissionSetOutcome SSOAdminClient::PutPermissionsBoundaryToPermissionSet(const PutPermissionsBoundaryToPermissionSetRequest& request) const
{
  AWS_OPERATION_GUARD(PutPermissionsBoundaryToPermissionSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutPermissionsBoundaryToPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutPermissionsBoundaryToPermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutPermissionsBoundaryToPermissionSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome SSOAdminClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome SSOAdminClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateInstanceAccessControlAttributeConfigurationOutcome SSOAdminClient::UpdateInstanceAccessControlAttributeConfiguration(const UpdateInstanceAccessControlAttributeConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateInstanceAccessControlAttributeConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateInstanceAccessControlAttributeConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateInstanceAccessControlAttributeConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateInstanceAccessControlAttributeConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePermissionSetOutcome SSOAdminClient::UpdatePermissionSet(const UpdatePermissionSetRequest& request) const
{
  AWS_OPERATION_GUARD(UpdatePermissionSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePermissionSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePermissionSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

