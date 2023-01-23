/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/sagemaker-geospatial/SageMakerGeospatialErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SageMakerGeospatialClient header */
#include <aws/sagemaker-geospatial/model/DeleteEarthObservationJobResult.h>
#include <aws/sagemaker-geospatial/model/DeleteVectorEnrichmentJobResult.h>
#include <aws/sagemaker-geospatial/model/ExportEarthObservationJobResult.h>
#include <aws/sagemaker-geospatial/model/ExportVectorEnrichmentJobResult.h>
#include <aws/sagemaker-geospatial/model/GetEarthObservationJobResult.h>
#include <aws/sagemaker-geospatial/model/GetRasterDataCollectionResult.h>
#include <aws/sagemaker-geospatial/model/GetTileResult.h>
#include <aws/sagemaker-geospatial/model/GetVectorEnrichmentJobResult.h>
#include <aws/sagemaker-geospatial/model/ListEarthObservationJobsResult.h>
#include <aws/sagemaker-geospatial/model/ListRasterDataCollectionsResult.h>
#include <aws/sagemaker-geospatial/model/ListTagsForResourceResult.h>
#include <aws/sagemaker-geospatial/model/ListVectorEnrichmentJobsResult.h>
#include <aws/sagemaker-geospatial/model/SearchRasterDataCollectionResult.h>
#include <aws/sagemaker-geospatial/model/StartEarthObservationJobResult.h>
#include <aws/sagemaker-geospatial/model/StartVectorEnrichmentJobResult.h>
#include <aws/sagemaker-geospatial/model/StopEarthObservationJobResult.h>
#include <aws/sagemaker-geospatial/model/StopVectorEnrichmentJobResult.h>
#include <aws/sagemaker-geospatial/model/TagResourceResult.h>
#include <aws/sagemaker-geospatial/model/UntagResourceResult.h>
/* End of service model headers required in SageMakerGeospatialClient header */

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

  namespace SageMakerGeospatial
  {
    using SageMakerGeospatialClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SageMakerGeospatialEndpointProviderBase = Aws::SageMakerGeospatial::Endpoint::SageMakerGeospatialEndpointProviderBase;
    using SageMakerGeospatialEndpointProvider = Aws::SageMakerGeospatial::Endpoint::SageMakerGeospatialEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SageMakerGeospatialClient header */
      class DeleteEarthObservationJobRequest;
      class DeleteVectorEnrichmentJobRequest;
      class ExportEarthObservationJobRequest;
      class ExportVectorEnrichmentJobRequest;
      class GetEarthObservationJobRequest;
      class GetRasterDataCollectionRequest;
      class GetTileRequest;
      class GetVectorEnrichmentJobRequest;
      class ListEarthObservationJobsRequest;
      class ListRasterDataCollectionsRequest;
      class ListTagsForResourceRequest;
      class ListVectorEnrichmentJobsRequest;
      class SearchRasterDataCollectionRequest;
      class StartEarthObservationJobRequest;
      class StartVectorEnrichmentJobRequest;
      class StopEarthObservationJobRequest;
      class StopVectorEnrichmentJobRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in SageMakerGeospatialClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DeleteEarthObservationJobResult, SageMakerGeospatialError> DeleteEarthObservationJobOutcome;
      typedef Aws::Utils::Outcome<DeleteVectorEnrichmentJobResult, SageMakerGeospatialError> DeleteVectorEnrichmentJobOutcome;
      typedef Aws::Utils::Outcome<ExportEarthObservationJobResult, SageMakerGeospatialError> ExportEarthObservationJobOutcome;
      typedef Aws::Utils::Outcome<ExportVectorEnrichmentJobResult, SageMakerGeospatialError> ExportVectorEnrichmentJobOutcome;
      typedef Aws::Utils::Outcome<GetEarthObservationJobResult, SageMakerGeospatialError> GetEarthObservationJobOutcome;
      typedef Aws::Utils::Outcome<GetRasterDataCollectionResult, SageMakerGeospatialError> GetRasterDataCollectionOutcome;
      typedef Aws::Utils::Outcome<GetTileResult, SageMakerGeospatialError> GetTileOutcome;
      typedef Aws::Utils::Outcome<GetVectorEnrichmentJobResult, SageMakerGeospatialError> GetVectorEnrichmentJobOutcome;
      typedef Aws::Utils::Outcome<ListEarthObservationJobsResult, SageMakerGeospatialError> ListEarthObservationJobsOutcome;
      typedef Aws::Utils::Outcome<ListRasterDataCollectionsResult, SageMakerGeospatialError> ListRasterDataCollectionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SageMakerGeospatialError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListVectorEnrichmentJobsResult, SageMakerGeospatialError> ListVectorEnrichmentJobsOutcome;
      typedef Aws::Utils::Outcome<SearchRasterDataCollectionResult, SageMakerGeospatialError> SearchRasterDataCollectionOutcome;
      typedef Aws::Utils::Outcome<StartEarthObservationJobResult, SageMakerGeospatialError> StartEarthObservationJobOutcome;
      typedef Aws::Utils::Outcome<StartVectorEnrichmentJobResult, SageMakerGeospatialError> StartVectorEnrichmentJobOutcome;
      typedef Aws::Utils::Outcome<StopEarthObservationJobResult, SageMakerGeospatialError> StopEarthObservationJobOutcome;
      typedef Aws::Utils::Outcome<StopVectorEnrichmentJobResult, SageMakerGeospatialError> StopVectorEnrichmentJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, SageMakerGeospatialError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, SageMakerGeospatialError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DeleteEarthObservationJobOutcome> DeleteEarthObservationJobOutcomeCallable;
      typedef std::future<DeleteVectorEnrichmentJobOutcome> DeleteVectorEnrichmentJobOutcomeCallable;
      typedef std::future<ExportEarthObservationJobOutcome> ExportEarthObservationJobOutcomeCallable;
      typedef std::future<ExportVectorEnrichmentJobOutcome> ExportVectorEnrichmentJobOutcomeCallable;
      typedef std::future<GetEarthObservationJobOutcome> GetEarthObservationJobOutcomeCallable;
      typedef std::future<GetRasterDataCollectionOutcome> GetRasterDataCollectionOutcomeCallable;
      typedef std::future<GetTileOutcome> GetTileOutcomeCallable;
      typedef std::future<GetVectorEnrichmentJobOutcome> GetVectorEnrichmentJobOutcomeCallable;
      typedef std::future<ListEarthObservationJobsOutcome> ListEarthObservationJobsOutcomeCallable;
      typedef std::future<ListRasterDataCollectionsOutcome> ListRasterDataCollectionsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListVectorEnrichmentJobsOutcome> ListVectorEnrichmentJobsOutcomeCallable;
      typedef std::future<SearchRasterDataCollectionOutcome> SearchRasterDataCollectionOutcomeCallable;
      typedef std::future<StartEarthObservationJobOutcome> StartEarthObservationJobOutcomeCallable;
      typedef std::future<StartVectorEnrichmentJobOutcome> StartVectorEnrichmentJobOutcomeCallable;
      typedef std::future<StopEarthObservationJobOutcome> StopEarthObservationJobOutcomeCallable;
      typedef std::future<StopVectorEnrichmentJobOutcome> StopVectorEnrichmentJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SageMakerGeospatialClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SageMakerGeospatialClient*, const Model::DeleteEarthObservationJobRequest&, const Model::DeleteEarthObservationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEarthObservationJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerGeospatialClient*, const Model::DeleteVectorEnrichmentJobRequest&, const Model::DeleteVectorEnrichmentJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVectorEnrichmentJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerGeospatialClient*, const Model::ExportEarthObservationJobRequest&, const Model::ExportEarthObservationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportEarthObservationJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerGeospatialClient*, const Model::ExportVectorEnrichmentJobRequest&, const Model::ExportVectorEnrichmentJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportVectorEnrichmentJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerGeospatialClient*, const Model::GetEarthObservationJobRequest&, const Model::GetEarthObservationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEarthObservationJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerGeospatialClient*, const Model::GetRasterDataCollectionRequest&, const Model::GetRasterDataCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRasterDataCollectionResponseReceivedHandler;
    typedef std::function<void(const SageMakerGeospatialClient*, const Model::GetTileRequest&, Model::GetTileOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTileResponseReceivedHandler;
    typedef std::function<void(const SageMakerGeospatialClient*, const Model::GetVectorEnrichmentJobRequest&, const Model::GetVectorEnrichmentJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVectorEnrichmentJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerGeospatialClient*, const Model::ListEarthObservationJobsRequest&, const Model::ListEarthObservationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEarthObservationJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerGeospatialClient*, const Model::ListRasterDataCollectionsRequest&, const Model::ListRasterDataCollectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRasterDataCollectionsResponseReceivedHandler;
    typedef std::function<void(const SageMakerGeospatialClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SageMakerGeospatialClient*, const Model::ListVectorEnrichmentJobsRequest&, const Model::ListVectorEnrichmentJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVectorEnrichmentJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerGeospatialClient*, const Model::SearchRasterDataCollectionRequest&, const Model::SearchRasterDataCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchRasterDataCollectionResponseReceivedHandler;
    typedef std::function<void(const SageMakerGeospatialClient*, const Model::StartEarthObservationJobRequest&, const Model::StartEarthObservationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartEarthObservationJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerGeospatialClient*, const Model::StartVectorEnrichmentJobRequest&, const Model::StartVectorEnrichmentJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartVectorEnrichmentJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerGeospatialClient*, const Model::StopEarthObservationJobRequest&, const Model::StopEarthObservationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopEarthObservationJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerGeospatialClient*, const Model::StopVectorEnrichmentJobRequest&, const Model::StopVectorEnrichmentJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopVectorEnrichmentJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerGeospatialClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SageMakerGeospatialClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SageMakerGeospatial
} // namespace Aws
