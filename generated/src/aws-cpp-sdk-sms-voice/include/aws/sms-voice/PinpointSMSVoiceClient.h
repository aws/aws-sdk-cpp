/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sms-voice/PinpointSMSVoiceServiceClientModel.h>

namespace Aws
{
namespace PinpointSMSVoice
{
  /**
   * Pinpoint SMS and Voice Messaging public facing APIs
   */
  class AWS_PINPOINTSMSVOICE_API PinpointSMSVoiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PinpointSMSVoiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef PinpointSMSVoiceClientConfiguration ClientConfigurationType;
      typedef PinpointSMSVoiceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointSMSVoiceClient(const Aws::PinpointSMSVoice::PinpointSMSVoiceClientConfiguration& clientConfiguration = Aws::PinpointSMSVoice::PinpointSMSVoiceClientConfiguration(),
                               std::shared_ptr<PinpointSMSVoiceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointSMSVoiceClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<PinpointSMSVoiceEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::PinpointSMSVoice::PinpointSMSVoiceClientConfiguration& clientConfiguration = Aws::PinpointSMSVoice::PinpointSMSVoiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PinpointSMSVoiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<PinpointSMSVoiceEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::PinpointSMSVoice::PinpointSMSVoiceClientConfiguration& clientConfiguration = Aws::PinpointSMSVoice::PinpointSMSVoiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointSMSVoiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointSMSVoiceClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PinpointSMSVoiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PinpointSMSVoiceClient();

        /**
         * Create a new configuration set. After you create the configuration set, you can
         * add one or more event destinations to it.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/CreateConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationSetOutcome CreateConfigurationSet(const Model::CreateConfigurationSetRequest& request) const;

        /**
         * A Callable wrapper for CreateConfigurationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConfigurationSetRequestT = Model::CreateConfigurationSetRequest>
        Model::CreateConfigurationSetOutcomeCallable CreateConfigurationSetCallable(const CreateConfigurationSetRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceClient::CreateConfigurationSet, request);
        }

        /**
         * An Async wrapper for CreateConfigurationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfigurationSetRequestT = Model::CreateConfigurationSetRequest>
        void CreateConfigurationSetAsync(const CreateConfigurationSetRequestT& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceClient::CreateConfigurationSet, request, handler, context);
        }

        /**
         * Create a new event destination in a configuration set.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/CreateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationSetEventDestinationOutcome CreateConfigurationSetEventDestination(const Model::CreateConfigurationSetEventDestinationRequest& request) const;

        /**
         * A Callable wrapper for CreateConfigurationSetEventDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConfigurationSetEventDestinationRequestT = Model::CreateConfigurationSetEventDestinationRequest>
        Model::CreateConfigurationSetEventDestinationOutcomeCallable CreateConfigurationSetEventDestinationCallable(const CreateConfigurationSetEventDestinationRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceClient::CreateConfigurationSetEventDestination, request);
        }

        /**
         * An Async wrapper for CreateConfigurationSetEventDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfigurationSetEventDestinationRequestT = Model::CreateConfigurationSetEventDestinationRequest>
        void CreateConfigurationSetEventDestinationAsync(const CreateConfigurationSetEventDestinationRequestT& request, const CreateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceClient::CreateConfigurationSetEventDestination, request, handler, context);
        }

        /**
         * Deletes an existing configuration set.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/DeleteConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationSetOutcome DeleteConfigurationSet(const Model::DeleteConfigurationSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfigurationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfigurationSetRequestT = Model::DeleteConfigurationSetRequest>
        Model::DeleteConfigurationSetOutcomeCallable DeleteConfigurationSetCallable(const DeleteConfigurationSetRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceClient::DeleteConfigurationSet, request);
        }

        /**
         * An Async wrapper for DeleteConfigurationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfigurationSetRequestT = Model::DeleteConfigurationSetRequest>
        void DeleteConfigurationSetAsync(const DeleteConfigurationSetRequestT& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceClient::DeleteConfigurationSet, request, handler, context);
        }

        /**
         * Deletes an event destination in a configuration set.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/DeleteConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationSetEventDestinationOutcome DeleteConfigurationSetEventDestination(const Model::DeleteConfigurationSetEventDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfigurationSetEventDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfigurationSetEventDestinationRequestT = Model::DeleteConfigurationSetEventDestinationRequest>
        Model::DeleteConfigurationSetEventDestinationOutcomeCallable DeleteConfigurationSetEventDestinationCallable(const DeleteConfigurationSetEventDestinationRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceClient::DeleteConfigurationSetEventDestination, request);
        }

        /**
         * An Async wrapper for DeleteConfigurationSetEventDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfigurationSetEventDestinationRequestT = Model::DeleteConfigurationSetEventDestinationRequest>
        void DeleteConfigurationSetEventDestinationAsync(const DeleteConfigurationSetEventDestinationRequestT& request, const DeleteConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceClient::DeleteConfigurationSetEventDestination, request, handler, context);
        }

        /**
         * Obtain information about an event destination, including the types of events it
         * reports, the Amazon Resource Name (ARN) of the destination, and the name of the
         * event destination.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/GetConfigurationSetEventDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigurationSetEventDestinationsOutcome GetConfigurationSetEventDestinations(const Model::GetConfigurationSetEventDestinationsRequest& request) const;

        /**
         * A Callable wrapper for GetConfigurationSetEventDestinations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConfigurationSetEventDestinationsRequestT = Model::GetConfigurationSetEventDestinationsRequest>
        Model::GetConfigurationSetEventDestinationsOutcomeCallable GetConfigurationSetEventDestinationsCallable(const GetConfigurationSetEventDestinationsRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceClient::GetConfigurationSetEventDestinations, request);
        }

        /**
         * An Async wrapper for GetConfigurationSetEventDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConfigurationSetEventDestinationsRequestT = Model::GetConfigurationSetEventDestinationsRequest>
        void GetConfigurationSetEventDestinationsAsync(const GetConfigurationSetEventDestinationsRequestT& request, const GetConfigurationSetEventDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceClient::GetConfigurationSetEventDestinations, request, handler, context);
        }

        /**
         * List all of the configuration sets associated with your Amazon Pinpoint account
         * in the current region.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/ListConfigurationSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationSetsOutcome ListConfigurationSets(const Model::ListConfigurationSetsRequest& request) const;

        /**
         * A Callable wrapper for ListConfigurationSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConfigurationSetsRequestT = Model::ListConfigurationSetsRequest>
        Model::ListConfigurationSetsOutcomeCallable ListConfigurationSetsCallable(const ListConfigurationSetsRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceClient::ListConfigurationSets, request);
        }

        /**
         * An Async wrapper for ListConfigurationSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConfigurationSetsRequestT = Model::ListConfigurationSetsRequest>
        void ListConfigurationSetsAsync(const ListConfigurationSetsRequestT& request, const ListConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceClient::ListConfigurationSets, request, handler, context);
        }

        /**
         * Create a new voice message and send it to a recipient's phone number.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/SendVoiceMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::SendVoiceMessageOutcome SendVoiceMessage(const Model::SendVoiceMessageRequest& request) const;

        /**
         * A Callable wrapper for SendVoiceMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendVoiceMessageRequestT = Model::SendVoiceMessageRequest>
        Model::SendVoiceMessageOutcomeCallable SendVoiceMessageCallable(const SendVoiceMessageRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceClient::SendVoiceMessage, request);
        }

        /**
         * An Async wrapper for SendVoiceMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendVoiceMessageRequestT = Model::SendVoiceMessageRequest>
        void SendVoiceMessageAsync(const SendVoiceMessageRequestT& request, const SendVoiceMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceClient::SendVoiceMessage, request, handler, context);
        }

        /**
         * Update an event destination in a configuration set. An event destination is a
         * location that you publish information about your voice calls to. For example,
         * you can log an event to an Amazon CloudWatch destination when a call
         * fails.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/UpdateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationSetEventDestinationOutcome UpdateConfigurationSetEventDestination(const Model::UpdateConfigurationSetEventDestinationRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfigurationSetEventDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConfigurationSetEventDestinationRequestT = Model::UpdateConfigurationSetEventDestinationRequest>
        Model::UpdateConfigurationSetEventDestinationOutcomeCallable UpdateConfigurationSetEventDestinationCallable(const UpdateConfigurationSetEventDestinationRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceClient::UpdateConfigurationSetEventDestination, request);
        }

        /**
         * An Async wrapper for UpdateConfigurationSetEventDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConfigurationSetEventDestinationRequestT = Model::UpdateConfigurationSetEventDestinationRequest>
        void UpdateConfigurationSetEventDestinationAsync(const UpdateConfigurationSetEventDestinationRequestT& request, const UpdateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceClient::UpdateConfigurationSetEventDestination, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PinpointSMSVoiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PinpointSMSVoiceClient>;
      void init(const PinpointSMSVoiceClientConfiguration& clientConfiguration);

      PinpointSMSVoiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PinpointSMSVoiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace PinpointSMSVoice
} // namespace Aws
