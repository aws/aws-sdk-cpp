/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/notifications/NotificationsServiceClientModel.h>

namespace Aws
{
namespace Notifications
{
  /**
   * <p>The <i>AWS User Notifications API Reference</i> provides descriptions, API
   * request parameters, and the JSON response for each of the User Notification API
   * actions.</p> <p>User Notification control APIs are currently available in US
   * East (Virginia) - <code>us-east-1</code>.</p> <p> <a
   * href="https://docs.aws.amazon.com/notifications/latest/APIReference/API_GetNotificationEvent.html">GetNotificationEvent</a>
   * and <a
   * href="https://docs.aws.amazon.com/notifications/latest/APIReference/API_ListNotificationEvents.html">ListNotificationEvents</a>
   * APIs are currently available in <a
   * href="https://docs.aws.amazon.com/notifications/latest/userguide/supported-regions.html">commercial
   * partition Regions</a> and only return notifications stored in the same Region in
   * which they're called.</p> <p>The User Notifications console can only be used in
   * US East (Virginia). Your data however, is stored in each Region chosen as a <a
   * href="https://docs.aws.amazon.com/notifications/latest/userguide/notification-hubs.html&gt;">notification
   * hub</a> in addition to US East (Virginia).</p>
   */
  class AWS_NOTIFICATIONS_API NotificationsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<NotificationsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef NotificationsClientConfiguration ClientConfigurationType;
      typedef NotificationsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NotificationsClient(const Aws::Notifications::NotificationsClientConfiguration& clientConfiguration = Aws::Notifications::NotificationsClientConfiguration(),
                            std::shared_ptr<NotificationsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NotificationsClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<NotificationsEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::Notifications::NotificationsClientConfiguration& clientConfiguration = Aws::Notifications::NotificationsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NotificationsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<NotificationsEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::Notifications::NotificationsClientConfiguration& clientConfiguration = Aws::Notifications::NotificationsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NotificationsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NotificationsClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NotificationsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~NotificationsClient();

        /**
         * <p>Associates a delivery <a
         * href="https://docs.aws.amazon.com/notifications/latest/userguide/managing-delivery-channels.html">Channel</a>
         * with a particular NotificationConfiguration. Supported Channels include AWS
         * Chatbot, the AWS Console Mobile Application, and emails
         * (notifications-contacts).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/AssociateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateChannelOutcome AssociateChannel(const Model::AssociateChannelRequest& request) const;

        /**
         * A Callable wrapper for AssociateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateChannelRequestT = Model::AssociateChannelRequest>
        Model::AssociateChannelOutcomeCallable AssociateChannelCallable(const AssociateChannelRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::AssociateChannel, request);
        }

        /**
         * An Async wrapper for AssociateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateChannelRequestT = Model::AssociateChannelRequest>
        void AssociateChannelAsync(const AssociateChannelRequestT& request, const AssociateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::AssociateChannel, request, handler, context);
        }

        /**
         * <p>Creates an <a
         * href="https://docs.aws.amazon.com/notifications/latest/userguide/glossary.html">EventRule</a>
         * that is associated with a specified Notification Configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/CreateEventRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventRuleOutcome CreateEventRule(const Model::CreateEventRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateEventRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEventRuleRequestT = Model::CreateEventRuleRequest>
        Model::CreateEventRuleOutcomeCallable CreateEventRuleCallable(const CreateEventRuleRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::CreateEventRule, request);
        }

        /**
         * An Async wrapper for CreateEventRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEventRuleRequestT = Model::CreateEventRuleRequest>
        void CreateEventRuleAsync(const CreateEventRuleRequestT& request, const CreateEventRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::CreateEventRule, request, handler, context);
        }

        /**
         * <p>Creates a new NotificationConfiguration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/CreateNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNotificationConfigurationOutcome CreateNotificationConfiguration(const Model::CreateNotificationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateNotificationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateNotificationConfigurationRequestT = Model::CreateNotificationConfigurationRequest>
        Model::CreateNotificationConfigurationOutcomeCallable CreateNotificationConfigurationCallable(const CreateNotificationConfigurationRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::CreateNotificationConfiguration, request);
        }

        /**
         * An Async wrapper for CreateNotificationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNotificationConfigurationRequestT = Model::CreateNotificationConfigurationRequest>
        void CreateNotificationConfigurationAsync(const CreateNotificationConfigurationRequestT& request, const CreateNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::CreateNotificationConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes an EventRule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/DeleteEventRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventRuleOutcome DeleteEventRule(const Model::DeleteEventRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEventRuleRequestT = Model::DeleteEventRuleRequest>
        Model::DeleteEventRuleOutcomeCallable DeleteEventRuleCallable(const DeleteEventRuleRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::DeleteEventRule, request);
        }

        /**
         * An Async wrapper for DeleteEventRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEventRuleRequestT = Model::DeleteEventRuleRequest>
        void DeleteEventRuleAsync(const DeleteEventRuleRequestT& request, const DeleteEventRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::DeleteEventRule, request, handler, context);
        }

        /**
         * <p>Deletes a NotificationConfiguration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/DeleteNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotificationConfigurationOutcome DeleteNotificationConfiguration(const Model::DeleteNotificationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteNotificationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNotificationConfigurationRequestT = Model::DeleteNotificationConfigurationRequest>
        Model::DeleteNotificationConfigurationOutcomeCallable DeleteNotificationConfigurationCallable(const DeleteNotificationConfigurationRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::DeleteNotificationConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteNotificationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNotificationConfigurationRequestT = Model::DeleteNotificationConfigurationRequest>
        void DeleteNotificationConfigurationAsync(const DeleteNotificationConfigurationRequestT& request, const DeleteNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::DeleteNotificationConfiguration, request, handler, context);
        }

        /**
         * <p>Deregisters a NotificationHub in the specified Region.</p>  <p>You
         * can't deregister the last NotificationHub in the account. NotificationEvents
         * stored in the deregistered NotificationHub are no longer be visible. Recreating
         * a new NotificationHub in the same Region restores access to those
         * NotificationEvents.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/DeregisterNotificationHub">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterNotificationHubOutcome DeregisterNotificationHub(const Model::DeregisterNotificationHubRequest& request) const;

        /**
         * A Callable wrapper for DeregisterNotificationHub that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterNotificationHubRequestT = Model::DeregisterNotificationHubRequest>
        Model::DeregisterNotificationHubOutcomeCallable DeregisterNotificationHubCallable(const DeregisterNotificationHubRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::DeregisterNotificationHub, request);
        }

        /**
         * An Async wrapper for DeregisterNotificationHub that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterNotificationHubRequestT = Model::DeregisterNotificationHubRequest>
        void DeregisterNotificationHubAsync(const DeregisterNotificationHubRequestT& request, const DeregisterNotificationHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::DeregisterNotificationHub, request, handler, context);
        }

        /**
         * <p>Disassociates a Channel from a specified NotificationConfiguration. Supported
         * Channels include AWS Chatbot, the AWS Console Mobile Application, and emails
         * (notifications-contacts).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/DisassociateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateChannelOutcome DisassociateChannel(const Model::DisassociateChannelRequest& request) const;

        /**
         * A Callable wrapper for DisassociateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateChannelRequestT = Model::DisassociateChannelRequest>
        Model::DisassociateChannelOutcomeCallable DisassociateChannelCallable(const DisassociateChannelRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::DisassociateChannel, request);
        }

        /**
         * An Async wrapper for DisassociateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateChannelRequestT = Model::DisassociateChannelRequest>
        void DisassociateChannelAsync(const DisassociateChannelRequestT& request, const DisassociateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::DisassociateChannel, request, handler, context);
        }

        /**
         * <p>Returns a specified EventRule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/GetEventRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventRuleOutcome GetEventRule(const Model::GetEventRuleRequest& request) const;

        /**
         * A Callable wrapper for GetEventRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEventRuleRequestT = Model::GetEventRuleRequest>
        Model::GetEventRuleOutcomeCallable GetEventRuleCallable(const GetEventRuleRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::GetEventRule, request);
        }

        /**
         * An Async wrapper for GetEventRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEventRuleRequestT = Model::GetEventRuleRequest>
        void GetEventRuleAsync(const GetEventRuleRequestT& request, const GetEventRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::GetEventRule, request, handler, context);
        }

        /**
         * <p>Returns a specified NotificationConfiguration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/GetNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNotificationConfigurationOutcome GetNotificationConfiguration(const Model::GetNotificationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetNotificationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetNotificationConfigurationRequestT = Model::GetNotificationConfigurationRequest>
        Model::GetNotificationConfigurationOutcomeCallable GetNotificationConfigurationCallable(const GetNotificationConfigurationRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::GetNotificationConfiguration, request);
        }

        /**
         * An Async wrapper for GetNotificationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNotificationConfigurationRequestT = Model::GetNotificationConfigurationRequest>
        void GetNotificationConfigurationAsync(const GetNotificationConfigurationRequestT& request, const GetNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::GetNotificationConfiguration, request, handler, context);
        }

        /**
         * <p>Returns a specified NotificationEvent.</p>  <p>User Notifications
         * stores notifications in the individual Regions you register as notification hubs
         * and the Region of the source event rule. GetNotificationEvent only returns
         * notifications stored in the same Region in which the action is called. User
         * Notifications doesn't backfill notifications to new Regions selected as
         * notification hubs. For this reason, we recommend that you make calls in your
         * oldest registered notification hub. For more information, see <a
         * href="https://docs.aws.amazon.com/notifications/latest/userguide/notification-hubs.html">Notification
         * hubs</a> in the <i>AWS User Notifications User Guide</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/GetNotificationEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNotificationEventOutcome GetNotificationEvent(const Model::GetNotificationEventRequest& request) const;

        /**
         * A Callable wrapper for GetNotificationEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetNotificationEventRequestT = Model::GetNotificationEventRequest>
        Model::GetNotificationEventOutcomeCallable GetNotificationEventCallable(const GetNotificationEventRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::GetNotificationEvent, request);
        }

        /**
         * An Async wrapper for GetNotificationEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNotificationEventRequestT = Model::GetNotificationEventRequest>
        void GetNotificationEventAsync(const GetNotificationEventRequestT& request, const GetNotificationEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::GetNotificationEvent, request, handler, context);
        }

        /**
         * <p>Returns a list of Channels for a NotificationConfiguration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        Model::ListChannelsOutcomeCallable ListChannelsCallable(const ListChannelsRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::ListChannels, request);
        }

        /**
         * An Async wrapper for ListChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        void ListChannelsAsync(const ListChannelsRequestT& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::ListChannels, request, handler, context);
        }

        /**
         * <p>Returns a list of EventRules according to specified filters, in reverse
         * chronological order (newest first).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/ListEventRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventRulesOutcome ListEventRules(const Model::ListEventRulesRequest& request) const;

        /**
         * A Callable wrapper for ListEventRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEventRulesRequestT = Model::ListEventRulesRequest>
        Model::ListEventRulesOutcomeCallable ListEventRulesCallable(const ListEventRulesRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::ListEventRules, request);
        }

        /**
         * An Async wrapper for ListEventRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEventRulesRequestT = Model::ListEventRulesRequest>
        void ListEventRulesAsync(const ListEventRulesRequestT& request, const ListEventRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::ListEventRules, request, handler, context);
        }

        /**
         * <p>Returns a list of abbreviated NotificationConfigurations according to
         * specified filters, in reverse chronological order (newest first).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/ListNotificationConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotificationConfigurationsOutcome ListNotificationConfigurations(const Model::ListNotificationConfigurationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListNotificationConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNotificationConfigurationsRequestT = Model::ListNotificationConfigurationsRequest>
        Model::ListNotificationConfigurationsOutcomeCallable ListNotificationConfigurationsCallable(const ListNotificationConfigurationsRequestT& request = {}) const
        {
            return SubmitCallable(&NotificationsClient::ListNotificationConfigurations, request);
        }

        /**
         * An Async wrapper for ListNotificationConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNotificationConfigurationsRequestT = Model::ListNotificationConfigurationsRequest>
        void ListNotificationConfigurationsAsync(const ListNotificationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListNotificationConfigurationsRequestT& request = {}) const
        {
            return SubmitAsync(&NotificationsClient::ListNotificationConfigurations, request, handler, context);
        }

        /**
         * <p>Returns a list of NotificationEvents according to specified filters, in
         * reverse chronological order (newest first).</p>  <p>User
         * Notifications stores notifications in the individual Regions you register as
         * notification hubs and the Region of the source event rule.
         * ListNotificationEvents only returns notifications stored in the same Region in
         * which the action is called. User Notifications doesn't backfill notifications to
         * new Regions selected as notification hubs. For this reason, we recommend that
         * you make calls in your oldest registered notification hub. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/notifications/latest/userguide/notification-hubs.html">Notification
         * hubs</a> in the <i>AWS User Notifications User Guide</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/ListNotificationEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotificationEventsOutcome ListNotificationEvents(const Model::ListNotificationEventsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListNotificationEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNotificationEventsRequestT = Model::ListNotificationEventsRequest>
        Model::ListNotificationEventsOutcomeCallable ListNotificationEventsCallable(const ListNotificationEventsRequestT& request = {}) const
        {
            return SubmitCallable(&NotificationsClient::ListNotificationEvents, request);
        }

        /**
         * An Async wrapper for ListNotificationEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNotificationEventsRequestT = Model::ListNotificationEventsRequest>
        void ListNotificationEventsAsync(const ListNotificationEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListNotificationEventsRequestT& request = {}) const
        {
            return SubmitAsync(&NotificationsClient::ListNotificationEvents, request, handler, context);
        }

        /**
         * <p>Returns a list of NotificationHubs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/ListNotificationHubs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotificationHubsOutcome ListNotificationHubs(const Model::ListNotificationHubsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListNotificationHubs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNotificationHubsRequestT = Model::ListNotificationHubsRequest>
        Model::ListNotificationHubsOutcomeCallable ListNotificationHubsCallable(const ListNotificationHubsRequestT& request = {}) const
        {
            return SubmitCallable(&NotificationsClient::ListNotificationHubs, request);
        }

        /**
         * An Async wrapper for ListNotificationHubs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNotificationHubsRequestT = Model::ListNotificationHubsRequest>
        void ListNotificationHubsAsync(const ListNotificationHubsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListNotificationHubsRequestT& request = {}) const
        {
            return SubmitAsync(&NotificationsClient::ListNotificationHubs, request, handler, context);
        }

        /**
         * <p>Returns a list of tags for a specified Amazon Resource Name (ARN).</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/tagging.html">Tagging
         * your AWS resources</a> in the <i>Tagging AWS Resources User Guide</i>.</p>
         *  <p>This is only supported for NotificationConfigurations.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Registers a NotificationHub in the specified Region.</p> <p>There is a
         * maximum of one NotificationHub per Region. You can have a maximum of 3
         * NotificationHubs at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/RegisterNotificationHub">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterNotificationHubOutcome RegisterNotificationHub(const Model::RegisterNotificationHubRequest& request) const;

        /**
         * A Callable wrapper for RegisterNotificationHub that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterNotificationHubRequestT = Model::RegisterNotificationHubRequest>
        Model::RegisterNotificationHubOutcomeCallable RegisterNotificationHubCallable(const RegisterNotificationHubRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::RegisterNotificationHub, request);
        }

        /**
         * An Async wrapper for RegisterNotificationHub that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterNotificationHubRequestT = Model::RegisterNotificationHubRequest>
        void RegisterNotificationHubAsync(const RegisterNotificationHubRequestT& request, const RegisterNotificationHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::RegisterNotificationHub, request, handler, context);
        }

        /**
         * <p>Tags the resource with a tag key and value.</p> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/tagging.html">Tagging
         * your AWS resources</a> in the <i>Tagging AWS Resources User Guide</i>.</p>
         *  <p>This is only supported for NotificationConfigurations.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Untags a resource with a specified Amazon Resource Name (ARN).</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/tagging.html">Tagging
         * your AWS resources</a> in the <i>Tagging AWS Resources User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing EventRule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/UpdateEventRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventRuleOutcome UpdateEventRule(const Model::UpdateEventRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateEventRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEventRuleRequestT = Model::UpdateEventRuleRequest>
        Model::UpdateEventRuleOutcomeCallable UpdateEventRuleCallable(const UpdateEventRuleRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::UpdateEventRule, request);
        }

        /**
         * An Async wrapper for UpdateEventRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEventRuleRequestT = Model::UpdateEventRuleRequest>
        void UpdateEventRuleAsync(const UpdateEventRuleRequestT& request, const UpdateEventRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::UpdateEventRule, request, handler, context);
        }

        /**
         * <p>Updates a NotificationConfiguration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/UpdateNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotificationConfigurationOutcome UpdateNotificationConfiguration(const Model::UpdateNotificationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateNotificationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNotificationConfigurationRequestT = Model::UpdateNotificationConfigurationRequest>
        Model::UpdateNotificationConfigurationOutcomeCallable UpdateNotificationConfigurationCallable(const UpdateNotificationConfigurationRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::UpdateNotificationConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateNotificationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNotificationConfigurationRequestT = Model::UpdateNotificationConfigurationRequest>
        void UpdateNotificationConfigurationAsync(const UpdateNotificationConfigurationRequestT& request, const UpdateNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::UpdateNotificationConfiguration, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<NotificationsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<NotificationsClient>;
      void init(const NotificationsClientConfiguration& clientConfiguration);

      NotificationsClientConfiguration m_clientConfiguration;
      std::shared_ptr<NotificationsEndpointProviderBase> m_endpointProvider;
  };

} // namespace Notifications
} // namespace Aws
