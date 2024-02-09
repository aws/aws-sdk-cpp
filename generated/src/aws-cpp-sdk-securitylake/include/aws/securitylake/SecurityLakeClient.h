/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securitylake/SecurityLakeServiceClientModel.h>

namespace Aws
{
namespace SecurityLake
{
  /**
   * <p>Amazon Security Lake is a fully managed security data lake service. You can
   * use Security Lake to automatically centralize security data from cloud,
   * on-premises, and custom sources into a data lake that's stored in your Amazon
   * Web Services account. Amazon Web Services Organizations is an account management
   * service that lets you consolidate multiple Amazon Web Services accounts into an
   * organization that you create and centrally manage. With Organizations, you can
   * create member accounts and invite existing accounts to join your organization.
   * Security Lake helps you analyze security data for a more complete understanding
   * of your security posture across the entire organization. It can also help you
   * improve the protection of your workloads, applications, and data.</p> <p>The
   * data lake is backed by Amazon Simple Storage Service (Amazon S3) buckets, and
   * you retain ownership over your data.</p> <p>Amazon Security Lake integrates with
   * CloudTrail, a service that provides a record of actions taken by a user, role,
   * or an Amazon Web Services service. In Security Lake, CloudTrail captures API
   * calls for Security Lake as events. The calls captured include calls from the
   * Security Lake console and code calls to the Security Lake API operations. If you
   * create a trail, you can enable continuous delivery of CloudTrail events to an
   * Amazon S3 bucket, including events for Security Lake. If you don't configure a
   * trail, you can still view the most recent events in the CloudTrail console in
   * Event history. Using the information collected by CloudTrail you can determine
   * the request that was made to Security Lake, the IP address from which the
   * request was made, who made the request, when it was made, and additional
   * details. To learn more about Security Lake information in CloudTrail, see the <a
   * href="https://docs.aws.amazon.com/security-lake/latest/userguide/securitylake-cloudtrail.html">Amazon
   * Security Lake User Guide</a>.</p> <p>Security Lake automates the collection of
   * security-related log and event data from integrated Amazon Web Services and
   * third-party services. It also helps you manage the lifecycle of data with
   * customizable retention and replication settings. Security Lake converts ingested
   * data into Apache Parquet format and a standard open-source schema called the
   * Open Cybersecurity Schema Framework (OCSF).</p> <p>Other Amazon Web Services and
   * third-party services can subscribe to the data that's stored in Security Lake
   * for incident response and security data analytics.</p>
   */
  class AWS_SECURITYLAKE_API SecurityLakeClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SecurityLakeClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SecurityLakeClientConfiguration ClientConfigurationType;
      typedef SecurityLakeEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityLakeClient(const Aws::SecurityLake::SecurityLakeClientConfiguration& clientConfiguration = Aws::SecurityLake::SecurityLakeClientConfiguration(),
                           std::shared_ptr<SecurityLakeEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityLakeClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<SecurityLakeEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::SecurityLake::SecurityLakeClientConfiguration& clientConfiguration = Aws::SecurityLake::SecurityLakeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SecurityLakeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<SecurityLakeEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::SecurityLake::SecurityLakeClientConfiguration& clientConfiguration = Aws::SecurityLake::SecurityLakeClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityLakeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityLakeClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SecurityLakeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SecurityLakeClient();

        /**
         * <p>Adds a natively supported Amazon Web Service as an Amazon Security Lake
         * source. Enables source types for member accounts in required Amazon Web Services
         * Regions, based on the parameters you specify. You can choose any source type in
         * any Region for either accounts that are part of a trusted organization or
         * standalone accounts. Once you add an Amazon Web Service as a source, Security
         * Lake starts collecting logs and events from it.</p> <p>You can use this API only
         * to enable natively supported Amazon Web Services as a source. Use
         * <code>CreateCustomLogSource</code> to enable data collection from a custom
         * source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CreateAwsLogSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAwsLogSourceOutcome CreateAwsLogSource(const Model::CreateAwsLogSourceRequest& request) const;

        /**
         * A Callable wrapper for CreateAwsLogSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAwsLogSourceRequestT = Model::CreateAwsLogSourceRequest>
        Model::CreateAwsLogSourceOutcomeCallable CreateAwsLogSourceCallable(const CreateAwsLogSourceRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::CreateAwsLogSource, request);
        }

        /**
         * An Async wrapper for CreateAwsLogSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAwsLogSourceRequestT = Model::CreateAwsLogSourceRequest>
        void CreateAwsLogSourceAsync(const CreateAwsLogSourceRequestT& request, const CreateAwsLogSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::CreateAwsLogSource, request, handler, context);
        }

        /**
         * <p>Adds a third-party custom source in Amazon Security Lake, from the Amazon Web
         * Services Region where you want to create a custom source. Security Lake can
         * collect logs and events from third-party custom sources. After creating the
         * appropriate IAM role to invoke Glue crawler, use this API to add a custom source
         * name in Security Lake. This operation creates a partition in the Amazon S3
         * bucket for Security Lake as the target location for log files from the custom
         * source. In addition, this operation also creates an associated Glue table and an
         * Glue crawler.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CreateCustomLogSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomLogSourceOutcome CreateCustomLogSource(const Model::CreateCustomLogSourceRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomLogSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCustomLogSourceRequestT = Model::CreateCustomLogSourceRequest>
        Model::CreateCustomLogSourceOutcomeCallable CreateCustomLogSourceCallable(const CreateCustomLogSourceRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::CreateCustomLogSource, request);
        }

        /**
         * An Async wrapper for CreateCustomLogSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCustomLogSourceRequestT = Model::CreateCustomLogSourceRequest>
        void CreateCustomLogSourceAsync(const CreateCustomLogSourceRequestT& request, const CreateCustomLogSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::CreateCustomLogSource, request, handler, context);
        }

        /**
         * <p>Initializes an Amazon Security Lake instance with the provided (or default)
         * configuration. You can enable Security Lake in Amazon Web Services Regions with
         * customized settings before enabling log collection in Regions. To specify
         * particular Regions, configure these Regions using the
         * <code>configurations</code> parameter. If you have already enabled Security Lake
         * in a Region when you call this command, the command will update the Region if
         * you provide new configuration parameters. If you have not already enabled
         * Security Lake in the Region when you call this API, it will set up the data lake
         * in the Region with the specified configurations.</p> <p>When you enable Security
         * Lake, it starts ingesting security data after the
         * <code>CreateAwsLogSource</code> call. This includes ingesting security data from
         * sources, storing data, and making data accessible to subscribers. Security Lake
         * also enables all the existing settings and resources that it stores or maintains
         * for your Amazon Web Services account in the current Region, including security
         * log and event data. For more information, see the <a
         * href="https://docs.aws.amazon.com/security-lake/latest/userguide/what-is-security-lake.html">Amazon
         * Security Lake User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CreateDataLake">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataLakeOutcome CreateDataLake(const Model::CreateDataLakeRequest& request) const;

        /**
         * A Callable wrapper for CreateDataLake that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataLakeRequestT = Model::CreateDataLakeRequest>
        Model::CreateDataLakeOutcomeCallable CreateDataLakeCallable(const CreateDataLakeRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::CreateDataLake, request);
        }

        /**
         * An Async wrapper for CreateDataLake that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataLakeRequestT = Model::CreateDataLakeRequest>
        void CreateDataLakeAsync(const CreateDataLakeRequestT& request, const CreateDataLakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::CreateDataLake, request, handler, context);
        }

        /**
         * <p>Creates the specified notification subscription in Amazon Security Lake for
         * the organization you specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CreateDataLakeExceptionSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataLakeExceptionSubscriptionOutcome CreateDataLakeExceptionSubscription(const Model::CreateDataLakeExceptionSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for CreateDataLakeExceptionSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataLakeExceptionSubscriptionRequestT = Model::CreateDataLakeExceptionSubscriptionRequest>
        Model::CreateDataLakeExceptionSubscriptionOutcomeCallable CreateDataLakeExceptionSubscriptionCallable(const CreateDataLakeExceptionSubscriptionRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::CreateDataLakeExceptionSubscription, request);
        }

        /**
         * An Async wrapper for CreateDataLakeExceptionSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataLakeExceptionSubscriptionRequestT = Model::CreateDataLakeExceptionSubscriptionRequest>
        void CreateDataLakeExceptionSubscriptionAsync(const CreateDataLakeExceptionSubscriptionRequestT& request, const CreateDataLakeExceptionSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::CreateDataLakeExceptionSubscription, request, handler, context);
        }

        /**
         * <p>Automatically enables Amazon Security Lake for new member accounts in your
         * organization. Security Lake is not automatically enabled for any existing member
         * accounts in your organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CreateDataLakeOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataLakeOrganizationConfigurationOutcome CreateDataLakeOrganizationConfiguration(const Model::CreateDataLakeOrganizationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateDataLakeOrganizationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataLakeOrganizationConfigurationRequestT = Model::CreateDataLakeOrganizationConfigurationRequest>
        Model::CreateDataLakeOrganizationConfigurationOutcomeCallable CreateDataLakeOrganizationConfigurationCallable(const CreateDataLakeOrganizationConfigurationRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::CreateDataLakeOrganizationConfiguration, request);
        }

        /**
         * An Async wrapper for CreateDataLakeOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataLakeOrganizationConfigurationRequestT = Model::CreateDataLakeOrganizationConfigurationRequest>
        void CreateDataLakeOrganizationConfigurationAsync(const CreateDataLakeOrganizationConfigurationRequestT& request, const CreateDataLakeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::CreateDataLakeOrganizationConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a subscription permission for accounts that are already enabled in
         * Amazon Security Lake. You can create a subscriber with access to data in the
         * current Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CreateSubscriber">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriberOutcome CreateSubscriber(const Model::CreateSubscriberRequest& request) const;

        /**
         * A Callable wrapper for CreateSubscriber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSubscriberRequestT = Model::CreateSubscriberRequest>
        Model::CreateSubscriberOutcomeCallable CreateSubscriberCallable(const CreateSubscriberRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::CreateSubscriber, request);
        }

        /**
         * An Async wrapper for CreateSubscriber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSubscriberRequestT = Model::CreateSubscriberRequest>
        void CreateSubscriberAsync(const CreateSubscriberRequestT& request, const CreateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::CreateSubscriber, request, handler, context);
        }

        /**
         * <p>Notifies the subscriber when new data is written to the data lake for the
         * sources that the subscriber consumes in Security Lake. You can create only one
         * subscriber notification per subscriber.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CreateSubscriberNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriberNotificationOutcome CreateSubscriberNotification(const Model::CreateSubscriberNotificationRequest& request) const;

        /**
         * A Callable wrapper for CreateSubscriberNotification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSubscriberNotificationRequestT = Model::CreateSubscriberNotificationRequest>
        Model::CreateSubscriberNotificationOutcomeCallable CreateSubscriberNotificationCallable(const CreateSubscriberNotificationRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::CreateSubscriberNotification, request);
        }

        /**
         * An Async wrapper for CreateSubscriberNotification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSubscriberNotificationRequestT = Model::CreateSubscriberNotificationRequest>
        void CreateSubscriberNotificationAsync(const CreateSubscriberNotificationRequestT& request, const CreateSubscriberNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::CreateSubscriberNotification, request, handler, context);
        }

        /**
         * <p>Removes a natively supported Amazon Web Service as an Amazon Security Lake
         * source. You can remove a source for one or more Regions. When you remove the
         * source, Security Lake stops collecting data from that source in the specified
         * Regions and accounts, and subscribers can no longer consume new data from the
         * source. However, subscribers can still consume data that Security Lake collected
         * from the source before removal.</p> <p>You can choose any source type in any
         * Amazon Web Services Region for either accounts that are part of a trusted
         * organization or standalone accounts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DeleteAwsLogSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAwsLogSourceOutcome DeleteAwsLogSource(const Model::DeleteAwsLogSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteAwsLogSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAwsLogSourceRequestT = Model::DeleteAwsLogSourceRequest>
        Model::DeleteAwsLogSourceOutcomeCallable DeleteAwsLogSourceCallable(const DeleteAwsLogSourceRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::DeleteAwsLogSource, request);
        }

        /**
         * An Async wrapper for DeleteAwsLogSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAwsLogSourceRequestT = Model::DeleteAwsLogSourceRequest>
        void DeleteAwsLogSourceAsync(const DeleteAwsLogSourceRequestT& request, const DeleteAwsLogSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::DeleteAwsLogSource, request, handler, context);
        }

        /**
         * <p>Removes a custom log source from Amazon Security Lake, to stop sending data
         * from the custom source to Security Lake.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DeleteCustomLogSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomLogSourceOutcome DeleteCustomLogSource(const Model::DeleteCustomLogSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomLogSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCustomLogSourceRequestT = Model::DeleteCustomLogSourceRequest>
        Model::DeleteCustomLogSourceOutcomeCallable DeleteCustomLogSourceCallable(const DeleteCustomLogSourceRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::DeleteCustomLogSource, request);
        }

        /**
         * An Async wrapper for DeleteCustomLogSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCustomLogSourceRequestT = Model::DeleteCustomLogSourceRequest>
        void DeleteCustomLogSourceAsync(const DeleteCustomLogSourceRequestT& request, const DeleteCustomLogSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::DeleteCustomLogSource, request, handler, context);
        }

        /**
         * <p>When you disable Amazon Security Lake from your account, Security Lake is
         * disabled in all Amazon Web Services Regions and it stops collecting data from
         * your sources. Also, this API automatically takes steps to remove the account
         * from Security Lake. However, Security Lake retains all of your existing settings
         * and the resources that it created in your Amazon Web Services account in the
         * current Amazon Web Services Region.</p> <p>The <code>DeleteDataLake</code>
         * operation does not delete the data that is stored in your Amazon S3 bucket,
         * which is owned by your Amazon Web Services account. For more information, see
         * the <a
         * href="https://docs.aws.amazon.com/security-lake/latest/userguide/disable-security-lake.html">Amazon
         * Security Lake User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DeleteDataLake">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataLakeOutcome DeleteDataLake(const Model::DeleteDataLakeRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataLake that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataLakeRequestT = Model::DeleteDataLakeRequest>
        Model::DeleteDataLakeOutcomeCallable DeleteDataLakeCallable(const DeleteDataLakeRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::DeleteDataLake, request);
        }

        /**
         * An Async wrapper for DeleteDataLake that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataLakeRequestT = Model::DeleteDataLakeRequest>
        void DeleteDataLakeAsync(const DeleteDataLakeRequestT& request, const DeleteDataLakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::DeleteDataLake, request, handler, context);
        }

        /**
         * <p>Deletes the specified notification subscription in Amazon Security Lake for
         * the organization you specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DeleteDataLakeExceptionSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataLakeExceptionSubscriptionOutcome DeleteDataLakeExceptionSubscription(const Model::DeleteDataLakeExceptionSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataLakeExceptionSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataLakeExceptionSubscriptionRequestT = Model::DeleteDataLakeExceptionSubscriptionRequest>
        Model::DeleteDataLakeExceptionSubscriptionOutcomeCallable DeleteDataLakeExceptionSubscriptionCallable(const DeleteDataLakeExceptionSubscriptionRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::DeleteDataLakeExceptionSubscription, request);
        }

        /**
         * An Async wrapper for DeleteDataLakeExceptionSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataLakeExceptionSubscriptionRequestT = Model::DeleteDataLakeExceptionSubscriptionRequest>
        void DeleteDataLakeExceptionSubscriptionAsync(const DeleteDataLakeExceptionSubscriptionRequestT& request, const DeleteDataLakeExceptionSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::DeleteDataLakeExceptionSubscription, request, handler, context);
        }

        /**
         * <p>Turns off automatic enablement of Amazon Security Lake for member accounts
         * that are added to an organization in Organizations. Only the delegated Security
         * Lake administrator for an organization can perform this operation. If the
         * delegated Security Lake administrator performs this operation, new member
         * accounts won't automatically contribute data to the data lake.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DeleteDataLakeOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataLakeOrganizationConfigurationOutcome DeleteDataLakeOrganizationConfiguration(const Model::DeleteDataLakeOrganizationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataLakeOrganizationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataLakeOrganizationConfigurationRequestT = Model::DeleteDataLakeOrganizationConfigurationRequest>
        Model::DeleteDataLakeOrganizationConfigurationOutcomeCallable DeleteDataLakeOrganizationConfigurationCallable(const DeleteDataLakeOrganizationConfigurationRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::DeleteDataLakeOrganizationConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteDataLakeOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataLakeOrganizationConfigurationRequestT = Model::DeleteDataLakeOrganizationConfigurationRequest>
        void DeleteDataLakeOrganizationConfigurationAsync(const DeleteDataLakeOrganizationConfigurationRequestT& request, const DeleteDataLakeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::DeleteDataLakeOrganizationConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the subscription permission and all notification settings for
         * accounts that are already enabled in Amazon Security Lake. When you run
         * <code>DeleteSubscriber</code>, the subscriber will no longer consume data from
         * Security Lake and the subscriber is removed. This operation deletes the
         * subscriber and removes access to data in the current Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DeleteSubscriber">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubscriberOutcome DeleteSubscriber(const Model::DeleteSubscriberRequest& request) const;

        /**
         * A Callable wrapper for DeleteSubscriber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSubscriberRequestT = Model::DeleteSubscriberRequest>
        Model::DeleteSubscriberOutcomeCallable DeleteSubscriberCallable(const DeleteSubscriberRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::DeleteSubscriber, request);
        }

        /**
         * An Async wrapper for DeleteSubscriber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSubscriberRequestT = Model::DeleteSubscriberRequest>
        void DeleteSubscriberAsync(const DeleteSubscriberRequestT& request, const DeleteSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::DeleteSubscriber, request, handler, context);
        }

        /**
         * <p>Deletes the specified notification subscription in Amazon Security Lake for
         * the organization you specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DeleteSubscriberNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubscriberNotificationOutcome DeleteSubscriberNotification(const Model::DeleteSubscriberNotificationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSubscriberNotification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSubscriberNotificationRequestT = Model::DeleteSubscriberNotificationRequest>
        Model::DeleteSubscriberNotificationOutcomeCallable DeleteSubscriberNotificationCallable(const DeleteSubscriberNotificationRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::DeleteSubscriberNotification, request);
        }

        /**
         * An Async wrapper for DeleteSubscriberNotification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSubscriberNotificationRequestT = Model::DeleteSubscriberNotificationRequest>
        void DeleteSubscriberNotificationAsync(const DeleteSubscriberNotificationRequestT& request, const DeleteSubscriberNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::DeleteSubscriberNotification, request, handler, context);
        }

        /**
         * <p>Deletes the Amazon Security Lake delegated administrator account for the
         * organization. This API can only be called by the organization management
         * account. The organization management account cannot be the delegated
         * administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DeregisterDataLakeDelegatedAdministrator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterDataLakeDelegatedAdministratorOutcome DeregisterDataLakeDelegatedAdministrator(const Model::DeregisterDataLakeDelegatedAdministratorRequest& request) const;

        /**
         * A Callable wrapper for DeregisterDataLakeDelegatedAdministrator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterDataLakeDelegatedAdministratorRequestT = Model::DeregisterDataLakeDelegatedAdministratorRequest>
        Model::DeregisterDataLakeDelegatedAdministratorOutcomeCallable DeregisterDataLakeDelegatedAdministratorCallable(const DeregisterDataLakeDelegatedAdministratorRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::DeregisterDataLakeDelegatedAdministrator, request);
        }

        /**
         * An Async wrapper for DeregisterDataLakeDelegatedAdministrator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterDataLakeDelegatedAdministratorRequestT = Model::DeregisterDataLakeDelegatedAdministratorRequest>
        void DeregisterDataLakeDelegatedAdministratorAsync(const DeregisterDataLakeDelegatedAdministratorRequestT& request, const DeregisterDataLakeDelegatedAdministratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::DeregisterDataLakeDelegatedAdministrator, request, handler, context);
        }

        /**
         * <p>Retrieves the details of exception notifications for the account in Amazon
         * Security Lake.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/GetDataLakeExceptionSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataLakeExceptionSubscriptionOutcome GetDataLakeExceptionSubscription(const Model::GetDataLakeExceptionSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for GetDataLakeExceptionSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataLakeExceptionSubscriptionRequestT = Model::GetDataLakeExceptionSubscriptionRequest>
        Model::GetDataLakeExceptionSubscriptionOutcomeCallable GetDataLakeExceptionSubscriptionCallable(const GetDataLakeExceptionSubscriptionRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::GetDataLakeExceptionSubscription, request);
        }

        /**
         * An Async wrapper for GetDataLakeExceptionSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataLakeExceptionSubscriptionRequestT = Model::GetDataLakeExceptionSubscriptionRequest>
        void GetDataLakeExceptionSubscriptionAsync(const GetDataLakeExceptionSubscriptionRequestT& request, const GetDataLakeExceptionSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::GetDataLakeExceptionSubscription, request, handler, context);
        }

        /**
         * <p>Retrieves the configuration that will be automatically set up for accounts
         * added to the organization after the organization has onboarded to Amazon
         * Security Lake. This API does not take input parameters.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/GetDataLakeOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataLakeOrganizationConfigurationOutcome GetDataLakeOrganizationConfiguration(const Model::GetDataLakeOrganizationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetDataLakeOrganizationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataLakeOrganizationConfigurationRequestT = Model::GetDataLakeOrganizationConfigurationRequest>
        Model::GetDataLakeOrganizationConfigurationOutcomeCallable GetDataLakeOrganizationConfigurationCallable(const GetDataLakeOrganizationConfigurationRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::GetDataLakeOrganizationConfiguration, request);
        }

        /**
         * An Async wrapper for GetDataLakeOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataLakeOrganizationConfigurationRequestT = Model::GetDataLakeOrganizationConfigurationRequest>
        void GetDataLakeOrganizationConfigurationAsync(const GetDataLakeOrganizationConfigurationRequestT& request, const GetDataLakeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::GetDataLakeOrganizationConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves a snapshot of the current Region, including whether Amazon Security
         * Lake is enabled for those accounts and which sources Security Lake is collecting
         * data from.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/GetDataLakeSources">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataLakeSourcesOutcome GetDataLakeSources(const Model::GetDataLakeSourcesRequest& request) const;

        /**
         * A Callable wrapper for GetDataLakeSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataLakeSourcesRequestT = Model::GetDataLakeSourcesRequest>
        Model::GetDataLakeSourcesOutcomeCallable GetDataLakeSourcesCallable(const GetDataLakeSourcesRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::GetDataLakeSources, request);
        }

        /**
         * An Async wrapper for GetDataLakeSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataLakeSourcesRequestT = Model::GetDataLakeSourcesRequest>
        void GetDataLakeSourcesAsync(const GetDataLakeSourcesRequestT& request, const GetDataLakeSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::GetDataLakeSources, request, handler, context);
        }

        /**
         * <p>Retrieves the subscription information for the specified subscription ID. You
         * can get information about a specific subscriber.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/GetSubscriber">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriberOutcome GetSubscriber(const Model::GetSubscriberRequest& request) const;

        /**
         * A Callable wrapper for GetSubscriber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSubscriberRequestT = Model::GetSubscriberRequest>
        Model::GetSubscriberOutcomeCallable GetSubscriberCallable(const GetSubscriberRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::GetSubscriber, request);
        }

        /**
         * An Async wrapper for GetSubscriber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSubscriberRequestT = Model::GetSubscriberRequest>
        void GetSubscriberAsync(const GetSubscriberRequestT& request, const GetSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::GetSubscriber, request, handler, context);
        }

        /**
         * <p>Lists the Amazon Security Lake exceptions that you can use to find the source
         * of problems and fix them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/ListDataLakeExceptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataLakeExceptionsOutcome ListDataLakeExceptions(const Model::ListDataLakeExceptionsRequest& request) const;

        /**
         * A Callable wrapper for ListDataLakeExceptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataLakeExceptionsRequestT = Model::ListDataLakeExceptionsRequest>
        Model::ListDataLakeExceptionsOutcomeCallable ListDataLakeExceptionsCallable(const ListDataLakeExceptionsRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::ListDataLakeExceptions, request);
        }

        /**
         * An Async wrapper for ListDataLakeExceptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataLakeExceptionsRequestT = Model::ListDataLakeExceptionsRequest>
        void ListDataLakeExceptionsAsync(const ListDataLakeExceptionsRequestT& request, const ListDataLakeExceptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::ListDataLakeExceptions, request, handler, context);
        }

        /**
         * <p>Retrieves the Amazon Security Lake configuration object for the specified
         * Amazon Web Services Regions. You can use this operation to determine whether
         * Security Lake is enabled for a Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/ListDataLakes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataLakesOutcome ListDataLakes(const Model::ListDataLakesRequest& request) const;

        /**
         * A Callable wrapper for ListDataLakes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataLakesRequestT = Model::ListDataLakesRequest>
        Model::ListDataLakesOutcomeCallable ListDataLakesCallable(const ListDataLakesRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::ListDataLakes, request);
        }

        /**
         * An Async wrapper for ListDataLakes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataLakesRequestT = Model::ListDataLakesRequest>
        void ListDataLakesAsync(const ListDataLakesRequestT& request, const ListDataLakesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::ListDataLakes, request, handler, context);
        }

        /**
         * <p>Retrieves the log sources in the current Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/ListLogSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLogSourcesOutcome ListLogSources(const Model::ListLogSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListLogSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLogSourcesRequestT = Model::ListLogSourcesRequest>
        Model::ListLogSourcesOutcomeCallable ListLogSourcesCallable(const ListLogSourcesRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::ListLogSources, request);
        }

        /**
         * An Async wrapper for ListLogSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLogSourcesRequestT = Model::ListLogSourcesRequest>
        void ListLogSourcesAsync(const ListLogSourcesRequestT& request, const ListLogSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::ListLogSources, request, handler, context);
        }

        /**
         * <p>List all subscribers for the specific Amazon Security Lake account ID. You
         * can retrieve a list of subscriptions associated with a specific organization or
         * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/ListSubscribers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscribersOutcome ListSubscribers(const Model::ListSubscribersRequest& request) const;

        /**
         * A Callable wrapper for ListSubscribers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSubscribersRequestT = Model::ListSubscribersRequest>
        Model::ListSubscribersOutcomeCallable ListSubscribersCallable(const ListSubscribersRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::ListSubscribers, request);
        }

        /**
         * An Async wrapper for ListSubscribers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSubscribersRequestT = Model::ListSubscribersRequest>
        void ListSubscribersAsync(const ListSubscribersRequestT& request, const ListSubscribersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::ListSubscribers, request, handler, context);
        }

        /**
         * <p>Retrieves the tags (keys and values) that are associated with an Amazon
         * Security Lake resource: a subscriber, or the data lake configuration for your
         * Amazon Web Services account in a particular Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Designates the Amazon Security Lake delegated administrator account for the
         * organization. This API can only be called by the organization management
         * account. The organization management account cannot be the delegated
         * administrator account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/RegisterDataLakeDelegatedAdministrator">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterDataLakeDelegatedAdministratorOutcome RegisterDataLakeDelegatedAdministrator(const Model::RegisterDataLakeDelegatedAdministratorRequest& request) const;

        /**
         * A Callable wrapper for RegisterDataLakeDelegatedAdministrator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterDataLakeDelegatedAdministratorRequestT = Model::RegisterDataLakeDelegatedAdministratorRequest>
        Model::RegisterDataLakeDelegatedAdministratorOutcomeCallable RegisterDataLakeDelegatedAdministratorCallable(const RegisterDataLakeDelegatedAdministratorRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::RegisterDataLakeDelegatedAdministrator, request);
        }

        /**
         * An Async wrapper for RegisterDataLakeDelegatedAdministrator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterDataLakeDelegatedAdministratorRequestT = Model::RegisterDataLakeDelegatedAdministratorRequest>
        void RegisterDataLakeDelegatedAdministratorAsync(const RegisterDataLakeDelegatedAdministratorRequestT& request, const RegisterDataLakeDelegatedAdministratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::RegisterDataLakeDelegatedAdministrator, request, handler, context);
        }

        /**
         * <p>Adds or updates one or more tags that are associated with an Amazon Security
         * Lake resource: a subscriber, or the data lake configuration for your Amazon Web
         * Services account in a particular Amazon Web Services Region. A <i>tag</i> is a
         * label that you can define and associate with Amazon Web Services resources. Each
         * tag consists of a required <i>tag key</i> and an associated <i>tag value</i>. A
         * <i>tag key</i> is a general label that acts as a category for a more specific
         * tag value. A <i>tag value</i> acts as a descriptor for a tag key. Tags can help
         * you identify, categorize, and manage resources in different ways, such as by
         * owner, environment, or other criteria. For more information, see <a
         * href="https://docs.aws.amazon.com/security-lake/latest/userguide/tagging-resources.html">Tagging
         * Amazon Security Lake resources</a> in the <i>Amazon Security Lake User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags (keys and values) from an Amazon Security Lake
         * resource: a subscriber, or the data lake configuration for your Amazon Web
         * Services account in a particular Amazon Web Services Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Specifies where to store your security data and for how long. You can add a
         * rollup Region to consolidate data from multiple Amazon Web Services
         * Regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/UpdateDataLake">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataLakeOutcome UpdateDataLake(const Model::UpdateDataLakeRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataLake that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataLakeRequestT = Model::UpdateDataLakeRequest>
        Model::UpdateDataLakeOutcomeCallable UpdateDataLakeCallable(const UpdateDataLakeRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::UpdateDataLake, request);
        }

        /**
         * An Async wrapper for UpdateDataLake that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataLakeRequestT = Model::UpdateDataLakeRequest>
        void UpdateDataLakeAsync(const UpdateDataLakeRequestT& request, const UpdateDataLakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::UpdateDataLake, request, handler, context);
        }

        /**
         * <p>Updates the specified notification subscription in Amazon Security Lake for
         * the organization you specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/UpdateDataLakeExceptionSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataLakeExceptionSubscriptionOutcome UpdateDataLakeExceptionSubscription(const Model::UpdateDataLakeExceptionSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataLakeExceptionSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataLakeExceptionSubscriptionRequestT = Model::UpdateDataLakeExceptionSubscriptionRequest>
        Model::UpdateDataLakeExceptionSubscriptionOutcomeCallable UpdateDataLakeExceptionSubscriptionCallable(const UpdateDataLakeExceptionSubscriptionRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::UpdateDataLakeExceptionSubscription, request);
        }

        /**
         * An Async wrapper for UpdateDataLakeExceptionSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataLakeExceptionSubscriptionRequestT = Model::UpdateDataLakeExceptionSubscriptionRequest>
        void UpdateDataLakeExceptionSubscriptionAsync(const UpdateDataLakeExceptionSubscriptionRequestT& request, const UpdateDataLakeExceptionSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::UpdateDataLakeExceptionSubscription, request, handler, context);
        }

        /**
         * <p>Updates an existing subscription for the given Amazon Security Lake account
         * ID. You can update a subscriber by changing the sources that the subscriber
         * consumes data from.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/UpdateSubscriber">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubscriberOutcome UpdateSubscriber(const Model::UpdateSubscriberRequest& request) const;

        /**
         * A Callable wrapper for UpdateSubscriber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSubscriberRequestT = Model::UpdateSubscriberRequest>
        Model::UpdateSubscriberOutcomeCallable UpdateSubscriberCallable(const UpdateSubscriberRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::UpdateSubscriber, request);
        }

        /**
         * An Async wrapper for UpdateSubscriber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSubscriberRequestT = Model::UpdateSubscriberRequest>
        void UpdateSubscriberAsync(const UpdateSubscriberRequestT& request, const UpdateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::UpdateSubscriber, request, handler, context);
        }

        /**
         * <p>Updates an existing notification method for the subscription (SQS or HTTPs
         * endpoint) or switches the notification subscription endpoint for a
         * subscriber.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/UpdateSubscriberNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubscriberNotificationOutcome UpdateSubscriberNotification(const Model::UpdateSubscriberNotificationRequest& request) const;

        /**
         * A Callable wrapper for UpdateSubscriberNotification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSubscriberNotificationRequestT = Model::UpdateSubscriberNotificationRequest>
        Model::UpdateSubscriberNotificationOutcomeCallable UpdateSubscriberNotificationCallable(const UpdateSubscriberNotificationRequestT& request) const
        {
            return SubmitCallable(&SecurityLakeClient::UpdateSubscriberNotification, request);
        }

        /**
         * An Async wrapper for UpdateSubscriberNotification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSubscriberNotificationRequestT = Model::UpdateSubscriberNotificationRequest>
        void UpdateSubscriberNotificationAsync(const UpdateSubscriberNotificationRequestT& request, const UpdateSubscriberNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityLakeClient::UpdateSubscriberNotification, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SecurityLakeEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SecurityLakeClient>;
      void init(const SecurityLakeClientConfiguration& clientConfiguration);

      SecurityLakeClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SecurityLakeEndpointProviderBase> m_endpointProvider;
  };

} // namespace SecurityLake
} // namespace Aws
