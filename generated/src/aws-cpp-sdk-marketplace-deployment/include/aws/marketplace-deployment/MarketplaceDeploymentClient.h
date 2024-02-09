/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-deployment/MarketplaceDeployment_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-deployment/MarketplaceDeploymentServiceClientModel.h>

namespace Aws
{
namespace MarketplaceDeployment
{
  /**
   * <p>The AWS Marketplace Deployment Service supports the Quick Launch experience,
   * which is a deployment option for software as a service (SaaS) products. Quick
   * Launch simplifies and reduces the time, resources, and steps required to
   * configure, deploy, and launch a products. The AWS Marketplace Deployment Service
   * provides sellers with a secure method for passing deployment parameters (for
   * example, API keys and external IDs) to buyers during the Quick Launch
   * experience.</p>
   */
  class AWS_MARKETPLACEDEPLOYMENT_API MarketplaceDeploymentClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MarketplaceDeploymentClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MarketplaceDeploymentClientConfiguration ClientConfigurationType;
      typedef MarketplaceDeploymentEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceDeploymentClient(const Aws::MarketplaceDeployment::MarketplaceDeploymentClientConfiguration& clientConfiguration = Aws::MarketplaceDeployment::MarketplaceDeploymentClientConfiguration(),
                                    std::shared_ptr<MarketplaceDeploymentEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceDeploymentClient(const Aws::Auth::AWSCredentials& credentials,
                                    std::shared_ptr<MarketplaceDeploymentEndpointProviderBase> endpointProvider = nullptr,
                                    const Aws::MarketplaceDeployment::MarketplaceDeploymentClientConfiguration& clientConfiguration = Aws::MarketplaceDeployment::MarketplaceDeploymentClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceDeploymentClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                    std::shared_ptr<MarketplaceDeploymentEndpointProviderBase> endpointProvider = nullptr,
                                    const Aws::MarketplaceDeployment::MarketplaceDeploymentClientConfiguration& clientConfiguration = Aws::MarketplaceDeployment::MarketplaceDeploymentClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceDeploymentClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceDeploymentClient(const Aws::Auth::AWSCredentials& credentials,
                                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceDeploymentClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MarketplaceDeploymentClient();

        /**
         * <p>Lists all tags that have been added to a deployment parameter
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-deployment-2023-01-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&MarketplaceDeploymentClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceDeploymentClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Creates or updates a deployment parameter and is targeted by
         * <code>catalog</code> and <code>agreementId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-deployment-2023-01-25/PutDeploymentParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDeploymentParameterOutcome PutDeploymentParameter(const Model::PutDeploymentParameterRequest& request) const;

        /**
         * A Callable wrapper for PutDeploymentParameter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutDeploymentParameterRequestT = Model::PutDeploymentParameterRequest>
        Model::PutDeploymentParameterOutcomeCallable PutDeploymentParameterCallable(const PutDeploymentParameterRequestT& request) const
        {
            return SubmitCallable(&MarketplaceDeploymentClient::PutDeploymentParameter, request);
        }

        /**
         * An Async wrapper for PutDeploymentParameter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutDeploymentParameterRequestT = Model::PutDeploymentParameterRequest>
        void PutDeploymentParameterAsync(const PutDeploymentParameterRequestT& request, const PutDeploymentParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceDeploymentClient::PutDeploymentParameter, request, handler, context);
        }

        /**
         * <p>Tags a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-deployment-2023-01-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&MarketplaceDeploymentClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceDeploymentClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a tag or list of tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-deployment-2023-01-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&MarketplaceDeploymentClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceDeploymentClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MarketplaceDeploymentEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MarketplaceDeploymentClient>;
      void init(const MarketplaceDeploymentClientConfiguration& clientConfiguration);

      MarketplaceDeploymentClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MarketplaceDeploymentEndpointProviderBase> m_endpointProvider;
  };

} // namespace MarketplaceDeployment
} // namespace Aws
