/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/osis/OSISServiceClientModel.h>

namespace Aws
{
namespace OSIS
{
  /**
   * <p>Use the Amazon OpenSearch Ingestion API to create and manage ingestion
   * pipelines. OpenSearch Ingestion is a fully managed data collector that delivers
   * real-time log and trace data to OpenSearch Service domains. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/ingestion.html">Getting
   * data into your cluster using OpenSearch Ingestion</a>.</p>
   */
  class AWS_OSIS_API OSISClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<OSISClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef OSISClientConfiguration ClientConfigurationType;
      typedef OSISEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OSISClient(const Aws::OSIS::OSISClientConfiguration& clientConfiguration = Aws::OSIS::OSISClientConfiguration(),
                   std::shared_ptr<OSISEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OSISClient(const Aws::Auth::AWSCredentials& credentials,
                   std::shared_ptr<OSISEndpointProviderBase> endpointProvider = nullptr,
                   const Aws::OSIS::OSISClientConfiguration& clientConfiguration = Aws::OSIS::OSISClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OSISClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   std::shared_ptr<OSISEndpointProviderBase> endpointProvider = nullptr,
                   const Aws::OSIS::OSISClientConfiguration& clientConfiguration = Aws::OSIS::OSISClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OSISClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OSISClient(const Aws::Auth::AWSCredentials& credentials,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OSISClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~OSISClient();

        /**
         * <p>Creates an OpenSearch Ingestion pipeline. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/creating-pipeline.html">Creating
         * Amazon OpenSearch Ingestion pipelines</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/CreatePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePipelineOutcome CreatePipeline(const Model::CreatePipelineRequest& request) const;

        /**
         * A Callable wrapper for CreatePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePipelineRequestT = Model::CreatePipelineRequest>
        Model::CreatePipelineOutcomeCallable CreatePipelineCallable(const CreatePipelineRequestT& request) const
        {
            return SubmitCallable(&OSISClient::CreatePipeline, request);
        }

        /**
         * An Async wrapper for CreatePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePipelineRequestT = Model::CreatePipelineRequest>
        void CreatePipelineAsync(const CreatePipelineRequestT& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OSISClient::CreatePipeline, request, handler, context);
        }

        /**
         * <p>Deletes an OpenSearch Ingestion pipeline. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/delete-pipeline.html">Deleting
         * Amazon OpenSearch Ingestion pipelines</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/DeletePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePipelineOutcome DeletePipeline(const Model::DeletePipelineRequest& request) const;

        /**
         * A Callable wrapper for DeletePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePipelineRequestT = Model::DeletePipelineRequest>
        Model::DeletePipelineOutcomeCallable DeletePipelineCallable(const DeletePipelineRequestT& request) const
        {
            return SubmitCallable(&OSISClient::DeletePipeline, request);
        }

        /**
         * An Async wrapper for DeletePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePipelineRequestT = Model::DeletePipelineRequest>
        void DeletePipelineAsync(const DeletePipelineRequestT& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OSISClient::DeletePipeline, request, handler, context);
        }

        /**
         * <p>Retrieves information about an OpenSearch Ingestion pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/GetPipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPipelineOutcome GetPipeline(const Model::GetPipelineRequest& request) const;

        /**
         * A Callable wrapper for GetPipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPipelineRequestT = Model::GetPipelineRequest>
        Model::GetPipelineOutcomeCallable GetPipelineCallable(const GetPipelineRequestT& request) const
        {
            return SubmitCallable(&OSISClient::GetPipeline, request);
        }

        /**
         * An Async wrapper for GetPipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPipelineRequestT = Model::GetPipelineRequest>
        void GetPipelineAsync(const GetPipelineRequestT& request, const GetPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OSISClient::GetPipeline, request, handler, context);
        }

        /**
         * <p>Retrieves information about a specific blueprint for OpenSearch Ingestion.
         * Blueprints are templates for the configuration needed for a
         * <code>CreatePipeline</code> request. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/creating-pipeline.html#pipeline-blueprint">Using
         * blueprints to create a pipeline</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/GetPipelineBlueprint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPipelineBlueprintOutcome GetPipelineBlueprint(const Model::GetPipelineBlueprintRequest& request) const;

        /**
         * A Callable wrapper for GetPipelineBlueprint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPipelineBlueprintRequestT = Model::GetPipelineBlueprintRequest>
        Model::GetPipelineBlueprintOutcomeCallable GetPipelineBlueprintCallable(const GetPipelineBlueprintRequestT& request) const
        {
            return SubmitCallable(&OSISClient::GetPipelineBlueprint, request);
        }

        /**
         * An Async wrapper for GetPipelineBlueprint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPipelineBlueprintRequestT = Model::GetPipelineBlueprintRequest>
        void GetPipelineBlueprintAsync(const GetPipelineBlueprintRequestT& request, const GetPipelineBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OSISClient::GetPipelineBlueprint, request, handler, context);
        }

        /**
         * <p>Returns progress information for the current change happening on an
         * OpenSearch Ingestion pipeline. Currently, this operation only returns
         * information when a pipeline is being created.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/creating-pipeline.html#get-pipeline-progress">Tracking
         * the status of pipeline creation</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/GetPipelineChangeProgress">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPipelineChangeProgressOutcome GetPipelineChangeProgress(const Model::GetPipelineChangeProgressRequest& request) const;

        /**
         * A Callable wrapper for GetPipelineChangeProgress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPipelineChangeProgressRequestT = Model::GetPipelineChangeProgressRequest>
        Model::GetPipelineChangeProgressOutcomeCallable GetPipelineChangeProgressCallable(const GetPipelineChangeProgressRequestT& request) const
        {
            return SubmitCallable(&OSISClient::GetPipelineChangeProgress, request);
        }

        /**
         * An Async wrapper for GetPipelineChangeProgress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPipelineChangeProgressRequestT = Model::GetPipelineChangeProgressRequest>
        void GetPipelineChangeProgressAsync(const GetPipelineChangeProgressRequestT& request, const GetPipelineChangeProgressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OSISClient::GetPipelineChangeProgress, request, handler, context);
        }

        /**
         * <p>Retrieves a list of all available blueprints for Data Prepper. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/creating-pipeline.html#pipeline-blueprint">Using
         * blueprints to create a pipeline</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/ListPipelineBlueprints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelineBlueprintsOutcome ListPipelineBlueprints(const Model::ListPipelineBlueprintsRequest& request) const;

        /**
         * A Callable wrapper for ListPipelineBlueprints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPipelineBlueprintsRequestT = Model::ListPipelineBlueprintsRequest>
        Model::ListPipelineBlueprintsOutcomeCallable ListPipelineBlueprintsCallable(const ListPipelineBlueprintsRequestT& request) const
        {
            return SubmitCallable(&OSISClient::ListPipelineBlueprints, request);
        }

        /**
         * An Async wrapper for ListPipelineBlueprints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPipelineBlueprintsRequestT = Model::ListPipelineBlueprintsRequest>
        void ListPipelineBlueprintsAsync(const ListPipelineBlueprintsRequestT& request, const ListPipelineBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OSISClient::ListPipelineBlueprints, request, handler, context);
        }

        /**
         * <p>Lists all OpenSearch Ingestion pipelines in the current Amazon Web Services
         * account and Region. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/list-pipeline.html">Viewing
         * Amazon OpenSearch Ingestion pipelines</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/ListPipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelinesOutcome ListPipelines(const Model::ListPipelinesRequest& request) const;

        /**
         * A Callable wrapper for ListPipelines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPipelinesRequestT = Model::ListPipelinesRequest>
        Model::ListPipelinesOutcomeCallable ListPipelinesCallable(const ListPipelinesRequestT& request) const
        {
            return SubmitCallable(&OSISClient::ListPipelines, request);
        }

        /**
         * An Async wrapper for ListPipelines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPipelinesRequestT = Model::ListPipelinesRequest>
        void ListPipelinesAsync(const ListPipelinesRequestT& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OSISClient::ListPipelines, request, handler, context);
        }

        /**
         * <p>Lists all resource tags associated with an OpenSearch Ingestion pipeline. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/tag-pipeline.html">Tagging
         * Amazon OpenSearch Ingestion pipelines</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&OSISClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OSISClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Starts an OpenSearch Ingestion pipeline. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/pipeline--stop-start.html#pipeline--start">Starting
         * an OpenSearch Ingestion pipeline</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/StartPipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::StartPipelineOutcome StartPipeline(const Model::StartPipelineRequest& request) const;

        /**
         * A Callable wrapper for StartPipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartPipelineRequestT = Model::StartPipelineRequest>
        Model::StartPipelineOutcomeCallable StartPipelineCallable(const StartPipelineRequestT& request) const
        {
            return SubmitCallable(&OSISClient::StartPipeline, request);
        }

        /**
         * An Async wrapper for StartPipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartPipelineRequestT = Model::StartPipelineRequest>
        void StartPipelineAsync(const StartPipelineRequestT& request, const StartPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OSISClient::StartPipeline, request, handler, context);
        }

        /**
         * <p>Stops an OpenSearch Ingestion pipeline. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/pipeline--stop-start.html#pipeline--stop">Stopping
         * an OpenSearch Ingestion pipeline</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/StopPipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::StopPipelineOutcome StopPipeline(const Model::StopPipelineRequest& request) const;

        /**
         * A Callable wrapper for StopPipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopPipelineRequestT = Model::StopPipelineRequest>
        Model::StopPipelineOutcomeCallable StopPipelineCallable(const StopPipelineRequestT& request) const
        {
            return SubmitCallable(&OSISClient::StopPipeline, request);
        }

        /**
         * An Async wrapper for StopPipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopPipelineRequestT = Model::StopPipelineRequest>
        void StopPipelineAsync(const StopPipelineRequestT& request, const StopPipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OSISClient::StopPipeline, request, handler, context);
        }

        /**
         * <p>Tags an OpenSearch Ingestion pipeline. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/tag-pipeline.html">Tagging
         * Amazon OpenSearch Ingestion pipelines</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&OSISClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OSISClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from an OpenSearch Ingestion pipeline. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/tag-pipeline.html">Tagging
         * Amazon OpenSearch Ingestion pipelines</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&OSISClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OSISClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an OpenSearch Ingestion pipeline. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/update-pipeline.html">Updating
         * Amazon OpenSearch Ingestion pipelines</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/UpdatePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePipelineOutcome UpdatePipeline(const Model::UpdatePipelineRequest& request) const;

        /**
         * A Callable wrapper for UpdatePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePipelineRequestT = Model::UpdatePipelineRequest>
        Model::UpdatePipelineOutcomeCallable UpdatePipelineCallable(const UpdatePipelineRequestT& request) const
        {
            return SubmitCallable(&OSISClient::UpdatePipeline, request);
        }

        /**
         * An Async wrapper for UpdatePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePipelineRequestT = Model::UpdatePipelineRequest>
        void UpdatePipelineAsync(const UpdatePipelineRequestT& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OSISClient::UpdatePipeline, request, handler, context);
        }

        /**
         * <p>Checks whether an OpenSearch Ingestion pipeline configuration is valid prior
         * to creation. For more information, see <a
         * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/creating-pipeline.html">Creating
         * Amazon OpenSearch Ingestion pipelines</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/ValidatePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidatePipelineOutcome ValidatePipeline(const Model::ValidatePipelineRequest& request) const;

        /**
         * A Callable wrapper for ValidatePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ValidatePipelineRequestT = Model::ValidatePipelineRequest>
        Model::ValidatePipelineOutcomeCallable ValidatePipelineCallable(const ValidatePipelineRequestT& request) const
        {
            return SubmitCallable(&OSISClient::ValidatePipeline, request);
        }

        /**
         * An Async wrapper for ValidatePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ValidatePipelineRequestT = Model::ValidatePipelineRequest>
        void ValidatePipelineAsync(const ValidatePipelineRequestT& request, const ValidatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OSISClient::ValidatePipeline, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<OSISEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<OSISClient>;
      void init(const OSISClientConfiguration& clientConfiguration);

      OSISClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<OSISEndpointProviderBase> m_endpointProvider;
  };

} // namespace OSIS
} // namespace Aws
