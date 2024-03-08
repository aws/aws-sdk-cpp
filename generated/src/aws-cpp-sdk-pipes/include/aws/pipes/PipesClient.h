/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pipes/PipesServiceClientModel.h>

namespace Aws
{
namespace Pipes
{
  /**
   * <p>Amazon EventBridge Pipes connects event sources to targets. Pipes reduces the
   * need for specialized knowledge and integration code when developing event driven
   * architectures. This helps ensures consistency across your company’s
   * applications. With Pipes, the target can be any available EventBridge target. To
   * set up a pipe, you select the event source, add optional event filtering, define
   * optional enrichment, and select the target for the event data. </p>
   */
  class AWS_PIPES_API PipesClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PipesClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef PipesClientConfiguration ClientConfigurationType;
      typedef PipesEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PipesClient(const Aws::Pipes::PipesClientConfiguration& clientConfiguration = Aws::Pipes::PipesClientConfiguration(),
                    std::shared_ptr<PipesEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PipesClient(const Aws::Auth::AWSCredentials& credentials,
                    std::shared_ptr<PipesEndpointProviderBase> endpointProvider = nullptr,
                    const Aws::Pipes::PipesClientConfiguration& clientConfiguration = Aws::Pipes::PipesClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PipesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    std::shared_ptr<PipesEndpointProviderBase> endpointProvider = nullptr,
                    const Aws::Pipes::PipesClientConfiguration& clientConfiguration = Aws::Pipes::PipesClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PipesClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PipesClient(const Aws::Auth::AWSCredentials& credentials,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PipesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PipesClient();

        /**
         * <p>Create a pipe. Amazon EventBridge Pipes connect event sources to targets and
         * reduces the need for specialized knowledge and integration code.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/CreatePipe">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePipeOutcome CreatePipe(const Model::CreatePipeRequest& request) const;

        /**
         * A Callable wrapper for CreatePipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePipeRequestT = Model::CreatePipeRequest>
        Model::CreatePipeOutcomeCallable CreatePipeCallable(const CreatePipeRequestT& request) const
        {
            return SubmitCallable(&PipesClient::CreatePipe, request);
        }

        /**
         * An Async wrapper for CreatePipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePipeRequestT = Model::CreatePipeRequest>
        void CreatePipeAsync(const CreatePipeRequestT& request, const CreatePipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PipesClient::CreatePipe, request, handler, context);
        }

        /**
         * <p>Delete an existing pipe. For more information about pipes, see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes.html">Amazon
         * EventBridge Pipes</a> in the Amazon EventBridge User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/DeletePipe">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePipeOutcome DeletePipe(const Model::DeletePipeRequest& request) const;

        /**
         * A Callable wrapper for DeletePipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePipeRequestT = Model::DeletePipeRequest>
        Model::DeletePipeOutcomeCallable DeletePipeCallable(const DeletePipeRequestT& request) const
        {
            return SubmitCallable(&PipesClient::DeletePipe, request);
        }

        /**
         * An Async wrapper for DeletePipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePipeRequestT = Model::DeletePipeRequest>
        void DeletePipeAsync(const DeletePipeRequestT& request, const DeletePipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PipesClient::DeletePipe, request, handler, context);
        }

        /**
         * <p>Get the information about an existing pipe. For more information about pipes,
         * see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes.html">Amazon
         * EventBridge Pipes</a> in the Amazon EventBridge User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/DescribePipe">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePipeOutcome DescribePipe(const Model::DescribePipeRequest& request) const;

        /**
         * A Callable wrapper for DescribePipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePipeRequestT = Model::DescribePipeRequest>
        Model::DescribePipeOutcomeCallable DescribePipeCallable(const DescribePipeRequestT& request) const
        {
            return SubmitCallable(&PipesClient::DescribePipe, request);
        }

        /**
         * An Async wrapper for DescribePipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePipeRequestT = Model::DescribePipeRequest>
        void DescribePipeAsync(const DescribePipeRequestT& request, const DescribePipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PipesClient::DescribePipe, request, handler, context);
        }

        /**
         * <p>Get the pipes associated with this account. For more information about pipes,
         * see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes.html">Amazon
         * EventBridge Pipes</a> in the Amazon EventBridge User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/ListPipes">AWS API
         * Reference</a></p>
         */
        virtual Model::ListPipesOutcome ListPipes(const Model::ListPipesRequest& request) const;

        /**
         * A Callable wrapper for ListPipes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPipesRequestT = Model::ListPipesRequest>
        Model::ListPipesOutcomeCallable ListPipesCallable(const ListPipesRequestT& request) const
        {
            return SubmitCallable(&PipesClient::ListPipes, request);
        }

        /**
         * An Async wrapper for ListPipes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPipesRequestT = Model::ListPipesRequest>
        void ListPipesAsync(const ListPipesRequestT& request, const ListPipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PipesClient::ListPipes, request, handler, context);
        }

        /**
         * <p>Displays the tags associated with a pipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&PipesClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PipesClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Start an existing pipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/StartPipe">AWS API
         * Reference</a></p>
         */
        virtual Model::StartPipeOutcome StartPipe(const Model::StartPipeRequest& request) const;

        /**
         * A Callable wrapper for StartPipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartPipeRequestT = Model::StartPipeRequest>
        Model::StartPipeOutcomeCallable StartPipeCallable(const StartPipeRequestT& request) const
        {
            return SubmitCallable(&PipesClient::StartPipe, request);
        }

        /**
         * An Async wrapper for StartPipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartPipeRequestT = Model::StartPipeRequest>
        void StartPipeAsync(const StartPipeRequestT& request, const StartPipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PipesClient::StartPipe, request, handler, context);
        }

        /**
         * <p>Stop an existing pipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/StopPipe">AWS API
         * Reference</a></p>
         */
        virtual Model::StopPipeOutcome StopPipe(const Model::StopPipeRequest& request) const;

        /**
         * A Callable wrapper for StopPipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopPipeRequestT = Model::StopPipeRequest>
        Model::StopPipeOutcomeCallable StopPipeCallable(const StopPipeRequestT& request) const
        {
            return SubmitCallable(&PipesClient::StopPipe, request);
        }

        /**
         * An Async wrapper for StopPipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopPipeRequestT = Model::StopPipeRequest>
        void StopPipeAsync(const StopPipeRequestT& request, const StopPipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PipesClient::StopPipe, request, handler, context);
        }

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified pipe. Tags can
         * help you organize and categorize your resources. You can also use them to scope
         * user permissions by granting a user permission to access or change only
         * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
         * to Amazon Web Services and are interpreted strictly as strings of
         * characters.</p> <p>You can use the <code>TagResource</code> action with a pipe
         * that already has tags. If you specify a new tag key, this tag is appended to the
         * list of tags associated with the pipe. If you specify a tag key that is already
         * associated with the pipe, the new tag value that you specify replaces the
         * previous value for that tag.</p> <p>You can associate as many as 50 tags with a
         * pipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&PipesClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PipesClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from the specified pipes.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&PipesClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PipesClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Update an existing pipe. When you call <code>UpdatePipe</code>, EventBridge
         * only the updates fields you have specified in the request; the rest remain
         * unchanged. The exception to this is if you modify any Amazon Web
         * Services-service specific fields in the <code>SourceParameters</code>,
         * <code>EnrichmentParameters</code>, or <code>TargetParameters</code> objects. For
         * example, <code>DynamoDBStreamParameters</code> or
         * <code>EventBridgeEventBusParameters</code>. EventBridge updates the fields in
         * these objects atomically as one and overrides existing values. This is by
         * design, and means that if you don't specify an optional field in one of these
         * <code>Parameters</code> objects, EventBridge sets that field to its
         * system-default value during the update.</p> <p>For more information about pipes,
         * see <a
         * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-pipes.html">
         * Amazon EventBridge Pipes</a> in the Amazon EventBridge User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/UpdatePipe">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePipeOutcome UpdatePipe(const Model::UpdatePipeRequest& request) const;

        /**
         * A Callable wrapper for UpdatePipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePipeRequestT = Model::UpdatePipeRequest>
        Model::UpdatePipeOutcomeCallable UpdatePipeCallable(const UpdatePipeRequestT& request) const
        {
            return SubmitCallable(&PipesClient::UpdatePipe, request);
        }

        /**
         * An Async wrapper for UpdatePipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePipeRequestT = Model::UpdatePipeRequest>
        void UpdatePipeAsync(const UpdatePipeRequestT& request, const UpdatePipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PipesClient::UpdatePipe, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PipesEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PipesClient>;
      void init(const PipesClientConfiguration& clientConfiguration);

      PipesClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PipesEndpointProviderBase> m_endpointProvider;
  };

} // namespace Pipes
} // namespace Aws
