/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/sns/SNSServiceClientModel.h>

namespace Aws
{
namespace SNS
{
  /**
   * <fullname>Amazon Simple Notification Service</fullname> <p>Amazon Simple
   * Notification Service (Amazon SNS) is a web service that enables you to build
   * distributed web-enabled applications. Applications can use Amazon SNS to easily
   * push real-time notification messages to interested subscribers over multiple
   * delivery protocols. For more information about this product see the <a
   * href="http://aws.amazon.com/sns/">Amazon SNS product page</a>. For detailed
   * information about Amazon SNS features and their associated API calls, see the <a
   * href="https://docs.aws.amazon.com/sns/latest/dg/">Amazon SNS Developer
   * Guide</a>. </p> <p>For information on the permissions you need to use this API,
   * see <a
   * href="https://docs.aws.amazon.com/sns/latest/dg/sns-authentication-and-access-control.html">Identity
   * and access management in Amazon SNS</a> in the <i>Amazon SNS Developer
   * Guide.</i> </p> <p>We also provide SDKs that enable you to access Amazon SNS
   * from your preferred programming language. The SDKs contain functionality that
   * automatically takes care of tasks such as: cryptographically signing your
   * service requests, retrying requests, and handling error responses. For a list of
   * available SDKs, go to <a href="http://aws.amazon.com/tools/">Tools for Amazon
   * Web Services</a>. </p>
   */
  class AWS_SNS_API SNSClient : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<SNSClient>
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SNSClientConfiguration ClientConfigurationType;
      typedef SNSEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SNSClient(const Aws::SNS::SNSClientConfiguration& clientConfiguration = Aws::SNS::SNSClientConfiguration(),
                  std::shared_ptr<SNSEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SNSClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<SNSEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::SNS::SNSClientConfiguration& clientConfiguration = Aws::SNS::SNSClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SNSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<SNSEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::SNS::SNSClientConfiguration& clientConfiguration = Aws::SNS::SNSClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SNSClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SNSClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SNSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SNSClient();


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Adds a statement to a topic's access control policy, granting access for the
         * specified Amazon Web Services accounts to the specified actions.</p> 
         * <p>To remove the ability to change topic permissions, you must deny permissions
         * to the <code>AddPermission</code>, <code>RemovePermission</code>, and
         * <code>SetTopicAttributes</code> actions in your IAM policy.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/AddPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::AddPermissionOutcome AddPermission(const Model::AddPermissionRequest& request) const;

        /**
         * A Callable wrapper for AddPermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddPermissionRequestT = Model::AddPermissionRequest>
        Model::AddPermissionOutcomeCallable AddPermissionCallable(const AddPermissionRequestT& request) const
        {
            return SubmitCallable(&SNSClient::AddPermission, request);
        }

        /**
         * An Async wrapper for AddPermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddPermissionRequestT = Model::AddPermissionRequest>
        void AddPermissionAsync(const AddPermissionRequestT& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::AddPermission, request, handler, context);
        }

        /**
         * <p>Accepts a phone number and indicates whether the phone holder has opted out
         * of receiving SMS messages from your Amazon Web Services account. You cannot send
         * SMS messages to a number that is opted out.</p> <p>To resume sending messages,
         * you can opt in the number by using the <code>OptInPhoneNumber</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CheckIfPhoneNumberIsOptedOut">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckIfPhoneNumberIsOptedOutOutcome CheckIfPhoneNumberIsOptedOut(const Model::CheckIfPhoneNumberIsOptedOutRequest& request) const;

        /**
         * A Callable wrapper for CheckIfPhoneNumberIsOptedOut that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CheckIfPhoneNumberIsOptedOutRequestT = Model::CheckIfPhoneNumberIsOptedOutRequest>
        Model::CheckIfPhoneNumberIsOptedOutOutcomeCallable CheckIfPhoneNumberIsOptedOutCallable(const CheckIfPhoneNumberIsOptedOutRequestT& request) const
        {
            return SubmitCallable(&SNSClient::CheckIfPhoneNumberIsOptedOut, request);
        }

        /**
         * An Async wrapper for CheckIfPhoneNumberIsOptedOut that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CheckIfPhoneNumberIsOptedOutRequestT = Model::CheckIfPhoneNumberIsOptedOutRequest>
        void CheckIfPhoneNumberIsOptedOutAsync(const CheckIfPhoneNumberIsOptedOutRequestT& request, const CheckIfPhoneNumberIsOptedOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::CheckIfPhoneNumberIsOptedOut, request, handler, context);
        }

        /**
         * <p>Verifies an endpoint owner's intent to receive messages by validating the
         * token sent to the endpoint by an earlier <code>Subscribe</code> action. If the
         * token is valid, the action creates a new subscription and returns its Amazon
         * Resource Name (ARN). This call requires an AWS signature only when the
         * <code>AuthenticateOnUnsubscribe</code> flag is set to "true".</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ConfirmSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmSubscriptionOutcome ConfirmSubscription(const Model::ConfirmSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for ConfirmSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ConfirmSubscriptionRequestT = Model::ConfirmSubscriptionRequest>
        Model::ConfirmSubscriptionOutcomeCallable ConfirmSubscriptionCallable(const ConfirmSubscriptionRequestT& request) const
        {
            return SubmitCallable(&SNSClient::ConfirmSubscription, request);
        }

        /**
         * An Async wrapper for ConfirmSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ConfirmSubscriptionRequestT = Model::ConfirmSubscriptionRequest>
        void ConfirmSubscriptionAsync(const ConfirmSubscriptionRequestT& request, const ConfirmSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::ConfirmSubscription, request, handler, context);
        }

        /**
         * <p>Creates a platform application object for one of the supported push
         * notification services, such as APNS and GCM (Firebase Cloud Messaging), to which
         * devices and mobile apps may register. You must specify
         * <code>PlatformPrincipal</code> and <code>PlatformCredential</code> attributes
         * when using the <code>CreatePlatformApplication</code> action.</p> <p>
         * <code>PlatformPrincipal</code> and <code>PlatformCredential</code> are received
         * from the notification service.</p> <ul> <li> <p>For <code>ADM</code>,
         * <code>PlatformPrincipal</code> is <code>client id</code> and
         * <code>PlatformCredential</code> is <code>client secret</code>.</p> </li> <li>
         * <p>For <code>Baidu</code>, <code>PlatformPrincipal</code> is <code>API
         * key</code> and <code>PlatformCredential</code> is <code>secret key</code>.</p>
         * </li> <li> <p>For <code>APNS</code> and <code>APNS_SANDBOX</code> using
         * certificate credentials, <code>PlatformPrincipal</code> is <code>SSL
         * certificate</code> and <code>PlatformCredential</code> is <code>private
         * key</code>.</p> </li> <li> <p>For <code>APNS</code> and
         * <code>APNS_SANDBOX</code> using token credentials,
         * <code>PlatformPrincipal</code> is <code>signing key ID</code> and
         * <code>PlatformCredential</code> is <code>signing key</code>.</p> </li> <li>
         * <p>For GCM (Firebase Cloud Messaging) using key credentials, there is no
         * <code>PlatformPrincipal</code>. The <code>PlatformCredential</code> is <code>API
         * key</code>.</p> </li> <li> <p>For GCM (Firebase Cloud Messaging) using token
         * credentials, there is no <code>PlatformPrincipal</code>. The
         * <code>PlatformCredential</code> is a JSON formatted private key file. When using
         * the Amazon Web Services CLI, the file must be in string format and special
         * characters must be ignored. To format the file correctly, Amazon SNS recommends
         * using the following command: <code>SERVICE_JSON=`jq @json &lt;&lt;&lt; cat
         * service.json`</code>.</p> </li> <li> <p>For <code>MPNS</code>,
         * <code>PlatformPrincipal</code> is <code>TLS certificate</code> and
         * <code>PlatformCredential</code> is <code>private key</code>.</p> </li> <li>
         * <p>For <code>WNS</code>, <code>PlatformPrincipal</code> is <code>Package
         * Security Identifier</code> and <code>PlatformCredential</code> is <code>secret
         * key</code>.</p> </li> </ul> <p>You can use the returned
         * <code>PlatformApplicationArn</code> as an attribute for the
         * <code>CreatePlatformEndpoint</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreatePlatformApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlatformApplicationOutcome CreatePlatformApplication(const Model::CreatePlatformApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreatePlatformApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePlatformApplicationRequestT = Model::CreatePlatformApplicationRequest>
        Model::CreatePlatformApplicationOutcomeCallable CreatePlatformApplicationCallable(const CreatePlatformApplicationRequestT& request) const
        {
            return SubmitCallable(&SNSClient::CreatePlatformApplication, request);
        }

        /**
         * An Async wrapper for CreatePlatformApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePlatformApplicationRequestT = Model::CreatePlatformApplicationRequest>
        void CreatePlatformApplicationAsync(const CreatePlatformApplicationRequestT& request, const CreatePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::CreatePlatformApplication, request, handler, context);
        }

        /**
         * <p>Creates an endpoint for a device and mobile app on one of the supported push
         * notification services, such as GCM (Firebase Cloud Messaging) and APNS.
         * <code>CreatePlatformEndpoint</code> requires the
         * <code>PlatformApplicationArn</code> that is returned from
         * <code>CreatePlatformApplication</code>. You can use the returned
         * <code>EndpointArn</code> to send a message to a mobile app or by the
         * <code>Subscribe</code> action for subscription to a topic. The
         * <code>CreatePlatformEndpoint</code> action is idempotent, so if the requester
         * already owns an endpoint with the same device token and attributes, that
         * endpoint's ARN is returned without creating a new endpoint. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p> <p>When using
         * <code>CreatePlatformEndpoint</code> with Baidu, two attributes must be provided:
         * ChannelId and UserId. The token field must also contain the ChannelId. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePushBaiduEndpoint.html">Creating
         * an Amazon SNS Endpoint for Baidu</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreatePlatformEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlatformEndpointOutcome CreatePlatformEndpoint(const Model::CreatePlatformEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreatePlatformEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePlatformEndpointRequestT = Model::CreatePlatformEndpointRequest>
        Model::CreatePlatformEndpointOutcomeCallable CreatePlatformEndpointCallable(const CreatePlatformEndpointRequestT& request) const
        {
            return SubmitCallable(&SNSClient::CreatePlatformEndpoint, request);
        }

        /**
         * An Async wrapper for CreatePlatformEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePlatformEndpointRequestT = Model::CreatePlatformEndpointRequest>
        void CreatePlatformEndpointAsync(const CreatePlatformEndpointRequestT& request, const CreatePlatformEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::CreatePlatformEndpoint, request, handler, context);
        }

        /**
         * <p>Adds a destination phone number to an Amazon Web Services account in the SMS
         * sandbox and sends a one-time password (OTP) to that phone number.</p> <p>When
         * you start using Amazon SNS to send SMS messages, your Amazon Web Services
         * account is in the <i>SMS sandbox</i>. The SMS sandbox provides a safe
         * environment for you to try Amazon SNS features without risking your reputation
         * as an SMS sender. While your Amazon Web Services account is in the SMS sandbox,
         * you can use all of the features of Amazon SNS. However, you can send SMS
         * messages only to verified destination phone numbers. For more information,
         * including how to move out of the sandbox to send messages without restrictions,
         * see <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">SMS
         * sandbox</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreateSMSSandboxPhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSMSSandboxPhoneNumberOutcome CreateSMSSandboxPhoneNumber(const Model::CreateSMSSandboxPhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for CreateSMSSandboxPhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSMSSandboxPhoneNumberRequestT = Model::CreateSMSSandboxPhoneNumberRequest>
        Model::CreateSMSSandboxPhoneNumberOutcomeCallable CreateSMSSandboxPhoneNumberCallable(const CreateSMSSandboxPhoneNumberRequestT& request) const
        {
            return SubmitCallable(&SNSClient::CreateSMSSandboxPhoneNumber, request);
        }

        /**
         * An Async wrapper for CreateSMSSandboxPhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSMSSandboxPhoneNumberRequestT = Model::CreateSMSSandboxPhoneNumberRequest>
        void CreateSMSSandboxPhoneNumberAsync(const CreateSMSSandboxPhoneNumberRequestT& request, const CreateSMSSandboxPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::CreateSMSSandboxPhoneNumber, request, handler, context);
        }

        /**
         * <p>Creates a topic to which notifications can be published. Users can create at
         * most 100,000 standard topics (at most 1,000 FIFO topics). For more information,
         * see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-create-topic.html">Creating
         * an Amazon SNS topic</a> in the <i>Amazon SNS Developer Guide</i>. This action is
         * idempotent, so if the requester already owns a topic with the specified name,
         * that topic's ARN is returned without creating a new topic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreateTopic">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateTopicOutcome CreateTopic(const Model::CreateTopicRequest& request) const;

        /**
         * A Callable wrapper for CreateTopic that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTopicRequestT = Model::CreateTopicRequest>
        Model::CreateTopicOutcomeCallable CreateTopicCallable(const CreateTopicRequestT& request) const
        {
            return SubmitCallable(&SNSClient::CreateTopic, request);
        }

        /**
         * An Async wrapper for CreateTopic that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTopicRequestT = Model::CreateTopicRequest>
        void CreateTopicAsync(const CreateTopicRequestT& request, const CreateTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::CreateTopic, request, handler, context);
        }

        /**
         * <p>Deletes the endpoint for a device and mobile app from Amazon SNS. This action
         * is idempotent. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p> <p>When you delete an endpoint that is
         * also subscribed to a topic, then you must also unsubscribe the endpoint from the
         * topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/DeleteEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointOutcome DeleteEndpoint(const Model::DeleteEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEndpointRequestT = Model::DeleteEndpointRequest>
        Model::DeleteEndpointOutcomeCallable DeleteEndpointCallable(const DeleteEndpointRequestT& request) const
        {
            return SubmitCallable(&SNSClient::DeleteEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEndpointRequestT = Model::DeleteEndpointRequest>
        void DeleteEndpointAsync(const DeleteEndpointRequestT& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::DeleteEndpoint, request, handler, context);
        }

        /**
         * <p>Deletes a platform application object for one of the supported push
         * notification services, such as APNS and GCM (Firebase Cloud Messaging). For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/DeletePlatformApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePlatformApplicationOutcome DeletePlatformApplication(const Model::DeletePlatformApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeletePlatformApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePlatformApplicationRequestT = Model::DeletePlatformApplicationRequest>
        Model::DeletePlatformApplicationOutcomeCallable DeletePlatformApplicationCallable(const DeletePlatformApplicationRequestT& request) const
        {
            return SubmitCallable(&SNSClient::DeletePlatformApplication, request);
        }

        /**
         * An Async wrapper for DeletePlatformApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePlatformApplicationRequestT = Model::DeletePlatformApplicationRequest>
        void DeletePlatformApplicationAsync(const DeletePlatformApplicationRequestT& request, const DeletePlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::DeletePlatformApplication, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Web Services account's verified or pending phone number
         * from the SMS sandbox.</p> <p>When you start using Amazon SNS to send SMS
         * messages, your Amazon Web Services account is in the <i>SMS sandbox</i>. The SMS
         * sandbox provides a safe environment for you to try Amazon SNS features without
         * risking your reputation as an SMS sender. While your Amazon Web Services account
         * is in the SMS sandbox, you can use all of the features of Amazon SNS. However,
         * you can send SMS messages only to verified destination phone numbers. For more
         * information, including how to move out of the sandbox to send messages without
         * restrictions, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">SMS
         * sandbox</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/DeleteSMSSandboxPhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSMSSandboxPhoneNumberOutcome DeleteSMSSandboxPhoneNumber(const Model::DeleteSMSSandboxPhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for DeleteSMSSandboxPhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSMSSandboxPhoneNumberRequestT = Model::DeleteSMSSandboxPhoneNumberRequest>
        Model::DeleteSMSSandboxPhoneNumberOutcomeCallable DeleteSMSSandboxPhoneNumberCallable(const DeleteSMSSandboxPhoneNumberRequestT& request) const
        {
            return SubmitCallable(&SNSClient::DeleteSMSSandboxPhoneNumber, request);
        }

        /**
         * An Async wrapper for DeleteSMSSandboxPhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSMSSandboxPhoneNumberRequestT = Model::DeleteSMSSandboxPhoneNumberRequest>
        void DeleteSMSSandboxPhoneNumberAsync(const DeleteSMSSandboxPhoneNumberRequestT& request, const DeleteSMSSandboxPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::DeleteSMSSandboxPhoneNumber, request, handler, context);
        }

        /**
         * <p>Deletes a topic and all its subscriptions. Deleting a topic might prevent
         * some messages previously sent to the topic from being delivered to subscribers.
         * This action is idempotent, so deleting a topic that does not exist does not
         * result in an error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/DeleteTopic">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteTopicOutcome DeleteTopic(const Model::DeleteTopicRequest& request) const;

        /**
         * A Callable wrapper for DeleteTopic that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTopicRequestT = Model::DeleteTopicRequest>
        Model::DeleteTopicOutcomeCallable DeleteTopicCallable(const DeleteTopicRequestT& request) const
        {
            return SubmitCallable(&SNSClient::DeleteTopic, request);
        }

        /**
         * An Async wrapper for DeleteTopic that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTopicRequestT = Model::DeleteTopicRequest>
        void DeleteTopicAsync(const DeleteTopicRequestT& request, const DeleteTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::DeleteTopic, request, handler, context);
        }

        /**
         * <p>Retrieves the specified inline <code>DataProtectionPolicy</code> document
         * that is stored in the specified Amazon SNS topic. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetDataProtectionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataProtectionPolicyOutcome GetDataProtectionPolicy(const Model::GetDataProtectionPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetDataProtectionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataProtectionPolicyRequestT = Model::GetDataProtectionPolicyRequest>
        Model::GetDataProtectionPolicyOutcomeCallable GetDataProtectionPolicyCallable(const GetDataProtectionPolicyRequestT& request) const
        {
            return SubmitCallable(&SNSClient::GetDataProtectionPolicy, request);
        }

        /**
         * An Async wrapper for GetDataProtectionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataProtectionPolicyRequestT = Model::GetDataProtectionPolicyRequest>
        void GetDataProtectionPolicyAsync(const GetDataProtectionPolicyRequestT& request, const GetDataProtectionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::GetDataProtectionPolicy, request, handler, context);
        }

        /**
         * <p>Retrieves the endpoint attributes for a device on one of the supported push
         * notification services, such as GCM (Firebase Cloud Messaging) and APNS. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetEndpointAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEndpointAttributesOutcome GetEndpointAttributes(const Model::GetEndpointAttributesRequest& request) const;

        /**
         * A Callable wrapper for GetEndpointAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEndpointAttributesRequestT = Model::GetEndpointAttributesRequest>
        Model::GetEndpointAttributesOutcomeCallable GetEndpointAttributesCallable(const GetEndpointAttributesRequestT& request) const
        {
            return SubmitCallable(&SNSClient::GetEndpointAttributes, request);
        }

        /**
         * An Async wrapper for GetEndpointAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEndpointAttributesRequestT = Model::GetEndpointAttributesRequest>
        void GetEndpointAttributesAsync(const GetEndpointAttributesRequestT& request, const GetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::GetEndpointAttributes, request, handler, context);
        }

        /**
         * <p>Retrieves the attributes of the platform application object for the supported
         * push notification services, such as APNS and GCM (Firebase Cloud Messaging). For
         * more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetPlatformApplicationAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPlatformApplicationAttributesOutcome GetPlatformApplicationAttributes(const Model::GetPlatformApplicationAttributesRequest& request) const;

        /**
         * A Callable wrapper for GetPlatformApplicationAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPlatformApplicationAttributesRequestT = Model::GetPlatformApplicationAttributesRequest>
        Model::GetPlatformApplicationAttributesOutcomeCallable GetPlatformApplicationAttributesCallable(const GetPlatformApplicationAttributesRequestT& request) const
        {
            return SubmitCallable(&SNSClient::GetPlatformApplicationAttributes, request);
        }

        /**
         * An Async wrapper for GetPlatformApplicationAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPlatformApplicationAttributesRequestT = Model::GetPlatformApplicationAttributesRequest>
        void GetPlatformApplicationAttributesAsync(const GetPlatformApplicationAttributesRequestT& request, const GetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::GetPlatformApplicationAttributes, request, handler, context);
        }

        /**
         * <p>Returns the settings for sending SMS messages from your Amazon Web Services
         * account.</p> <p>These settings are set with the <code>SetSMSAttributes</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetSMSAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSMSAttributesOutcome GetSMSAttributes(const Model::GetSMSAttributesRequest& request) const;

        /**
         * A Callable wrapper for GetSMSAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSMSAttributesRequestT = Model::GetSMSAttributesRequest>
        Model::GetSMSAttributesOutcomeCallable GetSMSAttributesCallable(const GetSMSAttributesRequestT& request) const
        {
            return SubmitCallable(&SNSClient::GetSMSAttributes, request);
        }

        /**
         * An Async wrapper for GetSMSAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSMSAttributesRequestT = Model::GetSMSAttributesRequest>
        void GetSMSAttributesAsync(const GetSMSAttributesRequestT& request, const GetSMSAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::GetSMSAttributes, request, handler, context);
        }

        /**
         * <p>Retrieves the SMS sandbox status for the calling Amazon Web Services account
         * in the target Amazon Web Services Region.</p> <p>When you start using Amazon SNS
         * to send SMS messages, your Amazon Web Services account is in the <i>SMS
         * sandbox</i>. The SMS sandbox provides a safe environment for you to try Amazon
         * SNS features without risking your reputation as an SMS sender. While your Amazon
         * Web Services account is in the SMS sandbox, you can use all of the features of
         * Amazon SNS. However, you can send SMS messages only to verified destination
         * phone numbers. For more information, including how to move out of the sandbox to
         * send messages without restrictions, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">SMS
         * sandbox</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetSMSSandboxAccountStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSMSSandboxAccountStatusOutcome GetSMSSandboxAccountStatus(const Model::GetSMSSandboxAccountStatusRequest& request) const;

        /**
         * A Callable wrapper for GetSMSSandboxAccountStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSMSSandboxAccountStatusRequestT = Model::GetSMSSandboxAccountStatusRequest>
        Model::GetSMSSandboxAccountStatusOutcomeCallable GetSMSSandboxAccountStatusCallable(const GetSMSSandboxAccountStatusRequestT& request) const
        {
            return SubmitCallable(&SNSClient::GetSMSSandboxAccountStatus, request);
        }

        /**
         * An Async wrapper for GetSMSSandboxAccountStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSMSSandboxAccountStatusRequestT = Model::GetSMSSandboxAccountStatusRequest>
        void GetSMSSandboxAccountStatusAsync(const GetSMSSandboxAccountStatusRequestT& request, const GetSMSSandboxAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::GetSMSSandboxAccountStatus, request, handler, context);
        }

        /**
         * <p>Returns all of the properties of a subscription.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetSubscriptionAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriptionAttributesOutcome GetSubscriptionAttributes(const Model::GetSubscriptionAttributesRequest& request) const;

        /**
         * A Callable wrapper for GetSubscriptionAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSubscriptionAttributesRequestT = Model::GetSubscriptionAttributesRequest>
        Model::GetSubscriptionAttributesOutcomeCallable GetSubscriptionAttributesCallable(const GetSubscriptionAttributesRequestT& request) const
        {
            return SubmitCallable(&SNSClient::GetSubscriptionAttributes, request);
        }

        /**
         * An Async wrapper for GetSubscriptionAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSubscriptionAttributesRequestT = Model::GetSubscriptionAttributesRequest>
        void GetSubscriptionAttributesAsync(const GetSubscriptionAttributesRequestT& request, const GetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::GetSubscriptionAttributes, request, handler, context);
        }

        /**
         * <p>Returns all of the properties of a topic. Topic properties returned might
         * differ based on the authorization of the user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetTopicAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTopicAttributesOutcome GetTopicAttributes(const Model::GetTopicAttributesRequest& request) const;

        /**
         * A Callable wrapper for GetTopicAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTopicAttributesRequestT = Model::GetTopicAttributesRequest>
        Model::GetTopicAttributesOutcomeCallable GetTopicAttributesCallable(const GetTopicAttributesRequestT& request) const
        {
            return SubmitCallable(&SNSClient::GetTopicAttributes, request);
        }

        /**
         * An Async wrapper for GetTopicAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTopicAttributesRequestT = Model::GetTopicAttributesRequest>
        void GetTopicAttributesAsync(const GetTopicAttributesRequestT& request, const GetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::GetTopicAttributes, request, handler, context);
        }

        /**
         * <p>Lists the endpoints and endpoint attributes for devices in a supported push
         * notification service, such as GCM (Firebase Cloud Messaging) and APNS. The
         * results for <code>ListEndpointsByPlatformApplication</code> are paginated and
         * return a limited list of endpoints, up to 100. If additional records are
         * available after the first page results, then a NextToken string will be
         * returned. To receive the next page, you call
         * <code>ListEndpointsByPlatformApplication</code> again using the NextToken string
         * received from the previous call. When there are no more records to return,
         * NextToken will be null. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p> <p>This action is throttled at 30
         * transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListEndpointsByPlatformApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointsByPlatformApplicationOutcome ListEndpointsByPlatformApplication(const Model::ListEndpointsByPlatformApplicationRequest& request) const;

        /**
         * A Callable wrapper for ListEndpointsByPlatformApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEndpointsByPlatformApplicationRequestT = Model::ListEndpointsByPlatformApplicationRequest>
        Model::ListEndpointsByPlatformApplicationOutcomeCallable ListEndpointsByPlatformApplicationCallable(const ListEndpointsByPlatformApplicationRequestT& request) const
        {
            return SubmitCallable(&SNSClient::ListEndpointsByPlatformApplication, request);
        }

        /**
         * An Async wrapper for ListEndpointsByPlatformApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEndpointsByPlatformApplicationRequestT = Model::ListEndpointsByPlatformApplicationRequest>
        void ListEndpointsByPlatformApplicationAsync(const ListEndpointsByPlatformApplicationRequestT& request, const ListEndpointsByPlatformApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::ListEndpointsByPlatformApplication, request, handler, context);
        }

        /**
         * <p>Lists the calling Amazon Web Services account's dedicated origination numbers
         * and their metadata. For more information about origination numbers, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/channels-sms-originating-identities-origination-numbers.html">Origination
         * numbers</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListOriginationNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOriginationNumbersOutcome ListOriginationNumbers(const Model::ListOriginationNumbersRequest& request) const;

        /**
         * A Callable wrapper for ListOriginationNumbers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOriginationNumbersRequestT = Model::ListOriginationNumbersRequest>
        Model::ListOriginationNumbersOutcomeCallable ListOriginationNumbersCallable(const ListOriginationNumbersRequestT& request) const
        {
            return SubmitCallable(&SNSClient::ListOriginationNumbers, request);
        }

        /**
         * An Async wrapper for ListOriginationNumbers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOriginationNumbersRequestT = Model::ListOriginationNumbersRequest>
        void ListOriginationNumbersAsync(const ListOriginationNumbersRequestT& request, const ListOriginationNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::ListOriginationNumbers, request, handler, context);
        }

        /**
         * <p>Returns a list of phone numbers that are opted out, meaning you cannot send
         * SMS messages to them.</p> <p>The results for
         * <code>ListPhoneNumbersOptedOut</code> are paginated, and each page returns up to
         * 100 phone numbers. If additional phone numbers are available after the first
         * page of results, then a <code>NextToken</code> string will be returned. To
         * receive the next page, you call <code>ListPhoneNumbersOptedOut</code> again
         * using the <code>NextToken</code> string received from the previous call. When
         * there are no more records to return, <code>NextToken</code> will be
         * null.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListPhoneNumbersOptedOut">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPhoneNumbersOptedOutOutcome ListPhoneNumbersOptedOut(const Model::ListPhoneNumbersOptedOutRequest& request) const;

        /**
         * A Callable wrapper for ListPhoneNumbersOptedOut that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPhoneNumbersOptedOutRequestT = Model::ListPhoneNumbersOptedOutRequest>
        Model::ListPhoneNumbersOptedOutOutcomeCallable ListPhoneNumbersOptedOutCallable(const ListPhoneNumbersOptedOutRequestT& request) const
        {
            return SubmitCallable(&SNSClient::ListPhoneNumbersOptedOut, request);
        }

        /**
         * An Async wrapper for ListPhoneNumbersOptedOut that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPhoneNumbersOptedOutRequestT = Model::ListPhoneNumbersOptedOutRequest>
        void ListPhoneNumbersOptedOutAsync(const ListPhoneNumbersOptedOutRequestT& request, const ListPhoneNumbersOptedOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::ListPhoneNumbersOptedOut, request, handler, context);
        }

        /**
         * <p>Lists the platform application objects for the supported push notification
         * services, such as APNS and GCM (Firebase Cloud Messaging). The results for
         * <code>ListPlatformApplications</code> are paginated and return a limited list of
         * applications, up to 100. If additional records are available after the first
         * page results, then a NextToken string will be returned. To receive the next
         * page, you call <code>ListPlatformApplications</code> using the NextToken string
         * received from the previous call. When there are no more records to return,
         * <code>NextToken</code> will be null. For more information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p> <p>This action is throttled at 15
         * transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListPlatformApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPlatformApplicationsOutcome ListPlatformApplications(const Model::ListPlatformApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListPlatformApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPlatformApplicationsRequestT = Model::ListPlatformApplicationsRequest>
        Model::ListPlatformApplicationsOutcomeCallable ListPlatformApplicationsCallable(const ListPlatformApplicationsRequestT& request) const
        {
            return SubmitCallable(&SNSClient::ListPlatformApplications, request);
        }

        /**
         * An Async wrapper for ListPlatformApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPlatformApplicationsRequestT = Model::ListPlatformApplicationsRequest>
        void ListPlatformApplicationsAsync(const ListPlatformApplicationsRequestT& request, const ListPlatformApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::ListPlatformApplications, request, handler, context);
        }

        /**
         * <p>Lists the calling Amazon Web Services account's current verified and pending
         * destination phone numbers in the SMS sandbox.</p> <p>When you start using Amazon
         * SNS to send SMS messages, your Amazon Web Services account is in the <i>SMS
         * sandbox</i>. The SMS sandbox provides a safe environment for you to try Amazon
         * SNS features without risking your reputation as an SMS sender. While your Amazon
         * Web Services account is in the SMS sandbox, you can use all of the features of
         * Amazon SNS. However, you can send SMS messages only to verified destination
         * phone numbers. For more information, including how to move out of the sandbox to
         * send messages without restrictions, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">SMS
         * sandbox</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListSMSSandboxPhoneNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSMSSandboxPhoneNumbersOutcome ListSMSSandboxPhoneNumbers(const Model::ListSMSSandboxPhoneNumbersRequest& request) const;

        /**
         * A Callable wrapper for ListSMSSandboxPhoneNumbers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSMSSandboxPhoneNumbersRequestT = Model::ListSMSSandboxPhoneNumbersRequest>
        Model::ListSMSSandboxPhoneNumbersOutcomeCallable ListSMSSandboxPhoneNumbersCallable(const ListSMSSandboxPhoneNumbersRequestT& request) const
        {
            return SubmitCallable(&SNSClient::ListSMSSandboxPhoneNumbers, request);
        }

        /**
         * An Async wrapper for ListSMSSandboxPhoneNumbers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSMSSandboxPhoneNumbersRequestT = Model::ListSMSSandboxPhoneNumbersRequest>
        void ListSMSSandboxPhoneNumbersAsync(const ListSMSSandboxPhoneNumbersRequestT& request, const ListSMSSandboxPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::ListSMSSandboxPhoneNumbers, request, handler, context);
        }

        /**
         * <p>Returns a list of the requester's subscriptions. Each call returns a limited
         * list of subscriptions, up to 100. If there are more subscriptions, a
         * <code>NextToken</code> is also returned. Use the <code>NextToken</code>
         * parameter in a new <code>ListSubscriptions</code> call to get further
         * results.</p> <p>This action is throttled at 30 transactions per second
         * (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscriptionsOutcome ListSubscriptions(const Model::ListSubscriptionsRequest& request) const;

        /**
         * A Callable wrapper for ListSubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSubscriptionsRequestT = Model::ListSubscriptionsRequest>
        Model::ListSubscriptionsOutcomeCallable ListSubscriptionsCallable(const ListSubscriptionsRequestT& request) const
        {
            return SubmitCallable(&SNSClient::ListSubscriptions, request);
        }

        /**
         * An Async wrapper for ListSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSubscriptionsRequestT = Model::ListSubscriptionsRequest>
        void ListSubscriptionsAsync(const ListSubscriptionsRequestT& request, const ListSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::ListSubscriptions, request, handler, context);
        }

        /**
         * <p>Returns a list of the subscriptions to a specific topic. Each call returns a
         * limited list of subscriptions, up to 100. If there are more subscriptions, a
         * <code>NextToken</code> is also returned. Use the <code>NextToken</code>
         * parameter in a new <code>ListSubscriptionsByTopic</code> call to get further
         * results.</p> <p>This action is throttled at 30 transactions per second
         * (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListSubscriptionsByTopic">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscriptionsByTopicOutcome ListSubscriptionsByTopic(const Model::ListSubscriptionsByTopicRequest& request) const;

        /**
         * A Callable wrapper for ListSubscriptionsByTopic that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSubscriptionsByTopicRequestT = Model::ListSubscriptionsByTopicRequest>
        Model::ListSubscriptionsByTopicOutcomeCallable ListSubscriptionsByTopicCallable(const ListSubscriptionsByTopicRequestT& request) const
        {
            return SubmitCallable(&SNSClient::ListSubscriptionsByTopic, request);
        }

        /**
         * An Async wrapper for ListSubscriptionsByTopic that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSubscriptionsByTopicRequestT = Model::ListSubscriptionsByTopicRequest>
        void ListSubscriptionsByTopicAsync(const ListSubscriptionsByTopicRequestT& request, const ListSubscriptionsByTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::ListSubscriptionsByTopic, request, handler, context);
        }

        /**
         * <p>List all tags added to the specified Amazon SNS topic. For an overview, see
         * <a href="https://docs.aws.amazon.com/sns/latest/dg/sns-tags.html">Amazon SNS
         * Tags</a> in the <i>Amazon Simple Notification Service Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&SNSClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Returns a list of the requester's topics. Each call returns a limited list of
         * topics, up to 100. If there are more topics, a <code>NextToken</code> is also
         * returned. Use the <code>NextToken</code> parameter in a new
         * <code>ListTopics</code> call to get further results.</p> <p>This action is
         * throttled at 30 transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListTopics">AWS API
         * Reference</a></p>
         */
        virtual Model::ListTopicsOutcome ListTopics(const Model::ListTopicsRequest& request) const;

        /**
         * A Callable wrapper for ListTopics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTopicsRequestT = Model::ListTopicsRequest>
        Model::ListTopicsOutcomeCallable ListTopicsCallable(const ListTopicsRequestT& request) const
        {
            return SubmitCallable(&SNSClient::ListTopics, request);
        }

        /**
         * An Async wrapper for ListTopics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTopicsRequestT = Model::ListTopicsRequest>
        void ListTopicsAsync(const ListTopicsRequestT& request, const ListTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::ListTopics, request, handler, context);
        }

        /**
         * <p>Use this request to opt in a phone number that is opted out, which enables
         * you to resume sending SMS messages to the number.</p> <p>You can opt in a phone
         * number only once every 30 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/OptInPhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::OptInPhoneNumberOutcome OptInPhoneNumber(const Model::OptInPhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for OptInPhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename OptInPhoneNumberRequestT = Model::OptInPhoneNumberRequest>
        Model::OptInPhoneNumberOutcomeCallable OptInPhoneNumberCallable(const OptInPhoneNumberRequestT& request) const
        {
            return SubmitCallable(&SNSClient::OptInPhoneNumber, request);
        }

        /**
         * An Async wrapper for OptInPhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename OptInPhoneNumberRequestT = Model::OptInPhoneNumberRequest>
        void OptInPhoneNumberAsync(const OptInPhoneNumberRequestT& request, const OptInPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::OptInPhoneNumber, request, handler, context);
        }

        /**
         * <p>Sends a message to an Amazon SNS topic, a text message (SMS message) directly
         * to a phone number, or a message to a mobile platform endpoint (when you specify
         * the <code>TargetArn</code>).</p> <p>If you send a message to a topic, Amazon SNS
         * delivers the message to each endpoint that is subscribed to the topic. The
         * format of the message depends on the notification protocol for each subscribed
         * endpoint.</p> <p>When a <code>messageId</code> is returned, the message is saved
         * and Amazon SNS immediately delivers it to subscribers.</p> <p>To use the
         * <code>Publish</code> action for publishing a message to a mobile endpoint, such
         * as an app on a Kindle device or mobile phone, you must specify the EndpointArn
         * for the TargetArn parameter. The EndpointArn is returned when making a call with
         * the <code>CreatePlatformEndpoint</code> action. </p> <p>For more information
         * about formatting messages, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/mobile-push-send-custommessage.html">Send
         * Custom Platform-Specific Payloads in Messages to Mobile Devices</a>. </p>
         *  <p>You can publish messages only to topics and endpoints in the same
         * Amazon Web Services Region.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/Publish">AWS API
         * Reference</a></p>
         */
        virtual Model::PublishOutcome Publish(const Model::PublishRequest& request) const;

        /**
         * A Callable wrapper for Publish that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PublishRequestT = Model::PublishRequest>
        Model::PublishOutcomeCallable PublishCallable(const PublishRequestT& request) const
        {
            return SubmitCallable(&SNSClient::Publish, request);
        }

        /**
         * An Async wrapper for Publish that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PublishRequestT = Model::PublishRequest>
        void PublishAsync(const PublishRequestT& request, const PublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::Publish, request, handler, context);
        }

        /**
         * <p>Publishes up to ten messages to the specified topic. This is a batch version
         * of <code>Publish</code>. For FIFO topics, multiple messages within a single
         * batch are published in the order they are sent, and messages are deduplicated
         * within the batch and across batches for 5 minutes.</p> <p>The result of
         * publishing each message is reported individually in the response. Because the
         * batch request can result in a combination of successful and unsuccessful
         * actions, you should check for batch errors even when the call returns an HTTP
         * status code of <code>200</code>.</p> <p>The maximum allowed individual message
         * size and the maximum total payload size (the sum of the individual lengths of
         * all of the batched messages) are both 256 KB (262,144 bytes). </p> <p>Some
         * actions take lists of parameters. These lists are specified using the
         * <code>param.n</code> notation. Values of <code>n</code> are integers starting
         * from 1. For example, a parameter list with two elements looks like this: </p>
         * <p>&amp;AttributeName.1=first</p> <p>&amp;AttributeName.2=second</p> <p>If you
         * send a batch message to a topic, Amazon SNS publishes the batch message to each
         * endpoint that is subscribed to the topic. The format of the batch message
         * depends on the notification protocol for each subscribed endpoint.</p> <p>When a
         * <code>messageId</code> is returned, the batch message is saved and Amazon SNS
         * immediately delivers the message to subscribers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/PublishBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishBatchOutcome PublishBatch(const Model::PublishBatchRequest& request) const;

        /**
         * A Callable wrapper for PublishBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PublishBatchRequestT = Model::PublishBatchRequest>
        Model::PublishBatchOutcomeCallable PublishBatchCallable(const PublishBatchRequestT& request) const
        {
            return SubmitCallable(&SNSClient::PublishBatch, request);
        }

        /**
         * An Async wrapper for PublishBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PublishBatchRequestT = Model::PublishBatchRequest>
        void PublishBatchAsync(const PublishBatchRequestT& request, const PublishBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::PublishBatch, request, handler, context);
        }

        /**
         * <p>Adds or updates an inline policy document that is stored in the specified
         * Amazon SNS topic.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/PutDataProtectionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDataProtectionPolicyOutcome PutDataProtectionPolicy(const Model::PutDataProtectionPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutDataProtectionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutDataProtectionPolicyRequestT = Model::PutDataProtectionPolicyRequest>
        Model::PutDataProtectionPolicyOutcomeCallable PutDataProtectionPolicyCallable(const PutDataProtectionPolicyRequestT& request) const
        {
            return SubmitCallable(&SNSClient::PutDataProtectionPolicy, request);
        }

        /**
         * An Async wrapper for PutDataProtectionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutDataProtectionPolicyRequestT = Model::PutDataProtectionPolicyRequest>
        void PutDataProtectionPolicyAsync(const PutDataProtectionPolicyRequestT& request, const PutDataProtectionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::PutDataProtectionPolicy, request, handler, context);
        }

        /**
         * <p>Removes a statement from a topic's access control policy.</p>  <p>To
         * remove the ability to change topic permissions, you must deny permissions to the
         * <code>AddPermission</code>, <code>RemovePermission</code>, and
         * <code>SetTopicAttributes</code> actions in your IAM policy.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/RemovePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::RemovePermissionOutcome RemovePermission(const Model::RemovePermissionRequest& request) const;

        /**
         * A Callable wrapper for RemovePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemovePermissionRequestT = Model::RemovePermissionRequest>
        Model::RemovePermissionOutcomeCallable RemovePermissionCallable(const RemovePermissionRequestT& request) const
        {
            return SubmitCallable(&SNSClient::RemovePermission, request);
        }

        /**
         * An Async wrapper for RemovePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemovePermissionRequestT = Model::RemovePermissionRequest>
        void RemovePermissionAsync(const RemovePermissionRequestT& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::RemovePermission, request, handler, context);
        }

        /**
         * <p>Sets the attributes for an endpoint for a device on one of the supported push
         * notification services, such as GCM (Firebase Cloud Messaging) and APNS. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetEndpointAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::SetEndpointAttributesOutcome SetEndpointAttributes(const Model::SetEndpointAttributesRequest& request) const;

        /**
         * A Callable wrapper for SetEndpointAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetEndpointAttributesRequestT = Model::SetEndpointAttributesRequest>
        Model::SetEndpointAttributesOutcomeCallable SetEndpointAttributesCallable(const SetEndpointAttributesRequestT& request) const
        {
            return SubmitCallable(&SNSClient::SetEndpointAttributes, request);
        }

        /**
         * An Async wrapper for SetEndpointAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetEndpointAttributesRequestT = Model::SetEndpointAttributesRequest>
        void SetEndpointAttributesAsync(const SetEndpointAttributesRequestT& request, const SetEndpointAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::SetEndpointAttributes, request, handler, context);
        }

        /**
         * <p>Sets the attributes of the platform application object for the supported push
         * notification services, such as APNS and GCM (Firebase Cloud Messaging). For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMobilePush.html">Using Amazon
         * SNS Mobile Push Notifications</a>. For information on configuring attributes for
         * message delivery status, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-msg-status.html">Using
         * Amazon SNS Application Attributes for Message Delivery Status</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetPlatformApplicationAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::SetPlatformApplicationAttributesOutcome SetPlatformApplicationAttributes(const Model::SetPlatformApplicationAttributesRequest& request) const;

        /**
         * A Callable wrapper for SetPlatformApplicationAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetPlatformApplicationAttributesRequestT = Model::SetPlatformApplicationAttributesRequest>
        Model::SetPlatformApplicationAttributesOutcomeCallable SetPlatformApplicationAttributesCallable(const SetPlatformApplicationAttributesRequestT& request) const
        {
            return SubmitCallable(&SNSClient::SetPlatformApplicationAttributes, request);
        }

        /**
         * An Async wrapper for SetPlatformApplicationAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetPlatformApplicationAttributesRequestT = Model::SetPlatformApplicationAttributesRequest>
        void SetPlatformApplicationAttributesAsync(const SetPlatformApplicationAttributesRequestT& request, const SetPlatformApplicationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::SetPlatformApplicationAttributes, request, handler, context);
        }

        /**
         * <p>Use this request to set the default settings for sending SMS messages and
         * receiving daily SMS usage reports.</p> <p>You can override some of these
         * settings for a single message when you use the <code>Publish</code> action with
         * the <code>MessageAttributes.entry.N</code> parameter. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sms_publish-to-phone.html">Publishing
         * to a mobile phone</a> in the <i>Amazon SNS Developer Guide</i>.</p>  <p>To
         * use this operation, you must grant the Amazon SNS service principal
         * (<code>sns.amazonaws.com</code>) permission to perform the
         * <code>s3:ListBucket</code> action. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetSMSAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::SetSMSAttributesOutcome SetSMSAttributes(const Model::SetSMSAttributesRequest& request) const;

        /**
         * A Callable wrapper for SetSMSAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetSMSAttributesRequestT = Model::SetSMSAttributesRequest>
        Model::SetSMSAttributesOutcomeCallable SetSMSAttributesCallable(const SetSMSAttributesRequestT& request) const
        {
            return SubmitCallable(&SNSClient::SetSMSAttributes, request);
        }

        /**
         * An Async wrapper for SetSMSAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetSMSAttributesRequestT = Model::SetSMSAttributesRequest>
        void SetSMSAttributesAsync(const SetSMSAttributesRequestT& request, const SetSMSAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::SetSMSAttributes, request, handler, context);
        }

        /**
         * <p>Allows a subscription owner to set an attribute of the subscription to a new
         * value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetSubscriptionAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::SetSubscriptionAttributesOutcome SetSubscriptionAttributes(const Model::SetSubscriptionAttributesRequest& request) const;

        /**
         * A Callable wrapper for SetSubscriptionAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetSubscriptionAttributesRequestT = Model::SetSubscriptionAttributesRequest>
        Model::SetSubscriptionAttributesOutcomeCallable SetSubscriptionAttributesCallable(const SetSubscriptionAttributesRequestT& request) const
        {
            return SubmitCallable(&SNSClient::SetSubscriptionAttributes, request);
        }

        /**
         * An Async wrapper for SetSubscriptionAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetSubscriptionAttributesRequestT = Model::SetSubscriptionAttributesRequest>
        void SetSubscriptionAttributesAsync(const SetSubscriptionAttributesRequestT& request, const SetSubscriptionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::SetSubscriptionAttributes, request, handler, context);
        }

        /**
         * <p>Allows a topic owner to set an attribute of the topic to a new value.</p>
         *  <p>To remove the ability to change topic permissions, you must deny
         * permissions to the <code>AddPermission</code>, <code>RemovePermission</code>,
         * and <code>SetTopicAttributes</code> actions in your IAM policy.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetTopicAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::SetTopicAttributesOutcome SetTopicAttributes(const Model::SetTopicAttributesRequest& request) const;

        /**
         * A Callable wrapper for SetTopicAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetTopicAttributesRequestT = Model::SetTopicAttributesRequest>
        Model::SetTopicAttributesOutcomeCallable SetTopicAttributesCallable(const SetTopicAttributesRequestT& request) const
        {
            return SubmitCallable(&SNSClient::SetTopicAttributes, request);
        }

        /**
         * An Async wrapper for SetTopicAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetTopicAttributesRequestT = Model::SetTopicAttributesRequest>
        void SetTopicAttributesAsync(const SetTopicAttributesRequestT& request, const SetTopicAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::SetTopicAttributes, request, handler, context);
        }

        /**
         * <p>Subscribes an endpoint to an Amazon SNS topic. If the endpoint type is HTTP/S
         * or email, or if the endpoint and the topic are not in the same Amazon Web
         * Services account, the endpoint owner must run the
         * <code>ConfirmSubscription</code> action to confirm the subscription.</p> <p>You
         * call the <code>ConfirmSubscription</code> action with the token from the
         * subscription response. Confirmation tokens are valid for two days.</p> <p>This
         * action is throttled at 100 transactions per second (TPS).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/Subscribe">AWS API
         * Reference</a></p>
         */
        virtual Model::SubscribeOutcome Subscribe(const Model::SubscribeRequest& request) const;

        /**
         * A Callable wrapper for Subscribe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SubscribeRequestT = Model::SubscribeRequest>
        Model::SubscribeOutcomeCallable SubscribeCallable(const SubscribeRequestT& request) const
        {
            return SubmitCallable(&SNSClient::Subscribe, request);
        }

        /**
         * An Async wrapper for Subscribe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SubscribeRequestT = Model::SubscribeRequest>
        void SubscribeAsync(const SubscribeRequestT& request, const SubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::Subscribe, request, handler, context);
        }

        /**
         * <p>Add tags to the specified Amazon SNS topic. For an overview, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-tags.html">Amazon SNS
         * Tags</a> in the <i>Amazon SNS Developer Guide</i>.</p> <p>When you use topic
         * tags, keep the following guidelines in mind:</p> <ul> <li> <p>Adding more than
         * 50 tags to a topic isn't recommended.</p> </li> <li> <p>Tags don't have any
         * semantic meaning. Amazon SNS interprets tags as character strings.</p> </li>
         * <li> <p>Tags are case-sensitive.</p> </li> <li> <p>A new tag with a key
         * identical to that of an existing tag overwrites the existing tag.</p> </li> <li>
         * <p>Tagging actions are limited to 10 TPS per Amazon Web Services account, per
         * Amazon Web Services Region. If your application requires a higher throughput,
         * file a <a
         * href="https://console.aws.amazon.com/support/home#/case/create?issueType=technical">technical
         * support request</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&SNSClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::TagResource, request, handler, context);
        }

        /**
         * <p>Deletes a subscription. If the subscription requires authentication for
         * deletion, only the owner of the subscription or the topic's owner can
         * unsubscribe, and an Amazon Web Services signature is required. If the
         * <code>Unsubscribe</code> call does not require authentication and the requester
         * is not the subscription owner, a final cancellation message is delivered to the
         * endpoint, so that the endpoint owner can easily resubscribe to the topic if the
         * <code>Unsubscribe</code> request was unintended.</p>  <p>Amazon SQS queue
         * subscriptions require authentication for deletion. Only the owner of the
         * subscription, or the owner of the topic can unsubscribe using the required
         * Amazon Web Services signature.</p>  <p>This action is throttled at 100
         * transactions per second (TPS).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/Unsubscribe">AWS API
         * Reference</a></p>
         */
        virtual Model::UnsubscribeOutcome Unsubscribe(const Model::UnsubscribeRequest& request) const;

        /**
         * A Callable wrapper for Unsubscribe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UnsubscribeRequestT = Model::UnsubscribeRequest>
        Model::UnsubscribeOutcomeCallable UnsubscribeCallable(const UnsubscribeRequestT& request) const
        {
            return SubmitCallable(&SNSClient::Unsubscribe, request);
        }

        /**
         * An Async wrapper for Unsubscribe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UnsubscribeRequestT = Model::UnsubscribeRequest>
        void UnsubscribeAsync(const UnsubscribeRequestT& request, const UnsubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::Unsubscribe, request, handler, context);
        }

        /**
         * <p>Remove tags from the specified Amazon SNS topic. For an overview, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-tags.html">Amazon SNS
         * Tags</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&SNSClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Verifies a destination phone number with a one-time password (OTP) for the
         * calling Amazon Web Services account.</p> <p>When you start using Amazon SNS to
         * send SMS messages, your Amazon Web Services account is in the <i>SMS
         * sandbox</i>. The SMS sandbox provides a safe environment for you to try Amazon
         * SNS features without risking your reputation as an SMS sender. While your Amazon
         * Web Services account is in the SMS sandbox, you can use all of the features of
         * Amazon SNS. However, you can send SMS messages only to verified destination
         * phone numbers. For more information, including how to move out of the sandbox to
         * send messages without restrictions, see <a
         * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox.html">SMS
         * sandbox</a> in the <i>Amazon SNS Developer Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/VerifySMSSandboxPhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifySMSSandboxPhoneNumberOutcome VerifySMSSandboxPhoneNumber(const Model::VerifySMSSandboxPhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for VerifySMSSandboxPhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename VerifySMSSandboxPhoneNumberRequestT = Model::VerifySMSSandboxPhoneNumberRequest>
        Model::VerifySMSSandboxPhoneNumberOutcomeCallable VerifySMSSandboxPhoneNumberCallable(const VerifySMSSandboxPhoneNumberRequestT& request) const
        {
            return SubmitCallable(&SNSClient::VerifySMSSandboxPhoneNumber, request);
        }

        /**
         * An Async wrapper for VerifySMSSandboxPhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename VerifySMSSandboxPhoneNumberRequestT = Model::VerifySMSSandboxPhoneNumberRequest>
        void VerifySMSSandboxPhoneNumberAsync(const VerifySMSSandboxPhoneNumberRequestT& request, const VerifySMSSandboxPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SNSClient::VerifySMSSandboxPhoneNumber, request, handler, context);
        }


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<SNSEndpointProviderBase>& accessEndpointProvider();
  private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<SNSClient>;
        void init(const SNSClientConfiguration& clientConfiguration);

        SNSClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<SNSEndpointProviderBase> m_endpointProvider;
  };

} // namespace SNS
} // namespace Aws
