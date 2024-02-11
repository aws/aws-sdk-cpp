/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/osis/OSISErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/osis/OSISEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in OSISClient header */
#include <aws/osis/model/CreatePipelineResult.h>
#include <aws/osis/model/DeletePipelineResult.h>
#include <aws/osis/model/GetPipelineResult.h>
#include <aws/osis/model/GetPipelineBlueprintResult.h>
#include <aws/osis/model/GetPipelineChangeProgressResult.h>
#include <aws/osis/model/ListPipelineBlueprintsResult.h>
#include <aws/osis/model/ListPipelinesResult.h>
#include <aws/osis/model/ListTagsForResourceResult.h>
#include <aws/osis/model/StartPipelineResult.h>
#include <aws/osis/model/StopPipelineResult.h>
#include <aws/osis/model/TagResourceResult.h>
#include <aws/osis/model/UntagResourceResult.h>
#include <aws/osis/model/UpdatePipelineResult.h>
#include <aws/osis/model/ValidatePipelineResult.h>
/* End of service model headers required in OSISClient header */

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

  namespace OSIS
  {
    using OSISClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using OSISEndpointProviderBase = Aws::OSIS::Endpoint::OSISEndpointProviderBase;
    using OSISEndpointProvider = Aws::OSIS::Endpoint::OSISEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in OSISClient header */
      class CreatePipelineRequest;
      class DeletePipelineRequest;
      class GetPipelineRequest;
      class GetPipelineBlueprintRequest;
      class GetPipelineChangeProgressRequest;
      class ListPipelineBlueprintsRequest;
      class ListPipelinesRequest;
      class ListTagsForResourceRequest;
      class StartPipelineRequest;
      class StopPipelineRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdatePipelineRequest;
      class ValidatePipelineRequest;
      /* End of service model forward declarations required in OSISClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreatePipelineResult, OSISError> CreatePipelineOutcome;
      typedef Aws::Utils::Outcome<DeletePipelineResult, OSISError> DeletePipelineOutcome;
      typedef Aws::Utils::Outcome<GetPipelineResult, OSISError> GetPipelineOutcome;
      typedef Aws::Utils::Outcome<GetPipelineBlueprintResult, OSISError> GetPipelineBlueprintOutcome;
      typedef Aws::Utils::Outcome<GetPipelineChangeProgressResult, OSISError> GetPipelineChangeProgressOutcome;
      typedef Aws::Utils::Outcome<ListPipelineBlueprintsResult, OSISError> ListPipelineBlueprintsOutcome;
      typedef Aws::Utils::Outcome<ListPipelinesResult, OSISError> ListPipelinesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, OSISError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartPipelineResult, OSISError> StartPipelineOutcome;
      typedef Aws::Utils::Outcome<StopPipelineResult, OSISError> StopPipelineOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, OSISError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, OSISError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdatePipelineResult, OSISError> UpdatePipelineOutcome;
      typedef Aws::Utils::Outcome<ValidatePipelineResult, OSISError> ValidatePipelineOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreatePipelineOutcome> CreatePipelineOutcomeCallable;
      typedef std::future<DeletePipelineOutcome> DeletePipelineOutcomeCallable;
      typedef std::future<GetPipelineOutcome> GetPipelineOutcomeCallable;
      typedef std::future<GetPipelineBlueprintOutcome> GetPipelineBlueprintOutcomeCallable;
      typedef std::future<GetPipelineChangeProgressOutcome> GetPipelineChangeProgressOutcomeCallable;
      typedef std::future<ListPipelineBlueprintsOutcome> ListPipelineBlueprintsOutcomeCallable;
      typedef std::future<ListPipelinesOutcome> ListPipelinesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartPipelineOutcome> StartPipelineOutcomeCallable;
      typedef std::future<StopPipelineOutcome> StopPipelineOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdatePipelineOutcome> UpdatePipelineOutcomeCallable;
      typedef std::future<ValidatePipelineOutcome> ValidatePipelineOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class OSISClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const OSISClient*, const Model::CreatePipelineRequest&, const Model::CreatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePipelineResponseReceivedHandler;
    typedef std::function<void(const OSISClient*, const Model::DeletePipelineRequest&, const Model::DeletePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePipelineResponseReceivedHandler;
    typedef std::function<void(const OSISClient*, const Model::GetPipelineRequest&, const Model::GetPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPipelineResponseReceivedHandler;
    typedef std::function<void(const OSISClient*, const Model::GetPipelineBlueprintRequest&, const Model::GetPipelineBlueprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPipelineBlueprintResponseReceivedHandler;
    typedef std::function<void(const OSISClient*, const Model::GetPipelineChangeProgressRequest&, const Model::GetPipelineChangeProgressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPipelineChangeProgressResponseReceivedHandler;
    typedef std::function<void(const OSISClient*, const Model::ListPipelineBlueprintsRequest&, const Model::ListPipelineBlueprintsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPipelineBlueprintsResponseReceivedHandler;
    typedef std::function<void(const OSISClient*, const Model::ListPipelinesRequest&, const Model::ListPipelinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPipelinesResponseReceivedHandler;
    typedef std::function<void(const OSISClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const OSISClient*, const Model::StartPipelineRequest&, const Model::StartPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartPipelineResponseReceivedHandler;
    typedef std::function<void(const OSISClient*, const Model::StopPipelineRequest&, const Model::StopPipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopPipelineResponseReceivedHandler;
    typedef std::function<void(const OSISClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const OSISClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const OSISClient*, const Model::UpdatePipelineRequest&, const Model::UpdatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePipelineResponseReceivedHandler;
    typedef std::function<void(const OSISClient*, const Model::ValidatePipelineRequest&, const Model::ValidatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidatePipelineResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace OSIS
} // namespace Aws
