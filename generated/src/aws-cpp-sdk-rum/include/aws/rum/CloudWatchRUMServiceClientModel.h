/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/rum/CloudWatchRUMErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/rum/CloudWatchRUMEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CloudWatchRUMClient header */
#include <aws/rum/model/BatchCreateRumMetricDefinitionsResult.h>
#include <aws/rum/model/BatchDeleteRumMetricDefinitionsResult.h>
#include <aws/rum/model/BatchGetRumMetricDefinitionsResult.h>
#include <aws/rum/model/CreateAppMonitorResult.h>
#include <aws/rum/model/DeleteAppMonitorResult.h>
#include <aws/rum/model/DeleteRumMetricsDestinationResult.h>
#include <aws/rum/model/GetAppMonitorResult.h>
#include <aws/rum/model/GetAppMonitorDataResult.h>
#include <aws/rum/model/ListAppMonitorsResult.h>
#include <aws/rum/model/ListRumMetricsDestinationsResult.h>
#include <aws/rum/model/ListTagsForResourceResult.h>
#include <aws/rum/model/PutRumEventsResult.h>
#include <aws/rum/model/PutRumMetricsDestinationResult.h>
#include <aws/rum/model/TagResourceResult.h>
#include <aws/rum/model/UntagResourceResult.h>
#include <aws/rum/model/UpdateAppMonitorResult.h>
#include <aws/rum/model/UpdateRumMetricDefinitionResult.h>
/* End of service model headers required in CloudWatchRUMClient header */

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

  namespace CloudWatchRUM
  {
    using CloudWatchRUMClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CloudWatchRUMEndpointProviderBase = Aws::CloudWatchRUM::Endpoint::CloudWatchRUMEndpointProviderBase;
    using CloudWatchRUMEndpointProvider = Aws::CloudWatchRUM::Endpoint::CloudWatchRUMEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CloudWatchRUMClient header */
      class BatchCreateRumMetricDefinitionsRequest;
      class BatchDeleteRumMetricDefinitionsRequest;
      class BatchGetRumMetricDefinitionsRequest;
      class CreateAppMonitorRequest;
      class DeleteAppMonitorRequest;
      class DeleteRumMetricsDestinationRequest;
      class GetAppMonitorRequest;
      class GetAppMonitorDataRequest;
      class ListAppMonitorsRequest;
      class ListRumMetricsDestinationsRequest;
      class ListTagsForResourceRequest;
      class PutRumEventsRequest;
      class PutRumMetricsDestinationRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAppMonitorRequest;
      class UpdateRumMetricDefinitionRequest;
      /* End of service model forward declarations required in CloudWatchRUMClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchCreateRumMetricDefinitionsResult, CloudWatchRUMError> BatchCreateRumMetricDefinitionsOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteRumMetricDefinitionsResult, CloudWatchRUMError> BatchDeleteRumMetricDefinitionsOutcome;
      typedef Aws::Utils::Outcome<BatchGetRumMetricDefinitionsResult, CloudWatchRUMError> BatchGetRumMetricDefinitionsOutcome;
      typedef Aws::Utils::Outcome<CreateAppMonitorResult, CloudWatchRUMError> CreateAppMonitorOutcome;
      typedef Aws::Utils::Outcome<DeleteAppMonitorResult, CloudWatchRUMError> DeleteAppMonitorOutcome;
      typedef Aws::Utils::Outcome<DeleteRumMetricsDestinationResult, CloudWatchRUMError> DeleteRumMetricsDestinationOutcome;
      typedef Aws::Utils::Outcome<GetAppMonitorResult, CloudWatchRUMError> GetAppMonitorOutcome;
      typedef Aws::Utils::Outcome<GetAppMonitorDataResult, CloudWatchRUMError> GetAppMonitorDataOutcome;
      typedef Aws::Utils::Outcome<ListAppMonitorsResult, CloudWatchRUMError> ListAppMonitorsOutcome;
      typedef Aws::Utils::Outcome<ListRumMetricsDestinationsResult, CloudWatchRUMError> ListRumMetricsDestinationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CloudWatchRUMError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutRumEventsResult, CloudWatchRUMError> PutRumEventsOutcome;
      typedef Aws::Utils::Outcome<PutRumMetricsDestinationResult, CloudWatchRUMError> PutRumMetricsDestinationOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CloudWatchRUMError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CloudWatchRUMError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAppMonitorResult, CloudWatchRUMError> UpdateAppMonitorOutcome;
      typedef Aws::Utils::Outcome<UpdateRumMetricDefinitionResult, CloudWatchRUMError> UpdateRumMetricDefinitionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchCreateRumMetricDefinitionsOutcome> BatchCreateRumMetricDefinitionsOutcomeCallable;
      typedef std::future<BatchDeleteRumMetricDefinitionsOutcome> BatchDeleteRumMetricDefinitionsOutcomeCallable;
      typedef std::future<BatchGetRumMetricDefinitionsOutcome> BatchGetRumMetricDefinitionsOutcomeCallable;
      typedef std::future<CreateAppMonitorOutcome> CreateAppMonitorOutcomeCallable;
      typedef std::future<DeleteAppMonitorOutcome> DeleteAppMonitorOutcomeCallable;
      typedef std::future<DeleteRumMetricsDestinationOutcome> DeleteRumMetricsDestinationOutcomeCallable;
      typedef std::future<GetAppMonitorOutcome> GetAppMonitorOutcomeCallable;
      typedef std::future<GetAppMonitorDataOutcome> GetAppMonitorDataOutcomeCallable;
      typedef std::future<ListAppMonitorsOutcome> ListAppMonitorsOutcomeCallable;
      typedef std::future<ListRumMetricsDestinationsOutcome> ListRumMetricsDestinationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutRumEventsOutcome> PutRumEventsOutcomeCallable;
      typedef std::future<PutRumMetricsDestinationOutcome> PutRumMetricsDestinationOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAppMonitorOutcome> UpdateAppMonitorOutcomeCallable;
      typedef std::future<UpdateRumMetricDefinitionOutcome> UpdateRumMetricDefinitionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CloudWatchRUMClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CloudWatchRUMClient*, const Model::BatchCreateRumMetricDefinitionsRequest&, const Model::BatchCreateRumMetricDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreateRumMetricDefinitionsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchRUMClient*, const Model::BatchDeleteRumMetricDefinitionsRequest&, const Model::BatchDeleteRumMetricDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteRumMetricDefinitionsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchRUMClient*, const Model::BatchGetRumMetricDefinitionsRequest&, const Model::BatchGetRumMetricDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetRumMetricDefinitionsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchRUMClient*, const Model::CreateAppMonitorRequest&, const Model::CreateAppMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppMonitorResponseReceivedHandler;
    typedef std::function<void(const CloudWatchRUMClient*, const Model::DeleteAppMonitorRequest&, const Model::DeleteAppMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppMonitorResponseReceivedHandler;
    typedef std::function<void(const CloudWatchRUMClient*, const Model::DeleteRumMetricsDestinationRequest&, const Model::DeleteRumMetricsDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRumMetricsDestinationResponseReceivedHandler;
    typedef std::function<void(const CloudWatchRUMClient*, const Model::GetAppMonitorRequest&, const Model::GetAppMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppMonitorResponseReceivedHandler;
    typedef std::function<void(const CloudWatchRUMClient*, const Model::GetAppMonitorDataRequest&, const Model::GetAppMonitorDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppMonitorDataResponseReceivedHandler;
    typedef std::function<void(const CloudWatchRUMClient*, const Model::ListAppMonitorsRequest&, const Model::ListAppMonitorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppMonitorsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchRUMClient*, const Model::ListRumMetricsDestinationsRequest&, const Model::ListRumMetricsDestinationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRumMetricsDestinationsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchRUMClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchRUMClient*, const Model::PutRumEventsRequest&, const Model::PutRumEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRumEventsResponseReceivedHandler;
    typedef std::function<void(const CloudWatchRUMClient*, const Model::PutRumMetricsDestinationRequest&, const Model::PutRumMetricsDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRumMetricsDestinationResponseReceivedHandler;
    typedef std::function<void(const CloudWatchRUMClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchRUMClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CloudWatchRUMClient*, const Model::UpdateAppMonitorRequest&, const Model::UpdateAppMonitorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAppMonitorResponseReceivedHandler;
    typedef std::function<void(const CloudWatchRUMClient*, const Model::UpdateRumMetricDefinitionRequest&, const Model::UpdateRumMetricDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRumMetricDefinitionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CloudWatchRUM
} // namespace Aws
