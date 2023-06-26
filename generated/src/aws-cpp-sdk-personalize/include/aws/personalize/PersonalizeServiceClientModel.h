/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/personalize/PersonalizeErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/personalize/PersonalizeEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in PersonalizeClient header */
#include <aws/personalize/model/CreateBatchInferenceJobResult.h>
#include <aws/personalize/model/CreateBatchSegmentJobResult.h>
#include <aws/personalize/model/CreateCampaignResult.h>
#include <aws/personalize/model/CreateDatasetResult.h>
#include <aws/personalize/model/CreateDatasetExportJobResult.h>
#include <aws/personalize/model/CreateDatasetGroupResult.h>
#include <aws/personalize/model/CreateDatasetImportJobResult.h>
#include <aws/personalize/model/CreateEventTrackerResult.h>
#include <aws/personalize/model/CreateFilterResult.h>
#include <aws/personalize/model/CreateMetricAttributionResult.h>
#include <aws/personalize/model/CreateRecommenderResult.h>
#include <aws/personalize/model/CreateSchemaResult.h>
#include <aws/personalize/model/CreateSolutionResult.h>
#include <aws/personalize/model/CreateSolutionVersionResult.h>
#include <aws/personalize/model/DescribeAlgorithmResult.h>
#include <aws/personalize/model/DescribeBatchInferenceJobResult.h>
#include <aws/personalize/model/DescribeBatchSegmentJobResult.h>
#include <aws/personalize/model/DescribeCampaignResult.h>
#include <aws/personalize/model/DescribeDatasetResult.h>
#include <aws/personalize/model/DescribeDatasetExportJobResult.h>
#include <aws/personalize/model/DescribeDatasetGroupResult.h>
#include <aws/personalize/model/DescribeDatasetImportJobResult.h>
#include <aws/personalize/model/DescribeEventTrackerResult.h>
#include <aws/personalize/model/DescribeFeatureTransformationResult.h>
#include <aws/personalize/model/DescribeFilterResult.h>
#include <aws/personalize/model/DescribeMetricAttributionResult.h>
#include <aws/personalize/model/DescribeRecipeResult.h>
#include <aws/personalize/model/DescribeRecommenderResult.h>
#include <aws/personalize/model/DescribeSchemaResult.h>
#include <aws/personalize/model/DescribeSolutionResult.h>
#include <aws/personalize/model/DescribeSolutionVersionResult.h>
#include <aws/personalize/model/GetSolutionMetricsResult.h>
#include <aws/personalize/model/ListBatchInferenceJobsResult.h>
#include <aws/personalize/model/ListBatchSegmentJobsResult.h>
#include <aws/personalize/model/ListCampaignsResult.h>
#include <aws/personalize/model/ListDatasetExportJobsResult.h>
#include <aws/personalize/model/ListDatasetGroupsResult.h>
#include <aws/personalize/model/ListDatasetImportJobsResult.h>
#include <aws/personalize/model/ListDatasetsResult.h>
#include <aws/personalize/model/ListEventTrackersResult.h>
#include <aws/personalize/model/ListFiltersResult.h>
#include <aws/personalize/model/ListMetricAttributionMetricsResult.h>
#include <aws/personalize/model/ListMetricAttributionsResult.h>
#include <aws/personalize/model/ListRecipesResult.h>
#include <aws/personalize/model/ListRecommendersResult.h>
#include <aws/personalize/model/ListSchemasResult.h>
#include <aws/personalize/model/ListSolutionVersionsResult.h>
#include <aws/personalize/model/ListSolutionsResult.h>
#include <aws/personalize/model/ListTagsForResourceResult.h>
#include <aws/personalize/model/StartRecommenderResult.h>
#include <aws/personalize/model/StopRecommenderResult.h>
#include <aws/personalize/model/TagResourceResult.h>
#include <aws/personalize/model/UntagResourceResult.h>
#include <aws/personalize/model/UpdateCampaignResult.h>
#include <aws/personalize/model/UpdateMetricAttributionResult.h>
#include <aws/personalize/model/UpdateRecommenderResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in PersonalizeClient header */

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

  namespace Personalize
  {
    using PersonalizeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using PersonalizeEndpointProviderBase = Aws::Personalize::Endpoint::PersonalizeEndpointProviderBase;
    using PersonalizeEndpointProvider = Aws::Personalize::Endpoint::PersonalizeEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in PersonalizeClient header */
      class CreateBatchInferenceJobRequest;
      class CreateBatchSegmentJobRequest;
      class CreateCampaignRequest;
      class CreateDatasetRequest;
      class CreateDatasetExportJobRequest;
      class CreateDatasetGroupRequest;
      class CreateDatasetImportJobRequest;
      class CreateEventTrackerRequest;
      class CreateFilterRequest;
      class CreateMetricAttributionRequest;
      class CreateRecommenderRequest;
      class CreateSchemaRequest;
      class CreateSolutionRequest;
      class CreateSolutionVersionRequest;
      class DeleteCampaignRequest;
      class DeleteDatasetRequest;
      class DeleteDatasetGroupRequest;
      class DeleteEventTrackerRequest;
      class DeleteFilterRequest;
      class DeleteMetricAttributionRequest;
      class DeleteRecommenderRequest;
      class DeleteSchemaRequest;
      class DeleteSolutionRequest;
      class DescribeAlgorithmRequest;
      class DescribeBatchInferenceJobRequest;
      class DescribeBatchSegmentJobRequest;
      class DescribeCampaignRequest;
      class DescribeDatasetRequest;
      class DescribeDatasetExportJobRequest;
      class DescribeDatasetGroupRequest;
      class DescribeDatasetImportJobRequest;
      class DescribeEventTrackerRequest;
      class DescribeFeatureTransformationRequest;
      class DescribeFilterRequest;
      class DescribeMetricAttributionRequest;
      class DescribeRecipeRequest;
      class DescribeRecommenderRequest;
      class DescribeSchemaRequest;
      class DescribeSolutionRequest;
      class DescribeSolutionVersionRequest;
      class GetSolutionMetricsRequest;
      class ListBatchInferenceJobsRequest;
      class ListBatchSegmentJobsRequest;
      class ListCampaignsRequest;
      class ListDatasetExportJobsRequest;
      class ListDatasetGroupsRequest;
      class ListDatasetImportJobsRequest;
      class ListDatasetsRequest;
      class ListEventTrackersRequest;
      class ListFiltersRequest;
      class ListMetricAttributionMetricsRequest;
      class ListMetricAttributionsRequest;
      class ListRecipesRequest;
      class ListRecommendersRequest;
      class ListSchemasRequest;
      class ListSolutionVersionsRequest;
      class ListSolutionsRequest;
      class ListTagsForResourceRequest;
      class StartRecommenderRequest;
      class StopRecommenderRequest;
      class StopSolutionVersionCreationRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateCampaignRequest;
      class UpdateMetricAttributionRequest;
      class UpdateRecommenderRequest;
      /* End of service model forward declarations required in PersonalizeClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateBatchInferenceJobResult, PersonalizeError> CreateBatchInferenceJobOutcome;
      typedef Aws::Utils::Outcome<CreateBatchSegmentJobResult, PersonalizeError> CreateBatchSegmentJobOutcome;
      typedef Aws::Utils::Outcome<CreateCampaignResult, PersonalizeError> CreateCampaignOutcome;
      typedef Aws::Utils::Outcome<CreateDatasetResult, PersonalizeError> CreateDatasetOutcome;
      typedef Aws::Utils::Outcome<CreateDatasetExportJobResult, PersonalizeError> CreateDatasetExportJobOutcome;
      typedef Aws::Utils::Outcome<CreateDatasetGroupResult, PersonalizeError> CreateDatasetGroupOutcome;
      typedef Aws::Utils::Outcome<CreateDatasetImportJobResult, PersonalizeError> CreateDatasetImportJobOutcome;
      typedef Aws::Utils::Outcome<CreateEventTrackerResult, PersonalizeError> CreateEventTrackerOutcome;
      typedef Aws::Utils::Outcome<CreateFilterResult, PersonalizeError> CreateFilterOutcome;
      typedef Aws::Utils::Outcome<CreateMetricAttributionResult, PersonalizeError> CreateMetricAttributionOutcome;
      typedef Aws::Utils::Outcome<CreateRecommenderResult, PersonalizeError> CreateRecommenderOutcome;
      typedef Aws::Utils::Outcome<CreateSchemaResult, PersonalizeError> CreateSchemaOutcome;
      typedef Aws::Utils::Outcome<CreateSolutionResult, PersonalizeError> CreateSolutionOutcome;
      typedef Aws::Utils::Outcome<CreateSolutionVersionResult, PersonalizeError> CreateSolutionVersionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeError> DeleteCampaignOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeError> DeleteDatasetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeError> DeleteDatasetGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeError> DeleteEventTrackerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeError> DeleteFilterOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeError> DeleteMetricAttributionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeError> DeleteRecommenderOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeError> DeleteSchemaOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeError> DeleteSolutionOutcome;
      typedef Aws::Utils::Outcome<DescribeAlgorithmResult, PersonalizeError> DescribeAlgorithmOutcome;
      typedef Aws::Utils::Outcome<DescribeBatchInferenceJobResult, PersonalizeError> DescribeBatchInferenceJobOutcome;
      typedef Aws::Utils::Outcome<DescribeBatchSegmentJobResult, PersonalizeError> DescribeBatchSegmentJobOutcome;
      typedef Aws::Utils::Outcome<DescribeCampaignResult, PersonalizeError> DescribeCampaignOutcome;
      typedef Aws::Utils::Outcome<DescribeDatasetResult, PersonalizeError> DescribeDatasetOutcome;
      typedef Aws::Utils::Outcome<DescribeDatasetExportJobResult, PersonalizeError> DescribeDatasetExportJobOutcome;
      typedef Aws::Utils::Outcome<DescribeDatasetGroupResult, PersonalizeError> DescribeDatasetGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeDatasetImportJobResult, PersonalizeError> DescribeDatasetImportJobOutcome;
      typedef Aws::Utils::Outcome<DescribeEventTrackerResult, PersonalizeError> DescribeEventTrackerOutcome;
      typedef Aws::Utils::Outcome<DescribeFeatureTransformationResult, PersonalizeError> DescribeFeatureTransformationOutcome;
      typedef Aws::Utils::Outcome<DescribeFilterResult, PersonalizeError> DescribeFilterOutcome;
      typedef Aws::Utils::Outcome<DescribeMetricAttributionResult, PersonalizeError> DescribeMetricAttributionOutcome;
      typedef Aws::Utils::Outcome<DescribeRecipeResult, PersonalizeError> DescribeRecipeOutcome;
      typedef Aws::Utils::Outcome<DescribeRecommenderResult, PersonalizeError> DescribeRecommenderOutcome;
      typedef Aws::Utils::Outcome<DescribeSchemaResult, PersonalizeError> DescribeSchemaOutcome;
      typedef Aws::Utils::Outcome<DescribeSolutionResult, PersonalizeError> DescribeSolutionOutcome;
      typedef Aws::Utils::Outcome<DescribeSolutionVersionResult, PersonalizeError> DescribeSolutionVersionOutcome;
      typedef Aws::Utils::Outcome<GetSolutionMetricsResult, PersonalizeError> GetSolutionMetricsOutcome;
      typedef Aws::Utils::Outcome<ListBatchInferenceJobsResult, PersonalizeError> ListBatchInferenceJobsOutcome;
      typedef Aws::Utils::Outcome<ListBatchSegmentJobsResult, PersonalizeError> ListBatchSegmentJobsOutcome;
      typedef Aws::Utils::Outcome<ListCampaignsResult, PersonalizeError> ListCampaignsOutcome;
      typedef Aws::Utils::Outcome<ListDatasetExportJobsResult, PersonalizeError> ListDatasetExportJobsOutcome;
      typedef Aws::Utils::Outcome<ListDatasetGroupsResult, PersonalizeError> ListDatasetGroupsOutcome;
      typedef Aws::Utils::Outcome<ListDatasetImportJobsResult, PersonalizeError> ListDatasetImportJobsOutcome;
      typedef Aws::Utils::Outcome<ListDatasetsResult, PersonalizeError> ListDatasetsOutcome;
      typedef Aws::Utils::Outcome<ListEventTrackersResult, PersonalizeError> ListEventTrackersOutcome;
      typedef Aws::Utils::Outcome<ListFiltersResult, PersonalizeError> ListFiltersOutcome;
      typedef Aws::Utils::Outcome<ListMetricAttributionMetricsResult, PersonalizeError> ListMetricAttributionMetricsOutcome;
      typedef Aws::Utils::Outcome<ListMetricAttributionsResult, PersonalizeError> ListMetricAttributionsOutcome;
      typedef Aws::Utils::Outcome<ListRecipesResult, PersonalizeError> ListRecipesOutcome;
      typedef Aws::Utils::Outcome<ListRecommendersResult, PersonalizeError> ListRecommendersOutcome;
      typedef Aws::Utils::Outcome<ListSchemasResult, PersonalizeError> ListSchemasOutcome;
      typedef Aws::Utils::Outcome<ListSolutionVersionsResult, PersonalizeError> ListSolutionVersionsOutcome;
      typedef Aws::Utils::Outcome<ListSolutionsResult, PersonalizeError> ListSolutionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, PersonalizeError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartRecommenderResult, PersonalizeError> StartRecommenderOutcome;
      typedef Aws::Utils::Outcome<StopRecommenderResult, PersonalizeError> StopRecommenderOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PersonalizeError> StopSolutionVersionCreationOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, PersonalizeError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, PersonalizeError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateCampaignResult, PersonalizeError> UpdateCampaignOutcome;
      typedef Aws::Utils::Outcome<UpdateMetricAttributionResult, PersonalizeError> UpdateMetricAttributionOutcome;
      typedef Aws::Utils::Outcome<UpdateRecommenderResult, PersonalizeError> UpdateRecommenderOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateBatchInferenceJobOutcome> CreateBatchInferenceJobOutcomeCallable;
      typedef std::future<CreateBatchSegmentJobOutcome> CreateBatchSegmentJobOutcomeCallable;
      typedef std::future<CreateCampaignOutcome> CreateCampaignOutcomeCallable;
      typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
      typedef std::future<CreateDatasetExportJobOutcome> CreateDatasetExportJobOutcomeCallable;
      typedef std::future<CreateDatasetGroupOutcome> CreateDatasetGroupOutcomeCallable;
      typedef std::future<CreateDatasetImportJobOutcome> CreateDatasetImportJobOutcomeCallable;
      typedef std::future<CreateEventTrackerOutcome> CreateEventTrackerOutcomeCallable;
      typedef std::future<CreateFilterOutcome> CreateFilterOutcomeCallable;
      typedef std::future<CreateMetricAttributionOutcome> CreateMetricAttributionOutcomeCallable;
      typedef std::future<CreateRecommenderOutcome> CreateRecommenderOutcomeCallable;
      typedef std::future<CreateSchemaOutcome> CreateSchemaOutcomeCallable;
      typedef std::future<CreateSolutionOutcome> CreateSolutionOutcomeCallable;
      typedef std::future<CreateSolutionVersionOutcome> CreateSolutionVersionOutcomeCallable;
      typedef std::future<DeleteCampaignOutcome> DeleteCampaignOutcomeCallable;
      typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
      typedef std::future<DeleteDatasetGroupOutcome> DeleteDatasetGroupOutcomeCallable;
      typedef std::future<DeleteEventTrackerOutcome> DeleteEventTrackerOutcomeCallable;
      typedef std::future<DeleteFilterOutcome> DeleteFilterOutcomeCallable;
      typedef std::future<DeleteMetricAttributionOutcome> DeleteMetricAttributionOutcomeCallable;
      typedef std::future<DeleteRecommenderOutcome> DeleteRecommenderOutcomeCallable;
      typedef std::future<DeleteSchemaOutcome> DeleteSchemaOutcomeCallable;
      typedef std::future<DeleteSolutionOutcome> DeleteSolutionOutcomeCallable;
      typedef std::future<DescribeAlgorithmOutcome> DescribeAlgorithmOutcomeCallable;
      typedef std::future<DescribeBatchInferenceJobOutcome> DescribeBatchInferenceJobOutcomeCallable;
      typedef std::future<DescribeBatchSegmentJobOutcome> DescribeBatchSegmentJobOutcomeCallable;
      typedef std::future<DescribeCampaignOutcome> DescribeCampaignOutcomeCallable;
      typedef std::future<DescribeDatasetOutcome> DescribeDatasetOutcomeCallable;
      typedef std::future<DescribeDatasetExportJobOutcome> DescribeDatasetExportJobOutcomeCallable;
      typedef std::future<DescribeDatasetGroupOutcome> DescribeDatasetGroupOutcomeCallable;
      typedef std::future<DescribeDatasetImportJobOutcome> DescribeDatasetImportJobOutcomeCallable;
      typedef std::future<DescribeEventTrackerOutcome> DescribeEventTrackerOutcomeCallable;
      typedef std::future<DescribeFeatureTransformationOutcome> DescribeFeatureTransformationOutcomeCallable;
      typedef std::future<DescribeFilterOutcome> DescribeFilterOutcomeCallable;
      typedef std::future<DescribeMetricAttributionOutcome> DescribeMetricAttributionOutcomeCallable;
      typedef std::future<DescribeRecipeOutcome> DescribeRecipeOutcomeCallable;
      typedef std::future<DescribeRecommenderOutcome> DescribeRecommenderOutcomeCallable;
      typedef std::future<DescribeSchemaOutcome> DescribeSchemaOutcomeCallable;
      typedef std::future<DescribeSolutionOutcome> DescribeSolutionOutcomeCallable;
      typedef std::future<DescribeSolutionVersionOutcome> DescribeSolutionVersionOutcomeCallable;
      typedef std::future<GetSolutionMetricsOutcome> GetSolutionMetricsOutcomeCallable;
      typedef std::future<ListBatchInferenceJobsOutcome> ListBatchInferenceJobsOutcomeCallable;
      typedef std::future<ListBatchSegmentJobsOutcome> ListBatchSegmentJobsOutcomeCallable;
      typedef std::future<ListCampaignsOutcome> ListCampaignsOutcomeCallable;
      typedef std::future<ListDatasetExportJobsOutcome> ListDatasetExportJobsOutcomeCallable;
      typedef std::future<ListDatasetGroupsOutcome> ListDatasetGroupsOutcomeCallable;
      typedef std::future<ListDatasetImportJobsOutcome> ListDatasetImportJobsOutcomeCallable;
      typedef std::future<ListDatasetsOutcome> ListDatasetsOutcomeCallable;
      typedef std::future<ListEventTrackersOutcome> ListEventTrackersOutcomeCallable;
      typedef std::future<ListFiltersOutcome> ListFiltersOutcomeCallable;
      typedef std::future<ListMetricAttributionMetricsOutcome> ListMetricAttributionMetricsOutcomeCallable;
      typedef std::future<ListMetricAttributionsOutcome> ListMetricAttributionsOutcomeCallable;
      typedef std::future<ListRecipesOutcome> ListRecipesOutcomeCallable;
      typedef std::future<ListRecommendersOutcome> ListRecommendersOutcomeCallable;
      typedef std::future<ListSchemasOutcome> ListSchemasOutcomeCallable;
      typedef std::future<ListSolutionVersionsOutcome> ListSolutionVersionsOutcomeCallable;
      typedef std::future<ListSolutionsOutcome> ListSolutionsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartRecommenderOutcome> StartRecommenderOutcomeCallable;
      typedef std::future<StopRecommenderOutcome> StopRecommenderOutcomeCallable;
      typedef std::future<StopSolutionVersionCreationOutcome> StopSolutionVersionCreationOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateCampaignOutcome> UpdateCampaignOutcomeCallable;
      typedef std::future<UpdateMetricAttributionOutcome> UpdateMetricAttributionOutcomeCallable;
      typedef std::future<UpdateRecommenderOutcome> UpdateRecommenderOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PersonalizeClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const PersonalizeClient*, const Model::CreateBatchInferenceJobRequest&, const Model::CreateBatchInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBatchInferenceJobResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateBatchSegmentJobRequest&, const Model::CreateBatchSegmentJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBatchSegmentJobResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateCampaignRequest&, const Model::CreateCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCampaignResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateDatasetRequest&, const Model::CreateDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateDatasetExportJobRequest&, const Model::CreateDatasetExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetExportJobResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateDatasetGroupRequest&, const Model::CreateDatasetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetGroupResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateDatasetImportJobRequest&, const Model::CreateDatasetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetImportJobResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateEventTrackerRequest&, const Model::CreateEventTrackerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventTrackerResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateFilterRequest&, const Model::CreateFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFilterResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateMetricAttributionRequest&, const Model::CreateMetricAttributionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMetricAttributionResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateRecommenderRequest&, const Model::CreateRecommenderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRecommenderResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateSchemaRequest&, const Model::CreateSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSchemaResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateSolutionRequest&, const Model::CreateSolutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSolutionResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::CreateSolutionVersionRequest&, const Model::CreateSolutionVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSolutionVersionResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DeleteCampaignRequest&, const Model::DeleteCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCampaignResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DeleteDatasetRequest&, const Model::DeleteDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DeleteDatasetGroupRequest&, const Model::DeleteDatasetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetGroupResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DeleteEventTrackerRequest&, const Model::DeleteEventTrackerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventTrackerResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DeleteFilterRequest&, const Model::DeleteFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFilterResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DeleteMetricAttributionRequest&, const Model::DeleteMetricAttributionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMetricAttributionResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DeleteRecommenderRequest&, const Model::DeleteRecommenderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRecommenderResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DeleteSchemaRequest&, const Model::DeleteSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSchemaResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DeleteSolutionRequest&, const Model::DeleteSolutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSolutionResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeAlgorithmRequest&, const Model::DescribeAlgorithmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlgorithmResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeBatchInferenceJobRequest&, const Model::DescribeBatchInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBatchInferenceJobResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeBatchSegmentJobRequest&, const Model::DescribeBatchSegmentJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBatchSegmentJobResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeCampaignRequest&, const Model::DescribeCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCampaignResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeDatasetRequest&, const Model::DescribeDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeDatasetExportJobRequest&, const Model::DescribeDatasetExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetExportJobResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeDatasetGroupRequest&, const Model::DescribeDatasetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetGroupResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeDatasetImportJobRequest&, const Model::DescribeDatasetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetImportJobResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeEventTrackerRequest&, const Model::DescribeEventTrackerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventTrackerResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeFeatureTransformationRequest&, const Model::DescribeFeatureTransformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFeatureTransformationResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeFilterRequest&, const Model::DescribeFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFilterResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeMetricAttributionRequest&, const Model::DescribeMetricAttributionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMetricAttributionResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeRecipeRequest&, const Model::DescribeRecipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecipeResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeRecommenderRequest&, const Model::DescribeRecommenderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecommenderResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeSchemaRequest&, const Model::DescribeSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSchemaResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeSolutionRequest&, const Model::DescribeSolutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSolutionResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::DescribeSolutionVersionRequest&, const Model::DescribeSolutionVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSolutionVersionResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::GetSolutionMetricsRequest&, const Model::GetSolutionMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSolutionMetricsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListBatchInferenceJobsRequest&, const Model::ListBatchInferenceJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBatchInferenceJobsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListBatchSegmentJobsRequest&, const Model::ListBatchSegmentJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBatchSegmentJobsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListCampaignsRequest&, const Model::ListCampaignsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCampaignsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListDatasetExportJobsRequest&, const Model::ListDatasetExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetExportJobsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListDatasetGroupsRequest&, const Model::ListDatasetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetGroupsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListDatasetImportJobsRequest&, const Model::ListDatasetImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetImportJobsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListDatasetsRequest&, const Model::ListDatasetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListEventTrackersRequest&, const Model::ListEventTrackersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventTrackersResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListFiltersRequest&, const Model::ListFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFiltersResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListMetricAttributionMetricsRequest&, const Model::ListMetricAttributionMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMetricAttributionMetricsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListMetricAttributionsRequest&, const Model::ListMetricAttributionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMetricAttributionsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListRecipesRequest&, const Model::ListRecipesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecipesResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListRecommendersRequest&, const Model::ListRecommendersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecommendersResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListSchemasRequest&, const Model::ListSchemasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchemasResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListSolutionVersionsRequest&, const Model::ListSolutionVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSolutionVersionsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListSolutionsRequest&, const Model::ListSolutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSolutionsResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::StartRecommenderRequest&, const Model::StartRecommenderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartRecommenderResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::StopRecommenderRequest&, const Model::StopRecommenderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopRecommenderResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::StopSolutionVersionCreationRequest&, const Model::StopSolutionVersionCreationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopSolutionVersionCreationResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::UpdateCampaignRequest&, const Model::UpdateCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCampaignResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::UpdateMetricAttributionRequest&, const Model::UpdateMetricAttributionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMetricAttributionResponseReceivedHandler;
    typedef std::function<void(const PersonalizeClient*, const Model::UpdateRecommenderRequest&, const Model::UpdateRecommenderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRecommenderResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Personalize
} // namespace Aws
