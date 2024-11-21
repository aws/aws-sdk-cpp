/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm-quicksetup/SSMQuickSetupServiceClientModel.h>

namespace Aws
{
namespace SSMQuickSetup
{
  /**
   * <p>Quick Setup helps you quickly configure frequently used services and features
   * with recommended best practices. Quick Setup simplifies setting up services,
   * including Systems Manager, by automating common or recommended tasks.</p>
   */
  class AWS_SSMQUICKSETUP_API SSMQuickSetupClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SSMQuickSetupClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SSMQuickSetupClientConfiguration ClientConfigurationType;
      typedef SSMQuickSetupEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMQuickSetupClient(const Aws::SSMQuickSetup::SSMQuickSetupClientConfiguration& clientConfiguration = Aws::SSMQuickSetup::SSMQuickSetupClientConfiguration(),
                            std::shared_ptr<SSMQuickSetupEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMQuickSetupClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<SSMQuickSetupEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::SSMQuickSetup::SSMQuickSetupClientConfiguration& clientConfiguration = Aws::SSMQuickSetup::SSMQuickSetupClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMQuickSetupClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<SSMQuickSetupEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::SSMQuickSetup::SSMQuickSetupClientConfiguration& clientConfiguration = Aws::SSMQuickSetup::SSMQuickSetupClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMQuickSetupClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMQuickSetupClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMQuickSetupClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SSMQuickSetupClient();

        /**
         * <p>Creates a Quick Setup configuration manager resource. This object is a
         * collection of desired state configurations for multiple configuration
         * definitions and summaries describing the deployments of those
         * definitions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/CreateConfigurationManager">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationManagerOutcome CreateConfigurationManager(const Model::CreateConfigurationManagerRequest& request) const;

        /**
         * A Callable wrapper for CreateConfigurationManager that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConfigurationManagerRequestT = Model::CreateConfigurationManagerRequest>
        Model::CreateConfigurationManagerOutcomeCallable CreateConfigurationManagerCallable(const CreateConfigurationManagerRequestT& request) const
        {
            return SubmitCallable(&SSMQuickSetupClient::CreateConfigurationManager, request);
        }

        /**
         * An Async wrapper for CreateConfigurationManager that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfigurationManagerRequestT = Model::CreateConfigurationManagerRequest>
        void CreateConfigurationManagerAsync(const CreateConfigurationManagerRequestT& request, const CreateConfigurationManagerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMQuickSetupClient::CreateConfigurationManager, request, handler, context);
        }

        /**
         * <p>Deletes a configuration manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/DeleteConfigurationManager">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationManagerOutcome DeleteConfigurationManager(const Model::DeleteConfigurationManagerRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfigurationManager that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfigurationManagerRequestT = Model::DeleteConfigurationManagerRequest>
        Model::DeleteConfigurationManagerOutcomeCallable DeleteConfigurationManagerCallable(const DeleteConfigurationManagerRequestT& request) const
        {
            return SubmitCallable(&SSMQuickSetupClient::DeleteConfigurationManager, request);
        }

        /**
         * An Async wrapper for DeleteConfigurationManager that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfigurationManagerRequestT = Model::DeleteConfigurationManagerRequest>
        void DeleteConfigurationManagerAsync(const DeleteConfigurationManagerRequestT& request, const DeleteConfigurationManagerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMQuickSetupClient::DeleteConfigurationManager, request, handler, context);
        }

        /**
         * <p>Returns details about the specified configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/GetConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigurationOutcome GetConfiguration(const Model::GetConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConfigurationRequestT = Model::GetConfigurationRequest>
        Model::GetConfigurationOutcomeCallable GetConfigurationCallable(const GetConfigurationRequestT& request) const
        {
            return SubmitCallable(&SSMQuickSetupClient::GetConfiguration, request);
        }

        /**
         * An Async wrapper for GetConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConfigurationRequestT = Model::GetConfigurationRequest>
        void GetConfigurationAsync(const GetConfigurationRequestT& request, const GetConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMQuickSetupClient::GetConfiguration, request, handler, context);
        }

        /**
         * <p>Returns a configuration manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/GetConfigurationManager">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigurationManagerOutcome GetConfigurationManager(const Model::GetConfigurationManagerRequest& request) const;

        /**
         * A Callable wrapper for GetConfigurationManager that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConfigurationManagerRequestT = Model::GetConfigurationManagerRequest>
        Model::GetConfigurationManagerOutcomeCallable GetConfigurationManagerCallable(const GetConfigurationManagerRequestT& request) const
        {
            return SubmitCallable(&SSMQuickSetupClient::GetConfigurationManager, request);
        }

        /**
         * An Async wrapper for GetConfigurationManager that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConfigurationManagerRequestT = Model::GetConfigurationManagerRequest>
        void GetConfigurationManagerAsync(const GetConfigurationManagerRequestT& request, const GetConfigurationManagerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMQuickSetupClient::GetConfigurationManager, request, handler, context);
        }

        /**
         * <p>Returns settings configured for Quick Setup in the requesting Amazon Web
         * Services account and Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/GetServiceSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceSettingsOutcome GetServiceSettings(const Model::GetServiceSettingsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetServiceSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetServiceSettingsRequestT = Model::GetServiceSettingsRequest>
        Model::GetServiceSettingsOutcomeCallable GetServiceSettingsCallable(const GetServiceSettingsRequestT& request = {}) const
        {
            return SubmitCallable(&SSMQuickSetupClient::GetServiceSettings, request);
        }

        /**
         * An Async wrapper for GetServiceSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServiceSettingsRequestT = Model::GetServiceSettingsRequest>
        void GetServiceSettingsAsync(const GetServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetServiceSettingsRequestT& request = {}) const
        {
            return SubmitAsync(&SSMQuickSetupClient::GetServiceSettings, request, handler, context);
        }

        /**
         * <p>Returns Quick Setup configuration managers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/ListConfigurationManagers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationManagersOutcome ListConfigurationManagers(const Model::ListConfigurationManagersRequest& request = {}) const;

        /**
         * A Callable wrapper for ListConfigurationManagers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConfigurationManagersRequestT = Model::ListConfigurationManagersRequest>
        Model::ListConfigurationManagersOutcomeCallable ListConfigurationManagersCallable(const ListConfigurationManagersRequestT& request = {}) const
        {
            return SubmitCallable(&SSMQuickSetupClient::ListConfigurationManagers, request);
        }

        /**
         * An Async wrapper for ListConfigurationManagers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConfigurationManagersRequestT = Model::ListConfigurationManagersRequest>
        void ListConfigurationManagersAsync(const ListConfigurationManagersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListConfigurationManagersRequestT& request = {}) const
        {
            return SubmitAsync(&SSMQuickSetupClient::ListConfigurationManagers, request, handler, context);
        }

        /**
         * <p>Returns configurations deployed by Quick Setup in the requesting Amazon Web
         * Services account and Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/ListConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationsOutcome ListConfigurations(const Model::ListConfigurationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConfigurationsRequestT = Model::ListConfigurationsRequest>
        Model::ListConfigurationsOutcomeCallable ListConfigurationsCallable(const ListConfigurationsRequestT& request = {}) const
        {
            return SubmitCallable(&SSMQuickSetupClient::ListConfigurations, request);
        }

        /**
         * An Async wrapper for ListConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConfigurationsRequestT = Model::ListConfigurationsRequest>
        void ListConfigurationsAsync(const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListConfigurationsRequestT& request = {}) const
        {
            return SubmitAsync(&SSMQuickSetupClient::ListConfigurations, request, handler, context);
        }

        /**
         * <p>Returns the available Quick Setup types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/ListQuickSetupTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQuickSetupTypesOutcome ListQuickSetupTypes(const Model::ListQuickSetupTypesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListQuickSetupTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListQuickSetupTypesRequestT = Model::ListQuickSetupTypesRequest>
        Model::ListQuickSetupTypesOutcomeCallable ListQuickSetupTypesCallable(const ListQuickSetupTypesRequestT& request = {}) const
        {
            return SubmitCallable(&SSMQuickSetupClient::ListQuickSetupTypes, request);
        }

        /**
         * An Async wrapper for ListQuickSetupTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQuickSetupTypesRequestT = Model::ListQuickSetupTypesRequest>
        void ListQuickSetupTypesAsync(const ListQuickSetupTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListQuickSetupTypesRequestT& request = {}) const
        {
            return SubmitAsync(&SSMQuickSetupClient::ListQuickSetupTypes, request, handler, context);
        }

        /**
         * <p>Returns tags assigned to the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&SSMQuickSetupClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMQuickSetupClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Assigns key-value pairs of metadata to Amazon Web Services
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&SSMQuickSetupClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMQuickSetupClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&SSMQuickSetupClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMQuickSetupClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a Quick Setup configuration definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/UpdateConfigurationDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationDefinitionOutcome UpdateConfigurationDefinition(const Model::UpdateConfigurationDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfigurationDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConfigurationDefinitionRequestT = Model::UpdateConfigurationDefinitionRequest>
        Model::UpdateConfigurationDefinitionOutcomeCallable UpdateConfigurationDefinitionCallable(const UpdateConfigurationDefinitionRequestT& request) const
        {
            return SubmitCallable(&SSMQuickSetupClient::UpdateConfigurationDefinition, request);
        }

        /**
         * An Async wrapper for UpdateConfigurationDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConfigurationDefinitionRequestT = Model::UpdateConfigurationDefinitionRequest>
        void UpdateConfigurationDefinitionAsync(const UpdateConfigurationDefinitionRequestT& request, const UpdateConfigurationDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMQuickSetupClient::UpdateConfigurationDefinition, request, handler, context);
        }

        /**
         * <p>Updates a Quick Setup configuration manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/UpdateConfigurationManager">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationManagerOutcome UpdateConfigurationManager(const Model::UpdateConfigurationManagerRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfigurationManager that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConfigurationManagerRequestT = Model::UpdateConfigurationManagerRequest>
        Model::UpdateConfigurationManagerOutcomeCallable UpdateConfigurationManagerCallable(const UpdateConfigurationManagerRequestT& request) const
        {
            return SubmitCallable(&SSMQuickSetupClient::UpdateConfigurationManager, request);
        }

        /**
         * An Async wrapper for UpdateConfigurationManager that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConfigurationManagerRequestT = Model::UpdateConfigurationManagerRequest>
        void UpdateConfigurationManagerAsync(const UpdateConfigurationManagerRequestT& request, const UpdateConfigurationManagerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMQuickSetupClient::UpdateConfigurationManager, request, handler, context);
        }

        /**
         * <p>Updates settings configured for Quick Setup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/UpdateServiceSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceSettingsOutcome UpdateServiceSettings(const Model::UpdateServiceSettingsRequest& request = {}) const;

        /**
         * A Callable wrapper for UpdateServiceSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateServiceSettingsRequestT = Model::UpdateServiceSettingsRequest>
        Model::UpdateServiceSettingsOutcomeCallable UpdateServiceSettingsCallable(const UpdateServiceSettingsRequestT& request = {}) const
        {
            return SubmitCallable(&SSMQuickSetupClient::UpdateServiceSettings, request);
        }

        /**
         * An Async wrapper for UpdateServiceSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateServiceSettingsRequestT = Model::UpdateServiceSettingsRequest>
        void UpdateServiceSettingsAsync(const UpdateServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const UpdateServiceSettingsRequestT& request = {}) const
        {
            return SubmitAsync(&SSMQuickSetupClient::UpdateServiceSettings, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SSMQuickSetupEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SSMQuickSetupClient>;
      void init(const SSMQuickSetupClientConfiguration& clientConfiguration);

      SSMQuickSetupClientConfiguration m_clientConfiguration;
      std::shared_ptr<SSMQuickSetupEndpointProviderBase> m_endpointProvider;
  };

} // namespace SSMQuickSetup
} // namespace Aws
