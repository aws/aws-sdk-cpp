/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rbin/RecycleBinServiceClientModel.h>

namespace Aws
{
namespace RecycleBin
{
  /**
   * <p>This is the <i>Recycle Bin API Reference</i>. This documentation provides
   * descriptions and syntax for each of the actions and data types in Recycle
   * Bin.</p> <p>Recycle Bin is a resource recovery feature that enables you to
   * restore accidentally deleted snapshots and EBS-backed AMIs. When using Recycle
   * Bin, if your resources are deleted, they are retained in the Recycle Bin for a
   * time period that you specify.</p> <p>You can restore a resource from the Recycle
   * Bin at any time before its retention period expires. After you restore a
   * resource from the Recycle Bin, the resource is removed from the Recycle Bin, and
   * you can then use it in the same way you use any other resource of that type in
   * your account. If the retention period expires and the resource is not restored,
   * the resource is permanently deleted from the Recycle Bin and is no longer
   * available for recovery. For more information about Recycle Bin, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/recycle-bin.html">
   * Recycle Bin</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
   */
  class AWS_RECYCLEBIN_API RecycleBinClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<RecycleBinClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef RecycleBinClientConfiguration ClientConfigurationType;
      typedef RecycleBinEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RecycleBinClient(const Aws::RecycleBin::RecycleBinClientConfiguration& clientConfiguration = Aws::RecycleBin::RecycleBinClientConfiguration(),
                         std::shared_ptr<RecycleBinEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RecycleBinClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<RecycleBinEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::RecycleBin::RecycleBinClientConfiguration& clientConfiguration = Aws::RecycleBin::RecycleBinClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RecycleBinClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<RecycleBinEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::RecycleBin::RecycleBinClientConfiguration& clientConfiguration = Aws::RecycleBin::RecycleBinClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RecycleBinClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RecycleBinClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RecycleBinClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~RecycleBinClient();

        /**
         * <p>Creates a Recycle Bin retention rule. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/recycle-bin-working-with-rules.html#recycle-bin-create-rule">
         * Create Recycle Bin retention rules</a> in the <i>Amazon Elastic Compute Cloud
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/CreateRule">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateRuleOutcome CreateRule(const Model::CreateRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRuleRequestT = Model::CreateRuleRequest>
        Model::CreateRuleOutcomeCallable CreateRuleCallable(const CreateRuleRequestT& request) const
        {
            return SubmitCallable(&RecycleBinClient::CreateRule, request);
        }

        /**
         * An Async wrapper for CreateRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRuleRequestT = Model::CreateRuleRequest>
        void CreateRuleAsync(const CreateRuleRequestT& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RecycleBinClient::CreateRule, request, handler, context);
        }

        /**
         * <p>Deletes a Recycle Bin retention rule. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/recycle-bin-working-with-rules.html#recycle-bin-delete-rule">
         * Delete Recycle Bin retention rules</a> in the <i>Amazon Elastic Compute Cloud
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/DeleteRule">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRuleRequestT = Model::DeleteRuleRequest>
        Model::DeleteRuleOutcomeCallable DeleteRuleCallable(const DeleteRuleRequestT& request) const
        {
            return SubmitCallable(&RecycleBinClient::DeleteRule, request);
        }

        /**
         * An Async wrapper for DeleteRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRuleRequestT = Model::DeleteRuleRequest>
        void DeleteRuleAsync(const DeleteRuleRequestT& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RecycleBinClient::DeleteRule, request, handler, context);
        }

        /**
         * <p>Gets information about a Recycle Bin retention rule.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/GetRule">AWS API
         * Reference</a></p>
         */
        virtual Model::GetRuleOutcome GetRule(const Model::GetRuleRequest& request) const;

        /**
         * A Callable wrapper for GetRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRuleRequestT = Model::GetRuleRequest>
        Model::GetRuleOutcomeCallable GetRuleCallable(const GetRuleRequestT& request) const
        {
            return SubmitCallable(&RecycleBinClient::GetRule, request);
        }

        /**
         * An Async wrapper for GetRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRuleRequestT = Model::GetRuleRequest>
        void GetRuleAsync(const GetRuleRequestT& request, const GetRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RecycleBinClient::GetRule, request, handler, context);
        }

        /**
         * <p>Lists the Recycle Bin retention rules in the Region.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/ListRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRulesOutcome ListRules(const Model::ListRulesRequest& request) const;

        /**
         * A Callable wrapper for ListRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRulesRequestT = Model::ListRulesRequest>
        Model::ListRulesOutcomeCallable ListRulesCallable(const ListRulesRequestT& request) const
        {
            return SubmitCallable(&RecycleBinClient::ListRules, request);
        }

        /**
         * An Async wrapper for ListRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRulesRequestT = Model::ListRulesRequest>
        void ListRulesAsync(const ListRulesRequestT& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RecycleBinClient::ListRules, request, handler, context);
        }

        /**
         * <p>Lists the tags assigned to a retention rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&RecycleBinClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RecycleBinClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Locks a retention rule. A locked retention rule can't be modified or
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/LockRule">AWS API
         * Reference</a></p>
         */
        virtual Model::LockRuleOutcome LockRule(const Model::LockRuleRequest& request) const;

        /**
         * A Callable wrapper for LockRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename LockRuleRequestT = Model::LockRuleRequest>
        Model::LockRuleOutcomeCallable LockRuleCallable(const LockRuleRequestT& request) const
        {
            return SubmitCallable(&RecycleBinClient::LockRule, request);
        }

        /**
         * An Async wrapper for LockRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename LockRuleRequestT = Model::LockRuleRequest>
        void LockRuleAsync(const LockRuleRequestT& request, const LockRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RecycleBinClient::LockRule, request, handler, context);
        }

        /**
         * <p>Assigns tags to the specified retention rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&RecycleBinClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RecycleBinClient::TagResource, request, handler, context);
        }

        /**
         * <p>Unlocks a retention rule. After a retention rule is unlocked, it can be
         * modified or deleted only after the unlock delay period expires.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/UnlockRule">AWS API
         * Reference</a></p>
         */
        virtual Model::UnlockRuleOutcome UnlockRule(const Model::UnlockRuleRequest& request) const;

        /**
         * A Callable wrapper for UnlockRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UnlockRuleRequestT = Model::UnlockRuleRequest>
        Model::UnlockRuleOutcomeCallable UnlockRuleCallable(const UnlockRuleRequestT& request) const
        {
            return SubmitCallable(&RecycleBinClient::UnlockRule, request);
        }

        /**
         * An Async wrapper for UnlockRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UnlockRuleRequestT = Model::UnlockRuleRequest>
        void UnlockRuleAsync(const UnlockRuleRequestT& request, const UnlockRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RecycleBinClient::UnlockRule, request, handler, context);
        }

        /**
         * <p>Unassigns a tag from a retention rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&RecycleBinClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RecycleBinClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing Recycle Bin retention rule. You can update a retention
         * rule's description, resource tags, and retention period at any time after
         * creation. You can't update a retention rule's resource type after creation. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/recycle-bin-working-with-rules.html#recycle-bin-update-rule">
         * Update Recycle Bin retention rules</a> in the <i>Amazon Elastic Compute Cloud
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/UpdateRule">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateRuleOutcome UpdateRule(const Model::UpdateRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRuleRequestT = Model::UpdateRuleRequest>
        Model::UpdateRuleOutcomeCallable UpdateRuleCallable(const UpdateRuleRequestT& request) const
        {
            return SubmitCallable(&RecycleBinClient::UpdateRule, request);
        }

        /**
         * An Async wrapper for UpdateRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRuleRequestT = Model::UpdateRuleRequest>
        void UpdateRuleAsync(const UpdateRuleRequestT& request, const UpdateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RecycleBinClient::UpdateRule, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<RecycleBinEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<RecycleBinClient>;
      void init(const RecycleBinClientConfiguration& clientConfiguration);

      RecycleBinClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<RecycleBinEndpointProviderBase> m_endpointProvider;
  };

} // namespace RecycleBin
} // namespace Aws
