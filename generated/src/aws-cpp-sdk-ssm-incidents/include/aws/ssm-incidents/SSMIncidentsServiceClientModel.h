/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/ssm-incidents/SSMIncidentsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/ssm-incidents/SSMIncidentsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SSMIncidentsClient header */
#include <aws/ssm-incidents/model/CreateReplicationSetResult.h>
#include <aws/ssm-incidents/model/CreateResponsePlanResult.h>
#include <aws/ssm-incidents/model/CreateTimelineEventResult.h>
#include <aws/ssm-incidents/model/DeleteIncidentRecordResult.h>
#include <aws/ssm-incidents/model/DeleteReplicationSetResult.h>
#include <aws/ssm-incidents/model/DeleteResourcePolicyResult.h>
#include <aws/ssm-incidents/model/DeleteResponsePlanResult.h>
#include <aws/ssm-incidents/model/DeleteTimelineEventResult.h>
#include <aws/ssm-incidents/model/GetIncidentRecordResult.h>
#include <aws/ssm-incidents/model/GetReplicationSetResult.h>
#include <aws/ssm-incidents/model/GetResourcePoliciesResult.h>
#include <aws/ssm-incidents/model/GetResponsePlanResult.h>
#include <aws/ssm-incidents/model/GetTimelineEventResult.h>
#include <aws/ssm-incidents/model/ListIncidentRecordsResult.h>
#include <aws/ssm-incidents/model/ListRelatedItemsResult.h>
#include <aws/ssm-incidents/model/ListReplicationSetsResult.h>
#include <aws/ssm-incidents/model/ListResponsePlansResult.h>
#include <aws/ssm-incidents/model/ListTagsForResourceResult.h>
#include <aws/ssm-incidents/model/ListTimelineEventsResult.h>
#include <aws/ssm-incidents/model/PutResourcePolicyResult.h>
#include <aws/ssm-incidents/model/StartIncidentResult.h>
#include <aws/ssm-incidents/model/TagResourceResult.h>
#include <aws/ssm-incidents/model/UntagResourceResult.h>
#include <aws/ssm-incidents/model/UpdateDeletionProtectionResult.h>
#include <aws/ssm-incidents/model/UpdateIncidentRecordResult.h>
#include <aws/ssm-incidents/model/UpdateRelatedItemsResult.h>
#include <aws/ssm-incidents/model/UpdateReplicationSetResult.h>
#include <aws/ssm-incidents/model/UpdateResponsePlanResult.h>
#include <aws/ssm-incidents/model/UpdateTimelineEventResult.h>
/* End of service model headers required in SSMIncidentsClient header */

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

  namespace SSMIncidents
  {
    using SSMIncidentsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SSMIncidentsEndpointProviderBase = Aws::SSMIncidents::Endpoint::SSMIncidentsEndpointProviderBase;
    using SSMIncidentsEndpointProvider = Aws::SSMIncidents::Endpoint::SSMIncidentsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SSMIncidentsClient header */
      class CreateReplicationSetRequest;
      class CreateResponsePlanRequest;
      class CreateTimelineEventRequest;
      class DeleteIncidentRecordRequest;
      class DeleteReplicationSetRequest;
      class DeleteResourcePolicyRequest;
      class DeleteResponsePlanRequest;
      class DeleteTimelineEventRequest;
      class GetIncidentRecordRequest;
      class GetReplicationSetRequest;
      class GetResourcePoliciesRequest;
      class GetResponsePlanRequest;
      class GetTimelineEventRequest;
      class ListIncidentRecordsRequest;
      class ListRelatedItemsRequest;
      class ListReplicationSetsRequest;
      class ListResponsePlansRequest;
      class ListTagsForResourceRequest;
      class ListTimelineEventsRequest;
      class PutResourcePolicyRequest;
      class StartIncidentRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateDeletionProtectionRequest;
      class UpdateIncidentRecordRequest;
      class UpdateRelatedItemsRequest;
      class UpdateReplicationSetRequest;
      class UpdateResponsePlanRequest;
      class UpdateTimelineEventRequest;
      /* End of service model forward declarations required in SSMIncidentsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateReplicationSetResult, SSMIncidentsError> CreateReplicationSetOutcome;
      typedef Aws::Utils::Outcome<CreateResponsePlanResult, SSMIncidentsError> CreateResponsePlanOutcome;
      typedef Aws::Utils::Outcome<CreateTimelineEventResult, SSMIncidentsError> CreateTimelineEventOutcome;
      typedef Aws::Utils::Outcome<DeleteIncidentRecordResult, SSMIncidentsError> DeleteIncidentRecordOutcome;
      typedef Aws::Utils::Outcome<DeleteReplicationSetResult, SSMIncidentsError> DeleteReplicationSetOutcome;
      typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, SSMIncidentsError> DeleteResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteResponsePlanResult, SSMIncidentsError> DeleteResponsePlanOutcome;
      typedef Aws::Utils::Outcome<DeleteTimelineEventResult, SSMIncidentsError> DeleteTimelineEventOutcome;
      typedef Aws::Utils::Outcome<GetIncidentRecordResult, SSMIncidentsError> GetIncidentRecordOutcome;
      typedef Aws::Utils::Outcome<GetReplicationSetResult, SSMIncidentsError> GetReplicationSetOutcome;
      typedef Aws::Utils::Outcome<GetResourcePoliciesResult, SSMIncidentsError> GetResourcePoliciesOutcome;
      typedef Aws::Utils::Outcome<GetResponsePlanResult, SSMIncidentsError> GetResponsePlanOutcome;
      typedef Aws::Utils::Outcome<GetTimelineEventResult, SSMIncidentsError> GetTimelineEventOutcome;
      typedef Aws::Utils::Outcome<ListIncidentRecordsResult, SSMIncidentsError> ListIncidentRecordsOutcome;
      typedef Aws::Utils::Outcome<ListRelatedItemsResult, SSMIncidentsError> ListRelatedItemsOutcome;
      typedef Aws::Utils::Outcome<ListReplicationSetsResult, SSMIncidentsError> ListReplicationSetsOutcome;
      typedef Aws::Utils::Outcome<ListResponsePlansResult, SSMIncidentsError> ListResponsePlansOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SSMIncidentsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTimelineEventsResult, SSMIncidentsError> ListTimelineEventsOutcome;
      typedef Aws::Utils::Outcome<PutResourcePolicyResult, SSMIncidentsError> PutResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<StartIncidentResult, SSMIncidentsError> StartIncidentOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, SSMIncidentsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, SSMIncidentsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDeletionProtectionResult, SSMIncidentsError> UpdateDeletionProtectionOutcome;
      typedef Aws::Utils::Outcome<UpdateIncidentRecordResult, SSMIncidentsError> UpdateIncidentRecordOutcome;
      typedef Aws::Utils::Outcome<UpdateRelatedItemsResult, SSMIncidentsError> UpdateRelatedItemsOutcome;
      typedef Aws::Utils::Outcome<UpdateReplicationSetResult, SSMIncidentsError> UpdateReplicationSetOutcome;
      typedef Aws::Utils::Outcome<UpdateResponsePlanResult, SSMIncidentsError> UpdateResponsePlanOutcome;
      typedef Aws::Utils::Outcome<UpdateTimelineEventResult, SSMIncidentsError> UpdateTimelineEventOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateReplicationSetOutcome> CreateReplicationSetOutcomeCallable;
      typedef std::future<CreateResponsePlanOutcome> CreateResponsePlanOutcomeCallable;
      typedef std::future<CreateTimelineEventOutcome> CreateTimelineEventOutcomeCallable;
      typedef std::future<DeleteIncidentRecordOutcome> DeleteIncidentRecordOutcomeCallable;
      typedef std::future<DeleteReplicationSetOutcome> DeleteReplicationSetOutcomeCallable;
      typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
      typedef std::future<DeleteResponsePlanOutcome> DeleteResponsePlanOutcomeCallable;
      typedef std::future<DeleteTimelineEventOutcome> DeleteTimelineEventOutcomeCallable;
      typedef std::future<GetIncidentRecordOutcome> GetIncidentRecordOutcomeCallable;
      typedef std::future<GetReplicationSetOutcome> GetReplicationSetOutcomeCallable;
      typedef std::future<GetResourcePoliciesOutcome> GetResourcePoliciesOutcomeCallable;
      typedef std::future<GetResponsePlanOutcome> GetResponsePlanOutcomeCallable;
      typedef std::future<GetTimelineEventOutcome> GetTimelineEventOutcomeCallable;
      typedef std::future<ListIncidentRecordsOutcome> ListIncidentRecordsOutcomeCallable;
      typedef std::future<ListRelatedItemsOutcome> ListRelatedItemsOutcomeCallable;
      typedef std::future<ListReplicationSetsOutcome> ListReplicationSetsOutcomeCallable;
      typedef std::future<ListResponsePlansOutcome> ListResponsePlansOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTimelineEventsOutcome> ListTimelineEventsOutcomeCallable;
      typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
      typedef std::future<StartIncidentOutcome> StartIncidentOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDeletionProtectionOutcome> UpdateDeletionProtectionOutcomeCallable;
      typedef std::future<UpdateIncidentRecordOutcome> UpdateIncidentRecordOutcomeCallable;
      typedef std::future<UpdateRelatedItemsOutcome> UpdateRelatedItemsOutcomeCallable;
      typedef std::future<UpdateReplicationSetOutcome> UpdateReplicationSetOutcomeCallable;
      typedef std::future<UpdateResponsePlanOutcome> UpdateResponsePlanOutcomeCallable;
      typedef std::future<UpdateTimelineEventOutcome> UpdateTimelineEventOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SSMIncidentsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SSMIncidentsClient*, const Model::CreateReplicationSetRequest&, const Model::CreateReplicationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplicationSetResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::CreateResponsePlanRequest&, const Model::CreateResponsePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResponsePlanResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::CreateTimelineEventRequest&, const Model::CreateTimelineEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTimelineEventResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::DeleteIncidentRecordRequest&, const Model::DeleteIncidentRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIncidentRecordResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::DeleteReplicationSetRequest&, const Model::DeleteReplicationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReplicationSetResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::DeleteResponsePlanRequest&, const Model::DeleteResponsePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResponsePlanResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::DeleteTimelineEventRequest&, const Model::DeleteTimelineEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTimelineEventResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::GetIncidentRecordRequest&, const Model::GetIncidentRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIncidentRecordResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::GetReplicationSetRequest&, const Model::GetReplicationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReplicationSetResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::GetResourcePoliciesRequest&, const Model::GetResourcePoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePoliciesResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::GetResponsePlanRequest&, const Model::GetResponsePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResponsePlanResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::GetTimelineEventRequest&, const Model::GetTimelineEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTimelineEventResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::ListIncidentRecordsRequest&, const Model::ListIncidentRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIncidentRecordsResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::ListRelatedItemsRequest&, const Model::ListRelatedItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRelatedItemsResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::ListReplicationSetsRequest&, const Model::ListReplicationSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReplicationSetsResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::ListResponsePlansRequest&, const Model::ListResponsePlansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResponsePlansResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::ListTimelineEventsRequest&, const Model::ListTimelineEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTimelineEventsResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::StartIncidentRequest&, const Model::StartIncidentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartIncidentResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::UpdateDeletionProtectionRequest&, const Model::UpdateDeletionProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeletionProtectionResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::UpdateIncidentRecordRequest&, const Model::UpdateIncidentRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIncidentRecordResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::UpdateRelatedItemsRequest&, const Model::UpdateRelatedItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRelatedItemsResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::UpdateReplicationSetRequest&, const Model::UpdateReplicationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReplicationSetResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::UpdateResponsePlanRequest&, const Model::UpdateResponsePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResponsePlanResponseReceivedHandler;
    typedef std::function<void(const SSMIncidentsClient*, const Model::UpdateTimelineEventRequest&, const Model::UpdateTimelineEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTimelineEventResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SSMIncidents
} // namespace Aws
