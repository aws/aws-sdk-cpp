/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/ram/RAMErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/ram/RAMEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in RAMClient header */
#include <aws/ram/model/AcceptResourceShareInvitationResult.h>
#include <aws/ram/model/AssociateResourceShareResult.h>
#include <aws/ram/model/AssociateResourceSharePermissionResult.h>
#include <aws/ram/model/CreateResourceShareResult.h>
#include <aws/ram/model/DeleteResourceShareResult.h>
#include <aws/ram/model/DisassociateResourceShareResult.h>
#include <aws/ram/model/DisassociateResourceSharePermissionResult.h>
#include <aws/ram/model/EnableSharingWithAwsOrganizationResult.h>
#include <aws/ram/model/GetPermissionResult.h>
#include <aws/ram/model/GetResourcePoliciesResult.h>
#include <aws/ram/model/GetResourceShareAssociationsResult.h>
#include <aws/ram/model/GetResourceShareInvitationsResult.h>
#include <aws/ram/model/GetResourceSharesResult.h>
#include <aws/ram/model/ListPendingInvitationResourcesResult.h>
#include <aws/ram/model/ListPermissionVersionsResult.h>
#include <aws/ram/model/ListPermissionsResult.h>
#include <aws/ram/model/ListPrincipalsResult.h>
#include <aws/ram/model/ListResourceSharePermissionsResult.h>
#include <aws/ram/model/ListResourceTypesResult.h>
#include <aws/ram/model/ListResourcesResult.h>
#include <aws/ram/model/PromoteResourceShareCreatedFromPolicyResult.h>
#include <aws/ram/model/RejectResourceShareInvitationResult.h>
#include <aws/ram/model/TagResourceResult.h>
#include <aws/ram/model/UntagResourceResult.h>
#include <aws/ram/model/UpdateResourceShareResult.h>
/* End of service model headers required in RAMClient header */

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

  namespace RAM
  {
    using RAMClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using RAMEndpointProviderBase = Aws::RAM::Endpoint::RAMEndpointProviderBase;
    using RAMEndpointProvider = Aws::RAM::Endpoint::RAMEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in RAMClient header */
      class AcceptResourceShareInvitationRequest;
      class AssociateResourceShareRequest;
      class AssociateResourceSharePermissionRequest;
      class CreateResourceShareRequest;
      class DeleteResourceShareRequest;
      class DisassociateResourceShareRequest;
      class DisassociateResourceSharePermissionRequest;
      class EnableSharingWithAwsOrganizationRequest;
      class GetPermissionRequest;
      class GetResourcePoliciesRequest;
      class GetResourceShareAssociationsRequest;
      class GetResourceShareInvitationsRequest;
      class GetResourceSharesRequest;
      class ListPendingInvitationResourcesRequest;
      class ListPermissionVersionsRequest;
      class ListPermissionsRequest;
      class ListPrincipalsRequest;
      class ListResourceSharePermissionsRequest;
      class ListResourceTypesRequest;
      class ListResourcesRequest;
      class PromoteResourceShareCreatedFromPolicyRequest;
      class RejectResourceShareInvitationRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateResourceShareRequest;
      /* End of service model forward declarations required in RAMClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptResourceShareInvitationResult, RAMError> AcceptResourceShareInvitationOutcome;
      typedef Aws::Utils::Outcome<AssociateResourceShareResult, RAMError> AssociateResourceShareOutcome;
      typedef Aws::Utils::Outcome<AssociateResourceSharePermissionResult, RAMError> AssociateResourceSharePermissionOutcome;
      typedef Aws::Utils::Outcome<CreateResourceShareResult, RAMError> CreateResourceShareOutcome;
      typedef Aws::Utils::Outcome<DeleteResourceShareResult, RAMError> DeleteResourceShareOutcome;
      typedef Aws::Utils::Outcome<DisassociateResourceShareResult, RAMError> DisassociateResourceShareOutcome;
      typedef Aws::Utils::Outcome<DisassociateResourceSharePermissionResult, RAMError> DisassociateResourceSharePermissionOutcome;
      typedef Aws::Utils::Outcome<EnableSharingWithAwsOrganizationResult, RAMError> EnableSharingWithAwsOrganizationOutcome;
      typedef Aws::Utils::Outcome<GetPermissionResult, RAMError> GetPermissionOutcome;
      typedef Aws::Utils::Outcome<GetResourcePoliciesResult, RAMError> GetResourcePoliciesOutcome;
      typedef Aws::Utils::Outcome<GetResourceShareAssociationsResult, RAMError> GetResourceShareAssociationsOutcome;
      typedef Aws::Utils::Outcome<GetResourceShareInvitationsResult, RAMError> GetResourceShareInvitationsOutcome;
      typedef Aws::Utils::Outcome<GetResourceSharesResult, RAMError> GetResourceSharesOutcome;
      typedef Aws::Utils::Outcome<ListPendingInvitationResourcesResult, RAMError> ListPendingInvitationResourcesOutcome;
      typedef Aws::Utils::Outcome<ListPermissionVersionsResult, RAMError> ListPermissionVersionsOutcome;
      typedef Aws::Utils::Outcome<ListPermissionsResult, RAMError> ListPermissionsOutcome;
      typedef Aws::Utils::Outcome<ListPrincipalsResult, RAMError> ListPrincipalsOutcome;
      typedef Aws::Utils::Outcome<ListResourceSharePermissionsResult, RAMError> ListResourceSharePermissionsOutcome;
      typedef Aws::Utils::Outcome<ListResourceTypesResult, RAMError> ListResourceTypesOutcome;
      typedef Aws::Utils::Outcome<ListResourcesResult, RAMError> ListResourcesOutcome;
      typedef Aws::Utils::Outcome<PromoteResourceShareCreatedFromPolicyResult, RAMError> PromoteResourceShareCreatedFromPolicyOutcome;
      typedef Aws::Utils::Outcome<RejectResourceShareInvitationResult, RAMError> RejectResourceShareInvitationOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, RAMError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, RAMError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateResourceShareResult, RAMError> UpdateResourceShareOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptResourceShareInvitationOutcome> AcceptResourceShareInvitationOutcomeCallable;
      typedef std::future<AssociateResourceShareOutcome> AssociateResourceShareOutcomeCallable;
      typedef std::future<AssociateResourceSharePermissionOutcome> AssociateResourceSharePermissionOutcomeCallable;
      typedef std::future<CreateResourceShareOutcome> CreateResourceShareOutcomeCallable;
      typedef std::future<DeleteResourceShareOutcome> DeleteResourceShareOutcomeCallable;
      typedef std::future<DisassociateResourceShareOutcome> DisassociateResourceShareOutcomeCallable;
      typedef std::future<DisassociateResourceSharePermissionOutcome> DisassociateResourceSharePermissionOutcomeCallable;
      typedef std::future<EnableSharingWithAwsOrganizationOutcome> EnableSharingWithAwsOrganizationOutcomeCallable;
      typedef std::future<GetPermissionOutcome> GetPermissionOutcomeCallable;
      typedef std::future<GetResourcePoliciesOutcome> GetResourcePoliciesOutcomeCallable;
      typedef std::future<GetResourceShareAssociationsOutcome> GetResourceShareAssociationsOutcomeCallable;
      typedef std::future<GetResourceShareInvitationsOutcome> GetResourceShareInvitationsOutcomeCallable;
      typedef std::future<GetResourceSharesOutcome> GetResourceSharesOutcomeCallable;
      typedef std::future<ListPendingInvitationResourcesOutcome> ListPendingInvitationResourcesOutcomeCallable;
      typedef std::future<ListPermissionVersionsOutcome> ListPermissionVersionsOutcomeCallable;
      typedef std::future<ListPermissionsOutcome> ListPermissionsOutcomeCallable;
      typedef std::future<ListPrincipalsOutcome> ListPrincipalsOutcomeCallable;
      typedef std::future<ListResourceSharePermissionsOutcome> ListResourceSharePermissionsOutcomeCallable;
      typedef std::future<ListResourceTypesOutcome> ListResourceTypesOutcomeCallable;
      typedef std::future<ListResourcesOutcome> ListResourcesOutcomeCallable;
      typedef std::future<PromoteResourceShareCreatedFromPolicyOutcome> PromoteResourceShareCreatedFromPolicyOutcomeCallable;
      typedef std::future<RejectResourceShareInvitationOutcome> RejectResourceShareInvitationOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateResourceShareOutcome> UpdateResourceShareOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class RAMClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const RAMClient*, const Model::AcceptResourceShareInvitationRequest&, const Model::AcceptResourceShareInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptResourceShareInvitationResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::AssociateResourceShareRequest&, const Model::AssociateResourceShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateResourceShareResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::AssociateResourceSharePermissionRequest&, const Model::AssociateResourceSharePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateResourceSharePermissionResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::CreateResourceShareRequest&, const Model::CreateResourceShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceShareResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::DeleteResourceShareRequest&, const Model::DeleteResourceShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceShareResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::DisassociateResourceShareRequest&, const Model::DisassociateResourceShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateResourceShareResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::DisassociateResourceSharePermissionRequest&, const Model::DisassociateResourceSharePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateResourceSharePermissionResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::EnableSharingWithAwsOrganizationRequest&, const Model::EnableSharingWithAwsOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableSharingWithAwsOrganizationResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::GetPermissionRequest&, const Model::GetPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPermissionResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::GetResourcePoliciesRequest&, const Model::GetResourcePoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePoliciesResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::GetResourceShareAssociationsRequest&, const Model::GetResourceShareAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceShareAssociationsResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::GetResourceShareInvitationsRequest&, const Model::GetResourceShareInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceShareInvitationsResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::GetResourceSharesRequest&, const Model::GetResourceSharesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceSharesResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::ListPendingInvitationResourcesRequest&, const Model::ListPendingInvitationResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPendingInvitationResourcesResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::ListPermissionVersionsRequest&, const Model::ListPermissionVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPermissionVersionsResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::ListPermissionsRequest&, const Model::ListPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPermissionsResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::ListPrincipalsRequest&, const Model::ListPrincipalsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPrincipalsResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::ListResourceSharePermissionsRequest&, const Model::ListResourceSharePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceSharePermissionsResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::ListResourceTypesRequest&, const Model::ListResourceTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceTypesResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::ListResourcesRequest&, const Model::ListResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourcesResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::PromoteResourceShareCreatedFromPolicyRequest&, const Model::PromoteResourceShareCreatedFromPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PromoteResourceShareCreatedFromPolicyResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::RejectResourceShareInvitationRequest&, const Model::RejectResourceShareInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectResourceShareInvitationResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const RAMClient*, const Model::UpdateResourceShareRequest&, const Model::UpdateResourceShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceShareResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace RAM
} // namespace Aws
