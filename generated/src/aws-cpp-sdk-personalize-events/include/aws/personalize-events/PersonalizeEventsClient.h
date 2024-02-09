/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-events/PersonalizeEvents_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/personalize-events/PersonalizeEventsServiceClientModel.h>

namespace Aws
{
namespace PersonalizeEvents
{
  /**
   * <p>Amazon Personalize can consume real-time user event data, such as
   * <i>stream</i> or <i>click</i> data, and use it for model training either alone
   * or combined with historical data. For more information see <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-item-interaction-events.html">Recording
   * item interaction events</a>.</p>
   */
  class AWS_PERSONALIZEEVENTS_API PersonalizeEventsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PersonalizeEventsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef PersonalizeEventsClientConfiguration ClientConfigurationType;
      typedef PersonalizeEventsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeEventsClient(const Aws::PersonalizeEvents::PersonalizeEventsClientConfiguration& clientConfiguration = Aws::PersonalizeEvents::PersonalizeEventsClientConfiguration(),
                                std::shared_ptr<PersonalizeEventsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeEventsClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<PersonalizeEventsEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::PersonalizeEvents::PersonalizeEventsClientConfiguration& clientConfiguration = Aws::PersonalizeEvents::PersonalizeEventsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PersonalizeEventsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<PersonalizeEventsEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::PersonalizeEvents::PersonalizeEventsClientConfiguration& clientConfiguration = Aws::PersonalizeEvents::PersonalizeEventsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeEventsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PersonalizeEventsClient(const Aws::Auth::AWSCredentials& credentials,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PersonalizeEventsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PersonalizeEventsClient();

        /**
         * <p>Records action interaction event data. An <i>action interaction</i> event is
         * an interaction between a user and an <i>action</i>. For example, a user taking
         * an action, such a enrolling in a membership program or downloading your app.</p>
         * <p> For more information about recording action interactions, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-action-interaction-events.html">Recording
         * action interaction events</a>. For more information about actions in an Actions
         * dataset, see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/actions-datasets.html">Actions
         * dataset</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/PutActionInteractions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutActionInteractionsOutcome PutActionInteractions(const Model::PutActionInteractionsRequest& request) const;

        /**
         * A Callable wrapper for PutActionInteractions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutActionInteractionsRequestT = Model::PutActionInteractionsRequest>
        Model::PutActionInteractionsOutcomeCallable PutActionInteractionsCallable(const PutActionInteractionsRequestT& request) const
        {
            return SubmitCallable(&PersonalizeEventsClient::PutActionInteractions, request);
        }

        /**
         * An Async wrapper for PutActionInteractions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutActionInteractionsRequestT = Model::PutActionInteractionsRequest>
        void PutActionInteractionsAsync(const PutActionInteractionsRequestT& request, const PutActionInteractionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PersonalizeEventsClient::PutActionInteractions, request, handler, context);
        }

        /**
         * <p>Adds one or more actions to an Actions dataset. For more information see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/importing-actions.html">Importing
         * actions individually</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/PutActions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutActionsOutcome PutActions(const Model::PutActionsRequest& request) const;

        /**
         * A Callable wrapper for PutActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutActionsRequestT = Model::PutActionsRequest>
        Model::PutActionsOutcomeCallable PutActionsCallable(const PutActionsRequestT& request) const
        {
            return SubmitCallable(&PersonalizeEventsClient::PutActions, request);
        }

        /**
         * An Async wrapper for PutActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutActionsRequestT = Model::PutActionsRequest>
        void PutActionsAsync(const PutActionsRequestT& request, const PutActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PersonalizeEventsClient::PutActions, request, handler, context);
        }

        /**
         * <p>Records item interaction event data. For more information see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/recording-item-interaction-events.html">Recording
         * item interaction events</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/PutEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventsOutcome PutEvents(const Model::PutEventsRequest& request) const;

        /**
         * A Callable wrapper for PutEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutEventsRequestT = Model::PutEventsRequest>
        Model::PutEventsOutcomeCallable PutEventsCallable(const PutEventsRequestT& request) const
        {
            return SubmitCallable(&PersonalizeEventsClient::PutEvents, request);
        }

        /**
         * An Async wrapper for PutEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutEventsRequestT = Model::PutEventsRequest>
        void PutEventsAsync(const PutEventsRequestT& request, const PutEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PersonalizeEventsClient::PutEvents, request, handler, context);
        }

        /**
         * <p>Adds one or more items to an Items dataset. For more information see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/importing-items.html">Importing
         * items individually</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/PutItems">AWS
         * API Reference</a></p>
         */
        virtual Model::PutItemsOutcome PutItems(const Model::PutItemsRequest& request) const;

        /**
         * A Callable wrapper for PutItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutItemsRequestT = Model::PutItemsRequest>
        Model::PutItemsOutcomeCallable PutItemsCallable(const PutItemsRequestT& request) const
        {
            return SubmitCallable(&PersonalizeEventsClient::PutItems, request);
        }

        /**
         * An Async wrapper for PutItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutItemsRequestT = Model::PutItemsRequest>
        void PutItemsAsync(const PutItemsRequestT& request, const PutItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PersonalizeEventsClient::PutItems, request, handler, context);
        }

        /**
         * <p>Adds one or more users to a Users dataset. For more information see <a
         * href="https://docs.aws.amazon.com/personalize/latest/dg/importing-users.html">Importing
         * users individually</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/PutUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::PutUsersOutcome PutUsers(const Model::PutUsersRequest& request) const;

        /**
         * A Callable wrapper for PutUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutUsersRequestT = Model::PutUsersRequest>
        Model::PutUsersOutcomeCallable PutUsersCallable(const PutUsersRequestT& request) const
        {
            return SubmitCallable(&PersonalizeEventsClient::PutUsers, request);
        }

        /**
         * An Async wrapper for PutUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutUsersRequestT = Model::PutUsersRequest>
        void PutUsersAsync(const PutUsersRequestT& request, const PutUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PersonalizeEventsClient::PutUsers, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PersonalizeEventsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PersonalizeEventsClient>;
      void init(const PersonalizeEventsClientConfiguration& clientConfiguration);

      PersonalizeEventsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PersonalizeEventsEndpointProviderBase> m_endpointProvider;
  };

} // namespace PersonalizeEvents
} // namespace Aws
