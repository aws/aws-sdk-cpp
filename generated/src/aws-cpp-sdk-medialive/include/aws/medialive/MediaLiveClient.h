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
        virtual Model::BatchDeleteOutcome BatchDelete(const Model::BatchDeleteRequest& request) const;

        /**
         * A Callable wrapper for BatchDelete that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteRequestT = Model::BatchDeleteRequest>
        Model::BatchDeleteOutcomeCallable BatchDeleteCallable(const BatchDeleteRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::BatchDelete, request);
        }

        /**
         * An Async wrapper for BatchDelete that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteRequestT = Model::BatchDeleteRequest>
        void BatchDeleteAsync(const BatchDeleteRequestT& request, const BatchDeleteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::BatchDelete, request, handler, context);
        }

        /**
         * Starts existing resources<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchStart">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchStartOutcome BatchStart(const Model::BatchStartRequest& request) const;

        /**
         * A Callable wrapper for BatchStart that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchStartRequestT = Model::BatchStartRequest>
        Model::BatchStartOutcomeCallable BatchStartCallable(const BatchStartRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::BatchStart, request);
        }

        /**
         * An Async wrapper for BatchStart that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchStartRequestT = Model::BatchStartRequest>
        void BatchStartAsync(const BatchStartRequestT& request, const BatchStartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::BatchStart, request, handler, context);
        }

        /**
         * Stops running resources<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchStop">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchStopOutcome BatchStop(const Model::BatchStopRequest& request) const;

        /**
         * A Callable wrapper for BatchStop that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchStopRequestT = Model::BatchStopRequest>
        Model::BatchStopOutcomeCallable BatchStopCallable(const BatchStopRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::BatchStop, request);
        }

        /**
         * An Async wrapper for BatchStop that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchStopRequestT = Model::BatchStopRequest>
        void BatchStopAsync(const BatchStopRequestT& request, const BatchStopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
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
        virtual Model::ClaimDeviceOutcome ClaimDevice(const Model::ClaimDeviceRequest& request) const;

        /**
         * A Callable wrapper for ClaimDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ClaimDeviceRequestT = Model::ClaimDeviceRequest>
        Model::ClaimDeviceOutcomeCallable ClaimDeviceCallable(const ClaimDeviceRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::ClaimDevice, request);
        }

        /**
         * An Async wrapper for ClaimDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ClaimDeviceRequestT = Model::ClaimDeviceRequest>
        void ClaimDeviceAsync(const ClaimDeviceRequestT& request, const ClaimDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::ClaimDevice, request, handler, context);
        }

        /**
         * Creates a new channel<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;

        /**
         * A Callable wrapper for CreateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChannelRequestT = Model::CreateChannelRequest>
        Model::CreateChannelOutcomeCallable CreateChannelCallable(const CreateChannelRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::CreateChannel, request);
        }

        /**
         * An Async wrapper for CreateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChannelRequestT = Model::CreateChannelRequest>
        void CreateChannelAsync(const CreateChannelRequestT& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::CreateChannel, request, handler, context);
        }

        /**
         * Create an input<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInput">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInputOutcome CreateInput(const Model::CreateInputRequest& request) const;

        /**
         * A Callable wrapper for CreateInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInputRequestT = Model::CreateInputRequest>
        Model::CreateInputOutcomeCallable CreateInputCallable(const CreateInputRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::CreateInput, request);
        }

        /**
         * An Async wrapper for CreateInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInputRequestT = Model::CreateInputRequest>
        void CreateInputAsync(const CreateInputRequestT& request, const CreateInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::CreateInput, request, handler, context);
        }

        /**
         * Creates a Input Security Group<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInputSecurityGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInputSecurityGroupOutcome CreateInputSecurityGroup(const Model::CreateInputSecurityGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateInputSecurityGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInputSecurityGroupRequestT = Model::CreateInputSecurityGroupRequest>
        Model::CreateInputSecurityGroupOutcomeCallable CreateInputSecurityGroupCallable(const CreateInputSecurityGroupRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::CreateInputSecurityGroup, request);
        }

        /**
         * An Async wrapper for CreateInputSecurityGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInputSecurityGroupRequestT = Model::CreateInputSecurityGroupRequest>
        void CreateInputSecurityGroupAsync(const CreateInputSecurityGroupRequestT& request, const CreateInputSecurityGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
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
        virtual Model::DescribeAccountConfigurationOutcome DescribeAccountConfiguration(const Model::DescribeAccountConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAccountConfigurationRequestT = Model::DescribeAccountConfigurationRequest>
        Model::DescribeAccountConfigurationOutcomeCallable DescribeAccountConfigurationCallable(const DescribeAccountConfigurationRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::DescribeAccountConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeAccountConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountConfigurationRequestT = Model::DescribeAccountConfigurationRequest>
        void DescribeAccountConfigurationAsync(const DescribeAccountConfigurationRequestT& request, const DescribeAccountConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
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
         * Produces list of channels that have been created<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        Model::ListChannelsOutcomeCallable ListChannelsCallable(const ListChannelsRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::ListChannels, request);
        }

        /**
         * An Async wrapper for ListChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        void ListChannelsAsync(const ListChannelsRequestT& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::ListChannels, request, handler, context);
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
        virtual Model::ListInputDevicesOutcome ListInputDevices(const Model::ListInputDevicesRequest& request) const;

        /**
         * A Callable wrapper for ListInputDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInputDevicesRequestT = Model::ListInputDevicesRequest>
        Model::ListInputDevicesOutcomeCallable ListInputDevicesCallable(const ListInputDevicesRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::ListInputDevices, request);
        }

        /**
         * An Async wrapper for ListInputDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInputDevicesRequestT = Model::ListInputDevicesRequest>
        void ListInputDevicesAsync(const ListInputDevicesRequestT& request, const ListInputDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::ListInputDevices, request, handler, context);
        }

        /**
         * Produces a list of Input Security Groups for an account<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputSecurityGroupsOutcome ListInputSecurityGroups(const Model::ListInputSecurityGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListInputSecurityGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInputSecurityGroupsRequestT = Model::ListInputSecurityGroupsRequest>
        Model::ListInputSecurityGroupsOutcomeCallable ListInputSecurityGroupsCallable(const ListInputSecurityGroupsRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::ListInputSecurityGroups, request);
        }

        /**
         * An Async wrapper for ListInputSecurityGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInputSecurityGroupsRequestT = Model::ListInputSecurityGroupsRequest>
        void ListInputSecurityGroupsAsync(const ListInputSecurityGroupsRequestT& request, const ListInputSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::ListInputSecurityGroups, request, handler, context);
        }

        /**
         * Produces list of inputs that have been created<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInputsOutcome ListInputs(const Model::ListInputsRequest& request) const;

        /**
         * A Callable wrapper for ListInputs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInputsRequestT = Model::ListInputsRequest>
        Model::ListInputsOutcomeCallable ListInputsCallable(const ListInputsRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::ListInputs, request);
        }

        /**
         * An Async wrapper for ListInputs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInputsRequestT = Model::ListInputsRequest>
        void ListInputsAsync(const ListInputsRequestT& request, const ListInputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
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
        virtual Model::ListMultiplexesOutcome ListMultiplexes(const Model::ListMultiplexesRequest& request) const;

        /**
         * A Callable wrapper for ListMultiplexes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMultiplexesRequestT = Model::ListMultiplexesRequest>
        Model::ListMultiplexesOutcomeCallable ListMultiplexesCallable(const ListMultiplexesRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::ListMultiplexes, request);
        }

        /**
         * An Async wrapper for ListMultiplexes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMultiplexesRequestT = Model::ListMultiplexesRequest>
        void ListMultiplexesAsync(const ListMultiplexesRequestT& request, const ListMultiplexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::ListMultiplexes, request, handler, context);
        }

        /**
         * List offerings available for purchase.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOfferingsOutcome ListOfferings(const Model::ListOfferingsRequest& request) const;

        /**
         * A Callable wrapper for ListOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOfferingsRequestT = Model::ListOfferingsRequest>
        Model::ListOfferingsOutcomeCallable ListOfferingsCallable(const ListOfferingsRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::ListOfferings, request);
        }

        /**
         * An Async wrapper for ListOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOfferingsRequestT = Model::ListOfferingsRequest>
        void ListOfferingsAsync(const ListOfferingsRequestT& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::ListOfferings, request, handler, context);
        }

        /**
         * List purchased reservations.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListReservations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReservationsOutcome ListReservations(const Model::ListReservationsRequest& request) const;

        /**
         * A Callable wrapper for ListReservations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReservationsRequestT = Model::ListReservationsRequest>
        Model::ListReservationsOutcomeCallable ListReservationsCallable(const ListReservationsRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::ListReservations, request);
        }

        /**
         * An Async wrapper for ListReservations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReservationsRequestT = Model::ListReservationsRequest>
        void ListReservationsAsync(const ListReservationsRequestT& request, const ListReservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaLiveClient::ListReservations, request, handler, context);
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
        virtual Model::UpdateAccountConfigurationOutcome UpdateAccountConfiguration(const Model::UpdateAccountConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccountConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAccountConfigurationRequestT = Model::UpdateAccountConfigurationRequest>
        Model::UpdateAccountConfigurationOutcomeCallable UpdateAccountConfigurationCallable(const UpdateAccountConfigurationRequestT& request) const
        {
            return SubmitCallable(&MediaLiveClient::UpdateAccountConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateAccountConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAccountConfigurationRequestT = Model::UpdateAccountConfigurationRequest>
        void UpdateAccountConfigurationAsync(const UpdateAccountConfigurationRequestT& request, const UpdateAccountConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
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


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MediaLiveEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MediaLiveClient>;
      void init(const MediaLiveClientConfiguration& clientConfiguration);

      MediaLiveClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MediaLiveEndpointProviderBase> m_endpointProvider;
  };

} // namespace MediaLive
} // namespace Aws
