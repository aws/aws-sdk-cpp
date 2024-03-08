/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm-contacts/SSMContactsServiceClientModel.h>

namespace Aws
{
namespace SSMContacts
{
  /**
   * <p>Systems Manager Incident Manager is an incident management console designed
   * to help users mitigate and recover from incidents affecting their Amazon Web
   * Services-hosted applications. An incident is any unplanned interruption or
   * reduction in quality of services.</p> <p>Incident Manager increases incident
   * resolution by notifying responders of impact, highlighting relevant
   * troubleshooting data, and providing collaboration tools to get services back up
   * and running. To achieve the primary goal of reducing the time-to-resolution of
   * critical incidents, Incident Manager automates response plans and enables
   * responder team escalation.</p>
   */
  class AWS_SSMCONTACTS_API SSMContactsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SSMContactsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SSMContactsClientConfiguration ClientConfigurationType;
      typedef SSMContactsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMContactsClient(const Aws::SSMContacts::SSMContactsClientConfiguration& clientConfiguration = Aws::SSMContacts::SSMContactsClientConfiguration(),
                          std::shared_ptr<SSMContactsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMContactsClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<SSMContactsEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::SSMContacts::SSMContactsClientConfiguration& clientConfiguration = Aws::SSMContacts::SSMContactsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMContactsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<SSMContactsEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::SSMContacts::SSMContactsClientConfiguration& clientConfiguration = Aws::SSMContacts::SSMContactsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMContactsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMContactsClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMContactsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SSMContactsClient();

        /**
         * <p>Used to acknowledge an engagement to a contact channel during an
         * incident.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/AcceptPage">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptPageOutcome AcceptPage(const Model::AcceptPageRequest& request) const;

        /**
         * A Callable wrapper for AcceptPage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcceptPageRequestT = Model::AcceptPageRequest>
        Model::AcceptPageOutcomeCallable AcceptPageCallable(const AcceptPageRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::AcceptPage, request);
        }

        /**
         * An Async wrapper for AcceptPage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptPageRequestT = Model::AcceptPageRequest>
        void AcceptPageAsync(const AcceptPageRequestT& request, const AcceptPageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::AcceptPage, request, handler, context);
        }

        /**
         * <p>Activates a contact's contact channel. Incident Manager can't engage a
         * contact until the contact channel has been activated.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ActivateContactChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateContactChannelOutcome ActivateContactChannel(const Model::ActivateContactChannelRequest& request) const;

        /**
         * A Callable wrapper for ActivateContactChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ActivateContactChannelRequestT = Model::ActivateContactChannelRequest>
        Model::ActivateContactChannelOutcomeCallable ActivateContactChannelCallable(const ActivateContactChannelRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::ActivateContactChannel, request);
        }

        /**
         * An Async wrapper for ActivateContactChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ActivateContactChannelRequestT = Model::ActivateContactChannelRequest>
        void ActivateContactChannelAsync(const ActivateContactChannelRequestT& request, const ActivateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::ActivateContactChannel, request, handler, context);
        }

        /**
         * <p>Contacts are either the contacts that Incident Manager engages during an
         * incident or the escalation plans that Incident Manager uses to engage contacts
         * in phases during an incident.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/CreateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactOutcome CreateContact(const Model::CreateContactRequest& request) const;

        /**
         * A Callable wrapper for CreateContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateContactRequestT = Model::CreateContactRequest>
        Model::CreateContactOutcomeCallable CreateContactCallable(const CreateContactRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::CreateContact, request);
        }

        /**
         * An Async wrapper for CreateContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateContactRequestT = Model::CreateContactRequest>
        void CreateContactAsync(const CreateContactRequestT& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::CreateContact, request, handler, context);
        }

        /**
         * <p>A contact channel is the method that Incident Manager uses to engage your
         * contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/CreateContactChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactChannelOutcome CreateContactChannel(const Model::CreateContactChannelRequest& request) const;

        /**
         * A Callable wrapper for CreateContactChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateContactChannelRequestT = Model::CreateContactChannelRequest>
        Model::CreateContactChannelOutcomeCallable CreateContactChannelCallable(const CreateContactChannelRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::CreateContactChannel, request);
        }

        /**
         * An Async wrapper for CreateContactChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateContactChannelRequestT = Model::CreateContactChannelRequest>
        void CreateContactChannelAsync(const CreateContactChannelRequestT& request, const CreateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::CreateContactChannel, request, handler, context);
        }

        /**
         * <p>Creates a rotation in an on-call schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/CreateRotation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRotationOutcome CreateRotation(const Model::CreateRotationRequest& request) const;

        /**
         * A Callable wrapper for CreateRotation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRotationRequestT = Model::CreateRotationRequest>
        Model::CreateRotationOutcomeCallable CreateRotationCallable(const CreateRotationRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::CreateRotation, request);
        }

        /**
         * An Async wrapper for CreateRotation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRotationRequestT = Model::CreateRotationRequest>
        void CreateRotationAsync(const CreateRotationRequestT& request, const CreateRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::CreateRotation, request, handler, context);
        }

        /**
         * <p>Creates an override for a rotation in an on-call schedule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/CreateRotationOverride">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRotationOverrideOutcome CreateRotationOverride(const Model::CreateRotationOverrideRequest& request) const;

        /**
         * A Callable wrapper for CreateRotationOverride that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRotationOverrideRequestT = Model::CreateRotationOverrideRequest>
        Model::CreateRotationOverrideOutcomeCallable CreateRotationOverrideCallable(const CreateRotationOverrideRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::CreateRotationOverride, request);
        }

        /**
         * An Async wrapper for CreateRotationOverride that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRotationOverrideRequestT = Model::CreateRotationOverrideRequest>
        void CreateRotationOverrideAsync(const CreateRotationOverrideRequestT& request, const CreateRotationOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::CreateRotationOverride, request, handler, context);
        }

        /**
         * <p>To no longer receive Incident Manager engagements to a contact channel, you
         * can deactivate the channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/DeactivateContactChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateContactChannelOutcome DeactivateContactChannel(const Model::DeactivateContactChannelRequest& request) const;

        /**
         * A Callable wrapper for DeactivateContactChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeactivateContactChannelRequestT = Model::DeactivateContactChannelRequest>
        Model::DeactivateContactChannelOutcomeCallable DeactivateContactChannelCallable(const DeactivateContactChannelRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::DeactivateContactChannel, request);
        }

        /**
         * An Async wrapper for DeactivateContactChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeactivateContactChannelRequestT = Model::DeactivateContactChannelRequest>
        void DeactivateContactChannelAsync(const DeactivateContactChannelRequestT& request, const DeactivateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::DeactivateContactChannel, request, handler, context);
        }

        /**
         * <p>To remove a contact from Incident Manager, you can delete the contact.
         * Deleting a contact removes them from all escalation plans and related response
         * plans. Deleting an escalation plan removes it from all related response plans.
         * You will have to recreate the contact and its contact channels before you can
         * use it again.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/DeleteContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactOutcome DeleteContact(const Model::DeleteContactRequest& request) const;

        /**
         * A Callable wrapper for DeleteContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteContactRequestT = Model::DeleteContactRequest>
        Model::DeleteContactOutcomeCallable DeleteContactCallable(const DeleteContactRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::DeleteContact, request);
        }

        /**
         * An Async wrapper for DeleteContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteContactRequestT = Model::DeleteContactRequest>
        void DeleteContactAsync(const DeleteContactRequestT& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::DeleteContact, request, handler, context);
        }

        /**
         * <p>To no longer receive engagements on a contact channel, you can delete the
         * channel from a contact. Deleting the contact channel removes it from the
         * contact's engagement plan. If you delete the only contact channel for a contact,
         * you won't be able to engage that contact during an incident.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/DeleteContactChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactChannelOutcome DeleteContactChannel(const Model::DeleteContactChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteContactChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteContactChannelRequestT = Model::DeleteContactChannelRequest>
        Model::DeleteContactChannelOutcomeCallable DeleteContactChannelCallable(const DeleteContactChannelRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::DeleteContactChannel, request);
        }

        /**
         * An Async wrapper for DeleteContactChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteContactChannelRequestT = Model::DeleteContactChannelRequest>
        void DeleteContactChannelAsync(const DeleteContactChannelRequestT& request, const DeleteContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::DeleteContactChannel, request, handler, context);
        }

        /**
         * <p>Deletes a rotation from the system. If a rotation belongs to more than one
         * on-call schedule, this operation deletes it from all of them.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/DeleteRotation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRotationOutcome DeleteRotation(const Model::DeleteRotationRequest& request) const;

        /**
         * A Callable wrapper for DeleteRotation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRotationRequestT = Model::DeleteRotationRequest>
        Model::DeleteRotationOutcomeCallable DeleteRotationCallable(const DeleteRotationRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::DeleteRotation, request);
        }

        /**
         * An Async wrapper for DeleteRotation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRotationRequestT = Model::DeleteRotationRequest>
        void DeleteRotationAsync(const DeleteRotationRequestT& request, const DeleteRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::DeleteRotation, request, handler, context);
        }

        /**
         * <p>Deletes an existing override for an on-call rotation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/DeleteRotationOverride">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRotationOverrideOutcome DeleteRotationOverride(const Model::DeleteRotationOverrideRequest& request) const;

        /**
         * A Callable wrapper for DeleteRotationOverride that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRotationOverrideRequestT = Model::DeleteRotationOverrideRequest>
        Model::DeleteRotationOverrideOutcomeCallable DeleteRotationOverrideCallable(const DeleteRotationOverrideRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::DeleteRotationOverride, request);
        }

        /**
         * An Async wrapper for DeleteRotationOverride that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRotationOverrideRequestT = Model::DeleteRotationOverrideRequest>
        void DeleteRotationOverrideAsync(const DeleteRotationOverrideRequestT& request, const DeleteRotationOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::DeleteRotationOverride, request, handler, context);
        }

        /**
         * <p>Incident Manager uses engagements to engage contacts and escalation plans
         * during an incident. Use this command to describe the engagement that occurred
         * during an incident.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/DescribeEngagement">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEngagementOutcome DescribeEngagement(const Model::DescribeEngagementRequest& request) const;

        /**
         * A Callable wrapper for DescribeEngagement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEngagementRequestT = Model::DescribeEngagementRequest>
        Model::DescribeEngagementOutcomeCallable DescribeEngagementCallable(const DescribeEngagementRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::DescribeEngagement, request);
        }

        /**
         * An Async wrapper for DescribeEngagement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEngagementRequestT = Model::DescribeEngagementRequest>
        void DescribeEngagementAsync(const DescribeEngagementRequestT& request, const DescribeEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::DescribeEngagement, request, handler, context);
        }

        /**
         * <p>Lists details of the engagement to a contact channel.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/DescribePage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePageOutcome DescribePage(const Model::DescribePageRequest& request) const;

        /**
         * A Callable wrapper for DescribePage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePageRequestT = Model::DescribePageRequest>
        Model::DescribePageOutcomeCallable DescribePageCallable(const DescribePageRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::DescribePage, request);
        }

        /**
         * An Async wrapper for DescribePage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePageRequestT = Model::DescribePageRequest>
        void DescribePageAsync(const DescribePageRequestT& request, const DescribePageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::DescribePage, request, handler, context);
        }

        /**
         * <p>Retrieves information about the specified contact or escalation
         * plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/GetContact">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactOutcome GetContact(const Model::GetContactRequest& request) const;

        /**
         * A Callable wrapper for GetContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContactRequestT = Model::GetContactRequest>
        Model::GetContactOutcomeCallable GetContactCallable(const GetContactRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::GetContact, request);
        }

        /**
         * An Async wrapper for GetContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContactRequestT = Model::GetContactRequest>
        void GetContactAsync(const GetContactRequestT& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::GetContact, request, handler, context);
        }

        /**
         * <p>List details about a specific contact channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/GetContactChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactChannelOutcome GetContactChannel(const Model::GetContactChannelRequest& request) const;

        /**
         * A Callable wrapper for GetContactChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContactChannelRequestT = Model::GetContactChannelRequest>
        Model::GetContactChannelOutcomeCallable GetContactChannelCallable(const GetContactChannelRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::GetContactChannel, request);
        }

        /**
         * An Async wrapper for GetContactChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContactChannelRequestT = Model::GetContactChannelRequest>
        void GetContactChannelAsync(const GetContactChannelRequestT& request, const GetContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::GetContactChannel, request, handler, context);
        }

        /**
         * <p>Retrieves the resource policies attached to the specified contact or
         * escalation plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/GetContactPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactPolicyOutcome GetContactPolicy(const Model::GetContactPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetContactPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContactPolicyRequestT = Model::GetContactPolicyRequest>
        Model::GetContactPolicyOutcomeCallable GetContactPolicyCallable(const GetContactPolicyRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::GetContactPolicy, request);
        }

        /**
         * An Async wrapper for GetContactPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContactPolicyRequestT = Model::GetContactPolicyRequest>
        void GetContactPolicyAsync(const GetContactPolicyRequestT& request, const GetContactPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::GetContactPolicy, request, handler, context);
        }

        /**
         * <p>Retrieves information about an on-call rotation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/GetRotation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRotationOutcome GetRotation(const Model::GetRotationRequest& request) const;

        /**
         * A Callable wrapper for GetRotation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRotationRequestT = Model::GetRotationRequest>
        Model::GetRotationOutcomeCallable GetRotationCallable(const GetRotationRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::GetRotation, request);
        }

        /**
         * An Async wrapper for GetRotation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRotationRequestT = Model::GetRotationRequest>
        void GetRotationAsync(const GetRotationRequestT& request, const GetRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::GetRotation, request, handler, context);
        }

        /**
         * <p>Retrieves information about an override to an on-call rotation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/GetRotationOverride">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRotationOverrideOutcome GetRotationOverride(const Model::GetRotationOverrideRequest& request) const;

        /**
         * A Callable wrapper for GetRotationOverride that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRotationOverrideRequestT = Model::GetRotationOverrideRequest>
        Model::GetRotationOverrideOutcomeCallable GetRotationOverrideCallable(const GetRotationOverrideRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::GetRotationOverride, request);
        }

        /**
         * An Async wrapper for GetRotationOverride that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRotationOverrideRequestT = Model::GetRotationOverrideRequest>
        void GetRotationOverrideAsync(const GetRotationOverrideRequestT& request, const GetRotationOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::GetRotationOverride, request, handler, context);
        }

        /**
         * <p>Lists all contact channels for the specified contact.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListContactChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactChannelsOutcome ListContactChannels(const Model::ListContactChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListContactChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListContactChannelsRequestT = Model::ListContactChannelsRequest>
        Model::ListContactChannelsOutcomeCallable ListContactChannelsCallable(const ListContactChannelsRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::ListContactChannels, request);
        }

        /**
         * An Async wrapper for ListContactChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListContactChannelsRequestT = Model::ListContactChannelsRequest>
        void ListContactChannelsAsync(const ListContactChannelsRequestT& request, const ListContactChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::ListContactChannels, request, handler, context);
        }

        /**
         * <p>Lists all contacts and escalation plans in Incident Manager.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListContacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactsOutcome ListContacts(const Model::ListContactsRequest& request) const;

        /**
         * A Callable wrapper for ListContacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListContactsRequestT = Model::ListContactsRequest>
        Model::ListContactsOutcomeCallable ListContactsCallable(const ListContactsRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::ListContacts, request);
        }

        /**
         * An Async wrapper for ListContacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListContactsRequestT = Model::ListContactsRequest>
        void ListContactsAsync(const ListContactsRequestT& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::ListContacts, request, handler, context);
        }

        /**
         * <p>Lists all engagements that have happened in an incident.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListEngagements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEngagementsOutcome ListEngagements(const Model::ListEngagementsRequest& request) const;

        /**
         * A Callable wrapper for ListEngagements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEngagementsRequestT = Model::ListEngagementsRequest>
        Model::ListEngagementsOutcomeCallable ListEngagementsCallable(const ListEngagementsRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::ListEngagements, request);
        }

        /**
         * An Async wrapper for ListEngagements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEngagementsRequestT = Model::ListEngagementsRequest>
        void ListEngagementsAsync(const ListEngagementsRequestT& request, const ListEngagementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::ListEngagements, request, handler, context);
        }

        /**
         * <p>Lists all of the engagements to contact channels that have been
         * acknowledged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListPageReceipts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPageReceiptsOutcome ListPageReceipts(const Model::ListPageReceiptsRequest& request) const;

        /**
         * A Callable wrapper for ListPageReceipts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPageReceiptsRequestT = Model::ListPageReceiptsRequest>
        Model::ListPageReceiptsOutcomeCallable ListPageReceiptsCallable(const ListPageReceiptsRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::ListPageReceipts, request);
        }

        /**
         * An Async wrapper for ListPageReceipts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPageReceiptsRequestT = Model::ListPageReceiptsRequest>
        void ListPageReceiptsAsync(const ListPageReceiptsRequestT& request, const ListPageReceiptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::ListPageReceipts, request, handler, context);
        }

        /**
         * <p>Returns the resolution path of an engagement. For example, the escalation
         * plan engaged in an incident might target an on-call schedule that includes
         * several contacts in a rotation, but just one contact on-call when the incident
         * starts. The resolution path indicates the hierarchy of <i>escalation plan &gt;
         * on-call schedule &gt; contact</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListPageResolutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPageResolutionsOutcome ListPageResolutions(const Model::ListPageResolutionsRequest& request) const;

        /**
         * A Callable wrapper for ListPageResolutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPageResolutionsRequestT = Model::ListPageResolutionsRequest>
        Model::ListPageResolutionsOutcomeCallable ListPageResolutionsCallable(const ListPageResolutionsRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::ListPageResolutions, request);
        }

        /**
         * An Async wrapper for ListPageResolutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPageResolutionsRequestT = Model::ListPageResolutionsRequest>
        void ListPageResolutionsAsync(const ListPageResolutionsRequestT& request, const ListPageResolutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::ListPageResolutions, request, handler, context);
        }

        /**
         * <p>Lists the engagements to a contact's contact channels.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListPagesByContact">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPagesByContactOutcome ListPagesByContact(const Model::ListPagesByContactRequest& request) const;

        /**
         * A Callable wrapper for ListPagesByContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPagesByContactRequestT = Model::ListPagesByContactRequest>
        Model::ListPagesByContactOutcomeCallable ListPagesByContactCallable(const ListPagesByContactRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::ListPagesByContact, request);
        }

        /**
         * An Async wrapper for ListPagesByContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPagesByContactRequestT = Model::ListPagesByContactRequest>
        void ListPagesByContactAsync(const ListPagesByContactRequestT& request, const ListPagesByContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::ListPagesByContact, request, handler, context);
        }

        /**
         * <p>Lists the engagements to contact channels that occurred by engaging a
         * contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListPagesByEngagement">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPagesByEngagementOutcome ListPagesByEngagement(const Model::ListPagesByEngagementRequest& request) const;

        /**
         * A Callable wrapper for ListPagesByEngagement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPagesByEngagementRequestT = Model::ListPagesByEngagementRequest>
        Model::ListPagesByEngagementOutcomeCallable ListPagesByEngagementCallable(const ListPagesByEngagementRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::ListPagesByEngagement, request);
        }

        /**
         * An Async wrapper for ListPagesByEngagement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPagesByEngagementRequestT = Model::ListPagesByEngagementRequest>
        void ListPagesByEngagementAsync(const ListPagesByEngagementRequestT& request, const ListPagesByEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::ListPagesByEngagement, request, handler, context);
        }

        /**
         * <p>Returns a list of shifts based on rotation configuration parameters.</p>
         *  <p>The Incident Manager primarily uses this operation to populate the
         * <b>Preview</b> calendar. It is not typically run by end users.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListPreviewRotationShifts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPreviewRotationShiftsOutcome ListPreviewRotationShifts(const Model::ListPreviewRotationShiftsRequest& request) const;

        /**
         * A Callable wrapper for ListPreviewRotationShifts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPreviewRotationShiftsRequestT = Model::ListPreviewRotationShiftsRequest>
        Model::ListPreviewRotationShiftsOutcomeCallable ListPreviewRotationShiftsCallable(const ListPreviewRotationShiftsRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::ListPreviewRotationShifts, request);
        }

        /**
         * An Async wrapper for ListPreviewRotationShifts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPreviewRotationShiftsRequestT = Model::ListPreviewRotationShiftsRequest>
        void ListPreviewRotationShiftsAsync(const ListPreviewRotationShiftsRequestT& request, const ListPreviewRotationShiftsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::ListPreviewRotationShifts, request, handler, context);
        }

        /**
         * <p>Retrieves a list of overrides currently specified for an on-call
         * rotation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListRotationOverrides">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRotationOverridesOutcome ListRotationOverrides(const Model::ListRotationOverridesRequest& request) const;

        /**
         * A Callable wrapper for ListRotationOverrides that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRotationOverridesRequestT = Model::ListRotationOverridesRequest>
        Model::ListRotationOverridesOutcomeCallable ListRotationOverridesCallable(const ListRotationOverridesRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::ListRotationOverrides, request);
        }

        /**
         * An Async wrapper for ListRotationOverrides that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRotationOverridesRequestT = Model::ListRotationOverridesRequest>
        void ListRotationOverridesAsync(const ListRotationOverridesRequestT& request, const ListRotationOverridesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::ListRotationOverrides, request, handler, context);
        }

        /**
         * <p>Returns a list of shifts generated by an existing rotation in the
         * system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListRotationShifts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRotationShiftsOutcome ListRotationShifts(const Model::ListRotationShiftsRequest& request) const;

        /**
         * A Callable wrapper for ListRotationShifts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRotationShiftsRequestT = Model::ListRotationShiftsRequest>
        Model::ListRotationShiftsOutcomeCallable ListRotationShiftsCallable(const ListRotationShiftsRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::ListRotationShifts, request);
        }

        /**
         * An Async wrapper for ListRotationShifts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRotationShiftsRequestT = Model::ListRotationShiftsRequest>
        void ListRotationShiftsAsync(const ListRotationShiftsRequestT& request, const ListRotationShiftsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::ListRotationShifts, request, handler, context);
        }

        /**
         * <p>Retrieves a list of on-call rotations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListRotations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRotationsOutcome ListRotations(const Model::ListRotationsRequest& request) const;

        /**
         * A Callable wrapper for ListRotations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRotationsRequestT = Model::ListRotationsRequest>
        Model::ListRotationsOutcomeCallable ListRotationsCallable(const ListRotationsRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::ListRotations, request);
        }

        /**
         * An Async wrapper for ListRotations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRotationsRequestT = Model::ListRotationsRequest>
        void ListRotationsAsync(const ListRotationsRequestT& request, const ListRotationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::ListRotations, request, handler, context);
        }

        /**
         * <p>Lists the tags of an escalation plan or contact.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Adds a resource policy to the specified contact or escalation plan. The
         * resource policy is used to share the contact or escalation plan using Resource
         * Access Manager (RAM). For more information about cross-account sharing, see <a
         * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/xa.html">Setting
         * up cross-account functionality</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/PutContactPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutContactPolicyOutcome PutContactPolicy(const Model::PutContactPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutContactPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutContactPolicyRequestT = Model::PutContactPolicyRequest>
        Model::PutContactPolicyOutcomeCallable PutContactPolicyCallable(const PutContactPolicyRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::PutContactPolicy, request);
        }

        /**
         * An Async wrapper for PutContactPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutContactPolicyRequestT = Model::PutContactPolicyRequest>
        void PutContactPolicyAsync(const PutContactPolicyRequestT& request, const PutContactPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::PutContactPolicy, request, handler, context);
        }

        /**
         * <p>Sends an activation code to a contact channel. The contact can use this code
         * to activate the contact channel in the console or with the
         * <code>ActivateChannel</code> operation. Incident Manager can't engage a contact
         * channel until it has been activated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/SendActivationCode">AWS
         * API Reference</a></p>
         */
        virtual Model::SendActivationCodeOutcome SendActivationCode(const Model::SendActivationCodeRequest& request) const;

        /**
         * A Callable wrapper for SendActivationCode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendActivationCodeRequestT = Model::SendActivationCodeRequest>
        Model::SendActivationCodeOutcomeCallable SendActivationCodeCallable(const SendActivationCodeRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::SendActivationCode, request);
        }

        /**
         * An Async wrapper for SendActivationCode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendActivationCodeRequestT = Model::SendActivationCodeRequest>
        void SendActivationCodeAsync(const SendActivationCodeRequestT& request, const SendActivationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::SendActivationCode, request, handler, context);
        }

        /**
         * <p>Starts an engagement to a contact or escalation plan. The engagement engages
         * each contact specified in the incident.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/StartEngagement">AWS
         * API Reference</a></p>
         */
        virtual Model::StartEngagementOutcome StartEngagement(const Model::StartEngagementRequest& request) const;

        /**
         * A Callable wrapper for StartEngagement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartEngagementRequestT = Model::StartEngagementRequest>
        Model::StartEngagementOutcomeCallable StartEngagementCallable(const StartEngagementRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::StartEngagement, request);
        }

        /**
         * An Async wrapper for StartEngagement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartEngagementRequestT = Model::StartEngagementRequest>
        void StartEngagementAsync(const StartEngagementRequestT& request, const StartEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::StartEngagement, request, handler, context);
        }

        /**
         * <p>Stops an engagement before it finishes the final stage of the escalation plan
         * or engagement plan. Further contacts aren't engaged.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/StopEngagement">AWS
         * API Reference</a></p>
         */
        virtual Model::StopEngagementOutcome StopEngagement(const Model::StopEngagementRequest& request) const;

        /**
         * A Callable wrapper for StopEngagement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopEngagementRequestT = Model::StopEngagementRequest>
        Model::StopEngagementOutcomeCallable StopEngagementCallable(const StopEngagementRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::StopEngagement, request);
        }

        /**
         * An Async wrapper for StopEngagement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopEngagementRequestT = Model::StopEngagementRequest>
        void StopEngagementAsync(const StopEngagementRequestT& request, const StopEngagementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::StopEngagement, request, handler, context);
        }

        /**
         * <p>Tags a contact or escalation plan. You can tag only contacts and escalation
         * plans in the first region of your replication set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the contact or escalation plan specified.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/UpdateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactOutcome UpdateContact(const Model::UpdateContactRequest& request) const;

        /**
         * A Callable wrapper for UpdateContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContactRequestT = Model::UpdateContactRequest>
        Model::UpdateContactOutcomeCallable UpdateContactCallable(const UpdateContactRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::UpdateContact, request);
        }

        /**
         * An Async wrapper for UpdateContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContactRequestT = Model::UpdateContactRequest>
        void UpdateContactAsync(const UpdateContactRequestT& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::UpdateContact, request, handler, context);
        }

        /**
         * <p>Updates a contact's contact channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/UpdateContactChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactChannelOutcome UpdateContactChannel(const Model::UpdateContactChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateContactChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContactChannelRequestT = Model::UpdateContactChannelRequest>
        Model::UpdateContactChannelOutcomeCallable UpdateContactChannelCallable(const UpdateContactChannelRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::UpdateContactChannel, request);
        }

        /**
         * An Async wrapper for UpdateContactChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContactChannelRequestT = Model::UpdateContactChannelRequest>
        void UpdateContactChannelAsync(const UpdateContactChannelRequestT& request, const UpdateContactChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::UpdateContactChannel, request, handler, context);
        }

        /**
         * <p>Updates the information specified for an on-call rotation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/UpdateRotation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRotationOutcome UpdateRotation(const Model::UpdateRotationRequest& request) const;

        /**
         * A Callable wrapper for UpdateRotation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRotationRequestT = Model::UpdateRotationRequest>
        Model::UpdateRotationOutcomeCallable UpdateRotationCallable(const UpdateRotationRequestT& request) const
        {
            return SubmitCallable(&SSMContactsClient::UpdateRotation, request);
        }

        /**
         * An Async wrapper for UpdateRotation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRotationRequestT = Model::UpdateRotationRequest>
        void UpdateRotationAsync(const UpdateRotationRequestT& request, const UpdateRotationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMContactsClient::UpdateRotation, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SSMContactsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SSMContactsClient>;
      void init(const SSMContactsClientConfiguration& clientConfiguration);

      SSMContactsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SSMContactsEndpointProviderBase> m_endpointProvider;
  };

} // namespace SSMContacts
} // namespace Aws
