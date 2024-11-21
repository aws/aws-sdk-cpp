/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notificationscontacts/NotificationsContacts_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/notificationscontacts/NotificationsContactsServiceClientModel.h>

namespace Aws
{
namespace NotificationsContacts
{
  /**
   * <p>AWS User Notifications Contacts is a service that allows you to create and
   * manage email contacts for AWS User Notifications. The AWS User Notifications
   * Contacts API Reference provides descriptions, API request parameters, and the
   * JSON response for all email contact related API actions.</p>
   */
  class AWS_NOTIFICATIONSCONTACTS_API NotificationsContactsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<NotificationsContactsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef NotificationsContactsClientConfiguration ClientConfigurationType;
      typedef NotificationsContactsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NotificationsContactsClient(const Aws::NotificationsContacts::NotificationsContactsClientConfiguration& clientConfiguration = Aws::NotificationsContacts::NotificationsContactsClientConfiguration(),
                                    std::shared_ptr<NotificationsContactsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NotificationsContactsClient(const Aws::Auth::AWSCredentials& credentials,
                                    std::shared_ptr<NotificationsContactsEndpointProviderBase> endpointProvider = nullptr,
                                    const Aws::NotificationsContacts::NotificationsContactsClientConfiguration& clientConfiguration = Aws::NotificationsContacts::NotificationsContactsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NotificationsContactsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                    std::shared_ptr<NotificationsContactsEndpointProviderBase> endpointProvider = nullptr,
                                    const Aws::NotificationsContacts::NotificationsContactsClientConfiguration& clientConfiguration = Aws::NotificationsContacts::NotificationsContactsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NotificationsContactsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NotificationsContactsClient(const Aws::Auth::AWSCredentials& credentials,
                                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NotificationsContactsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~NotificationsContactsClient();

        /**
         * <p>Activates an email contact using an activation code. This code is in the
         * activation email sent to the email address associated with this email
         * contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notificationscontacts-2018-05-10/ActivateEmailContact">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateEmailContactOutcome ActivateEmailContact(const Model::ActivateEmailContactRequest& request) const;

        /**
         * A Callable wrapper for ActivateEmailContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ActivateEmailContactRequestT = Model::ActivateEmailContactRequest>
        Model::ActivateEmailContactOutcomeCallable ActivateEmailContactCallable(const ActivateEmailContactRequestT& request) const
        {
            return SubmitCallable(&NotificationsContactsClient::ActivateEmailContact, request);
        }

        /**
         * An Async wrapper for ActivateEmailContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ActivateEmailContactRequestT = Model::ActivateEmailContactRequest>
        void ActivateEmailContactAsync(const ActivateEmailContactRequestT& request, const ActivateEmailContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsContactsClient::ActivateEmailContact, request, handler, context);
        }

        /**
         * <p>Creates an email contact for the provided email address.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notificationscontacts-2018-05-10/CreateEmailContact">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEmailContactOutcome CreateEmailContact(const Model::CreateEmailContactRequest& request) const;

        /**
         * A Callable wrapper for CreateEmailContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEmailContactRequestT = Model::CreateEmailContactRequest>
        Model::CreateEmailContactOutcomeCallable CreateEmailContactCallable(const CreateEmailContactRequestT& request) const
        {
            return SubmitCallable(&NotificationsContactsClient::CreateEmailContact, request);
        }

        /**
         * An Async wrapper for CreateEmailContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEmailContactRequestT = Model::CreateEmailContactRequest>
        void CreateEmailContactAsync(const CreateEmailContactRequestT& request, const CreateEmailContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsContactsClient::CreateEmailContact, request, handler, context);
        }

        /**
         * <p>Deletes an email contact.</p>  <p>Deleting an email contact removes it
         * from all associated notification configurations.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notificationscontacts-2018-05-10/DeleteEmailContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailContactOutcome DeleteEmailContact(const Model::DeleteEmailContactRequest& request) const;

        /**
         * A Callable wrapper for DeleteEmailContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEmailContactRequestT = Model::DeleteEmailContactRequest>
        Model::DeleteEmailContactOutcomeCallable DeleteEmailContactCallable(const DeleteEmailContactRequestT& request) const
        {
            return SubmitCallable(&NotificationsContactsClient::DeleteEmailContact, request);
        }

        /**
         * An Async wrapper for DeleteEmailContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEmailContactRequestT = Model::DeleteEmailContactRequest>
        void DeleteEmailContactAsync(const DeleteEmailContactRequestT& request, const DeleteEmailContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsContactsClient::DeleteEmailContact, request, handler, context);
        }

        /**
         * <p>Returns an email contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notificationscontacts-2018-05-10/GetEmailContact">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEmailContactOutcome GetEmailContact(const Model::GetEmailContactRequest& request) const;

        /**
         * A Callable wrapper for GetEmailContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEmailContactRequestT = Model::GetEmailContactRequest>
        Model::GetEmailContactOutcomeCallable GetEmailContactCallable(const GetEmailContactRequestT& request) const
        {
            return SubmitCallable(&NotificationsContactsClient::GetEmailContact, request);
        }

        /**
         * An Async wrapper for GetEmailContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEmailContactRequestT = Model::GetEmailContactRequest>
        void GetEmailContactAsync(const GetEmailContactRequestT& request, const GetEmailContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsContactsClient::GetEmailContact, request, handler, context);
        }

        /**
         * <p>Lists all email contacts created under the Account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notificationscontacts-2018-05-10/ListEmailContacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEmailContactsOutcome ListEmailContacts(const Model::ListEmailContactsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListEmailContacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEmailContactsRequestT = Model::ListEmailContactsRequest>
        Model::ListEmailContactsOutcomeCallable ListEmailContactsCallable(const ListEmailContactsRequestT& request = {}) const
        {
            return SubmitCallable(&NotificationsContactsClient::ListEmailContacts, request);
        }

        /**
         * An Async wrapper for ListEmailContacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEmailContactsRequestT = Model::ListEmailContactsRequest>
        void ListEmailContactsAsync(const ListEmailContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListEmailContactsRequestT& request = {}) const
        {
            return SubmitAsync(&NotificationsContactsClient::ListEmailContacts, request, handler, context);
        }

        /**
         * <p>Lists all of the tags associated with the Amazon Resource Name (ARN) that you
         * specify. The resource can be a user, server, or role.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notificationscontacts-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&NotificationsContactsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsContactsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Sends an activation email to the email address associated with the specified
         * email contact.</p>  <p>It might take a few minutes for the activation
         * email to arrive. If it doesn't arrive, check in your spam folder or try sending
         * another activation email.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notificationscontacts-2018-05-10/SendActivationCode">AWS
         * API Reference</a></p>
         */
        virtual Model::SendActivationCodeOutcome SendActivationCode(const Model::SendActivationCodeRequest& request) const;

        /**
         * A Callable wrapper for SendActivationCode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendActivationCodeRequestT = Model::SendActivationCodeRequest>
        Model::SendActivationCodeOutcomeCallable SendActivationCodeCallable(const SendActivationCodeRequestT& request) const
        {
            return SubmitCallable(&NotificationsContactsClient::SendActivationCode, request);
        }

        /**
         * An Async wrapper for SendActivationCode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendActivationCodeRequestT = Model::SendActivationCodeRequest>
        void SendActivationCodeAsync(const SendActivationCodeRequestT& request, const SendActivationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsContactsClient::SendActivationCode, request, handler, context);
        }

        /**
         * <p>Attaches a key-value pair to a resource, as identified by its Amazon Resource
         * Name (ARN). Taggable resources in AWS User Notifications Contacts include email
         * contacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notificationscontacts-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&NotificationsContactsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsContactsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Detaches a key-value pair from a resource, as identified by its Amazon
         * Resource Name (ARN). Taggable resources in AWS User Notifications Contacts
         * include email contacts..</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/notificationscontacts-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&NotificationsContactsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NotificationsContactsClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<NotificationsContactsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<NotificationsContactsClient>;
      void init(const NotificationsContactsClientConfiguration& clientConfiguration);

      NotificationsContactsClientConfiguration m_clientConfiguration;
      std::shared_ptr<NotificationsContactsEndpointProviderBase> m_endpointProvider;
  };

} // namespace NotificationsContacts
} // namespace Aws
