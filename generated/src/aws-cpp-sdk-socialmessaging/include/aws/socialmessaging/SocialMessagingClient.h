/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/SocialMessagingServiceClientModel.h>

namespace Aws
{
namespace SocialMessaging
{
  /**
   * <p> <i>Amazon Web Services End User Messaging Social</i>, also referred to as
   * Social messaging, is a messaging service that enables application developers to
   * incorporate WhatsApp into their existing workflows. The <i>Amazon Web Services
   * End User Messaging Social API</i> provides information about the <i>Amazon Web
   * Services End User Messaging Social API</i> resources, including supported HTTP
   * methods, parameters, and schemas.</p> <p>The <i>Amazon Web Services End User
   * Messaging Social API</i> provides programmatic access to options that are unique
   * to the WhatsApp Business Platform.</p> <p>If you're new to the <i>Amazon Web
   * Services End User Messaging Social API</i>, it's also helpful to review <a
   * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/what-is-service.html">What
   * is Amazon Web Services End User Messaging Social</a> in the <i>Amazon Web
   * Services End User Messaging Social User Guide</i>. The <i>Amazon Web Services
   * End User Messaging Social User Guide</i> provides tutorials, code samples, and
   * procedures that demonstrate how to use <i>Amazon Web Services End User Messaging
   * Social API</i> features programmatically and how to integrate functionality into
   * applications. The guide also provides key information, such as integration with
   * other Amazon Web Services services, and the quotas that apply to use of the
   * service.</p> <p> <b>Regional availability</b> </p> <p>The <i>Amazon Web Services
   * End User Messaging Social API</i> is available across several Amazon Web
   * Services Regions and it provides a dedicated endpoint for each of these Regions.
   * For a list of all the Regions and endpoints where the API is currently
   * available, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#pinpoint_region">Amazon
   * Web Services Service Endpoints</a> and <a
   * href="https://docs.aws.amazon.com/general/latest/gr/end-user-messaging.html">Amazon
   * Web Services End User Messaging endpoints and quotas</a> in the Amazon Web
   * Services General Reference. To learn more about Amazon Web Services Regions, see
   * <a
   * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html">Managing
   * Amazon Web Services Regions</a> in the Amazon Web Services General
   * Reference.</p> <p>In each Region, Amazon Web Services maintains multiple
   * Availability Zones. These Availability Zones are physically isolated from each
   * other, but are united by private, low-latency, high-throughput, and highly
   * redundant network connections. These Availability Zones enable us to provide
   * very high levels of availability and redundancy, while also minimizing latency.
   * To learn more about the number of Availability Zones that are available in each
   * Region, see <a
   * href="https://aws.amazon.com/about-aws/global-infrastructure/">Amazon Web
   * Services Global Infrastructure.</a> </p>
   */
  class AWS_SOCIALMESSAGING_API SocialMessagingClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SocialMessagingClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SocialMessagingClientConfiguration ClientConfigurationType;
      typedef SocialMessagingEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SocialMessagingClient(const Aws::SocialMessaging::SocialMessagingClientConfiguration& clientConfiguration = Aws::SocialMessaging::SocialMessagingClientConfiguration(),
                              std::shared_ptr<SocialMessagingEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SocialMessagingClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<SocialMessagingEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::SocialMessaging::SocialMessagingClientConfiguration& clientConfiguration = Aws::SocialMessaging::SocialMessagingClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SocialMessagingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<SocialMessagingEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::SocialMessaging::SocialMessagingClientConfiguration& clientConfiguration = Aws::SocialMessaging::SocialMessagingClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SocialMessagingClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SocialMessagingClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SocialMessagingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SocialMessagingClient();

        /**
         * <p>This is only used through the Amazon Web Services console during sign-up to
         * associate your WhatsApp Business Account to your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/AssociateWhatsAppBusinessAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateWhatsAppBusinessAccountOutcome AssociateWhatsAppBusinessAccount(const Model::AssociateWhatsAppBusinessAccountRequest& request = {}) const;

        /**
         * A Callable wrapper for AssociateWhatsAppBusinessAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateWhatsAppBusinessAccountRequestT = Model::AssociateWhatsAppBusinessAccountRequest>
        Model::AssociateWhatsAppBusinessAccountOutcomeCallable AssociateWhatsAppBusinessAccountCallable(const AssociateWhatsAppBusinessAccountRequestT& request = {}) const
        {
            return SubmitCallable(&SocialMessagingClient::AssociateWhatsAppBusinessAccount, request);
        }

        /**
         * An Async wrapper for AssociateWhatsAppBusinessAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateWhatsAppBusinessAccountRequestT = Model::AssociateWhatsAppBusinessAccountRequest>
        void AssociateWhatsAppBusinessAccountAsync(const AssociateWhatsAppBusinessAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const AssociateWhatsAppBusinessAccountRequestT& request = {}) const
        {
            return SubmitAsync(&SocialMessagingClient::AssociateWhatsAppBusinessAccount, request, handler, context);
        }

        /**
         * <p>Creates a new WhatsApp message template from a custom
         * definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/CreateWhatsAppMessageTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWhatsAppMessageTemplateOutcome CreateWhatsAppMessageTemplate(const Model::CreateWhatsAppMessageTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateWhatsAppMessageTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWhatsAppMessageTemplateRequestT = Model::CreateWhatsAppMessageTemplateRequest>
        Model::CreateWhatsAppMessageTemplateOutcomeCallable CreateWhatsAppMessageTemplateCallable(const CreateWhatsAppMessageTemplateRequestT& request) const
        {
            return SubmitCallable(&SocialMessagingClient::CreateWhatsAppMessageTemplate, request);
        }

        /**
         * An Async wrapper for CreateWhatsAppMessageTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWhatsAppMessageTemplateRequestT = Model::CreateWhatsAppMessageTemplateRequest>
        void CreateWhatsAppMessageTemplateAsync(const CreateWhatsAppMessageTemplateRequestT& request, const CreateWhatsAppMessageTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SocialMessagingClient::CreateWhatsAppMessageTemplate, request, handler, context);
        }

        /**
         * <p>Creates a new WhatsApp message template using a template from Meta's template
         * library.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/CreateWhatsAppMessageTemplateFromLibrary">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWhatsAppMessageTemplateFromLibraryOutcome CreateWhatsAppMessageTemplateFromLibrary(const Model::CreateWhatsAppMessageTemplateFromLibraryRequest& request) const;

        /**
         * A Callable wrapper for CreateWhatsAppMessageTemplateFromLibrary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWhatsAppMessageTemplateFromLibraryRequestT = Model::CreateWhatsAppMessageTemplateFromLibraryRequest>
        Model::CreateWhatsAppMessageTemplateFromLibraryOutcomeCallable CreateWhatsAppMessageTemplateFromLibraryCallable(const CreateWhatsAppMessageTemplateFromLibraryRequestT& request) const
        {
            return SubmitCallable(&SocialMessagingClient::CreateWhatsAppMessageTemplateFromLibrary, request);
        }

        /**
         * An Async wrapper for CreateWhatsAppMessageTemplateFromLibrary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWhatsAppMessageTemplateFromLibraryRequestT = Model::CreateWhatsAppMessageTemplateFromLibraryRequest>
        void CreateWhatsAppMessageTemplateFromLibraryAsync(const CreateWhatsAppMessageTemplateFromLibraryRequestT& request, const CreateWhatsAppMessageTemplateFromLibraryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SocialMessagingClient::CreateWhatsAppMessageTemplateFromLibrary, request, handler, context);
        }

        /**
         * <p>Uploads media for use in a WhatsApp message template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/CreateWhatsAppMessageTemplateMedia">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWhatsAppMessageTemplateMediaOutcome CreateWhatsAppMessageTemplateMedia(const Model::CreateWhatsAppMessageTemplateMediaRequest& request) const;

        /**
         * A Callable wrapper for CreateWhatsAppMessageTemplateMedia that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWhatsAppMessageTemplateMediaRequestT = Model::CreateWhatsAppMessageTemplateMediaRequest>
        Model::CreateWhatsAppMessageTemplateMediaOutcomeCallable CreateWhatsAppMessageTemplateMediaCallable(const CreateWhatsAppMessageTemplateMediaRequestT& request) const
        {
            return SubmitCallable(&SocialMessagingClient::CreateWhatsAppMessageTemplateMedia, request);
        }

        /**
         * An Async wrapper for CreateWhatsAppMessageTemplateMedia that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWhatsAppMessageTemplateMediaRequestT = Model::CreateWhatsAppMessageTemplateMediaRequest>
        void CreateWhatsAppMessageTemplateMediaAsync(const CreateWhatsAppMessageTemplateMediaRequestT& request, const CreateWhatsAppMessageTemplateMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SocialMessagingClient::CreateWhatsAppMessageTemplateMedia, request, handler, context);
        }

        /**
         * <p>Delete a media object from the WhatsApp service. If the object is still in an
         * Amazon S3 bucket you should delete it from there too.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/DeleteWhatsAppMessageMedia">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWhatsAppMessageMediaOutcome DeleteWhatsAppMessageMedia(const Model::DeleteWhatsAppMessageMediaRequest& request) const;

        /**
         * A Callable wrapper for DeleteWhatsAppMessageMedia that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWhatsAppMessageMediaRequestT = Model::DeleteWhatsAppMessageMediaRequest>
        Model::DeleteWhatsAppMessageMediaOutcomeCallable DeleteWhatsAppMessageMediaCallable(const DeleteWhatsAppMessageMediaRequestT& request) const
        {
            return SubmitCallable(&SocialMessagingClient::DeleteWhatsAppMessageMedia, request);
        }

        /**
         * An Async wrapper for DeleteWhatsAppMessageMedia that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWhatsAppMessageMediaRequestT = Model::DeleteWhatsAppMessageMediaRequest>
        void DeleteWhatsAppMessageMediaAsync(const DeleteWhatsAppMessageMediaRequestT& request, const DeleteWhatsAppMessageMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SocialMessagingClient::DeleteWhatsAppMessageMedia, request, handler, context);
        }

        /**
         * <p>Deletes a WhatsApp message template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/DeleteWhatsAppMessageTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWhatsAppMessageTemplateOutcome DeleteWhatsAppMessageTemplate(const Model::DeleteWhatsAppMessageTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteWhatsAppMessageTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWhatsAppMessageTemplateRequestT = Model::DeleteWhatsAppMessageTemplateRequest>
        Model::DeleteWhatsAppMessageTemplateOutcomeCallable DeleteWhatsAppMessageTemplateCallable(const DeleteWhatsAppMessageTemplateRequestT& request) const
        {
            return SubmitCallable(&SocialMessagingClient::DeleteWhatsAppMessageTemplate, request);
        }

        /**
         * An Async wrapper for DeleteWhatsAppMessageTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWhatsAppMessageTemplateRequestT = Model::DeleteWhatsAppMessageTemplateRequest>
        void DeleteWhatsAppMessageTemplateAsync(const DeleteWhatsAppMessageTemplateRequestT& request, const DeleteWhatsAppMessageTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SocialMessagingClient::DeleteWhatsAppMessageTemplate, request, handler, context);
        }

        /**
         * <p>Disassociate a WhatsApp Business Account (WABA) from your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/DisassociateWhatsAppBusinessAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateWhatsAppBusinessAccountOutcome DisassociateWhatsAppBusinessAccount(const Model::DisassociateWhatsAppBusinessAccountRequest& request) const;

        /**
         * A Callable wrapper for DisassociateWhatsAppBusinessAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateWhatsAppBusinessAccountRequestT = Model::DisassociateWhatsAppBusinessAccountRequest>
        Model::DisassociateWhatsAppBusinessAccountOutcomeCallable DisassociateWhatsAppBusinessAccountCallable(const DisassociateWhatsAppBusinessAccountRequestT& request) const
        {
            return SubmitCallable(&SocialMessagingClient::DisassociateWhatsAppBusinessAccount, request);
        }

        /**
         * An Async wrapper for DisassociateWhatsAppBusinessAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateWhatsAppBusinessAccountRequestT = Model::DisassociateWhatsAppBusinessAccountRequest>
        void DisassociateWhatsAppBusinessAccountAsync(const DisassociateWhatsAppBusinessAccountRequestT& request, const DisassociateWhatsAppBusinessAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SocialMessagingClient::DisassociateWhatsAppBusinessAccount, request, handler, context);
        }

        /**
         * <p>Get the details of your linked WhatsApp Business Account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/GetLinkedWhatsAppBusinessAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLinkedWhatsAppBusinessAccountOutcome GetLinkedWhatsAppBusinessAccount(const Model::GetLinkedWhatsAppBusinessAccountRequest& request) const;

        /**
         * A Callable wrapper for GetLinkedWhatsAppBusinessAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLinkedWhatsAppBusinessAccountRequestT = Model::GetLinkedWhatsAppBusinessAccountRequest>
        Model::GetLinkedWhatsAppBusinessAccountOutcomeCallable GetLinkedWhatsAppBusinessAccountCallable(const GetLinkedWhatsAppBusinessAccountRequestT& request) const
        {
            return SubmitCallable(&SocialMessagingClient::GetLinkedWhatsAppBusinessAccount, request);
        }

        /**
         * An Async wrapper for GetLinkedWhatsAppBusinessAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLinkedWhatsAppBusinessAccountRequestT = Model::GetLinkedWhatsAppBusinessAccountRequest>
        void GetLinkedWhatsAppBusinessAccountAsync(const GetLinkedWhatsAppBusinessAccountRequestT& request, const GetLinkedWhatsAppBusinessAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SocialMessagingClient::GetLinkedWhatsAppBusinessAccount, request, handler, context);
        }

        /**
         * <p>Use your WhatsApp phone number id to get the WABA account id and phone number
         * details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/GetLinkedWhatsAppBusinessAccountPhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLinkedWhatsAppBusinessAccountPhoneNumberOutcome GetLinkedWhatsAppBusinessAccountPhoneNumber(const Model::GetLinkedWhatsAppBusinessAccountPhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for GetLinkedWhatsAppBusinessAccountPhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLinkedWhatsAppBusinessAccountPhoneNumberRequestT = Model::GetLinkedWhatsAppBusinessAccountPhoneNumberRequest>
        Model::GetLinkedWhatsAppBusinessAccountPhoneNumberOutcomeCallable GetLinkedWhatsAppBusinessAccountPhoneNumberCallable(const GetLinkedWhatsAppBusinessAccountPhoneNumberRequestT& request) const
        {
            return SubmitCallable(&SocialMessagingClient::GetLinkedWhatsAppBusinessAccountPhoneNumber, request);
        }

        /**
         * An Async wrapper for GetLinkedWhatsAppBusinessAccountPhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLinkedWhatsAppBusinessAccountPhoneNumberRequestT = Model::GetLinkedWhatsAppBusinessAccountPhoneNumberRequest>
        void GetLinkedWhatsAppBusinessAccountPhoneNumberAsync(const GetLinkedWhatsAppBusinessAccountPhoneNumberRequestT& request, const GetLinkedWhatsAppBusinessAccountPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SocialMessagingClient::GetLinkedWhatsAppBusinessAccountPhoneNumber, request, handler, context);
        }

        /**
         * <p>Get a media file from the WhatsApp service. On successful completion the
         * media file is retrieved from Meta and stored in the specified Amazon S3 bucket.
         * Use either <code>destinationS3File</code> or
         * <code>destinationS3PresignedUrl</code> for the destination. If both are used
         * then an <code>InvalidParameterException</code> is returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/GetWhatsAppMessageMedia">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWhatsAppMessageMediaOutcome GetWhatsAppMessageMedia(const Model::GetWhatsAppMessageMediaRequest& request) const;

        /**
         * A Callable wrapper for GetWhatsAppMessageMedia that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWhatsAppMessageMediaRequestT = Model::GetWhatsAppMessageMediaRequest>
        Model::GetWhatsAppMessageMediaOutcomeCallable GetWhatsAppMessageMediaCallable(const GetWhatsAppMessageMediaRequestT& request) const
        {
            return SubmitCallable(&SocialMessagingClient::GetWhatsAppMessageMedia, request);
        }

        /**
         * An Async wrapper for GetWhatsAppMessageMedia that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWhatsAppMessageMediaRequestT = Model::GetWhatsAppMessageMediaRequest>
        void GetWhatsAppMessageMediaAsync(const GetWhatsAppMessageMediaRequestT& request, const GetWhatsAppMessageMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SocialMessagingClient::GetWhatsAppMessageMedia, request, handler, context);
        }

        /**
         * <p>Retrieves a specific WhatsApp message template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/GetWhatsAppMessageTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWhatsAppMessageTemplateOutcome GetWhatsAppMessageTemplate(const Model::GetWhatsAppMessageTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetWhatsAppMessageTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWhatsAppMessageTemplateRequestT = Model::GetWhatsAppMessageTemplateRequest>
        Model::GetWhatsAppMessageTemplateOutcomeCallable GetWhatsAppMessageTemplateCallable(const GetWhatsAppMessageTemplateRequestT& request) const
        {
            return SubmitCallable(&SocialMessagingClient::GetWhatsAppMessageTemplate, request);
        }

        /**
         * An Async wrapper for GetWhatsAppMessageTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWhatsAppMessageTemplateRequestT = Model::GetWhatsAppMessageTemplateRequest>
        void GetWhatsAppMessageTemplateAsync(const GetWhatsAppMessageTemplateRequestT& request, const GetWhatsAppMessageTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SocialMessagingClient::GetWhatsAppMessageTemplate, request, handler, context);
        }

        /**
         * <p>List all WhatsApp Business Accounts linked to your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/ListLinkedWhatsAppBusinessAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLinkedWhatsAppBusinessAccountsOutcome ListLinkedWhatsAppBusinessAccounts(const Model::ListLinkedWhatsAppBusinessAccountsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListLinkedWhatsAppBusinessAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLinkedWhatsAppBusinessAccountsRequestT = Model::ListLinkedWhatsAppBusinessAccountsRequest>
        Model::ListLinkedWhatsAppBusinessAccountsOutcomeCallable ListLinkedWhatsAppBusinessAccountsCallable(const ListLinkedWhatsAppBusinessAccountsRequestT& request = {}) const
        {
            return SubmitCallable(&SocialMessagingClient::ListLinkedWhatsAppBusinessAccounts, request);
        }

        /**
         * An Async wrapper for ListLinkedWhatsAppBusinessAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLinkedWhatsAppBusinessAccountsRequestT = Model::ListLinkedWhatsAppBusinessAccountsRequest>
        void ListLinkedWhatsAppBusinessAccountsAsync(const ListLinkedWhatsAppBusinessAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListLinkedWhatsAppBusinessAccountsRequestT& request = {}) const
        {
            return SubmitAsync(&SocialMessagingClient::ListLinkedWhatsAppBusinessAccounts, request, handler, context);
        }

        /**
         * <p>List all tags associated with a resource, such as a phone number or
         * WABA.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&SocialMessagingClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SocialMessagingClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists WhatsApp message templates for a specific WhatsApp Business
         * Account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/ListWhatsAppMessageTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWhatsAppMessageTemplatesOutcome ListWhatsAppMessageTemplates(const Model::ListWhatsAppMessageTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListWhatsAppMessageTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWhatsAppMessageTemplatesRequestT = Model::ListWhatsAppMessageTemplatesRequest>
        Model::ListWhatsAppMessageTemplatesOutcomeCallable ListWhatsAppMessageTemplatesCallable(const ListWhatsAppMessageTemplatesRequestT& request) const
        {
            return SubmitCallable(&SocialMessagingClient::ListWhatsAppMessageTemplates, request);
        }

        /**
         * An Async wrapper for ListWhatsAppMessageTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWhatsAppMessageTemplatesRequestT = Model::ListWhatsAppMessageTemplatesRequest>
        void ListWhatsAppMessageTemplatesAsync(const ListWhatsAppMessageTemplatesRequestT& request, const ListWhatsAppMessageTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SocialMessagingClient::ListWhatsAppMessageTemplates, request, handler, context);
        }

        /**
         * <p>Lists templates available in Meta's template library for WhatsApp
         * messaging.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/ListWhatsAppTemplateLibrary">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWhatsAppTemplateLibraryOutcome ListWhatsAppTemplateLibrary(const Model::ListWhatsAppTemplateLibraryRequest& request) const;

        /**
         * A Callable wrapper for ListWhatsAppTemplateLibrary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWhatsAppTemplateLibraryRequestT = Model::ListWhatsAppTemplateLibraryRequest>
        Model::ListWhatsAppTemplateLibraryOutcomeCallable ListWhatsAppTemplateLibraryCallable(const ListWhatsAppTemplateLibraryRequestT& request) const
        {
            return SubmitCallable(&SocialMessagingClient::ListWhatsAppTemplateLibrary, request);
        }

        /**
         * An Async wrapper for ListWhatsAppTemplateLibrary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWhatsAppTemplateLibraryRequestT = Model::ListWhatsAppTemplateLibraryRequest>
        void ListWhatsAppTemplateLibraryAsync(const ListWhatsAppTemplateLibraryRequestT& request, const ListWhatsAppTemplateLibraryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SocialMessagingClient::ListWhatsAppTemplateLibrary, request, handler, context);
        }

        /**
         * <p>Upload a media file to the WhatsApp service. Only the specified
         * <code>originationPhoneNumberId</code> has the permissions to send the media file
         * when using <a
         * href="https://docs.aws.amazon.com/social-messaging/latest/APIReference/API_SendWhatsAppMessage.html">SendWhatsAppMessage</a>.
         * You must use either <code>sourceS3File</code> or
         * <code>sourceS3PresignedUrl</code> for the source. If both or neither are
         * specified then an <code>InvalidParameterException</code> is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/PostWhatsAppMessageMedia">AWS
         * API Reference</a></p>
         */
        virtual Model::PostWhatsAppMessageMediaOutcome PostWhatsAppMessageMedia(const Model::PostWhatsAppMessageMediaRequest& request) const;

        /**
         * A Callable wrapper for PostWhatsAppMessageMedia that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PostWhatsAppMessageMediaRequestT = Model::PostWhatsAppMessageMediaRequest>
        Model::PostWhatsAppMessageMediaOutcomeCallable PostWhatsAppMessageMediaCallable(const PostWhatsAppMessageMediaRequestT& request) const
        {
            return SubmitCallable(&SocialMessagingClient::PostWhatsAppMessageMedia, request);
        }

        /**
         * An Async wrapper for PostWhatsAppMessageMedia that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PostWhatsAppMessageMediaRequestT = Model::PostWhatsAppMessageMediaRequest>
        void PostWhatsAppMessageMediaAsync(const PostWhatsAppMessageMediaRequestT& request, const PostWhatsAppMessageMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SocialMessagingClient::PostWhatsAppMessageMedia, request, handler, context);
        }

        /**
         * <p>Add an event destination to log event data from WhatsApp for a WhatsApp
         * Business Account (WABA). A WABA can only have one event destination at a time.
         * All resources associated with the WABA use the same event
         * destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/PutWhatsAppBusinessAccountEventDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::PutWhatsAppBusinessAccountEventDestinationsOutcome PutWhatsAppBusinessAccountEventDestinations(const Model::PutWhatsAppBusinessAccountEventDestinationsRequest& request) const;

        /**
         * A Callable wrapper for PutWhatsAppBusinessAccountEventDestinations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutWhatsAppBusinessAccountEventDestinationsRequestT = Model::PutWhatsAppBusinessAccountEventDestinationsRequest>
        Model::PutWhatsAppBusinessAccountEventDestinationsOutcomeCallable PutWhatsAppBusinessAccountEventDestinationsCallable(const PutWhatsAppBusinessAccountEventDestinationsRequestT& request) const
        {
            return SubmitCallable(&SocialMessagingClient::PutWhatsAppBusinessAccountEventDestinations, request);
        }

        /**
         * An Async wrapper for PutWhatsAppBusinessAccountEventDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutWhatsAppBusinessAccountEventDestinationsRequestT = Model::PutWhatsAppBusinessAccountEventDestinationsRequest>
        void PutWhatsAppBusinessAccountEventDestinationsAsync(const PutWhatsAppBusinessAccountEventDestinationsRequestT& request, const PutWhatsAppBusinessAccountEventDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SocialMessagingClient::PutWhatsAppBusinessAccountEventDestinations, request, handler, context);
        }

        /**
         * <p>Send a WhatsApp message. For examples of sending a message using the Amazon
         * Web Services CLI, see <a
         * href="https://docs.aws.amazon.com/social-messaging/latest/userguide/send-message.html">Sending
         * messages</a> in the <i> <i>Amazon Web Services End User Messaging Social User
         * Guide</i> </i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/SendWhatsAppMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::SendWhatsAppMessageOutcome SendWhatsAppMessage(const Model::SendWhatsAppMessageRequest& request) const;

        /**
         * A Callable wrapper for SendWhatsAppMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendWhatsAppMessageRequestT = Model::SendWhatsAppMessageRequest>
        Model::SendWhatsAppMessageOutcomeCallable SendWhatsAppMessageCallable(const SendWhatsAppMessageRequestT& request) const
        {
            return SubmitCallable(&SocialMessagingClient::SendWhatsAppMessage, request);
        }

        /**
         * An Async wrapper for SendWhatsAppMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendWhatsAppMessageRequestT = Model::SendWhatsAppMessageRequest>
        void SendWhatsAppMessageAsync(const SendWhatsAppMessageRequestT& request, const SendWhatsAppMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SocialMessagingClient::SendWhatsAppMessage, request, handler, context);
        }

        /**
         * <p>Adds or overwrites only the specified tags for the specified resource. When
         * you specify an existing tag key, the value is overwritten with the new
         * value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&SocialMessagingClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SocialMessagingClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the specified tags from a resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&SocialMessagingClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SocialMessagingClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing WhatsApp message template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/UpdateWhatsAppMessageTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWhatsAppMessageTemplateOutcome UpdateWhatsAppMessageTemplate(const Model::UpdateWhatsAppMessageTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateWhatsAppMessageTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWhatsAppMessageTemplateRequestT = Model::UpdateWhatsAppMessageTemplateRequest>
        Model::UpdateWhatsAppMessageTemplateOutcomeCallable UpdateWhatsAppMessageTemplateCallable(const UpdateWhatsAppMessageTemplateRequestT& request) const
        {
            return SubmitCallable(&SocialMessagingClient::UpdateWhatsAppMessageTemplate, request);
        }

        /**
         * An Async wrapper for UpdateWhatsAppMessageTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWhatsAppMessageTemplateRequestT = Model::UpdateWhatsAppMessageTemplateRequest>
        void UpdateWhatsAppMessageTemplateAsync(const UpdateWhatsAppMessageTemplateRequestT& request, const UpdateWhatsAppMessageTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SocialMessagingClient::UpdateWhatsAppMessageTemplate, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SocialMessagingEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SocialMessagingClient>;
      void init(const SocialMessagingClientConfiguration& clientConfiguration);

      SocialMessagingClientConfiguration m_clientConfiguration;
      std::shared_ptr<SocialMessagingEndpointProviderBase> m_endpointProvider;
  };

} // namespace SocialMessaging
} // namespace Aws
