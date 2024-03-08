/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediapackagev2/Mediapackagev2ServiceClientModel.h>

namespace Aws
{
namespace mediapackagev2
{
  /**
   *  <p>This guide is intended for creating AWS Elemental MediaPackage
   * resources in MediaPackage Version 2 (v2) starting from May 2023. To get started
   * with MediaPackage v2, create your MediaPackage resources. There isn't an
   * automated process to migrate your resources from MediaPackage v1 to MediaPackage
   * v2. </p> <p>The names of the entities that you use to access this API, like URLs
   * and ARNs, all have the versioning information added, like "v2", to distinguish
   * from the prior version. If you used MediaPackage prior to this release, you
   * can't use the MediaPackage v2 CLI or the MediaPackage v2 API to access any
   * MediaPackage v1 resources.</p> <p>If you created resources in MediaPackage v1,
   * use video on demand (VOD) workflows, and aren't looking to migrate to
   * MediaPackage v2 yet, see the <a
   * href="https://docs.aws.amazon.com/mediapackage/latest/apireference/what-is.html">MediaPackage
   * v1 Live API Reference</a>.</p>  <p>This is the AWS Elemental MediaPackage
   * v2 Live REST API Reference. It describes all the MediaPackage API operations for
   * live content in detail, and provides sample requests, responses, and errors for
   * the supported web services protocols.</p> <p>We assume that you have the IAM
   * permissions that you need to use MediaPackage via the REST API. We also assume
   * that you are familiar with the features and operations of MediaPackage, as
   * described in the AWS Elemental MediaPackage User Guide.</p>
   */
  class AWS_MEDIAPACKAGEV2_API Mediapackagev2Client : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<Mediapackagev2Client>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef Mediapackagev2ClientConfiguration ClientConfigurationType;
      typedef Mediapackagev2EndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Mediapackagev2Client(const Aws::mediapackagev2::Mediapackagev2ClientConfiguration& clientConfiguration = Aws::mediapackagev2::Mediapackagev2ClientConfiguration(),
                             std::shared_ptr<Mediapackagev2EndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Mediapackagev2Client(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<Mediapackagev2EndpointProviderBase> endpointProvider = nullptr,
                             const Aws::mediapackagev2::Mediapackagev2ClientConfiguration& clientConfiguration = Aws::mediapackagev2::Mediapackagev2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Mediapackagev2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<Mediapackagev2EndpointProviderBase> endpointProvider = nullptr,
                             const Aws::mediapackagev2::Mediapackagev2ClientConfiguration& clientConfiguration = Aws::mediapackagev2::Mediapackagev2ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Mediapackagev2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Mediapackagev2Client(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Mediapackagev2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~Mediapackagev2Client();

        /**
         * <p>Create a channel to start receiving content streams. The channel represents
         * the input to MediaPackage for incoming live content from an encoder such as AWS
         * Elemental MediaLive. The channel receives content, and after packaging it,
         * outputs it through an origin endpoint to downstream devices (such as video
         * players or CDNs) that request the content. You can create only one channel with
         * each request. We recommend that you spread out channels between channel groups,
         * such as putting redundant channels in the same AWS Region in different channel
         * groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;

        /**
         * A Callable wrapper for CreateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChannelRequestT = Model::CreateChannelRequest>
        Model::CreateChannelOutcomeCallable CreateChannelCallable(const CreateChannelRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::CreateChannel, request);
        }

        /**
         * An Async wrapper for CreateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChannelRequestT = Model::CreateChannelRequest>
        void CreateChannelAsync(const CreateChannelRequestT& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::CreateChannel, request, handler, context);
        }

        /**
         * <p>Create a channel group to group your channels and origin endpoints. A channel
         * group is the top-level resource that consists of channels and origin endpoints
         * that are associated with it and that provides predictable URLs for stream
         * delivery. All channels and origin endpoints within the channel group are
         * guaranteed to share the DNS. You can create only one channel group with each
         * request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/CreateChannelGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelGroupOutcome CreateChannelGroup(const Model::CreateChannelGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateChannelGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChannelGroupRequestT = Model::CreateChannelGroupRequest>
        Model::CreateChannelGroupOutcomeCallable CreateChannelGroupCallable(const CreateChannelGroupRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::CreateChannelGroup, request);
        }

        /**
         * An Async wrapper for CreateChannelGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChannelGroupRequestT = Model::CreateChannelGroupRequest>
        void CreateChannelGroupAsync(const CreateChannelGroupRequestT& request, const CreateChannelGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::CreateChannelGroup, request, handler, context);
        }

        /**
         * <p>The endpoint is attached to a channel, and represents the output of the live
         * content. You can associate multiple endpoints to a single channel. Each endpoint
         * gives players and downstream CDNs (such as Amazon CloudFront) access to the
         * content for playback. Content can't be served from a channel until it has an
         * endpoint. You can create only one endpoint with each request. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/CreateOriginEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOriginEndpointOutcome CreateOriginEndpoint(const Model::CreateOriginEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateOriginEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOriginEndpointRequestT = Model::CreateOriginEndpointRequest>
        Model::CreateOriginEndpointOutcomeCallable CreateOriginEndpointCallable(const CreateOriginEndpointRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::CreateOriginEndpoint, request);
        }

        /**
         * An Async wrapper for CreateOriginEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOriginEndpointRequestT = Model::CreateOriginEndpointRequest>
        void CreateOriginEndpointAsync(const CreateOriginEndpointRequestT& request, const CreateOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::CreateOriginEndpoint, request, handler, context);
        }

        /**
         * <p>Delete a channel to stop AWS Elemental MediaPackage from receiving further
         * content. You must delete the channel's origin endpoints before you can delete
         * the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelRequestT = Model::DeleteChannelRequest>
        Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const DeleteChannelRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::DeleteChannel, request);
        }

        /**
         * An Async wrapper for DeleteChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelRequestT = Model::DeleteChannelRequest>
        void DeleteChannelAsync(const DeleteChannelRequestT& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::DeleteChannel, request, handler, context);
        }

        /**
         * <p>Delete a channel group. You must delete the channel group's channels and
         * origin endpoints before you can delete the channel group. If you delete a
         * channel group, you'll lose access to the egress domain and will have to create a
         * new channel group to replace it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/DeleteChannelGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelGroupOutcome DeleteChannelGroup(const Model::DeleteChannelGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannelGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelGroupRequestT = Model::DeleteChannelGroupRequest>
        Model::DeleteChannelGroupOutcomeCallable DeleteChannelGroupCallable(const DeleteChannelGroupRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::DeleteChannelGroup, request);
        }

        /**
         * An Async wrapper for DeleteChannelGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelGroupRequestT = Model::DeleteChannelGroupRequest>
        void DeleteChannelGroupAsync(const DeleteChannelGroupRequestT& request, const DeleteChannelGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::DeleteChannelGroup, request, handler, context);
        }

        /**
         * <p>Delete a channel policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/DeleteChannelPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelPolicyOutcome DeleteChannelPolicy(const Model::DeleteChannelPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannelPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelPolicyRequestT = Model::DeleteChannelPolicyRequest>
        Model::DeleteChannelPolicyOutcomeCallable DeleteChannelPolicyCallable(const DeleteChannelPolicyRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::DeleteChannelPolicy, request);
        }

        /**
         * An Async wrapper for DeleteChannelPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelPolicyRequestT = Model::DeleteChannelPolicyRequest>
        void DeleteChannelPolicyAsync(const DeleteChannelPolicyRequestT& request, const DeleteChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::DeleteChannelPolicy, request, handler, context);
        }

        /**
         * <p>Origin endpoints can serve content until they're deleted. Delete the endpoint
         * if it should no longer respond to playback requests. You must delete all
         * endpoints from a channel before you can delete the channel.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/DeleteOriginEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOriginEndpointOutcome DeleteOriginEndpoint(const Model::DeleteOriginEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteOriginEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOriginEndpointRequestT = Model::DeleteOriginEndpointRequest>
        Model::DeleteOriginEndpointOutcomeCallable DeleteOriginEndpointCallable(const DeleteOriginEndpointRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::DeleteOriginEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteOriginEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOriginEndpointRequestT = Model::DeleteOriginEndpointRequest>
        void DeleteOriginEndpointAsync(const DeleteOriginEndpointRequestT& request, const DeleteOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::DeleteOriginEndpoint, request, handler, context);
        }

        /**
         * <p>Delete an origin endpoint policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/DeleteOriginEndpointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOriginEndpointPolicyOutcome DeleteOriginEndpointPolicy(const Model::DeleteOriginEndpointPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteOriginEndpointPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOriginEndpointPolicyRequestT = Model::DeleteOriginEndpointPolicyRequest>
        Model::DeleteOriginEndpointPolicyOutcomeCallable DeleteOriginEndpointPolicyCallable(const DeleteOriginEndpointPolicyRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::DeleteOriginEndpointPolicy, request);
        }

        /**
         * An Async wrapper for DeleteOriginEndpointPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOriginEndpointPolicyRequestT = Model::DeleteOriginEndpointPolicyRequest>
        void DeleteOriginEndpointPolicyAsync(const DeleteOriginEndpointPolicyRequestT& request, const DeleteOriginEndpointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::DeleteOriginEndpointPolicy, request, handler, context);
        }

        /**
         * <p>Retrieves the specified channel that's configured in AWS Elemental
         * MediaPackage, including the origin endpoints that are associated with
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/GetChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelOutcome GetChannel(const Model::GetChannelRequest& request) const;

        /**
         * A Callable wrapper for GetChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChannelRequestT = Model::GetChannelRequest>
        Model::GetChannelOutcomeCallable GetChannelCallable(const GetChannelRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::GetChannel, request);
        }

        /**
         * An Async wrapper for GetChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChannelRequestT = Model::GetChannelRequest>
        void GetChannelAsync(const GetChannelRequestT& request, const GetChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::GetChannel, request, handler, context);
        }

        /**
         * <p>Retrieves the specified channel group that's configured in AWS Elemental
         * MediaPackage, including the channels and origin endpoints that are associated
         * with it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/GetChannelGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelGroupOutcome GetChannelGroup(const Model::GetChannelGroupRequest& request) const;

        /**
         * A Callable wrapper for GetChannelGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChannelGroupRequestT = Model::GetChannelGroupRequest>
        Model::GetChannelGroupOutcomeCallable GetChannelGroupCallable(const GetChannelGroupRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::GetChannelGroup, request);
        }

        /**
         * An Async wrapper for GetChannelGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChannelGroupRequestT = Model::GetChannelGroupRequest>
        void GetChannelGroupAsync(const GetChannelGroupRequestT& request, const GetChannelGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::GetChannelGroup, request, handler, context);
        }

        /**
         * <p>Retrieves the specified channel policy that's configured in AWS Elemental
         * MediaPackage. With policies, you can specify who has access to AWS resources and
         * what actions they can perform on those resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/GetChannelPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelPolicyOutcome GetChannelPolicy(const Model::GetChannelPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetChannelPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChannelPolicyRequestT = Model::GetChannelPolicyRequest>
        Model::GetChannelPolicyOutcomeCallable GetChannelPolicyCallable(const GetChannelPolicyRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::GetChannelPolicy, request);
        }

        /**
         * An Async wrapper for GetChannelPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChannelPolicyRequestT = Model::GetChannelPolicyRequest>
        void GetChannelPolicyAsync(const GetChannelPolicyRequestT& request, const GetChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::GetChannelPolicy, request, handler, context);
        }

        /**
         * <p>Retrieves the specified origin endpoint that's configured in AWS Elemental
         * MediaPackage to obtain its playback URL and to view the packaging settings that
         * it's currently using.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/GetOriginEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOriginEndpointOutcome GetOriginEndpoint(const Model::GetOriginEndpointRequest& request) const;

        /**
         * A Callable wrapper for GetOriginEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOriginEndpointRequestT = Model::GetOriginEndpointRequest>
        Model::GetOriginEndpointOutcomeCallable GetOriginEndpointCallable(const GetOriginEndpointRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::GetOriginEndpoint, request);
        }

        /**
         * An Async wrapper for GetOriginEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOriginEndpointRequestT = Model::GetOriginEndpointRequest>
        void GetOriginEndpointAsync(const GetOriginEndpointRequestT& request, const GetOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::GetOriginEndpoint, request, handler, context);
        }

        /**
         * <p>Retrieves the specified origin endpoint policy that's configured in AWS
         * Elemental MediaPackage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/GetOriginEndpointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOriginEndpointPolicyOutcome GetOriginEndpointPolicy(const Model::GetOriginEndpointPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetOriginEndpointPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOriginEndpointPolicyRequestT = Model::GetOriginEndpointPolicyRequest>
        Model::GetOriginEndpointPolicyOutcomeCallable GetOriginEndpointPolicyCallable(const GetOriginEndpointPolicyRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::GetOriginEndpointPolicy, request);
        }

        /**
         * An Async wrapper for GetOriginEndpointPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOriginEndpointPolicyRequestT = Model::GetOriginEndpointPolicyRequest>
        void GetOriginEndpointPolicyAsync(const GetOriginEndpointPolicyRequestT& request, const GetOriginEndpointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::GetOriginEndpointPolicy, request, handler, context);
        }

        /**
         * <p>Retrieves all channel groups that are configured in AWS Elemental
         * MediaPackage, including the channels and origin endpoints that are associated
         * with it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/ListChannelGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelGroupsOutcome ListChannelGroups(const Model::ListChannelGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListChannelGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelGroupsRequestT = Model::ListChannelGroupsRequest>
        Model::ListChannelGroupsOutcomeCallable ListChannelGroupsCallable(const ListChannelGroupsRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::ListChannelGroups, request);
        }

        /**
         * An Async wrapper for ListChannelGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelGroupsRequestT = Model::ListChannelGroupsRequest>
        void ListChannelGroupsAsync(const ListChannelGroupsRequestT& request, const ListChannelGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::ListChannelGroups, request, handler, context);
        }

        /**
         * <p>Retrieves all channels in a specific channel group that are configured in AWS
         * Elemental MediaPackage, including the origin endpoints that are associated with
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        Model::ListChannelsOutcomeCallable ListChannelsCallable(const ListChannelsRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::ListChannels, request);
        }

        /**
         * An Async wrapper for ListChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        void ListChannelsAsync(const ListChannelsRequestT& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::ListChannels, request, handler, context);
        }

        /**
         * <p>Retrieves all origin endpoints in a specific channel that are configured in
         * AWS Elemental MediaPackage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/ListOriginEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOriginEndpointsOutcome ListOriginEndpoints(const Model::ListOriginEndpointsRequest& request) const;

        /**
         * A Callable wrapper for ListOriginEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOriginEndpointsRequestT = Model::ListOriginEndpointsRequest>
        Model::ListOriginEndpointsOutcomeCallable ListOriginEndpointsCallable(const ListOriginEndpointsRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::ListOriginEndpoints, request);
        }

        /**
         * An Async wrapper for ListOriginEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOriginEndpointsRequestT = Model::ListOriginEndpointsRequest>
        void ListOriginEndpointsAsync(const ListOriginEndpointsRequestT& request, const ListOriginEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::ListOriginEndpoints, request, handler, context);
        }

        /**
         * <p>Lists the tags assigned to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Attaches an IAM policy to the specified channel. With policies, you can
         * specify who has access to AWS resources and what actions they can perform on
         * those resources. You can attach only one policy with each request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/PutChannelPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutChannelPolicyOutcome PutChannelPolicy(const Model::PutChannelPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutChannelPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutChannelPolicyRequestT = Model::PutChannelPolicyRequest>
        Model::PutChannelPolicyOutcomeCallable PutChannelPolicyCallable(const PutChannelPolicyRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::PutChannelPolicy, request);
        }

        /**
         * An Async wrapper for PutChannelPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutChannelPolicyRequestT = Model::PutChannelPolicyRequest>
        void PutChannelPolicyAsync(const PutChannelPolicyRequestT& request, const PutChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::PutChannelPolicy, request, handler, context);
        }

        /**
         * <p>Attaches an IAM policy to the specified origin endpoint. You can attach only
         * one policy with each request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/PutOriginEndpointPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutOriginEndpointPolicyOutcome PutOriginEndpointPolicy(const Model::PutOriginEndpointPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutOriginEndpointPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutOriginEndpointPolicyRequestT = Model::PutOriginEndpointPolicyRequest>
        Model::PutOriginEndpointPolicyOutcomeCallable PutOriginEndpointPolicyCallable(const PutOriginEndpointPolicyRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::PutOriginEndpointPolicy, request);
        }

        /**
         * An Async wrapper for PutOriginEndpointPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutOriginEndpointPolicyRequestT = Model::PutOriginEndpointPolicyRequest>
        void PutOriginEndpointPolicyAsync(const PutOriginEndpointPolicyRequestT& request, const PutOriginEndpointPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::PutOriginEndpointPolicy, request, handler, context);
        }

        /**
         * <p>Assigns one of more tags (key-value pairs) to the specified MediaPackage
         * resource.</p> <p>Tags can help you organize and categorize your resources. You
         * can also use them to scope user permissions, by granting a user permission to
         * access or change only resources with certain tag values. You can use the
         * TagResource operation with a resource that already has tags. If you specify a
         * new tag key for the resource, this tag is appended to the list of tags
         * associated with the resource. If you specify a tag key that is already
         * associated with the resource, the new tag value that you specify replaces the
         * previous value for that tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::TagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::UntagResource, request, handler, context);
        }

        /**
         * <p>Update the specified channel. You can edit if MediaPackage sends ingest or
         * egress access logs to the CloudWatch log group, if content will be encrypted,
         * the description on a channel, and your channel's policy settings. You can't edit
         * the name of the channel or CloudFront distribution details.</p> <p>Any edits you
         * make that impact the video output may not be reflected for a few
         * minutes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChannelRequestT = Model::UpdateChannelRequest>
        Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const UpdateChannelRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::UpdateChannel, request);
        }

        /**
         * An Async wrapper for UpdateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChannelRequestT = Model::UpdateChannelRequest>
        void UpdateChannelAsync(const UpdateChannelRequestT& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::UpdateChannel, request, handler, context);
        }

        /**
         * <p>Update the specified channel group. You can edit the description on a channel
         * group for easier identification later from the AWS Elemental MediaPackage
         * console. You can't edit the name of the channel group.</p> <p>Any edits you make
         * that impact the video output may not be reflected for a few
         * minutes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/UpdateChannelGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelGroupOutcome UpdateChannelGroup(const Model::UpdateChannelGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannelGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChannelGroupRequestT = Model::UpdateChannelGroupRequest>
        Model::UpdateChannelGroupOutcomeCallable UpdateChannelGroupCallable(const UpdateChannelGroupRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::UpdateChannelGroup, request);
        }

        /**
         * An Async wrapper for UpdateChannelGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChannelGroupRequestT = Model::UpdateChannelGroupRequest>
        void UpdateChannelGroupAsync(const UpdateChannelGroupRequestT& request, const UpdateChannelGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::UpdateChannelGroup, request, handler, context);
        }

        /**
         * <p>Update the specified origin endpoint. Edit the packaging preferences on an
         * endpoint to optimize the viewing experience. You can't edit the name of the
         * endpoint.</p> <p>Any edits you make that impact the video output may not be
         * reflected for a few minutes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/UpdateOriginEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOriginEndpointOutcome UpdateOriginEndpoint(const Model::UpdateOriginEndpointRequest& request) const;

        /**
         * A Callable wrapper for UpdateOriginEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateOriginEndpointRequestT = Model::UpdateOriginEndpointRequest>
        Model::UpdateOriginEndpointOutcomeCallable UpdateOriginEndpointCallable(const UpdateOriginEndpointRequestT& request) const
        {
            return SubmitCallable(&Mediapackagev2Client::UpdateOriginEndpoint, request);
        }

        /**
         * An Async wrapper for UpdateOriginEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateOriginEndpointRequestT = Model::UpdateOriginEndpointRequest>
        void UpdateOriginEndpointAsync(const UpdateOriginEndpointRequestT& request, const UpdateOriginEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Mediapackagev2Client::UpdateOriginEndpoint, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<Mediapackagev2EndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<Mediapackagev2Client>;
      void init(const Mediapackagev2ClientConfiguration& clientConfiguration);

      Mediapackagev2ClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<Mediapackagev2EndpointProviderBase> m_endpointProvider;
  };

} // namespace mediapackagev2
} // namespace Aws
