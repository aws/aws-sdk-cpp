/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/states/SFNErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/states/SFNEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SFNClient header */
#include <aws/states/model/CreateActivityResult.h>
#include <aws/states/model/CreateStateMachineResult.h>
#include <aws/states/model/DeleteActivityResult.h>
#include <aws/states/model/DeleteStateMachineResult.h>
#include <aws/states/model/DescribeActivityResult.h>
#include <aws/states/model/DescribeExecutionResult.h>
#include <aws/states/model/DescribeMapRunResult.h>
#include <aws/states/model/DescribeStateMachineResult.h>
#include <aws/states/model/DescribeStateMachineForExecutionResult.h>
#include <aws/states/model/GetActivityTaskResult.h>
#include <aws/states/model/GetExecutionHistoryResult.h>
#include <aws/states/model/ListActivitiesResult.h>
#include <aws/states/model/ListExecutionsResult.h>
#include <aws/states/model/ListMapRunsResult.h>
#include <aws/states/model/ListStateMachinesResult.h>
#include <aws/states/model/ListTagsForResourceResult.h>
#include <aws/states/model/SendTaskFailureResult.h>
#include <aws/states/model/SendTaskHeartbeatResult.h>
#include <aws/states/model/SendTaskSuccessResult.h>
#include <aws/states/model/StartExecutionResult.h>
#include <aws/states/model/StartSyncExecutionResult.h>
#include <aws/states/model/StopExecutionResult.h>
#include <aws/states/model/TagResourceResult.h>
#include <aws/states/model/UntagResourceResult.h>
#include <aws/states/model/UpdateMapRunResult.h>
#include <aws/states/model/UpdateStateMachineResult.h>
/* End of service model headers required in SFNClient header */

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

  namespace SFN
  {
    using SFNClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SFNEndpointProviderBase = Aws::SFN::Endpoint::SFNEndpointProviderBase;
    using SFNEndpointProvider = Aws::SFN::Endpoint::SFNEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SFNClient header */
      class CreateActivityRequest;
      class CreateStateMachineRequest;
      class DeleteActivityRequest;
      class DeleteStateMachineRequest;
      class DescribeActivityRequest;
      class DescribeExecutionRequest;
      class DescribeMapRunRequest;
      class DescribeStateMachineRequest;
      class DescribeStateMachineForExecutionRequest;
      class GetActivityTaskRequest;
      class GetExecutionHistoryRequest;
      class ListActivitiesRequest;
      class ListExecutionsRequest;
      class ListMapRunsRequest;
      class ListStateMachinesRequest;
      class ListTagsForResourceRequest;
      class SendTaskFailureRequest;
      class SendTaskHeartbeatRequest;
      class SendTaskSuccessRequest;
      class StartExecutionRequest;
      class StartSyncExecutionRequest;
      class StopExecutionRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateMapRunRequest;
      class UpdateStateMachineRequest;
      /* End of service model forward declarations required in SFNClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateActivityResult, SFNError> CreateActivityOutcome;
      typedef Aws::Utils::Outcome<CreateStateMachineResult, SFNError> CreateStateMachineOutcome;
      typedef Aws::Utils::Outcome<DeleteActivityResult, SFNError> DeleteActivityOutcome;
      typedef Aws::Utils::Outcome<DeleteStateMachineResult, SFNError> DeleteStateMachineOutcome;
      typedef Aws::Utils::Outcome<DescribeActivityResult, SFNError> DescribeActivityOutcome;
      typedef Aws::Utils::Outcome<DescribeExecutionResult, SFNError> DescribeExecutionOutcome;
      typedef Aws::Utils::Outcome<DescribeMapRunResult, SFNError> DescribeMapRunOutcome;
      typedef Aws::Utils::Outcome<DescribeStateMachineResult, SFNError> DescribeStateMachineOutcome;
      typedef Aws::Utils::Outcome<DescribeStateMachineForExecutionResult, SFNError> DescribeStateMachineForExecutionOutcome;
      typedef Aws::Utils::Outcome<GetActivityTaskResult, SFNError> GetActivityTaskOutcome;
      typedef Aws::Utils::Outcome<GetExecutionHistoryResult, SFNError> GetExecutionHistoryOutcome;
      typedef Aws::Utils::Outcome<ListActivitiesResult, SFNError> ListActivitiesOutcome;
      typedef Aws::Utils::Outcome<ListExecutionsResult, SFNError> ListExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListMapRunsResult, SFNError> ListMapRunsOutcome;
      typedef Aws::Utils::Outcome<ListStateMachinesResult, SFNError> ListStateMachinesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SFNError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<SendTaskFailureResult, SFNError> SendTaskFailureOutcome;
      typedef Aws::Utils::Outcome<SendTaskHeartbeatResult, SFNError> SendTaskHeartbeatOutcome;
      typedef Aws::Utils::Outcome<SendTaskSuccessResult, SFNError> SendTaskSuccessOutcome;
      typedef Aws::Utils::Outcome<StartExecutionResult, SFNError> StartExecutionOutcome;
      typedef Aws::Utils::Outcome<StartSyncExecutionResult, SFNError> StartSyncExecutionOutcome;
      typedef Aws::Utils::Outcome<StopExecutionResult, SFNError> StopExecutionOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, SFNError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, SFNError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateMapRunResult, SFNError> UpdateMapRunOutcome;
      typedef Aws::Utils::Outcome<UpdateStateMachineResult, SFNError> UpdateStateMachineOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateActivityOutcome> CreateActivityOutcomeCallable;
      typedef std::future<CreateStateMachineOutcome> CreateStateMachineOutcomeCallable;
      typedef std::future<DeleteActivityOutcome> DeleteActivityOutcomeCallable;
      typedef std::future<DeleteStateMachineOutcome> DeleteStateMachineOutcomeCallable;
      typedef std::future<DescribeActivityOutcome> DescribeActivityOutcomeCallable;
      typedef std::future<DescribeExecutionOutcome> DescribeExecutionOutcomeCallable;
      typedef std::future<DescribeMapRunOutcome> DescribeMapRunOutcomeCallable;
      typedef std::future<DescribeStateMachineOutcome> DescribeStateMachineOutcomeCallable;
      typedef std::future<DescribeStateMachineForExecutionOutcome> DescribeStateMachineForExecutionOutcomeCallable;
      typedef std::future<GetActivityTaskOutcome> GetActivityTaskOutcomeCallable;
      typedef std::future<GetExecutionHistoryOutcome> GetExecutionHistoryOutcomeCallable;
      typedef std::future<ListActivitiesOutcome> ListActivitiesOutcomeCallable;
      typedef std::future<ListExecutionsOutcome> ListExecutionsOutcomeCallable;
      typedef std::future<ListMapRunsOutcome> ListMapRunsOutcomeCallable;
      typedef std::future<ListStateMachinesOutcome> ListStateMachinesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<SendTaskFailureOutcome> SendTaskFailureOutcomeCallable;
      typedef std::future<SendTaskHeartbeatOutcome> SendTaskHeartbeatOutcomeCallable;
      typedef std::future<SendTaskSuccessOutcome> SendTaskSuccessOutcomeCallable;
      typedef std::future<StartExecutionOutcome> StartExecutionOutcomeCallable;
      typedef std::future<StartSyncExecutionOutcome> StartSyncExecutionOutcomeCallable;
      typedef std::future<StopExecutionOutcome> StopExecutionOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateMapRunOutcome> UpdateMapRunOutcomeCallable;
      typedef std::future<UpdateStateMachineOutcome> UpdateStateMachineOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SFNClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SFNClient*, const Model::CreateActivityRequest&, const Model::CreateActivityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateActivityResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::CreateStateMachineRequest&, const Model::CreateStateMachineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStateMachineResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::DeleteActivityRequest&, const Model::DeleteActivityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteActivityResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::DeleteStateMachineRequest&, const Model::DeleteStateMachineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStateMachineResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::DescribeActivityRequest&, const Model::DescribeActivityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeActivityResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::DescribeExecutionRequest&, const Model::DescribeExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExecutionResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::DescribeMapRunRequest&, const Model::DescribeMapRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMapRunResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::DescribeStateMachineRequest&, const Model::DescribeStateMachineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStateMachineResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::DescribeStateMachineForExecutionRequest&, const Model::DescribeStateMachineForExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStateMachineForExecutionResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::GetActivityTaskRequest&, const Model::GetActivityTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetActivityTaskResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::GetExecutionHistoryRequest&, const Model::GetExecutionHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExecutionHistoryResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::ListActivitiesRequest&, const Model::ListActivitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListActivitiesResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::ListExecutionsRequest&, const Model::ListExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExecutionsResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::ListMapRunsRequest&, const Model::ListMapRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMapRunsResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::ListStateMachinesRequest&, const Model::ListStateMachinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStateMachinesResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::SendTaskFailureRequest&, const Model::SendTaskFailureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendTaskFailureResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::SendTaskHeartbeatRequest&, const Model::SendTaskHeartbeatOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendTaskHeartbeatResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::SendTaskSuccessRequest&, const Model::SendTaskSuccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendTaskSuccessResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::StartExecutionRequest&, const Model::StartExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartExecutionResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::StartSyncExecutionRequest&, const Model::StartSyncExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSyncExecutionResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::StopExecutionRequest&, const Model::StopExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopExecutionResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::UpdateMapRunRequest&, const Model::UpdateMapRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMapRunResponseReceivedHandler;
    typedef std::function<void(const SFNClient*, const Model::UpdateStateMachineRequest&, const Model::UpdateStateMachineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStateMachineResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SFN
} // namespace Aws
