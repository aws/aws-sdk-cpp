/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/MediaLiveServiceClientModel.h>

namespace Aws
{
namespace MediaLive
{
  /**
   * API for AWS Elemental MediaLive
   */
  class AWS_MEDIALIVE_API MediaLiveClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MediaLiveClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MediaLiveClientConfiguration ClientConfigurationType;
      typedef MediaLiveEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaLiveClient(const Aws::MediaLive::MediaLiveClientConfiguration& clientConfiguration = Aws::MediaLive::MediaLiveClientConfiguration(),
                        std::shared_ptr<MediaLiveEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaLiveClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<MediaLiveEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::MediaLive::MediaLiveClientConfiguration& clientConfiguration = Aws::MediaLive::MediaLiveClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaLiveClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<MediaLiveEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::MediaLive::MediaLiveClientConfiguration& clientConfiguration = Aws::MediaLive::MediaLiveClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaLiveClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaLiveClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaLiveClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MediaLiveClient();

        /**
         * Accept an incoming input device transfer. The ownership of the device will
         * transfer to your AWS account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AcceptInputDeviceTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptInputDeviceTransferOutcome AcceptInputDeviceTransfer(const Model::AcceptInputDeviceTransferRequest& request) const;

        /**
         * A Callable wrapper for AcceptInputDeviceTransfer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcceptInputDeviceTransferRequestT = Model::AcceptInputDeviceTransferRequest>
        Model::AcceptInputDeviceTransferOutcomeCallable AcceptInputDeviceTransferCallable(const AcceptInputDeviceTransferRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::AcceptInputDeviceTransfer, request);
        }

        /**
         * An Async wrapper for AcceptInputDeviceTransfer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptInputDeviceTransferRequestT = Model::AcceptInputDeviceTransferRequest>
        void AcceptInputDeviceTransferAsync(const AcceptInputDeviceTransferRequestT& request, const AcceptInputDeviceTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::AcceptInputDeviceTransfer, request, handler, context);
        }

        /**
         * Starts delete of resources.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchDelete">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteOutcome BatchDelete(const Model::BatchDeleteRequest& request = {}) const;

        /**
         * A Callable wrapper for BatchDelete that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteRequestT = Model::BatchDeleteRequest>
        Model::BatchDeleteOutcomeCallable BatchDeleteCallable(const BatchDeleteRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::BatchDelete, request);
        }

        /**
         * An Async wrapper for BatchDelete that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteRequestT = Model::BatchDeleteRequest>
        void BatchDeleteAsync(const BatchDeleteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const BatchDeleteRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::BatchDelete, request, handler, context);
        }

        /**
         * Starts existing resources<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchStart">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchStartOutcome BatchStart(const Model::BatchStartRequest& request = {}) const;

        /**
         * A Callable wrapper for BatchStart that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchStartRequestT = Model::BatchStartRequest>
        Model::BatchStartOutcomeCallable BatchStartCallable(const BatchStartRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::BatchStart, request);
        }

        /**
         * An Async wrapper for BatchStart that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchStartRequestT = Model::BatchStartRequest>
        void BatchStartAsync(const BatchStartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const BatchStartRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::BatchStart, request, handler, context);
        }

        /**
         * Stops running resources<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchStop">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchStopOutcome BatchStop(const Model::BatchStopRequest& request = {}) const;

        /**
         * A Callable wrapper for BatchStop that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchStopRequestT = Model::BatchStopRequest>
        Model::BatchStopOutcomeCallable BatchStopCallable(const BatchStopRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::BatchStop, request);
        }

        /**
         * An Async wrapper for BatchStop that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchStopRequestT = Model::BatchStopRequest>
        void BatchStopAsync(const BatchStopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const BatchStopRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::BatchStop, request, handler, context);
        }

        /**
         * Update a channel schedule<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchUpdateSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateScheduleOutcome BatchUpdateSchedule(const Model::BatchUpdateScheduleRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpdateScheduleRequestT = Model::BatchUpdateScheduleRequest>
        Model::BatchUpdateScheduleOutcomeCallable BatchUpdateScheduleCallable(const BatchUpdateScheduleRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::BatchUpdateSchedule, request);
        }

        /**
         * An Async wrapper for BatchUpdateSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpdateScheduleRequestT = Model::BatchUpdateScheduleRequest>
        void BatchUpdateScheduleAsync(const BatchUpdateScheduleRequestT& request, const BatchUpdateScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::BatchUpdateSchedule, request, handler, context);
        }

        /**
         * Cancel an input device transfer that you have requested.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CancelInputDeviceTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelInputDeviceTransferOutcome CancelInputDeviceTransfer(const Model::CancelInputDeviceTransferRequest& request) const;

        /**
         * A Callable wrapper for CancelInputDeviceTransfer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelInputDeviceTransferRequestT = Model::CancelInputDeviceTransferRequest>
        Model::CancelInputDeviceTransferOutcomeCallable CancelInputDeviceTransferCallable(const CancelInputDeviceTransferRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::CancelInputDeviceTransfer, request);
        }

        /**
         * An Async wrapper for CancelInputDeviceTransfer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelInputDeviceTransferRequestT = Model::CancelInputDeviceTransferRequest>
        void CancelInputDeviceTransferAsync(const CancelInputDeviceTransferRequestT& request, const CancelInputDeviceTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::CancelInputDeviceTransfer, request, handler, context);
        }

        /**
         * Send a request to claim an AWS Elemental device that you have purchased from a
         * third-party vendor. After the request succeeds, you will own the
         * device.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ClaimDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::ClaimDeviceOutcome ClaimDevice(const Model::ClaimDeviceRequest& request = {}) const;

        /**
         * A Callable wrapper for ClaimDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ClaimDeviceRequestT = Model::ClaimDeviceRequest>
        Model::ClaimDeviceOutcomeCallable ClaimDeviceCallable(const ClaimDeviceRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::ClaimDevice, request);
        }

        /**
         * An Async wrapper for ClaimDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ClaimDeviceRequestT = Model::ClaimDeviceRequest>
        void ClaimDeviceAsync(const ClaimDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ClaimDeviceRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::ClaimDevice, request, handler, context);
        }

        /**
         * Creates a new channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request = {}) const;

        /**
         * A Callable wrapper for CreateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChannelRequestT = Model::CreateChannelRequest>
        Model::CreateChannelOutcomeCallable CreateChannelCallable(const CreateChannelRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::CreateChannel, request);
        }

        /**
         * An Async wrapper for CreateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChannelRequestT = Model::CreateChannelRequest>
        void CreateChannelAsync(const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const CreateChannelRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::CreateChannel, request, handler, context);
        }

        /**
         * Create a ChannelPlacementGroup in the specified Cluster. As part of the create
         * operation, you specify the Nodes to attach the group to.After you create a
         * ChannelPlacementGroup, you add Channels to the group (you do this by modifying
         * the Channels to add them to a specific group). You now have an association of
         * Channels to ChannelPlacementGroup, and ChannelPlacementGroup to Nodes. This
         * association means that all the Channels in the group are able to run on any of
         * the Nodes associated with the group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateChannelPlacementGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelPlacementGroupOutcome CreateChannelPlacementGroup(const Model::CreateChannelPlacementGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateChannelPlacementGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChannelPlacementGroupRequestT = Model::CreateChannelPlacementGroupRequest>
        Model::CreateChannelPlacementGroupOutcomeCallable CreateChannelPlacementGroupCallable(const CreateChannelPlacementGroupRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::CreateChannelPlacementGroup, request);
        }

        /**
         * An Async wrapper for CreateChannelPlacementGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChannelPlacementGroupRequestT = Model::CreateChannelPlacementGroupRequest>
        void CreateChannelPlacementGroupAsync(const CreateChannelPlacementGroupRequestT& request, const CreateChannelPlacementGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::CreateChannelPlacementGroup, request, handler, context);
        }

        /**
         * Creates a cloudwatch alarm template to dynamically generate cloudwatch metric
         * alarms on targeted resource types.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateCloudWatchAlarmTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudWatchAlarmTemplateOutcome CreateCloudWatchAlarmTemplate(const Model::CreateCloudWatchAlarmTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateCloudWatchAlarmTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCloudWatchAlarmTemplateRequestT = Model::CreateCloudWatchAlarmTemplateRequest>
        Model::CreateCloudWatchAlarmTemplateOutcomeCallable CreateCloudWatchAlarmTemplateCallable(const CreateCloudWatchAlarmTemplateRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::CreateCloudWatchAlarmTemplate, request);
        }

        /**
         * An Async wrapper for CreateCloudWatchAlarmTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCloudWatchAlarmTemplateRequestT = Model::CreateCloudWatchAlarmTemplateRequest>
        void CreateCloudWatchAlarmTemplateAsync(const CreateCloudWatchAlarmTemplateRequestT& request, const CreateCloudWatchAlarmTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::CreateCloudWatchAlarmTemplate, request, handler, context);
        }

        /**
         * Creates a cloudwatch alarm template group to group your cloudwatch alarm
         * templates and to attach to signal maps for dynamically creating
         * alarms.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateCloudWatchAlarmTemplateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudWatchAlarmTemplateGroupOutcome CreateCloudWatchAlarmTemplateGroup(const Model::CreateCloudWatchAlarmTemplateGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateCloudWatchAlarmTemplateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCloudWatchAlarmTemplateGroupRequestT = Model::CreateCloudWatchAlarmTemplateGroupRequest>
        Model::CreateCloudWatchAlarmTemplateGroupOutcomeCallable CreateCloudWatchAlarmTemplateGroupCallable(const CreateCloudWatchAlarmTemplateGroupRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::CreateCloudWatchAlarmTemplateGroup, request);
        }

        /**
         * An Async wrapper for CreateCloudWatchAlarmTemplateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCloudWatchAlarmTemplateGroupRequestT = Model::CreateCloudWatchAlarmTemplateGroupRequest>
        void CreateCloudWatchAlarmTemplateGroupAsync(const CreateCloudWatchAlarmTemplateGroupRequestT& request, const CreateCloudWatchAlarmTemplateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::CreateCloudWatchAlarmTemplateGroup, request, handler, context);
        }

        /**
         * Create a new Cluster.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request = {}) const;

        /**
         * A Callable wrapper for CreateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateClusterRequestT = Model::CreateClusterRequest>
        Model::CreateClusterOutcomeCallable CreateClusterCallable(const CreateClusterRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::CreateCluster, request);
        }

        /**
         * An Async wrapper for CreateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateClusterRequestT = Model::CreateClusterRequest>
        void CreateClusterAsync(const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const CreateClusterRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::CreateCluster, request, handler, context);
        }

        /**
         * Creates an eventbridge rule template to monitor events and send notifications to
         * your targeted resources.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateEventBridgeRuleTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventBridgeRuleTemplateOutcome CreateEventBridgeRuleTemplate(const Model::CreateEventBridgeRuleTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateEventBridgeRuleTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEventBridgeRuleTemplateRequestT = Model::CreateEventBridgeRuleTemplateRequest>
        Model::CreateEventBridgeRuleTemplateOutcomeCallable CreateEventBridgeRuleTemplateCallable(const CreateEventBridgeRuleTemplateRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::CreateEventBridgeRuleTemplate, request);
        }

        /**
         * An Async wrapper for CreateEventBridgeRuleTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEventBridgeRuleTemplateRequestT = Model::CreateEventBridgeRuleTemplateRequest>
        void CreateEventBridgeRuleTemplateAsync(const CreateEventBridgeRuleTemplateRequestT& request, const CreateEventBridgeRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::CreateEventBridgeRuleTemplate, request, handler, context);
        }

        /**
         * Creates an eventbridge rule template group to group your eventbridge rule
         * templates and to attach to signal maps for dynamically creating notification
         * rules.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateEventBridgeRuleTemplateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventBridgeRuleTemplateGroupOutcome CreateEventBridgeRuleTemplateGroup(const Model::CreateEventBridgeRuleTemplateGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateEventBridgeRuleTemplateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEventBridgeRuleTemplateGroupRequestT = Model::CreateEventBridgeRuleTemplateGroupRequest>
        Model::CreateEventBridgeRuleTemplateGroupOutcomeCallable CreateEventBridgeRuleTemplateGroupCallable(const CreateEventBridgeRuleTemplateGroupRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::CreateEventBridgeRuleTemplateGroup, request);
        }

        /**
         * An Async wrapper for CreateEventBridgeRuleTemplateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEventBridgeRuleTemplateGroupRequestT = Model::CreateEventBridgeRuleTemplateGroupRequest>
        void CreateEventBridgeRuleTemplateGroupAsync(const CreateEventBridgeRuleTemplateGroupRequestT& request, const CreateEventBridgeRuleTemplateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::CreateEventBridgeRuleTemplateGroup, request, handler, context);
        }

        /**
         * Create an input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInput">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInputOutcome CreateInput(const Model::CreateInputRequest& request = {}) const;

        /**
         * A Callable wrapper for CreateInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInputRequestT = Model::CreateInputRequest>
        Model::CreateInputOutcomeCallable CreateInputCallable(const CreateInputRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::CreateInput, request);
        }

        /**
         * An Async wrapper for CreateInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInputRequestT = Model::CreateInputRequest>
        void CreateInputAsync(const CreateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const CreateInputRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::CreateInput, request, handler, context);
        }

        /**
         * Creates a Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInputSecurityGroupOutcome CreateInputSecurityGroup(const Model::CreateInputSecurityGroupRequest& request = {}) const;

        /**
         * A Callable wrapper for CreateInputSecurityGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInputSecurityGroupRequestT = Model::CreateInputSecurityGroupRequest>
        Model::CreateInputSecurityGroupOutcomeCallable CreateInputSecurityGroupCallable(const CreateInputSecurityGroupRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::CreateInputSecurityGroup, request);
        }

        /**
         * An Async wrapper for CreateInputSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInputSecurityGroupRequestT = Model::CreateInputSecurityGroupRequest>
        void CreateInputSecurityGroupAsync(const CreateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const CreateInputSecurityGroupRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::CreateInputSecurityGroup, request, handler, context);
        }

        /**
         * Create a new multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMultiplexOutcome CreateMultiplex(const Model::CreateMultiplexRequest& request) const;

        /**
         * A Callable wrapper for CreateMultiplex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMultiplexRequestT = Model::CreateMultiplexRequest>
        Model::CreateMultiplexOutcomeCallable CreateMultiplexCallable(const CreateMultiplexRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::CreateMultiplex, request);
        }

        /**
         * An Async wrapper for CreateMultiplex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMultiplexRequestT = Model::CreateMultiplexRequest>
        void CreateMultiplexAsync(const CreateMultiplexRequestT& request, const CreateMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::CreateMultiplex, request, handler, context);
        }

        /**
         * Create a new program in the multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateMultiplexProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMultiplexProgramOutcome CreateMultiplexProgram(const Model::CreateMultiplexProgramRequest& request) const;

        /**
         * A Callable wrapper for CreateMultiplexProgram that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMultiplexProgramRequestT = Model::CreateMultiplexProgramRequest>
        Model::CreateMultiplexProgramOutcomeCallable CreateMultiplexProgramCallable(const CreateMultiplexProgramRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::CreateMultiplexProgram, request);
        }

        /**
         * An Async wrapper for CreateMultiplexProgram that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMultiplexProgramRequestT = Model::CreateMultiplexProgramRequest>
        void CreateMultiplexProgramAsync(const CreateMultiplexProgramRequestT& request, const CreateMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::CreateMultiplexProgram, request, handler, context);
        }

        /**
         * Create as many Networks as you need. You will associate one or more Clusters
         * with each Network.Each Network provides MediaLive Anywhere with required
         * information about the network in your organization that you are using for video
         * encoding using MediaLive.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkOutcome CreateNetwork(const Model::CreateNetworkRequest& request = {}) const;

        /**
         * A Callable wrapper for CreateNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateNetworkRequestT = Model::CreateNetworkRequest>
        Model::CreateNetworkOutcomeCallable CreateNetworkCallable(const CreateNetworkRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::CreateNetwork, request);
        }

        /**
         * An Async wrapper for CreateNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNetworkRequestT = Model::CreateNetworkRequest>
        void CreateNetworkAsync(const CreateNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const CreateNetworkRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::CreateNetwork, request, handler, context);
        }

        /**
         * Create a Node in the specified Cluster. You can also create Nodes using the
         * CreateNodeRegistrationScript. Note that you can't move a Node to another
         * Cluster.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateNode">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNodeOutcome CreateNode(const Model::CreateNodeRequest& request) const;

        /**
         * A Callable wrapper for CreateNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateNodeRequestT = Model::CreateNodeRequest>
        Model::CreateNodeOutcomeCallable CreateNodeCallable(const CreateNodeRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::CreateNode, request);
        }

        /**
         * An Async wrapper for CreateNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNodeRequestT = Model::CreateNodeRequest>
        void CreateNodeAsync(const CreateNodeRequestT& request, const CreateNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::CreateNode, request, handler, context);
        }

        /**
         * Create the Register Node script for all the nodes intended for a specific
         * Cluster. You will then run the script on each hardware unit that is intended for
         * that Cluster. The script creates a Node in the specified Cluster. It then binds
         * the Node to this hardware unit, and activates the node hardware for use with
         * MediaLive Anywhere.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateNodeRegistrationScript">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNodeRegistrationScriptOutcome CreateNodeRegistrationScript(const Model::CreateNodeRegistrationScriptRequest& request) const;

        /**
         * A Callable wrapper for CreateNodeRegistrationScript that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateNodeRegistrationScriptRequestT = Model::CreateNodeRegistrationScriptRequest>
        Model::CreateNodeRegistrationScriptOutcomeCallable CreateNodeRegistrationScriptCallable(const CreateNodeRegistrationScriptRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::CreateNodeRegistrationScript, request);
        }

        /**
         * An Async wrapper for CreateNodeRegistrationScript that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNodeRegistrationScriptRequestT = Model::CreateNodeRegistrationScriptRequest>
        void CreateNodeRegistrationScriptAsync(const CreateNodeRegistrationScriptRequestT& request, const CreateNodeRegistrationScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::CreateNodeRegistrationScript, request, handler, context);
        }

        /**
         * Create a partner input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreatePartnerInput">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePartnerInputOutcome CreatePartnerInput(const Model::CreatePartnerInputRequest& request) const;

        /**
         * A Callable wrapper for CreatePartnerInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePartnerInputRequestT = Model::CreatePartnerInputRequest>
        Model::CreatePartnerInputOutcomeCallable CreatePartnerInputCallable(const CreatePartnerInputRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::CreatePartnerInput, request);
        }

        /**
         * An Async wrapper for CreatePartnerInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePartnerInputRequestT = Model::CreatePartnerInputRequest>
        void CreatePartnerInputAsync(const CreatePartnerInputRequestT& request, const CreatePartnerInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::CreatePartnerInput, request, handler, context);
        }

        /**
         * Create an SdiSource for each video source that uses the SDI protocol. You will
         * reference the SdiSource when you create an SDI input in MediaLive. You will also
         * reference it in an SdiSourceMapping, in order to create a connection between the
         * logical SdiSource and the physical SDI card and port that the physical SDI
         * source uses.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateSdiSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSdiSourceOutcome CreateSdiSource(const Model::CreateSdiSourceRequest& request = {}) const;

        /**
         * A Callable wrapper for CreateSdiSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSdiSourceRequestT = Model::CreateSdiSourceRequest>
        Model::CreateSdiSourceOutcomeCallable CreateSdiSourceCallable(const CreateSdiSourceRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::CreateSdiSource, request);
        }

        /**
         * An Async wrapper for CreateSdiSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSdiSourceRequestT = Model::CreateSdiSourceRequest>
        void CreateSdiSourceAsync(const CreateSdiSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const CreateSdiSourceRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::CreateSdiSource, request, handler, context);
        }

        /**
         * Initiates the creation of a new signal map. Will discover a new mediaResourceMap
         * based on the provided discoveryEntryPointArn.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateSignalMap">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSignalMapOutcome CreateSignalMap(const Model::CreateSignalMapRequest& request) const;

        /**
         * A Callable wrapper for CreateSignalMap that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSignalMapRequestT = Model::CreateSignalMapRequest>
        Model::CreateSignalMapOutcomeCallable CreateSignalMapCallable(const CreateSignalMapRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::CreateSignalMap, request);
        }

        /**
         * An Async wrapper for CreateSignalMap that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSignalMapRequestT = Model::CreateSignalMapRequest>
        void CreateSignalMapAsync(const CreateSignalMapRequestT& request, const CreateSignalMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::CreateSignalMap, request, handler, context);
        }

        /**
         * Create tags for a resource<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateTags">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTagsOutcome CreateTags(const Model::CreateTagsRequest& request) const;

        /**
         * A Callable wrapper for CreateTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTagsRequestT = Model::CreateTagsRequest>
        Model::CreateTagsOutcomeCallable CreateTagsCallable(const CreateTagsRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::CreateTags, request);
        }

        /**
         * An Async wrapper for CreateTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTagsRequestT = Model::CreateTagsRequest>
        void CreateTagsAsync(const CreateTagsRequestT& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::CreateTags, request, handler, context);
        }

        /**
         * Starts deletion of channel. The associated outputs are also deleted.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelRequestT = Model::DeleteChannelRequest>
        Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const DeleteChannelRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DeleteChannel, request);
        }

        /**
         * An Async wrapper for DeleteChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelRequestT = Model::DeleteChannelRequest>
        void DeleteChannelAsync(const DeleteChannelRequestT& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DeleteChannel, request, handler, context);
        }

        /**
         * Delete the specified ChannelPlacementGroup that exists in the specified
         * Cluster.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteChannelPlacementGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelPlacementGroupOutcome DeleteChannelPlacementGroup(const Model::DeleteChannelPlacementGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannelPlacementGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelPlacementGroupRequestT = Model::DeleteChannelPlacementGroupRequest>
        Model::DeleteChannelPlacementGroupOutcomeCallable DeleteChannelPlacementGroupCallable(const DeleteChannelPlacementGroupRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DeleteChannelPlacementGroup, request);
        }

        /**
         * An Async wrapper for DeleteChannelPlacementGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelPlacementGroupRequestT = Model::DeleteChannelPlacementGroupRequest>
        void DeleteChannelPlacementGroupAsync(const DeleteChannelPlacementGroupRequestT& request, const DeleteChannelPlacementGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DeleteChannelPlacementGroup, request, handler, context);
        }

        /**
         * Deletes a cloudwatch alarm template.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteCloudWatchAlarmTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCloudWatchAlarmTemplateOutcome DeleteCloudWatchAlarmTemplate(const Model::DeleteCloudWatchAlarmTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteCloudWatchAlarmTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCloudWatchAlarmTemplateRequestT = Model::DeleteCloudWatchAlarmTemplateRequest>
        Model::DeleteCloudWatchAlarmTemplateOutcomeCallable DeleteCloudWatchAlarmTemplateCallable(const DeleteCloudWatchAlarmTemplateRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DeleteCloudWatchAlarmTemplate, request);
        }

        /**
         * An Async wrapper for DeleteCloudWatchAlarmTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCloudWatchAlarmTemplateRequestT = Model::DeleteCloudWatchAlarmTemplateRequest>
        void DeleteCloudWatchAlarmTemplateAsync(const DeleteCloudWatchAlarmTemplateRequestT& request, const DeleteCloudWatchAlarmTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DeleteCloudWatchAlarmTemplate, request, handler, context);
        }

        /**
         * Deletes a cloudwatch alarm template group. You must detach this group from all
         * signal maps and ensure its existing templates are moved to another group or
         * deleted.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteCloudWatchAlarmTemplateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCloudWatchAlarmTemplateGroupOutcome DeleteCloudWatchAlarmTemplateGroup(const Model::DeleteCloudWatchAlarmTemplateGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteCloudWatchAlarmTemplateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCloudWatchAlarmTemplateGroupRequestT = Model::DeleteCloudWatchAlarmTemplateGroupRequest>
        Model::DeleteCloudWatchAlarmTemplateGroupOutcomeCallable DeleteCloudWatchAlarmTemplateGroupCallable(const DeleteCloudWatchAlarmTemplateGroupRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DeleteCloudWatchAlarmTemplateGroup, request);
        }

        /**
         * An Async wrapper for DeleteCloudWatchAlarmTemplateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCloudWatchAlarmTemplateGroupRequestT = Model::DeleteCloudWatchAlarmTemplateGroupRequest>
        void DeleteCloudWatchAlarmTemplateGroupAsync(const DeleteCloudWatchAlarmTemplateGroupRequestT& request, const DeleteCloudWatchAlarmTemplateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DeleteCloudWatchAlarmTemplateGroup, request, handler, context);
        }

        /**
         * Delete a Cluster. The Cluster must be idle.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteClusterRequestT = Model::DeleteClusterRequest>
        Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const DeleteClusterRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DeleteCluster, request);
        }

        /**
         * An Async wrapper for DeleteCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteClusterRequestT = Model::DeleteClusterRequest>
        void DeleteClusterAsync(const DeleteClusterRequestT& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DeleteCluster, request, handler, context);
        }

        /**
         * Deletes an eventbridge rule template.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteEventBridgeRuleTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventBridgeRuleTemplateOutcome DeleteEventBridgeRuleTemplate(const Model::DeleteEventBridgeRuleTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventBridgeRuleTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEventBridgeRuleTemplateRequestT = Model::DeleteEventBridgeRuleTemplateRequest>
        Model::DeleteEventBridgeRuleTemplateOutcomeCallable DeleteEventBridgeRuleTemplateCallable(const DeleteEventBridgeRuleTemplateRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DeleteEventBridgeRuleTemplate, request);
        }

        /**
         * An Async wrapper for DeleteEventBridgeRuleTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEventBridgeRuleTemplateRequestT = Model::DeleteEventBridgeRuleTemplateRequest>
        void DeleteEventBridgeRuleTemplateAsync(const DeleteEventBridgeRuleTemplateRequestT& request, const DeleteEventBridgeRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DeleteEventBridgeRuleTemplate, request, handler, context);
        }

        /**
         * Deletes an eventbridge rule template group. You must detach this group from all
         * signal maps and ensure its existing templates are moved to another group or
         * deleted.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteEventBridgeRuleTemplateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventBridgeRuleTemplateGroupOutcome DeleteEventBridgeRuleTemplateGroup(const Model::DeleteEventBridgeRuleTemplateGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventBridgeRuleTemplateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEventBridgeRuleTemplateGroupRequestT = Model::DeleteEventBridgeRuleTemplateGroupRequest>
        Model::DeleteEventBridgeRuleTemplateGroupOutcomeCallable DeleteEventBridgeRuleTemplateGroupCallable(const DeleteEventBridgeRuleTemplateGroupRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DeleteEventBridgeRuleTemplateGroup, request);
        }

        /**
         * An Async wrapper for DeleteEventBridgeRuleTemplateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEventBridgeRuleTemplateGroupRequestT = Model::DeleteEventBridgeRuleTemplateGroupRequest>
        void DeleteEventBridgeRuleTemplateGroupAsync(const DeleteEventBridgeRuleTemplateGroupRequestT& request, const DeleteEventBridgeRuleTemplateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DeleteEventBridgeRuleTemplateGroup, request, handler, context);
        }

        /**
         * Deletes the input end point<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInput">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInputOutcome DeleteInput(const Model::DeleteInputRequest& request) const;

        /**
         * A Callable wrapper for DeleteInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInputRequestT = Model::DeleteInputRequest>
        Model::DeleteInputOutcomeCallable DeleteInputCallable(const DeleteInputRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DeleteInput, request);
        }

        /**
         * An Async wrapper for DeleteInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInputRequestT = Model::DeleteInputRequest>
        void DeleteInputAsync(const DeleteInputRequestT& request, const DeleteInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DeleteInput, request, handler, context);
        }

        /**
         * Deletes an Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInputSecurityGroupOutcome DeleteInputSecurityGroup(const Model::DeleteInputSecurityGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteInputSecurityGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInputSecurityGroupRequestT = Model::DeleteInputSecurityGroupRequest>
        Model::DeleteInputSecurityGroupOutcomeCallable DeleteInputSecurityGroupCallable(const DeleteInputSecurityGroupRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DeleteInputSecurityGroup, request);
        }

        /**
         * An Async wrapper for DeleteInputSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInputSecurityGroupRequestT = Model::DeleteInputSecurityGroupRequest>
        void DeleteInputSecurityGroupAsync(const DeleteInputSecurityGroupRequestT& request, const DeleteInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DeleteInputSecurityGroup, request, handler, context);
        }

        /**
         * Delete a multiplex. The multiplex must be idle.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMultiplexOutcome DeleteMultiplex(const Model::DeleteMultiplexRequest& request) const;

        /**
         * A Callable wrapper for DeleteMultiplex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMultiplexRequestT = Model::DeleteMultiplexRequest>
        Model::DeleteMultiplexOutcomeCallable DeleteMultiplexCallable(const DeleteMultiplexRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DeleteMultiplex, request);
        }

        /**
         * An Async wrapper for DeleteMultiplex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMultiplexRequestT = Model::DeleteMultiplexRequest>
        void DeleteMultiplexAsync(const DeleteMultiplexRequestT& request, const DeleteMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DeleteMultiplex, request, handler, context);
        }

        /**
         * Delete a program from a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteMultiplexProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMultiplexProgramOutcome DeleteMultiplexProgram(const Model::DeleteMultiplexProgramRequest& request) const;

        /**
         * A Callable wrapper for DeleteMultiplexProgram that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMultiplexProgramRequestT = Model::DeleteMultiplexProgramRequest>
        Model::DeleteMultiplexProgramOutcomeCallable DeleteMultiplexProgramCallable(const DeleteMultiplexProgramRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DeleteMultiplexProgram, request);
        }

        /**
         * An Async wrapper for DeleteMultiplexProgram that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMultiplexProgramRequestT = Model::DeleteMultiplexProgramRequest>
        void DeleteMultiplexProgramAsync(const DeleteMultiplexProgramRequestT& request, const DeleteMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DeleteMultiplexProgram, request, handler, context);
        }

        /**
         * Delete a Network. The Network must have no resources associated with
         * it.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkOutcome DeleteNetwork(const Model::DeleteNetworkRequest& request) const;

        /**
         * A Callable wrapper for DeleteNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNetworkRequestT = Model::DeleteNetworkRequest>
        Model::DeleteNetworkOutcomeCallable DeleteNetworkCallable(const DeleteNetworkRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DeleteNetwork, request);
        }

        /**
         * An Async wrapper for DeleteNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNetworkRequestT = Model::DeleteNetworkRequest>
        void DeleteNetworkAsync(const DeleteNetworkRequestT& request, const DeleteNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DeleteNetwork, request, handler, context);
        }

        /**
         * Delete a Node. The Node must be IDLE.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNodeOutcome DeleteNode(const Model::DeleteNodeRequest& request) const;

        /**
         * A Callable wrapper for DeleteNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNodeRequestT = Model::DeleteNodeRequest>
        Model::DeleteNodeOutcomeCallable DeleteNodeCallable(const DeleteNodeRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DeleteNode, request);
        }

        /**
         * An Async wrapper for DeleteNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNodeRequestT = Model::DeleteNodeRequest>
        void DeleteNodeAsync(const DeleteNodeRequestT& request, const DeleteNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DeleteNode, request, handler, context);
        }

        /**
         * Delete an expired reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReservationOutcome DeleteReservation(const Model::DeleteReservationRequest& request) const;

        /**
         * A Callable wrapper for DeleteReservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteReservationRequestT = Model::DeleteReservationRequest>
        Model::DeleteReservationOutcomeCallable DeleteReservationCallable(const DeleteReservationRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DeleteReservation, request);
        }

        /**
         * An Async wrapper for DeleteReservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReservationRequestT = Model::DeleteReservationRequest>
        void DeleteReservationAsync(const DeleteReservationRequestT& request, const DeleteReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DeleteReservation, request, handler, context);
        }

        /**
         * Delete all schedule actions on a channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduleOutcome DeleteSchedule(const Model::DeleteScheduleRequest& request) const;

        /**
         * A Callable wrapper for DeleteSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteScheduleRequestT = Model::DeleteScheduleRequest>
        Model::DeleteScheduleOutcomeCallable DeleteScheduleCallable(const DeleteScheduleRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DeleteSchedule, request);
        }

        /**
         * An Async wrapper for DeleteSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteScheduleRequestT = Model::DeleteScheduleRequest>
        void DeleteScheduleAsync(const DeleteScheduleRequestT& request, const DeleteScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DeleteSchedule, request, handler, context);
        }

        /**
         * Delete an SdiSource. The SdiSource must not be part of any SidSourceMapping and
         * must not be attached to any input.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteSdiSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSdiSourceOutcome DeleteSdiSource(const Model::DeleteSdiSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteSdiSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSdiSourceRequestT = Model::DeleteSdiSourceRequest>
        Model::DeleteSdiSourceOutcomeCallable DeleteSdiSourceCallable(const DeleteSdiSourceRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DeleteSdiSource, request);
        }

        /**
         * An Async wrapper for DeleteSdiSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSdiSourceRequestT = Model::DeleteSdiSourceRequest>
        void DeleteSdiSourceAsync(const DeleteSdiSourceRequestT& request, const DeleteSdiSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DeleteSdiSource, request, handler, context);
        }

        /**
         * Deletes the specified signal map.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteSignalMap">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSignalMapOutcome DeleteSignalMap(const Model::DeleteSignalMapRequest& request) const;

        /**
         * A Callable wrapper for DeleteSignalMap that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSignalMapRequestT = Model::DeleteSignalMapRequest>
        Model::DeleteSignalMapOutcomeCallable DeleteSignalMapCallable(const DeleteSignalMapRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DeleteSignalMap, request);
        }

        /**
         * An Async wrapper for DeleteSignalMap that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSignalMapRequestT = Model::DeleteSignalMapRequest>
        void DeleteSignalMapAsync(const DeleteSignalMapRequestT& request, const DeleteSignalMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DeleteSignalMap, request, handler, context);
        }

        /**
         * Removes tags for a resource<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * A Callable wrapper for DeleteTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTagsRequestT = Model::DeleteTagsRequest>
        Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const DeleteTagsRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DeleteTags, request);
        }

        /**
         * An Async wrapper for DeleteTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTagsRequestT = Model::DeleteTagsRequest>
        void DeleteTagsAsync(const DeleteTagsRequestT& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DeleteTags, request, handler, context);
        }

        /**
         * Describe account configuration<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeAccountConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountConfigurationOutcome DescribeAccountConfiguration(const Model::DescribeAccountConfigurationRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeAccountConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAccountConfigurationRequestT = Model::DescribeAccountConfigurationRequest>
        Model::DescribeAccountConfigurationOutcomeCallable DescribeAccountConfigurationCallable(const DescribeAccountConfigurationRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::DescribeAccountConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeAccountConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountConfigurationRequestT = Model::DescribeAccountConfigurationRequest>
        void DescribeAccountConfigurationAsync(const DescribeAccountConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeAccountConfigurationRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::DescribeAccountConfiguration, request, handler, context);
        }

        /**
         * Gets details about a channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelOutcome DescribeChannel(const Model::DescribeChannelRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChannelRequestT = Model::DescribeChannelRequest>
        Model::DescribeChannelOutcomeCallable DescribeChannelCallable(const DescribeChannelRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DescribeChannel, request);
        }

        /**
         * An Async wrapper for DescribeChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChannelRequestT = Model::DescribeChannelRequest>
        void DescribeChannelAsync(const DescribeChannelRequestT& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DescribeChannel, request, handler, context);
        }

        /**
         * Get details about a ChannelPlacementGroup.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeChannelPlacementGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelPlacementGroupOutcome DescribeChannelPlacementGroup(const Model::DescribeChannelPlacementGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannelPlacementGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChannelPlacementGroupRequestT = Model::DescribeChannelPlacementGroupRequest>
        Model::DescribeChannelPlacementGroupOutcomeCallable DescribeChannelPlacementGroupCallable(const DescribeChannelPlacementGroupRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DescribeChannelPlacementGroup, request);
        }

        /**
         * An Async wrapper for DescribeChannelPlacementGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChannelPlacementGroupRequestT = Model::DescribeChannelPlacementGroupRequest>
        void DescribeChannelPlacementGroupAsync(const DescribeChannelPlacementGroupRequestT& request, const DescribeChannelPlacementGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DescribeChannelPlacementGroup, request, handler, context);
        }

        /**
         * Get details about a Cluster.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterOutcome DescribeCluster(const Model::DescribeClusterRequest& request) const;

        /**
         * A Callable wrapper for DescribeCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeClusterRequestT = Model::DescribeClusterRequest>
        Model::DescribeClusterOutcomeCallable DescribeClusterCallable(const DescribeClusterRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DescribeCluster, request);
        }

        /**
         * An Async wrapper for DescribeCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeClusterRequestT = Model::DescribeClusterRequest>
        void DescribeClusterAsync(const DescribeClusterRequestT& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DescribeCluster, request, handler, context);
        }

        /**
         * Produces details about an input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInput">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputOutcome DescribeInput(const Model::DescribeInputRequest& request) const;

        /**
         * A Callable wrapper for DescribeInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInputRequestT = Model::DescribeInputRequest>
        Model::DescribeInputOutcomeCallable DescribeInputCallable(const DescribeInputRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DescribeInput, request);
        }

        /**
         * An Async wrapper for DescribeInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInputRequestT = Model::DescribeInputRequest>
        void DescribeInputAsync(const DescribeInputRequestT& request, const DescribeInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DescribeInput, request, handler, context);
        }

        /**
         * Gets the details for the input device<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputDeviceOutcome DescribeInputDevice(const Model::DescribeInputDeviceRequest& request) const;

        /**
         * A Callable wrapper for DescribeInputDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInputDeviceRequestT = Model::DescribeInputDeviceRequest>
        Model::DescribeInputDeviceOutcomeCallable DescribeInputDeviceCallable(const DescribeInputDeviceRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DescribeInputDevice, request);
        }

        /**
         * An Async wrapper for DescribeInputDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInputDeviceRequestT = Model::DescribeInputDeviceRequest>
        void DescribeInputDeviceAsync(const DescribeInputDeviceRequestT& request, const DescribeInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DescribeInputDevice, request, handler, context);
        }

        /**
         * Get the latest thumbnail data for the input device.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputDeviceThumbnail">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputDeviceThumbnailOutcome DescribeInputDeviceThumbnail(const Model::DescribeInputDeviceThumbnailRequest& request) const;

        /**
         * A Callable wrapper for DescribeInputDeviceThumbnail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInputDeviceThumbnailRequestT = Model::DescribeInputDeviceThumbnailRequest>
        Model::DescribeInputDeviceThumbnailOutcomeCallable DescribeInputDeviceThumbnailCallable(const DescribeInputDeviceThumbnailRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DescribeInputDeviceThumbnail, request);
        }

        /**
         * An Async wrapper for DescribeInputDeviceThumbnail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInputDeviceThumbnailRequestT = Model::DescribeInputDeviceThumbnailRequest>
        void DescribeInputDeviceThumbnailAsync(const DescribeInputDeviceThumbnailRequestT& request, const DescribeInputDeviceThumbnailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DescribeInputDeviceThumbnail, request, handler, context);
        }

        /**
         * Produces a summary of an Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInputSecurityGroupOutcome DescribeInputSecurityGroup(const Model::DescribeInputSecurityGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeInputSecurityGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInputSecurityGroupRequestT = Model::DescribeInputSecurityGroupRequest>
        Model::DescribeInputSecurityGroupOutcomeCallable DescribeInputSecurityGroupCallable(const DescribeInputSecurityGroupRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DescribeInputSecurityGroup, request);
        }

        /**
         * An Async wrapper for DescribeInputSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInputSecurityGroupRequestT = Model::DescribeInputSecurityGroupRequest>
        void DescribeInputSecurityGroupAsync(const DescribeInputSecurityGroupRequestT& request, const DescribeInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DescribeInputSecurityGroup, request, handler, context);
        }

        /**
         * Gets details about a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMultiplexOutcome DescribeMultiplex(const Model::DescribeMultiplexRequest& request) const;

        /**
         * A Callable wrapper for DescribeMultiplex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMultiplexRequestT = Model::DescribeMultiplexRequest>
        Model::DescribeMultiplexOutcomeCallable DescribeMultiplexCallable(const DescribeMultiplexRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DescribeMultiplex, request);
        }

        /**
         * An Async wrapper for DescribeMultiplex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMultiplexRequestT = Model::DescribeMultiplexRequest>
        void DescribeMultiplexAsync(const DescribeMultiplexRequestT& request, const DescribeMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DescribeMultiplex, request, handler, context);
        }

        /**
         * Get the details for a program in a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeMultiplexProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMultiplexProgramOutcome DescribeMultiplexProgram(const Model::DescribeMultiplexProgramRequest& request) const;

        /**
         * A Callable wrapper for DescribeMultiplexProgram that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMultiplexProgramRequestT = Model::DescribeMultiplexProgramRequest>
        Model::DescribeMultiplexProgramOutcomeCallable DescribeMultiplexProgramCallable(const DescribeMultiplexProgramRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DescribeMultiplexProgram, request);
        }

        /**
         * An Async wrapper for DescribeMultiplexProgram that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMultiplexProgramRequestT = Model::DescribeMultiplexProgramRequest>
        void DescribeMultiplexProgramAsync(const DescribeMultiplexProgramRequestT& request, const DescribeMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DescribeMultiplexProgram, request, handler, context);
        }

        /**
         * Get details about a Network.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNetworkOutcome DescribeNetwork(const Model::DescribeNetworkRequest& request) const;

        /**
         * A Callable wrapper for DescribeNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeNetworkRequestT = Model::DescribeNetworkRequest>
        Model::DescribeNetworkOutcomeCallable DescribeNetworkCallable(const DescribeNetworkRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DescribeNetwork, request);
        }

        /**
         * An Async wrapper for DescribeNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeNetworkRequestT = Model::DescribeNetworkRequest>
        void DescribeNetworkAsync(const DescribeNetworkRequestT& request, const DescribeNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DescribeNetwork, request, handler, context);
        }

        /**
         * Get details about a Node in the specified Cluster.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNodeOutcome DescribeNode(const Model::DescribeNodeRequest& request) const;

        /**
         * A Callable wrapper for DescribeNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeNodeRequestT = Model::DescribeNodeRequest>
        Model::DescribeNodeOutcomeCallable DescribeNodeCallable(const DescribeNodeRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DescribeNode, request);
        }

        /**
         * An Async wrapper for DescribeNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeNodeRequestT = Model::DescribeNodeRequest>
        void DescribeNodeAsync(const DescribeNodeRequestT& request, const DescribeNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DescribeNode, request, handler, context);
        }

        /**
         * Get details for an offering.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOfferingOutcome DescribeOffering(const Model::DescribeOfferingRequest& request) const;

        /**
         * A Callable wrapper for DescribeOffering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOfferingRequestT = Model::DescribeOfferingRequest>
        Model::DescribeOfferingOutcomeCallable DescribeOfferingCallable(const DescribeOfferingRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DescribeOffering, request);
        }

        /**
         * An Async wrapper for DescribeOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOfferingRequestT = Model::DescribeOfferingRequest>
        void DescribeOfferingAsync(const DescribeOfferingRequestT& request, const DescribeOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DescribeOffering, request, handler, context);
        }

        /**
         * Get details for a reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReservationOutcome DescribeReservation(const Model::DescribeReservationRequest& request) const;

        /**
         * A Callable wrapper for DescribeReservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeReservationRequestT = Model::DescribeReservationRequest>
        Model::DescribeReservationOutcomeCallable DescribeReservationCallable(const DescribeReservationRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DescribeReservation, request);
        }

        /**
         * An Async wrapper for DescribeReservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReservationRequestT = Model::DescribeReservationRequest>
        void DescribeReservationAsync(const DescribeReservationRequestT& request, const DescribeReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DescribeReservation, request, handler, context);
        }

        /**
         * Get a channel schedule<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduleOutcome DescribeSchedule(const Model::DescribeScheduleRequest& request) const;

        /**
         * A Callable wrapper for DescribeSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeScheduleRequestT = Model::DescribeScheduleRequest>
        Model::DescribeScheduleOutcomeCallable DescribeScheduleCallable(const DescribeScheduleRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DescribeSchedule, request);
        }

        /**
         * An Async wrapper for DescribeSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeScheduleRequestT = Model::DescribeScheduleRequest>
        void DescribeScheduleAsync(const DescribeScheduleRequestT& request, const DescribeScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DescribeSchedule, request, handler, context);
        }

        /**
         * Gets details about a SdiSource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeSdiSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSdiSourceOutcome DescribeSdiSource(const Model::DescribeSdiSourceRequest& request) const;

        /**
         * A Callable wrapper for DescribeSdiSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSdiSourceRequestT = Model::DescribeSdiSourceRequest>
        Model::DescribeSdiSourceOutcomeCallable DescribeSdiSourceCallable(const DescribeSdiSourceRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DescribeSdiSource, request);
        }

        /**
         * An Async wrapper for DescribeSdiSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSdiSourceRequestT = Model::DescribeSdiSourceRequest>
        void DescribeSdiSourceAsync(const DescribeSdiSourceRequestT& request, const DescribeSdiSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DescribeSdiSource, request, handler, context);
        }

        /**
         * Describe the latest thumbnails data.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeThumbnails">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeThumbnailsOutcome DescribeThumbnails(const Model::DescribeThumbnailsRequest& request) const;

        /**
         * A Callable wrapper for DescribeThumbnails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeThumbnailsRequestT = Model::DescribeThumbnailsRequest>
        Model::DescribeThumbnailsOutcomeCallable DescribeThumbnailsCallable(const DescribeThumbnailsRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DescribeThumbnails, request);
        }

        /**
         * An Async wrapper for DescribeThumbnails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeThumbnailsRequestT = Model::DescribeThumbnailsRequest>
        void DescribeThumbnailsAsync(const DescribeThumbnailsRequestT& request, const DescribeThumbnailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::DescribeThumbnails, request, handler, context);
        }

        /**
         * Retrieves the specified cloudwatch alarm template.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/GetCloudWatchAlarmTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudWatchAlarmTemplateOutcome GetCloudWatchAlarmTemplate(const Model::GetCloudWatchAlarmTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetCloudWatchAlarmTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCloudWatchAlarmTemplateRequestT = Model::GetCloudWatchAlarmTemplateRequest>
        Model::GetCloudWatchAlarmTemplateOutcomeCallable GetCloudWatchAlarmTemplateCallable(const GetCloudWatchAlarmTemplateRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::GetCloudWatchAlarmTemplate, request);
        }

        /**
         * An Async wrapper for GetCloudWatchAlarmTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCloudWatchAlarmTemplateRequestT = Model::GetCloudWatchAlarmTemplateRequest>
        void GetCloudWatchAlarmTemplateAsync(const GetCloudWatchAlarmTemplateRequestT& request, const GetCloudWatchAlarmTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::GetCloudWatchAlarmTemplate, request, handler, context);
        }

        /**
         * Retrieves the specified cloudwatch alarm template group.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/GetCloudWatchAlarmTemplateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudWatchAlarmTemplateGroupOutcome GetCloudWatchAlarmTemplateGroup(const Model::GetCloudWatchAlarmTemplateGroupRequest& request) const;

        /**
         * A Callable wrapper for GetCloudWatchAlarmTemplateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCloudWatchAlarmTemplateGroupRequestT = Model::GetCloudWatchAlarmTemplateGroupRequest>
        Model::GetCloudWatchAlarmTemplateGroupOutcomeCallable GetCloudWatchAlarmTemplateGroupCallable(const GetCloudWatchAlarmTemplateGroupRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::GetCloudWatchAlarmTemplateGroup, request);
        }

        /**
         * An Async wrapper for GetCloudWatchAlarmTemplateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCloudWatchAlarmTemplateGroupRequestT = Model::GetCloudWatchAlarmTemplateGroupRequest>
        void GetCloudWatchAlarmTemplateGroupAsync(const GetCloudWatchAlarmTemplateGroupRequestT& request, const GetCloudWatchAlarmTemplateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::GetCloudWatchAlarmTemplateGroup, request, handler, context);
        }

        /**
         * Retrieves the specified eventbridge rule template.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/GetEventBridgeRuleTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventBridgeRuleTemplateOutcome GetEventBridgeRuleTemplate(const Model::GetEventBridgeRuleTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetEventBridgeRuleTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEventBridgeRuleTemplateRequestT = Model::GetEventBridgeRuleTemplateRequest>
        Model::GetEventBridgeRuleTemplateOutcomeCallable GetEventBridgeRuleTemplateCallable(const GetEventBridgeRuleTemplateRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::GetEventBridgeRuleTemplate, request);
        }

        /**
         * An Async wrapper for GetEventBridgeRuleTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEventBridgeRuleTemplateRequestT = Model::GetEventBridgeRuleTemplateRequest>
        void GetEventBridgeRuleTemplateAsync(const GetEventBridgeRuleTemplateRequestT& request, const GetEventBridgeRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::GetEventBridgeRuleTemplate, request, handler, context);
        }

        /**
         * Retrieves the specified eventbridge rule template group.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/GetEventBridgeRuleTemplateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventBridgeRuleTemplateGroupOutcome GetEventBridgeRuleTemplateGroup(const Model::GetEventBridgeRuleTemplateGroupRequest& request) const;

        /**
         * A Callable wrapper for GetEventBridgeRuleTemplateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEventBridgeRuleTemplateGroupRequestT = Model::GetEventBridgeRuleTemplateGroupRequest>
        Model::GetEventBridgeRuleTemplateGroupOutcomeCallable GetEventBridgeRuleTemplateGroupCallable(const GetEventBridgeRuleTemplateGroupRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::GetEventBridgeRuleTemplateGroup, request);
        }

        /**
         * An Async wrapper for GetEventBridgeRuleTemplateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEventBridgeRuleTemplateGroupRequestT = Model::GetEventBridgeRuleTemplateGroupRequest>
        void GetEventBridgeRuleTemplateGroupAsync(const GetEventBridgeRuleTemplateGroupRequestT& request, const GetEventBridgeRuleTemplateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::GetEventBridgeRuleTemplateGroup, request, handler, context);
        }

        /**
         * Retrieves the specified signal map.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/GetSignalMap">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSignalMapOutcome GetSignalMap(const Model::GetSignalMapRequest& request) const;

        /**
         * A Callable wrapper for GetSignalMap that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSignalMapRequestT = Model::GetSignalMapRequest>
        Model::GetSignalMapOutcomeCallable GetSignalMapCallable(const GetSignalMapRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::GetSignalMap, request);
        }

        /**
         * An Async wrapper for GetSignalMap that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSignalMapRequestT = Model::GetSignalMapRequest>
        void GetSignalMapAsync(const GetSignalMapRequestT& request, const GetSignalMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::GetSignalMap, request, handler, context);
        }

        /**
         * Retrieve the list of ChannelPlacementGroups in the specified Cluster.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListChannelPlacementGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelPlacementGroupsOutcome ListChannelPlacementGroups(const Model::ListChannelPlacementGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListChannelPlacementGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelPlacementGroupsRequestT = Model::ListChannelPlacementGroupsRequest>
        Model::ListChannelPlacementGroupsOutcomeCallable ListChannelPlacementGroupsCallable(const ListChannelPlacementGroupsRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::ListChannelPlacementGroups, request);
        }

        /**
         * An Async wrapper for ListChannelPlacementGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelPlacementGroupsRequestT = Model::ListChannelPlacementGroupsRequest>
        void ListChannelPlacementGroupsAsync(const ListChannelPlacementGroupsRequestT& request, const ListChannelPlacementGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::ListChannelPlacementGroups, request, handler, context);
        }

        /**
         * Produces list of channels that have been created<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        Model::ListChannelsOutcomeCallable ListChannelsCallable(const ListChannelsRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::ListChannels, request);
        }

        /**
         * An Async wrapper for ListChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        void ListChannelsAsync(const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListChannelsRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::ListChannels, request, handler, context);
        }

        /**
         * Lists cloudwatch alarm template groups.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListCloudWatchAlarmTemplateGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCloudWatchAlarmTemplateGroupsOutcome ListCloudWatchAlarmTemplateGroups(const Model::ListCloudWatchAlarmTemplateGroupsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListCloudWatchAlarmTemplateGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCloudWatchAlarmTemplateGroupsRequestT = Model::ListCloudWatchAlarmTemplateGroupsRequest>
        Model::ListCloudWatchAlarmTemplateGroupsOutcomeCallable ListCloudWatchAlarmTemplateGroupsCallable(const ListCloudWatchAlarmTemplateGroupsRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::ListCloudWatchAlarmTemplateGroups, request);
        }

        /**
         * An Async wrapper for ListCloudWatchAlarmTemplateGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCloudWatchAlarmTemplateGroupsRequestT = Model::ListCloudWatchAlarmTemplateGroupsRequest>
        void ListCloudWatchAlarmTemplateGroupsAsync(const ListCloudWatchAlarmTemplateGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListCloudWatchAlarmTemplateGroupsRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::ListCloudWatchAlarmTemplateGroups, request, handler, context);
        }

        /**
         * Lists cloudwatch alarm templates.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListCloudWatchAlarmTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCloudWatchAlarmTemplatesOutcome ListCloudWatchAlarmTemplates(const Model::ListCloudWatchAlarmTemplatesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListCloudWatchAlarmTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCloudWatchAlarmTemplatesRequestT = Model::ListCloudWatchAlarmTemplatesRequest>
        Model::ListCloudWatchAlarmTemplatesOutcomeCallable ListCloudWatchAlarmTemplatesCallable(const ListCloudWatchAlarmTemplatesRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::ListCloudWatchAlarmTemplates, request);
        }

        /**
         * An Async wrapper for ListCloudWatchAlarmTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCloudWatchAlarmTemplatesRequestT = Model::ListCloudWatchAlarmTemplatesRequest>
        void ListCloudWatchAlarmTemplatesAsync(const ListCloudWatchAlarmTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListCloudWatchAlarmTemplatesRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::ListCloudWatchAlarmTemplates, request, handler, context);
        }

        /**
         * Retrieve the list of Clusters.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request = {}) const;

        /**
         * A Callable wrapper for ListClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListClustersRequestT = Model::ListClustersRequest>
        Model::ListClustersOutcomeCallable ListClustersCallable(const ListClustersRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::ListClusters, request);
        }

        /**
         * An Async wrapper for ListClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClustersRequestT = Model::ListClustersRequest>
        void ListClustersAsync(const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListClustersRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::ListClusters, request, handler, context);
        }

        /**
         * Lists eventbridge rule template groups.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListEventBridgeRuleTemplateGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventBridgeRuleTemplateGroupsOutcome ListEventBridgeRuleTemplateGroups(const Model::ListEventBridgeRuleTemplateGroupsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListEventBridgeRuleTemplateGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEventBridgeRuleTemplateGroupsRequestT = Model::ListEventBridgeRuleTemplateGroupsRequest>
        Model::ListEventBridgeRuleTemplateGroupsOutcomeCallable ListEventBridgeRuleTemplateGroupsCallable(const ListEventBridgeRuleTemplateGroupsRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::ListEventBridgeRuleTemplateGroups, request);
        }

        /**
         * An Async wrapper for ListEventBridgeRuleTemplateGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEventBridgeRuleTemplateGroupsRequestT = Model::ListEventBridgeRuleTemplateGroupsRequest>
        void ListEventBridgeRuleTemplateGroupsAsync(const ListEventBridgeRuleTemplateGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListEventBridgeRuleTemplateGroupsRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::ListEventBridgeRuleTemplateGroups, request, handler, context);
        }

        /**
         * Lists eventbridge rule templates.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListEventBridgeRuleTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventBridgeRuleTemplatesOutcome ListEventBridgeRuleTemplates(const Model::ListEventBridgeRuleTemplatesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListEventBridgeRuleTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEventBridgeRuleTemplatesRequestT = Model::ListEventBridgeRuleTemplatesRequest>
        Model::ListEventBridgeRuleTemplatesOutcomeCallable ListEventBridgeRuleTemplatesCallable(const ListEventBridgeRuleTemplatesRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::ListEventBridgeRuleTemplates, request);
        }

        /**
         * An Async wrapper for ListEventBridgeRuleTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEventBridgeRuleTemplatesRequestT = Model::ListEventBridgeRuleTemplatesRequest>
        void ListEventBridgeRuleTemplatesAsync(const ListEventBridgeRuleTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListEventBridgeRuleTemplatesRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::ListEventBridgeRuleTemplates, request, handler, context);
        }

        /**
         * List input devices that are currently being transferred. List input devices that
         * you are transferring from your AWS account or input devices that another AWS
         * account is transferring to you.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputDeviceTransfers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputDeviceTransfersOutcome ListInputDeviceTransfers(const Model::ListInputDeviceTransfersRequest& request) const;

        /**
         * A Callable wrapper for ListInputDeviceTransfers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInputDeviceTransfersRequestT = Model::ListInputDeviceTransfersRequest>
        Model::ListInputDeviceTransfersOutcomeCallable ListInputDeviceTransfersCallable(const ListInputDeviceTransfersRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::ListInputDeviceTransfers, request);
        }

        /**
         * An Async wrapper for ListInputDeviceTransfers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInputDeviceTransfersRequestT = Model::ListInputDeviceTransfersRequest>
        void ListInputDeviceTransfersAsync(const ListInputDeviceTransfersRequestT& request, const ListInputDeviceTransfersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::ListInputDeviceTransfers, request, handler, context);
        }

        /**
         * List input devices<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputDevicesOutcome ListInputDevices(const Model::ListInputDevicesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListInputDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInputDevicesRequestT = Model::ListInputDevicesRequest>
        Model::ListInputDevicesOutcomeCallable ListInputDevicesCallable(const ListInputDevicesRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::ListInputDevices, request);
        }

        /**
         * An Async wrapper for ListInputDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInputDevicesRequestT = Model::ListInputDevicesRequest>
        void ListInputDevicesAsync(const ListInputDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListInputDevicesRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::ListInputDevices, request, handler, context);
        }

        /**
         * Produces a list of Input Security Groups for an account<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputSecurityGroupsOutcome ListInputSecurityGroups(const Model::ListInputSecurityGroupsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListInputSecurityGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInputSecurityGroupsRequestT = Model::ListInputSecurityGroupsRequest>
        Model::ListInputSecurityGroupsOutcomeCallable ListInputSecurityGroupsCallable(const ListInputSecurityGroupsRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::ListInputSecurityGroups, request);
        }

        /**
         * An Async wrapper for ListInputSecurityGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInputSecurityGroupsRequestT = Model::ListInputSecurityGroupsRequest>
        void ListInputSecurityGroupsAsync(const ListInputSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListInputSecurityGroupsRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::ListInputSecurityGroups, request, handler, context);
        }

        /**
         * Produces list of inputs that have been created<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputsOutcome ListInputs(const Model::ListInputsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListInputs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInputsRequestT = Model::ListInputsRequest>
        Model::ListInputsOutcomeCallable ListInputsCallable(const ListInputsRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::ListInputs, request);
        }

        /**
         * An Async wrapper for ListInputs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInputsRequestT = Model::ListInputsRequest>
        void ListInputsAsync(const ListInputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListInputsRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::ListInputs, request, handler, context);
        }

        /**
         * List the programs that currently exist for a specific multiplex.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListMultiplexPrograms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMultiplexProgramsOutcome ListMultiplexPrograms(const Model::ListMultiplexProgramsRequest& request) const;

        /**
         * A Callable wrapper for ListMultiplexPrograms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMultiplexProgramsRequestT = Model::ListMultiplexProgramsRequest>
        Model::ListMultiplexProgramsOutcomeCallable ListMultiplexProgramsCallable(const ListMultiplexProgramsRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::ListMultiplexPrograms, request);
        }

        /**
         * An Async wrapper for ListMultiplexPrograms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMultiplexProgramsRequestT = Model::ListMultiplexProgramsRequest>
        void ListMultiplexProgramsAsync(const ListMultiplexProgramsRequestT& request, const ListMultiplexProgramsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::ListMultiplexPrograms, request, handler, context);
        }

        /**
         * Retrieve a list of the existing multiplexes.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListMultiplexes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMultiplexesOutcome ListMultiplexes(const Model::ListMultiplexesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListMultiplexes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMultiplexesRequestT = Model::ListMultiplexesRequest>
        Model::ListMultiplexesOutcomeCallable ListMultiplexesCallable(const ListMultiplexesRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::ListMultiplexes, request);
        }

        /**
         * An Async wrapper for ListMultiplexes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMultiplexesRequestT = Model::ListMultiplexesRequest>
        void ListMultiplexesAsync(const ListMultiplexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListMultiplexesRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::ListMultiplexes, request, handler, context);
        }

        /**
         * Retrieve the list of Networks.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListNetworks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworksOutcome ListNetworks(const Model::ListNetworksRequest& request = {}) const;

        /**
         * A Callable wrapper for ListNetworks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNetworksRequestT = Model::ListNetworksRequest>
        Model::ListNetworksOutcomeCallable ListNetworksCallable(const ListNetworksRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::ListNetworks, request);
        }

        /**
         * An Async wrapper for ListNetworks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNetworksRequestT = Model::ListNetworksRequest>
        void ListNetworksAsync(const ListNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListNetworksRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::ListNetworks, request, handler, context);
        }

        /**
         * Retrieve the list of Nodes.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNodesOutcome ListNodes(const Model::ListNodesRequest& request) const;

        /**
         * A Callable wrapper for ListNodes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNodesRequestT = Model::ListNodesRequest>
        Model::ListNodesOutcomeCallable ListNodesCallable(const ListNodesRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::ListNodes, request);
        }

        /**
         * An Async wrapper for ListNodes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNodesRequestT = Model::ListNodesRequest>
        void ListNodesAsync(const ListNodesRequestT& request, const ListNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::ListNodes, request, handler, context);
        }

        /**
         * List offerings available for purchase.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOfferingsOutcome ListOfferings(const Model::ListOfferingsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOfferingsRequestT = Model::ListOfferingsRequest>
        Model::ListOfferingsOutcomeCallable ListOfferingsCallable(const ListOfferingsRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::ListOfferings, request);
        }

        /**
         * An Async wrapper for ListOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOfferingsRequestT = Model::ListOfferingsRequest>
        void ListOfferingsAsync(const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListOfferingsRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::ListOfferings, request, handler, context);
        }

        /**
         * List purchased reservations.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListReservations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReservationsOutcome ListReservations(const Model::ListReservationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListReservations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReservationsRequestT = Model::ListReservationsRequest>
        Model::ListReservationsOutcomeCallable ListReservationsCallable(const ListReservationsRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::ListReservations, request);
        }

        /**
         * An Async wrapper for ListReservations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReservationsRequestT = Model::ListReservationsRequest>
        void ListReservationsAsync(const ListReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListReservationsRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::ListReservations, request, handler, context);
        }

        /**
         * List all the SdiSources in the AWS account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListSdiSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSdiSourcesOutcome ListSdiSources(const Model::ListSdiSourcesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListSdiSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSdiSourcesRequestT = Model::ListSdiSourcesRequest>
        Model::ListSdiSourcesOutcomeCallable ListSdiSourcesCallable(const ListSdiSourcesRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::ListSdiSources, request);
        }

        /**
         * An Async wrapper for ListSdiSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSdiSourcesRequestT = Model::ListSdiSourcesRequest>
        void ListSdiSourcesAsync(const ListSdiSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListSdiSourcesRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::ListSdiSources, request, handler, context);
        }

        /**
         * Lists signal maps.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListSignalMaps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSignalMapsOutcome ListSignalMaps(const Model::ListSignalMapsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListSignalMaps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSignalMapsRequestT = Model::ListSignalMapsRequest>
        Model::ListSignalMapsOutcomeCallable ListSignalMapsCallable(const ListSignalMapsRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::ListSignalMaps, request);
        }

        /**
         * An Async wrapper for ListSignalMaps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSignalMapsRequestT = Model::ListSignalMapsRequest>
        void ListSignalMapsAsync(const ListSignalMapsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListSignalMapsRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::ListSignalMaps, request, handler, context);
        }

        /**
         * Produces list of tags that have been created for a resource<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::ListTagsForResource, request, handler, context);
        }

        /**
         * Retrieves an array of all the encoder engine versions that are available in this
         * AWS account.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVersionsOutcome ListVersions(const Model::ListVersionsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVersionsRequestT = Model::ListVersionsRequest>
        Model::ListVersionsOutcomeCallable ListVersionsCallable(const ListVersionsRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::ListVersions, request);
        }

        /**
         * An Async wrapper for ListVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVersionsRequestT = Model::ListVersionsRequest>
        void ListVersionsAsync(const ListVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListVersionsRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::ListVersions, request, handler, context);
        }

        /**
         * Purchase an offering and create a reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/PurchaseOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseOfferingOutcome PurchaseOffering(const Model::PurchaseOfferingRequest& request) const;

        /**
         * A Callable wrapper for PurchaseOffering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PurchaseOfferingRequestT = Model::PurchaseOfferingRequest>
        Model::PurchaseOfferingOutcomeCallable PurchaseOfferingCallable(const PurchaseOfferingRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::PurchaseOffering, request);
        }

        /**
         * An Async wrapper for PurchaseOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PurchaseOfferingRequestT = Model::PurchaseOfferingRequest>
        void PurchaseOfferingAsync(const PurchaseOfferingRequestT& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::PurchaseOffering, request, handler, context);
        }

        /**
         * Send a reboot command to the specified input device. The device will begin
         * rebooting within a few seconds of sending the command. When the reboot is
         * complete, the device’s connection status will change to connected.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RebootInputDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootInputDeviceOutcome RebootInputDevice(const Model::RebootInputDeviceRequest& request) const;

        /**
         * A Callable wrapper for RebootInputDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RebootInputDeviceRequestT = Model::RebootInputDeviceRequest>
        Model::RebootInputDeviceOutcomeCallable RebootInputDeviceCallable(const RebootInputDeviceRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::RebootInputDevice, request);
        }

        /**
         * An Async wrapper for RebootInputDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RebootInputDeviceRequestT = Model::RebootInputDeviceRequest>
        void RebootInputDeviceAsync(const RebootInputDeviceRequestT& request, const RebootInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::RebootInputDevice, request, handler, context);
        }

        /**
         * Reject the transfer of the specified input device to your AWS account.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RejectInputDeviceTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectInputDeviceTransferOutcome RejectInputDeviceTransfer(const Model::RejectInputDeviceTransferRequest& request) const;

        /**
         * A Callable wrapper for RejectInputDeviceTransfer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RejectInputDeviceTransferRequestT = Model::RejectInputDeviceTransferRequest>
        Model::RejectInputDeviceTransferOutcomeCallable RejectInputDeviceTransferCallable(const RejectInputDeviceTransferRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::RejectInputDeviceTransfer, request);
        }

        /**
         * An Async wrapper for RejectInputDeviceTransfer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RejectInputDeviceTransferRequestT = Model::RejectInputDeviceTransferRequest>
        void RejectInputDeviceTransferAsync(const RejectInputDeviceTransferRequestT& request, const RejectInputDeviceTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::RejectInputDeviceTransfer, request, handler, context);
        }

        /**
         * Restart pipelines in one channel that is currently running.<p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RestartChannelPipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::RestartChannelPipelinesOutcome RestartChannelPipelines(const Model::RestartChannelPipelinesRequest& request) const;

        /**
         * A Callable wrapper for RestartChannelPipelines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestartChannelPipelinesRequestT = Model::RestartChannelPipelinesRequest>
        Model::RestartChannelPipelinesOutcomeCallable RestartChannelPipelinesCallable(const RestartChannelPipelinesRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::RestartChannelPipelines, request);
        }

        /**
         * An Async wrapper for RestartChannelPipelines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestartChannelPipelinesRequestT = Model::RestartChannelPipelinesRequest>
        void RestartChannelPipelinesAsync(const RestartChannelPipelinesRequestT& request, const RestartChannelPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::RestartChannelPipelines, request, handler, context);
        }

        /**
         * Starts an existing channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::StartChannelOutcome StartChannel(const Model::StartChannelRequest& request) const;

        /**
         * A Callable wrapper for StartChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartChannelRequestT = Model::StartChannelRequest>
        Model::StartChannelOutcomeCallable StartChannelCallable(const StartChannelRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::StartChannel, request);
        }

        /**
         * An Async wrapper for StartChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartChannelRequestT = Model::StartChannelRequest>
        void StartChannelAsync(const StartChannelRequestT& request, const StartChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::StartChannel, request, handler, context);
        }

        /**
         * Initiates a deployment to delete the monitor of the specified signal
         * map.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartDeleteMonitorDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDeleteMonitorDeploymentOutcome StartDeleteMonitorDeployment(const Model::StartDeleteMonitorDeploymentRequest& request) const;

        /**
         * A Callable wrapper for StartDeleteMonitorDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDeleteMonitorDeploymentRequestT = Model::StartDeleteMonitorDeploymentRequest>
        Model::StartDeleteMonitorDeploymentOutcomeCallable StartDeleteMonitorDeploymentCallable(const StartDeleteMonitorDeploymentRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::StartDeleteMonitorDeployment, request);
        }

        /**
         * An Async wrapper for StartDeleteMonitorDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDeleteMonitorDeploymentRequestT = Model::StartDeleteMonitorDeploymentRequest>
        void StartDeleteMonitorDeploymentAsync(const StartDeleteMonitorDeploymentRequestT& request, const StartDeleteMonitorDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::StartDeleteMonitorDeployment, request, handler, context);
        }

        /**
         * Start an input device that is attached to a MediaConnect flow. (There is no need
         * to start a device that is attached to a MediaLive input; MediaLive starts the
         * device when the channel starts.)<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartInputDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInputDeviceOutcome StartInputDevice(const Model::StartInputDeviceRequest& request) const;

        /**
         * A Callable wrapper for StartInputDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartInputDeviceRequestT = Model::StartInputDeviceRequest>
        Model::StartInputDeviceOutcomeCallable StartInputDeviceCallable(const StartInputDeviceRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::StartInputDevice, request);
        }

        /**
         * An Async wrapper for StartInputDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartInputDeviceRequestT = Model::StartInputDeviceRequest>
        void StartInputDeviceAsync(const StartInputDeviceRequestT& request, const StartInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::StartInputDevice, request, handler, context);
        }

        /**
         * Start a maintenance window for the specified input device. Starting a
         * maintenance window will give the device up to two hours to install software. If
         * the device was streaming prior to the maintenance, it will resume streaming when
         * the software is fully installed. Devices automatically install updates while
         * they are powered on and their MediaLive channels are stopped. A maintenance
         * window allows you to update a device without having to stop MediaLive channels
         * that use the device. The device must remain powered on and connected to the
         * internet for the duration of the maintenance.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartInputDeviceMaintenanceWindow">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInputDeviceMaintenanceWindowOutcome StartInputDeviceMaintenanceWindow(const Model::StartInputDeviceMaintenanceWindowRequest& request) const;

        /**
         * A Callable wrapper for StartInputDeviceMaintenanceWindow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartInputDeviceMaintenanceWindowRequestT = Model::StartInputDeviceMaintenanceWindowRequest>
        Model::StartInputDeviceMaintenanceWindowOutcomeCallable StartInputDeviceMaintenanceWindowCallable(const StartInputDeviceMaintenanceWindowRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::StartInputDeviceMaintenanceWindow, request);
        }

        /**
         * An Async wrapper for StartInputDeviceMaintenanceWindow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartInputDeviceMaintenanceWindowRequestT = Model::StartInputDeviceMaintenanceWindowRequest>
        void StartInputDeviceMaintenanceWindowAsync(const StartInputDeviceMaintenanceWindowRequestT& request, const StartInputDeviceMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::StartInputDeviceMaintenanceWindow, request, handler, context);
        }

        /**
         * Initiates a deployment to deploy the latest monitor of the specified signal
         * map.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartMonitorDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMonitorDeploymentOutcome StartMonitorDeployment(const Model::StartMonitorDeploymentRequest& request) const;

        /**
         * A Callable wrapper for StartMonitorDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMonitorDeploymentRequestT = Model::StartMonitorDeploymentRequest>
        Model::StartMonitorDeploymentOutcomeCallable StartMonitorDeploymentCallable(const StartMonitorDeploymentRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::StartMonitorDeployment, request);
        }

        /**
         * An Async wrapper for StartMonitorDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMonitorDeploymentRequestT = Model::StartMonitorDeploymentRequest>
        void StartMonitorDeploymentAsync(const StartMonitorDeploymentRequestT& request, const StartMonitorDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::StartMonitorDeployment, request, handler, context);
        }

        /**
         * Start (run) the multiplex. Starting the multiplex does not start the channels.
         * You must explicitly start each channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMultiplexOutcome StartMultiplex(const Model::StartMultiplexRequest& request) const;

        /**
         * A Callable wrapper for StartMultiplex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMultiplexRequestT = Model::StartMultiplexRequest>
        Model::StartMultiplexOutcomeCallable StartMultiplexCallable(const StartMultiplexRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::StartMultiplex, request);
        }

        /**
         * An Async wrapper for StartMultiplex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMultiplexRequestT = Model::StartMultiplexRequest>
        void StartMultiplexAsync(const StartMultiplexRequestT& request, const StartMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::StartMultiplex, request, handler, context);
        }

        /**
         * Initiates an update for the specified signal map. Will discover a new signal map
         * if a changed discoveryEntryPointArn is provided.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartUpdateSignalMap">AWS
         * API Reference</a></p>
         */
        virtual Model::StartUpdateSignalMapOutcome StartUpdateSignalMap(const Model::StartUpdateSignalMapRequest& request) const;

        /**
         * A Callable wrapper for StartUpdateSignalMap that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartUpdateSignalMapRequestT = Model::StartUpdateSignalMapRequest>
        Model::StartUpdateSignalMapOutcomeCallable StartUpdateSignalMapCallable(const StartUpdateSignalMapRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::StartUpdateSignalMap, request);
        }

        /**
         * An Async wrapper for StartUpdateSignalMap that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartUpdateSignalMapRequestT = Model::StartUpdateSignalMapRequest>
        void StartUpdateSignalMapAsync(const StartUpdateSignalMapRequestT& request, const StartUpdateSignalMapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::StartUpdateSignalMap, request, handler, context);
        }

        /**
         * Stops a running channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StopChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::StopChannelOutcome StopChannel(const Model::StopChannelRequest& request) const;

        /**
         * A Callable wrapper for StopChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopChannelRequestT = Model::StopChannelRequest>
        Model::StopChannelOutcomeCallable StopChannelCallable(const StopChannelRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::StopChannel, request);
        }

        /**
         * An Async wrapper for StopChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopChannelRequestT = Model::StopChannelRequest>
        void StopChannelAsync(const StopChannelRequestT& request, const StopChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::StopChannel, request, handler, context);
        }

        /**
         * Stop an input device that is attached to a MediaConnect flow. (There is no need
         * to stop a device that is attached to a MediaLive input; MediaLive automatically
         * stops the device when the channel stops.)<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StopInputDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::StopInputDeviceOutcome StopInputDevice(const Model::StopInputDeviceRequest& request) const;

        /**
         * A Callable wrapper for StopInputDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopInputDeviceRequestT = Model::StopInputDeviceRequest>
        Model::StopInputDeviceOutcomeCallable StopInputDeviceCallable(const StopInputDeviceRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::StopInputDevice, request);
        }

        /**
         * An Async wrapper for StopInputDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopInputDeviceRequestT = Model::StopInputDeviceRequest>
        void StopInputDeviceAsync(const StopInputDeviceRequestT& request, const StopInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::StopInputDevice, request, handler, context);
        }

        /**
         * Stops a running multiplex. If the multiplex isn't running, this action has no
         * effect.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StopMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::StopMultiplexOutcome StopMultiplex(const Model::StopMultiplexRequest& request) const;

        /**
         * A Callable wrapper for StopMultiplex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopMultiplexRequestT = Model::StopMultiplexRequest>
        Model::StopMultiplexOutcomeCallable StopMultiplexCallable(const StopMultiplexRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::StopMultiplex, request);
        }

        /**
         * An Async wrapper for StopMultiplex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopMultiplexRequestT = Model::StopMultiplexRequest>
        void StopMultiplexAsync(const StopMultiplexRequestT& request, const StopMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::StopMultiplex, request, handler, context);
        }

        /**
         * Start an input device transfer to another AWS account. After you make the
         * request, the other account must accept or reject the transfer.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TransferInputDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::TransferInputDeviceOutcome TransferInputDevice(const Model::TransferInputDeviceRequest& request) const;

        /**
         * A Callable wrapper for TransferInputDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TransferInputDeviceRequestT = Model::TransferInputDeviceRequest>
        Model::TransferInputDeviceOutcomeCallable TransferInputDeviceCallable(const TransferInputDeviceRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::TransferInputDevice, request);
        }

        /**
         * An Async wrapper for TransferInputDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TransferInputDeviceRequestT = Model::TransferInputDeviceRequest>
        void TransferInputDeviceAsync(const TransferInputDeviceRequestT& request, const TransferInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::TransferInputDevice, request, handler, context);
        }

        /**
         * Update account configuration<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateAccountConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountConfigurationOutcome UpdateAccountConfiguration(const Model::UpdateAccountConfigurationRequest& request = {}) const;

        /**
         * A Callable wrapper for UpdateAccountConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAccountConfigurationRequestT = Model::UpdateAccountConfigurationRequest>
        Model::UpdateAccountConfigurationOutcomeCallable UpdateAccountConfigurationCallable(const UpdateAccountConfigurationRequestT& request = {}) const
        {
            return SubmitCallable(&MediaLiveClient::UpdateAccountConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateAccountConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAccountConfigurationRequestT = Model::UpdateAccountConfigurationRequest>
        void UpdateAccountConfigurationAsync(const UpdateAccountConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const UpdateAccountConfigurationRequestT& request = {}) const
        {
            return SubmitAsync(&MediaLiveClient::UpdateAccountConfiguration, request, handler, context);
        }

        /**
         * Updates a channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChannelRequestT = Model::UpdateChannelRequest>
        Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const UpdateChannelRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::UpdateChannel, request);
        }

        /**
         * An Async wrapper for UpdateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChannelRequestT = Model::UpdateChannelRequest>
        void UpdateChannelAsync(const UpdateChannelRequestT& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::UpdateChannel, request, handler, context);
        }

        /**
         * Changes the class of the channel.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannelClass">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelClassOutcome UpdateChannelClass(const Model::UpdateChannelClassRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannelClass that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChannelClassRequestT = Model::UpdateChannelClassRequest>
        Model::UpdateChannelClassOutcomeCallable UpdateChannelClassCallable(const UpdateChannelClassRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::UpdateChannelClass, request);
        }

        /**
         * An Async wrapper for UpdateChannelClass that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChannelClassRequestT = Model::UpdateChannelClassRequest>
        void UpdateChannelClassAsync(const UpdateChannelClassRequestT& request, const UpdateChannelClassResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::UpdateChannelClass, request, handler, context);
        }

        /**
         * Change the settings for a ChannelPlacementGroup.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannelPlacementGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelPlacementGroupOutcome UpdateChannelPlacementGroup(const Model::UpdateChannelPlacementGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannelPlacementGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChannelPlacementGroupRequestT = Model::UpdateChannelPlacementGroupRequest>
        Model::UpdateChannelPlacementGroupOutcomeCallable UpdateChannelPlacementGroupCallable(const UpdateChannelPlacementGroupRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::UpdateChannelPlacementGroup, request);
        }

        /**
         * An Async wrapper for UpdateChannelPlacementGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChannelPlacementGroupRequestT = Model::UpdateChannelPlacementGroupRequest>
        void UpdateChannelPlacementGroupAsync(const UpdateChannelPlacementGroupRequestT& request, const UpdateChannelPlacementGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::UpdateChannelPlacementGroup, request, handler, context);
        }

        /**
         * Updates the specified cloudwatch alarm template.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateCloudWatchAlarmTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCloudWatchAlarmTemplateOutcome UpdateCloudWatchAlarmTemplate(const Model::UpdateCloudWatchAlarmTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateCloudWatchAlarmTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCloudWatchAlarmTemplateRequestT = Model::UpdateCloudWatchAlarmTemplateRequest>
        Model::UpdateCloudWatchAlarmTemplateOutcomeCallable UpdateCloudWatchAlarmTemplateCallable(const UpdateCloudWatchAlarmTemplateRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::UpdateCloudWatchAlarmTemplate, request);
        }

        /**
         * An Async wrapper for UpdateCloudWatchAlarmTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCloudWatchAlarmTemplateRequestT = Model::UpdateCloudWatchAlarmTemplateRequest>
        void UpdateCloudWatchAlarmTemplateAsync(const UpdateCloudWatchAlarmTemplateRequestT& request, const UpdateCloudWatchAlarmTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::UpdateCloudWatchAlarmTemplate, request, handler, context);
        }

        /**
         * Updates the specified cloudwatch alarm template group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateCloudWatchAlarmTemplateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCloudWatchAlarmTemplateGroupOutcome UpdateCloudWatchAlarmTemplateGroup(const Model::UpdateCloudWatchAlarmTemplateGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateCloudWatchAlarmTemplateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCloudWatchAlarmTemplateGroupRequestT = Model::UpdateCloudWatchAlarmTemplateGroupRequest>
        Model::UpdateCloudWatchAlarmTemplateGroupOutcomeCallable UpdateCloudWatchAlarmTemplateGroupCallable(const UpdateCloudWatchAlarmTemplateGroupRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::UpdateCloudWatchAlarmTemplateGroup, request);
        }

        /**
         * An Async wrapper for UpdateCloudWatchAlarmTemplateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCloudWatchAlarmTemplateGroupRequestT = Model::UpdateCloudWatchAlarmTemplateGroupRequest>
        void UpdateCloudWatchAlarmTemplateGroupAsync(const UpdateCloudWatchAlarmTemplateGroupRequestT& request, const UpdateCloudWatchAlarmTemplateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::UpdateCloudWatchAlarmTemplateGroup, request, handler, context);
        }

        /**
         * Change the settings for a Cluster.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterOutcome UpdateCluster(const Model::UpdateClusterRequest& request) const;

        /**
         * A Callable wrapper for UpdateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateClusterRequestT = Model::UpdateClusterRequest>
        Model::UpdateClusterOutcomeCallable UpdateClusterCallable(const UpdateClusterRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::UpdateCluster, request);
        }

        /**
         * An Async wrapper for UpdateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateClusterRequestT = Model::UpdateClusterRequest>
        void UpdateClusterAsync(const UpdateClusterRequestT& request, const UpdateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::UpdateCluster, request, handler, context);
        }

        /**
         * Updates the specified eventbridge rule template.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateEventBridgeRuleTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventBridgeRuleTemplateOutcome UpdateEventBridgeRuleTemplate(const Model::UpdateEventBridgeRuleTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateEventBridgeRuleTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEventBridgeRuleTemplateRequestT = Model::UpdateEventBridgeRuleTemplateRequest>
        Model::UpdateEventBridgeRuleTemplateOutcomeCallable UpdateEventBridgeRuleTemplateCallable(const UpdateEventBridgeRuleTemplateRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::UpdateEventBridgeRuleTemplate, request);
        }

        /**
         * An Async wrapper for UpdateEventBridgeRuleTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEventBridgeRuleTemplateRequestT = Model::UpdateEventBridgeRuleTemplateRequest>
        void UpdateEventBridgeRuleTemplateAsync(const UpdateEventBridgeRuleTemplateRequestT& request, const UpdateEventBridgeRuleTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::UpdateEventBridgeRuleTemplate, request, handler, context);
        }

        /**
         * Updates the specified eventbridge rule template group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateEventBridgeRuleTemplateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventBridgeRuleTemplateGroupOutcome UpdateEventBridgeRuleTemplateGroup(const Model::UpdateEventBridgeRuleTemplateGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateEventBridgeRuleTemplateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEventBridgeRuleTemplateGroupRequestT = Model::UpdateEventBridgeRuleTemplateGroupRequest>
        Model::UpdateEventBridgeRuleTemplateGroupOutcomeCallable UpdateEventBridgeRuleTemplateGroupCallable(const UpdateEventBridgeRuleTemplateGroupRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::UpdateEventBridgeRuleTemplateGroup, request);
        }

        /**
         * An Async wrapper for UpdateEventBridgeRuleTemplateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEventBridgeRuleTemplateGroupRequestT = Model::UpdateEventBridgeRuleTemplateGroupRequest>
        void UpdateEventBridgeRuleTemplateGroupAsync(const UpdateEventBridgeRuleTemplateGroupRequestT& request, const UpdateEventBridgeRuleTemplateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::UpdateEventBridgeRuleTemplateGroup, request, handler, context);
        }

        /**
         * Updates an input.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInput">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInputOutcome UpdateInput(const Model::UpdateInputRequest& request) const;

        /**
         * A Callable wrapper for UpdateInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInputRequestT = Model::UpdateInputRequest>
        Model::UpdateInputOutcomeCallable UpdateInputCallable(const UpdateInputRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::UpdateInput, request);
        }

        /**
         * An Async wrapper for UpdateInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInputRequestT = Model::UpdateInputRequest>
        void UpdateInputAsync(const UpdateInputRequestT& request, const UpdateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::UpdateInput, request, handler, context);
        }

        /**
         * Updates the parameters for the input device.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInputDeviceOutcome UpdateInputDevice(const Model::UpdateInputDeviceRequest& request) const;

        /**
         * A Callable wrapper for UpdateInputDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInputDeviceRequestT = Model::UpdateInputDeviceRequest>
        Model::UpdateInputDeviceOutcomeCallable UpdateInputDeviceCallable(const UpdateInputDeviceRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::UpdateInputDevice, request);
        }

        /**
         * An Async wrapper for UpdateInputDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInputDeviceRequestT = Model::UpdateInputDeviceRequest>
        void UpdateInputDeviceAsync(const UpdateInputDeviceRequestT& request, const UpdateInputDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::UpdateInputDevice, request, handler, context);
        }

        /**
         * Update an Input Security Group's Whilelists.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInputSecurityGroupOutcome UpdateInputSecurityGroup(const Model::UpdateInputSecurityGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateInputSecurityGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInputSecurityGroupRequestT = Model::UpdateInputSecurityGroupRequest>
        Model::UpdateInputSecurityGroupOutcomeCallable UpdateInputSecurityGroupCallable(const UpdateInputSecurityGroupRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::UpdateInputSecurityGroup, request);
        }

        /**
         * An Async wrapper for UpdateInputSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInputSecurityGroupRequestT = Model::UpdateInputSecurityGroupRequest>
        void UpdateInputSecurityGroupAsync(const UpdateInputSecurityGroupRequestT& request, const UpdateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::UpdateInputSecurityGroup, request, handler, context);
        }

        /**
         * Updates a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateMultiplex">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMultiplexOutcome UpdateMultiplex(const Model::UpdateMultiplexRequest& request) const;

        /**
         * A Callable wrapper for UpdateMultiplex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMultiplexRequestT = Model::UpdateMultiplexRequest>
        Model::UpdateMultiplexOutcomeCallable UpdateMultiplexCallable(const UpdateMultiplexRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::UpdateMultiplex, request);
        }

        /**
         * An Async wrapper for UpdateMultiplex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMultiplexRequestT = Model::UpdateMultiplexRequest>
        void UpdateMultiplexAsync(const UpdateMultiplexRequestT& request, const UpdateMultiplexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::UpdateMultiplex, request, handler, context);
        }

        /**
         * Update a program in a multiplex.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateMultiplexProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMultiplexProgramOutcome UpdateMultiplexProgram(const Model::UpdateMultiplexProgramRequest& request) const;

        /**
         * A Callable wrapper for UpdateMultiplexProgram that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMultiplexProgramRequestT = Model::UpdateMultiplexProgramRequest>
        Model::UpdateMultiplexProgramOutcomeCallable UpdateMultiplexProgramCallable(const UpdateMultiplexProgramRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::UpdateMultiplexProgram, request);
        }

        /**
         * An Async wrapper for UpdateMultiplexProgram that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMultiplexProgramRequestT = Model::UpdateMultiplexProgramRequest>
        void UpdateMultiplexProgramAsync(const UpdateMultiplexProgramRequestT& request, const UpdateMultiplexProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::UpdateMultiplexProgram, request, handler, context);
        }

        /**
         * Change the settings for a Network.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkOutcome UpdateNetwork(const Model::UpdateNetworkRequest& request) const;

        /**
         * A Callable wrapper for UpdateNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNetworkRequestT = Model::UpdateNetworkRequest>
        Model::UpdateNetworkOutcomeCallable UpdateNetworkCallable(const UpdateNetworkRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::UpdateNetwork, request);
        }

        /**
         * An Async wrapper for UpdateNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNetworkRequestT = Model::UpdateNetworkRequest>
        void UpdateNetworkAsync(const UpdateNetworkRequestT& request, const UpdateNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::UpdateNetwork, request, handler, context);
        }

        /**
         * Change the settings for a Node.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateNode">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNodeOutcome UpdateNode(const Model::UpdateNodeRequest& request) const;

        /**
         * A Callable wrapper for UpdateNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNodeRequestT = Model::UpdateNodeRequest>
        Model::UpdateNodeOutcomeCallable UpdateNodeCallable(const UpdateNodeRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::UpdateNode, request);
        }

        /**
         * An Async wrapper for UpdateNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNodeRequestT = Model::UpdateNodeRequest>
        void UpdateNodeAsync(const UpdateNodeRequestT& request, const UpdateNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::UpdateNode, request, handler, context);
        }

        /**
         * Update the state of a node.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateNodeState">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNodeStateOutcome UpdateNodeState(const Model::UpdateNodeStateRequest& request) const;

        /**
         * A Callable wrapper for UpdateNodeState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNodeStateRequestT = Model::UpdateNodeStateRequest>
        Model::UpdateNodeStateOutcomeCallable UpdateNodeStateCallable(const UpdateNodeStateRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::UpdateNodeState, request);
        }

        /**
         * An Async wrapper for UpdateNodeState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNodeStateRequestT = Model::UpdateNodeStateRequest>
        void UpdateNodeStateAsync(const UpdateNodeStateRequestT& request, const UpdateNodeStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::UpdateNodeState, request, handler, context);
        }

        /**
         * Update reservation.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateReservation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReservationOutcome UpdateReservation(const Model::UpdateReservationRequest& request) const;

        /**
         * A Callable wrapper for UpdateReservation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateReservationRequestT = Model::UpdateReservationRequest>
        Model::UpdateReservationOutcomeCallable UpdateReservationCallable(const UpdateReservationRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::UpdateReservation, request);
        }

        /**
         * An Async wrapper for UpdateReservation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateReservationRequestT = Model::UpdateReservationRequest>
        void UpdateReservationAsync(const UpdateReservationRequestT& request, const UpdateReservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::UpdateReservation, request, handler, context);
        }

        /**
         * Change some of the settings in an SdiSource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateSdiSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSdiSourceOutcome UpdateSdiSource(const Model::UpdateSdiSourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateSdiSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSdiSourceRequestT = Model::UpdateSdiSourceRequest>
        Model::UpdateSdiSourceOutcomeCallable UpdateSdiSourceCallable(const UpdateSdiSourceRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::UpdateSdiSource, request);
        }

        /**
         * An Async wrapper for UpdateSdiSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSdiSourceRequestT = Model::UpdateSdiSourceRequest>
        void UpdateSdiSourceAsync(const UpdateSdiSourceRequestT& request, const UpdateSdiSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::UpdateSdiSource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MediaLiveEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MediaLiveClient>;
      void init(const MediaLiveClientConfiguration& clientConfiguration);

      MediaLiveClientConfiguration m_clientConfiguration;
      std::shared_ptr<MediaLiveEndpointProviderBase> m_endpointProvider;
  };

} // namespace MediaLive
} // namespace Aws
