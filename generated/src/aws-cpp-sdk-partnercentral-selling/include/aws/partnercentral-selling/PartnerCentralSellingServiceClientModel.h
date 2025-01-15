/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/partnercentral-selling/PartnerCentralSellingErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/partnercentral-selling/PartnerCentralSellingEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in PartnerCentralSellingClient header */
#include <aws/partnercentral-selling/model/CreateEngagementResult.h>
#include <aws/partnercentral-selling/model/CreateEngagementInvitationResult.h>
#include <aws/partnercentral-selling/model/CreateOpportunityResult.h>
#include <aws/partnercentral-selling/model/CreateResourceSnapshotResult.h>
#include <aws/partnercentral-selling/model/CreateResourceSnapshotJobResult.h>
#include <aws/partnercentral-selling/model/GetAwsOpportunitySummaryResult.h>
#include <aws/partnercentral-selling/model/GetEngagementResult.h>
#include <aws/partnercentral-selling/model/GetEngagementInvitationResult.h>
#include <aws/partnercentral-selling/model/GetOpportunityResult.h>
#include <aws/partnercentral-selling/model/GetResourceSnapshotResult.h>
#include <aws/partnercentral-selling/model/GetResourceSnapshotJobResult.h>
#include <aws/partnercentral-selling/model/GetSellingSystemSettingsResult.h>
#include <aws/partnercentral-selling/model/ListEngagementByAcceptingInvitationTasksResult.h>
#include <aws/partnercentral-selling/model/ListEngagementFromOpportunityTasksResult.h>
#include <aws/partnercentral-selling/model/ListEngagementInvitationsResult.h>
#include <aws/partnercentral-selling/model/ListEngagementMembersResult.h>
#include <aws/partnercentral-selling/model/ListEngagementResourceAssociationsResult.h>
#include <aws/partnercentral-selling/model/ListEngagementsResult.h>
#include <aws/partnercentral-selling/model/ListOpportunitiesResult.h>
#include <aws/partnercentral-selling/model/ListResourceSnapshotJobsResult.h>
#include <aws/partnercentral-selling/model/ListResourceSnapshotsResult.h>
#include <aws/partnercentral-selling/model/ListSolutionsResult.h>
#include <aws/partnercentral-selling/model/ListTagsForResourceResult.h>
#include <aws/partnercentral-selling/model/PutSellingSystemSettingsResult.h>
#include <aws/partnercentral-selling/model/StartEngagementByAcceptingInvitationTaskResult.h>
#include <aws/partnercentral-selling/model/StartEngagementFromOpportunityTaskResult.h>
#include <aws/partnercentral-selling/model/TagResourceResult.h>
#include <aws/partnercentral-selling/model/UntagResourceResult.h>
#include <aws/partnercentral-selling/model/UpdateOpportunityResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in PartnerCentralSellingClient header */

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

  namespace PartnerCentralSelling
  {
    using PartnerCentralSellingClientConfiguration = Aws::Client::GenericClientConfiguration;
    using PartnerCentralSellingEndpointProviderBase = Aws::PartnerCentralSelling::Endpoint::PartnerCentralSellingEndpointProviderBase;
    using PartnerCentralSellingEndpointProvider = Aws::PartnerCentralSelling::Endpoint::PartnerCentralSellingEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in PartnerCentralSellingClient header */
      class AcceptEngagementInvitationRequest;
      class AssignOpportunityRequest;
      class AssociateOpportunityRequest;
      class CreateEngagementRequest;
      class CreateEngagementInvitationRequest;
      class CreateOpportunityRequest;
      class CreateResourceSnapshotRequest;
      class CreateResourceSnapshotJobRequest;
      class DeleteResourceSnapshotJobRequest;
      class DisassociateOpportunityRequest;
      class GetAwsOpportunitySummaryRequest;
      class GetEngagementRequest;
      class GetEngagementInvitationRequest;
      class GetOpportunityRequest;
      class GetResourceSnapshotRequest;
      class GetResourceSnapshotJobRequest;
      class GetSellingSystemSettingsRequest;
      class ListEngagementByAcceptingInvitationTasksRequest;
      class ListEngagementFromOpportunityTasksRequest;
      class ListEngagementInvitationsRequest;
      class ListEngagementMembersRequest;
      class ListEngagementResourceAssociationsRequest;
      class ListEngagementsRequest;
      class ListOpportunitiesRequest;
      class ListResourceSnapshotJobsRequest;
      class ListResourceSnapshotsRequest;
      class ListSolutionsRequest;
      class ListTagsForResourceRequest;
      class PutSellingSystemSettingsRequest;
      class RejectEngagementInvitationRequest;
      class StartEngagementByAcceptingInvitationTaskRequest;
      class StartEngagementFromOpportunityTaskRequest;
      class StartResourceSnapshotJobRequest;
      class StopResourceSnapshotJobRequest;
      class SubmitOpportunityRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateOpportunityRequest;
      /* End of service model forward declarations required in PartnerCentralSellingClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, PartnerCentralSellingError> AcceptEngagementInvitationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PartnerCentralSellingError> AssignOpportunityOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PartnerCentralSellingError> AssociateOpportunityOutcome;
      typedef Aws::Utils::Outcome<CreateEngagementResult, PartnerCentralSellingError> CreateEngagementOutcome;
      typedef Aws::Utils::Outcome<CreateEngagementInvitationResult, PartnerCentralSellingError> CreateEngagementInvitationOutcome;
      typedef Aws::Utils::Outcome<CreateOpportunityResult, PartnerCentralSellingError> CreateOpportunityOutcome;
      typedef Aws::Utils::Outcome<CreateResourceSnapshotResult, PartnerCentralSellingError> CreateResourceSnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateResourceSnapshotJobResult, PartnerCentralSellingError> CreateResourceSnapshotJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PartnerCentralSellingError> DeleteResourceSnapshotJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PartnerCentralSellingError> DisassociateOpportunityOutcome;
      typedef Aws::Utils::Outcome<GetAwsOpportunitySummaryResult, PartnerCentralSellingError> GetAwsOpportunitySummaryOutcome;
      typedef Aws::Utils::Outcome<GetEngagementResult, PartnerCentralSellingError> GetEngagementOutcome;
      typedef Aws::Utils::Outcome<GetEngagementInvitationResult, PartnerCentralSellingError> GetEngagementInvitationOutcome;
      typedef Aws::Utils::Outcome<GetOpportunityResult, PartnerCentralSellingError> GetOpportunityOutcome;
      typedef Aws::Utils::Outcome<GetResourceSnapshotResult, PartnerCentralSellingError> GetResourceSnapshotOutcome;
      typedef Aws::Utils::Outcome<GetResourceSnapshotJobResult, PartnerCentralSellingError> GetResourceSnapshotJobOutcome;
      typedef Aws::Utils::Outcome<GetSellingSystemSettingsResult, PartnerCentralSellingError> GetSellingSystemSettingsOutcome;
      typedef Aws::Utils::Outcome<ListEngagementByAcceptingInvitationTasksResult, PartnerCentralSellingError> ListEngagementByAcceptingInvitationTasksOutcome;
      typedef Aws::Utils::Outcome<ListEngagementFromOpportunityTasksResult, PartnerCentralSellingError> ListEngagementFromOpportunityTasksOutcome;
      typedef Aws::Utils::Outcome<ListEngagementInvitationsResult, PartnerCentralSellingError> ListEngagementInvitationsOutcome;
      typedef Aws::Utils::Outcome<ListEngagementMembersResult, PartnerCentralSellingError> ListEngagementMembersOutcome;
      typedef Aws::Utils::Outcome<ListEngagementResourceAssociationsResult, PartnerCentralSellingError> ListEngagementResourceAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListEngagementsResult, PartnerCentralSellingError> ListEngagementsOutcome;
      typedef Aws::Utils::Outcome<ListOpportunitiesResult, PartnerCentralSellingError> ListOpportunitiesOutcome;
      typedef Aws::Utils::Outcome<ListResourceSnapshotJobsResult, PartnerCentralSellingError> ListResourceSnapshotJobsOutcome;
      typedef Aws::Utils::Outcome<ListResourceSnapshotsResult, PartnerCentralSellingError> ListResourceSnapshotsOutcome;
      typedef Aws::Utils::Outcome<ListSolutionsResult, PartnerCentralSellingError> ListSolutionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, PartnerCentralSellingError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutSellingSystemSettingsResult, PartnerCentralSellingError> PutSellingSystemSettingsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PartnerCentralSellingError> RejectEngagementInvitationOutcome;
      typedef Aws::Utils::Outcome<StartEngagementByAcceptingInvitationTaskResult, PartnerCentralSellingError> StartEngagementByAcceptingInvitationTaskOutcome;
      typedef Aws::Utils::Outcome<StartEngagementFromOpportunityTaskResult, PartnerCentralSellingError> StartEngagementFromOpportunityTaskOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PartnerCentralSellingError> StartResourceSnapshotJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PartnerCentralSellingError> StopResourceSnapshotJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PartnerCentralSellingError> SubmitOpportunityOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, PartnerCentralSellingError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, PartnerCentralSellingError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateOpportunityResult, PartnerCentralSellingError> UpdateOpportunityOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptEngagementInvitationOutcome> AcceptEngagementInvitationOutcomeCallable;
      typedef std::future<AssignOpportunityOutcome> AssignOpportunityOutcomeCallable;
      typedef std::future<AssociateOpportunityOutcome> AssociateOpportunityOutcomeCallable;
      typedef std::future<CreateEngagementOutcome> CreateEngagementOutcomeCallable;
      typedef std::future<CreateEngagementInvitationOutcome> CreateEngagementInvitationOutcomeCallable;
      typedef std::future<CreateOpportunityOutcome> CreateOpportunityOutcomeCallable;
      typedef std::future<CreateResourceSnapshotOutcome> CreateResourceSnapshotOutcomeCallable;
      typedef std::future<CreateResourceSnapshotJobOutcome> CreateResourceSnapshotJobOutcomeCallable;
      typedef std::future<DeleteResourceSnapshotJobOutcome> DeleteResourceSnapshotJobOutcomeCallable;
      typedef std::future<DisassociateOpportunityOutcome> DisassociateOpportunityOutcomeCallable;
      typedef std::future<GetAwsOpportunitySummaryOutcome> GetAwsOpportunitySummaryOutcomeCallable;
      typedef std::future<GetEngagementOutcome> GetEngagementOutcomeCallable;
      typedef std::future<GetEngagementInvitationOutcome> GetEngagementInvitationOutcomeCallable;
      typedef std::future<GetOpportunityOutcome> GetOpportunityOutcomeCallable;
      typedef std::future<GetResourceSnapshotOutcome> GetResourceSnapshotOutcomeCallable;
      typedef std::future<GetResourceSnapshotJobOutcome> GetResourceSnapshotJobOutcomeCallable;
      typedef std::future<GetSellingSystemSettingsOutcome> GetSellingSystemSettingsOutcomeCallable;
      typedef std::future<ListEngagementByAcceptingInvitationTasksOutcome> ListEngagementByAcceptingInvitationTasksOutcomeCallable;
      typedef std::future<ListEngagementFromOpportunityTasksOutcome> ListEngagementFromOpportunityTasksOutcomeCallable;
      typedef std::future<ListEngagementInvitationsOutcome> ListEngagementInvitationsOutcomeCallable;
      typedef std::future<ListEngagementMembersOutcome> ListEngagementMembersOutcomeCallable;
      typedef std::future<ListEngagementResourceAssociationsOutcome> ListEngagementResourceAssociationsOutcomeCallable;
      typedef std::future<ListEngagementsOutcome> ListEngagementsOutcomeCallable;
      typedef std::future<ListOpportunitiesOutcome> ListOpportunitiesOutcomeCallable;
      typedef std::future<ListResourceSnapshotJobsOutcome> ListResourceSnapshotJobsOutcomeCallable;
      typedef std::future<ListResourceSnapshotsOutcome> ListResourceSnapshotsOutcomeCallable;
      typedef std::future<ListSolutionsOutcome> ListSolutionsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutSellingSystemSettingsOutcome> PutSellingSystemSettingsOutcomeCallable;
      typedef std::future<RejectEngagementInvitationOutcome> RejectEngagementInvitationOutcomeCallable;
      typedef std::future<StartEngagementByAcceptingInvitationTaskOutcome> StartEngagementByAcceptingInvitationTaskOutcomeCallable;
      typedef std::future<StartEngagementFromOpportunityTaskOutcome> StartEngagementFromOpportunityTaskOutcomeCallable;
      typedef std::future<StartResourceSnapshotJobOutcome> StartResourceSnapshotJobOutcomeCallable;
      typedef std::future<StopResourceSnapshotJobOutcome> StopResourceSnapshotJobOutcomeCallable;
      typedef std::future<SubmitOpportunityOutcome> SubmitOpportunityOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateOpportunityOutcome> UpdateOpportunityOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PartnerCentralSellingClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::AcceptEngagementInvitationRequest&, const Model::AcceptEngagementInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptEngagementInvitationResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::AssignOpportunityRequest&, const Model::AssignOpportunityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssignOpportunityResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::AssociateOpportunityRequest&, const Model::AssociateOpportunityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateOpportunityResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::CreateEngagementRequest&, const Model::CreateEngagementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEngagementResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::CreateEngagementInvitationRequest&, const Model::CreateEngagementInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEngagementInvitationResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::CreateOpportunityRequest&, const Model::CreateOpportunityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOpportunityResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::CreateResourceSnapshotRequest&, const Model::CreateResourceSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceSnapshotResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::CreateResourceSnapshotJobRequest&, const Model::CreateResourceSnapshotJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceSnapshotJobResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::DeleteResourceSnapshotJobRequest&, const Model::DeleteResourceSnapshotJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceSnapshotJobResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::DisassociateOpportunityRequest&, const Model::DisassociateOpportunityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateOpportunityResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::GetAwsOpportunitySummaryRequest&, const Model::GetAwsOpportunitySummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAwsOpportunitySummaryResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::GetEngagementRequest&, const Model::GetEngagementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEngagementResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::GetEngagementInvitationRequest&, const Model::GetEngagementInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEngagementInvitationResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::GetOpportunityRequest&, const Model::GetOpportunityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOpportunityResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::GetResourceSnapshotRequest&, const Model::GetResourceSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceSnapshotResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::GetResourceSnapshotJobRequest&, const Model::GetResourceSnapshotJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceSnapshotJobResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::GetSellingSystemSettingsRequest&, const Model::GetSellingSystemSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSellingSystemSettingsResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::ListEngagementByAcceptingInvitationTasksRequest&, const Model::ListEngagementByAcceptingInvitationTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEngagementByAcceptingInvitationTasksResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::ListEngagementFromOpportunityTasksRequest&, const Model::ListEngagementFromOpportunityTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEngagementFromOpportunityTasksResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::ListEngagementInvitationsRequest&, const Model::ListEngagementInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEngagementInvitationsResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::ListEngagementMembersRequest&, const Model::ListEngagementMembersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEngagementMembersResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::ListEngagementResourceAssociationsRequest&, const Model::ListEngagementResourceAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEngagementResourceAssociationsResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::ListEngagementsRequest&, const Model::ListEngagementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEngagementsResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::ListOpportunitiesRequest&, const Model::ListOpportunitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOpportunitiesResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::ListResourceSnapshotJobsRequest&, const Model::ListResourceSnapshotJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceSnapshotJobsResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::ListResourceSnapshotsRequest&, const Model::ListResourceSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceSnapshotsResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::ListSolutionsRequest&, const Model::ListSolutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSolutionsResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::PutSellingSystemSettingsRequest&, const Model::PutSellingSystemSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSellingSystemSettingsResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::RejectEngagementInvitationRequest&, const Model::RejectEngagementInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectEngagementInvitationResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::StartEngagementByAcceptingInvitationTaskRequest&, const Model::StartEngagementByAcceptingInvitationTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartEngagementByAcceptingInvitationTaskResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::StartEngagementFromOpportunityTaskRequest&, const Model::StartEngagementFromOpportunityTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartEngagementFromOpportunityTaskResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::StartResourceSnapshotJobRequest&, const Model::StartResourceSnapshotJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartResourceSnapshotJobResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::StopResourceSnapshotJobRequest&, const Model::StopResourceSnapshotJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopResourceSnapshotJobResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::SubmitOpportunityRequest&, const Model::SubmitOpportunityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubmitOpportunityResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::UpdateOpportunityRequest&, const Model::UpdateOpportunityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOpportunityResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace PartnerCentralSelling
} // namespace Aws
