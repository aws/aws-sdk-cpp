/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialServiceClientModel.h>

namespace Aws
{
namespace SageMakerGeospatial
{
  /**
   * <p>Provides APIs for creating and managing SageMaker geospatial resources.</p>
   */
  class AWS_SAGEMAKERGEOSPATIAL_API SageMakerGeospatialClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SageMakerGeospatialClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SageMakerGeospatialClientConfiguration ClientConfigurationType;
      typedef SageMakerGeospatialEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerGeospatialClient(const Aws::SageMakerGeospatial::SageMakerGeospatialClientConfiguration& clientConfiguration = Aws::SageMakerGeospatial::SageMakerGeospatialClientConfiguration(),
                                  std::shared_ptr<SageMakerGeospatialEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerGeospatialClient(const Aws::Auth::AWSCredentials& credentials,
                                  std::shared_ptr<SageMakerGeospatialEndpointProviderBase> endpointProvider = nullptr,
                                  const Aws::SageMakerGeospatial::SageMakerGeospatialClientConfiguration& clientConfiguration = Aws::SageMakerGeospatial::SageMakerGeospatialClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerGeospatialClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  std::shared_ptr<SageMakerGeospatialEndpointProviderBase> endpointProvider = nullptr,
                                  const Aws::SageMakerGeospatial::SageMakerGeospatialClientConfiguration& clientConfiguration = Aws::SageMakerGeospatial::SageMakerGeospatialClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerGeospatialClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerGeospatialClient(const Aws::Auth::AWSCredentials& credentials,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerGeospatialClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SageMakerGeospatialClient();

        /**
         * <p>Use this operation to delete an Earth Observation job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/DeleteEarthObservationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEarthObservationJobOutcome DeleteEarthObservationJob(const Model::DeleteEarthObservationJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteEarthObservationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEarthObservationJobRequestT = Model::DeleteEarthObservationJobRequest>
        Model::DeleteEarthObservationJobOutcomeCallable DeleteEarthObservationJobCallable(const DeleteEarthObservationJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerGeospatialClient::DeleteEarthObservationJob, request);
        }

        /**
         * An Async wrapper for DeleteEarthObservationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEarthObservationJobRequestT = Model::DeleteEarthObservationJobRequest>
        void DeleteEarthObservationJobAsync(const DeleteEarthObservationJobRequestT& request, const DeleteEarthObservationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerGeospatialClient::DeleteEarthObservationJob, request, handler, context);
        }

        /**
         * <p>Use this operation to delete a Vector Enrichment job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/DeleteVectorEnrichmentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVectorEnrichmentJobOutcome DeleteVectorEnrichmentJob(const Model::DeleteVectorEnrichmentJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteVectorEnrichmentJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVectorEnrichmentJobRequestT = Model::DeleteVectorEnrichmentJobRequest>
        Model::DeleteVectorEnrichmentJobOutcomeCallable DeleteVectorEnrichmentJobCallable(const DeleteVectorEnrichmentJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerGeospatialClient::DeleteVectorEnrichmentJob, request);
        }

        /**
         * An Async wrapper for DeleteVectorEnrichmentJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVectorEnrichmentJobRequestT = Model::DeleteVectorEnrichmentJobRequest>
        void DeleteVectorEnrichmentJobAsync(const DeleteVectorEnrichmentJobRequestT& request, const DeleteVectorEnrichmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerGeospatialClient::DeleteVectorEnrichmentJob, request, handler, context);
        }

        /**
         * <p>Use this operation to export results of an Earth Observation job and
         * optionally source images used as input to the EOJ to an Amazon S3
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ExportEarthObservationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportEarthObservationJobOutcome ExportEarthObservationJob(const Model::ExportEarthObservationJobRequest& request) const;

        /**
         * A Callable wrapper for ExportEarthObservationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportEarthObservationJobRequestT = Model::ExportEarthObservationJobRequest>
        Model::ExportEarthObservationJobOutcomeCallable ExportEarthObservationJobCallable(const ExportEarthObservationJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerGeospatialClient::ExportEarthObservationJob, request);
        }

        /**
         * An Async wrapper for ExportEarthObservationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportEarthObservationJobRequestT = Model::ExportEarthObservationJobRequest>
        void ExportEarthObservationJobAsync(const ExportEarthObservationJobRequestT& request, const ExportEarthObservationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerGeospatialClient::ExportEarthObservationJob, request, handler, context);
        }

        /**
         * <p>Use this operation to copy results of a Vector Enrichment job to an Amazon S3
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ExportVectorEnrichmentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportVectorEnrichmentJobOutcome ExportVectorEnrichmentJob(const Model::ExportVectorEnrichmentJobRequest& request) const;

        /**
         * A Callable wrapper for ExportVectorEnrichmentJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportVectorEnrichmentJobRequestT = Model::ExportVectorEnrichmentJobRequest>
        Model::ExportVectorEnrichmentJobOutcomeCallable ExportVectorEnrichmentJobCallable(const ExportVectorEnrichmentJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerGeospatialClient::ExportVectorEnrichmentJob, request);
        }

        /**
         * An Async wrapper for ExportVectorEnrichmentJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportVectorEnrichmentJobRequestT = Model::ExportVectorEnrichmentJobRequest>
        void ExportVectorEnrichmentJobAsync(const ExportVectorEnrichmentJobRequestT& request, const ExportVectorEnrichmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerGeospatialClient::ExportVectorEnrichmentJob, request, handler, context);
        }

        /**
         * <p>Get the details for a previously initiated Earth Observation
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/GetEarthObservationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEarthObservationJobOutcome GetEarthObservationJob(const Model::GetEarthObservationJobRequest& request) const;

        /**
         * A Callable wrapper for GetEarthObservationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEarthObservationJobRequestT = Model::GetEarthObservationJobRequest>
        Model::GetEarthObservationJobOutcomeCallable GetEarthObservationJobCallable(const GetEarthObservationJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerGeospatialClient::GetEarthObservationJob, request);
        }

        /**
         * An Async wrapper for GetEarthObservationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEarthObservationJobRequestT = Model::GetEarthObservationJobRequest>
        void GetEarthObservationJobAsync(const GetEarthObservationJobRequestT& request, const GetEarthObservationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerGeospatialClient::GetEarthObservationJob, request, handler, context);
        }

        /**
         * <p>Use this operation to get details of a specific raster data
         * collection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/GetRasterDataCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRasterDataCollectionOutcome GetRasterDataCollection(const Model::GetRasterDataCollectionRequest& request) const;

        /**
         * A Callable wrapper for GetRasterDataCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRasterDataCollectionRequestT = Model::GetRasterDataCollectionRequest>
        Model::GetRasterDataCollectionOutcomeCallable GetRasterDataCollectionCallable(const GetRasterDataCollectionRequestT& request) const
        {
            return SubmitCallable(&SageMakerGeospatialClient::GetRasterDataCollection, request);
        }

        /**
         * An Async wrapper for GetRasterDataCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRasterDataCollectionRequestT = Model::GetRasterDataCollectionRequest>
        void GetRasterDataCollectionAsync(const GetRasterDataCollectionRequestT& request, const GetRasterDataCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerGeospatialClient::GetRasterDataCollection, request, handler, context);
        }

        /**
         * <p>Gets a web mercator tile for the given Earth Observation job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/GetTile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTileOutcome GetTile(const Model::GetTileRequest& request) const;

        /**
         * A Callable wrapper for GetTile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTileRequestT = Model::GetTileRequest>
        Model::GetTileOutcomeCallable GetTileCallable(const GetTileRequestT& request) const
        {
            return SubmitCallable(&SageMakerGeospatialClient::GetTile, request);
        }

        /**
         * An Async wrapper for GetTile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTileRequestT = Model::GetTileRequest>
        void GetTileAsync(const GetTileRequestT& request, const GetTileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerGeospatialClient::GetTile, request, handler, context);
        }

        /**
         * <p>Retrieves details of a Vector Enrichment Job for a given job Amazon Resource
         * Name (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/GetVectorEnrichmentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVectorEnrichmentJobOutcome GetVectorEnrichmentJob(const Model::GetVectorEnrichmentJobRequest& request) const;

        /**
         * A Callable wrapper for GetVectorEnrichmentJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVectorEnrichmentJobRequestT = Model::GetVectorEnrichmentJobRequest>
        Model::GetVectorEnrichmentJobOutcomeCallable GetVectorEnrichmentJobCallable(const GetVectorEnrichmentJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerGeospatialClient::GetVectorEnrichmentJob, request);
        }

        /**
         * An Async wrapper for GetVectorEnrichmentJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVectorEnrichmentJobRequestT = Model::GetVectorEnrichmentJobRequest>
        void GetVectorEnrichmentJobAsync(const GetVectorEnrichmentJobRequestT& request, const GetVectorEnrichmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerGeospatialClient::GetVectorEnrichmentJob, request, handler, context);
        }

        /**
         * <p>Use this operation to get a list of the Earth Observation jobs associated
         * with the calling Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ListEarthObservationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEarthObservationJobsOutcome ListEarthObservationJobs(const Model::ListEarthObservationJobsRequest& request) const;

        /**
         * A Callable wrapper for ListEarthObservationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEarthObservationJobsRequestT = Model::ListEarthObservationJobsRequest>
        Model::ListEarthObservationJobsOutcomeCallable ListEarthObservationJobsCallable(const ListEarthObservationJobsRequestT& request) const
        {
            return SubmitCallable(&SageMakerGeospatialClient::ListEarthObservationJobs, request);
        }

        /**
         * An Async wrapper for ListEarthObservationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEarthObservationJobsRequestT = Model::ListEarthObservationJobsRequest>
        void ListEarthObservationJobsAsync(const ListEarthObservationJobsRequestT& request, const ListEarthObservationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerGeospatialClient::ListEarthObservationJobs, request, handler, context);
        }

        /**
         * <p>Use this operation to get raster data collections.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ListRasterDataCollections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRasterDataCollectionsOutcome ListRasterDataCollections(const Model::ListRasterDataCollectionsRequest& request) const;

        /**
         * A Callable wrapper for ListRasterDataCollections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRasterDataCollectionsRequestT = Model::ListRasterDataCollectionsRequest>
        Model::ListRasterDataCollectionsOutcomeCallable ListRasterDataCollectionsCallable(const ListRasterDataCollectionsRequestT& request) const
        {
            return SubmitCallable(&SageMakerGeospatialClient::ListRasterDataCollections, request);
        }

        /**
         * An Async wrapper for ListRasterDataCollections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRasterDataCollectionsRequestT = Model::ListRasterDataCollectionsRequest>
        void ListRasterDataCollectionsAsync(const ListRasterDataCollectionsRequestT& request, const ListRasterDataCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerGeospatialClient::ListRasterDataCollections, request, handler, context);
        }

        /**
         * <p>Lists the tags attached to the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&SageMakerGeospatialClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerGeospatialClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Retrieves a list of vector enrichment jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ListVectorEnrichmentJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVectorEnrichmentJobsOutcome ListVectorEnrichmentJobs(const Model::ListVectorEnrichmentJobsRequest& request) const;

        /**
         * A Callable wrapper for ListVectorEnrichmentJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVectorEnrichmentJobsRequestT = Model::ListVectorEnrichmentJobsRequest>
        Model::ListVectorEnrichmentJobsOutcomeCallable ListVectorEnrichmentJobsCallable(const ListVectorEnrichmentJobsRequestT& request) const
        {
            return SubmitCallable(&SageMakerGeospatialClient::ListVectorEnrichmentJobs, request);
        }

        /**
         * An Async wrapper for ListVectorEnrichmentJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVectorEnrichmentJobsRequestT = Model::ListVectorEnrichmentJobsRequest>
        void ListVectorEnrichmentJobsAsync(const ListVectorEnrichmentJobsRequestT& request, const ListVectorEnrichmentJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerGeospatialClient::ListVectorEnrichmentJobs, request, handler, context);
        }

        /**
         * <p>Allows you run image query on a specific raster data collection to get a list
         * of the satellite imagery matching the selected filters.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/SearchRasterDataCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchRasterDataCollectionOutcome SearchRasterDataCollection(const Model::SearchRasterDataCollectionRequest& request) const;

        /**
         * A Callable wrapper for SearchRasterDataCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchRasterDataCollectionRequestT = Model::SearchRasterDataCollectionRequest>
        Model::SearchRasterDataCollectionOutcomeCallable SearchRasterDataCollectionCallable(const SearchRasterDataCollectionRequestT& request) const
        {
            return SubmitCallable(&SageMakerGeospatialClient::SearchRasterDataCollection, request);
        }

        /**
         * An Async wrapper for SearchRasterDataCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchRasterDataCollectionRequestT = Model::SearchRasterDataCollectionRequest>
        void SearchRasterDataCollectionAsync(const SearchRasterDataCollectionRequestT& request, const SearchRasterDataCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerGeospatialClient::SearchRasterDataCollection, request, handler, context);
        }

        /**
         * <p>Use this operation to create an Earth observation job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/StartEarthObservationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartEarthObservationJobOutcome StartEarthObservationJob(const Model::StartEarthObservationJobRequest& request) const;

        /**
         * A Callable wrapper for StartEarthObservationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartEarthObservationJobRequestT = Model::StartEarthObservationJobRequest>
        Model::StartEarthObservationJobOutcomeCallable StartEarthObservationJobCallable(const StartEarthObservationJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerGeospatialClient::StartEarthObservationJob, request);
        }

        /**
         * An Async wrapper for StartEarthObservationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartEarthObservationJobRequestT = Model::StartEarthObservationJobRequest>
        void StartEarthObservationJobAsync(const StartEarthObservationJobRequestT& request, const StartEarthObservationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerGeospatialClient::StartEarthObservationJob, request, handler, context);
        }

        /**
         * <p>Creates a Vector Enrichment job for the supplied job type. Currently, there
         * are two supported job types: reverse geocoding and map matching.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/StartVectorEnrichmentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartVectorEnrichmentJobOutcome StartVectorEnrichmentJob(const Model::StartVectorEnrichmentJobRequest& request) const;

        /**
         * A Callable wrapper for StartVectorEnrichmentJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartVectorEnrichmentJobRequestT = Model::StartVectorEnrichmentJobRequest>
        Model::StartVectorEnrichmentJobOutcomeCallable StartVectorEnrichmentJobCallable(const StartVectorEnrichmentJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerGeospatialClient::StartVectorEnrichmentJob, request);
        }

        /**
         * An Async wrapper for StartVectorEnrichmentJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartVectorEnrichmentJobRequestT = Model::StartVectorEnrichmentJobRequest>
        void StartVectorEnrichmentJobAsync(const StartVectorEnrichmentJobRequestT& request, const StartVectorEnrichmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerGeospatialClient::StartVectorEnrichmentJob, request, handler, context);
        }

        /**
         * <p>Use this operation to stop an existing earth observation job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/StopEarthObservationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopEarthObservationJobOutcome StopEarthObservationJob(const Model::StopEarthObservationJobRequest& request) const;

        /**
         * A Callable wrapper for StopEarthObservationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopEarthObservationJobRequestT = Model::StopEarthObservationJobRequest>
        Model::StopEarthObservationJobOutcomeCallable StopEarthObservationJobCallable(const StopEarthObservationJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerGeospatialClient::StopEarthObservationJob, request);
        }

        /**
         * An Async wrapper for StopEarthObservationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopEarthObservationJobRequestT = Model::StopEarthObservationJobRequest>
        void StopEarthObservationJobAsync(const StopEarthObservationJobRequestT& request, const StopEarthObservationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerGeospatialClient::StopEarthObservationJob, request, handler, context);
        }

        /**
         * <p>Stops the Vector Enrichment job for a given job ARN.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/StopVectorEnrichmentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopVectorEnrichmentJobOutcome StopVectorEnrichmentJob(const Model::StopVectorEnrichmentJobRequest& request) const;

        /**
         * A Callable wrapper for StopVectorEnrichmentJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopVectorEnrichmentJobRequestT = Model::StopVectorEnrichmentJobRequest>
        Model::StopVectorEnrichmentJobOutcomeCallable StopVectorEnrichmentJobCallable(const StopVectorEnrichmentJobRequestT& request) const
        {
            return SubmitCallable(&SageMakerGeospatialClient::StopVectorEnrichmentJob, request);
        }

        /**
         * An Async wrapper for StopVectorEnrichmentJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopVectorEnrichmentJobRequestT = Model::StopVectorEnrichmentJobRequest>
        void StopVectorEnrichmentJobAsync(const StopVectorEnrichmentJobRequestT& request, const StopVectorEnrichmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerGeospatialClient::StopVectorEnrichmentJob, request, handler, context);
        }

        /**
         * <p>The resource you want to tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&SageMakerGeospatialClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerGeospatialClient::TagResource, request, handler, context);
        }

        /**
         * <p>The resource you want to untag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&SageMakerGeospatialClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SageMakerGeospatialClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SageMakerGeospatialEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SageMakerGeospatialClient>;
      void init(const SageMakerGeospatialClientConfiguration& clientConfiguration);

      SageMakerGeospatialClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SageMakerGeospatialEndpointProviderBase> m_endpointProvider;
  };

} // namespace SageMakerGeospatial
} // namespace Aws
