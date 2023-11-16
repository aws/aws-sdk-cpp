/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/sso-admin/SSOAdminErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/sso-admin/SSOAdminEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SSOAdminClient header */
#include <aws/sso-admin/model/AttachCustomerManagedPolicyReferenceToPermissionSetResult.h>
#include <aws/sso-admin/model/AttachManagedPolicyToPermissionSetResult.h>
#include <aws/sso-admin/model/CreateAccountAssignmentResult.h>
#include <aws/sso-admin/model/CreateApplicationResult.h>
#include <aws/sso-admin/model/CreateApplicationAssignmentResult.h>
#include <aws/sso-admin/model/CreateInstanceResult.h>
#include <aws/sso-admin/model/CreateInstanceAccessControlAttributeConfigurationResult.h>
#include <aws/sso-admin/model/CreatePermissionSetResult.h>
#include <aws/sso-admin/model/CreateTrustedTokenIssuerResult.h>
#include <aws/sso-admin/model/DeleteAccountAssignmentResult.h>
#include <aws/sso-admin/model/DeleteApplicationResult.h>
#include <aws/sso-admin/model/DeleteApplicationAssignmentResult.h>
#include <aws/sso-admin/model/DeleteInlinePolicyFromPermissionSetResult.h>
#include <aws/sso-admin/model/DeleteInstanceResult.h>
#include <aws/sso-admin/model/DeleteInstanceAccessControlAttributeConfigurationResult.h>
#include <aws/sso-admin/model/DeletePermissionSetResult.h>
#include <aws/sso-admin/model/DeletePermissionsBoundaryFromPermissionSetResult.h>
#include <aws/sso-admin/model/DeleteTrustedTokenIssuerResult.h>
#include <aws/sso-admin/model/DescribeAccountAssignmentCreationStatusResult.h>
#include <aws/sso-admin/model/DescribeAccountAssignmentDeletionStatusResult.h>
#include <aws/sso-admin/model/DescribeApplicationResult.h>
#include <aws/sso-admin/model/DescribeApplicationAssignmentResult.h>
#include <aws/sso-admin/model/DescribeApplicationProviderResult.h>
#include <aws/sso-admin/model/DescribeInstanceResult.h>
#include <aws/sso-admin/model/DescribeInstanceAccessControlAttributeConfigurationResult.h>
#include <aws/sso-admin/model/DescribePermissionSetResult.h>
#include <aws/sso-admin/model/DescribePermissionSetProvisioningStatusResult.h>
#include <aws/sso-admin/model/DescribeTrustedTokenIssuerResult.h>
#include <aws/sso-admin/model/DetachCustomerManagedPolicyReferenceFromPermissionSetResult.h>
#include <aws/sso-admin/model/DetachManagedPolicyFromPermissionSetResult.h>
#include <aws/sso-admin/model/GetApplicationAccessScopeResult.h>
#include <aws/sso-admin/model/GetApplicationAssignmentConfigurationResult.h>
#include <aws/sso-admin/model/GetApplicationAuthenticationMethodResult.h>
#include <aws/sso-admin/model/GetApplicationGrantResult.h>
#include <aws/sso-admin/model/GetInlinePolicyForPermissionSetResult.h>
#include <aws/sso-admin/model/GetPermissionsBoundaryForPermissionSetResult.h>
#include <aws/sso-admin/model/ListAccountAssignmentCreationStatusResult.h>
#include <aws/sso-admin/model/ListAccountAssignmentDeletionStatusResult.h>
#include <aws/sso-admin/model/ListAccountAssignmentsResult.h>
#include <aws/sso-admin/model/ListAccountAssignmentsForPrincipalResult.h>
#include <aws/sso-admin/model/ListAccountsForProvisionedPermissionSetResult.h>
#include <aws/sso-admin/model/ListApplicationAccessScopesResult.h>
#include <aws/sso-admin/model/ListApplicationAssignmentsResult.h>
#include <aws/sso-admin/model/ListApplicationAssignmentsForPrincipalResult.h>
#include <aws/sso-admin/model/ListApplicationAuthenticationMethodsResult.h>
#include <aws/sso-admin/model/ListApplicationGrantsResult.h>
#include <aws/sso-admin/model/ListApplicationProvidersResult.h>
#include <aws/sso-admin/model/ListApplicationsResult.h>
#include <aws/sso-admin/model/ListCustomerManagedPolicyReferencesInPermissionSetResult.h>
#include <aws/sso-admin/model/ListInstancesResult.h>
#include <aws/sso-admin/model/ListManagedPoliciesInPermissionSetResult.h>
#include <aws/sso-admin/model/ListPermissionSetProvisioningStatusResult.h>
#include <aws/sso-admin/model/ListPermissionSetsResult.h>
#include <aws/sso-admin/model/ListPermissionSetsProvisionedToAccountResult.h>
#include <aws/sso-admin/model/ListTagsForResourceResult.h>
#include <aws/sso-admin/model/ListTrustedTokenIssuersResult.h>
#include <aws/sso-admin/model/ProvisionPermissionSetResult.h>
#include <aws/sso-admin/model/PutApplicationAssignmentConfigurationResult.h>
#include <aws/sso-admin/model/PutInlinePolicyToPermissionSetResult.h>
#include <aws/sso-admin/model/PutPermissionsBoundaryToPermissionSetResult.h>
#include <aws/sso-admin/model/TagResourceResult.h>
#include <aws/sso-admin/model/UntagResourceResult.h>
#include <aws/sso-admin/model/UpdateApplicationResult.h>
#include <aws/sso-admin/model/UpdateInstanceResult.h>
#include <aws/sso-admin/model/UpdateInstanceAccessControlAttributeConfigurationResult.h>
#include <aws/sso-admin/model/UpdatePermissionSetResult.h>
#include <aws/sso-admin/model/UpdateTrustedTokenIssuerResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in SSOAdminClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace SSOAdmin
  {
    using SSOAdminClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SSOAdminEndpointProviderBase = Aws::SSOAdmin::Endpoint::SSOAdminEndpointProviderBase;
    using SSOAdminEndpointProvider = Aws::SSOAdmin::Endpoint::SSOAdminEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SSOAdminClient header */
      class AttachCustomerManagedPolicyReferenceToPermissionSetRequest;
      class AttachManagedPolicyToPermissionSetRequest;
      class CreateAccountAssignmentRequest;
      class CreateApplicationRequest;
      class CreateApplicationAssignmentRequest;
      class CreateInstanceRequest;
      class CreateInstanceAccessControlAttributeConfigurationRequest;
      class CreatePermissionSetRequest;
      class CreateTrustedTokenIssuerRequest;
      class DeleteAccountAssignmentRequest;
      class DeleteApplicationRequest;
      class DeleteApplicationAccessScopeRequest;
      class DeleteApplicationAssignmentRequest;
      class DeleteApplicationAuthenticationMethodRequest;
      class DeleteApplicationGrantRequest;
      class DeleteInlinePolicyFromPermissionSetRequest;
      class DeleteInstanceRequest;
      class DeleteInstanceAccessControlAttributeConfigurationRequest;
      class DeletePermissionSetRequest;
      class DeletePermissionsBoundaryFromPermissionSetRequest;
      class DeleteTrustedTokenIssuerRequest;
      class DescribeAccountAssignmentCreationStatusRequest;
      class DescribeAccountAssignmentDeletionStatusRequest;
      class DescribeApplicationRequest;
      class DescribeApplicationAssignmentRequest;
      class DescribeApplicationProviderRequest;
      class DescribeInstanceRequest;
      class DescribeInstanceAccessControlAttributeConfigurationRequest;
      class DescribePermissionSetRequest;
      class DescribePermissionSetProvisioningStatusRequest;
      class DescribeTrustedTokenIssuerRequest;
      class DetachCustomerManagedPolicyReferenceFromPermissionSetRequest;
      class DetachManagedPolicyFromPermissionSetRequest;
      class GetApplicationAccessScopeRequest;
      class GetApplicationAssignmentConfigurationRequest;
      class GetApplicationAuthenticationMethodRequest;
      class GetApplicationGrantRequest;
      class GetInlinePolicyForPermissionSetRequest;
      class GetPermissionsBoundaryForPermissionSetRequest;
      class ListAccountAssignmentCreationStatusRequest;
      class ListAccountAssignmentDeletionStatusRequest;
      class ListAccountAssignmentsRequest;
      class ListAccountAssignmentsForPrincipalRequest;
      class ListAccountsForProvisionedPermissionSetRequest;
      class ListApplicationAccessScopesRequest;
      class ListApplicationAssignmentsRequest;
      class ListApplicationAssignmentsForPrincipalRequest;
      class ListApplicationAuthenticationMethodsRequest;
      class ListApplicationGrantsRequest;
      class ListApplicationProvidersRequest;
      class ListApplicationsRequest;
      class ListCustomerManagedPolicyReferencesInPermissionSetRequest;
      class ListInstancesRequest;
      class ListManagedPoliciesInPermissionSetRequest;
      class ListPermissionSetProvisioningStatusRequest;
      class ListPermissionSetsRequest;
      class ListPermissionSetsProvisionedToAccountRequest;
      class ListTagsForResourceRequest;
      class ListTrustedTokenIssuersRequest;
      class ProvisionPermissionSetRequest;
      class PutApplicationAccessScopeRequest;
      class PutApplicationAssignmentConfigurationRequest;
      class PutApplicationAuthenticationMethodRequest;
      class PutApplicationGrantRequest;
      class PutInlinePolicyToPermissionSetRequest;
      class PutPermissionsBoundaryToPermissionSetRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateApplicationRequest;
      class UpdateInstanceRequest;
      class UpdateInstanceAccessControlAttributeConfigurationRequest;
      class UpdatePermissionSetRequest;
      class UpdateTrustedTokenIssuerRequest;
      /* End of service model forward declarations required in SSOAdminClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AttachCustomerManagedPolicyReferenceToPermissionSetResult, SSOAdminError> AttachCustomerManagedPolicyReferenceToPermissionSetOutcome;
      typedef Aws::Utils::Outcome<AttachManagedPolicyToPermissionSetResult, SSOAdminError> AttachManagedPolicyToPermissionSetOutcome;
      typedef Aws::Utils::Outcome<CreateAccountAssignmentResult, SSOAdminError> CreateAccountAssignmentOutcome;
      typedef Aws::Utils::Outcome<CreateApplicationResult, SSOAdminError> CreateApplicationOutcome;
      typedef Aws::Utils::Outcome<CreateApplicationAssignmentResult, SSOAdminError> CreateApplicationAssignmentOutcome;
      typedef Aws::Utils::Outcome<CreateInstanceResult, SSOAdminError> CreateInstanceOutcome;
      typedef Aws::Utils::Outcome<CreateInstanceAccessControlAttributeConfigurationResult, SSOAdminError> CreateInstanceAccessControlAttributeConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreatePermissionSetResult, SSOAdminError> CreatePermissionSetOutcome;
      typedef Aws::Utils::Outcome<CreateTrustedTokenIssuerResult, SSOAdminError> CreateTrustedTokenIssuerOutcome;
      typedef Aws::Utils::Outcome<DeleteAccountAssignmentResult, SSOAdminError> DeleteAccountAssignmentOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationResult, SSOAdminError> DeleteApplicationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SSOAdminError> DeleteApplicationAccessScopeOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationAssignmentResult, SSOAdminError> DeleteApplicationAssignmentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SSOAdminError> DeleteApplicationAuthenticationMethodOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SSOAdminError> DeleteApplicationGrantOutcome;
      typedef Aws::Utils::Outcome<DeleteInlinePolicyFromPermissionSetResult, SSOAdminError> DeleteInlinePolicyFromPermissionSetOutcome;
      typedef Aws::Utils::Outcome<DeleteInstanceResult, SSOAdminError> DeleteInstanceOutcome;
      typedef Aws::Utils::Outcome<DeleteInstanceAccessControlAttributeConfigurationResult, SSOAdminError> DeleteInstanceAccessControlAttributeConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeletePermissionSetResult, SSOAdminError> DeletePermissionSetOutcome;
      typedef Aws::Utils::Outcome<DeletePermissionsBoundaryFromPermissionSetResult, SSOAdminError> DeletePermissionsBoundaryFromPermissionSetOutcome;
      typedef Aws::Utils::Outcome<DeleteTrustedTokenIssuerResult, SSOAdminError> DeleteTrustedTokenIssuerOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountAssignmentCreationStatusResult, SSOAdminError> DescribeAccountAssignmentCreationStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountAssignmentDeletionStatusResult, SSOAdminError> DescribeAccountAssignmentDeletionStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeApplicationResult, SSOAdminError> DescribeApplicationOutcome;
      typedef Aws::Utils::Outcome<DescribeApplicationAssignmentResult, SSOAdminError> DescribeApplicationAssignmentOutcome;
      typedef Aws::Utils::Outcome<DescribeApplicationProviderResult, SSOAdminError> DescribeApplicationProviderOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceResult, SSOAdminError> DescribeInstanceOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceAccessControlAttributeConfigurationResult, SSOAdminError> DescribeInstanceAccessControlAttributeConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribePermissionSetResult, SSOAdminError> DescribePermissionSetOutcome;
      typedef Aws::Utils::Outcome<DescribePermissionSetProvisioningStatusResult, SSOAdminError> DescribePermissionSetProvisioningStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeTrustedTokenIssuerResult, SSOAdminError> DescribeTrustedTokenIssuerOutcome;
      typedef Aws::Utils::Outcome<DetachCustomerManagedPolicyReferenceFromPermissionSetResult, SSOAdminError> DetachCustomerManagedPolicyReferenceFromPermissionSetOutcome;
      typedef Aws::Utils::Outcome<DetachManagedPolicyFromPermissionSetResult, SSOAdminError> DetachManagedPolicyFromPermissionSetOutcome;
      typedef Aws::Utils::Outcome<GetApplicationAccessScopeResult, SSOAdminError> GetApplicationAccessScopeOutcome;
      typedef Aws::Utils::Outcome<GetApplicationAssignmentConfigurationResult, SSOAdminError> GetApplicationAssignmentConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetApplicationAuthenticationMethodResult, SSOAdminError> GetApplicationAuthenticationMethodOutcome;
      typedef Aws::Utils::Outcome<GetApplicationGrantResult, SSOAdminError> GetApplicationGrantOutcome;
      typedef Aws::Utils::Outcome<GetInlinePolicyForPermissionSetResult, SSOAdminError> GetInlinePolicyForPermissionSetOutcome;
      typedef Aws::Utils::Outcome<GetPermissionsBoundaryForPermissionSetResult, SSOAdminError> GetPermissionsBoundaryForPermissionSetOutcome;
      typedef Aws::Utils::Outcome<ListAccountAssignmentCreationStatusResult, SSOAdminError> ListAccountAssignmentCreationStatusOutcome;
      typedef Aws::Utils::Outcome<ListAccountAssignmentDeletionStatusResult, SSOAdminError> ListAccountAssignmentDeletionStatusOutcome;
      typedef Aws::Utils::Outcome<ListAccountAssignmentsResult, SSOAdminError> ListAccountAssignmentsOutcome;
      typedef Aws::Utils::Outcome<ListAccountAssignmentsForPrincipalResult, SSOAdminError> ListAccountAssignmentsForPrincipalOutcome;
      typedef Aws::Utils::Outcome<ListAccountsForProvisionedPermissionSetResult, SSOAdminError> ListAccountsForProvisionedPermissionSetOutcome;
      typedef Aws::Utils::Outcome<ListApplicationAccessScopesResult, SSOAdminError> ListApplicationAccessScopesOutcome;
      typedef Aws::Utils::Outcome<ListApplicationAssignmentsResult, SSOAdminError> ListApplicationAssignmentsOutcome;
      typedef Aws::Utils::Outcome<ListApplicationAssignmentsForPrincipalResult, SSOAdminError> ListApplicationAssignmentsForPrincipalOutcome;
      typedef Aws::Utils::Outcome<ListApplicationAuthenticationMethodsResult, SSOAdminError> ListApplicationAuthenticationMethodsOutcome;
      typedef Aws::Utils::Outcome<ListApplicationGrantsResult, SSOAdminError> ListApplicationGrantsOutcome;
      typedef Aws::Utils::Outcome<ListApplicationProvidersResult, SSOAdminError> ListApplicationProvidersOutcome;
      typedef Aws::Utils::Outcome<ListApplicationsResult, SSOAdminError> ListApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListCustomerManagedPolicyReferencesInPermissionSetResult, SSOAdminError> ListCustomerManagedPolicyReferencesInPermissionSetOutcome;
      typedef Aws::Utils::Outcome<ListInstancesResult, SSOAdminError> ListInstancesOutcome;
      typedef Aws::Utils::Outcome<ListManagedPoliciesInPermissionSetResult, SSOAdminError> ListManagedPoliciesInPermissionSetOutcome;
      typedef Aws::Utils::Outcome<ListPermissionSetProvisioningStatusResult, SSOAdminError> ListPermissionSetProvisioningStatusOutcome;
      typedef Aws::Utils::Outcome<ListPermissionSetsResult, SSOAdminError> ListPermissionSetsOutcome;
      typedef Aws::Utils::Outcome<ListPermissionSetsProvisionedToAccountResult, SSOAdminError> ListPermissionSetsProvisionedToAccountOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SSOAdminError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTrustedTokenIssuersResult, SSOAdminError> ListTrustedTokenIssuersOutcome;
      typedef Aws::Utils::Outcome<ProvisionPermissionSetResult, SSOAdminError> ProvisionPermissionSetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SSOAdminError> PutApplicationAccessScopeOutcome;
      typedef Aws::Utils::Outcome<PutApplicationAssignmentConfigurationResult, SSOAdminError> PutApplicationAssignmentConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SSOAdminError> PutApplicationAuthenticationMethodOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SSOAdminError> PutApplicationGrantOutcome;
      typedef Aws::Utils::Outcome<PutInlinePolicyToPermissionSetResult, SSOAdminError> PutInlinePolicyToPermissionSetOutcome;
      typedef Aws::Utils::Outcome<PutPermissionsBoundaryToPermissionSetResult, SSOAdminError> PutPermissionsBoundaryToPermissionSetOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, SSOAdminError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, SSOAdminError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationResult, SSOAdminError> UpdateApplicationOutcome;
      typedef Aws::Utils::Outcome<UpdateInstanceResult, SSOAdminError> UpdateInstanceOutcome;
      typedef Aws::Utils::Outcome<UpdateInstanceAccessControlAttributeConfigurationResult, SSOAdminError> UpdateInstanceAccessControlAttributeConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdatePermissionSetResult, SSOAdminError> UpdatePermissionSetOutcome;
      typedef Aws::Utils::Outcome<UpdateTrustedTokenIssuerResult, SSOAdminError> UpdateTrustedTokenIssuerOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AttachCustomerManagedPolicyReferenceToPermissionSetOutcome> AttachCustomerManagedPolicyReferenceToPermissionSetOutcomeCallable;
      typedef std::future<AttachManagedPolicyToPermissionSetOutcome> AttachManagedPolicyToPermissionSetOutcomeCallable;
      typedef std::future<CreateAccountAssignmentOutcome> CreateAccountAssignmentOutcomeCallable;
      typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
      typedef std::future<CreateApplicationAssignmentOutcome> CreateApplicationAssignmentOutcomeCallable;
      typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
      typedef std::future<CreateInstanceAccessControlAttributeConfigurationOutcome> CreateInstanceAccessControlAttributeConfigurationOutcomeCallable;
      typedef std::future<CreatePermissionSetOutcome> CreatePermissionSetOutcomeCallable;
      typedef std::future<CreateTrustedTokenIssuerOutcome> CreateTrustedTokenIssuerOutcomeCallable;
      typedef std::future<DeleteAccountAssignmentOutcome> DeleteAccountAssignmentOutcomeCallable;
      typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
      typedef std::future<DeleteApplicationAccessScopeOutcome> DeleteApplicationAccessScopeOutcomeCallable;
      typedef std::future<DeleteApplicationAssignmentOutcome> DeleteApplicationAssignmentOutcomeCallable;
      typedef std::future<DeleteApplicationAuthenticationMethodOutcome> DeleteApplicationAuthenticationMethodOutcomeCallable;
      typedef std::future<DeleteApplicationGrantOutcome> DeleteApplicationGrantOutcomeCallable;
      typedef std::future<DeleteInlinePolicyFromPermissionSetOutcome> DeleteInlinePolicyFromPermissionSetOutcomeCallable;
      typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
      typedef std::future<DeleteInstanceAccessControlAttributeConfigurationOutcome> DeleteInstanceAccessControlAttributeConfigurationOutcomeCallable;
      typedef std::future<DeletePermissionSetOutcome> DeletePermissionSetOutcomeCallable;
      typedef std::future<DeletePermissionsBoundaryFromPermissionSetOutcome> DeletePermissionsBoundaryFromPermissionSetOutcomeCallable;
      typedef std::future<DeleteTrustedTokenIssuerOutcome> DeleteTrustedTokenIssuerOutcomeCallable;
      typedef std::future<DescribeAccountAssignmentCreationStatusOutcome> DescribeAccountAssignmentCreationStatusOutcomeCallable;
      typedef std::future<DescribeAccountAssignmentDeletionStatusOutcome> DescribeAccountAssignmentDeletionStatusOutcomeCallable;
      typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
      typedef std::future<DescribeApplicationAssignmentOutcome> DescribeApplicationAssignmentOutcomeCallable;
      typedef std::future<DescribeApplicationProviderOutcome> DescribeApplicationProviderOutcomeCallable;
      typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
      typedef std::future<DescribeInstanceAccessControlAttributeConfigurationOutcome> DescribeInstanceAccessControlAttributeConfigurationOutcomeCallable;
      typedef std::future<DescribePermissionSetOutcome> DescribePermissionSetOutcomeCallable;
      typedef std::future<DescribePermissionSetProvisioningStatusOutcome> DescribePermissionSetProvisioningStatusOutcomeCallable;
      typedef std::future<DescribeTrustedTokenIssuerOutcome> DescribeTrustedTokenIssuerOutcomeCallable;
      typedef std::future<DetachCustomerManagedPolicyReferenceFromPermissionSetOutcome> DetachCustomerManagedPolicyReferenceFromPermissionSetOutcomeCallable;
      typedef std::future<DetachManagedPolicyFromPermissionSetOutcome> DetachManagedPolicyFromPermissionSetOutcomeCallable;
      typedef std::future<GetApplicationAccessScopeOutcome> GetApplicationAccessScopeOutcomeCallable;
      typedef std::future<GetApplicationAssignmentConfigurationOutcome> GetApplicationAssignmentConfigurationOutcomeCallable;
      typedef std::future<GetApplicationAuthenticationMethodOutcome> GetApplicationAuthenticationMethodOutcomeCallable;
      typedef std::future<GetApplicationGrantOutcome> GetApplicationGrantOutcomeCallable;
      typedef std::future<GetInlinePolicyForPermissionSetOutcome> GetInlinePolicyForPermissionSetOutcomeCallable;
      typedef std::future<GetPermissionsBoundaryForPermissionSetOutcome> GetPermissionsBoundaryForPermissionSetOutcomeCallable;
      typedef std::future<ListAccountAssignmentCreationStatusOutcome> ListAccountAssignmentCreationStatusOutcomeCallable;
      typedef std::future<ListAccountAssignmentDeletionStatusOutcome> ListAccountAssignmentDeletionStatusOutcomeCallable;
      typedef std::future<ListAccountAssignmentsOutcome> ListAccountAssignmentsOutcomeCallable;
      typedef std::future<ListAccountAssignmentsForPrincipalOutcome> ListAccountAssignmentsForPrincipalOutcomeCallable;
      typedef std::future<ListAccountsForProvisionedPermissionSetOutcome> ListAccountsForProvisionedPermissionSetOutcomeCallable;
      typedef std::future<ListApplicationAccessScopesOutcome> ListApplicationAccessScopesOutcomeCallable;
      typedef std::future<ListApplicationAssignmentsOutcome> ListApplicationAssignmentsOutcomeCallable;
      typedef std::future<ListApplicationAssignmentsForPrincipalOutcome> ListApplicationAssignmentsForPrincipalOutcomeCallable;
      typedef std::future<ListApplicationAuthenticationMethodsOutcome> ListApplicationAuthenticationMethodsOutcomeCallable;
      typedef std::future<ListApplicationGrantsOutcome> ListApplicationGrantsOutcomeCallable;
      typedef std::future<ListApplicationProvidersOutcome> ListApplicationProvidersOutcomeCallable;
      typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
      typedef std::future<ListCustomerManagedPolicyReferencesInPermissionSetOutcome> ListCustomerManagedPolicyReferencesInPermissionSetOutcomeCallable;
      typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
      typedef std::future<ListManagedPoliciesInPermissionSetOutcome> ListManagedPoliciesInPermissionSetOutcomeCallable;
      typedef std::future<ListPermissionSetProvisioningStatusOutcome> ListPermissionSetProvisioningStatusOutcomeCallable;
      typedef std::future<ListPermissionSetsOutcome> ListPermissionSetsOutcomeCallable;
      typedef std::future<ListPermissionSetsProvisionedToAccountOutcome> ListPermissionSetsProvisionedToAccountOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTrustedTokenIssuersOutcome> ListTrustedTokenIssuersOutcomeCallable;
      typedef std::future<ProvisionPermissionSetOutcome> ProvisionPermissionSetOutcomeCallable;
      typedef std::future<PutApplicationAccessScopeOutcome> PutApplicationAccessScopeOutcomeCallable;
      typedef std::future<PutApplicationAssignmentConfigurationOutcome> PutApplicationAssignmentConfigurationOutcomeCallable;
      typedef std::future<PutApplicationAuthenticationMethodOutcome> PutApplicationAuthenticationMethodOutcomeCallable;
      typedef std::future<PutApplicationGrantOutcome> PutApplicationGrantOutcomeCallable;
      typedef std::future<PutInlinePolicyToPermissionSetOutcome> PutInlinePolicyToPermissionSetOutcomeCallable;
      typedef std::future<PutPermissionsBoundaryToPermissionSetOutcome> PutPermissionsBoundaryToPermissionSetOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
      typedef std::future<UpdateInstanceOutcome> UpdateInstanceOutcomeCallable;
      typedef std::future<UpdateInstanceAccessControlAttributeConfigurationOutcome> UpdateInstanceAccessControlAttributeConfigurationOutcomeCallable;
      typedef std::future<UpdatePermissionSetOutcome> UpdatePermissionSetOutcomeCallable;
      typedef std::future<UpdateTrustedTokenIssuerOutcome> UpdateTrustedTokenIssuerOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SSOAdminClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SSOAdminClient*, const Model::AttachCustomerManagedPolicyReferenceToPermissionSetRequest&, const Model::AttachCustomerManagedPolicyReferenceToPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachCustomerManagedPolicyReferenceToPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::AttachManagedPolicyToPermissionSetRequest&, const Model::AttachManagedPolicyToPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachManagedPolicyToPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::CreateAccountAssignmentRequest&, const Model::CreateAccountAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccountAssignmentResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::CreateApplicationAssignmentRequest&, const Model::CreateApplicationAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationAssignmentResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::CreateInstanceRequest&, const Model::CreateInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInstanceResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::CreateInstanceAccessControlAttributeConfigurationRequest&, const Model::CreateInstanceAccessControlAttributeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInstanceAccessControlAttributeConfigurationResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::CreatePermissionSetRequest&, const Model::CreatePermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::CreateTrustedTokenIssuerRequest&, const Model::CreateTrustedTokenIssuerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrustedTokenIssuerResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeleteAccountAssignmentRequest&, const Model::DeleteAccountAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccountAssignmentResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeleteApplicationAccessScopeRequest&, const Model::DeleteApplicationAccessScopeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationAccessScopeResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeleteApplicationAssignmentRequest&, const Model::DeleteApplicationAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationAssignmentResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeleteApplicationAuthenticationMethodRequest&, const Model::DeleteApplicationAuthenticationMethodOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationAuthenticationMethodResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeleteApplicationGrantRequest&, const Model::DeleteApplicationGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationGrantResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeleteInlinePolicyFromPermissionSetRequest&, const Model::DeleteInlinePolicyFromPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInlinePolicyFromPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeleteInstanceRequest&, const Model::DeleteInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstanceResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeleteInstanceAccessControlAttributeConfigurationRequest&, const Model::DeleteInstanceAccessControlAttributeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstanceAccessControlAttributeConfigurationResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeletePermissionSetRequest&, const Model::DeletePermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeletePermissionsBoundaryFromPermissionSetRequest&, const Model::DeletePermissionsBoundaryFromPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePermissionsBoundaryFromPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeleteTrustedTokenIssuerRequest&, const Model::DeleteTrustedTokenIssuerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrustedTokenIssuerResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DescribeAccountAssignmentCreationStatusRequest&, const Model::DescribeAccountAssignmentCreationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountAssignmentCreationStatusResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DescribeAccountAssignmentDeletionStatusRequest&, const Model::DescribeAccountAssignmentDeletionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountAssignmentDeletionStatusResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DescribeApplicationRequest&, const Model::DescribeApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DescribeApplicationAssignmentRequest&, const Model::DescribeApplicationAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationAssignmentResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DescribeApplicationProviderRequest&, const Model::DescribeApplicationProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationProviderResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DescribeInstanceRequest&, const Model::DescribeInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DescribeInstanceAccessControlAttributeConfigurationRequest&, const Model::DescribeInstanceAccessControlAttributeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceAccessControlAttributeConfigurationResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DescribePermissionSetRequest&, const Model::DescribePermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DescribePermissionSetProvisioningStatusRequest&, const Model::DescribePermissionSetProvisioningStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePermissionSetProvisioningStatusResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DescribeTrustedTokenIssuerRequest&, const Model::DescribeTrustedTokenIssuerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrustedTokenIssuerResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DetachCustomerManagedPolicyReferenceFromPermissionSetRequest&, const Model::DetachCustomerManagedPolicyReferenceFromPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachCustomerManagedPolicyReferenceFromPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DetachManagedPolicyFromPermissionSetRequest&, const Model::DetachManagedPolicyFromPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachManagedPolicyFromPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::GetApplicationAccessScopeRequest&, const Model::GetApplicationAccessScopeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationAccessScopeResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::GetApplicationAssignmentConfigurationRequest&, const Model::GetApplicationAssignmentConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationAssignmentConfigurationResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::GetApplicationAuthenticationMethodRequest&, const Model::GetApplicationAuthenticationMethodOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationAuthenticationMethodResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::GetApplicationGrantRequest&, const Model::GetApplicationGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationGrantResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::GetInlinePolicyForPermissionSetRequest&, const Model::GetInlinePolicyForPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInlinePolicyForPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::GetPermissionsBoundaryForPermissionSetRequest&, const Model::GetPermissionsBoundaryForPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPermissionsBoundaryForPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListAccountAssignmentCreationStatusRequest&, const Model::ListAccountAssignmentCreationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountAssignmentCreationStatusResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListAccountAssignmentDeletionStatusRequest&, const Model::ListAccountAssignmentDeletionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountAssignmentDeletionStatusResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListAccountAssignmentsRequest&, const Model::ListAccountAssignmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountAssignmentsResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListAccountAssignmentsForPrincipalRequest&, const Model::ListAccountAssignmentsForPrincipalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountAssignmentsForPrincipalResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListAccountsForProvisionedPermissionSetRequest&, const Model::ListAccountsForProvisionedPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountsForProvisionedPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListApplicationAccessScopesRequest&, const Model::ListApplicationAccessScopesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationAccessScopesResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListApplicationAssignmentsRequest&, const Model::ListApplicationAssignmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationAssignmentsResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListApplicationAssignmentsForPrincipalRequest&, const Model::ListApplicationAssignmentsForPrincipalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationAssignmentsForPrincipalResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListApplicationAuthenticationMethodsRequest&, const Model::ListApplicationAuthenticationMethodsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationAuthenticationMethodsResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListApplicationGrantsRequest&, const Model::ListApplicationGrantsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationGrantsResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListApplicationProvidersRequest&, const Model::ListApplicationProvidersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationProvidersResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListCustomerManagedPolicyReferencesInPermissionSetRequest&, const Model::ListCustomerManagedPolicyReferencesInPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomerManagedPolicyReferencesInPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListInstancesRequest&, const Model::ListInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstancesResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListManagedPoliciesInPermissionSetRequest&, const Model::ListManagedPoliciesInPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListManagedPoliciesInPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListPermissionSetProvisioningStatusRequest&, const Model::ListPermissionSetProvisioningStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPermissionSetProvisioningStatusResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListPermissionSetsRequest&, const Model::ListPermissionSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPermissionSetsResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListPermissionSetsProvisionedToAccountRequest&, const Model::ListPermissionSetsProvisionedToAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPermissionSetsProvisionedToAccountResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListTrustedTokenIssuersRequest&, const Model::ListTrustedTokenIssuersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrustedTokenIssuersResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ProvisionPermissionSetRequest&, const Model::ProvisionPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ProvisionPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::PutApplicationAccessScopeRequest&, const Model::PutApplicationAccessScopeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutApplicationAccessScopeResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::PutApplicationAssignmentConfigurationRequest&, const Model::PutApplicationAssignmentConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutApplicationAssignmentConfigurationResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::PutApplicationAuthenticationMethodRequest&, const Model::PutApplicationAuthenticationMethodOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutApplicationAuthenticationMethodResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::PutApplicationGrantRequest&, const Model::PutApplicationGrantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutApplicationGrantResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::PutInlinePolicyToPermissionSetRequest&, const Model::PutInlinePolicyToPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutInlinePolicyToPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::PutPermissionsBoundaryToPermissionSetRequest&, const Model::PutPermissionsBoundaryToPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPermissionsBoundaryToPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::UpdateInstanceRequest&, const Model::UpdateInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInstanceResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::UpdateInstanceAccessControlAttributeConfigurationRequest&, const Model::UpdateInstanceAccessControlAttributeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInstanceAccessControlAttributeConfigurationResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::UpdatePermissionSetRequest&, const Model::UpdatePermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::UpdateTrustedTokenIssuerRequest&, const Model::UpdateTrustedTokenIssuerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTrustedTokenIssuerResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SSOAdmin
} // namespace Aws
