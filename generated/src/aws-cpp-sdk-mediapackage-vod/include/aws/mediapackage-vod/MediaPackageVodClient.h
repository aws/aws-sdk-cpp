/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediapackage-vod/MediaPackageVodServiceClientModel.h>

namespace Aws
{
namespace MediaPackageVod
{
  /**
   * AWS Elemental MediaPackage VOD
   */
  class AWS_MEDIAPACKAGEVOD_API MediaPackageVodClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MediaPackageVodClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MediaPackageVodClientConfiguration ClientConfigurationType;
      typedef MediaPackageVodEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaPackageVodClient(const Aws::MediaPackageVod::MediaPackageVodClientConfiguration& clientConfiguration = Aws::MediaPackageVod::MediaPackageVodClientConfiguration(),
                              std::shared_ptr<MediaPackageVodEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaPackageVodClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<MediaPackageVodEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::MediaPackageVod::MediaPackageVodClientConfiguration& clientConfiguration = Aws::MediaPackageVod::MediaPackageVodClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaPackageVodClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<MediaPackageVodEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::MediaPackageVod::MediaPackageVodClientConfiguration& clientConfiguration = Aws::MediaPackageVod::MediaPackageVodClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaPackageVodClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaPackageVodClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaPackageVodClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MediaPackageVodClient();

        /**
         * Changes the packaging group's properities to configure log
         * subscription<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ConfigureLogs">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfigureLogsOutcome ConfigureLogs(const Model::ConfigureLogsRequest& request) const;

        /**
         * A Callable wrapper for ConfigureLogs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ConfigureLogsRequestT = Model::ConfigureLogsRequest>
        Model::ConfigureLogsOutcomeCallable ConfigureLogsCallable(const ConfigureLogsRequestT& request) const
        {
            return SubmitCallable(&MediaPackageVodClient::ConfigureLogs, request);
        }

        /**
         * An Async wrapper for ConfigureLogs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ConfigureLogsRequestT = Model::ConfigureLogsRequest>
        void ConfigureLogsAsync(const ConfigureLogsRequestT& request, const ConfigureLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageVodClient::ConfigureLogs, request, handler, context);
        }

        /**
         * Creates a new MediaPackage VOD Asset resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CreateAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssetOutcome CreateAsset(const Model::CreateAssetRequest& request) const;

        /**
         * A Callable wrapper for CreateAsset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAssetRequestT = Model::CreateAssetRequest>
        Model::CreateAssetOutcomeCallable CreateAssetCallable(const CreateAssetRequestT& request) const
        {
            return SubmitCallable(&MediaPackageVodClient::CreateAsset, request);
        }

        /**
         * An Async wrapper for CreateAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAssetRequestT = Model::CreateAssetRequest>
        void CreateAssetAsync(const CreateAssetRequestT& request, const CreateAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageVodClient::CreateAsset, request, handler, context);
        }

        /**
         * Creates a new MediaPackage VOD PackagingConfiguration resource.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CreatePackagingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePackagingConfigurationOutcome CreatePackagingConfiguration(const Model::CreatePackagingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreatePackagingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePackagingConfigurationRequestT = Model::CreatePackagingConfigurationRequest>
        Model::CreatePackagingConfigurationOutcomeCallable CreatePackagingConfigurationCallable(const CreatePackagingConfigurationRequestT& request) const
        {
            return SubmitCallable(&MediaPackageVodClient::CreatePackagingConfiguration, request);
        }

        /**
         * An Async wrapper for CreatePackagingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePackagingConfigurationRequestT = Model::CreatePackagingConfigurationRequest>
        void CreatePackagingConfigurationAsync(const CreatePackagingConfigurationRequestT& request, const CreatePackagingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageVodClient::CreatePackagingConfiguration, request, handler, context);
        }

        /**
         * Creates a new MediaPackage VOD PackagingGroup resource.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CreatePackagingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePackagingGroupOutcome CreatePackagingGroup(const Model::CreatePackagingGroupRequest& request) const;

        /**
         * A Callable wrapper for CreatePackagingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePackagingGroupRequestT = Model::CreatePackagingGroupRequest>
        Model::CreatePackagingGroupOutcomeCallable CreatePackagingGroupCallable(const CreatePackagingGroupRequestT& request) const
        {
            return SubmitCallable(&MediaPackageVodClient::CreatePackagingGroup, request);
        }

        /**
         * An Async wrapper for CreatePackagingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePackagingGroupRequestT = Model::CreatePackagingGroupRequest>
        void CreatePackagingGroupAsync(const CreatePackagingGroupRequestT& request, const CreatePackagingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageVodClient::CreatePackagingGroup, request, handler, context);
        }

        /**
         * Deletes an existing MediaPackage VOD Asset resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DeleteAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssetOutcome DeleteAsset(const Model::DeleteAssetRequest& request) const;

        /**
         * A Callable wrapper for DeleteAsset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAssetRequestT = Model::DeleteAssetRequest>
        Model::DeleteAssetOutcomeCallable DeleteAssetCallable(const DeleteAssetRequestT& request) const
        {
            return SubmitCallable(&MediaPackageVodClient::DeleteAsset, request);
        }

        /**
         * An Async wrapper for DeleteAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAssetRequestT = Model::DeleteAssetRequest>
        void DeleteAssetAsync(const DeleteAssetRequestT& request, const DeleteAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageVodClient::DeleteAsset, request, handler, context);
        }

        /**
         * Deletes a MediaPackage VOD PackagingConfiguration resource.<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DeletePackagingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackagingConfigurationOutcome DeletePackagingConfiguration(const Model::DeletePackagingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeletePackagingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePackagingConfigurationRequestT = Model::DeletePackagingConfigurationRequest>
        Model::DeletePackagingConfigurationOutcomeCallable DeletePackagingConfigurationCallable(const DeletePackagingConfigurationRequestT& request) const
        {
            return SubmitCallable(&MediaPackageVodClient::DeletePackagingConfiguration, request);
        }

        /**
         * An Async wrapper for DeletePackagingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePackagingConfigurationRequestT = Model::DeletePackagingConfigurationRequest>
        void DeletePackagingConfigurationAsync(const DeletePackagingConfigurationRequestT& request, const DeletePackagingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageVodClient::DeletePackagingConfiguration, request, handler, context);
        }

        /**
         * Deletes a MediaPackage VOD PackagingGroup resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DeletePackagingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackagingGroupOutcome DeletePackagingGroup(const Model::DeletePackagingGroupRequest& request) const;

        /**
         * A Callable wrapper for DeletePackagingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePackagingGroupRequestT = Model::DeletePackagingGroupRequest>
        Model::DeletePackagingGroupOutcomeCallable DeletePackagingGroupCallable(const DeletePackagingGroupRequestT& request) const
        {
            return SubmitCallable(&MediaPackageVodClient::DeletePackagingGroup, request);
        }

        /**
         * An Async wrapper for DeletePackagingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePackagingGroupRequestT = Model::DeletePackagingGroupRequest>
        void DeletePackagingGroupAsync(const DeletePackagingGroupRequestT& request, const DeletePackagingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageVodClient::DeletePackagingGroup, request, handler, context);
        }

        /**
         * Returns a description of a MediaPackage VOD Asset resource.<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DescribeAsset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssetOutcome DescribeAsset(const Model::DescribeAssetRequest& request) const;

        /**
         * A Callable wrapper for DescribeAsset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAssetRequestT = Model::DescribeAssetRequest>
        Model::DescribeAssetOutcomeCallable DescribeAssetCallable(const DescribeAssetRequestT& request) const
        {
            return SubmitCallable(&MediaPackageVodClient::DescribeAsset, request);
        }

        /**
         * An Async wrapper for DescribeAsset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAssetRequestT = Model::DescribeAssetRequest>
        void DescribeAssetAsync(const DescribeAssetRequestT& request, const DescribeAssetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageVodClient::DescribeAsset, request, handler, context);
        }

        /**
         * Returns a description of a MediaPackage VOD PackagingConfiguration
         * resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DescribePackagingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackagingConfigurationOutcome DescribePackagingConfiguration(const Model::DescribePackagingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribePackagingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePackagingConfigurationRequestT = Model::DescribePackagingConfigurationRequest>
        Model::DescribePackagingConfigurationOutcomeCallable DescribePackagingConfigurationCallable(const DescribePackagingConfigurationRequestT& request) const
        {
            return SubmitCallable(&MediaPackageVodClient::DescribePackagingConfiguration, request);
        }

        /**
         * An Async wrapper for DescribePackagingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePackagingConfigurationRequestT = Model::DescribePackagingConfigurationRequest>
        void DescribePackagingConfigurationAsync(const DescribePackagingConfigurationRequestT& request, const DescribePackagingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageVodClient::DescribePackagingConfiguration, request, handler, context);
        }

        /**
         * Returns a description of a MediaPackage VOD PackagingGroup resource.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DescribePackagingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackagingGroupOutcome DescribePackagingGroup(const Model::DescribePackagingGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribePackagingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePackagingGroupRequestT = Model::DescribePackagingGroupRequest>
        Model::DescribePackagingGroupOutcomeCallable DescribePackagingGroupCallable(const DescribePackagingGroupRequestT& request) const
        {
            return SubmitCallable(&MediaPackageVodClient::DescribePackagingGroup, request);
        }

        /**
         * An Async wrapper for DescribePackagingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePackagingGroupRequestT = Model::DescribePackagingGroupRequest>
        void DescribePackagingGroupAsync(const DescribePackagingGroupRequestT& request, const DescribePackagingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageVodClient::DescribePackagingGroup, request, handler, context);
        }

        /**
         * Returns a collection of MediaPackage VOD Asset resources.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ListAssets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssetsOutcome ListAssets(const Model::ListAssetsRequest& request) const;

        /**
         * A Callable wrapper for ListAssets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssetsRequestT = Model::ListAssetsRequest>
        Model::ListAssetsOutcomeCallable ListAssetsCallable(const ListAssetsRequestT& request) const
        {
            return SubmitCallable(&MediaPackageVodClient::ListAssets, request);
        }

        /**
         * An Async wrapper for ListAssets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssetsRequestT = Model::ListAssetsRequest>
        void ListAssetsAsync(const ListAssetsRequestT& request, const ListAssetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageVodClient::ListAssets, request, handler, context);
        }

        /**
         * Returns a collection of MediaPackage VOD PackagingConfiguration
         * resources.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ListPackagingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackagingConfigurationsOutcome ListPackagingConfigurations(const Model::ListPackagingConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListPackagingConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPackagingConfigurationsRequestT = Model::ListPackagingConfigurationsRequest>
        Model::ListPackagingConfigurationsOutcomeCallable ListPackagingConfigurationsCallable(const ListPackagingConfigurationsRequestT& request) const
        {
            return SubmitCallable(&MediaPackageVodClient::ListPackagingConfigurations, request);
        }

        /**
         * An Async wrapper for ListPackagingConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPackagingConfigurationsRequestT = Model::ListPackagingConfigurationsRequest>
        void ListPackagingConfigurationsAsync(const ListPackagingConfigurationsRequestT& request, const ListPackagingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageVodClient::ListPackagingConfigurations, request, handler, context);
        }

        /**
         * Returns a collection of MediaPackage VOD PackagingGroup resources.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ListPackagingGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackagingGroupsOutcome ListPackagingGroups(const Model::ListPackagingGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListPackagingGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPackagingGroupsRequestT = Model::ListPackagingGroupsRequest>
        Model::ListPackagingGroupsOutcomeCallable ListPackagingGroupsCallable(const ListPackagingGroupsRequestT& request) const
        {
            return SubmitCallable(&MediaPackageVodClient::ListPackagingGroups, request);
        }

        /**
         * An Async wrapper for ListPackagingGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPackagingGroupsRequestT = Model::ListPackagingGroupsRequest>
        void ListPackagingGroupsAsync(const ListPackagingGroupsRequestT& request, const ListPackagingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageVodClient::ListPackagingGroups, request, handler, context);
        }

        /**
         * Returns a list of the tags assigned to the specified resource.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&MediaPackageVodClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageVodClient::ListTagsForResource, request, handler, context);
        }

        /**
         * Adds tags to the specified resource. You can specify one or more tags to
         * add.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&MediaPackageVodClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageVodClient::TagResource, request, handler, context);
        }

        /**
         * Removes tags from the specified resource. You can specify one or more tags to
         * remove.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&MediaPackageVodClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageVodClient::UntagResource, request, handler, context);
        }

        /**
         * Updates a specific packaging group. You can't change the id attribute or any
         * other system-generated attributes.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/UpdatePackagingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePackagingGroupOutcome UpdatePackagingGroup(const Model::UpdatePackagingGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdatePackagingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePackagingGroupRequestT = Model::UpdatePackagingGroupRequest>
        Model::UpdatePackagingGroupOutcomeCallable UpdatePackagingGroupCallable(const UpdatePackagingGroupRequestT& request) const
        {
            return SubmitCallable(&MediaPackageVodClient::UpdatePackagingGroup, request);
        }

        /**
         * An Async wrapper for UpdatePackagingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePackagingGroupRequestT = Model::UpdatePackagingGroupRequest>
        void UpdatePackagingGroupAsync(const UpdatePackagingGroupRequestT& request, const UpdatePackagingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaPackageVodClient::UpdatePackagingGroup, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MediaPackageVodEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MediaPackageVodClient>;
      void init(const MediaPackageVodClientConfiguration& clientConfiguration);

      MediaPackageVodClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MediaPackageVodEndpointProviderBase> m_endpointProvider;
  };

} // namespace MediaPackageVod
} // namespace Aws
