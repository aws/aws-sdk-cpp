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
#include <aws/partnercentral-selling/model/CreateOpportunityResult.h>
#include <aws/partnercentral-selling/model/GetAwsOpportunitySummaryResult.h>
#include <aws/partnercentral-selling/model/GetEngagementInvitationResult.h>
#include <aws/partnercentral-selling/model/GetOpportunityResult.h>
#include <aws/partnercentral-selling/model/ListEngagementInvitationsResult.h>
#include <aws/partnercentral-selling/model/ListOpportunitiesResult.h>
#include <aws/partnercentral-selling/model/ListSolutionsResult.h>
#include <aws/partnercentral-selling/model/StartEngagementByAcceptingInvitationTaskResult.h>
#include <aws/partnercentral-selling/model/StartEngagementFromOpportunityTaskResult.h>
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
      class AssignOpportunityRequest;
      class AssociateOpportunityRequest;
      class CreateOpportunityRequest;
      class DisassociateOpportunityRequest;
      class GetAwsOpportunitySummaryRequest;
      class GetEngagementInvitationRequest;
      class GetOpportunityRequest;
      class ListEngagementInvitationsRequest;
      class ListOpportunitiesRequest;
      class ListSolutionsRequest;
      class RejectEngagementInvitationRequest;
      class StartEngagementByAcceptingInvitationTaskRequest;
      class StartEngagementFromOpportunityTaskRequest;
      class UpdateOpportunityRequest;
      /* End of service model forward declarations required in PartnerCentralSellingClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, PartnerCentralSellingError> AssignOpportunityOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PartnerCentralSellingError> AssociateOpportunityOutcome;
      typedef Aws::Utils::Outcome<CreateOpportunityResult, PartnerCentralSellingError> CreateOpportunityOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PartnerCentralSellingError> DisassociateOpportunityOutcome;
      typedef Aws::Utils::Outcome<GetAwsOpportunitySummaryResult, PartnerCentralSellingError> GetAwsOpportunitySummaryOutcome;
      typedef Aws::Utils::Outcome<GetEngagementInvitationResult, PartnerCentralSellingError> GetEngagementInvitationOutcome;
      typedef Aws::Utils::Outcome<GetOpportunityResult, PartnerCentralSellingError> GetOpportunityOutcome;
      typedef Aws::Utils::Outcome<ListEngagementInvitationsResult, PartnerCentralSellingError> ListEngagementInvitationsOutcome;
      typedef Aws::Utils::Outcome<ListOpportunitiesResult, PartnerCentralSellingError> ListOpportunitiesOutcome;
      typedef Aws::Utils::Outcome<ListSolutionsResult, PartnerCentralSellingError> ListSolutionsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PartnerCentralSellingError> RejectEngagementInvitationOutcome;
      typedef Aws::Utils::Outcome<StartEngagementByAcceptingInvitationTaskResult, PartnerCentralSellingError> StartEngagementByAcceptingInvitationTaskOutcome;
      typedef Aws::Utils::Outcome<StartEngagementFromOpportunityTaskResult, PartnerCentralSellingError> StartEngagementFromOpportunityTaskOutcome;
      typedef Aws::Utils::Outcome<UpdateOpportunityResult, PartnerCentralSellingError> UpdateOpportunityOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssignOpportunityOutcome> AssignOpportunityOutcomeCallable;
      typedef std::future<AssociateOpportunityOutcome> AssociateOpportunityOutcomeCallable;
      typedef std::future<CreateOpportunityOutcome> CreateOpportunityOutcomeCallable;
      typedef std::future<DisassociateOpportunityOutcome> DisassociateOpportunityOutcomeCallable;
      typedef std::future<GetAwsOpportunitySummaryOutcome> GetAwsOpportunitySummaryOutcomeCallable;
      typedef std::future<GetEngagementInvitationOutcome> GetEngagementInvitationOutcomeCallable;
      typedef std::future<GetOpportunityOutcome> GetOpportunityOutcomeCallable;
      typedef std::future<ListEngagementInvitationsOutcome> ListEngagementInvitationsOutcomeCallable;
      typedef std::future<ListOpportunitiesOutcome> ListOpportunitiesOutcomeCallable;
      typedef std::future<ListSolutionsOutcome> ListSolutionsOutcomeCallable;
      typedef std::future<RejectEngagementInvitationOutcome> RejectEngagementInvitationOutcomeCallable;
      typedef std::future<StartEngagementByAcceptingInvitationTaskOutcome> StartEngagementByAcceptingInvitationTaskOutcomeCallable;
      typedef std::future<StartEngagementFromOpportunityTaskOutcome> StartEngagementFromOpportunityTaskOutcomeCallable;
      typedef std::future<UpdateOpportunityOutcome> UpdateOpportunityOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PartnerCentralSellingClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::AssignOpportunityRequest&, const Model::AssignOpportunityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssignOpportunityResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::AssociateOpportunityRequest&, const Model::AssociateOpportunityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateOpportunityResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::CreateOpportunityRequest&, const Model::CreateOpportunityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOpportunityResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::DisassociateOpportunityRequest&, const Model::DisassociateOpportunityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateOpportunityResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::GetAwsOpportunitySummaryRequest&, const Model::GetAwsOpportunitySummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAwsOpportunitySummaryResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::GetEngagementInvitationRequest&, const Model::GetEngagementInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEngagementInvitationResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::GetOpportunityRequest&, const Model::GetOpportunityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOpportunityResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::ListEngagementInvitationsRequest&, const Model::ListEngagementInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEngagementInvitationsResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::ListOpportunitiesRequest&, const Model::ListOpportunitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOpportunitiesResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::ListSolutionsRequest&, const Model::ListSolutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSolutionsResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::RejectEngagementInvitationRequest&, const Model::RejectEngagementInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectEngagementInvitationResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::StartEngagementByAcceptingInvitationTaskRequest&, const Model::StartEngagementByAcceptingInvitationTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartEngagementByAcceptingInvitationTaskResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::StartEngagementFromOpportunityTaskRequest&, const Model::StartEngagementFromOpportunityTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartEngagementFromOpportunityTaskResponseReceivedHandler;
    typedef std::function<void(const PartnerCentralSellingClient*, const Model::UpdateOpportunityRequest&, const Model::UpdateOpportunityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOpportunityResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace PartnerCentralSelling
} // namespace Aws
