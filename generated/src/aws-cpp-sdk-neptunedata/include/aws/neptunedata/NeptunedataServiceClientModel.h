/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/neptunedata/NeptunedataErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/neptunedata/NeptunedataEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in NeptunedataClient header */
#include <aws/neptunedata/model/CancelGremlinQueryResult.h>
#include <aws/neptunedata/model/CancelLoaderJobResult.h>
#include <aws/neptunedata/model/CancelMLDataProcessingJobResult.h>
#include <aws/neptunedata/model/CancelMLModelTrainingJobResult.h>
#include <aws/neptunedata/model/CancelMLModelTransformJobResult.h>
#include <aws/neptunedata/model/CancelOpenCypherQueryResult.h>
#include <aws/neptunedata/model/CreateMLEndpointResult.h>
#include <aws/neptunedata/model/DeleteMLEndpointResult.h>
#include <aws/neptunedata/model/DeletePropertygraphStatisticsResult.h>
#include <aws/neptunedata/model/DeleteSparqlStatisticsResult.h>
#include <aws/neptunedata/model/ExecuteFastResetResult.h>
#include <aws/neptunedata/model/ExecuteGremlinExplainQueryResult.h>
#include <aws/neptunedata/model/ExecuteGremlinProfileQueryResult.h>
#include <aws/neptunedata/model/ExecuteGremlinQueryResult.h>
#include <aws/neptunedata/model/ExecuteOpenCypherExplainQueryResult.h>
#include <aws/neptunedata/model/ExecuteOpenCypherQueryResult.h>
#include <aws/neptunedata/model/GetEngineStatusResult.h>
#include <aws/neptunedata/model/GetGremlinQueryStatusResult.h>
#include <aws/neptunedata/model/GetLoaderJobStatusResult.h>
#include <aws/neptunedata/model/GetMLDataProcessingJobResult.h>
#include <aws/neptunedata/model/GetMLEndpointResult.h>
#include <aws/neptunedata/model/GetMLModelTrainingJobResult.h>
#include <aws/neptunedata/model/GetMLModelTransformJobResult.h>
#include <aws/neptunedata/model/GetOpenCypherQueryStatusResult.h>
#include <aws/neptunedata/model/GetPropertygraphStatisticsResult.h>
#include <aws/neptunedata/model/GetPropertygraphStreamResult.h>
#include <aws/neptunedata/model/GetPropertygraphSummaryResult.h>
#include <aws/neptunedata/model/GetRDFGraphSummaryResult.h>
#include <aws/neptunedata/model/GetSparqlStatisticsResult.h>
#include <aws/neptunedata/model/GetSparqlStreamResult.h>
#include <aws/neptunedata/model/ListGremlinQueriesResult.h>
#include <aws/neptunedata/model/ListLoaderJobsResult.h>
#include <aws/neptunedata/model/ListMLDataProcessingJobsResult.h>
#include <aws/neptunedata/model/ListMLEndpointsResult.h>
#include <aws/neptunedata/model/ListMLModelTrainingJobsResult.h>
#include <aws/neptunedata/model/ListMLModelTransformJobsResult.h>
#include <aws/neptunedata/model/ListOpenCypherQueriesResult.h>
#include <aws/neptunedata/model/ManagePropertygraphStatisticsResult.h>
#include <aws/neptunedata/model/ManageSparqlStatisticsResult.h>
#include <aws/neptunedata/model/StartLoaderJobResult.h>
#include <aws/neptunedata/model/StartMLDataProcessingJobResult.h>
#include <aws/neptunedata/model/StartMLModelTrainingJobResult.h>
#include <aws/neptunedata/model/StartMLModelTransformJobResult.h>
/* End of service model headers required in NeptunedataClient header */

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

  namespace neptunedata
  {
    using NeptunedataClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using NeptunedataEndpointProviderBase = Aws::neptunedata::Endpoint::NeptunedataEndpointProviderBase;
    using NeptunedataEndpointProvider = Aws::neptunedata::Endpoint::NeptunedataEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in NeptunedataClient header */
      class CancelGremlinQueryRequest;
      class CancelLoaderJobRequest;
      class CancelMLDataProcessingJobRequest;
      class CancelMLModelTrainingJobRequest;
      class CancelMLModelTransformJobRequest;
      class CancelOpenCypherQueryRequest;
      class CreateMLEndpointRequest;
      class DeleteMLEndpointRequest;
      class DeletePropertygraphStatisticsRequest;
      class DeleteSparqlStatisticsRequest;
      class ExecuteFastResetRequest;
      class ExecuteGremlinExplainQueryRequest;
      class ExecuteGremlinProfileQueryRequest;
      class ExecuteGremlinQueryRequest;
      class ExecuteOpenCypherExplainQueryRequest;
      class ExecuteOpenCypherQueryRequest;
      class GetEngineStatusRequest;
      class GetGremlinQueryStatusRequest;
      class GetLoaderJobStatusRequest;
      class GetMLDataProcessingJobRequest;
      class GetMLEndpointRequest;
      class GetMLModelTrainingJobRequest;
      class GetMLModelTransformJobRequest;
      class GetOpenCypherQueryStatusRequest;
      class GetPropertygraphStatisticsRequest;
      class GetPropertygraphStreamRequest;
      class GetPropertygraphSummaryRequest;
      class GetRDFGraphSummaryRequest;
      class GetSparqlStatisticsRequest;
      class GetSparqlStreamRequest;
      class ListGremlinQueriesRequest;
      class ListLoaderJobsRequest;
      class ListMLDataProcessingJobsRequest;
      class ListMLEndpointsRequest;
      class ListMLModelTrainingJobsRequest;
      class ListMLModelTransformJobsRequest;
      class ListOpenCypherQueriesRequest;
      class ManagePropertygraphStatisticsRequest;
      class ManageSparqlStatisticsRequest;
      class StartLoaderJobRequest;
      class StartMLDataProcessingJobRequest;
      class StartMLModelTrainingJobRequest;
      class StartMLModelTransformJobRequest;
      /* End of service model forward declarations required in NeptunedataClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelGremlinQueryResult, NeptunedataError> CancelGremlinQueryOutcome;
      typedef Aws::Utils::Outcome<CancelLoaderJobResult, NeptunedataError> CancelLoaderJobOutcome;
      typedef Aws::Utils::Outcome<CancelMLDataProcessingJobResult, NeptunedataError> CancelMLDataProcessingJobOutcome;
      typedef Aws::Utils::Outcome<CancelMLModelTrainingJobResult, NeptunedataError> CancelMLModelTrainingJobOutcome;
      typedef Aws::Utils::Outcome<CancelMLModelTransformJobResult, NeptunedataError> CancelMLModelTransformJobOutcome;
      typedef Aws::Utils::Outcome<CancelOpenCypherQueryResult, NeptunedataError> CancelOpenCypherQueryOutcome;
      typedef Aws::Utils::Outcome<CreateMLEndpointResult, NeptunedataError> CreateMLEndpointOutcome;
      typedef Aws::Utils::Outcome<DeleteMLEndpointResult, NeptunedataError> DeleteMLEndpointOutcome;
      typedef Aws::Utils::Outcome<DeletePropertygraphStatisticsResult, NeptunedataError> DeletePropertygraphStatisticsOutcome;
      typedef Aws::Utils::Outcome<DeleteSparqlStatisticsResult, NeptunedataError> DeleteSparqlStatisticsOutcome;
      typedef Aws::Utils::Outcome<ExecuteFastResetResult, NeptunedataError> ExecuteFastResetOutcome;
      typedef Aws::Utils::Outcome<ExecuteGremlinExplainQueryResult, NeptunedataError> ExecuteGremlinExplainQueryOutcome;
      typedef Aws::Utils::Outcome<ExecuteGremlinProfileQueryResult, NeptunedataError> ExecuteGremlinProfileQueryOutcome;
      typedef Aws::Utils::Outcome<ExecuteGremlinQueryResult, NeptunedataError> ExecuteGremlinQueryOutcome;
      typedef Aws::Utils::Outcome<ExecuteOpenCypherExplainQueryResult, NeptunedataError> ExecuteOpenCypherExplainQueryOutcome;
      typedef Aws::Utils::Outcome<ExecuteOpenCypherQueryResult, NeptunedataError> ExecuteOpenCypherQueryOutcome;
      typedef Aws::Utils::Outcome<GetEngineStatusResult, NeptunedataError> GetEngineStatusOutcome;
      typedef Aws::Utils::Outcome<GetGremlinQueryStatusResult, NeptunedataError> GetGremlinQueryStatusOutcome;
      typedef Aws::Utils::Outcome<GetLoaderJobStatusResult, NeptunedataError> GetLoaderJobStatusOutcome;
      typedef Aws::Utils::Outcome<GetMLDataProcessingJobResult, NeptunedataError> GetMLDataProcessingJobOutcome;
      typedef Aws::Utils::Outcome<GetMLEndpointResult, NeptunedataError> GetMLEndpointOutcome;
      typedef Aws::Utils::Outcome<GetMLModelTrainingJobResult, NeptunedataError> GetMLModelTrainingJobOutcome;
      typedef Aws::Utils::Outcome<GetMLModelTransformJobResult, NeptunedataError> GetMLModelTransformJobOutcome;
      typedef Aws::Utils::Outcome<GetOpenCypherQueryStatusResult, NeptunedataError> GetOpenCypherQueryStatusOutcome;
      typedef Aws::Utils::Outcome<GetPropertygraphStatisticsResult, NeptunedataError> GetPropertygraphStatisticsOutcome;
      typedef Aws::Utils::Outcome<GetPropertygraphStreamResult, NeptunedataError> GetPropertygraphStreamOutcome;
      typedef Aws::Utils::Outcome<GetPropertygraphSummaryResult, NeptunedataError> GetPropertygraphSummaryOutcome;
      typedef Aws::Utils::Outcome<GetRDFGraphSummaryResult, NeptunedataError> GetRDFGraphSummaryOutcome;
      typedef Aws::Utils::Outcome<GetSparqlStatisticsResult, NeptunedataError> GetSparqlStatisticsOutcome;
      typedef Aws::Utils::Outcome<GetSparqlStreamResult, NeptunedataError> GetSparqlStreamOutcome;
      typedef Aws::Utils::Outcome<ListGremlinQueriesResult, NeptunedataError> ListGremlinQueriesOutcome;
      typedef Aws::Utils::Outcome<ListLoaderJobsResult, NeptunedataError> ListLoaderJobsOutcome;
      typedef Aws::Utils::Outcome<ListMLDataProcessingJobsResult, NeptunedataError> ListMLDataProcessingJobsOutcome;
      typedef Aws::Utils::Outcome<ListMLEndpointsResult, NeptunedataError> ListMLEndpointsOutcome;
      typedef Aws::Utils::Outcome<ListMLModelTrainingJobsResult, NeptunedataError> ListMLModelTrainingJobsOutcome;
      typedef Aws::Utils::Outcome<ListMLModelTransformJobsResult, NeptunedataError> ListMLModelTransformJobsOutcome;
      typedef Aws::Utils::Outcome<ListOpenCypherQueriesResult, NeptunedataError> ListOpenCypherQueriesOutcome;
      typedef Aws::Utils::Outcome<ManagePropertygraphStatisticsResult, NeptunedataError> ManagePropertygraphStatisticsOutcome;
      typedef Aws::Utils::Outcome<ManageSparqlStatisticsResult, NeptunedataError> ManageSparqlStatisticsOutcome;
      typedef Aws::Utils::Outcome<StartLoaderJobResult, NeptunedataError> StartLoaderJobOutcome;
      typedef Aws::Utils::Outcome<StartMLDataProcessingJobResult, NeptunedataError> StartMLDataProcessingJobOutcome;
      typedef Aws::Utils::Outcome<StartMLModelTrainingJobResult, NeptunedataError> StartMLModelTrainingJobOutcome;
      typedef Aws::Utils::Outcome<StartMLModelTransformJobResult, NeptunedataError> StartMLModelTransformJobOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelGremlinQueryOutcome> CancelGremlinQueryOutcomeCallable;
      typedef std::future<CancelLoaderJobOutcome> CancelLoaderJobOutcomeCallable;
      typedef std::future<CancelMLDataProcessingJobOutcome> CancelMLDataProcessingJobOutcomeCallable;
      typedef std::future<CancelMLModelTrainingJobOutcome> CancelMLModelTrainingJobOutcomeCallable;
      typedef std::future<CancelMLModelTransformJobOutcome> CancelMLModelTransformJobOutcomeCallable;
      typedef std::future<CancelOpenCypherQueryOutcome> CancelOpenCypherQueryOutcomeCallable;
      typedef std::future<CreateMLEndpointOutcome> CreateMLEndpointOutcomeCallable;
      typedef std::future<DeleteMLEndpointOutcome> DeleteMLEndpointOutcomeCallable;
      typedef std::future<DeletePropertygraphStatisticsOutcome> DeletePropertygraphStatisticsOutcomeCallable;
      typedef std::future<DeleteSparqlStatisticsOutcome> DeleteSparqlStatisticsOutcomeCallable;
      typedef std::future<ExecuteFastResetOutcome> ExecuteFastResetOutcomeCallable;
      typedef std::future<ExecuteGremlinExplainQueryOutcome> ExecuteGremlinExplainQueryOutcomeCallable;
      typedef std::future<ExecuteGremlinProfileQueryOutcome> ExecuteGremlinProfileQueryOutcomeCallable;
      typedef std::future<ExecuteGremlinQueryOutcome> ExecuteGremlinQueryOutcomeCallable;
      typedef std::future<ExecuteOpenCypherExplainQueryOutcome> ExecuteOpenCypherExplainQueryOutcomeCallable;
      typedef std::future<ExecuteOpenCypherQueryOutcome> ExecuteOpenCypherQueryOutcomeCallable;
      typedef std::future<GetEngineStatusOutcome> GetEngineStatusOutcomeCallable;
      typedef std::future<GetGremlinQueryStatusOutcome> GetGremlinQueryStatusOutcomeCallable;
      typedef std::future<GetLoaderJobStatusOutcome> GetLoaderJobStatusOutcomeCallable;
      typedef std::future<GetMLDataProcessingJobOutcome> GetMLDataProcessingJobOutcomeCallable;
      typedef std::future<GetMLEndpointOutcome> GetMLEndpointOutcomeCallable;
      typedef std::future<GetMLModelTrainingJobOutcome> GetMLModelTrainingJobOutcomeCallable;
      typedef std::future<GetMLModelTransformJobOutcome> GetMLModelTransformJobOutcomeCallable;
      typedef std::future<GetOpenCypherQueryStatusOutcome> GetOpenCypherQueryStatusOutcomeCallable;
      typedef std::future<GetPropertygraphStatisticsOutcome> GetPropertygraphStatisticsOutcomeCallable;
      typedef std::future<GetPropertygraphStreamOutcome> GetPropertygraphStreamOutcomeCallable;
      typedef std::future<GetPropertygraphSummaryOutcome> GetPropertygraphSummaryOutcomeCallable;
      typedef std::future<GetRDFGraphSummaryOutcome> GetRDFGraphSummaryOutcomeCallable;
      typedef std::future<GetSparqlStatisticsOutcome> GetSparqlStatisticsOutcomeCallable;
      typedef std::future<GetSparqlStreamOutcome> GetSparqlStreamOutcomeCallable;
      typedef std::future<ListGremlinQueriesOutcome> ListGremlinQueriesOutcomeCallable;
      typedef std::future<ListLoaderJobsOutcome> ListLoaderJobsOutcomeCallable;
      typedef std::future<ListMLDataProcessingJobsOutcome> ListMLDataProcessingJobsOutcomeCallable;
      typedef std::future<ListMLEndpointsOutcome> ListMLEndpointsOutcomeCallable;
      typedef std::future<ListMLModelTrainingJobsOutcome> ListMLModelTrainingJobsOutcomeCallable;
      typedef std::future<ListMLModelTransformJobsOutcome> ListMLModelTransformJobsOutcomeCallable;
      typedef std::future<ListOpenCypherQueriesOutcome> ListOpenCypherQueriesOutcomeCallable;
      typedef std::future<ManagePropertygraphStatisticsOutcome> ManagePropertygraphStatisticsOutcomeCallable;
      typedef std::future<ManageSparqlStatisticsOutcome> ManageSparqlStatisticsOutcomeCallable;
      typedef std::future<StartLoaderJobOutcome> StartLoaderJobOutcomeCallable;
      typedef std::future<StartMLDataProcessingJobOutcome> StartMLDataProcessingJobOutcomeCallable;
      typedef std::future<StartMLModelTrainingJobOutcome> StartMLModelTrainingJobOutcomeCallable;
      typedef std::future<StartMLModelTransformJobOutcome> StartMLModelTransformJobOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class NeptunedataClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const NeptunedataClient*, const Model::CancelGremlinQueryRequest&, const Model::CancelGremlinQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelGremlinQueryResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::CancelLoaderJobRequest&, const Model::CancelLoaderJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelLoaderJobResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::CancelMLDataProcessingJobRequest&, const Model::CancelMLDataProcessingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelMLDataProcessingJobResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::CancelMLModelTrainingJobRequest&, const Model::CancelMLModelTrainingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelMLModelTrainingJobResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::CancelMLModelTransformJobRequest&, const Model::CancelMLModelTransformJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelMLModelTransformJobResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::CancelOpenCypherQueryRequest&, const Model::CancelOpenCypherQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelOpenCypherQueryResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::CreateMLEndpointRequest&, const Model::CreateMLEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMLEndpointResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::DeleteMLEndpointRequest&, const Model::DeleteMLEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMLEndpointResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::DeletePropertygraphStatisticsRequest&, const Model::DeletePropertygraphStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePropertygraphStatisticsResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::DeleteSparqlStatisticsRequest&, const Model::DeleteSparqlStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSparqlStatisticsResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::ExecuteFastResetRequest&, const Model::ExecuteFastResetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteFastResetResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::ExecuteGremlinExplainQueryRequest&, Model::ExecuteGremlinExplainQueryOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteGremlinExplainQueryResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::ExecuteGremlinProfileQueryRequest&, Model::ExecuteGremlinProfileQueryOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteGremlinProfileQueryResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::ExecuteGremlinQueryRequest&, const Model::ExecuteGremlinQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteGremlinQueryResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::ExecuteOpenCypherExplainQueryRequest&, Model::ExecuteOpenCypherExplainQueryOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteOpenCypherExplainQueryResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::ExecuteOpenCypherQueryRequest&, const Model::ExecuteOpenCypherQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteOpenCypherQueryResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::GetEngineStatusRequest&, const Model::GetEngineStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEngineStatusResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::GetGremlinQueryStatusRequest&, const Model::GetGremlinQueryStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGremlinQueryStatusResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::GetLoaderJobStatusRequest&, const Model::GetLoaderJobStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLoaderJobStatusResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::GetMLDataProcessingJobRequest&, const Model::GetMLDataProcessingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMLDataProcessingJobResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::GetMLEndpointRequest&, const Model::GetMLEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMLEndpointResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::GetMLModelTrainingJobRequest&, const Model::GetMLModelTrainingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMLModelTrainingJobResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::GetMLModelTransformJobRequest&, const Model::GetMLModelTransformJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMLModelTransformJobResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::GetOpenCypherQueryStatusRequest&, const Model::GetOpenCypherQueryStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOpenCypherQueryStatusResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::GetPropertygraphStatisticsRequest&, const Model::GetPropertygraphStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPropertygraphStatisticsResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::GetPropertygraphStreamRequest&, const Model::GetPropertygraphStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPropertygraphStreamResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::GetPropertygraphSummaryRequest&, const Model::GetPropertygraphSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPropertygraphSummaryResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::GetRDFGraphSummaryRequest&, const Model::GetRDFGraphSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRDFGraphSummaryResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::GetSparqlStatisticsRequest&, const Model::GetSparqlStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSparqlStatisticsResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::GetSparqlStreamRequest&, const Model::GetSparqlStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSparqlStreamResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::ListGremlinQueriesRequest&, const Model::ListGremlinQueriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGremlinQueriesResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::ListLoaderJobsRequest&, const Model::ListLoaderJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLoaderJobsResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::ListMLDataProcessingJobsRequest&, const Model::ListMLDataProcessingJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMLDataProcessingJobsResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::ListMLEndpointsRequest&, const Model::ListMLEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMLEndpointsResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::ListMLModelTrainingJobsRequest&, const Model::ListMLModelTrainingJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMLModelTrainingJobsResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::ListMLModelTransformJobsRequest&, const Model::ListMLModelTransformJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMLModelTransformJobsResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::ListOpenCypherQueriesRequest&, const Model::ListOpenCypherQueriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOpenCypherQueriesResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::ManagePropertygraphStatisticsRequest&, const Model::ManagePropertygraphStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ManagePropertygraphStatisticsResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::ManageSparqlStatisticsRequest&, const Model::ManageSparqlStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ManageSparqlStatisticsResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::StartLoaderJobRequest&, const Model::StartLoaderJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartLoaderJobResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::StartMLDataProcessingJobRequest&, const Model::StartMLDataProcessingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMLDataProcessingJobResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::StartMLModelTrainingJobRequest&, const Model::StartMLModelTrainingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMLModelTrainingJobResponseReceivedHandler;
    typedef std::function<void(const NeptunedataClient*, const Model::StartMLModelTransformJobRequest&, const Model::StartMLModelTransformJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMLModelTransformJobResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace neptunedata
} // namespace Aws
