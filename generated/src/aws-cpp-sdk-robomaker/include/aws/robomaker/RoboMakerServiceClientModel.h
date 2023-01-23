/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/robomaker/RoboMakerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/robomaker/RoboMakerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in RoboMakerClient header */
#include <aws/robomaker/model/BatchDeleteWorldsResult.h>
#include <aws/robomaker/model/BatchDescribeSimulationJobResult.h>
#include <aws/robomaker/model/CancelSimulationJobResult.h>
#include <aws/robomaker/model/CancelSimulationJobBatchResult.h>
#include <aws/robomaker/model/CancelWorldExportJobResult.h>
#include <aws/robomaker/model/CancelWorldGenerationJobResult.h>
#include <aws/robomaker/model/CreateRobotApplicationResult.h>
#include <aws/robomaker/model/CreateRobotApplicationVersionResult.h>
#include <aws/robomaker/model/CreateSimulationApplicationResult.h>
#include <aws/robomaker/model/CreateSimulationApplicationVersionResult.h>
#include <aws/robomaker/model/CreateSimulationJobResult.h>
#include <aws/robomaker/model/CreateWorldExportJobResult.h>
#include <aws/robomaker/model/CreateWorldGenerationJobResult.h>
#include <aws/robomaker/model/CreateWorldTemplateResult.h>
#include <aws/robomaker/model/DeleteRobotApplicationResult.h>
#include <aws/robomaker/model/DeleteSimulationApplicationResult.h>
#include <aws/robomaker/model/DeleteWorldTemplateResult.h>
#include <aws/robomaker/model/DescribeRobotApplicationResult.h>
#include <aws/robomaker/model/DescribeSimulationApplicationResult.h>
#include <aws/robomaker/model/DescribeSimulationJobResult.h>
#include <aws/robomaker/model/DescribeSimulationJobBatchResult.h>
#include <aws/robomaker/model/DescribeWorldResult.h>
#include <aws/robomaker/model/DescribeWorldExportJobResult.h>
#include <aws/robomaker/model/DescribeWorldGenerationJobResult.h>
#include <aws/robomaker/model/DescribeWorldTemplateResult.h>
#include <aws/robomaker/model/GetWorldTemplateBodyResult.h>
#include <aws/robomaker/model/ListRobotApplicationsResult.h>
#include <aws/robomaker/model/ListSimulationApplicationsResult.h>
#include <aws/robomaker/model/ListSimulationJobBatchesResult.h>
#include <aws/robomaker/model/ListSimulationJobsResult.h>
#include <aws/robomaker/model/ListTagsForResourceResult.h>
#include <aws/robomaker/model/ListWorldExportJobsResult.h>
#include <aws/robomaker/model/ListWorldGenerationJobsResult.h>
#include <aws/robomaker/model/ListWorldTemplatesResult.h>
#include <aws/robomaker/model/ListWorldsResult.h>
#include <aws/robomaker/model/RestartSimulationJobResult.h>
#include <aws/robomaker/model/StartSimulationJobBatchResult.h>
#include <aws/robomaker/model/TagResourceResult.h>
#include <aws/robomaker/model/UntagResourceResult.h>
#include <aws/robomaker/model/UpdateRobotApplicationResult.h>
#include <aws/robomaker/model/UpdateSimulationApplicationResult.h>
#include <aws/robomaker/model/UpdateWorldTemplateResult.h>
/* End of service model headers required in RoboMakerClient header */

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

  namespace RoboMaker
  {
    using RoboMakerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using RoboMakerEndpointProviderBase = Aws::RoboMaker::Endpoint::RoboMakerEndpointProviderBase;
    using RoboMakerEndpointProvider = Aws::RoboMaker::Endpoint::RoboMakerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in RoboMakerClient header */
      class BatchDeleteWorldsRequest;
      class BatchDescribeSimulationJobRequest;
      class CancelSimulationJobRequest;
      class CancelSimulationJobBatchRequest;
      class CancelWorldExportJobRequest;
      class CancelWorldGenerationJobRequest;
      class CreateRobotApplicationRequest;
      class CreateRobotApplicationVersionRequest;
      class CreateSimulationApplicationRequest;
      class CreateSimulationApplicationVersionRequest;
      class CreateSimulationJobRequest;
      class CreateWorldExportJobRequest;
      class CreateWorldGenerationJobRequest;
      class CreateWorldTemplateRequest;
      class DeleteRobotApplicationRequest;
      class DeleteSimulationApplicationRequest;
      class DeleteWorldTemplateRequest;
      class DescribeRobotApplicationRequest;
      class DescribeSimulationApplicationRequest;
      class DescribeSimulationJobRequest;
      class DescribeSimulationJobBatchRequest;
      class DescribeWorldRequest;
      class DescribeWorldExportJobRequest;
      class DescribeWorldGenerationJobRequest;
      class DescribeWorldTemplateRequest;
      class GetWorldTemplateBodyRequest;
      class ListRobotApplicationsRequest;
      class ListSimulationApplicationsRequest;
      class ListSimulationJobBatchesRequest;
      class ListSimulationJobsRequest;
      class ListTagsForResourceRequest;
      class ListWorldExportJobsRequest;
      class ListWorldGenerationJobsRequest;
      class ListWorldTemplatesRequest;
      class ListWorldsRequest;
      class RestartSimulationJobRequest;
      class StartSimulationJobBatchRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateRobotApplicationRequest;
      class UpdateSimulationApplicationRequest;
      class UpdateWorldTemplateRequest;
      /* End of service model forward declarations required in RoboMakerClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchDeleteWorldsResult, RoboMakerError> BatchDeleteWorldsOutcome;
      typedef Aws::Utils::Outcome<BatchDescribeSimulationJobResult, RoboMakerError> BatchDescribeSimulationJobOutcome;
      typedef Aws::Utils::Outcome<CancelSimulationJobResult, RoboMakerError> CancelSimulationJobOutcome;
      typedef Aws::Utils::Outcome<CancelSimulationJobBatchResult, RoboMakerError> CancelSimulationJobBatchOutcome;
      typedef Aws::Utils::Outcome<CancelWorldExportJobResult, RoboMakerError> CancelWorldExportJobOutcome;
      typedef Aws::Utils::Outcome<CancelWorldGenerationJobResult, RoboMakerError> CancelWorldGenerationJobOutcome;
      typedef Aws::Utils::Outcome<CreateRobotApplicationResult, RoboMakerError> CreateRobotApplicationOutcome;
      typedef Aws::Utils::Outcome<CreateRobotApplicationVersionResult, RoboMakerError> CreateRobotApplicationVersionOutcome;
      typedef Aws::Utils::Outcome<CreateSimulationApplicationResult, RoboMakerError> CreateSimulationApplicationOutcome;
      typedef Aws::Utils::Outcome<CreateSimulationApplicationVersionResult, RoboMakerError> CreateSimulationApplicationVersionOutcome;
      typedef Aws::Utils::Outcome<CreateSimulationJobResult, RoboMakerError> CreateSimulationJobOutcome;
      typedef Aws::Utils::Outcome<CreateWorldExportJobResult, RoboMakerError> CreateWorldExportJobOutcome;
      typedef Aws::Utils::Outcome<CreateWorldGenerationJobResult, RoboMakerError> CreateWorldGenerationJobOutcome;
      typedef Aws::Utils::Outcome<CreateWorldTemplateResult, RoboMakerError> CreateWorldTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteRobotApplicationResult, RoboMakerError> DeleteRobotApplicationOutcome;
      typedef Aws::Utils::Outcome<DeleteSimulationApplicationResult, RoboMakerError> DeleteSimulationApplicationOutcome;
      typedef Aws::Utils::Outcome<DeleteWorldTemplateResult, RoboMakerError> DeleteWorldTemplateOutcome;
      typedef Aws::Utils::Outcome<DescribeRobotApplicationResult, RoboMakerError> DescribeRobotApplicationOutcome;
      typedef Aws::Utils::Outcome<DescribeSimulationApplicationResult, RoboMakerError> DescribeSimulationApplicationOutcome;
      typedef Aws::Utils::Outcome<DescribeSimulationJobResult, RoboMakerError> DescribeSimulationJobOutcome;
      typedef Aws::Utils::Outcome<DescribeSimulationJobBatchResult, RoboMakerError> DescribeSimulationJobBatchOutcome;
      typedef Aws::Utils::Outcome<DescribeWorldResult, RoboMakerError> DescribeWorldOutcome;
      typedef Aws::Utils::Outcome<DescribeWorldExportJobResult, RoboMakerError> DescribeWorldExportJobOutcome;
      typedef Aws::Utils::Outcome<DescribeWorldGenerationJobResult, RoboMakerError> DescribeWorldGenerationJobOutcome;
      typedef Aws::Utils::Outcome<DescribeWorldTemplateResult, RoboMakerError> DescribeWorldTemplateOutcome;
      typedef Aws::Utils::Outcome<GetWorldTemplateBodyResult, RoboMakerError> GetWorldTemplateBodyOutcome;
      typedef Aws::Utils::Outcome<ListRobotApplicationsResult, RoboMakerError> ListRobotApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListSimulationApplicationsResult, RoboMakerError> ListSimulationApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListSimulationJobBatchesResult, RoboMakerError> ListSimulationJobBatchesOutcome;
      typedef Aws::Utils::Outcome<ListSimulationJobsResult, RoboMakerError> ListSimulationJobsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, RoboMakerError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListWorldExportJobsResult, RoboMakerError> ListWorldExportJobsOutcome;
      typedef Aws::Utils::Outcome<ListWorldGenerationJobsResult, RoboMakerError> ListWorldGenerationJobsOutcome;
      typedef Aws::Utils::Outcome<ListWorldTemplatesResult, RoboMakerError> ListWorldTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListWorldsResult, RoboMakerError> ListWorldsOutcome;
      typedef Aws::Utils::Outcome<RestartSimulationJobResult, RoboMakerError> RestartSimulationJobOutcome;
      typedef Aws::Utils::Outcome<StartSimulationJobBatchResult, RoboMakerError> StartSimulationJobBatchOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, RoboMakerError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, RoboMakerError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateRobotApplicationResult, RoboMakerError> UpdateRobotApplicationOutcome;
      typedef Aws::Utils::Outcome<UpdateSimulationApplicationResult, RoboMakerError> UpdateSimulationApplicationOutcome;
      typedef Aws::Utils::Outcome<UpdateWorldTemplateResult, RoboMakerError> UpdateWorldTemplateOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchDeleteWorldsOutcome> BatchDeleteWorldsOutcomeCallable;
      typedef std::future<BatchDescribeSimulationJobOutcome> BatchDescribeSimulationJobOutcomeCallable;
      typedef std::future<CancelSimulationJobOutcome> CancelSimulationJobOutcomeCallable;
      typedef std::future<CancelSimulationJobBatchOutcome> CancelSimulationJobBatchOutcomeCallable;
      typedef std::future<CancelWorldExportJobOutcome> CancelWorldExportJobOutcomeCallable;
      typedef std::future<CancelWorldGenerationJobOutcome> CancelWorldGenerationJobOutcomeCallable;
      typedef std::future<CreateRobotApplicationOutcome> CreateRobotApplicationOutcomeCallable;
      typedef std::future<CreateRobotApplicationVersionOutcome> CreateRobotApplicationVersionOutcomeCallable;
      typedef std::future<CreateSimulationApplicationOutcome> CreateSimulationApplicationOutcomeCallable;
      typedef std::future<CreateSimulationApplicationVersionOutcome> CreateSimulationApplicationVersionOutcomeCallable;
      typedef std::future<CreateSimulationJobOutcome> CreateSimulationJobOutcomeCallable;
      typedef std::future<CreateWorldExportJobOutcome> CreateWorldExportJobOutcomeCallable;
      typedef std::future<CreateWorldGenerationJobOutcome> CreateWorldGenerationJobOutcomeCallable;
      typedef std::future<CreateWorldTemplateOutcome> CreateWorldTemplateOutcomeCallable;
      typedef std::future<DeleteRobotApplicationOutcome> DeleteRobotApplicationOutcomeCallable;
      typedef std::future<DeleteSimulationApplicationOutcome> DeleteSimulationApplicationOutcomeCallable;
      typedef std::future<DeleteWorldTemplateOutcome> DeleteWorldTemplateOutcomeCallable;
      typedef std::future<DescribeRobotApplicationOutcome> DescribeRobotApplicationOutcomeCallable;
      typedef std::future<DescribeSimulationApplicationOutcome> DescribeSimulationApplicationOutcomeCallable;
      typedef std::future<DescribeSimulationJobOutcome> DescribeSimulationJobOutcomeCallable;
      typedef std::future<DescribeSimulationJobBatchOutcome> DescribeSimulationJobBatchOutcomeCallable;
      typedef std::future<DescribeWorldOutcome> DescribeWorldOutcomeCallable;
      typedef std::future<DescribeWorldExportJobOutcome> DescribeWorldExportJobOutcomeCallable;
      typedef std::future<DescribeWorldGenerationJobOutcome> DescribeWorldGenerationJobOutcomeCallable;
      typedef std::future<DescribeWorldTemplateOutcome> DescribeWorldTemplateOutcomeCallable;
      typedef std::future<GetWorldTemplateBodyOutcome> GetWorldTemplateBodyOutcomeCallable;
      typedef std::future<ListRobotApplicationsOutcome> ListRobotApplicationsOutcomeCallable;
      typedef std::future<ListSimulationApplicationsOutcome> ListSimulationApplicationsOutcomeCallable;
      typedef std::future<ListSimulationJobBatchesOutcome> ListSimulationJobBatchesOutcomeCallable;
      typedef std::future<ListSimulationJobsOutcome> ListSimulationJobsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListWorldExportJobsOutcome> ListWorldExportJobsOutcomeCallable;
      typedef std::future<ListWorldGenerationJobsOutcome> ListWorldGenerationJobsOutcomeCallable;
      typedef std::future<ListWorldTemplatesOutcome> ListWorldTemplatesOutcomeCallable;
      typedef std::future<ListWorldsOutcome> ListWorldsOutcomeCallable;
      typedef std::future<RestartSimulationJobOutcome> RestartSimulationJobOutcomeCallable;
      typedef std::future<StartSimulationJobBatchOutcome> StartSimulationJobBatchOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateRobotApplicationOutcome> UpdateRobotApplicationOutcomeCallable;
      typedef std::future<UpdateSimulationApplicationOutcome> UpdateSimulationApplicationOutcomeCallable;
      typedef std::future<UpdateWorldTemplateOutcome> UpdateWorldTemplateOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class RoboMakerClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const RoboMakerClient*, const Model::BatchDeleteWorldsRequest&, const Model::BatchDeleteWorldsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteWorldsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::BatchDescribeSimulationJobRequest&, const Model::BatchDescribeSimulationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDescribeSimulationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CancelSimulationJobRequest&, const Model::CancelSimulationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelSimulationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CancelSimulationJobBatchRequest&, const Model::CancelSimulationJobBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelSimulationJobBatchResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CancelWorldExportJobRequest&, const Model::CancelWorldExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelWorldExportJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CancelWorldGenerationJobRequest&, const Model::CancelWorldGenerationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelWorldGenerationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateRobotApplicationRequest&, const Model::CreateRobotApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRobotApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateRobotApplicationVersionRequest&, const Model::CreateRobotApplicationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRobotApplicationVersionResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateSimulationApplicationRequest&, const Model::CreateSimulationApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSimulationApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateSimulationApplicationVersionRequest&, const Model::CreateSimulationApplicationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSimulationApplicationVersionResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateSimulationJobRequest&, const Model::CreateSimulationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSimulationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateWorldExportJobRequest&, const Model::CreateWorldExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorldExportJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateWorldGenerationJobRequest&, const Model::CreateWorldGenerationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorldGenerationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::CreateWorldTemplateRequest&, const Model::CreateWorldTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorldTemplateResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DeleteRobotApplicationRequest&, const Model::DeleteRobotApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRobotApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DeleteSimulationApplicationRequest&, const Model::DeleteSimulationApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSimulationApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DeleteWorldTemplateRequest&, const Model::DeleteWorldTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorldTemplateResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeRobotApplicationRequest&, const Model::DescribeRobotApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRobotApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeSimulationApplicationRequest&, const Model::DescribeSimulationApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSimulationApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeSimulationJobRequest&, const Model::DescribeSimulationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSimulationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeSimulationJobBatchRequest&, const Model::DescribeSimulationJobBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSimulationJobBatchResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeWorldRequest&, const Model::DescribeWorldOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorldResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeWorldExportJobRequest&, const Model::DescribeWorldExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorldExportJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeWorldGenerationJobRequest&, const Model::DescribeWorldGenerationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorldGenerationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::DescribeWorldTemplateRequest&, const Model::DescribeWorldTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorldTemplateResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::GetWorldTemplateBodyRequest&, const Model::GetWorldTemplateBodyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorldTemplateBodyResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListRobotApplicationsRequest&, const Model::ListRobotApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRobotApplicationsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListSimulationApplicationsRequest&, const Model::ListSimulationApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSimulationApplicationsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListSimulationJobBatchesRequest&, const Model::ListSimulationJobBatchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSimulationJobBatchesResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListSimulationJobsRequest&, const Model::ListSimulationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSimulationJobsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListWorldExportJobsRequest&, const Model::ListWorldExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorldExportJobsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListWorldGenerationJobsRequest&, const Model::ListWorldGenerationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorldGenerationJobsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListWorldTemplatesRequest&, const Model::ListWorldTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorldTemplatesResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::ListWorldsRequest&, const Model::ListWorldsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorldsResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::RestartSimulationJobRequest&, const Model::RestartSimulationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestartSimulationJobResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::StartSimulationJobBatchRequest&, const Model::StartSimulationJobBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSimulationJobBatchResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::UpdateRobotApplicationRequest&, const Model::UpdateRobotApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRobotApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::UpdateSimulationApplicationRequest&, const Model::UpdateSimulationApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSimulationApplicationResponseReceivedHandler;
    typedef std::function<void(const RoboMakerClient*, const Model::UpdateWorldTemplateRequest&, const Model::UpdateWorldTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorldTemplateResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace RoboMaker
} // namespace Aws
