/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediapackage/MediaPackageServiceClientModel.h>

namespace Aws
{
namespace MediaPackage
{
  /**
   * AWS Elemental MediaPackage
   */
  class AWS_MEDIAPACKAGE_API MediaPackageClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MediaPackageClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MediaPackageClientConfiguration ClientConfigurationType;
      typedef MediaPackageEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaPackageClient(const Aws::MediaPackage::MediaPackageClientConfiguration& clientConfiguration = Aws::MediaPackage::MediaPackageClientConfiguration(),
                           std::shared_ptr<MediaPackageEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaPackageClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<MediaPackageEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::MediaPackage::MediaPackageClientConfiguration& clientConfiguration = Aws::MediaPackage::MediaPackageClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaPackageClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<MediaPackageEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::MediaPackage::MediaPackageClientConfiguration& clientConfiguration = Aws::MediaPackage::MediaPackageClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaPackageClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaPackageClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaPackageClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MediaPackageClient();

        /**
         * Changes the Channel's properities to configure log subscription<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/ConfigureLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfigureLogsOutcome ConfigureLogs(const Model::ConfigureLogsRequest& request) const;

        /**
         * A Callable wrapper for ConfigureLogs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ConfigureLogsRequestT = Model::ConfigureLogsRequest>
        Model::ConfigureLogsOutcomeCallable ConfigureLogsCallable(const ConfigureLogsRequestT& request) const
        {
            return SubmitCallable(&MediaPackageClient::ConfigureLogs, request);
        }

        /**
         * An Async wrapper for ConfigureLogs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ConfigureLogsRequestT = Model::ConfigureLogsRequest>
        void ConfigureLogsAsync(const ConfigureLogsRequestT& request, const ConfigureLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageClient::ConfigureLogs, request, handler, context);
        }

        /**
         * Creates a new Channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;

        /**
         * A Callable wrapper for CreateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChannelRequestT = Model::CreateChannelRequest>
        Model::CreateChannelOutcomeCallable CreateChannelCallable(const CreateChannelRequestT& request) const
        {
            return SubmitCallable(&MediaPackageClient::CreateChannel, request);
        }

        /**
         * An Async wrapper for CreateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChannelRequestT = Model::CreateChannelRequest>
        void CreateChannelAsync(const CreateChannelRequestT& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageClient::CreateChannel, request, handler, context);
        }

        /**
         * Creates a new HarvestJob record.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/CreateHarvestJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHarvestJobOutcome CreateHarvestJob(const Model::CreateHarvestJobRequest& request) const;

        /**
         * A Callable wrapper for CreateHarvestJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateHarvestJobRequestT = Model::CreateHarvestJobRequest>
        Model::CreateHarvestJobOutcomeCallable CreateHarvestJobCallable(const CreateHarvestJobRequestT& request) const
        {
            return SubmitCallable(&MediaPackageClient::CreateHarvestJob, request);
        }

        /**
         * An Async wrapper for CreateHarvestJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateHarvestJobRequestT = Model::CreateHarvestJobRequest>
        void CreateHarvestJobAsync(const CreateHarvestJobRequestT& request, const CreateHarvestJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageClient::CreateHarvestJob, request, handler, context);
        }

        /**
         * Creates a new OriginEndpoint record.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/CreateOriginEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOriginEndpointOutcome CreateOriginEndpoint(const Model::CreateOriginEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateOriginEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOriginEndpointRequestT = Model::CreateOriginEndpointRequest>
        Model::CreateOriginEndpointOutcomeCallable CreateOriginEndpointCallable(const CreateOriginEndpointRequestT& request) const
        {
            return SubmitCallable(&MediaPackageClient::CreateOriginEndpoint, request);
        }

        /**
         * An Async wrapper for CreateOriginEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOriginEndpointRequestT = Model::CreateOriginEndpointRequest>
        void CreateOriginEndpointAsync(const CreateOriginEndpointRequestT& request, const CreateOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageClient::CreateOriginEndpoint, request, handler, context);
        }

        /**
         * Deletes an existing Channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelRequestT = Model::DeleteChannelRequest>
        Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const DeleteChannelRequestT& request) const
        {
            return SubmitCallable(&MediaPackageClient::DeleteChannel, request);
        }

        /**
         * An Async wrapper for DeleteChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelRequestT = Model::DeleteChannelRequest>
        void DeleteChannelAsync(const DeleteChannelRequestT& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageClient::DeleteChannel, request, handler, context);
        }

        /**
         * Deletes an existing OriginEndpoint.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/DeleteOriginEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOriginEndpointOutcome DeleteOriginEndpoint(const Model::DeleteOriginEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteOriginEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOriginEndpointRequestT = Model::DeleteOriginEndpointRequest>
        Model::DeleteOriginEndpointOutcomeCallable DeleteOriginEndpointCallable(const DeleteOriginEndpointRequestT& request) const
        {
            return SubmitCallable(&MediaPackageClient::DeleteOriginEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteOriginEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOriginEndpointRequestT = Model::DeleteOriginEndpointRequest>
        void DeleteOriginEndpointAsync(const DeleteOriginEndpointRequestT& request, const DeleteOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageClient::DeleteOriginEndpoint, request, handler, context);
        }

        /**
         * Gets details about a Channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/DescribeChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelOutcome DescribeChannel(const Model::DescribeChannelRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChannelRequestT = Model::DescribeChannelRequest>
        Model::DescribeChannelOutcomeCallable DescribeChannelCallable(const DescribeChannelRequestT& request) const
        {
            return SubmitCallable(&MediaPackageClient::DescribeChannel, request);
        }

        /**
         * An Async wrapper for DescribeChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChannelRequestT = Model::DescribeChannelRequest>
        void DescribeChannelAsync(const DescribeChannelRequestT& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageClient::DescribeChannel, request, handler, context);
        }

        /**
         * Gets details about an existing HarvestJob.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/DescribeHarvestJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHarvestJobOutcome DescribeHarvestJob(const Model::DescribeHarvestJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeHarvestJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeHarvestJobRequestT = Model::DescribeHarvestJobRequest>
        Model::DescribeHarvestJobOutcomeCallable DescribeHarvestJobCallable(const DescribeHarvestJobRequestT& request) const
        {
            return SubmitCallable(&MediaPackageClient::DescribeHarvestJob, request);
        }

        /**
         * An Async wrapper for DescribeHarvestJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeHarvestJobRequestT = Model::DescribeHarvestJobRequest>
        void DescribeHarvestJobAsync(const DescribeHarvestJobRequestT& request, const DescribeHarvestJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageClient::DescribeHarvestJob, request, handler, context);
        }

        /**
         * Gets details about an existing OriginEndpoint.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/DescribeOriginEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOriginEndpointOutcome DescribeOriginEndpoint(const Model::DescribeOriginEndpointRequest& request) const;

        /**
         * A Callable wrapper for DescribeOriginEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOriginEndpointRequestT = Model::DescribeOriginEndpointRequest>
        Model::DescribeOriginEndpointOutcomeCallable DescribeOriginEndpointCallable(const DescribeOriginEndpointRequestT& request) const
        {
            return SubmitCallable(&MediaPackageClient::DescribeOriginEndpoint, request);
        }

        /**
         * An Async wrapper for DescribeOriginEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOriginEndpointRequestT = Model::DescribeOriginEndpointRequest>
        void DescribeOriginEndpointAsync(const DescribeOriginEndpointRequestT& request, const DescribeOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageClient::DescribeOriginEndpoint, request, handler, context);
        }

        /**
         * Returns a collection of Channels.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        Model::ListChannelsOutcomeCallable ListChannelsCallable(const ListChannelsRequestT& request) const
        {
            return SubmitCallable(&MediaPackageClient::ListChannels, request);
        }

        /**
         * An Async wrapper for ListChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        void ListChannelsAsync(const ListChannelsRequestT& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageClient::ListChannels, request, handler, context);
        }

        /**
         * Returns a collection of HarvestJob records.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/ListHarvestJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHarvestJobsOutcome ListHarvestJobs(const Model::ListHarvestJobsRequest& request) const;

        /**
         * A Callable wrapper for ListHarvestJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListHarvestJobsRequestT = Model::ListHarvestJobsRequest>
        Model::ListHarvestJobsOutcomeCallable ListHarvestJobsCallable(const ListHarvestJobsRequestT& request) const
        {
            return SubmitCallable(&MediaPackageClient::ListHarvestJobs, request);
        }

        /**
         * An Async wrapper for ListHarvestJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListHarvestJobsRequestT = Model::ListHarvestJobsRequest>
        void ListHarvestJobsAsync(const ListHarvestJobsRequestT& request, const ListHarvestJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageClient::ListHarvestJobs, request, handler, context);
        }

        /**
         * Returns a collection of OriginEndpoint records.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/ListOriginEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOriginEndpointsOutcome ListOriginEndpoints(const Model::ListOriginEndpointsRequest& request) const;

        /**
         * A Callable wrapper for ListOriginEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOriginEndpointsRequestT = Model::ListOriginEndpointsRequest>
        Model::ListOriginEndpointsOutcomeCallable ListOriginEndpointsCallable(const ListOriginEndpointsRequestT& request) const
        {
            return SubmitCallable(&MediaPackageClient::ListOriginEndpoints, request);
        }

        /**
         * An Async wrapper for ListOriginEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOriginEndpointsRequestT = Model::ListOriginEndpointsRequest>
        void ListOriginEndpointsAsync(const ListOriginEndpointsRequestT& request, const ListOriginEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageClient::ListOriginEndpoints, request, handler, context);
        }

        /**
         * 
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&MediaPackageClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageClient::ListTagsForResource, request, handler, context);
        }

        /**
         * Rotate the IngestEndpoint's username and password, as specified by the
         * IngestEndpoint's id.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/RotateIngestEndpointCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::RotateIngestEndpointCredentialsOutcome RotateIngestEndpointCredentials(const Model::RotateIngestEndpointCredentialsRequest& request) const;

        /**
         * A Callable wrapper for RotateIngestEndpointCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RotateIngestEndpointCredentialsRequestT = Model::RotateIngestEndpointCredentialsRequest>
        Model::RotateIngestEndpointCredentialsOutcomeCallable RotateIngestEndpointCredentialsCallable(const RotateIngestEndpointCredentialsRequestT& request) const
        {
            return SubmitCallable(&MediaPackageClient::RotateIngestEndpointCredentials, request);
        }

        /**
         * An Async wrapper for RotateIngestEndpointCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RotateIngestEndpointCredentialsRequestT = Model::RotateIngestEndpointCredentialsRequest>
        void RotateIngestEndpointCredentialsAsync(const RotateIngestEndpointCredentialsRequestT& request, const RotateIngestEndpointCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageClient::RotateIngestEndpointCredentials, request, handler, context);
        }

        /**
         * 
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&MediaPackageClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageClient::TagResource, request, handler, context);
        }

        /**
         * 
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&MediaPackageClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageClient::UntagResource, request, handler, context);
        }

        /**
         * Updates an existing Channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChannelRequestT = Model::UpdateChannelRequest>
        Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const UpdateChannelRequestT& request) const
        {
            return SubmitCallable(&MediaPackageClient::UpdateChannel, request);
        }

        /**
         * An Async wrapper for UpdateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChannelRequestT = Model::UpdateChannelRequest>
        void UpdateChannelAsync(const UpdateChannelRequestT& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageClient::UpdateChannel, request, handler, context);
        }

        /**
         * Updates an existing OriginEndpoint.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/UpdateOriginEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOriginEndpointOutcome UpdateOriginEndpoint(const Model::UpdateOriginEndpointRequest& request) const;

        /**
         * A Callable wrapper for UpdateOriginEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateOriginEndpointRequestT = Model::UpdateOriginEndpointRequest>
        Model::UpdateOriginEndpointOutcomeCallable UpdateOriginEndpointCallable(const UpdateOriginEndpointRequestT& request) const
        {
            return SubmitCallable(&MediaPackageClient::UpdateOriginEndpoint, request);
        }

        /**
         * An Async wrapper for UpdateOriginEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateOriginEndpointRequestT = Model::UpdateOriginEndpointRequest>
        void UpdateOriginEndpointAsync(const UpdateOriginEndpointRequestT& request, const UpdateOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageClient::UpdateOriginEndpoint, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MediaPackageEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MediaPackageClient>;
      void init(const MediaPackageClientConfiguration& clientConfiguration);

      MediaPackageClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MediaPackageEndpointProviderBase> m_endpointProvider;
  };

} // namespace MediaPackage
} // namespace Aws
