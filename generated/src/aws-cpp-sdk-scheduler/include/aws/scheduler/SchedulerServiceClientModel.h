/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/scheduler/SchedulerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/scheduler/SchedulerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SchedulerClient header */
#include <aws/scheduler/model/CreateScheduleResult.h>
#include <aws/scheduler/model/CreateScheduleGroupResult.h>
#include <aws/scheduler/model/DeleteScheduleResult.h>
#include <aws/scheduler/model/DeleteScheduleGroupResult.h>
#include <aws/scheduler/model/GetScheduleResult.h>
#include <aws/scheduler/model/GetScheduleGroupResult.h>
#include <aws/scheduler/model/ListScheduleGroupsResult.h>
#include <aws/scheduler/model/ListSchedulesResult.h>
#include <aws/scheduler/model/ListTagsForResourceResult.h>
#include <aws/scheduler/model/TagResourceResult.h>
#include <aws/scheduler/model/UntagResourceResult.h>
#include <aws/scheduler/model/UpdateScheduleResult.h>
/* End of service model headers required in SchedulerClient header */

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

  namespace Scheduler
  {
    using SchedulerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SchedulerEndpointProviderBase = Aws::Scheduler::Endpoint::SchedulerEndpointProviderBase;
    using SchedulerEndpointProvider = Aws::Scheduler::Endpoint::SchedulerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SchedulerClient header */
      class CreateScheduleRequest;
      class CreateScheduleGroupRequest;
      class DeleteScheduleRequest;
      class DeleteScheduleGroupRequest;
      class GetScheduleRequest;
      class GetScheduleGroupRequest;
      class ListScheduleGroupsRequest;
      class ListSchedulesRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateScheduleRequest;
      /* End of service model forward declarations required in SchedulerClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateScheduleResult, SchedulerError> CreateScheduleOutcome;
      typedef Aws::Utils::Outcome<CreateScheduleGroupResult, SchedulerError> CreateScheduleGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteScheduleResult, SchedulerError> DeleteScheduleOutcome;
      typedef Aws::Utils::Outcome<DeleteScheduleGroupResult, SchedulerError> DeleteScheduleGroupOutcome;
      typedef Aws::Utils::Outcome<GetScheduleResult, SchedulerError> GetScheduleOutcome;
      typedef Aws::Utils::Outcome<GetScheduleGroupResult, SchedulerError> GetScheduleGroupOutcome;
      typedef Aws::Utils::Outcome<ListScheduleGroupsResult, SchedulerError> ListScheduleGroupsOutcome;
      typedef Aws::Utils::Outcome<ListSchedulesResult, SchedulerError> ListSchedulesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SchedulerError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, SchedulerError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, SchedulerError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateScheduleResult, SchedulerError> UpdateScheduleOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateScheduleOutcome> CreateScheduleOutcomeCallable;
      typedef std::future<CreateScheduleGroupOutcome> CreateScheduleGroupOutcomeCallable;
      typedef std::future<DeleteScheduleOutcome> DeleteScheduleOutcomeCallable;
      typedef std::future<DeleteScheduleGroupOutcome> DeleteScheduleGroupOutcomeCallable;
      typedef std::future<GetScheduleOutcome> GetScheduleOutcomeCallable;
      typedef std::future<GetScheduleGroupOutcome> GetScheduleGroupOutcomeCallable;
      typedef std::future<ListScheduleGroupsOutcome> ListScheduleGroupsOutcomeCallable;
      typedef std::future<ListSchedulesOutcome> ListSchedulesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateScheduleOutcome> UpdateScheduleOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SchedulerClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SchedulerClient*, const Model::CreateScheduleRequest&, const Model::CreateScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateScheduleResponseReceivedHandler;
    typedef std::function<void(const SchedulerClient*, const Model::CreateScheduleGroupRequest&, const Model::CreateScheduleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateScheduleGroupResponseReceivedHandler;
    typedef std::function<void(const SchedulerClient*, const Model::DeleteScheduleRequest&, const Model::DeleteScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScheduleResponseReceivedHandler;
    typedef std::function<void(const SchedulerClient*, const Model::DeleteScheduleGroupRequest&, const Model::DeleteScheduleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScheduleGroupResponseReceivedHandler;
    typedef std::function<void(const SchedulerClient*, const Model::GetScheduleRequest&, const Model::GetScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetScheduleResponseReceivedHandler;
    typedef std::function<void(const SchedulerClient*, const Model::GetScheduleGroupRequest&, const Model::GetScheduleGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetScheduleGroupResponseReceivedHandler;
    typedef std::function<void(const SchedulerClient*, const Model::ListScheduleGroupsRequest&, const Model::ListScheduleGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListScheduleGroupsResponseReceivedHandler;
    typedef std::function<void(const SchedulerClient*, const Model::ListSchedulesRequest&, const Model::ListSchedulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchedulesResponseReceivedHandler;
    typedef std::function<void(const SchedulerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SchedulerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SchedulerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SchedulerClient*, const Model::UpdateScheduleRequest&, const Model::UpdateScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateScheduleResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Scheduler
} // namespace Aws
