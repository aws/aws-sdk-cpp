/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2ServiceClientModel.h>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
  /**
   * <p>Welcome to the <i>Amazon Pinpoint SMS and Voice, version 2 API Reference</i>.
   * This guide provides information about Amazon Pinpoint SMS and Voice, version 2
   * API resources, including supported HTTP methods, parameters, and schemas.</p>
   * <p>Amazon Pinpoint is an Amazon Web Services service that you can use to engage
   * with your recipients across multiple messaging channels. The Amazon Pinpoint SMS
   * and Voice, version 2 API provides programmatic access to options that are unique
   * to the SMS and voice channels and supplements the resources provided by the
   * Amazon Pinpoint API.</p> <p>If you're new to Amazon Pinpoint, it's also helpful
   * to review the <a
   * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">
   * Amazon Pinpoint Developer Guide</a>. The <i>Amazon Pinpoint Developer Guide</i>
   * provides tutorials, code samples, and procedures that demonstrate how to use
   * Amazon Pinpoint features programmatically and how to integrate Amazon Pinpoint
   * functionality into mobile apps and other types of applications. The guide also
   * provides key information, such as Amazon Pinpoint integration with other Amazon
   * Web Services services, and the quotas that apply to use of the service.</p> <p>
   * <b>Regional availability</b> </p> <p>The <i>Amazon Pinpoint SMS and Voice,
   * version 2 API Reference</i> is available in several Amazon Web Services Regions
   * and it provides an endpoint for each of these Regions. For a list of all the
   * Regions and endpoints where the API is currently available, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#pinpoint_region">Amazon
   * Web Services Service Endpoints</a> and <a
   * href="https://docs.aws.amazon.com/general/latest/gr/pinpoint.html">Amazon
   * Pinpoint endpoints and quotas</a> in the Amazon Web Services General Reference.
   * To learn more about Amazon Web Services Regions, see <a
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
  class AWS_PINPOINTSMSVOICEV2_API PinpointSMSVoiceV2Client : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PinpointSMSVoiceV2Client>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef PinpointSMSVoiceV2ClientConfiguration ClientConfigurationType;
      typedef PinpointSMSVoiceV2EndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointSMSVoiceV2Client(const Aws::PinpointSMSVoiceV2::PinpointSMSVoiceV2ClientConfiguration& clientConfiguration = Aws::PinpointSMSVoiceV2::PinpointSMSVoiceV2ClientConfiguration(),
                                 std::shared_ptr<PinpointSMSVoiceV2EndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointSMSVoiceV2Client(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<PinpointSMSVoiceV2EndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::PinpointSMSVoiceV2::PinpointSMSVoiceV2ClientConfiguration& clientConfiguration = Aws::PinpointSMSVoiceV2::PinpointSMSVoiceV2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PinpointSMSVoiceV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<PinpointSMSVoiceV2EndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::PinpointSMSVoiceV2::PinpointSMSVoiceV2ClientConfiguration& clientConfiguration = Aws::PinpointSMSVoiceV2::PinpointSMSVoiceV2ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointSMSVoiceV2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointSMSVoiceV2Client(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PinpointSMSVoiceV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PinpointSMSVoiceV2Client();

        /**
         * <p>Associates the specified origination identity with a pool.</p> <p>If the
         * origination identity is a phone number and is already associated with another
         * pool, an error is returned. A sender ID can be associated with multiple
         * pools.</p> <p>If the origination identity configuration doesn't match the pool's
         * configuration, an error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/AssociateOriginationIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateOriginationIdentityOutcome AssociateOriginationIdentity(const Model::AssociateOriginationIdentityRequest& request) const;

        /**
         * A Callable wrapper for AssociateOriginationIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateOriginationIdentityRequestT = Model::AssociateOriginationIdentityRequest>
        Model::AssociateOriginationIdentityOutcomeCallable AssociateOriginationIdentityCallable(const AssociateOriginationIdentityRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::AssociateOriginationIdentity, request);
        }

        /**
         * An Async wrapper for AssociateOriginationIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateOriginationIdentityRequestT = Model::AssociateOriginationIdentityRequest>
        void AssociateOriginationIdentityAsync(const AssociateOriginationIdentityRequestT& request, const AssociateOriginationIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::AssociateOriginationIdentity, request, handler, context);
        }

        /**
         * <p>Creates a new configuration set. After you create the configuration set, you
         * can add one or more event destinations to it.</p> <p>A configuration set is a
         * set of rules that you apply to the SMS and voice messages that you send.</p>
         * <p>When you send a message, you can optionally specify a single configuration
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreateConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationSetOutcome CreateConfigurationSet(const Model::CreateConfigurationSetRequest& request) const;

        /**
         * A Callable wrapper for CreateConfigurationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConfigurationSetRequestT = Model::CreateConfigurationSetRequest>
        Model::CreateConfigurationSetOutcomeCallable CreateConfigurationSetCallable(const CreateConfigurationSetRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::CreateConfigurationSet, request);
        }

        /**
         * An Async wrapper for CreateConfigurationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfigurationSetRequestT = Model::CreateConfigurationSetRequest>
        void CreateConfigurationSetAsync(const CreateConfigurationSetRequestT& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::CreateConfigurationSet, request, handler, context);
        }

        /**
         * <p>Creates a new event destination in a configuration set.</p> <p>An event
         * destination is a location where you send message events. The event options are
         * Amazon CloudWatch, Amazon Kinesis Data Firehose, or Amazon SNS. For example,
         * when a message is delivered successfully, you can send information about that
         * event to an event destination, or send notifications to endpoints that are
         * subscribed to an Amazon SNS topic.</p> <p>Each configuration set can contain
         * between 0 and 5 event destinations. Each event destination can contain a
         * reference to a single destination, such as a CloudWatch or Kinesis Data Firehose
         * destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreateEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventDestinationOutcome CreateEventDestination(const Model::CreateEventDestinationRequest& request) const;

        /**
         * A Callable wrapper for CreateEventDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEventDestinationRequestT = Model::CreateEventDestinationRequest>
        Model::CreateEventDestinationOutcomeCallable CreateEventDestinationCallable(const CreateEventDestinationRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::CreateEventDestination, request);
        }

        /**
         * An Async wrapper for CreateEventDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEventDestinationRequestT = Model::CreateEventDestinationRequest>
        void CreateEventDestinationAsync(const CreateEventDestinationRequestT& request, const CreateEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::CreateEventDestination, request, handler, context);
        }

        /**
         * <p>Creates a new opt-out list.</p> <p>If the opt-out list name already exists,
         * an error is returned.</p> <p>An opt-out list is a list of phone numbers that are
         * opted out, meaning you can't send SMS or voice messages to them. If end user
         * replies with the keyword "STOP," an entry for the phone number is added to the
         * opt-out list. In addition to STOP, your recipients can use any supported opt-out
         * keyword, such as CANCEL or OPTOUT. For a list of supported opt-out keywords, see
         * <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-manage.html#channels-sms-manage-optout">
         * SMS opt out </a> in the <i>Amazon Pinpoint User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreateOptOutList">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOptOutListOutcome CreateOptOutList(const Model::CreateOptOutListRequest& request) const;

        /**
         * A Callable wrapper for CreateOptOutList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOptOutListRequestT = Model::CreateOptOutListRequest>
        Model::CreateOptOutListOutcomeCallable CreateOptOutListCallable(const CreateOptOutListRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::CreateOptOutList, request);
        }

        /**
         * An Async wrapper for CreateOptOutList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOptOutListRequestT = Model::CreateOptOutListRequest>
        void CreateOptOutListAsync(const CreateOptOutListRequestT& request, const CreateOptOutListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::CreateOptOutList, request, handler, context);
        }

        /**
         * <p>Creates a new pool and associates the specified origination identity to the
         * pool. A pool can include one or more phone numbers and SenderIds that are
         * associated with your Amazon Web Services account.</p> <p>The new pool inherits
         * its configuration from the specified origination identity. This includes
         * keywords, message type, opt-out list, two-way configuration, and self-managed
         * opt-out configuration. Deletion protection isn't inherited from the origination
         * identity and defaults to false.</p> <p>If the origination identity is a phone
         * number and is already associated with another pool, an error is returned. A
         * sender ID can be associated with multiple pools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreatePool">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePoolOutcome CreatePool(const Model::CreatePoolRequest& request) const;

        /**
         * A Callable wrapper for CreatePool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePoolRequestT = Model::CreatePoolRequest>
        Model::CreatePoolOutcomeCallable CreatePoolCallable(const CreatePoolRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::CreatePool, request);
        }

        /**
         * An Async wrapper for CreatePool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePoolRequestT = Model::CreatePoolRequest>
        void CreatePoolAsync(const CreatePoolRequestT& request, const CreatePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::CreatePool, request, handler, context);
        }

        /**
         * <p>Creates a new registration based on the <b>RegistrationType</b> field.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreateRegistration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRegistrationOutcome CreateRegistration(const Model::CreateRegistrationRequest& request) const;

        /**
         * A Callable wrapper for CreateRegistration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRegistrationRequestT = Model::CreateRegistrationRequest>
        Model::CreateRegistrationOutcomeCallable CreateRegistrationCallable(const CreateRegistrationRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::CreateRegistration, request);
        }

        /**
         * An Async wrapper for CreateRegistration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRegistrationRequestT = Model::CreateRegistrationRequest>
        void CreateRegistrationAsync(const CreateRegistrationRequestT& request, const CreateRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::CreateRegistration, request, handler, context);
        }

        /**
         * <p>Associate the registration with an origination identity such as a phone
         * number or sender ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreateRegistrationAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRegistrationAssociationOutcome CreateRegistrationAssociation(const Model::CreateRegistrationAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateRegistrationAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRegistrationAssociationRequestT = Model::CreateRegistrationAssociationRequest>
        Model::CreateRegistrationAssociationOutcomeCallable CreateRegistrationAssociationCallable(const CreateRegistrationAssociationRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::CreateRegistrationAssociation, request);
        }

        /**
         * An Async wrapper for CreateRegistrationAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRegistrationAssociationRequestT = Model::CreateRegistrationAssociationRequest>
        void CreateRegistrationAssociationAsync(const CreateRegistrationAssociationRequestT& request, const CreateRegistrationAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::CreateRegistrationAssociation, request, handler, context);
        }

        /**
         * <p>Create a new registration attachment to use for uploading a file or a URL to
         * a file. The maximum file size is 1MiB and valid file extensions are PDF, JPEG
         * and PNG. For example, many sender ID registrations require a signed “letter of
         * authorization” (LOA) to be submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreateRegistrationAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRegistrationAttachmentOutcome CreateRegistrationAttachment(const Model::CreateRegistrationAttachmentRequest& request) const;

        /**
         * A Callable wrapper for CreateRegistrationAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRegistrationAttachmentRequestT = Model::CreateRegistrationAttachmentRequest>
        Model::CreateRegistrationAttachmentOutcomeCallable CreateRegistrationAttachmentCallable(const CreateRegistrationAttachmentRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::CreateRegistrationAttachment, request);
        }

        /**
         * An Async wrapper for CreateRegistrationAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRegistrationAttachmentRequestT = Model::CreateRegistrationAttachmentRequest>
        void CreateRegistrationAttachmentAsync(const CreateRegistrationAttachmentRequestT& request, const CreateRegistrationAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::CreateRegistrationAttachment, request, handler, context);
        }

        /**
         * <p>Create a new version of the registration and increase the
         * <b>VersionNumber</b>. The previous version of the registration becomes
         * read-only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreateRegistrationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRegistrationVersionOutcome CreateRegistrationVersion(const Model::CreateRegistrationVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateRegistrationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRegistrationVersionRequestT = Model::CreateRegistrationVersionRequest>
        Model::CreateRegistrationVersionOutcomeCallable CreateRegistrationVersionCallable(const CreateRegistrationVersionRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::CreateRegistrationVersion, request);
        }

        /**
         * An Async wrapper for CreateRegistrationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRegistrationVersionRequestT = Model::CreateRegistrationVersionRequest>
        void CreateRegistrationVersionAsync(const CreateRegistrationVersionRequestT& request, const CreateRegistrationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::CreateRegistrationVersion, request, handler, context);
        }

        /**
         * <p>You can only send messages to verified destination numbers when your account
         * is in the sandbox. You can add up to 10 verified destination
         * numbers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreateVerifiedDestinationNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVerifiedDestinationNumberOutcome CreateVerifiedDestinationNumber(const Model::CreateVerifiedDestinationNumberRequest& request) const;

        /**
         * A Callable wrapper for CreateVerifiedDestinationNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVerifiedDestinationNumberRequestT = Model::CreateVerifiedDestinationNumberRequest>
        Model::CreateVerifiedDestinationNumberOutcomeCallable CreateVerifiedDestinationNumberCallable(const CreateVerifiedDestinationNumberRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::CreateVerifiedDestinationNumber, request);
        }

        /**
         * An Async wrapper for CreateVerifiedDestinationNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVerifiedDestinationNumberRequestT = Model::CreateVerifiedDestinationNumberRequest>
        void CreateVerifiedDestinationNumberAsync(const CreateVerifiedDestinationNumberRequestT& request, const CreateVerifiedDestinationNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::CreateVerifiedDestinationNumber, request, handler, context);
        }

        /**
         * <p>Deletes an existing configuration set.</p> <p>A configuration set is a set of
         * rules that you apply to voice and SMS messages that you send. In a configuration
         * set, you can specify a destination for specific types of events related to voice
         * and SMS messages. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationSetOutcome DeleteConfigurationSet(const Model::DeleteConfigurationSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfigurationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfigurationSetRequestT = Model::DeleteConfigurationSetRequest>
        Model::DeleteConfigurationSetOutcomeCallable DeleteConfigurationSetCallable(const DeleteConfigurationSetRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DeleteConfigurationSet, request);
        }

        /**
         * An Async wrapper for DeleteConfigurationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfigurationSetRequestT = Model::DeleteConfigurationSetRequest>
        void DeleteConfigurationSetAsync(const DeleteConfigurationSetRequestT& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DeleteConfigurationSet, request, handler, context);
        }

        /**
         * <p>Deletes an existing default message type on a configuration set.</p> <p> A
         * message type is a type of messages that you plan to send. If you send
         * account-related messages or time-sensitive messages such as one-time passcodes,
         * choose <b>Transactional</b>. If you plan to send messages that contain marketing
         * material or other promotional content, choose <b>Promotional</b>. This setting
         * applies to your entire Amazon Web Services account. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteDefaultMessageType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDefaultMessageTypeOutcome DeleteDefaultMessageType(const Model::DeleteDefaultMessageTypeRequest& request) const;

        /**
         * A Callable wrapper for DeleteDefaultMessageType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDefaultMessageTypeRequestT = Model::DeleteDefaultMessageTypeRequest>
        Model::DeleteDefaultMessageTypeOutcomeCallable DeleteDefaultMessageTypeCallable(const DeleteDefaultMessageTypeRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DeleteDefaultMessageType, request);
        }

        /**
         * An Async wrapper for DeleteDefaultMessageType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDefaultMessageTypeRequestT = Model::DeleteDefaultMessageTypeRequest>
        void DeleteDefaultMessageTypeAsync(const DeleteDefaultMessageTypeRequestT& request, const DeleteDefaultMessageTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DeleteDefaultMessageType, request, handler, context);
        }

        /**
         * <p>Deletes an existing default sender ID on a configuration set.</p> <p>A
         * default sender ID is the identity that appears on recipients' devices when they
         * receive SMS messages. Support for sender ID capabilities varies by country or
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteDefaultSenderId">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDefaultSenderIdOutcome DeleteDefaultSenderId(const Model::DeleteDefaultSenderIdRequest& request) const;

        /**
         * A Callable wrapper for DeleteDefaultSenderId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDefaultSenderIdRequestT = Model::DeleteDefaultSenderIdRequest>
        Model::DeleteDefaultSenderIdOutcomeCallable DeleteDefaultSenderIdCallable(const DeleteDefaultSenderIdRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DeleteDefaultSenderId, request);
        }

        /**
         * An Async wrapper for DeleteDefaultSenderId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDefaultSenderIdRequestT = Model::DeleteDefaultSenderIdRequest>
        void DeleteDefaultSenderIdAsync(const DeleteDefaultSenderIdRequestT& request, const DeleteDefaultSenderIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DeleteDefaultSenderId, request, handler, context);
        }

        /**
         * <p>Deletes an existing event destination.</p> <p>An event destination is a
         * location where you send response information about the messages that you send.
         * For example, when a message is delivered successfully, you can send information
         * about that event to an Amazon CloudWatch destination, or send notifications to
         * endpoints that are subscribed to an Amazon SNS topic.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventDestinationOutcome DeleteEventDestination(const Model::DeleteEventDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEventDestinationRequestT = Model::DeleteEventDestinationRequest>
        Model::DeleteEventDestinationOutcomeCallable DeleteEventDestinationCallable(const DeleteEventDestinationRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DeleteEventDestination, request);
        }

        /**
         * An Async wrapper for DeleteEventDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEventDestinationRequestT = Model::DeleteEventDestinationRequest>
        void DeleteEventDestinationAsync(const DeleteEventDestinationRequestT& request, const DeleteEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DeleteEventDestination, request, handler, context);
        }

        /**
         * <p>Deletes an existing keyword from an origination phone number or pool.</p>
         * <p>A keyword is a word that you can search for on a particular phone number or
         * pool. It is also a specific word or phrase that an end user can send to your
         * number to elicit a response, such as an informational message or a special
         * offer. When your number receives a message that begins with a keyword, Amazon
         * Pinpoint responds with a customizable message.</p> <p>Keywords "HELP" and "STOP"
         * can't be deleted or modified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteKeyword">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKeywordOutcome DeleteKeyword(const Model::DeleteKeywordRequest& request) const;

        /**
         * A Callable wrapper for DeleteKeyword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteKeywordRequestT = Model::DeleteKeywordRequest>
        Model::DeleteKeywordOutcomeCallable DeleteKeywordCallable(const DeleteKeywordRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DeleteKeyword, request);
        }

        /**
         * An Async wrapper for DeleteKeyword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteKeywordRequestT = Model::DeleteKeywordRequest>
        void DeleteKeywordAsync(const DeleteKeywordRequestT& request, const DeleteKeywordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DeleteKeyword, request, handler, context);
        }

        /**
         * <p>Deletes an existing opt-out list. All opted out phone numbers in the opt-out
         * list are deleted.</p> <p>If the specified opt-out list name doesn't exist or is
         * in-use by an origination phone number or pool, an error is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteOptOutList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOptOutListOutcome DeleteOptOutList(const Model::DeleteOptOutListRequest& request) const;

        /**
         * A Callable wrapper for DeleteOptOutList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOptOutListRequestT = Model::DeleteOptOutListRequest>
        Model::DeleteOptOutListOutcomeCallable DeleteOptOutListCallable(const DeleteOptOutListRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DeleteOptOutList, request);
        }

        /**
         * An Async wrapper for DeleteOptOutList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOptOutListRequestT = Model::DeleteOptOutListRequest>
        void DeleteOptOutListAsync(const DeleteOptOutListRequestT& request, const DeleteOptOutListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DeleteOptOutList, request, handler, context);
        }

        /**
         * <p>Deletes an existing opted out destination phone number from the specified
         * opt-out list.</p> <p>Each destination phone number can only be deleted once
         * every 30 days.</p> <p>If the specified destination phone number doesn't exist or
         * if the opt-out list doesn't exist, an error is returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteOptedOutNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOptedOutNumberOutcome DeleteOptedOutNumber(const Model::DeleteOptedOutNumberRequest& request) const;

        /**
         * A Callable wrapper for DeleteOptedOutNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOptedOutNumberRequestT = Model::DeleteOptedOutNumberRequest>
        Model::DeleteOptedOutNumberOutcomeCallable DeleteOptedOutNumberCallable(const DeleteOptedOutNumberRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DeleteOptedOutNumber, request);
        }

        /**
         * An Async wrapper for DeleteOptedOutNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOptedOutNumberRequestT = Model::DeleteOptedOutNumberRequest>
        void DeleteOptedOutNumberAsync(const DeleteOptedOutNumberRequestT& request, const DeleteOptedOutNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DeleteOptedOutNumber, request, handler, context);
        }

        /**
         * <p>Deletes an existing pool. Deleting a pool disassociates all origination
         * identities from that pool.</p> <p>If the pool status isn't active or if deletion
         * protection is enabled, an error is returned.</p> <p>A pool is a collection of
         * phone numbers and SenderIds. A pool can include one or more phone numbers and
         * SenderIds that are associated with your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeletePool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePoolOutcome DeletePool(const Model::DeletePoolRequest& request) const;

        /**
         * A Callable wrapper for DeletePool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePoolRequestT = Model::DeletePoolRequest>
        Model::DeletePoolOutcomeCallable DeletePoolCallable(const DeletePoolRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DeletePool, request);
        }

        /**
         * An Async wrapper for DeletePool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePoolRequestT = Model::DeletePoolRequest>
        void DeletePoolAsync(const DeletePoolRequestT& request, const DeletePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DeletePool, request, handler, context);
        }

        /**
         * <p>Permanently delete an existing registration from your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteRegistration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegistrationOutcome DeleteRegistration(const Model::DeleteRegistrationRequest& request) const;

        /**
         * A Callable wrapper for DeleteRegistration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRegistrationRequestT = Model::DeleteRegistrationRequest>
        Model::DeleteRegistrationOutcomeCallable DeleteRegistrationCallable(const DeleteRegistrationRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DeleteRegistration, request);
        }

        /**
         * An Async wrapper for DeleteRegistration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRegistrationRequestT = Model::DeleteRegistrationRequest>
        void DeleteRegistrationAsync(const DeleteRegistrationRequestT& request, const DeleteRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DeleteRegistration, request, handler, context);
        }

        /**
         * <p>Permanently delete the specified registration attachment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteRegistrationAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegistrationAttachmentOutcome DeleteRegistrationAttachment(const Model::DeleteRegistrationAttachmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteRegistrationAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRegistrationAttachmentRequestT = Model::DeleteRegistrationAttachmentRequest>
        Model::DeleteRegistrationAttachmentOutcomeCallable DeleteRegistrationAttachmentCallable(const DeleteRegistrationAttachmentRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DeleteRegistrationAttachment, request);
        }

        /**
         * An Async wrapper for DeleteRegistrationAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRegistrationAttachmentRequestT = Model::DeleteRegistrationAttachmentRequest>
        void DeleteRegistrationAttachmentAsync(const DeleteRegistrationAttachmentRequestT& request, const DeleteRegistrationAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DeleteRegistrationAttachment, request, handler, context);
        }

        /**
         * <p>Delete the value in a registration form field.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteRegistrationFieldValue">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegistrationFieldValueOutcome DeleteRegistrationFieldValue(const Model::DeleteRegistrationFieldValueRequest& request) const;

        /**
         * A Callable wrapper for DeleteRegistrationFieldValue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRegistrationFieldValueRequestT = Model::DeleteRegistrationFieldValueRequest>
        Model::DeleteRegistrationFieldValueOutcomeCallable DeleteRegistrationFieldValueCallable(const DeleteRegistrationFieldValueRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DeleteRegistrationFieldValue, request);
        }

        /**
         * An Async wrapper for DeleteRegistrationFieldValue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRegistrationFieldValueRequestT = Model::DeleteRegistrationFieldValueRequest>
        void DeleteRegistrationFieldValueAsync(const DeleteRegistrationFieldValueRequestT& request, const DeleteRegistrationFieldValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DeleteRegistrationFieldValue, request, handler, context);
        }

        /**
         * <p>Deletes an account-level monthly spending limit override for sending text
         * messages. Deleting a spend limit override will set the
         * <code>EnforcedLimit</code> to equal the <code>MaxLimit</code>, which is
         * controlled by Amazon Web Services. For more information on spend limits (quotas)
         * see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/quotas.html">Amazon
         * Pinpoint quotas </a> in the <i>Amazon Pinpoint Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteTextMessageSpendLimitOverride">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTextMessageSpendLimitOverrideOutcome DeleteTextMessageSpendLimitOverride(const Model::DeleteTextMessageSpendLimitOverrideRequest& request) const;

        /**
         * A Callable wrapper for DeleteTextMessageSpendLimitOverride that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTextMessageSpendLimitOverrideRequestT = Model::DeleteTextMessageSpendLimitOverrideRequest>
        Model::DeleteTextMessageSpendLimitOverrideOutcomeCallable DeleteTextMessageSpendLimitOverrideCallable(const DeleteTextMessageSpendLimitOverrideRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DeleteTextMessageSpendLimitOverride, request);
        }

        /**
         * An Async wrapper for DeleteTextMessageSpendLimitOverride that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTextMessageSpendLimitOverrideRequestT = Model::DeleteTextMessageSpendLimitOverrideRequest>
        void DeleteTextMessageSpendLimitOverrideAsync(const DeleteTextMessageSpendLimitOverrideRequestT& request, const DeleteTextMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DeleteTextMessageSpendLimitOverride, request, handler, context);
        }

        /**
         * <p>Delete a verified destination phone number.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteVerifiedDestinationNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVerifiedDestinationNumberOutcome DeleteVerifiedDestinationNumber(const Model::DeleteVerifiedDestinationNumberRequest& request) const;

        /**
         * A Callable wrapper for DeleteVerifiedDestinationNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVerifiedDestinationNumberRequestT = Model::DeleteVerifiedDestinationNumberRequest>
        Model::DeleteVerifiedDestinationNumberOutcomeCallable DeleteVerifiedDestinationNumberCallable(const DeleteVerifiedDestinationNumberRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DeleteVerifiedDestinationNumber, request);
        }

        /**
         * An Async wrapper for DeleteVerifiedDestinationNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVerifiedDestinationNumberRequestT = Model::DeleteVerifiedDestinationNumberRequest>
        void DeleteVerifiedDestinationNumberAsync(const DeleteVerifiedDestinationNumberRequestT& request, const DeleteVerifiedDestinationNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DeleteVerifiedDestinationNumber, request, handler, context);
        }

        /**
         * <p>Deletes an account level monthly spend limit override for sending voice
         * messages. Deleting a spend limit override sets the <code>EnforcedLimit</code>
         * equal to the <code>MaxLimit</code>, which is controlled by Amazon Web Services.
         * For more information on spending limits (quotas) see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/quotas.html">Amazon
         * Pinpoint quotas</a> in the <i>Amazon Pinpoint Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteVoiceMessageSpendLimitOverride">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceMessageSpendLimitOverrideOutcome DeleteVoiceMessageSpendLimitOverride(const Model::DeleteVoiceMessageSpendLimitOverrideRequest& request) const;

        /**
         * A Callable wrapper for DeleteVoiceMessageSpendLimitOverride that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVoiceMessageSpendLimitOverrideRequestT = Model::DeleteVoiceMessageSpendLimitOverrideRequest>
        Model::DeleteVoiceMessageSpendLimitOverrideOutcomeCallable DeleteVoiceMessageSpendLimitOverrideCallable(const DeleteVoiceMessageSpendLimitOverrideRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DeleteVoiceMessageSpendLimitOverride, request);
        }

        /**
         * An Async wrapper for DeleteVoiceMessageSpendLimitOverride that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVoiceMessageSpendLimitOverrideRequestT = Model::DeleteVoiceMessageSpendLimitOverrideRequest>
        void DeleteVoiceMessageSpendLimitOverrideAsync(const DeleteVoiceMessageSpendLimitOverrideRequestT& request, const DeleteVoiceMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DeleteVoiceMessageSpendLimitOverride, request, handler, context);
        }

        /**
         * <p>Describes attributes of your Amazon Web Services account. The supported
         * account attributes include account tier, which indicates whether your account is
         * in the sandbox or production environment. When you're ready to move your account
         * out of the sandbox, create an Amazon Web Services Support case for a service
         * limit increase request.</p> <p>New Amazon Pinpoint accounts are placed into an
         * SMS or voice sandbox. The sandbox protects both Amazon Web Services end
         * recipients and SMS or voice recipients from fraud and abuse. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountAttributesOutcome DescribeAccountAttributes(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAccountAttributesRequestT = Model::DescribeAccountAttributesRequest>
        Model::DescribeAccountAttributesOutcomeCallable DescribeAccountAttributesCallable(const DescribeAccountAttributesRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DescribeAccountAttributes, request);
        }

        /**
         * An Async wrapper for DescribeAccountAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountAttributesRequestT = Model::DescribeAccountAttributesRequest>
        void DescribeAccountAttributesAsync(const DescribeAccountAttributesRequestT& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DescribeAccountAttributes, request, handler, context);
        }

        /**
         * <p>Describes the current Amazon Pinpoint SMS Voice V2 resource quotas for your
         * account. The description for a quota includes the quota name, current usage
         * toward that quota, and the quota's maximum value.</p> <p>When you establish an
         * Amazon Web Services account, the account has initial quotas on the maximum
         * number of configuration sets, opt-out lists, phone numbers, and pools that you
         * can create in a given Region. For more information see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/quotas.html">
         * Amazon Pinpoint quotas </a> in the <i>Amazon Pinpoint Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeAccountLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountLimitsOutcome DescribeAccountLimits(const Model::DescribeAccountLimitsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAccountLimitsRequestT = Model::DescribeAccountLimitsRequest>
        Model::DescribeAccountLimitsOutcomeCallable DescribeAccountLimitsCallable(const DescribeAccountLimitsRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DescribeAccountLimits, request);
        }

        /**
         * An Async wrapper for DescribeAccountLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountLimitsRequestT = Model::DescribeAccountLimitsRequest>
        void DescribeAccountLimitsAsync(const DescribeAccountLimitsRequestT& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DescribeAccountLimits, request, handler, context);
        }

        /**
         * <p>Describes the specified configuration sets or all in your account.</p> <p>If
         * you specify configuration set names, the output includes information for only
         * the specified configuration sets. If you specify filters, the output includes
         * information for only those configuration sets that meet the filter criteria. If
         * you don't specify configuration set names or filters, the output includes
         * information for all configuration sets.</p> <p>If you specify a configuration
         * set name that isn't valid, an error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeConfigurationSets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationSetsOutcome DescribeConfigurationSets(const Model::DescribeConfigurationSetsRequest& request) const;

        /**
         * A Callable wrapper for DescribeConfigurationSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConfigurationSetsRequestT = Model::DescribeConfigurationSetsRequest>
        Model::DescribeConfigurationSetsOutcomeCallable DescribeConfigurationSetsCallable(const DescribeConfigurationSetsRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DescribeConfigurationSets, request);
        }

        /**
         * An Async wrapper for DescribeConfigurationSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConfigurationSetsRequestT = Model::DescribeConfigurationSetsRequest>
        void DescribeConfigurationSetsAsync(const DescribeConfigurationSetsRequestT& request, const DescribeConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DescribeConfigurationSets, request, handler, context);
        }

        /**
         * <p>Describes the specified keywords or all keywords on your origination phone
         * number or pool.</p> <p>A keyword is a word that you can search for on a
         * particular phone number or pool. It is also a specific word or phrase that an
         * end user can send to your number to elicit a response, such as an informational
         * message or a special offer. When your number receives a message that begins with
         * a keyword, Amazon Pinpoint responds with a customizable message.</p> <p>If you
         * specify a keyword that isn't valid, an error is returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeKeywords">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeKeywordsOutcome DescribeKeywords(const Model::DescribeKeywordsRequest& request) const;

        /**
         * A Callable wrapper for DescribeKeywords that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeKeywordsRequestT = Model::DescribeKeywordsRequest>
        Model::DescribeKeywordsOutcomeCallable DescribeKeywordsCallable(const DescribeKeywordsRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DescribeKeywords, request);
        }

        /**
         * An Async wrapper for DescribeKeywords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeKeywordsRequestT = Model::DescribeKeywordsRequest>
        void DescribeKeywordsAsync(const DescribeKeywordsRequestT& request, const DescribeKeywordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DescribeKeywords, request, handler, context);
        }

        /**
         * <p>Describes the specified opt-out list or all opt-out lists in your
         * account.</p> <p>If you specify opt-out list names, the output includes
         * information for only the specified opt-out lists. Opt-out lists include only
         * those that meet the filter criteria. If you don't specify opt-out list names or
         * filters, the output includes information for all opt-out lists.</p> <p>If you
         * specify an opt-out list name that isn't valid, an error is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeOptOutLists">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOptOutListsOutcome DescribeOptOutLists(const Model::DescribeOptOutListsRequest& request) const;

        /**
         * A Callable wrapper for DescribeOptOutLists that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOptOutListsRequestT = Model::DescribeOptOutListsRequest>
        Model::DescribeOptOutListsOutcomeCallable DescribeOptOutListsCallable(const DescribeOptOutListsRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DescribeOptOutLists, request);
        }

        /**
         * An Async wrapper for DescribeOptOutLists that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOptOutListsRequestT = Model::DescribeOptOutListsRequest>
        void DescribeOptOutListsAsync(const DescribeOptOutListsRequestT& request, const DescribeOptOutListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DescribeOptOutLists, request, handler, context);
        }

        /**
         * <p>Describes the specified opted out destination numbers or all opted out
         * destination numbers in an opt-out list.</p> <p>If you specify opted out numbers,
         * the output includes information for only the specified opted out numbers. If you
         * specify filters, the output includes information for only those opted out
         * numbers that meet the filter criteria. If you don't specify opted out numbers or
         * filters, the output includes information for all opted out destination numbers
         * in your opt-out list.</p> <p>If you specify an opted out number that isn't
         * valid, an error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeOptedOutNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOptedOutNumbersOutcome DescribeOptedOutNumbers(const Model::DescribeOptedOutNumbersRequest& request) const;

        /**
         * A Callable wrapper for DescribeOptedOutNumbers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOptedOutNumbersRequestT = Model::DescribeOptedOutNumbersRequest>
        Model::DescribeOptedOutNumbersOutcomeCallable DescribeOptedOutNumbersCallable(const DescribeOptedOutNumbersRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DescribeOptedOutNumbers, request);
        }

        /**
         * An Async wrapper for DescribeOptedOutNumbers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOptedOutNumbersRequestT = Model::DescribeOptedOutNumbersRequest>
        void DescribeOptedOutNumbersAsync(const DescribeOptedOutNumbersRequestT& request, const DescribeOptedOutNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DescribeOptedOutNumbers, request, handler, context);
        }

        /**
         * <p>Describes the specified origination phone number, or all the phone numbers in
         * your account.</p> <p>If you specify phone number IDs, the output includes
         * information for only the specified phone numbers. If you specify filters, the
         * output includes information for only those phone numbers that meet the filter
         * criteria. If you don't specify phone number IDs or filters, the output includes
         * information for all phone numbers.</p> <p>If you specify a phone number ID that
         * isn't valid, an error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribePhoneNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePhoneNumbersOutcome DescribePhoneNumbers(const Model::DescribePhoneNumbersRequest& request) const;

        /**
         * A Callable wrapper for DescribePhoneNumbers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePhoneNumbersRequestT = Model::DescribePhoneNumbersRequest>
        Model::DescribePhoneNumbersOutcomeCallable DescribePhoneNumbersCallable(const DescribePhoneNumbersRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DescribePhoneNumbers, request);
        }

        /**
         * An Async wrapper for DescribePhoneNumbers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePhoneNumbersRequestT = Model::DescribePhoneNumbersRequest>
        void DescribePhoneNumbersAsync(const DescribePhoneNumbersRequestT& request, const DescribePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DescribePhoneNumbers, request, handler, context);
        }

        /**
         * <p>Retrieves the specified pools or all pools associated with your Amazon Web
         * Services account.</p> <p>If you specify pool IDs, the output includes
         * information for only the specified pools. If you specify filters, the output
         * includes information for only those pools that meet the filter criteria. If you
         * don't specify pool IDs or filters, the output includes information for all
         * pools.</p> <p>If you specify a pool ID that isn't valid, an error is
         * returned.</p> <p>A pool is a collection of phone numbers and SenderIds. A pool
         * can include one or more phone numbers and SenderIds that are associated with
         * your Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribePools">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePoolsOutcome DescribePools(const Model::DescribePoolsRequest& request) const;

        /**
         * A Callable wrapper for DescribePools that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePoolsRequestT = Model::DescribePoolsRequest>
        Model::DescribePoolsOutcomeCallable DescribePoolsCallable(const DescribePoolsRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DescribePools, request);
        }

        /**
         * An Async wrapper for DescribePools that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePoolsRequestT = Model::DescribePoolsRequest>
        void DescribePoolsAsync(const DescribePoolsRequestT& request, const DescribePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DescribePools, request, handler, context);
        }

        /**
         * <p>Retrieves the specified registration attachments or all registration
         * attachments associated with your Amazon Web Services account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeRegistrationAttachments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegistrationAttachmentsOutcome DescribeRegistrationAttachments(const Model::DescribeRegistrationAttachmentsRequest& request) const;

        /**
         * A Callable wrapper for DescribeRegistrationAttachments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRegistrationAttachmentsRequestT = Model::DescribeRegistrationAttachmentsRequest>
        Model::DescribeRegistrationAttachmentsOutcomeCallable DescribeRegistrationAttachmentsCallable(const DescribeRegistrationAttachmentsRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DescribeRegistrationAttachments, request);
        }

        /**
         * An Async wrapper for DescribeRegistrationAttachments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRegistrationAttachmentsRequestT = Model::DescribeRegistrationAttachmentsRequest>
        void DescribeRegistrationAttachmentsAsync(const DescribeRegistrationAttachmentsRequestT& request, const DescribeRegistrationAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DescribeRegistrationAttachments, request, handler, context);
        }

        /**
         * <p>Retrieves the specified registration type field definitions. You can use
         * DescribeRegistrationFieldDefinitions to view the requirements for creating,
         * filling out, and submitting each registration type.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeRegistrationFieldDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegistrationFieldDefinitionsOutcome DescribeRegistrationFieldDefinitions(const Model::DescribeRegistrationFieldDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeRegistrationFieldDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRegistrationFieldDefinitionsRequestT = Model::DescribeRegistrationFieldDefinitionsRequest>
        Model::DescribeRegistrationFieldDefinitionsOutcomeCallable DescribeRegistrationFieldDefinitionsCallable(const DescribeRegistrationFieldDefinitionsRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DescribeRegistrationFieldDefinitions, request);
        }

        /**
         * An Async wrapper for DescribeRegistrationFieldDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRegistrationFieldDefinitionsRequestT = Model::DescribeRegistrationFieldDefinitionsRequest>
        void DescribeRegistrationFieldDefinitionsAsync(const DescribeRegistrationFieldDefinitionsRequestT& request, const DescribeRegistrationFieldDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DescribeRegistrationFieldDefinitions, request, handler, context);
        }

        /**
         * <p>Retrieves the specified registration field values.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeRegistrationFieldValues">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegistrationFieldValuesOutcome DescribeRegistrationFieldValues(const Model::DescribeRegistrationFieldValuesRequest& request) const;

        /**
         * A Callable wrapper for DescribeRegistrationFieldValues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRegistrationFieldValuesRequestT = Model::DescribeRegistrationFieldValuesRequest>
        Model::DescribeRegistrationFieldValuesOutcomeCallable DescribeRegistrationFieldValuesCallable(const DescribeRegistrationFieldValuesRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DescribeRegistrationFieldValues, request);
        }

        /**
         * An Async wrapper for DescribeRegistrationFieldValues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRegistrationFieldValuesRequestT = Model::DescribeRegistrationFieldValuesRequest>
        void DescribeRegistrationFieldValuesAsync(const DescribeRegistrationFieldValuesRequestT& request, const DescribeRegistrationFieldValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DescribeRegistrationFieldValues, request, handler, context);
        }

        /**
         * <p>Retrieves the specified registration section definitions. You can use
         * DescribeRegistrationSectionDefinitions to view the requirements for creating,
         * filling out, and submitting each registration type.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeRegistrationSectionDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegistrationSectionDefinitionsOutcome DescribeRegistrationSectionDefinitions(const Model::DescribeRegistrationSectionDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeRegistrationSectionDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRegistrationSectionDefinitionsRequestT = Model::DescribeRegistrationSectionDefinitionsRequest>
        Model::DescribeRegistrationSectionDefinitionsOutcomeCallable DescribeRegistrationSectionDefinitionsCallable(const DescribeRegistrationSectionDefinitionsRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DescribeRegistrationSectionDefinitions, request);
        }

        /**
         * An Async wrapper for DescribeRegistrationSectionDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRegistrationSectionDefinitionsRequestT = Model::DescribeRegistrationSectionDefinitionsRequest>
        void DescribeRegistrationSectionDefinitionsAsync(const DescribeRegistrationSectionDefinitionsRequestT& request, const DescribeRegistrationSectionDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DescribeRegistrationSectionDefinitions, request, handler, context);
        }

        /**
         * <p>Retrieves the specified registration type definitions. You can use
         * DescribeRegistrationTypeDefinitions to view the requirements for creating,
         * filling out, and submitting each registration type.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeRegistrationTypeDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegistrationTypeDefinitionsOutcome DescribeRegistrationTypeDefinitions(const Model::DescribeRegistrationTypeDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeRegistrationTypeDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRegistrationTypeDefinitionsRequestT = Model::DescribeRegistrationTypeDefinitionsRequest>
        Model::DescribeRegistrationTypeDefinitionsOutcomeCallable DescribeRegistrationTypeDefinitionsCallable(const DescribeRegistrationTypeDefinitionsRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DescribeRegistrationTypeDefinitions, request);
        }

        /**
         * An Async wrapper for DescribeRegistrationTypeDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRegistrationTypeDefinitionsRequestT = Model::DescribeRegistrationTypeDefinitionsRequest>
        void DescribeRegistrationTypeDefinitionsAsync(const DescribeRegistrationTypeDefinitionsRequestT& request, const DescribeRegistrationTypeDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DescribeRegistrationTypeDefinitions, request, handler, context);
        }

        /**
         * <p>Retrieves the specified registration version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeRegistrationVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegistrationVersionsOutcome DescribeRegistrationVersions(const Model::DescribeRegistrationVersionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeRegistrationVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRegistrationVersionsRequestT = Model::DescribeRegistrationVersionsRequest>
        Model::DescribeRegistrationVersionsOutcomeCallable DescribeRegistrationVersionsCallable(const DescribeRegistrationVersionsRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DescribeRegistrationVersions, request);
        }

        /**
         * An Async wrapper for DescribeRegistrationVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRegistrationVersionsRequestT = Model::DescribeRegistrationVersionsRequest>
        void DescribeRegistrationVersionsAsync(const DescribeRegistrationVersionsRequestT& request, const DescribeRegistrationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DescribeRegistrationVersions, request, handler, context);
        }

        /**
         * <p>Retrieves the specified registrations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeRegistrations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegistrationsOutcome DescribeRegistrations(const Model::DescribeRegistrationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeRegistrations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRegistrationsRequestT = Model::DescribeRegistrationsRequest>
        Model::DescribeRegistrationsOutcomeCallable DescribeRegistrationsCallable(const DescribeRegistrationsRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DescribeRegistrations, request);
        }

        /**
         * An Async wrapper for DescribeRegistrations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRegistrationsRequestT = Model::DescribeRegistrationsRequest>
        void DescribeRegistrationsAsync(const DescribeRegistrationsRequestT& request, const DescribeRegistrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DescribeRegistrations, request, handler, context);
        }

        /**
         * <p>Describes the specified SenderIds or all SenderIds associated with your
         * Amazon Web Services account.</p> <p>If you specify SenderIds, the output
         * includes information for only the specified SenderIds. If you specify filters,
         * the output includes information for only those SenderIds that meet the filter
         * criteria. If you don't specify SenderIds or filters, the output includes
         * information for all SenderIds.</p> <p>f you specify a sender ID that isn't
         * valid, an error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeSenderIds">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSenderIdsOutcome DescribeSenderIds(const Model::DescribeSenderIdsRequest& request) const;

        /**
         * A Callable wrapper for DescribeSenderIds that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSenderIdsRequestT = Model::DescribeSenderIdsRequest>
        Model::DescribeSenderIdsOutcomeCallable DescribeSenderIdsCallable(const DescribeSenderIdsRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DescribeSenderIds, request);
        }

        /**
         * An Async wrapper for DescribeSenderIds that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSenderIdsRequestT = Model::DescribeSenderIdsRequest>
        void DescribeSenderIdsAsync(const DescribeSenderIdsRequestT& request, const DescribeSenderIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DescribeSenderIds, request, handler, context);
        }

        /**
         * <p>Describes the current Amazon Pinpoint monthly spend limits for sending voice
         * and text messages.</p> <p>When you establish an Amazon Web Services account, the
         * account has initial monthly spend limit in a given Region. For more information
         * on increasing your monthly spend limit, see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-awssupport-spend-threshold.html">
         * Requesting increases to your monthly SMS spending quota for Amazon Pinpoint </a>
         * in the <i>Amazon Pinpoint User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeSpendLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpendLimitsOutcome DescribeSpendLimits(const Model::DescribeSpendLimitsRequest& request) const;

        /**
         * A Callable wrapper for DescribeSpendLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSpendLimitsRequestT = Model::DescribeSpendLimitsRequest>
        Model::DescribeSpendLimitsOutcomeCallable DescribeSpendLimitsCallable(const DescribeSpendLimitsRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DescribeSpendLimits, request);
        }

        /**
         * An Async wrapper for DescribeSpendLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSpendLimitsRequestT = Model::DescribeSpendLimitsRequest>
        void DescribeSpendLimitsAsync(const DescribeSpendLimitsRequestT& request, const DescribeSpendLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DescribeSpendLimits, request, handler, context);
        }

        /**
         * <p>Retrieves the specified verified destiona numbers.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeVerifiedDestinationNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVerifiedDestinationNumbersOutcome DescribeVerifiedDestinationNumbers(const Model::DescribeVerifiedDestinationNumbersRequest& request) const;

        /**
         * A Callable wrapper for DescribeVerifiedDestinationNumbers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeVerifiedDestinationNumbersRequestT = Model::DescribeVerifiedDestinationNumbersRequest>
        Model::DescribeVerifiedDestinationNumbersOutcomeCallable DescribeVerifiedDestinationNumbersCallable(const DescribeVerifiedDestinationNumbersRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DescribeVerifiedDestinationNumbers, request);
        }

        /**
         * An Async wrapper for DescribeVerifiedDestinationNumbers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeVerifiedDestinationNumbersRequestT = Model::DescribeVerifiedDestinationNumbersRequest>
        void DescribeVerifiedDestinationNumbersAsync(const DescribeVerifiedDestinationNumbersRequestT& request, const DescribeVerifiedDestinationNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DescribeVerifiedDestinationNumbers, request, handler, context);
        }

        /**
         * <p>Removes the specified origination identity from an existing pool.</p> <p>If
         * the origination identity isn't associated with the specified pool, an error is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DisassociateOriginationIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateOriginationIdentityOutcome DisassociateOriginationIdentity(const Model::DisassociateOriginationIdentityRequest& request) const;

        /**
         * A Callable wrapper for DisassociateOriginationIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateOriginationIdentityRequestT = Model::DisassociateOriginationIdentityRequest>
        Model::DisassociateOriginationIdentityOutcomeCallable DisassociateOriginationIdentityCallable(const DisassociateOriginationIdentityRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DisassociateOriginationIdentity, request);
        }

        /**
         * An Async wrapper for DisassociateOriginationIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateOriginationIdentityRequestT = Model::DisassociateOriginationIdentityRequest>
        void DisassociateOriginationIdentityAsync(const DisassociateOriginationIdentityRequestT& request, const DisassociateOriginationIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DisassociateOriginationIdentity, request, handler, context);
        }

        /**
         * <p>Discard the current version of the registration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DiscardRegistrationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DiscardRegistrationVersionOutcome DiscardRegistrationVersion(const Model::DiscardRegistrationVersionRequest& request) const;

        /**
         * A Callable wrapper for DiscardRegistrationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DiscardRegistrationVersionRequestT = Model::DiscardRegistrationVersionRequest>
        Model::DiscardRegistrationVersionOutcomeCallable DiscardRegistrationVersionCallable(const DiscardRegistrationVersionRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::DiscardRegistrationVersion, request);
        }

        /**
         * An Async wrapper for DiscardRegistrationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DiscardRegistrationVersionRequestT = Model::DiscardRegistrationVersionRequest>
        void DiscardRegistrationVersionAsync(const DiscardRegistrationVersionRequestT& request, const DiscardRegistrationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::DiscardRegistrationVersion, request, handler, context);
        }

        /**
         * <p>Lists all associated origination identities in your pool.</p> <p>If you
         * specify filters, the output includes information for only those origination
         * identities that meet the filter criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ListPoolOriginationIdentities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPoolOriginationIdentitiesOutcome ListPoolOriginationIdentities(const Model::ListPoolOriginationIdentitiesRequest& request) const;

        /**
         * A Callable wrapper for ListPoolOriginationIdentities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPoolOriginationIdentitiesRequestT = Model::ListPoolOriginationIdentitiesRequest>
        Model::ListPoolOriginationIdentitiesOutcomeCallable ListPoolOriginationIdentitiesCallable(const ListPoolOriginationIdentitiesRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::ListPoolOriginationIdentities, request);
        }

        /**
         * An Async wrapper for ListPoolOriginationIdentities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPoolOriginationIdentitiesRequestT = Model::ListPoolOriginationIdentitiesRequest>
        void ListPoolOriginationIdentitiesAsync(const ListPoolOriginationIdentitiesRequestT& request, const ListPoolOriginationIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::ListPoolOriginationIdentities, request, handler, context);
        }

        /**
         * <p>Retreive all of the origination identies that are associated with a
         * registration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ListRegistrationAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegistrationAssociationsOutcome ListRegistrationAssociations(const Model::ListRegistrationAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListRegistrationAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRegistrationAssociationsRequestT = Model::ListRegistrationAssociationsRequest>
        Model::ListRegistrationAssociationsOutcomeCallable ListRegistrationAssociationsCallable(const ListRegistrationAssociationsRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::ListRegistrationAssociations, request);
        }

        /**
         * An Async wrapper for ListRegistrationAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRegistrationAssociationsRequestT = Model::ListRegistrationAssociationsRequest>
        void ListRegistrationAssociationsAsync(const ListRegistrationAssociationsRequestT& request, const ListRegistrationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::ListRegistrationAssociations, request, handler, context);
        }

        /**
         * <p>List all tags associated with a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Creates or updates a keyword configuration on an origination phone number or
         * pool.</p> <p> A keyword is a word that you can search for on a particular phone
         * number or pool. It is also a specific word or phrase that an end user can send
         * to your number to elicit a response, such as an informational message or a
         * special offer. When your number receives a message that begins with a keyword,
         * Amazon Pinpoint responds with a customizable message.</p> <p>If you specify a
         * keyword that isn't valid, an error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/PutKeyword">AWS
         * API Reference</a></p>
         */
        virtual Model::PutKeywordOutcome PutKeyword(const Model::PutKeywordRequest& request) const;

        /**
         * A Callable wrapper for PutKeyword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutKeywordRequestT = Model::PutKeywordRequest>
        Model::PutKeywordOutcomeCallable PutKeywordCallable(const PutKeywordRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::PutKeyword, request);
        }

        /**
         * An Async wrapper for PutKeyword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutKeywordRequestT = Model::PutKeywordRequest>
        void PutKeywordAsync(const PutKeywordRequestT& request, const PutKeywordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::PutKeyword, request, handler, context);
        }

        /**
         * <p>Creates an opted out destination phone number in the opt-out list.</p> <p>If
         * the destination phone number isn't valid or if the specified opt-out list
         * doesn't exist, an error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/PutOptedOutNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::PutOptedOutNumberOutcome PutOptedOutNumber(const Model::PutOptedOutNumberRequest& request) const;

        /**
         * A Callable wrapper for PutOptedOutNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutOptedOutNumberRequestT = Model::PutOptedOutNumberRequest>
        Model::PutOptedOutNumberOutcomeCallable PutOptedOutNumberCallable(const PutOptedOutNumberRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::PutOptedOutNumber, request);
        }

        /**
         * An Async wrapper for PutOptedOutNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutOptedOutNumberRequestT = Model::PutOptedOutNumberRequest>
        void PutOptedOutNumberAsync(const PutOptedOutNumberRequestT& request, const PutOptedOutNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::PutOptedOutNumber, request, handler, context);
        }

        /**
         * <p>Creates or updates a field value for a registration.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/PutRegistrationFieldValue">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRegistrationFieldValueOutcome PutRegistrationFieldValue(const Model::PutRegistrationFieldValueRequest& request) const;

        /**
         * A Callable wrapper for PutRegistrationFieldValue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRegistrationFieldValueRequestT = Model::PutRegistrationFieldValueRequest>
        Model::PutRegistrationFieldValueOutcomeCallable PutRegistrationFieldValueCallable(const PutRegistrationFieldValueRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::PutRegistrationFieldValue, request);
        }

        /**
         * An Async wrapper for PutRegistrationFieldValue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRegistrationFieldValueRequestT = Model::PutRegistrationFieldValueRequest>
        void PutRegistrationFieldValueAsync(const PutRegistrationFieldValueRequestT& request, const PutRegistrationFieldValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::PutRegistrationFieldValue, request, handler, context);
        }

        /**
         * <p>Releases an existing origination phone number in your account. Once released,
         * a phone number is no longer available for sending messages.</p> <p>If the
         * origination phone number has deletion protection enabled or is associated with a
         * pool, an error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ReleasePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::ReleasePhoneNumberOutcome ReleasePhoneNumber(const Model::ReleasePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for ReleasePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ReleasePhoneNumberRequestT = Model::ReleasePhoneNumberRequest>
        Model::ReleasePhoneNumberOutcomeCallable ReleasePhoneNumberCallable(const ReleasePhoneNumberRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::ReleasePhoneNumber, request);
        }

        /**
         * An Async wrapper for ReleasePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ReleasePhoneNumberRequestT = Model::ReleasePhoneNumberRequest>
        void ReleasePhoneNumberAsync(const ReleasePhoneNumberRequestT& request, const ReleasePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::ReleasePhoneNumber, request, handler, context);
        }

        /**
         * <p>Releases an existing sender ID in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ReleaseSenderId">AWS
         * API Reference</a></p>
         */
        virtual Model::ReleaseSenderIdOutcome ReleaseSenderId(const Model::ReleaseSenderIdRequest& request) const;

        /**
         * A Callable wrapper for ReleaseSenderId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ReleaseSenderIdRequestT = Model::ReleaseSenderIdRequest>
        Model::ReleaseSenderIdOutcomeCallable ReleaseSenderIdCallable(const ReleaseSenderIdRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::ReleaseSenderId, request);
        }

        /**
         * An Async wrapper for ReleaseSenderId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ReleaseSenderIdRequestT = Model::ReleaseSenderIdRequest>
        void ReleaseSenderIdAsync(const ReleaseSenderIdRequestT& request, const ReleaseSenderIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::ReleaseSenderId, request, handler, context);
        }

        /**
         * <p>Request an origination phone number for use in your account. For more
         * information on phone number request see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/settings-sms-request-number.html">
         * Requesting a number </a> in the <i>Amazon Pinpoint User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RequestPhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::RequestPhoneNumberOutcome RequestPhoneNumber(const Model::RequestPhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for RequestPhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RequestPhoneNumberRequestT = Model::RequestPhoneNumberRequest>
        Model::RequestPhoneNumberOutcomeCallable RequestPhoneNumberCallable(const RequestPhoneNumberRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::RequestPhoneNumber, request);
        }

        /**
         * An Async wrapper for RequestPhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RequestPhoneNumberRequestT = Model::RequestPhoneNumberRequest>
        void RequestPhoneNumberAsync(const RequestPhoneNumberRequestT& request, const RequestPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::RequestPhoneNumber, request, handler, context);
        }

        /**
         * <p>Request a new sender ID that doesn't require registration. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RequestSenderId">AWS
         * API Reference</a></p>
         */
        virtual Model::RequestSenderIdOutcome RequestSenderId(const Model::RequestSenderIdRequest& request) const;

        /**
         * A Callable wrapper for RequestSenderId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RequestSenderIdRequestT = Model::RequestSenderIdRequest>
        Model::RequestSenderIdOutcomeCallable RequestSenderIdCallable(const RequestSenderIdRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::RequestSenderId, request);
        }

        /**
         * An Async wrapper for RequestSenderId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RequestSenderIdRequestT = Model::RequestSenderIdRequest>
        void RequestSenderIdAsync(const RequestSenderIdRequestT& request, const RequestSenderIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::RequestSenderId, request, handler, context);
        }

        /**
         * <p>Before you can send test messages to a verified destination phone number you
         * need to opt-in the verified destination phone number. Creates a new text message
         * with a verification code and send it to a verified destination phone number.
         * Once you have the verification code use <a>VerifyDestinationNumber</a> to opt-in
         * the verified destination phone number to receive messages.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SendDestinationNumberVerificationCode">AWS
         * API Reference</a></p>
         */
        virtual Model::SendDestinationNumberVerificationCodeOutcome SendDestinationNumberVerificationCode(const Model::SendDestinationNumberVerificationCodeRequest& request) const;

        /**
         * A Callable wrapper for SendDestinationNumberVerificationCode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendDestinationNumberVerificationCodeRequestT = Model::SendDestinationNumberVerificationCodeRequest>
        Model::SendDestinationNumberVerificationCodeOutcomeCallable SendDestinationNumberVerificationCodeCallable(const SendDestinationNumberVerificationCodeRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::SendDestinationNumberVerificationCode, request);
        }

        /**
         * An Async wrapper for SendDestinationNumberVerificationCode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendDestinationNumberVerificationCodeRequestT = Model::SendDestinationNumberVerificationCodeRequest>
        void SendDestinationNumberVerificationCodeAsync(const SendDestinationNumberVerificationCodeRequestT& request, const SendDestinationNumberVerificationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::SendDestinationNumberVerificationCode, request, handler, context);
        }

        /**
         * <p>Creates a new text message and sends it to a recipient's phone number.</p>
         * <p>SMS throughput limits are measured in Message Parts per Second (MPS). Your
         * MPS limit depends on the destination country of your messages, as well as the
         * type of phone number (origination number) that you use to send the message. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-limitations-mps.html">Message
         * Parts per Second (MPS) limits</a> in the <i>Amazon Pinpoint User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SendTextMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::SendTextMessageOutcome SendTextMessage(const Model::SendTextMessageRequest& request) const;

        /**
         * A Callable wrapper for SendTextMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendTextMessageRequestT = Model::SendTextMessageRequest>
        Model::SendTextMessageOutcomeCallable SendTextMessageCallable(const SendTextMessageRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::SendTextMessage, request);
        }

        /**
         * An Async wrapper for SendTextMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendTextMessageRequestT = Model::SendTextMessageRequest>
        void SendTextMessageAsync(const SendTextMessageRequestT& request, const SendTextMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::SendTextMessage, request, handler, context);
        }

        /**
         * <p>Allows you to send a request that sends a voice message through Amazon
         * Pinpoint. This operation uses <a href="http://aws.amazon.com/polly/">Amazon
         * Polly</a> to convert a text script into a voice message.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SendVoiceMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::SendVoiceMessageOutcome SendVoiceMessage(const Model::SendVoiceMessageRequest& request) const;

        /**
         * A Callable wrapper for SendVoiceMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendVoiceMessageRequestT = Model::SendVoiceMessageRequest>
        Model::SendVoiceMessageOutcomeCallable SendVoiceMessageCallable(const SendVoiceMessageRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::SendVoiceMessage, request);
        }

        /**
         * An Async wrapper for SendVoiceMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendVoiceMessageRequestT = Model::SendVoiceMessageRequest>
        void SendVoiceMessageAsync(const SendVoiceMessageRequestT& request, const SendVoiceMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::SendVoiceMessage, request, handler, context);
        }

        /**
         * <p>Sets the default message type on a configuration set.</p> <p>Choose the
         * category of SMS messages that you plan to send from this account. If you send
         * account-related messages or time-sensitive messages such as one-time passcodes,
         * choose <b>Transactional</b>. If you plan to send messages that contain marketing
         * material or other promotional content, choose <b>Promotional</b>. This setting
         * applies to your entire Amazon Web Services account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SetDefaultMessageType">AWS
         * API Reference</a></p>
         */
        virtual Model::SetDefaultMessageTypeOutcome SetDefaultMessageType(const Model::SetDefaultMessageTypeRequest& request) const;

        /**
         * A Callable wrapper for SetDefaultMessageType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetDefaultMessageTypeRequestT = Model::SetDefaultMessageTypeRequest>
        Model::SetDefaultMessageTypeOutcomeCallable SetDefaultMessageTypeCallable(const SetDefaultMessageTypeRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::SetDefaultMessageType, request);
        }

        /**
         * An Async wrapper for SetDefaultMessageType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetDefaultMessageTypeRequestT = Model::SetDefaultMessageTypeRequest>
        void SetDefaultMessageTypeAsync(const SetDefaultMessageTypeRequestT& request, const SetDefaultMessageTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::SetDefaultMessageType, request, handler, context);
        }

        /**
         * <p>Sets default sender ID on a configuration set.</p> <p>When sending a text
         * message to a destination country that supports sender IDs, the default sender ID
         * on the configuration set specified will be used if no dedicated origination
         * phone numbers or registered sender IDs are available in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SetDefaultSenderId">AWS
         * API Reference</a></p>
         */
        virtual Model::SetDefaultSenderIdOutcome SetDefaultSenderId(const Model::SetDefaultSenderIdRequest& request) const;

        /**
         * A Callable wrapper for SetDefaultSenderId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetDefaultSenderIdRequestT = Model::SetDefaultSenderIdRequest>
        Model::SetDefaultSenderIdOutcomeCallable SetDefaultSenderIdCallable(const SetDefaultSenderIdRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::SetDefaultSenderId, request);
        }

        /**
         * An Async wrapper for SetDefaultSenderId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetDefaultSenderIdRequestT = Model::SetDefaultSenderIdRequest>
        void SetDefaultSenderIdAsync(const SetDefaultSenderIdRequestT& request, const SetDefaultSenderIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::SetDefaultSenderId, request, handler, context);
        }

        /**
         * <p>Sets an account level monthly spend limit override for sending text messages.
         * The requested spend limit must be less than or equal to the
         * <code>MaxLimit</code>, which is set by Amazon Web Services. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SetTextMessageSpendLimitOverride">AWS
         * API Reference</a></p>
         */
        virtual Model::SetTextMessageSpendLimitOverrideOutcome SetTextMessageSpendLimitOverride(const Model::SetTextMessageSpendLimitOverrideRequest& request) const;

        /**
         * A Callable wrapper for SetTextMessageSpendLimitOverride that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetTextMessageSpendLimitOverrideRequestT = Model::SetTextMessageSpendLimitOverrideRequest>
        Model::SetTextMessageSpendLimitOverrideOutcomeCallable SetTextMessageSpendLimitOverrideCallable(const SetTextMessageSpendLimitOverrideRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::SetTextMessageSpendLimitOverride, request);
        }

        /**
         * An Async wrapper for SetTextMessageSpendLimitOverride that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetTextMessageSpendLimitOverrideRequestT = Model::SetTextMessageSpendLimitOverrideRequest>
        void SetTextMessageSpendLimitOverrideAsync(const SetTextMessageSpendLimitOverrideRequestT& request, const SetTextMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::SetTextMessageSpendLimitOverride, request, handler, context);
        }

        /**
         * <p>Sets an account level monthly spend limit override for sending voice
         * messages. The requested spend limit must be less than or equal to the
         * <code>MaxLimit</code>, which is set by Amazon Web Services. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SetVoiceMessageSpendLimitOverride">AWS
         * API Reference</a></p>
         */
        virtual Model::SetVoiceMessageSpendLimitOverrideOutcome SetVoiceMessageSpendLimitOverride(const Model::SetVoiceMessageSpendLimitOverrideRequest& request) const;

        /**
         * A Callable wrapper for SetVoiceMessageSpendLimitOverride that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetVoiceMessageSpendLimitOverrideRequestT = Model::SetVoiceMessageSpendLimitOverrideRequest>
        Model::SetVoiceMessageSpendLimitOverrideOutcomeCallable SetVoiceMessageSpendLimitOverrideCallable(const SetVoiceMessageSpendLimitOverrideRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::SetVoiceMessageSpendLimitOverride, request);
        }

        /**
         * An Async wrapper for SetVoiceMessageSpendLimitOverride that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetVoiceMessageSpendLimitOverrideRequestT = Model::SetVoiceMessageSpendLimitOverrideRequest>
        void SetVoiceMessageSpendLimitOverrideAsync(const SetVoiceMessageSpendLimitOverrideRequestT& request, const SetVoiceMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::SetVoiceMessageSpendLimitOverride, request, handler, context);
        }

        /**
         * <p>Submit the specified registration for review and approval.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SubmitRegistrationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::SubmitRegistrationVersionOutcome SubmitRegistrationVersion(const Model::SubmitRegistrationVersionRequest& request) const;

        /**
         * A Callable wrapper for SubmitRegistrationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SubmitRegistrationVersionRequestT = Model::SubmitRegistrationVersionRequest>
        Model::SubmitRegistrationVersionOutcomeCallable SubmitRegistrationVersionCallable(const SubmitRegistrationVersionRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::SubmitRegistrationVersion, request);
        }

        /**
         * An Async wrapper for SubmitRegistrationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SubmitRegistrationVersionRequestT = Model::SubmitRegistrationVersionRequest>
        void SubmitRegistrationVersionAsync(const SubmitRegistrationVersionRequestT& request, const SubmitRegistrationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::SubmitRegistrationVersion, request, handler, context);
        }

        /**
         * <p>Adds or overwrites only the specified tags for the specified Amazon Pinpoint
         * SMS Voice, version 2 resource. When you specify an existing tag key, the value
         * is overwritten with the new value. Each resource can have a maximum of 50 tags.
         * Each tag consists of a key and an optional value. Tag keys must be unique per
         * resource. For more information about tags, see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/tagging-resources.html">
         * Tagging Amazon Pinpoint resources</a> in the <i>Amazon Pinpoint Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the association of the specified tags from an Amazon Pinpoint SMS
         * Voice V2 resource. For more information on tags see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/tagging-resources.html">
         * Tagging Amazon Pinpoint resources</a> in the <i>Amazon Pinpoint Developer
         * Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing event destination in a configuration set. You can update
         * the IAM role ARN for CloudWatch Logs and Kinesis Data Firehose. You can also
         * enable or disable the event destination.</p> <p>You may want to update an event
         * destination to change its matching event types or updating the destination
         * resource ARN. You can't change an event destination's type between CloudWatch
         * Logs, Kinesis Data Firehose, and Amazon SNS.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/UpdateEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventDestinationOutcome UpdateEventDestination(const Model::UpdateEventDestinationRequest& request) const;

        /**
         * A Callable wrapper for UpdateEventDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEventDestinationRequestT = Model::UpdateEventDestinationRequest>
        Model::UpdateEventDestinationOutcomeCallable UpdateEventDestinationCallable(const UpdateEventDestinationRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::UpdateEventDestination, request);
        }

        /**
         * An Async wrapper for UpdateEventDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEventDestinationRequestT = Model::UpdateEventDestinationRequest>
        void UpdateEventDestinationAsync(const UpdateEventDestinationRequestT& request, const UpdateEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::UpdateEventDestination, request, handler, context);
        }

        /**
         * <p>Updates the configuration of an existing origination phone number. You can
         * update the opt-out list, enable or disable two-way messaging, change the
         * TwoWayChannelArn, enable or disable self-managed opt-outs, and enable or disable
         * deletion protection.</p> <p>If the origination phone number is associated with a
         * pool, an error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/UpdatePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePhoneNumberOutcome UpdatePhoneNumber(const Model::UpdatePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for UpdatePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePhoneNumberRequestT = Model::UpdatePhoneNumberRequest>
        Model::UpdatePhoneNumberOutcomeCallable UpdatePhoneNumberCallable(const UpdatePhoneNumberRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::UpdatePhoneNumber, request);
        }

        /**
         * An Async wrapper for UpdatePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePhoneNumberRequestT = Model::UpdatePhoneNumberRequest>
        void UpdatePhoneNumberAsync(const UpdatePhoneNumberRequestT& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::UpdatePhoneNumber, request, handler, context);
        }

        /**
         * <p>Updates the configuration of an existing pool. You can update the opt-out
         * list, enable or disable two-way messaging, change the
         * <code>TwoWayChannelArn</code>, enable or disable self-managed opt-outs, enable
         * or disable deletion protection, and enable or disable shared
         * routes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/UpdatePool">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePoolOutcome UpdatePool(const Model::UpdatePoolRequest& request) const;

        /**
         * A Callable wrapper for UpdatePool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePoolRequestT = Model::UpdatePoolRequest>
        Model::UpdatePoolOutcomeCallable UpdatePoolCallable(const UpdatePoolRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::UpdatePool, request);
        }

        /**
         * An Async wrapper for UpdatePool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePoolRequestT = Model::UpdatePoolRequest>
        void UpdatePoolAsync(const UpdatePoolRequestT& request, const UpdatePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::UpdatePool, request, handler, context);
        }

        /**
         * <p>Updates the configuration of an existing sender ID.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/UpdateSenderId">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSenderIdOutcome UpdateSenderId(const Model::UpdateSenderIdRequest& request) const;

        /**
         * A Callable wrapper for UpdateSenderId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSenderIdRequestT = Model::UpdateSenderIdRequest>
        Model::UpdateSenderIdOutcomeCallable UpdateSenderIdCallable(const UpdateSenderIdRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::UpdateSenderId, request);
        }

        /**
         * An Async wrapper for UpdateSenderId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSenderIdRequestT = Model::UpdateSenderIdRequest>
        void UpdateSenderIdAsync(const UpdateSenderIdRequestT& request, const UpdateSenderIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::UpdateSenderId, request, handler, context);
        }

        /**
         * <p>Use the verification code that was received by the verified destination phone
         * number to opt-in the verified destination phone number to receive more
         * messages.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/VerifyDestinationNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyDestinationNumberOutcome VerifyDestinationNumber(const Model::VerifyDestinationNumberRequest& request) const;

        /**
         * A Callable wrapper for VerifyDestinationNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename VerifyDestinationNumberRequestT = Model::VerifyDestinationNumberRequest>
        Model::VerifyDestinationNumberOutcomeCallable VerifyDestinationNumberCallable(const VerifyDestinationNumberRequestT& request) const
        {
            return SubmitCallable(&PinpointSMSVoiceV2Client::VerifyDestinationNumber, request);
        }

        /**
         * An Async wrapper for VerifyDestinationNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename VerifyDestinationNumberRequestT = Model::VerifyDestinationNumberRequest>
        void VerifyDestinationNumberAsync(const VerifyDestinationNumberRequestT& request, const VerifyDestinationNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PinpointSMSVoiceV2Client::VerifyDestinationNumber, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PinpointSMSVoiceV2EndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PinpointSMSVoiceV2Client>;
      void init(const PinpointSMSVoiceV2ClientConfiguration& clientConfiguration);

      PinpointSMSVoiceV2ClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PinpointSMSVoiceV2EndpointProviderBase> m_endpointProvider;
  };

} // namespace PinpointSMSVoiceV2
} // namespace Aws
