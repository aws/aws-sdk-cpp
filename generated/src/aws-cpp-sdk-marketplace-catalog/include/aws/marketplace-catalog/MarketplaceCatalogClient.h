/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/MarketplaceCatalogServiceClientModel.h>

namespace Aws
{
namespace MarketplaceCatalog
{
  /**
   * <p>Catalog API actions allow you to manage your entities through list, describe,
   * and update capabilities. An entity can be a product or an offer on AWS
   * Marketplace. </p> <p>You can automate your entity update process by integrating
   * the AWS Marketplace Catalog API with your AWS Marketplace product build or
   * deployment pipelines. You can also create your own applications on top of the
   * Catalog API to manage your products on AWS Marketplace.</p>
   */
  class AWS_MARKETPLACECATALOG_API MarketplaceCatalogClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MarketplaceCatalogClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MarketplaceCatalogClientConfiguration ClientConfigurationType;
      typedef MarketplaceCatalogEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceCatalogClient(const Aws::MarketplaceCatalog::MarketplaceCatalogClientConfiguration& clientConfiguration = Aws::MarketplaceCatalog::MarketplaceCatalogClientConfiguration(),
                                 std::shared_ptr<MarketplaceCatalogEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceCatalogClient(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<MarketplaceCatalogEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::MarketplaceCatalog::MarketplaceCatalogClientConfiguration& clientConfiguration = Aws::MarketplaceCatalog::MarketplaceCatalogClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceCatalogClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<MarketplaceCatalogEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::MarketplaceCatalog::MarketplaceCatalogClientConfiguration& clientConfiguration = Aws::MarketplaceCatalog::MarketplaceCatalogClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceCatalogClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceCatalogClient(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceCatalogClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MarketplaceCatalogClient();

        /**
         * <p>Returns metadata and content for multiple entities. This is the Batch version
         * of the <code>DescribeEntity</code> API and uses the same IAM permission action
         * as <code>DescribeEntity</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/BatchDescribeEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDescribeEntitiesOutcome BatchDescribeEntities(const Model::BatchDescribeEntitiesRequest& request) const;

        /**
         * A Callable wrapper for BatchDescribeEntities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDescribeEntitiesRequestT = Model::BatchDescribeEntitiesRequest>
        Model::BatchDescribeEntitiesOutcomeCallable BatchDescribeEntitiesCallable(const BatchDescribeEntitiesRequestT& request) const
        {
            return SubmitCallable(&MarketplaceCatalogClient::BatchDescribeEntities, request);
        }

        /**
         * An Async wrapper for BatchDescribeEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDescribeEntitiesRequestT = Model::BatchDescribeEntitiesRequest>
        void BatchDescribeEntitiesAsync(const BatchDescribeEntitiesRequestT& request, const BatchDescribeEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceCatalogClient::BatchDescribeEntities, request, handler, context);
        }

        /**
         * <p>Used to cancel an open change request. Must be sent before the status of the
         * request changes to <code>APPLYING</code>, the final stage of completing your
         * change request. You can describe a change during the 60-day request history
         * retention period for API calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/CancelChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelChangeSetOutcome CancelChangeSet(const Model::CancelChangeSetRequest& request) const;

        /**
         * A Callable wrapper for CancelChangeSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelChangeSetRequestT = Model::CancelChangeSetRequest>
        Model::CancelChangeSetOutcomeCallable CancelChangeSetCallable(const CancelChangeSetRequestT& request) const
        {
            return SubmitCallable(&MarketplaceCatalogClient::CancelChangeSet, request);
        }

        /**
         * An Async wrapper for CancelChangeSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelChangeSetRequestT = Model::CancelChangeSetRequest>
        void CancelChangeSetAsync(const CancelChangeSetRequestT& request, const CancelChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceCatalogClient::CancelChangeSet, request, handler, context);
        }

        /**
         * <p>Deletes a resource-based policy on an entity that is identified by its
         * resource ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&MarketplaceCatalogClient::DeleteResourcePolicy, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceCatalogClient::DeleteResourcePolicy, request, handler, context);
        }

        /**
         * <p>Provides information about a given change set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/DescribeChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChangeSetOutcome DescribeChangeSet(const Model::DescribeChangeSetRequest& request) const;

        /**
         * A Callable wrapper for DescribeChangeSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChangeSetRequestT = Model::DescribeChangeSetRequest>
        Model::DescribeChangeSetOutcomeCallable DescribeChangeSetCallable(const DescribeChangeSetRequestT& request) const
        {
            return SubmitCallable(&MarketplaceCatalogClient::DescribeChangeSet, request);
        }

        /**
         * An Async wrapper for DescribeChangeSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChangeSetRequestT = Model::DescribeChangeSetRequest>
        void DescribeChangeSetAsync(const DescribeChangeSetRequestT& request, const DescribeChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceCatalogClient::DescribeChangeSet, request, handler, context);
        }

        /**
         * <p>Returns the metadata and content of the entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/DescribeEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEntityOutcome DescribeEntity(const Model::DescribeEntityRequest& request) const;

        /**
         * A Callable wrapper for DescribeEntity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEntityRequestT = Model::DescribeEntityRequest>
        Model::DescribeEntityOutcomeCallable DescribeEntityCallable(const DescribeEntityRequestT& request) const
        {
            return SubmitCallable(&MarketplaceCatalogClient::DescribeEntity, request);
        }

        /**
         * An Async wrapper for DescribeEntity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEntityRequestT = Model::DescribeEntityRequest>
        void DescribeEntityAsync(const DescribeEntityRequestT& request, const DescribeEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceCatalogClient::DescribeEntity, request, handler, context);
        }

        /**
         * <p>Gets a resource-based policy of an entity that is identified by its resource
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const GetResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&MarketplaceCatalogClient::GetResourcePolicy, request);
        }

        /**
         * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        void GetResourcePolicyAsync(const GetResourcePolicyRequestT& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceCatalogClient::GetResourcePolicy, request, handler, context);
        }

        /**
         * <p>Returns the list of change sets owned by the account being used to make the
         * call. You can filter this list by providing any combination of
         * <code>entityId</code>, <code>ChangeSetName</code>, and status. If you provide
         * more than one filter, the API operation applies a logical AND between the
         * filters.</p> <p>You can describe a change during the 60-day request history
         * retention period for API calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ListChangeSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChangeSetsOutcome ListChangeSets(const Model::ListChangeSetsRequest& request) const;

        /**
         * A Callable wrapper for ListChangeSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChangeSetsRequestT = Model::ListChangeSetsRequest>
        Model::ListChangeSetsOutcomeCallable ListChangeSetsCallable(const ListChangeSetsRequestT& request) const
        {
            return SubmitCallable(&MarketplaceCatalogClient::ListChangeSets, request);
        }

        /**
         * An Async wrapper for ListChangeSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChangeSetsRequestT = Model::ListChangeSetsRequest>
        void ListChangeSetsAsync(const ListChangeSetsRequestT& request, const ListChangeSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceCatalogClient::ListChangeSets, request, handler, context);
        }

        /**
         * <p>Provides the list of entities of a given type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ListEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntitiesOutcome ListEntities(const Model::ListEntitiesRequest& request) const;

        /**
         * A Callable wrapper for ListEntities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEntitiesRequestT = Model::ListEntitiesRequest>
        Model::ListEntitiesOutcomeCallable ListEntitiesCallable(const ListEntitiesRequestT& request) const
        {
            return SubmitCallable(&MarketplaceCatalogClient::ListEntities, request);
        }

        /**
         * An Async wrapper for ListEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEntitiesRequestT = Model::ListEntitiesRequest>
        void ListEntitiesAsync(const ListEntitiesRequestT& request, const ListEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceCatalogClient::ListEntities, request, handler, context);
        }

        /**
         * <p>Lists all tags that have been added to a resource (either an <a
         * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/welcome.html#catalog-api-entities">entity</a>
         * or <a
         * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/welcome.html#working-with-change-sets">change
         * set</a>).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&MarketplaceCatalogClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceCatalogClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Attaches a resource-based policy to an entity. Examples of an entity include:
         * <code>AmiProduct</code> and <code>ContainerProduct</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&MarketplaceCatalogClient::PutResourcePolicy, request);
        }

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceCatalogClient::PutResourcePolicy, request, handler, context);
        }

        /**
         * <p>Allows you to request changes for your entities. Within a single
         * <code>ChangeSet</code>, you can't start the same change type against the same
         * entity multiple times. Additionally, when a <code>ChangeSet</code> is running,
         * all the entities targeted by the different changes are locked until the change
         * set has completed (either succeeded, cancelled, or failed). If you try to start
         * a change set containing a change against an entity that is already locked, you
         * will receive a <code>ResourceInUseException</code> error.</p> <p>For example,
         * you can't start the <code>ChangeSet</code> described in the <a
         * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/API_StartChangeSet.html#API_StartChangeSet_Examples">example</a>
         * later in this topic because it contains two changes to run the same change type
         * (<code>AddRevisions</code>) against the same entity
         * (<code>entity-id@1</code>).</p> <p>For more information about working with
         * change sets, see <a
         * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/welcome.html#working-with-change-sets">
         * Working with change sets</a>. For information about change types for single-AMI
         * products, see <a
         * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/ami-products.html#working-with-single-AMI-products">Working
         * with single-AMI products</a>. Also, for more information about change types
         * available for container-based products, see <a
         * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/container-products.html#working-with-container-products">Working
         * with container products</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/StartChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::StartChangeSetOutcome StartChangeSet(const Model::StartChangeSetRequest& request) const;

        /**
         * A Callable wrapper for StartChangeSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartChangeSetRequestT = Model::StartChangeSetRequest>
        Model::StartChangeSetOutcomeCallable StartChangeSetCallable(const StartChangeSetRequestT& request) const
        {
            return SubmitCallable(&MarketplaceCatalogClient::StartChangeSet, request);
        }

        /**
         * An Async wrapper for StartChangeSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartChangeSetRequestT = Model::StartChangeSetRequest>
        void StartChangeSetAsync(const StartChangeSetRequestT& request, const StartChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceCatalogClient::StartChangeSet, request, handler, context);
        }

        /**
         * <p>Tags a resource (either an <a
         * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/welcome.html#catalog-api-entities">entity</a>
         * or <a
         * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/welcome.html#working-with-change-sets">change
         * set</a>).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&MarketplaceCatalogClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceCatalogClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a tag or list of tags from a resource (either an <a
         * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/welcome.html#catalog-api-entities">entity</a>
         * or <a
         * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/welcome.html#working-with-change-sets">change
         * set</a>).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&MarketplaceCatalogClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceCatalogClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MarketplaceCatalogEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MarketplaceCatalogClient>;
      void init(const MarketplaceCatalogClientConfiguration& clientConfiguration);

      MarketplaceCatalogClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MarketplaceCatalogEndpointProviderBase> m_endpointProvider;
  };

} // namespace MarketplaceCatalog
} // namespace Aws
