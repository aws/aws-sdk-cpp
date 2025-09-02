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
   * <p>The <i>User Notifications API Reference</i> provides descriptions, API
   * request parameters, and the JSON response for each of the User Notifications API
   * actions.</p> <p>User Notification control plane APIs are currently available in
   * US East (Virginia) - <code>us-east-1</code>.</p> <p> <a
   * href="https://docs.aws.amazon.com/notifications/latest/APIReference/API_GetNotificationEvent.html">GetNotificationEvent</a>
   * and <a
   * href="https://docs.aws.amazon.com/notifications/latest/APIReference/API_ListNotificationEvents.html">ListNotificationEvents</a>
   * APIs are currently available in <a
   * href="https://docs.aws.amazon.com/notifications/latest/userguide/supported-regions.html">commercial
   * partition Regions</a> and only return notifications stored in the same Region in
   * which they're called.</p> <p>The User Notifications console can only be used in
   * US East (Virginia). Your data however, is stored in each Region chosen as a <a
   * href="https://docs.aws.amazon.com/notifications/latest/userguide/notification-hubs.html">notification
   * hub</a> in addition to US East (Virginia).</p>  <p>For information about
   * descriptions, API request parameters, and the JSON response for email contact
   * related API actions, see the <a
   * href="https://docs.aws.amazon.com/notificationscontacts/latest/APIReference/Welcome.html">User
   * Notifications Contacts API Reference Guide</a>.</p> 
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
         * with a particular <code>NotificationConfiguration</code>. Supported Channels
         * include Amazon Q Developer in chat applications, the Console Mobile Application,
         * and emails (notifications-contacts).</p><p><h3>See Also:</h3>   <a
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
         * <p>Associates an Account Contact with a particular
         * <code>ManagedNotificationConfiguration</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/AssociateManagedNotificationAccountContact">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateManagedNotificationAccountContactOutcome AssociateManagedNotificationAccountContact(const Model::AssociateManagedNotificationAccountContactRequest& request) const;

        /**
         * A Callable wrapper for AssociateManagedNotificationAccountContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateManagedNotificationAccountContactRequestT = Model::AssociateManagedNotificationAccountContactRequest>
        Model::AssociateManagedNotificationAccountContactOutcomeCallable AssociateManagedNotificationAccountContactCallable(const AssociateManagedNotificationAccountContactRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::AssociateManagedNotificationAccountContact, request);
        }

        /**
         * An Async wrapper for AssociateManagedNotificationAccountContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateManagedNotificationAccountContactRequestT = Model::AssociateManagedNotificationAccountContactRequest>
        void AssociateManagedNotificationAccountContactAsync(const AssociateManagedNotificationAccountContactRequestT& request, const AssociateManagedNotificationAccountContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::AssociateManagedNotificationAccountContact, request, handler, context);
        }

        /**
         * <p>Associates an additional Channel with a particular
         * <code>ManagedNotificationConfiguration</code>.</p> <p>Supported Channels include
         * Amazon Q Developer in chat applications, the Console Mobile Application, and
         * emails (notifications-contacts).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/AssociateManagedNotificationAdditionalChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateManagedNotificationAdditionalChannelOutcome AssociateManagedNotificationAdditionalChannel(const Model::AssociateManagedNotificationAdditionalChannelRequest& request) const;

        /**
         * A Callable wrapper for AssociateManagedNotificationAdditionalChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateManagedNotificationAdditionalChannelRequestT = Model::AssociateManagedNotificationAdditionalChannelRequest>
        Model::AssociateManagedNotificationAdditionalChannelOutcomeCallable AssociateManagedNotificationAdditionalChannelCallable(const AssociateManagedNotificationAdditionalChannelRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::AssociateManagedNotificationAdditionalChannel, request);
        }

        /**
         * An Async wrapper for AssociateManagedNotificationAdditionalChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateManagedNotificationAdditionalChannelRequestT = Model::AssociateManagedNotificationAdditionalChannelRequest>
        void AssociateManagedNotificationAdditionalChannelAsync(const AssociateManagedNotificationAdditionalChannelRequestT& request, const AssociateManagedNotificationAdditionalChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::AssociateManagedNotificationAdditionalChannel, request, handler, context);
        }

        /**
         * <p>Associates an organizational unit with a notification
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/AssociateOrganizationalUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateOrganizationalUnitOutcome AssociateOrganizationalUnit(const Model::AssociateOrganizationalUnitRequest& request) const;

        /**
         * A Callable wrapper for AssociateOrganizationalUnit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateOrganizationalUnitRequestT = Model::AssociateOrganizationalUnitRequest>
        Model::AssociateOrganizationalUnitOutcomeCallable AssociateOrganizationalUnitCallable(const AssociateOrganizationalUnitRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::AssociateOrganizationalUnit, request);
        }

        /**
         * An Async wrapper for AssociateOrganizationalUnit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateOrganizationalUnitRequestT = Model::AssociateOrganizationalUnitRequest>
        void AssociateOrganizationalUnitAsync(const AssociateOrganizationalUnitRequestT& request, const AssociateOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::AssociateOrganizationalUnit, request, handler, context);
        }

        /**
         * <p>Creates an <a
         * href="https://docs.aws.amazon.com/notifications/latest/userguide/glossary.html">
         * <code>EventRule</code> </a> that is associated with a specified
         * <code>NotificationConfiguration</code>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Creates a new <code>NotificationConfiguration</code>.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Deletes an <code>EventRule</code>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Deletes a <code>NotificationConfiguration</code>.</p><p><h3>See Also:</h3>  
         * <a
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
         * <p>Deregisters a <code>NotificationConfiguration</code> in the specified
         * Region.</p>  <p>You can't deregister the last <code>NotificationHub</code>
         * in the account. <code>NotificationEvents</code> stored in the deregistered
         * <code>NotificationConfiguration</code> are no longer be visible. Recreating a
         * new <code>NotificationConfiguration</code> in the same Region restores access to
         * those <code>NotificationEvents</code>.</p> <p><h3>See Also:</h3>   <a
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
         * <p>Disables service trust between User Notifications and Amazon Web Services
         * Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/DisableNotificationsAccessForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableNotificationsAccessForOrganizationOutcome DisableNotificationsAccessForOrganization(const Model::DisableNotificationsAccessForOrganizationRequest& request = {}) const;

        /**
         * A Callable wrapper for DisableNotificationsAccessForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableNotificationsAccessForOrganizationRequestT = Model::DisableNotificationsAccessForOrganizationRequest>
        Model::DisableNotificationsAccessForOrganizationOutcomeCallable DisableNotificationsAccessForOrganizationCallable(const DisableNotificationsAccessForOrganizationRequestT& request = {}) const
        {
            return SubmitCallable(&NotificationsClient::DisableNotificationsAccessForOrganization, request);
        }

        /**
         * An Async wrapper for DisableNotificationsAccessForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableNotificationsAccessForOrganizationRequestT = Model::DisableNotificationsAccessForOrganizationRequest>
        void DisableNotificationsAccessForOrganizationAsync(const DisableNotificationsAccessForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DisableNotificationsAccessForOrganizationRequestT& request = {}) const
        {
            return SubmitAsync(&NotificationsClient::DisableNotificationsAccessForOrganization, request, handler, context);
        }

        /**
         * <p>Disassociates a Channel from a specified
         * <code>NotificationConfiguration</code>. Supported Channels include Amazon Q
         * Developer in chat applications, the Console Mobile Application, and emails
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
         * <p>Disassociates an Account Contact with a particular
         * <code>ManagedNotificationConfiguration</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/DisassociateManagedNotificationAccountContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateManagedNotificationAccountContactOutcome DisassociateManagedNotificationAccountContact(const Model::DisassociateManagedNotificationAccountContactRequest& request) const;

        /**
         * A Callable wrapper for DisassociateManagedNotificationAccountContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateManagedNotificationAccountContactRequestT = Model::DisassociateManagedNotificationAccountContactRequest>
        Model::DisassociateManagedNotificationAccountContactOutcomeCallable DisassociateManagedNotificationAccountContactCallable(const DisassociateManagedNotificationAccountContactRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::DisassociateManagedNotificationAccountContact, request);
        }

        /**
         * An Async wrapper for DisassociateManagedNotificationAccountContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateManagedNotificationAccountContactRequestT = Model::DisassociateManagedNotificationAccountContactRequest>
        void DisassociateManagedNotificationAccountContactAsync(const DisassociateManagedNotificationAccountContactRequestT& request, const DisassociateManagedNotificationAccountContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::DisassociateManagedNotificationAccountContact, request, handler, context);
        }

        /**
         * <p>Disassociates an additional Channel from a particular
         * <code>ManagedNotificationConfiguration</code>.</p> <p>Supported Channels include
         * Amazon Q Developer in chat applications, the Console Mobile Application, and
         * emails (notifications-contacts).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/DisassociateManagedNotificationAdditionalChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateManagedNotificationAdditionalChannelOutcome DisassociateManagedNotificationAdditionalChannel(const Model::DisassociateManagedNotificationAdditionalChannelRequest& request) const;

        /**
         * A Callable wrapper for DisassociateManagedNotificationAdditionalChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateManagedNotificationAdditionalChannelRequestT = Model::DisassociateManagedNotificationAdditionalChannelRequest>
        Model::DisassociateManagedNotificationAdditionalChannelOutcomeCallable DisassociateManagedNotificationAdditionalChannelCallable(const DisassociateManagedNotificationAdditionalChannelRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::DisassociateManagedNotificationAdditionalChannel, request);
        }

        /**
         * An Async wrapper for DisassociateManagedNotificationAdditionalChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateManagedNotificationAdditionalChannelRequestT = Model::DisassociateManagedNotificationAdditionalChannelRequest>
        void DisassociateManagedNotificationAdditionalChannelAsync(const DisassociateManagedNotificationAdditionalChannelRequestT& request, const DisassociateManagedNotificationAdditionalChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::DisassociateManagedNotificationAdditionalChannel, request, handler, context);
        }

        /**
         * <p>Removes the association between an organizational unit and a notification
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/DisassociateOrganizationalUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateOrganizationalUnitOutcome DisassociateOrganizationalUnit(const Model::DisassociateOrganizationalUnitRequest& request) const;

        /**
         * A Callable wrapper for DisassociateOrganizationalUnit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateOrganizationalUnitRequestT = Model::DisassociateOrganizationalUnitRequest>
        Model::DisassociateOrganizationalUnitOutcomeCallable DisassociateOrganizationalUnitCallable(const DisassociateOrganizationalUnitRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::DisassociateOrganizationalUnit, request);
        }

        /**
         * An Async wrapper for DisassociateOrganizationalUnit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateOrganizationalUnitRequestT = Model::DisassociateOrganizationalUnitRequest>
        void DisassociateOrganizationalUnitAsync(const DisassociateOrganizationalUnitRequestT& request, const DisassociateOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::DisassociateOrganizationalUnit, request, handler, context);
        }

        /**
         * <p>Enables service trust between User Notifications and Amazon Web Services
         * Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/EnableNotificationsAccessForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableNotificationsAccessForOrganizationOutcome EnableNotificationsAccessForOrganization(const Model::EnableNotificationsAccessForOrganizationRequest& request = {}) const;

        /**
         * A Callable wrapper for EnableNotificationsAccessForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableNotificationsAccessForOrganizationRequestT = Model::EnableNotificationsAccessForOrganizationRequest>
        Model::EnableNotificationsAccessForOrganizationOutcomeCallable EnableNotificationsAccessForOrganizationCallable(const EnableNotificationsAccessForOrganizationRequestT& request = {}) const
        {
            return SubmitCallable(&NotificationsClient::EnableNotificationsAccessForOrganization, request);
        }

        /**
         * An Async wrapper for EnableNotificationsAccessForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableNotificationsAccessForOrganizationRequestT = Model::EnableNotificationsAccessForOrganizationRequest>
        void EnableNotificationsAccessForOrganizationAsync(const EnableNotificationsAccessForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const EnableNotificationsAccessForOrganizationRequestT& request = {}) const
        {
            return SubmitAsync(&NotificationsClient::EnableNotificationsAccessForOrganization, request, handler, context);
        }

        /**
         * <p>Returns a specified <code>EventRule</code>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Returns the child event of a specific given
         * <code>ManagedNotificationEvent</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/GetManagedNotificationChildEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetManagedNotificationChildEventOutcome GetManagedNotificationChildEvent(const Model::GetManagedNotificationChildEventRequest& request) const;

        /**
         * A Callable wrapper for GetManagedNotificationChildEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetManagedNotificationChildEventRequestT = Model::GetManagedNotificationChildEventRequest>
        Model::GetManagedNotificationChildEventOutcomeCallable GetManagedNotificationChildEventCallable(const GetManagedNotificationChildEventRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::GetManagedNotificationChildEvent, request);
        }

        /**
         * An Async wrapper for GetManagedNotificationChildEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetManagedNotificationChildEventRequestT = Model::GetManagedNotificationChildEventRequest>
        void GetManagedNotificationChildEventAsync(const GetManagedNotificationChildEventRequestT& request, const GetManagedNotificationChildEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::GetManagedNotificationChildEvent, request, handler, context);
        }

        /**
         * <p>Returns a specified
         * <code>ManagedNotificationConfiguration</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/GetManagedNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetManagedNotificationConfigurationOutcome GetManagedNotificationConfiguration(const Model::GetManagedNotificationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetManagedNotificationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetManagedNotificationConfigurationRequestT = Model::GetManagedNotificationConfigurationRequest>
        Model::GetManagedNotificationConfigurationOutcomeCallable GetManagedNotificationConfigurationCallable(const GetManagedNotificationConfigurationRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::GetManagedNotificationConfiguration, request);
        }

        /**
         * An Async wrapper for GetManagedNotificationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetManagedNotificationConfigurationRequestT = Model::GetManagedNotificationConfigurationRequest>
        void GetManagedNotificationConfigurationAsync(const GetManagedNotificationConfigurationRequestT& request, const GetManagedNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::GetManagedNotificationConfiguration, request, handler, context);
        }

        /**
         * <p>Returns a specified <code>ManagedNotificationEvent</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/GetManagedNotificationEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetManagedNotificationEventOutcome GetManagedNotificationEvent(const Model::GetManagedNotificationEventRequest& request) const;

        /**
         * A Callable wrapper for GetManagedNotificationEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetManagedNotificationEventRequestT = Model::GetManagedNotificationEventRequest>
        Model::GetManagedNotificationEventOutcomeCallable GetManagedNotificationEventCallable(const GetManagedNotificationEventRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::GetManagedNotificationEvent, request);
        }

        /**
         * An Async wrapper for GetManagedNotificationEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetManagedNotificationEventRequestT = Model::GetManagedNotificationEventRequest>
        void GetManagedNotificationEventAsync(const GetManagedNotificationEventRequestT& request, const GetManagedNotificationEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::GetManagedNotificationEvent, request, handler, context);
        }

        /**
         * <p>Returns a specified <code>NotificationConfiguration</code>.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Returns a specified <code>NotificationEvent</code>.</p>  <p>User
         * Notifications stores notifications in the individual Regions you register as
         * notification hubs and the Region of the source event rule.
         * <code>GetNotificationEvent</code> only returns notifications stored in the same
         * Region in which the action is called. User Notifications doesn't backfill
         * notifications to new Regions selected as notification hubs. For this reason, we
         * recommend that you make calls in your oldest registered notification hub. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/notifications/latest/userguide/notification-hubs.html">Notification
         * hubs</a> in the <i>Amazon Web Services User Notifications User Guide</i>.</p>
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
         * <p>Returns the AccessStatus of Service Trust Enablement for User Notifications
         * and Amazon Web Services Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/GetNotificationsAccessForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNotificationsAccessForOrganizationOutcome GetNotificationsAccessForOrganization(const Model::GetNotificationsAccessForOrganizationRequest& request = {}) const;

        /**
         * A Callable wrapper for GetNotificationsAccessForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetNotificationsAccessForOrganizationRequestT = Model::GetNotificationsAccessForOrganizationRequest>
        Model::GetNotificationsAccessForOrganizationOutcomeCallable GetNotificationsAccessForOrganizationCallable(const GetNotificationsAccessForOrganizationRequestT& request = {}) const
        {
            return SubmitCallable(&NotificationsClient::GetNotificationsAccessForOrganization, request);
        }

        /**
         * An Async wrapper for GetNotificationsAccessForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNotificationsAccessForOrganizationRequestT = Model::GetNotificationsAccessForOrganizationRequest>
        void GetNotificationsAccessForOrganizationAsync(const GetNotificationsAccessForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetNotificationsAccessForOrganizationRequestT& request = {}) const
        {
            return SubmitAsync(&NotificationsClient::GetNotificationsAccessForOrganization, request, handler, context);
        }

        /**
         * <p>Returns a list of Channels for a
         * <code>NotificationConfiguration</code>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Returns a list of <code>EventRules</code> according to specified filters, in
         * reverse chronological order (newest first).</p><p><h3>See Also:</h3>   <a
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
         * <p>Returns a list of Account contacts and Channels associated with a
         * <code>ManagedNotificationConfiguration</code>, in paginated
         * format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/ListManagedNotificationChannelAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedNotificationChannelAssociationsOutcome ListManagedNotificationChannelAssociations(const Model::ListManagedNotificationChannelAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListManagedNotificationChannelAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListManagedNotificationChannelAssociationsRequestT = Model::ListManagedNotificationChannelAssociationsRequest>
        Model::ListManagedNotificationChannelAssociationsOutcomeCallable ListManagedNotificationChannelAssociationsCallable(const ListManagedNotificationChannelAssociationsRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::ListManagedNotificationChannelAssociations, request);
        }

        /**
         * An Async wrapper for ListManagedNotificationChannelAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListManagedNotificationChannelAssociationsRequestT = Model::ListManagedNotificationChannelAssociationsRequest>
        void ListManagedNotificationChannelAssociationsAsync(const ListManagedNotificationChannelAssociationsRequestT& request, const ListManagedNotificationChannelAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::ListManagedNotificationChannelAssociations, request, handler, context);
        }

        /**
         * <p>Returns a list of <code>ManagedNotificationChildEvents</code> for a specified
         * aggregate <code>ManagedNotificationEvent</code>, ordered by creation time in
         * reverse chronological order (newest first).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/ListManagedNotificationChildEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedNotificationChildEventsOutcome ListManagedNotificationChildEvents(const Model::ListManagedNotificationChildEventsRequest& request) const;

        /**
         * A Callable wrapper for ListManagedNotificationChildEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListManagedNotificationChildEventsRequestT = Model::ListManagedNotificationChildEventsRequest>
        Model::ListManagedNotificationChildEventsOutcomeCallable ListManagedNotificationChildEventsCallable(const ListManagedNotificationChildEventsRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::ListManagedNotificationChildEvents, request);
        }

        /**
         * An Async wrapper for ListManagedNotificationChildEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListManagedNotificationChildEventsRequestT = Model::ListManagedNotificationChildEventsRequest>
        void ListManagedNotificationChildEventsAsync(const ListManagedNotificationChildEventsRequestT& request, const ListManagedNotificationChildEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::ListManagedNotificationChildEvents, request, handler, context);
        }

        /**
         * <p>Returns a list of Managed Notification Configurations according to specified
         * filters, ordered by creation time in reverse chronological order (newest
         * first).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/ListManagedNotificationConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedNotificationConfigurationsOutcome ListManagedNotificationConfigurations(const Model::ListManagedNotificationConfigurationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListManagedNotificationConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListManagedNotificationConfigurationsRequestT = Model::ListManagedNotificationConfigurationsRequest>
        Model::ListManagedNotificationConfigurationsOutcomeCallable ListManagedNotificationConfigurationsCallable(const ListManagedNotificationConfigurationsRequestT& request = {}) const
        {
            return SubmitCallable(&NotificationsClient::ListManagedNotificationConfigurations, request);
        }

        /**
         * An Async wrapper for ListManagedNotificationConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListManagedNotificationConfigurationsRequestT = Model::ListManagedNotificationConfigurationsRequest>
        void ListManagedNotificationConfigurationsAsync(const ListManagedNotificationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListManagedNotificationConfigurationsRequestT& request = {}) const
        {
            return SubmitAsync(&NotificationsClient::ListManagedNotificationConfigurations, request, handler, context);
        }

        /**
         * <p>Returns a list of Managed Notification Events according to specified filters,
         * ordered by creation time in reverse chronological order (newest
         * first).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/ListManagedNotificationEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedNotificationEventsOutcome ListManagedNotificationEvents(const Model::ListManagedNotificationEventsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListManagedNotificationEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListManagedNotificationEventsRequestT = Model::ListManagedNotificationEventsRequest>
        Model::ListManagedNotificationEventsOutcomeCallable ListManagedNotificationEventsCallable(const ListManagedNotificationEventsRequestT& request = {}) const
        {
            return SubmitCallable(&NotificationsClient::ListManagedNotificationEvents, request);
        }

        /**
         * An Async wrapper for ListManagedNotificationEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListManagedNotificationEventsRequestT = Model::ListManagedNotificationEventsRequest>
        void ListManagedNotificationEventsAsync(const ListManagedNotificationEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListManagedNotificationEventsRequestT& request = {}) const
        {
            return SubmitAsync(&NotificationsClient::ListManagedNotificationEvents, request, handler, context);
        }

        /**
         * <p>Returns a list of member accounts associated with a notification
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/ListMemberAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMemberAccountsOutcome ListMemberAccounts(const Model::ListMemberAccountsRequest& request) const;

        /**
         * A Callable wrapper for ListMemberAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMemberAccountsRequestT = Model::ListMemberAccountsRequest>
        Model::ListMemberAccountsOutcomeCallable ListMemberAccountsCallable(const ListMemberAccountsRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::ListMemberAccounts, request);
        }

        /**
         * An Async wrapper for ListMemberAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMemberAccountsRequestT = Model::ListMemberAccountsRequest>
        void ListMemberAccountsAsync(const ListMemberAccountsRequestT& request, const ListMemberAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::ListMemberAccounts, request, handler, context);
        }

        /**
         * <p>Returns a list of abbreviated <code>NotificationConfigurations</code>
         * according to specified filters, in reverse chronological order (newest
         * first).</p><p><h3>See Also:</h3>   <a
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
         * <p>Returns a list of <code>NotificationEvents</code> according to specified
         * filters, in reverse chronological order (newest first).</p>  <p>User
         * Notifications stores notifications in the individual Regions you register as
         * notification hubs and the Region of the source event rule.
         * ListNotificationEvents only returns notifications stored in the same Region in
         * which the action is called. User Notifications doesn't backfill notifications to
         * new Regions selected as notification hubs. For this reason, we recommend that
         * you make calls in your oldest registered notification hub. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/notifications/latest/userguide/notification-hubs.html">Notification
         * hubs</a> in the <i>Amazon Web Services User Notifications User Guide</i>.</p>
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
         * <p>Returns a list of <code>NotificationHubs</code>.</p><p><h3>See Also:</h3>  
         * <a
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
         * <p>Returns a list of organizational units associated with a notification
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/ListOrganizationalUnits">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationalUnitsOutcome ListOrganizationalUnits(const Model::ListOrganizationalUnitsRequest& request) const;

        /**
         * A Callable wrapper for ListOrganizationalUnits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOrganizationalUnitsRequestT = Model::ListOrganizationalUnitsRequest>
        Model::ListOrganizationalUnitsOutcomeCallable ListOrganizationalUnitsCallable(const ListOrganizationalUnitsRequestT& request) const
        {
            return SubmitCallable(&NotificationsClient::ListOrganizationalUnits, request);
        }

        /**
         * An Async wrapper for ListOrganizationalUnits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOrganizationalUnitsRequestT = Model::ListOrganizationalUnitsRequest>
        void ListOrganizationalUnitsAsync(const ListOrganizationalUnitsRequestT& request, const ListOrganizationalUnitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsClient::ListOrganizationalUnits, request, handler, context);
        }

        /**
         * <p>Returns a list of tags for a specified Amazon Resource Name (ARN).</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/tagging.html">Tagging
         * your Amazon Web Services resources</a> in the <i>Tagging Amazon Web Services
         * Resources User Guide</i>.</p>  <p>This is only supported for
         * <code>NotificationConfigurations</code>.</p> <p><h3>See Also:</h3>   <a
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
         * <p>Registers a <code>NotificationConfiguration</code> in the specified
         * Region.</p> <p>There is a maximum of one <code>NotificationConfiguration</code>
         * per Region. You can have a maximum of 3 <code>NotificationHub</code> resources
         * at a time.</p><p><h3>See Also:</h3>   <a
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
         * your Amazon Web Services resources</a> in the <i>Tagging Amazon Web Services
         * Resources User Guide</i>.</p>  <p>This is only supported for
         * <code>NotificationConfigurations</code>.</p> <p><h3>See Also:</h3>   <a
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
         * your Amazon Web Services resources</a> in the <i>Tagging Amazon Web Services
         * Resources User Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Updates an existing <code>EventRule</code>.</p><p><h3>See Also:</h3>   <a
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
         * <p>Updates a <code>NotificationConfiguration</code>.</p><p><h3>See Also:</h3>  
         * <a
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
