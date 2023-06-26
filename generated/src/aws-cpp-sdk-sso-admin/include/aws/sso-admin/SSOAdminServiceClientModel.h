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
#include <aws/sso-admin/model/CreateInstanceAccessControlAttributeConfigurationResult.h>
#include <aws/sso-admin/model/CreatePermissionSetResult.h>
#include <aws/sso-admin/model/DeleteAccountAssignmentResult.h>
#include <aws/sso-admin/model/DeleteInlinePolicyFromPermissionSetResult.h>
#include <aws/sso-admin/model/DeleteInstanceAccessControlAttributeConfigurationResult.h>
#include <aws/sso-admin/model/DeletePermissionSetResult.h>
#include <aws/sso-admin/model/DeletePermissionsBoundaryFromPermissionSetResult.h>
#include <aws/sso-admin/model/DescribeAccountAssignmentCreationStatusResult.h>
#include <aws/sso-admin/model/DescribeAccountAssignmentDeletionStatusResult.h>
#include <aws/sso-admin/model/DescribeInstanceAccessControlAttributeConfigurationResult.h>
#include <aws/sso-admin/model/DescribePermissionSetResult.h>
#include <aws/sso-admin/model/DescribePermissionSetProvisioningStatusResult.h>
#include <aws/sso-admin/model/DetachCustomerManagedPolicyReferenceFromPermissionSetResult.h>
#include <aws/sso-admin/model/DetachManagedPolicyFromPermissionSetResult.h>
#include <aws/sso-admin/model/GetInlinePolicyForPermissionSetResult.h>
#include <aws/sso-admin/model/GetPermissionsBoundaryForPermissionSetResult.h>
#include <aws/sso-admin/model/ListAccountAssignmentCreationStatusResult.h>
#include <aws/sso-admin/model/ListAccountAssignmentDeletionStatusResult.h>
#include <aws/sso-admin/model/ListAccountAssignmentsResult.h>
#include <aws/sso-admin/model/ListAccountsForProvisionedPermissionSetResult.h>
#include <aws/sso-admin/model/ListCustomerManagedPolicyReferencesInPermissionSetResult.h>
#include <aws/sso-admin/model/ListInstancesResult.h>
#include <aws/sso-admin/model/ListManagedPoliciesInPermissionSetResult.h>
#include <aws/sso-admin/model/ListPermissionSetProvisioningStatusResult.h>
#include <aws/sso-admin/model/ListPermissionSetsResult.h>
#include <aws/sso-admin/model/ListPermissionSetsProvisionedToAccountResult.h>
#include <aws/sso-admin/model/ListTagsForResourceResult.h>
#include <aws/sso-admin/model/ProvisionPermissionSetResult.h>
#include <aws/sso-admin/model/PutInlinePolicyToPermissionSetResult.h>
#include <aws/sso-admin/model/PutPermissionsBoundaryToPermissionSetResult.h>
#include <aws/sso-admin/model/TagResourceResult.h>
#include <aws/sso-admin/model/UntagResourceResult.h>
#include <aws/sso-admin/model/UpdateInstanceAccessControlAttributeConfigurationResult.h>
#include <aws/sso-admin/model/UpdatePermissionSetResult.h>
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
      class CreateInstanceAccessControlAttributeConfigurationRequest;
      class CreatePermissionSetRequest;
      class DeleteAccountAssignmentRequest;
      class DeleteInlinePolicyFromPermissionSetRequest;
      class DeleteInstanceAccessControlAttributeConfigurationRequest;
      class DeletePermissionSetRequest;
      class DeletePermissionsBoundaryFromPermissionSetRequest;
      class DescribeAccountAssignmentCreationStatusRequest;
      class DescribeAccountAssignmentDeletionStatusRequest;
      class DescribeInstanceAccessControlAttributeConfigurationRequest;
      class DescribePermissionSetRequest;
      class DescribePermissionSetProvisioningStatusRequest;
      class DetachCustomerManagedPolicyReferenceFromPermissionSetRequest;
      class DetachManagedPolicyFromPermissionSetRequest;
      class GetInlinePolicyForPermissionSetRequest;
      class GetPermissionsBoundaryForPermissionSetRequest;
      class ListAccountAssignmentCreationStatusRequest;
      class ListAccountAssignmentDeletionStatusRequest;
      class ListAccountAssignmentsRequest;
      class ListAccountsForProvisionedPermissionSetRequest;
      class ListCustomerManagedPolicyReferencesInPermissionSetRequest;
      class ListInstancesRequest;
      class ListManagedPoliciesInPermissionSetRequest;
      class ListPermissionSetProvisioningStatusRequest;
      class ListPermissionSetsRequest;
      class ListPermissionSetsProvisionedToAccountRequest;
      class ListTagsForResourceRequest;
      class ProvisionPermissionSetRequest;
      class PutInlinePolicyToPermissionSetRequest;
      class PutPermissionsBoundaryToPermissionSetRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateInstanceAccessControlAttributeConfigurationRequest;
      class UpdatePermissionSetRequest;
      /* End of service model forward declarations required in SSOAdminClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AttachCustomerManagedPolicyReferenceToPermissionSetResult, SSOAdminError> AttachCustomerManagedPolicyReferenceToPermissionSetOutcome;
      typedef Aws::Utils::Outcome<AttachManagedPolicyToPermissionSetResult, SSOAdminError> AttachManagedPolicyToPermissionSetOutcome;
      typedef Aws::Utils::Outcome<CreateAccountAssignmentResult, SSOAdminError> CreateAccountAssignmentOutcome;
      typedef Aws::Utils::Outcome<CreateInstanceAccessControlAttributeConfigurationResult, SSOAdminError> CreateInstanceAccessControlAttributeConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreatePermissionSetResult, SSOAdminError> CreatePermissionSetOutcome;
      typedef Aws::Utils::Outcome<DeleteAccountAssignmentResult, SSOAdminError> DeleteAccountAssignmentOutcome;
      typedef Aws::Utils::Outcome<DeleteInlinePolicyFromPermissionSetResult, SSOAdminError> DeleteInlinePolicyFromPermissionSetOutcome;
      typedef Aws::Utils::Outcome<DeleteInstanceAccessControlAttributeConfigurationResult, SSOAdminError> DeleteInstanceAccessControlAttributeConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeletePermissionSetResult, SSOAdminError> DeletePermissionSetOutcome;
      typedef Aws::Utils::Outcome<DeletePermissionsBoundaryFromPermissionSetResult, SSOAdminError> DeletePermissionsBoundaryFromPermissionSetOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountAssignmentCreationStatusResult, SSOAdminError> DescribeAccountAssignmentCreationStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountAssignmentDeletionStatusResult, SSOAdminError> DescribeAccountAssignmentDeletionStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceAccessControlAttributeConfigurationResult, SSOAdminError> DescribeInstanceAccessControlAttributeConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribePermissionSetResult, SSOAdminError> DescribePermissionSetOutcome;
      typedef Aws::Utils::Outcome<DescribePermissionSetProvisioningStatusResult, SSOAdminError> DescribePermissionSetProvisioningStatusOutcome;
      typedef Aws::Utils::Outcome<DetachCustomerManagedPolicyReferenceFromPermissionSetResult, SSOAdminError> DetachCustomerManagedPolicyReferenceFromPermissionSetOutcome;
      typedef Aws::Utils::Outcome<DetachManagedPolicyFromPermissionSetResult, SSOAdminError> DetachManagedPolicyFromPermissionSetOutcome;
      typedef Aws::Utils::Outcome<GetInlinePolicyForPermissionSetResult, SSOAdminError> GetInlinePolicyForPermissionSetOutcome;
      typedef Aws::Utils::Outcome<GetPermissionsBoundaryForPermissionSetResult, SSOAdminError> GetPermissionsBoundaryForPermissionSetOutcome;
      typedef Aws::Utils::Outcome<ListAccountAssignmentCreationStatusResult, SSOAdminError> ListAccountAssignmentCreationStatusOutcome;
      typedef Aws::Utils::Outcome<ListAccountAssignmentDeletionStatusResult, SSOAdminError> ListAccountAssignmentDeletionStatusOutcome;
      typedef Aws::Utils::Outcome<ListAccountAssignmentsResult, SSOAdminError> ListAccountAssignmentsOutcome;
      typedef Aws::Utils::Outcome<ListAccountsForProvisionedPermissionSetResult, SSOAdminError> ListAccountsForProvisionedPermissionSetOutcome;
      typedef Aws::Utils::Outcome<ListCustomerManagedPolicyReferencesInPermissionSetResult, SSOAdminError> ListCustomerManagedPolicyReferencesInPermissionSetOutcome;
      typedef Aws::Utils::Outcome<ListInstancesResult, SSOAdminError> ListInstancesOutcome;
      typedef Aws::Utils::Outcome<ListManagedPoliciesInPermissionSetResult, SSOAdminError> ListManagedPoliciesInPermissionSetOutcome;
      typedef Aws::Utils::Outcome<ListPermissionSetProvisioningStatusResult, SSOAdminError> ListPermissionSetProvisioningStatusOutcome;
      typedef Aws::Utils::Outcome<ListPermissionSetsResult, SSOAdminError> ListPermissionSetsOutcome;
      typedef Aws::Utils::Outcome<ListPermissionSetsProvisionedToAccountResult, SSOAdminError> ListPermissionSetsProvisionedToAccountOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SSOAdminError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ProvisionPermissionSetResult, SSOAdminError> ProvisionPermissionSetOutcome;
      typedef Aws::Utils::Outcome<PutInlinePolicyToPermissionSetResult, SSOAdminError> PutInlinePolicyToPermissionSetOutcome;
      typedef Aws::Utils::Outcome<PutPermissionsBoundaryToPermissionSetResult, SSOAdminError> PutPermissionsBoundaryToPermissionSetOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, SSOAdminError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, SSOAdminError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateInstanceAccessControlAttributeConfigurationResult, SSOAdminError> UpdateInstanceAccessControlAttributeConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdatePermissionSetResult, SSOAdminError> UpdatePermissionSetOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AttachCustomerManagedPolicyReferenceToPermissionSetOutcome> AttachCustomerManagedPolicyReferenceToPermissionSetOutcomeCallable;
      typedef std::future<AttachManagedPolicyToPermissionSetOutcome> AttachManagedPolicyToPermissionSetOutcomeCallable;
      typedef std::future<CreateAccountAssignmentOutcome> CreateAccountAssignmentOutcomeCallable;
      typedef std::future<CreateInstanceAccessControlAttributeConfigurationOutcome> CreateInstanceAccessControlAttributeConfigurationOutcomeCallable;
      typedef std::future<CreatePermissionSetOutcome> CreatePermissionSetOutcomeCallable;
      typedef std::future<DeleteAccountAssignmentOutcome> DeleteAccountAssignmentOutcomeCallable;
      typedef std::future<DeleteInlinePolicyFromPermissionSetOutcome> DeleteInlinePolicyFromPermissionSetOutcomeCallable;
      typedef std::future<DeleteInstanceAccessControlAttributeConfigurationOutcome> DeleteInstanceAccessControlAttributeConfigurationOutcomeCallable;
      typedef std::future<DeletePermissionSetOutcome> DeletePermissionSetOutcomeCallable;
      typedef std::future<DeletePermissionsBoundaryFromPermissionSetOutcome> DeletePermissionsBoundaryFromPermissionSetOutcomeCallable;
      typedef std::future<DescribeAccountAssignmentCreationStatusOutcome> DescribeAccountAssignmentCreationStatusOutcomeCallable;
      typedef std::future<DescribeAccountAssignmentDeletionStatusOutcome> DescribeAccountAssignmentDeletionStatusOutcomeCallable;
      typedef std::future<DescribeInstanceAccessControlAttributeConfigurationOutcome> DescribeInstanceAccessControlAttributeConfigurationOutcomeCallable;
      typedef std::future<DescribePermissionSetOutcome> DescribePermissionSetOutcomeCallable;
      typedef std::future<DescribePermissionSetProvisioningStatusOutcome> DescribePermissionSetProvisioningStatusOutcomeCallable;
      typedef std::future<DetachCustomerManagedPolicyReferenceFromPermissionSetOutcome> DetachCustomerManagedPolicyReferenceFromPermissionSetOutcomeCallable;
      typedef std::future<DetachManagedPolicyFromPermissionSetOutcome> DetachManagedPolicyFromPermissionSetOutcomeCallable;
      typedef std::future<GetInlinePolicyForPermissionSetOutcome> GetInlinePolicyForPermissionSetOutcomeCallable;
      typedef std::future<GetPermissionsBoundaryForPermissionSetOutcome> GetPermissionsBoundaryForPermissionSetOutcomeCallable;
      typedef std::future<ListAccountAssignmentCreationStatusOutcome> ListAccountAssignmentCreationStatusOutcomeCallable;
      typedef std::future<ListAccountAssignmentDeletionStatusOutcome> ListAccountAssignmentDeletionStatusOutcomeCallable;
      typedef std::future<ListAccountAssignmentsOutcome> ListAccountAssignmentsOutcomeCallable;
      typedef std::future<ListAccountsForProvisionedPermissionSetOutcome> ListAccountsForProvisionedPermissionSetOutcomeCallable;
      typedef std::future<ListCustomerManagedPolicyReferencesInPermissionSetOutcome> ListCustomerManagedPolicyReferencesInPermissionSetOutcomeCallable;
      typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
      typedef std::future<ListManagedPoliciesInPermissionSetOutcome> ListManagedPoliciesInPermissionSetOutcomeCallable;
      typedef std::future<ListPermissionSetProvisioningStatusOutcome> ListPermissionSetProvisioningStatusOutcomeCallable;
      typedef std::future<ListPermissionSetsOutcome> ListPermissionSetsOutcomeCallable;
      typedef std::future<ListPermissionSetsProvisionedToAccountOutcome> ListPermissionSetsProvisionedToAccountOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ProvisionPermissionSetOutcome> ProvisionPermissionSetOutcomeCallable;
      typedef std::future<PutInlinePolicyToPermissionSetOutcome> PutInlinePolicyToPermissionSetOutcomeCallable;
      typedef std::future<PutPermissionsBoundaryToPermissionSetOutcome> PutPermissionsBoundaryToPermissionSetOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateInstanceAccessControlAttributeConfigurationOutcome> UpdateInstanceAccessControlAttributeConfigurationOutcomeCallable;
      typedef std::future<UpdatePermissionSetOutcome> UpdatePermissionSetOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SSOAdminClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SSOAdminClient*, const Model::AttachCustomerManagedPolicyReferenceToPermissionSetRequest&, const Model::AttachCustomerManagedPolicyReferenceToPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachCustomerManagedPolicyReferenceToPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::AttachManagedPolicyToPermissionSetRequest&, const Model::AttachManagedPolicyToPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachManagedPolicyToPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::CreateAccountAssignmentRequest&, const Model::CreateAccountAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccountAssignmentResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::CreateInstanceAccessControlAttributeConfigurationRequest&, const Model::CreateInstanceAccessControlAttributeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInstanceAccessControlAttributeConfigurationResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::CreatePermissionSetRequest&, const Model::CreatePermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeleteAccountAssignmentRequest&, const Model::DeleteAccountAssignmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccountAssignmentResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeleteInlinePolicyFromPermissionSetRequest&, const Model::DeleteInlinePolicyFromPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInlinePolicyFromPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeleteInstanceAccessControlAttributeConfigurationRequest&, const Model::DeleteInstanceAccessControlAttributeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstanceAccessControlAttributeConfigurationResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeletePermissionSetRequest&, const Model::DeletePermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DeletePermissionsBoundaryFromPermissionSetRequest&, const Model::DeletePermissionsBoundaryFromPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePermissionsBoundaryFromPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DescribeAccountAssignmentCreationStatusRequest&, const Model::DescribeAccountAssignmentCreationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountAssignmentCreationStatusResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DescribeAccountAssignmentDeletionStatusRequest&, const Model::DescribeAccountAssignmentDeletionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountAssignmentDeletionStatusResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DescribeInstanceAccessControlAttributeConfigurationRequest&, const Model::DescribeInstanceAccessControlAttributeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceAccessControlAttributeConfigurationResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DescribePermissionSetRequest&, const Model::DescribePermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DescribePermissionSetProvisioningStatusRequest&, const Model::DescribePermissionSetProvisioningStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePermissionSetProvisioningStatusResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DetachCustomerManagedPolicyReferenceFromPermissionSetRequest&, const Model::DetachCustomerManagedPolicyReferenceFromPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachCustomerManagedPolicyReferenceFromPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::DetachManagedPolicyFromPermissionSetRequest&, const Model::DetachManagedPolicyFromPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachManagedPolicyFromPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::GetInlinePolicyForPermissionSetRequest&, const Model::GetInlinePolicyForPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInlinePolicyForPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::GetPermissionsBoundaryForPermissionSetRequest&, const Model::GetPermissionsBoundaryForPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPermissionsBoundaryForPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListAccountAssignmentCreationStatusRequest&, const Model::ListAccountAssignmentCreationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountAssignmentCreationStatusResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListAccountAssignmentDeletionStatusRequest&, const Model::ListAccountAssignmentDeletionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountAssignmentDeletionStatusResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListAccountAssignmentsRequest&, const Model::ListAccountAssignmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountAssignmentsResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListAccountsForProvisionedPermissionSetRequest&, const Model::ListAccountsForProvisionedPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountsForProvisionedPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListCustomerManagedPolicyReferencesInPermissionSetRequest&, const Model::ListCustomerManagedPolicyReferencesInPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomerManagedPolicyReferencesInPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListInstancesRequest&, const Model::ListInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstancesResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListManagedPoliciesInPermissionSetRequest&, const Model::ListManagedPoliciesInPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListManagedPoliciesInPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListPermissionSetProvisioningStatusRequest&, const Model::ListPermissionSetProvisioningStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPermissionSetProvisioningStatusResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListPermissionSetsRequest&, const Model::ListPermissionSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPermissionSetsResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListPermissionSetsProvisionedToAccountRequest&, const Model::ListPermissionSetsProvisionedToAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPermissionSetsProvisionedToAccountResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::ProvisionPermissionSetRequest&, const Model::ProvisionPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ProvisionPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::PutInlinePolicyToPermissionSetRequest&, const Model::PutInlinePolicyToPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutInlinePolicyToPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::PutPermissionsBoundaryToPermissionSetRequest&, const Model::PutPermissionsBoundaryToPermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPermissionsBoundaryToPermissionSetResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::UpdateInstanceAccessControlAttributeConfigurationRequest&, const Model::UpdateInstanceAccessControlAttributeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInstanceAccessControlAttributeConfigurationResponseReceivedHandler;
    typedef std::function<void(const SSOAdminClient*, const Model::UpdatePermissionSetRequest&, const Model::UpdatePermissionSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePermissionSetResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SSOAdmin
} // namespace Aws
