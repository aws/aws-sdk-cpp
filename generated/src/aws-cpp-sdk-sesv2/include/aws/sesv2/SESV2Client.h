/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/SESV2ServiceClientModel.h>

namespace Aws
{
namespace SESV2
{
  /**
   * <fullname>Amazon SES API v2</fullname> <p> <a
   * href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services
   * service that you can use to send email messages to your customers.</p> <p>If
   * you're new to Amazon SES API v2, you might find it helpful to review the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple
   * Email Service Developer Guide</a>. The <i>Amazon SES Developer Guide</i>
   * provides information and code samples that demonstrate how to use Amazon SES API
   * v2 features programmatically.</p>
   */
  class AWS_SESV2_API SESV2Client : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SESV2Client>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SESV2ClientConfiguration ClientConfigurationType;
      typedef SESV2EndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SESV2Client(const Aws::SESV2::SESV2ClientConfiguration& clientConfiguration = Aws::SESV2::SESV2ClientConfiguration(),
                    std::shared_ptr<SESV2EndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SESV2Client(const Aws::Auth::AWSCredentials& credentials,
                    std::shared_ptr<SESV2EndpointProviderBase> endpointProvider = nullptr,
                    const Aws::SESV2::SESV2ClientConfiguration& clientConfiguration = Aws::SESV2::SESV2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SESV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    std::shared_ptr<SESV2EndpointProviderBase> endpointProvider = nullptr,
                    const Aws::SESV2::SESV2ClientConfiguration& clientConfiguration = Aws::SESV2::SESV2ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SESV2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SESV2Client(const Aws::Auth::AWSCredentials& credentials,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SESV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SESV2Client();

        /**
         * <p>Retrieves batches of metric data collected based on your sending
         * activity.</p> <p>You can execute this operation no more than 16 times per
         * second, and with at most 160 queries from the batches per second
         * (cumulative).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/BatchGetMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetMetricDataOutcome BatchGetMetricData(const Model::BatchGetMetricDataRequest& request) const;

        /**
         * A Callable wrapper for BatchGetMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetMetricDataRequestT = Model::BatchGetMetricDataRequest>
        Model::BatchGetMetricDataOutcomeCallable BatchGetMetricDataCallable(const BatchGetMetricDataRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::BatchGetMetricData, request);
        }

        /**
         * An Async wrapper for BatchGetMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetMetricDataRequestT = Model::BatchGetMetricDataRequest>
        void BatchGetMetricDataAsync(const BatchGetMetricDataRequestT& request, const BatchGetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::BatchGetMetricData, request, handler, context);
        }

        /**
         * <p>Cancels an export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CancelExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelExportJobOutcome CancelExportJob(const Model::CancelExportJobRequest& request) const;

        /**
         * A Callable wrapper for CancelExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelExportJobRequestT = Model::CancelExportJobRequest>
        Model::CancelExportJobOutcomeCallable CancelExportJobCallable(const CancelExportJobRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::CancelExportJob, request);
        }

        /**
         * An Async wrapper for CancelExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelExportJobRequestT = Model::CancelExportJobRequest>
        void CancelExportJobAsync(const CancelExportJobRequestT& request, const CancelExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::CancelExportJob, request, handler, context);
        }

        /**
         * <p>Create a configuration set. <i>Configuration sets</i> are groups of rules
         * that you can apply to the emails that you send. You apply a configuration set to
         * an email by specifying the name of the configuration set when you call the
         * Amazon SES API v2. When you apply a configuration set to an email, all of the
         * rules in that configuration set are applied to the email. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationSetOutcome CreateConfigurationSet(const Model::CreateConfigurationSetRequest& request) const;

        /**
         * A Callable wrapper for CreateConfigurationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConfigurationSetRequestT = Model::CreateConfigurationSetRequest>
        Model::CreateConfigurationSetOutcomeCallable CreateConfigurationSetCallable(const CreateConfigurationSetRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::CreateConfigurationSet, request);
        }

        /**
         * An Async wrapper for CreateConfigurationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfigurationSetRequestT = Model::CreateConfigurationSetRequest>
        void CreateConfigurationSetAsync(const CreateConfigurationSetRequestT& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::CreateConfigurationSet, request, handler, context);
        }

        /**
         * <p>Create an event destination. <i>Events</i> include message sends, deliveries,
         * opens, clicks, bounces, and complaints. <i>Event destinations</i> are places
         * that you can send information about these events to. For example, you can send
         * event data to Amazon EventBridge and associate a rule to send the event to the
         * specified target.</p> <p>A single configuration set can include more than one
         * event destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationSetEventDestinationOutcome CreateConfigurationSetEventDestination(const Model::CreateConfigurationSetEventDestinationRequest& request) const;

        /**
         * A Callable wrapper for CreateConfigurationSetEventDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConfigurationSetEventDestinationRequestT = Model::CreateConfigurationSetEventDestinationRequest>
        Model::CreateConfigurationSetEventDestinationOutcomeCallable CreateConfigurationSetEventDestinationCallable(const CreateConfigurationSetEventDestinationRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::CreateConfigurationSetEventDestination, request);
        }

        /**
         * An Async wrapper for CreateConfigurationSetEventDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfigurationSetEventDestinationRequestT = Model::CreateConfigurationSetEventDestinationRequest>
        void CreateConfigurationSetEventDestinationAsync(const CreateConfigurationSetEventDestinationRequestT& request, const CreateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::CreateConfigurationSetEventDestination, request, handler, context);
        }

        /**
         * <p>Creates a contact, which is an end-user who is receiving the email, and adds
         * them to a contact list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactOutcome CreateContact(const Model::CreateContactRequest& request) const;

        /**
         * A Callable wrapper for CreateContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateContactRequestT = Model::CreateContactRequest>
        Model::CreateContactOutcomeCallable CreateContactCallable(const CreateContactRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::CreateContact, request);
        }

        /**
         * An Async wrapper for CreateContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateContactRequestT = Model::CreateContactRequest>
        void CreateContactAsync(const CreateContactRequestT& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::CreateContact, request, handler, context);
        }

        /**
         * <p>Creates a contact list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateContactList">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactListOutcome CreateContactList(const Model::CreateContactListRequest& request) const;

        /**
         * A Callable wrapper for CreateContactList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateContactListRequestT = Model::CreateContactListRequest>
        Model::CreateContactListOutcomeCallable CreateContactListCallable(const CreateContactListRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::CreateContactList, request);
        }

        /**
         * An Async wrapper for CreateContactList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateContactListRequestT = Model::CreateContactListRequest>
        void CreateContactListAsync(const CreateContactListRequestT& request, const CreateContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::CreateContactList, request, handler, context);
        }

        /**
         * <p>Creates a new custom verification email template.</p> <p>For more information
         * about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html#send-email-verify-address-custom">Using
         * custom verification email templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomVerificationEmailTemplateOutcome CreateCustomVerificationEmailTemplate(const Model::CreateCustomVerificationEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomVerificationEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCustomVerificationEmailTemplateRequestT = Model::CreateCustomVerificationEmailTemplateRequest>
        Model::CreateCustomVerificationEmailTemplateOutcomeCallable CreateCustomVerificationEmailTemplateCallable(const CreateCustomVerificationEmailTemplateRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::CreateCustomVerificationEmailTemplate, request);
        }

        /**
         * An Async wrapper for CreateCustomVerificationEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCustomVerificationEmailTemplateRequestT = Model::CreateCustomVerificationEmailTemplateRequest>
        void CreateCustomVerificationEmailTemplateAsync(const CreateCustomVerificationEmailTemplateRequestT& request, const CreateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::CreateCustomVerificationEmailTemplate, request, handler, context);
        }

        /**
         * <p>Create a new pool of dedicated IP addresses. A pool can include one or more
         * dedicated IP addresses that are associated with your Amazon Web Services
         * account. You can associate a pool with a configuration set. When you send an
         * email that uses that configuration set, the message is sent from one of the
         * addresses in the associated pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateDedicatedIpPool">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDedicatedIpPoolOutcome CreateDedicatedIpPool(const Model::CreateDedicatedIpPoolRequest& request) const;

        /**
         * A Callable wrapper for CreateDedicatedIpPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDedicatedIpPoolRequestT = Model::CreateDedicatedIpPoolRequest>
        Model::CreateDedicatedIpPoolOutcomeCallable CreateDedicatedIpPoolCallable(const CreateDedicatedIpPoolRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::CreateDedicatedIpPool, request);
        }

        /**
         * An Async wrapper for CreateDedicatedIpPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDedicatedIpPoolRequestT = Model::CreateDedicatedIpPoolRequest>
        void CreateDedicatedIpPoolAsync(const CreateDedicatedIpPoolRequestT& request, const CreateDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::CreateDedicatedIpPool, request, handler, context);
        }

        /**
         * <p>Create a new predictive inbox placement test. Predictive inbox placement
         * tests can help you predict how your messages will be handled by various email
         * providers around the world. When you perform a predictive inbox placement test,
         * you provide a sample message that contains the content that you plan to send to
         * your customers. Amazon SES then sends that message to special email addresses
         * spread across several major email providers. After about 24 hours, the test is
         * complete, and you can use the <code>GetDeliverabilityTestReport</code> operation
         * to view the results of the test.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateDeliverabilityTestReport">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeliverabilityTestReportOutcome CreateDeliverabilityTestReport(const Model::CreateDeliverabilityTestReportRequest& request) const;

        /**
         * A Callable wrapper for CreateDeliverabilityTestReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDeliverabilityTestReportRequestT = Model::CreateDeliverabilityTestReportRequest>
        Model::CreateDeliverabilityTestReportOutcomeCallable CreateDeliverabilityTestReportCallable(const CreateDeliverabilityTestReportRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::CreateDeliverabilityTestReport, request);
        }

        /**
         * An Async wrapper for CreateDeliverabilityTestReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDeliverabilityTestReportRequestT = Model::CreateDeliverabilityTestReportRequest>
        void CreateDeliverabilityTestReportAsync(const CreateDeliverabilityTestReportRequestT& request, const CreateDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::CreateDeliverabilityTestReport, request, handler, context);
        }

        /**
         * <p>Starts the process of verifying an email identity. An <i>identity</i> is an
         * email address or domain that you use when you send email. Before you can use an
         * identity to send email, you first have to verify it. By verifying an identity,
         * you demonstrate that you're the owner of the identity, and that you've given
         * Amazon SES API v2 permission to send email from the identity.</p> <p>When you
         * verify an email address, Amazon SES sends an email to the address. Your email
         * address is verified as soon as you follow the link in the verification email.
         * </p> <p>When you verify a domain without specifying the
         * <code>DkimSigningAttributes</code> object, this operation provides a set of DKIM
         * tokens. You can convert these tokens into CNAME records, which you then add to
         * the DNS configuration for your domain. Your domain is verified when Amazon SES
         * detects these records in the DNS configuration for your domain. This
         * verification method is known as <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
         * DKIM</a>.</p> <p>Alternatively, you can perform the verification process by
         * providing your own public-private key pair. This verification method is known as
         * Bring Your Own DKIM (BYODKIM). To use BYODKIM, your call to the
         * <code>CreateEmailIdentity</code> operation has to include the
         * <code>DkimSigningAttributes</code> object. When you specify this object, you
         * provide a selector (a component of the DNS record name that identifies the
         * public key to use for DKIM authentication) and a private key.</p> <p>When you
         * verify a domain, this operation provides a set of DKIM tokens, which you can
         * convert into CNAME tokens. You add these CNAME tokens to the DNS configuration
         * for your domain. Your domain is verified when Amazon SES detects these records
         * in the DNS configuration for your domain. For some DNS providers, it can take 72
         * hours or more to complete the domain verification process.</p> <p>Additionally,
         * you can associate an existing configuration set with the email identity that
         * you're verifying.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateEmailIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEmailIdentityOutcome CreateEmailIdentity(const Model::CreateEmailIdentityRequest& request) const;

        /**
         * A Callable wrapper for CreateEmailIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEmailIdentityRequestT = Model::CreateEmailIdentityRequest>
        Model::CreateEmailIdentityOutcomeCallable CreateEmailIdentityCallable(const CreateEmailIdentityRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::CreateEmailIdentity, request);
        }

        /**
         * An Async wrapper for CreateEmailIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEmailIdentityRequestT = Model::CreateEmailIdentityRequest>
        void CreateEmailIdentityAsync(const CreateEmailIdentityRequestT& request, const CreateEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::CreateEmailIdentity, request, handler, context);
        }

        /**
         * <p>Creates the specified sending authorization policy for the given identity (an
         * email address or a domain).</p>  <p>This API is for the identity owner
         * only. If you have not verified the identity, this API will return an error.</p>
         *  <p>Sending authorization is a feature that enables an identity owner to
         * authorize other senders to use its identities. For information about using
         * sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateEmailIdentityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEmailIdentityPolicyOutcome CreateEmailIdentityPolicy(const Model::CreateEmailIdentityPolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateEmailIdentityPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEmailIdentityPolicyRequestT = Model::CreateEmailIdentityPolicyRequest>
        Model::CreateEmailIdentityPolicyOutcomeCallable CreateEmailIdentityPolicyCallable(const CreateEmailIdentityPolicyRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::CreateEmailIdentityPolicy, request);
        }

        /**
         * An Async wrapper for CreateEmailIdentityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEmailIdentityPolicyRequestT = Model::CreateEmailIdentityPolicyRequest>
        void CreateEmailIdentityPolicyAsync(const CreateEmailIdentityPolicyRequestT& request, const CreateEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::CreateEmailIdentityPolicy, request, handler, context);
        }

        /**
         * <p>Creates an email template. Email templates enable you to send personalized
         * email to one or more destinations in a single API operation. For more
         * information, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEmailTemplateOutcome CreateEmailTemplate(const Model::CreateEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEmailTemplateRequestT = Model::CreateEmailTemplateRequest>
        Model::CreateEmailTemplateOutcomeCallable CreateEmailTemplateCallable(const CreateEmailTemplateRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::CreateEmailTemplate, request);
        }

        /**
         * An Async wrapper for CreateEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEmailTemplateRequestT = Model::CreateEmailTemplateRequest>
        void CreateEmailTemplateAsync(const CreateEmailTemplateRequestT& request, const CreateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::CreateEmailTemplate, request, handler, context);
        }

        /**
         * <p>Creates an export job for a data source and destination.</p> <p>You can
         * execute this operation no more than once per second.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExportJobOutcome CreateExportJob(const Model::CreateExportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateExportJobRequestT = Model::CreateExportJobRequest>
        Model::CreateExportJobOutcomeCallable CreateExportJobCallable(const CreateExportJobRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::CreateExportJob, request);
        }

        /**
         * An Async wrapper for CreateExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateExportJobRequestT = Model::CreateExportJobRequest>
        void CreateExportJobAsync(const CreateExportJobRequestT& request, const CreateExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::CreateExportJob, request, handler, context);
        }

        /**
         * <p>Creates an import job for a data destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImportJobOutcome CreateImportJob(const Model::CreateImportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateImportJobRequestT = Model::CreateImportJobRequest>
        Model::CreateImportJobOutcomeCallable CreateImportJobCallable(const CreateImportJobRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::CreateImportJob, request);
        }

        /**
         * An Async wrapper for CreateImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateImportJobRequestT = Model::CreateImportJobRequest>
        void CreateImportJobAsync(const CreateImportJobRequestT& request, const CreateImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::CreateImportJob, request, handler, context);
        }

        /**
         * <p>Creates a multi-region endpoint (global-endpoint).</p> <p>The primary region
         * is going to be the AWS-Region where the operation is executed. The secondary
         * region has to be provided in request's parameters. From the data flow standpoint
         * there is no difference between primary and secondary regions - sending traffic
         * will be split equally between the two. The primary region is the region where
         * the resource has been created and where it can be managed. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateMultiRegionEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMultiRegionEndpointOutcome CreateMultiRegionEndpoint(const Model::CreateMultiRegionEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateMultiRegionEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMultiRegionEndpointRequestT = Model::CreateMultiRegionEndpointRequest>
        Model::CreateMultiRegionEndpointOutcomeCallable CreateMultiRegionEndpointCallable(const CreateMultiRegionEndpointRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::CreateMultiRegionEndpoint, request);
        }

        /**
         * An Async wrapper for CreateMultiRegionEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMultiRegionEndpointRequestT = Model::CreateMultiRegionEndpointRequest>
        void CreateMultiRegionEndpointAsync(const CreateMultiRegionEndpointRequestT& request, const CreateMultiRegionEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::CreateMultiRegionEndpoint, request, handler, context);
        }

        /**
         * <p>Create a tenant.</p> <p> <i>Tenants</i> are logical containers that group
         * related SES resources together. Each tenant can have its own set of resources
         * like email identities, configuration sets, and templates, along with reputation
         * metrics and sending status. This helps isolate and manage email sending for
         * different customers or business units within your Amazon SES API v2
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateTenant">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTenantOutcome CreateTenant(const Model::CreateTenantRequest& request) const;

        /**
         * A Callable wrapper for CreateTenant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTenantRequestT = Model::CreateTenantRequest>
        Model::CreateTenantOutcomeCallable CreateTenantCallable(const CreateTenantRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::CreateTenant, request);
        }

        /**
         * An Async wrapper for CreateTenant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTenantRequestT = Model::CreateTenantRequest>
        void CreateTenantAsync(const CreateTenantRequestT& request, const CreateTenantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::CreateTenant, request, handler, context);
        }

        /**
         * <p>Associate a resource with a tenant.</p> <p> <i>Resources</i> can be email
         * identities, configuration sets, or email templates. When you associate a
         * resource with a tenant, you can use that resource when sending emails on behalf
         * of that tenant.</p> <p>A single resource can be associated with multiple
         * tenants, allowing for resource sharing across different tenants while
         * maintaining isolation in email sending operations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateTenantResourceAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTenantResourceAssociationOutcome CreateTenantResourceAssociation(const Model::CreateTenantResourceAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateTenantResourceAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTenantResourceAssociationRequestT = Model::CreateTenantResourceAssociationRequest>
        Model::CreateTenantResourceAssociationOutcomeCallable CreateTenantResourceAssociationCallable(const CreateTenantResourceAssociationRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::CreateTenantResourceAssociation, request);
        }

        /**
         * An Async wrapper for CreateTenantResourceAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTenantResourceAssociationRequestT = Model::CreateTenantResourceAssociationRequest>
        void CreateTenantResourceAssociationAsync(const CreateTenantResourceAssociationRequestT& request, const CreateTenantResourceAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::CreateTenantResourceAssociation, request, handler, context);
        }

        /**
         * <p>Delete an existing configuration set.</p> <p> <i>Configuration sets</i> are
         * groups of rules that you can apply to the emails you send. You apply a
         * configuration set to an email by including a reference to the configuration set
         * in the headers of the email. When you apply a configuration set to an email, all
         * of the rules in that configuration set are applied to the email.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationSetOutcome DeleteConfigurationSet(const Model::DeleteConfigurationSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfigurationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfigurationSetRequestT = Model::DeleteConfigurationSetRequest>
        Model::DeleteConfigurationSetOutcomeCallable DeleteConfigurationSetCallable(const DeleteConfigurationSetRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::DeleteConfigurationSet, request);
        }

        /**
         * An Async wrapper for DeleteConfigurationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfigurationSetRequestT = Model::DeleteConfigurationSetRequest>
        void DeleteConfigurationSetAsync(const DeleteConfigurationSetRequestT& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::DeleteConfigurationSet, request, handler, context);
        }

        /**
         * <p>Delete an event destination.</p> <p> <i>Events</i> include message sends,
         * deliveries, opens, clicks, bounces, and complaints. <i>Event destinations</i>
         * are places that you can send information about these events to. For example, you
         * can send event data to Amazon EventBridge and associate a rule to send the event
         * to the specified target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationSetEventDestinationOutcome DeleteConfigurationSetEventDestination(const Model::DeleteConfigurationSetEventDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfigurationSetEventDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfigurationSetEventDestinationRequestT = Model::DeleteConfigurationSetEventDestinationRequest>
        Model::DeleteConfigurationSetEventDestinationOutcomeCallable DeleteConfigurationSetEventDestinationCallable(const DeleteConfigurationSetEventDestinationRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::DeleteConfigurationSetEventDestination, request);
        }

        /**
         * An Async wrapper for DeleteConfigurationSetEventDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfigurationSetEventDestinationRequestT = Model::DeleteConfigurationSetEventDestinationRequest>
        void DeleteConfigurationSetEventDestinationAsync(const DeleteConfigurationSetEventDestinationRequestT& request, const DeleteConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::DeleteConfigurationSetEventDestination, request, handler, context);
        }

        /**
         * <p>Removes a contact from a contact list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactOutcome DeleteContact(const Model::DeleteContactRequest& request) const;

        /**
         * A Callable wrapper for DeleteContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteContactRequestT = Model::DeleteContactRequest>
        Model::DeleteContactOutcomeCallable DeleteContactCallable(const DeleteContactRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::DeleteContact, request);
        }

        /**
         * An Async wrapper for DeleteContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteContactRequestT = Model::DeleteContactRequest>
        void DeleteContactAsync(const DeleteContactRequestT& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::DeleteContact, request, handler, context);
        }

        /**
         * <p>Deletes a contact list and all of the contacts on that list.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteContactList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactListOutcome DeleteContactList(const Model::DeleteContactListRequest& request) const;

        /**
         * A Callable wrapper for DeleteContactList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteContactListRequestT = Model::DeleteContactListRequest>
        Model::DeleteContactListOutcomeCallable DeleteContactListCallable(const DeleteContactListRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::DeleteContactList, request);
        }

        /**
         * An Async wrapper for DeleteContactList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteContactListRequestT = Model::DeleteContactListRequest>
        void DeleteContactListAsync(const DeleteContactListRequestT& request, const DeleteContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::DeleteContactList, request, handler, context);
        }

        /**
         * <p>Deletes an existing custom verification email template.</p> <p>For more
         * information about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html#send-email-verify-address-custom">Using
         * custom verification email templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomVerificationEmailTemplateOutcome DeleteCustomVerificationEmailTemplate(const Model::DeleteCustomVerificationEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomVerificationEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCustomVerificationEmailTemplateRequestT = Model::DeleteCustomVerificationEmailTemplateRequest>
        Model::DeleteCustomVerificationEmailTemplateOutcomeCallable DeleteCustomVerificationEmailTemplateCallable(const DeleteCustomVerificationEmailTemplateRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::DeleteCustomVerificationEmailTemplate, request);
        }

        /**
         * An Async wrapper for DeleteCustomVerificationEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCustomVerificationEmailTemplateRequestT = Model::DeleteCustomVerificationEmailTemplateRequest>
        void DeleteCustomVerificationEmailTemplateAsync(const DeleteCustomVerificationEmailTemplateRequestT& request, const DeleteCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::DeleteCustomVerificationEmailTemplate, request, handler, context);
        }

        /**
         * <p>Delete a dedicated IP pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteDedicatedIpPool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDedicatedIpPoolOutcome DeleteDedicatedIpPool(const Model::DeleteDedicatedIpPoolRequest& request) const;

        /**
         * A Callable wrapper for DeleteDedicatedIpPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDedicatedIpPoolRequestT = Model::DeleteDedicatedIpPoolRequest>
        Model::DeleteDedicatedIpPoolOutcomeCallable DeleteDedicatedIpPoolCallable(const DeleteDedicatedIpPoolRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::DeleteDedicatedIpPool, request);
        }

        /**
         * An Async wrapper for DeleteDedicatedIpPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDedicatedIpPoolRequestT = Model::DeleteDedicatedIpPoolRequest>
        void DeleteDedicatedIpPoolAsync(const DeleteDedicatedIpPoolRequestT& request, const DeleteDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::DeleteDedicatedIpPool, request, handler, context);
        }

        /**
         * <p>Deletes an email identity. An identity can be either an email address or a
         * domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteEmailIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailIdentityOutcome DeleteEmailIdentity(const Model::DeleteEmailIdentityRequest& request) const;

        /**
         * A Callable wrapper for DeleteEmailIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEmailIdentityRequestT = Model::DeleteEmailIdentityRequest>
        Model::DeleteEmailIdentityOutcomeCallable DeleteEmailIdentityCallable(const DeleteEmailIdentityRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::DeleteEmailIdentity, request);
        }

        /**
         * An Async wrapper for DeleteEmailIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEmailIdentityRequestT = Model::DeleteEmailIdentityRequest>
        void DeleteEmailIdentityAsync(const DeleteEmailIdentityRequestT& request, const DeleteEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::DeleteEmailIdentity, request, handler, context);
        }

        /**
         * <p>Deletes the specified sending authorization policy for the given identity (an
         * email address or a domain). This API returns successfully even if a policy with
         * the specified name does not exist.</p>  <p>This API is for the identity
         * owner only. If you have not verified the identity, this API will return an
         * error.</p>  <p>Sending authorization is a feature that enables an
         * identity owner to authorize other senders to use its identities. For information
         * about using sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteEmailIdentityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailIdentityPolicyOutcome DeleteEmailIdentityPolicy(const Model::DeleteEmailIdentityPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteEmailIdentityPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEmailIdentityPolicyRequestT = Model::DeleteEmailIdentityPolicyRequest>
        Model::DeleteEmailIdentityPolicyOutcomeCallable DeleteEmailIdentityPolicyCallable(const DeleteEmailIdentityPolicyRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::DeleteEmailIdentityPolicy, request);
        }

        /**
         * An Async wrapper for DeleteEmailIdentityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEmailIdentityPolicyRequestT = Model::DeleteEmailIdentityPolicyRequest>
        void DeleteEmailIdentityPolicyAsync(const DeleteEmailIdentityPolicyRequestT& request, const DeleteEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::DeleteEmailIdentityPolicy, request, handler, context);
        }

        /**
         * <p>Deletes an email template.</p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailTemplateOutcome DeleteEmailTemplate(const Model::DeleteEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEmailTemplateRequestT = Model::DeleteEmailTemplateRequest>
        Model::DeleteEmailTemplateOutcomeCallable DeleteEmailTemplateCallable(const DeleteEmailTemplateRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::DeleteEmailTemplate, request);
        }

        /**
         * An Async wrapper for DeleteEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEmailTemplateRequestT = Model::DeleteEmailTemplateRequest>
        void DeleteEmailTemplateAsync(const DeleteEmailTemplateRequestT& request, const DeleteEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::DeleteEmailTemplate, request, handler, context);
        }

        /**
         * <p>Deletes a multi-region endpoint (global-endpoint).</p> <p>Only multi-region
         * endpoints (global-endpoints) whose primary region is the AWS-Region where
         * operation is executed can be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteMultiRegionEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMultiRegionEndpointOutcome DeleteMultiRegionEndpoint(const Model::DeleteMultiRegionEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteMultiRegionEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMultiRegionEndpointRequestT = Model::DeleteMultiRegionEndpointRequest>
        Model::DeleteMultiRegionEndpointOutcomeCallable DeleteMultiRegionEndpointCallable(const DeleteMultiRegionEndpointRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::DeleteMultiRegionEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteMultiRegionEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMultiRegionEndpointRequestT = Model::DeleteMultiRegionEndpointRequest>
        void DeleteMultiRegionEndpointAsync(const DeleteMultiRegionEndpointRequestT& request, const DeleteMultiRegionEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::DeleteMultiRegionEndpoint, request, handler, context);
        }

        /**
         * <p>Removes an email address from the suppression list for your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteSuppressedDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSuppressedDestinationOutcome DeleteSuppressedDestination(const Model::DeleteSuppressedDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSuppressedDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSuppressedDestinationRequestT = Model::DeleteSuppressedDestinationRequest>
        Model::DeleteSuppressedDestinationOutcomeCallable DeleteSuppressedDestinationCallable(const DeleteSuppressedDestinationRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::DeleteSuppressedDestination, request);
        }

        /**
         * An Async wrapper for DeleteSuppressedDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSuppressedDestinationRequestT = Model::DeleteSuppressedDestinationRequest>
        void DeleteSuppressedDestinationAsync(const DeleteSuppressedDestinationRequestT& request, const DeleteSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::DeleteSuppressedDestination, request, handler, context);
        }

        /**
         * <p>Delete an existing tenant.</p> <p>When you delete a tenant, its associations
         * with resources are removed, but the resources themselves are not
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteTenant">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTenantOutcome DeleteTenant(const Model::DeleteTenantRequest& request) const;

        /**
         * A Callable wrapper for DeleteTenant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTenantRequestT = Model::DeleteTenantRequest>
        Model::DeleteTenantOutcomeCallable DeleteTenantCallable(const DeleteTenantRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::DeleteTenant, request);
        }

        /**
         * An Async wrapper for DeleteTenant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTenantRequestT = Model::DeleteTenantRequest>
        void DeleteTenantAsync(const DeleteTenantRequestT& request, const DeleteTenantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::DeleteTenant, request, handler, context);
        }

        /**
         * <p>Delete an association between a tenant and a resource.</p> <p>When you delete
         * a tenant-resource association, the resource itself is not deleted, only its
         * association with the specific tenant is removed. After removal, the resource
         * will no longer be available for use with that tenant's email sending
         * operations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteTenantResourceAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTenantResourceAssociationOutcome DeleteTenantResourceAssociation(const Model::DeleteTenantResourceAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteTenantResourceAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTenantResourceAssociationRequestT = Model::DeleteTenantResourceAssociationRequest>
        Model::DeleteTenantResourceAssociationOutcomeCallable DeleteTenantResourceAssociationCallable(const DeleteTenantResourceAssociationRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::DeleteTenantResourceAssociation, request);
        }

        /**
         * An Async wrapper for DeleteTenantResourceAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTenantResourceAssociationRequestT = Model::DeleteTenantResourceAssociationRequest>
        void DeleteTenantResourceAssociationAsync(const DeleteTenantResourceAssociationRequestT& request, const DeleteTenantResourceAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::DeleteTenantResourceAssociation, request, handler, context);
        }

        /**
         * <p>Obtain information about the email-sending status and capabilities of your
         * Amazon SES account in the current Amazon Web Services Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountOutcome GetAccount(const Model::GetAccountRequest& request = {}) const;

        /**
         * A Callable wrapper for GetAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccountRequestT = Model::GetAccountRequest>
        Model::GetAccountOutcomeCallable GetAccountCallable(const GetAccountRequestT& request = {}) const
        {
            return SubmitCallable(&SESV2Client::GetAccount, request);
        }

        /**
         * An Async wrapper for GetAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccountRequestT = Model::GetAccountRequest>
        void GetAccountAsync(const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetAccountRequestT& request = {}) const
        {
            return SubmitAsync(&SESV2Client::GetAccount, request, handler, context);
        }

        /**
         * <p>Retrieve a list of the blacklists that your dedicated IP addresses appear
         * on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetBlacklistReports">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBlacklistReportsOutcome GetBlacklistReports(const Model::GetBlacklistReportsRequest& request) const;

        /**
         * A Callable wrapper for GetBlacklistReports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBlacklistReportsRequestT = Model::GetBlacklistReportsRequest>
        Model::GetBlacklistReportsOutcomeCallable GetBlacklistReportsCallable(const GetBlacklistReportsRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetBlacklistReports, request);
        }

        /**
         * An Async wrapper for GetBlacklistReports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBlacklistReportsRequestT = Model::GetBlacklistReportsRequest>
        void GetBlacklistReportsAsync(const GetBlacklistReportsRequestT& request, const GetBlacklistReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetBlacklistReports, request, handler, context);
        }

        /**
         * <p>Get information about an existing configuration set, including the dedicated
         * IP pool that it's associated with, whether or not it's enabled for sending
         * email, and more.</p> <p> <i>Configuration sets</i> are groups of rules that you
         * can apply to the emails you send. You apply a configuration set to an email by
         * including a reference to the configuration set in the headers of the email. When
         * you apply a configuration set to an email, all of the rules in that
         * configuration set are applied to the email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigurationSetOutcome GetConfigurationSet(const Model::GetConfigurationSetRequest& request) const;

        /**
         * A Callable wrapper for GetConfigurationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConfigurationSetRequestT = Model::GetConfigurationSetRequest>
        Model::GetConfigurationSetOutcomeCallable GetConfigurationSetCallable(const GetConfigurationSetRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetConfigurationSet, request);
        }

        /**
         * An Async wrapper for GetConfigurationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConfigurationSetRequestT = Model::GetConfigurationSetRequest>
        void GetConfigurationSetAsync(const GetConfigurationSetRequestT& request, const GetConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetConfigurationSet, request, handler, context);
        }

        /**
         * <p>Retrieve a list of event destinations that are associated with a
         * configuration set.</p> <p> <i>Events</i> include message sends, deliveries,
         * opens, clicks, bounces, and complaints. <i>Event destinations</i> are places
         * that you can send information about these events to. For example, you can send
         * event data to Amazon EventBridge and associate a rule to send the event to the
         * specified target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetConfigurationSetEventDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigurationSetEventDestinationsOutcome GetConfigurationSetEventDestinations(const Model::GetConfigurationSetEventDestinationsRequest& request) const;

        /**
         * A Callable wrapper for GetConfigurationSetEventDestinations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConfigurationSetEventDestinationsRequestT = Model::GetConfigurationSetEventDestinationsRequest>
        Model::GetConfigurationSetEventDestinationsOutcomeCallable GetConfigurationSetEventDestinationsCallable(const GetConfigurationSetEventDestinationsRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetConfigurationSetEventDestinations, request);
        }

        /**
         * An Async wrapper for GetConfigurationSetEventDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConfigurationSetEventDestinationsRequestT = Model::GetConfigurationSetEventDestinationsRequest>
        void GetConfigurationSetEventDestinationsAsync(const GetConfigurationSetEventDestinationsRequestT& request, const GetConfigurationSetEventDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetConfigurationSetEventDestinations, request, handler, context);
        }

        /**
         * <p>Returns a contact from a contact list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetContact">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactOutcome GetContact(const Model::GetContactRequest& request) const;

        /**
         * A Callable wrapper for GetContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContactRequestT = Model::GetContactRequest>
        Model::GetContactOutcomeCallable GetContactCallable(const GetContactRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetContact, request);
        }

        /**
         * An Async wrapper for GetContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContactRequestT = Model::GetContactRequest>
        void GetContactAsync(const GetContactRequestT& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetContact, request, handler, context);
        }

        /**
         * <p>Returns contact list metadata. It does not return any information about the
         * contacts present in the list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetContactList">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactListOutcome GetContactList(const Model::GetContactListRequest& request) const;

        /**
         * A Callable wrapper for GetContactList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContactListRequestT = Model::GetContactListRequest>
        Model::GetContactListOutcomeCallable GetContactListCallable(const GetContactListRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetContactList, request);
        }

        /**
         * An Async wrapper for GetContactList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContactListRequestT = Model::GetContactListRequest>
        void GetContactListAsync(const GetContactListRequestT& request, const GetContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetContactList, request, handler, context);
        }

        /**
         * <p>Returns the custom email verification template for the template name you
         * specify.</p> <p>For more information about custom verification email templates,
         * see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html#send-email-verify-address-custom">Using
         * custom verification email templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomVerificationEmailTemplateOutcome GetCustomVerificationEmailTemplate(const Model::GetCustomVerificationEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetCustomVerificationEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCustomVerificationEmailTemplateRequestT = Model::GetCustomVerificationEmailTemplateRequest>
        Model::GetCustomVerificationEmailTemplateOutcomeCallable GetCustomVerificationEmailTemplateCallable(const GetCustomVerificationEmailTemplateRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetCustomVerificationEmailTemplate, request);
        }

        /**
         * An Async wrapper for GetCustomVerificationEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCustomVerificationEmailTemplateRequestT = Model::GetCustomVerificationEmailTemplateRequest>
        void GetCustomVerificationEmailTemplateAsync(const GetCustomVerificationEmailTemplateRequestT& request, const GetCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetCustomVerificationEmailTemplate, request, handler, context);
        }

        /**
         * <p>Get information about a dedicated IP address, including the name of the
         * dedicated IP pool that it's associated with, as well information about the
         * automatic warm-up process for the address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDedicatedIp">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDedicatedIpOutcome GetDedicatedIp(const Model::GetDedicatedIpRequest& request) const;

        /**
         * A Callable wrapper for GetDedicatedIp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDedicatedIpRequestT = Model::GetDedicatedIpRequest>
        Model::GetDedicatedIpOutcomeCallable GetDedicatedIpCallable(const GetDedicatedIpRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetDedicatedIp, request);
        }

        /**
         * An Async wrapper for GetDedicatedIp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDedicatedIpRequestT = Model::GetDedicatedIpRequest>
        void GetDedicatedIpAsync(const GetDedicatedIpRequestT& request, const GetDedicatedIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetDedicatedIp, request, handler, context);
        }

        /**
         * <p>Retrieve information about the dedicated pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDedicatedIpPool">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDedicatedIpPoolOutcome GetDedicatedIpPool(const Model::GetDedicatedIpPoolRequest& request) const;

        /**
         * A Callable wrapper for GetDedicatedIpPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDedicatedIpPoolRequestT = Model::GetDedicatedIpPoolRequest>
        Model::GetDedicatedIpPoolOutcomeCallable GetDedicatedIpPoolCallable(const GetDedicatedIpPoolRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetDedicatedIpPool, request);
        }

        /**
         * An Async wrapper for GetDedicatedIpPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDedicatedIpPoolRequestT = Model::GetDedicatedIpPoolRequest>
        void GetDedicatedIpPoolAsync(const GetDedicatedIpPoolRequestT& request, const GetDedicatedIpPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetDedicatedIpPool, request, handler, context);
        }

        /**
         * <p>List the dedicated IP addresses that are associated with your Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDedicatedIps">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDedicatedIpsOutcome GetDedicatedIps(const Model::GetDedicatedIpsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetDedicatedIps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDedicatedIpsRequestT = Model::GetDedicatedIpsRequest>
        Model::GetDedicatedIpsOutcomeCallable GetDedicatedIpsCallable(const GetDedicatedIpsRequestT& request = {}) const
        {
            return SubmitCallable(&SESV2Client::GetDedicatedIps, request);
        }

        /**
         * An Async wrapper for GetDedicatedIps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDedicatedIpsRequestT = Model::GetDedicatedIpsRequest>
        void GetDedicatedIpsAsync(const GetDedicatedIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetDedicatedIpsRequestT& request = {}) const
        {
            return SubmitAsync(&SESV2Client::GetDedicatedIps, request, handler, context);
        }

        /**
         * <p>Retrieve information about the status of the Deliverability dashboard for
         * your account. When the Deliverability dashboard is enabled, you gain access to
         * reputation, deliverability, and other metrics for the domains that you use to
         * send email. You also gain the ability to perform predictive inbox placement
         * tests.</p> <p>When you use the Deliverability dashboard, you pay a monthly
         * subscription charge, in addition to any other fees that you accrue by using
         * Amazon SES and other Amazon Web Services services. For more information about
         * the features and cost of a Deliverability dashboard subscription, see <a
         * href="http://aws.amazon.com/ses/pricing/">Amazon SES Pricing</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDeliverabilityDashboardOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeliverabilityDashboardOptionsOutcome GetDeliverabilityDashboardOptions(const Model::GetDeliverabilityDashboardOptionsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetDeliverabilityDashboardOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeliverabilityDashboardOptionsRequestT = Model::GetDeliverabilityDashboardOptionsRequest>
        Model::GetDeliverabilityDashboardOptionsOutcomeCallable GetDeliverabilityDashboardOptionsCallable(const GetDeliverabilityDashboardOptionsRequestT& request = {}) const
        {
            return SubmitCallable(&SESV2Client::GetDeliverabilityDashboardOptions, request);
        }

        /**
         * An Async wrapper for GetDeliverabilityDashboardOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeliverabilityDashboardOptionsRequestT = Model::GetDeliverabilityDashboardOptionsRequest>
        void GetDeliverabilityDashboardOptionsAsync(const GetDeliverabilityDashboardOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetDeliverabilityDashboardOptionsRequestT& request = {}) const
        {
            return SubmitAsync(&SESV2Client::GetDeliverabilityDashboardOptions, request, handler, context);
        }

        /**
         * <p>Retrieve the results of a predictive inbox placement test.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDeliverabilityTestReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeliverabilityTestReportOutcome GetDeliverabilityTestReport(const Model::GetDeliverabilityTestReportRequest& request) const;

        /**
         * A Callable wrapper for GetDeliverabilityTestReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeliverabilityTestReportRequestT = Model::GetDeliverabilityTestReportRequest>
        Model::GetDeliverabilityTestReportOutcomeCallable GetDeliverabilityTestReportCallable(const GetDeliverabilityTestReportRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetDeliverabilityTestReport, request);
        }

        /**
         * An Async wrapper for GetDeliverabilityTestReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeliverabilityTestReportRequestT = Model::GetDeliverabilityTestReportRequest>
        void GetDeliverabilityTestReportAsync(const GetDeliverabilityTestReportRequestT& request, const GetDeliverabilityTestReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetDeliverabilityTestReport, request, handler, context);
        }

        /**
         * <p>Retrieve all the deliverability data for a specific campaign. This data is
         * available for a campaign only if the campaign sent email by using a domain that
         * the Deliverability dashboard is enabled for.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDomainDeliverabilityCampaign">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainDeliverabilityCampaignOutcome GetDomainDeliverabilityCampaign(const Model::GetDomainDeliverabilityCampaignRequest& request) const;

        /**
         * A Callable wrapper for GetDomainDeliverabilityCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDomainDeliverabilityCampaignRequestT = Model::GetDomainDeliverabilityCampaignRequest>
        Model::GetDomainDeliverabilityCampaignOutcomeCallable GetDomainDeliverabilityCampaignCallable(const GetDomainDeliverabilityCampaignRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetDomainDeliverabilityCampaign, request);
        }

        /**
         * An Async wrapper for GetDomainDeliverabilityCampaign that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDomainDeliverabilityCampaignRequestT = Model::GetDomainDeliverabilityCampaignRequest>
        void GetDomainDeliverabilityCampaignAsync(const GetDomainDeliverabilityCampaignRequestT& request, const GetDomainDeliverabilityCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetDomainDeliverabilityCampaign, request, handler, context);
        }

        /**
         * <p>Retrieve inbox placement and engagement rates for the domains that you use to
         * send email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDomainStatisticsReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainStatisticsReportOutcome GetDomainStatisticsReport(const Model::GetDomainStatisticsReportRequest& request) const;

        /**
         * A Callable wrapper for GetDomainStatisticsReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDomainStatisticsReportRequestT = Model::GetDomainStatisticsReportRequest>
        Model::GetDomainStatisticsReportOutcomeCallable GetDomainStatisticsReportCallable(const GetDomainStatisticsReportRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetDomainStatisticsReport, request);
        }

        /**
         * An Async wrapper for GetDomainStatisticsReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDomainStatisticsReportRequestT = Model::GetDomainStatisticsReportRequest>
        void GetDomainStatisticsReportAsync(const GetDomainStatisticsReportRequestT& request, const GetDomainStatisticsReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetDomainStatisticsReport, request, handler, context);
        }

        /**
         * <p>Provides information about a specific identity, including the identity's
         * verification status, sending authorization policies, its DKIM authentication
         * status, and its custom Mail-From settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEmailIdentityOutcome GetEmailIdentity(const Model::GetEmailIdentityRequest& request) const;

        /**
         * A Callable wrapper for GetEmailIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEmailIdentityRequestT = Model::GetEmailIdentityRequest>
        Model::GetEmailIdentityOutcomeCallable GetEmailIdentityCallable(const GetEmailIdentityRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetEmailIdentity, request);
        }

        /**
         * An Async wrapper for GetEmailIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEmailIdentityRequestT = Model::GetEmailIdentityRequest>
        void GetEmailIdentityAsync(const GetEmailIdentityRequestT& request, const GetEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetEmailIdentity, request, handler, context);
        }

        /**
         * <p>Returns the requested sending authorization policies for the given identity
         * (an email address or a domain). The policies are returned as a map of policy
         * names to policy contents. You can retrieve a maximum of 20 policies at a
         * time.</p>  <p>This API is for the identity owner only. If you have not
         * verified the identity, this API will return an error.</p>  <p>Sending
         * authorization is a feature that enables an identity owner to authorize other
         * senders to use its identities. For information about using sending
         * authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailIdentityPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEmailIdentityPoliciesOutcome GetEmailIdentityPolicies(const Model::GetEmailIdentityPoliciesRequest& request) const;

        /**
         * A Callable wrapper for GetEmailIdentityPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEmailIdentityPoliciesRequestT = Model::GetEmailIdentityPoliciesRequest>
        Model::GetEmailIdentityPoliciesOutcomeCallable GetEmailIdentityPoliciesCallable(const GetEmailIdentityPoliciesRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetEmailIdentityPolicies, request);
        }

        /**
         * An Async wrapper for GetEmailIdentityPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEmailIdentityPoliciesRequestT = Model::GetEmailIdentityPoliciesRequest>
        void GetEmailIdentityPoliciesAsync(const GetEmailIdentityPoliciesRequestT& request, const GetEmailIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetEmailIdentityPolicies, request, handler, context);
        }

        /**
         * <p>Displays the template object (which includes the subject line, HTML part and
         * text part) for the template you specify.</p> <p>You can execute this operation
         * no more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEmailTemplateOutcome GetEmailTemplate(const Model::GetEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEmailTemplateRequestT = Model::GetEmailTemplateRequest>
        Model::GetEmailTemplateOutcomeCallable GetEmailTemplateCallable(const GetEmailTemplateRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetEmailTemplate, request);
        }

        /**
         * An Async wrapper for GetEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEmailTemplateRequestT = Model::GetEmailTemplateRequest>
        void GetEmailTemplateAsync(const GetEmailTemplateRequestT& request, const GetEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetEmailTemplate, request, handler, context);
        }

        /**
         * <p>Provides information about an export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExportJobOutcome GetExportJob(const Model::GetExportJobRequest& request) const;

        /**
         * A Callable wrapper for GetExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetExportJobRequestT = Model::GetExportJobRequest>
        Model::GetExportJobOutcomeCallable GetExportJobCallable(const GetExportJobRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetExportJob, request);
        }

        /**
         * An Async wrapper for GetExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExportJobRequestT = Model::GetExportJobRequest>
        void GetExportJobAsync(const GetExportJobRequestT& request, const GetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetExportJob, request, handler, context);
        }

        /**
         * <p>Provides information about an import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportJobOutcome GetImportJob(const Model::GetImportJobRequest& request) const;

        /**
         * A Callable wrapper for GetImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetImportJobRequestT = Model::GetImportJobRequest>
        Model::GetImportJobOutcomeCallable GetImportJobCallable(const GetImportJobRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetImportJob, request);
        }

        /**
         * An Async wrapper for GetImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetImportJobRequestT = Model::GetImportJobRequest>
        void GetImportJobAsync(const GetImportJobRequestT& request, const GetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetImportJob, request, handler, context);
        }

        /**
         * <p>Provides information about a specific message, including the from address,
         * the subject, the recipient address, email tags, as well as events associated
         * with the message.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetMessageInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMessageInsightsOutcome GetMessageInsights(const Model::GetMessageInsightsRequest& request) const;

        /**
         * A Callable wrapper for GetMessageInsights that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMessageInsightsRequestT = Model::GetMessageInsightsRequest>
        Model::GetMessageInsightsOutcomeCallable GetMessageInsightsCallable(const GetMessageInsightsRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetMessageInsights, request);
        }

        /**
         * An Async wrapper for GetMessageInsights that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMessageInsightsRequestT = Model::GetMessageInsightsRequest>
        void GetMessageInsightsAsync(const GetMessageInsightsRequestT& request, const GetMessageInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetMessageInsights, request, handler, context);
        }

        /**
         * <p>Displays the multi-region endpoint (global-endpoint) configuration.</p>
         * <p>Only multi-region endpoints (global-endpoints) whose primary region is the
         * AWS-Region where operation is executed can be displayed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetMultiRegionEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMultiRegionEndpointOutcome GetMultiRegionEndpoint(const Model::GetMultiRegionEndpointRequest& request) const;

        /**
         * A Callable wrapper for GetMultiRegionEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMultiRegionEndpointRequestT = Model::GetMultiRegionEndpointRequest>
        Model::GetMultiRegionEndpointOutcomeCallable GetMultiRegionEndpointCallable(const GetMultiRegionEndpointRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetMultiRegionEndpoint, request);
        }

        /**
         * An Async wrapper for GetMultiRegionEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMultiRegionEndpointRequestT = Model::GetMultiRegionEndpointRequest>
        void GetMultiRegionEndpointAsync(const GetMultiRegionEndpointRequestT& request, const GetMultiRegionEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetMultiRegionEndpoint, request, handler, context);
        }

        /**
         * <p>Retrieve information about a specific reputation entity, including its
         * reputation management policy, customer-managed status, Amazon Web Services
         * Amazon SES-managed status, and aggregate sending status.</p> <p> <i>Reputation
         * entities</i> represent resources in your Amazon SES account that have reputation
         * tracking and management capabilities. The reputation impact reflects the highest
         * impact reputation finding for the entity. Reputation findings can be retrieved
         * using the <code>ListRecommendations</code> operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetReputationEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReputationEntityOutcome GetReputationEntity(const Model::GetReputationEntityRequest& request) const;

        /**
         * A Callable wrapper for GetReputationEntity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReputationEntityRequestT = Model::GetReputationEntityRequest>
        Model::GetReputationEntityOutcomeCallable GetReputationEntityCallable(const GetReputationEntityRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetReputationEntity, request);
        }

        /**
         * An Async wrapper for GetReputationEntity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReputationEntityRequestT = Model::GetReputationEntityRequest>
        void GetReputationEntityAsync(const GetReputationEntityRequestT& request, const GetReputationEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetReputationEntity, request, handler, context);
        }

        /**
         * <p>Retrieves information about a specific email address that's on the
         * suppression list for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetSuppressedDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSuppressedDestinationOutcome GetSuppressedDestination(const Model::GetSuppressedDestinationRequest& request) const;

        /**
         * A Callable wrapper for GetSuppressedDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSuppressedDestinationRequestT = Model::GetSuppressedDestinationRequest>
        Model::GetSuppressedDestinationOutcomeCallable GetSuppressedDestinationCallable(const GetSuppressedDestinationRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetSuppressedDestination, request);
        }

        /**
         * An Async wrapper for GetSuppressedDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSuppressedDestinationRequestT = Model::GetSuppressedDestinationRequest>
        void GetSuppressedDestinationAsync(const GetSuppressedDestinationRequestT& request, const GetSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetSuppressedDestination, request, handler, context);
        }

        /**
         * <p>Get information about a specific tenant, including the tenant's name, ID,
         * ARN, creation timestamp, tags, and sending status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetTenant">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTenantOutcome GetTenant(const Model::GetTenantRequest& request) const;

        /**
         * A Callable wrapper for GetTenant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTenantRequestT = Model::GetTenantRequest>
        Model::GetTenantOutcomeCallable GetTenantCallable(const GetTenantRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::GetTenant, request);
        }

        /**
         * An Async wrapper for GetTenant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTenantRequestT = Model::GetTenantRequest>
        void GetTenantAsync(const GetTenantRequestT& request, const GetTenantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::GetTenant, request, handler, context);
        }

        /**
         * <p>List all of the configuration sets associated with your account in the
         * current region.</p> <p> <i>Configuration sets</i> are groups of rules that you
         * can apply to the emails you send. You apply a configuration set to an email by
         * including a reference to the configuration set in the headers of the email. When
         * you apply a configuration set to an email, all of the rules in that
         * configuration set are applied to the email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListConfigurationSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationSetsOutcome ListConfigurationSets(const Model::ListConfigurationSetsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListConfigurationSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConfigurationSetsRequestT = Model::ListConfigurationSetsRequest>
        Model::ListConfigurationSetsOutcomeCallable ListConfigurationSetsCallable(const ListConfigurationSetsRequestT& request = {}) const
        {
            return SubmitCallable(&SESV2Client::ListConfigurationSets, request);
        }

        /**
         * An Async wrapper for ListConfigurationSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConfigurationSetsRequestT = Model::ListConfigurationSetsRequest>
        void ListConfigurationSetsAsync(const ListConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListConfigurationSetsRequestT& request = {}) const
        {
            return SubmitAsync(&SESV2Client::ListConfigurationSets, request, handler, context);
        }

        /**
         * <p>Lists all of the contact lists available.</p> <p>If your output includes a
         * "NextToken" field with a string value, this indicates there may be additional
         * contacts on the filtered list - regardless of the number of contacts
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListContactLists">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactListsOutcome ListContactLists(const Model::ListContactListsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListContactLists that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListContactListsRequestT = Model::ListContactListsRequest>
        Model::ListContactListsOutcomeCallable ListContactListsCallable(const ListContactListsRequestT& request = {}) const
        {
            return SubmitCallable(&SESV2Client::ListContactLists, request);
        }

        /**
         * An Async wrapper for ListContactLists that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListContactListsRequestT = Model::ListContactListsRequest>
        void ListContactListsAsync(const ListContactListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListContactListsRequestT& request = {}) const
        {
            return SubmitAsync(&SESV2Client::ListContactLists, request, handler, context);
        }

        /**
         * <p>Lists the contacts present in a specific contact list.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListContacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactsOutcome ListContacts(const Model::ListContactsRequest& request) const;

        /**
         * A Callable wrapper for ListContacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListContactsRequestT = Model::ListContactsRequest>
        Model::ListContactsOutcomeCallable ListContactsCallable(const ListContactsRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::ListContacts, request);
        }

        /**
         * An Async wrapper for ListContacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListContactsRequestT = Model::ListContactsRequest>
        void ListContactsAsync(const ListContactsRequestT& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::ListContacts, request, handler, context);
        }

        /**
         * <p>Lists the existing custom verification email templates for your account in
         * the current Amazon Web Services Region.</p> <p>For more information about custom
         * verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html#send-email-verify-address-custom">Using
         * custom verification email templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListCustomVerificationEmailTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomVerificationEmailTemplatesOutcome ListCustomVerificationEmailTemplates(const Model::ListCustomVerificationEmailTemplatesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListCustomVerificationEmailTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCustomVerificationEmailTemplatesRequestT = Model::ListCustomVerificationEmailTemplatesRequest>
        Model::ListCustomVerificationEmailTemplatesOutcomeCallable ListCustomVerificationEmailTemplatesCallable(const ListCustomVerificationEmailTemplatesRequestT& request = {}) const
        {
            return SubmitCallable(&SESV2Client::ListCustomVerificationEmailTemplates, request);
        }

        /**
         * An Async wrapper for ListCustomVerificationEmailTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCustomVerificationEmailTemplatesRequestT = Model::ListCustomVerificationEmailTemplatesRequest>
        void ListCustomVerificationEmailTemplatesAsync(const ListCustomVerificationEmailTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListCustomVerificationEmailTemplatesRequestT& request = {}) const
        {
            return SubmitAsync(&SESV2Client::ListCustomVerificationEmailTemplates, request, handler, context);
        }

        /**
         * <p>List all of the dedicated IP pools that exist in your Amazon Web Services
         * account in the current Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListDedicatedIpPools">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDedicatedIpPoolsOutcome ListDedicatedIpPools(const Model::ListDedicatedIpPoolsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListDedicatedIpPools that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDedicatedIpPoolsRequestT = Model::ListDedicatedIpPoolsRequest>
        Model::ListDedicatedIpPoolsOutcomeCallable ListDedicatedIpPoolsCallable(const ListDedicatedIpPoolsRequestT& request = {}) const
        {
            return SubmitCallable(&SESV2Client::ListDedicatedIpPools, request);
        }

        /**
         * An Async wrapper for ListDedicatedIpPools that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDedicatedIpPoolsRequestT = Model::ListDedicatedIpPoolsRequest>
        void ListDedicatedIpPoolsAsync(const ListDedicatedIpPoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListDedicatedIpPoolsRequestT& request = {}) const
        {
            return SubmitAsync(&SESV2Client::ListDedicatedIpPools, request, handler, context);
        }

        /**
         * <p>Show a list of the predictive inbox placement tests that you've performed,
         * regardless of their statuses. For predictive inbox placement tests that are
         * complete, you can use the <code>GetDeliverabilityTestReport</code> operation to
         * view the results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListDeliverabilityTestReports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeliverabilityTestReportsOutcome ListDeliverabilityTestReports(const Model::ListDeliverabilityTestReportsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListDeliverabilityTestReports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDeliverabilityTestReportsRequestT = Model::ListDeliverabilityTestReportsRequest>
        Model::ListDeliverabilityTestReportsOutcomeCallable ListDeliverabilityTestReportsCallable(const ListDeliverabilityTestReportsRequestT& request = {}) const
        {
            return SubmitCallable(&SESV2Client::ListDeliverabilityTestReports, request);
        }

        /**
         * An Async wrapper for ListDeliverabilityTestReports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeliverabilityTestReportsRequestT = Model::ListDeliverabilityTestReportsRequest>
        void ListDeliverabilityTestReportsAsync(const ListDeliverabilityTestReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListDeliverabilityTestReportsRequestT& request = {}) const
        {
            return SubmitAsync(&SESV2Client::ListDeliverabilityTestReports, request, handler, context);
        }

        /**
         * <p>Retrieve deliverability data for all the campaigns that used a specific
         * domain to send email during a specified time range. This data is available for a
         * domain only if you enabled the Deliverability dashboard for the
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListDomainDeliverabilityCampaigns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainDeliverabilityCampaignsOutcome ListDomainDeliverabilityCampaigns(const Model::ListDomainDeliverabilityCampaignsRequest& request) const;

        /**
         * A Callable wrapper for ListDomainDeliverabilityCampaigns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDomainDeliverabilityCampaignsRequestT = Model::ListDomainDeliverabilityCampaignsRequest>
        Model::ListDomainDeliverabilityCampaignsOutcomeCallable ListDomainDeliverabilityCampaignsCallable(const ListDomainDeliverabilityCampaignsRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::ListDomainDeliverabilityCampaigns, request);
        }

        /**
         * An Async wrapper for ListDomainDeliverabilityCampaigns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainDeliverabilityCampaignsRequestT = Model::ListDomainDeliverabilityCampaignsRequest>
        void ListDomainDeliverabilityCampaignsAsync(const ListDomainDeliverabilityCampaignsRequestT& request, const ListDomainDeliverabilityCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::ListDomainDeliverabilityCampaigns, request, handler, context);
        }

        /**
         * <p>Returns a list of all of the email identities that are associated with your
         * Amazon Web Services account. An identity can be either an email address or a
         * domain. This operation returns identities that are verified as well as those
         * that aren't. This operation returns identities that are associated with Amazon
         * SES and Amazon Pinpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListEmailIdentities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEmailIdentitiesOutcome ListEmailIdentities(const Model::ListEmailIdentitiesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListEmailIdentities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEmailIdentitiesRequestT = Model::ListEmailIdentitiesRequest>
        Model::ListEmailIdentitiesOutcomeCallable ListEmailIdentitiesCallable(const ListEmailIdentitiesRequestT& request = {}) const
        {
            return SubmitCallable(&SESV2Client::ListEmailIdentities, request);
        }

        /**
         * An Async wrapper for ListEmailIdentities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEmailIdentitiesRequestT = Model::ListEmailIdentitiesRequest>
        void ListEmailIdentitiesAsync(const ListEmailIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListEmailIdentitiesRequestT& request = {}) const
        {
            return SubmitAsync(&SESV2Client::ListEmailIdentities, request, handler, context);
        }

        /**
         * <p>Lists the email templates present in your Amazon SES account in the current
         * Amazon Web Services Region.</p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListEmailTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEmailTemplatesOutcome ListEmailTemplates(const Model::ListEmailTemplatesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListEmailTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEmailTemplatesRequestT = Model::ListEmailTemplatesRequest>
        Model::ListEmailTemplatesOutcomeCallable ListEmailTemplatesCallable(const ListEmailTemplatesRequestT& request = {}) const
        {
            return SubmitCallable(&SESV2Client::ListEmailTemplates, request);
        }

        /**
         * An Async wrapper for ListEmailTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEmailTemplatesRequestT = Model::ListEmailTemplatesRequest>
        void ListEmailTemplatesAsync(const ListEmailTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListEmailTemplatesRequestT& request = {}) const
        {
            return SubmitAsync(&SESV2Client::ListEmailTemplates, request, handler, context);
        }

        /**
         * <p>Lists all of the export jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExportJobsOutcome ListExportJobs(const Model::ListExportJobsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListExportJobsRequestT = Model::ListExportJobsRequest>
        Model::ListExportJobsOutcomeCallable ListExportJobsCallable(const ListExportJobsRequestT& request = {}) const
        {
            return SubmitCallable(&SESV2Client::ListExportJobs, request);
        }

        /**
         * An Async wrapper for ListExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExportJobsRequestT = Model::ListExportJobsRequest>
        void ListExportJobsAsync(const ListExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListExportJobsRequestT& request = {}) const
        {
            return SubmitAsync(&SESV2Client::ListExportJobs, request, handler, context);
        }

        /**
         * <p>Lists all of the import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImportJobsOutcome ListImportJobs(const Model::ListImportJobsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImportJobsRequestT = Model::ListImportJobsRequest>
        Model::ListImportJobsOutcomeCallable ListImportJobsCallable(const ListImportJobsRequestT& request = {}) const
        {
            return SubmitCallable(&SESV2Client::ListImportJobs, request);
        }

        /**
         * An Async wrapper for ListImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImportJobsRequestT = Model::ListImportJobsRequest>
        void ListImportJobsAsync(const ListImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListImportJobsRequestT& request = {}) const
        {
            return SubmitAsync(&SESV2Client::ListImportJobs, request, handler, context);
        }

        /**
         * <p>List the multi-region endpoints (global-endpoints).</p> <p>Only multi-region
         * endpoints (global-endpoints) whose primary region is the AWS-Region where
         * operation is executed will be listed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListMultiRegionEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMultiRegionEndpointsOutcome ListMultiRegionEndpoints(const Model::ListMultiRegionEndpointsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListMultiRegionEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMultiRegionEndpointsRequestT = Model::ListMultiRegionEndpointsRequest>
        Model::ListMultiRegionEndpointsOutcomeCallable ListMultiRegionEndpointsCallable(const ListMultiRegionEndpointsRequestT& request = {}) const
        {
            return SubmitCallable(&SESV2Client::ListMultiRegionEndpoints, request);
        }

        /**
         * An Async wrapper for ListMultiRegionEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMultiRegionEndpointsRequestT = Model::ListMultiRegionEndpointsRequest>
        void ListMultiRegionEndpointsAsync(const ListMultiRegionEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListMultiRegionEndpointsRequestT& request = {}) const
        {
            return SubmitAsync(&SESV2Client::ListMultiRegionEndpoints, request, handler, context);
        }

        /**
         * <p>Lists the recommendations present in your Amazon SES account in the current
         * Amazon Web Services Region.</p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendationsOutcome ListRecommendations(const Model::ListRecommendationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRecommendationsRequestT = Model::ListRecommendationsRequest>
        Model::ListRecommendationsOutcomeCallable ListRecommendationsCallable(const ListRecommendationsRequestT& request = {}) const
        {
            return SubmitCallable(&SESV2Client::ListRecommendations, request);
        }

        /**
         * An Async wrapper for ListRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecommendationsRequestT = Model::ListRecommendationsRequest>
        void ListRecommendationsAsync(const ListRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListRecommendationsRequestT& request = {}) const
        {
            return SubmitAsync(&SESV2Client::ListRecommendations, request, handler, context);
        }

        /**
         * <p>List reputation entities in your Amazon SES account in the current Amazon Web
         * Services Region. You can filter the results by entity type, reputation impact,
         * sending status, or entity reference prefix.</p> <p> <i>Reputation entities</i>
         * represent resources in your account that have reputation tracking and management
         * capabilities. Use this operation to get an overview of all entities and their
         * current reputation status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListReputationEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReputationEntitiesOutcome ListReputationEntities(const Model::ListReputationEntitiesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListReputationEntities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReputationEntitiesRequestT = Model::ListReputationEntitiesRequest>
        Model::ListReputationEntitiesOutcomeCallable ListReputationEntitiesCallable(const ListReputationEntitiesRequestT& request = {}) const
        {
            return SubmitCallable(&SESV2Client::ListReputationEntities, request);
        }

        /**
         * An Async wrapper for ListReputationEntities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReputationEntitiesRequestT = Model::ListReputationEntitiesRequest>
        void ListReputationEntitiesAsync(const ListReputationEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListReputationEntitiesRequestT& request = {}) const
        {
            return SubmitAsync(&SESV2Client::ListReputationEntities, request, handler, context);
        }

        /**
         * <p>List all tenants associated with a specific resource.</p> <p>This operation
         * returns a list of tenants that are associated with the specified resource. This
         * is useful for understanding which tenants are currently using a particular
         * resource such as an email identity, configuration set, or email
         * template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListResourceTenants">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceTenantsOutcome ListResourceTenants(const Model::ListResourceTenantsRequest& request) const;

        /**
         * A Callable wrapper for ListResourceTenants that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourceTenantsRequestT = Model::ListResourceTenantsRequest>
        Model::ListResourceTenantsOutcomeCallable ListResourceTenantsCallable(const ListResourceTenantsRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::ListResourceTenants, request);
        }

        /**
         * An Async wrapper for ListResourceTenants that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceTenantsRequestT = Model::ListResourceTenantsRequest>
        void ListResourceTenantsAsync(const ListResourceTenantsRequestT& request, const ListResourceTenantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::ListResourceTenants, request, handler, context);
        }

        /**
         * <p>Retrieves a list of email addresses that are on the suppression list for your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListSuppressedDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSuppressedDestinationsOutcome ListSuppressedDestinations(const Model::ListSuppressedDestinationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListSuppressedDestinations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSuppressedDestinationsRequestT = Model::ListSuppressedDestinationsRequest>
        Model::ListSuppressedDestinationsOutcomeCallable ListSuppressedDestinationsCallable(const ListSuppressedDestinationsRequestT& request = {}) const
        {
            return SubmitCallable(&SESV2Client::ListSuppressedDestinations, request);
        }

        /**
         * An Async wrapper for ListSuppressedDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSuppressedDestinationsRequestT = Model::ListSuppressedDestinationsRequest>
        void ListSuppressedDestinationsAsync(const ListSuppressedDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListSuppressedDestinationsRequestT& request = {}) const
        {
            return SubmitAsync(&SESV2Client::ListSuppressedDestinations, request, handler, context);
        }

        /**
         * <p>Retrieve a list of the tags (keys and values) that are associated with a
         * specified resource. A <i>tag</i> is a label that you optionally define and
         * associate with a resource. Each tag consists of a required <i>tag key</i> and an
         * optional associated <i>tag value</i>. A tag key is a general label that acts as
         * a category for more specific tag values. A tag value acts as a descriptor within
         * a tag key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>List all resources associated with a specific tenant.</p> <p>This operation
         * returns a list of resources (email identities, configuration sets, or email
         * templates) that are associated with the specified tenant. You can optionally
         * filter the results by resource type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListTenantResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTenantResourcesOutcome ListTenantResources(const Model::ListTenantResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListTenantResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTenantResourcesRequestT = Model::ListTenantResourcesRequest>
        Model::ListTenantResourcesOutcomeCallable ListTenantResourcesCallable(const ListTenantResourcesRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::ListTenantResources, request);
        }

        /**
         * An Async wrapper for ListTenantResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTenantResourcesRequestT = Model::ListTenantResourcesRequest>
        void ListTenantResourcesAsync(const ListTenantResourcesRequestT& request, const ListTenantResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::ListTenantResources, request, handler, context);
        }

        /**
         * <p>List all tenants associated with your account in the current Amazon Web
         * Services Region.</p> <p>This operation returns basic information about each
         * tenant, such as tenant name, ID, ARN, and creation timestamp.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListTenants">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTenantsOutcome ListTenants(const Model::ListTenantsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListTenants that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTenantsRequestT = Model::ListTenantsRequest>
        Model::ListTenantsOutcomeCallable ListTenantsCallable(const ListTenantsRequestT& request = {}) const
        {
            return SubmitCallable(&SESV2Client::ListTenants, request);
        }

        /**
         * An Async wrapper for ListTenants that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTenantsRequestT = Model::ListTenantsRequest>
        void ListTenantsAsync(const ListTenantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListTenantsRequestT& request = {}) const
        {
            return SubmitAsync(&SESV2Client::ListTenants, request, handler, context);
        }

        /**
         * <p>Enable or disable the automatic warm-up feature for dedicated IP
         * addresses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountDedicatedIpWarmupAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountDedicatedIpWarmupAttributesOutcome PutAccountDedicatedIpWarmupAttributes(const Model::PutAccountDedicatedIpWarmupAttributesRequest& request = {}) const;

        /**
         * A Callable wrapper for PutAccountDedicatedIpWarmupAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAccountDedicatedIpWarmupAttributesRequestT = Model::PutAccountDedicatedIpWarmupAttributesRequest>
        Model::PutAccountDedicatedIpWarmupAttributesOutcomeCallable PutAccountDedicatedIpWarmupAttributesCallable(const PutAccountDedicatedIpWarmupAttributesRequestT& request = {}) const
        {
            return SubmitCallable(&SESV2Client::PutAccountDedicatedIpWarmupAttributes, request);
        }

        /**
         * An Async wrapper for PutAccountDedicatedIpWarmupAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAccountDedicatedIpWarmupAttributesRequestT = Model::PutAccountDedicatedIpWarmupAttributesRequest>
        void PutAccountDedicatedIpWarmupAttributesAsync(const PutAccountDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const PutAccountDedicatedIpWarmupAttributesRequestT& request = {}) const
        {
            return SubmitAsync(&SESV2Client::PutAccountDedicatedIpWarmupAttributes, request, handler, context);
        }

        /**
         * <p>Update your Amazon SES account details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountDetailsOutcome PutAccountDetails(const Model::PutAccountDetailsRequest& request) const;

        /**
         * A Callable wrapper for PutAccountDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAccountDetailsRequestT = Model::PutAccountDetailsRequest>
        Model::PutAccountDetailsOutcomeCallable PutAccountDetailsCallable(const PutAccountDetailsRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::PutAccountDetails, request);
        }

        /**
         * An Async wrapper for PutAccountDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAccountDetailsRequestT = Model::PutAccountDetailsRequest>
        void PutAccountDetailsAsync(const PutAccountDetailsRequestT& request, const PutAccountDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::PutAccountDetails, request, handler, context);
        }

        /**
         * <p>Enable or disable the ability of your account to send email.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountSendingAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountSendingAttributesOutcome PutAccountSendingAttributes(const Model::PutAccountSendingAttributesRequest& request = {}) const;

        /**
         * A Callable wrapper for PutAccountSendingAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAccountSendingAttributesRequestT = Model::PutAccountSendingAttributesRequest>
        Model::PutAccountSendingAttributesOutcomeCallable PutAccountSendingAttributesCallable(const PutAccountSendingAttributesRequestT& request = {}) const
        {
            return SubmitCallable(&SESV2Client::PutAccountSendingAttributes, request);
        }

        /**
         * An Async wrapper for PutAccountSendingAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAccountSendingAttributesRequestT = Model::PutAccountSendingAttributesRequest>
        void PutAccountSendingAttributesAsync(const PutAccountSendingAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const PutAccountSendingAttributesRequestT& request = {}) const
        {
            return SubmitAsync(&SESV2Client::PutAccountSendingAttributes, request, handler, context);
        }

        /**
         * <p>Change the settings for the account-level suppression list.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountSuppressionAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountSuppressionAttributesOutcome PutAccountSuppressionAttributes(const Model::PutAccountSuppressionAttributesRequest& request = {}) const;

        /**
         * A Callable wrapper for PutAccountSuppressionAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAccountSuppressionAttributesRequestT = Model::PutAccountSuppressionAttributesRequest>
        Model::PutAccountSuppressionAttributesOutcomeCallable PutAccountSuppressionAttributesCallable(const PutAccountSuppressionAttributesRequestT& request = {}) const
        {
            return SubmitCallable(&SESV2Client::PutAccountSuppressionAttributes, request);
        }

        /**
         * An Async wrapper for PutAccountSuppressionAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAccountSuppressionAttributesRequestT = Model::PutAccountSuppressionAttributesRequest>
        void PutAccountSuppressionAttributesAsync(const PutAccountSuppressionAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const PutAccountSuppressionAttributesRequestT& request = {}) const
        {
            return SubmitAsync(&SESV2Client::PutAccountSuppressionAttributes, request, handler, context);
        }

        /**
         * <p>Update your Amazon SES account VDM attributes.</p> <p>You can execute this
         * operation no more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountVdmAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountVdmAttributesOutcome PutAccountVdmAttributes(const Model::PutAccountVdmAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutAccountVdmAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAccountVdmAttributesRequestT = Model::PutAccountVdmAttributesRequest>
        Model::PutAccountVdmAttributesOutcomeCallable PutAccountVdmAttributesCallable(const PutAccountVdmAttributesRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::PutAccountVdmAttributes, request);
        }

        /**
         * An Async wrapper for PutAccountVdmAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAccountVdmAttributesRequestT = Model::PutAccountVdmAttributesRequest>
        void PutAccountVdmAttributesAsync(const PutAccountVdmAttributesRequestT& request, const PutAccountVdmAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::PutAccountVdmAttributes, request, handler, context);
        }

        /**
         * <p>Associate the configuration set with a MailManager archive. When you send
         * email using the <code>SendEmail</code> or <code>SendBulkEmail</code> operations
         * the message as it will be given to the receiving SMTP server will be archived,
         * along with the recipient information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetArchivingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationSetArchivingOptionsOutcome PutConfigurationSetArchivingOptions(const Model::PutConfigurationSetArchivingOptionsRequest& request) const;

        /**
         * A Callable wrapper for PutConfigurationSetArchivingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutConfigurationSetArchivingOptionsRequestT = Model::PutConfigurationSetArchivingOptionsRequest>
        Model::PutConfigurationSetArchivingOptionsOutcomeCallable PutConfigurationSetArchivingOptionsCallable(const PutConfigurationSetArchivingOptionsRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::PutConfigurationSetArchivingOptions, request);
        }

        /**
         * An Async wrapper for PutConfigurationSetArchivingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutConfigurationSetArchivingOptionsRequestT = Model::PutConfigurationSetArchivingOptionsRequest>
        void PutConfigurationSetArchivingOptionsAsync(const PutConfigurationSetArchivingOptionsRequestT& request, const PutConfigurationSetArchivingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::PutConfigurationSetArchivingOptions, request, handler, context);
        }

        /**
         * <p>Associate a configuration set with a dedicated IP pool. You can use dedicated
         * IP pools to create groups of dedicated IP addresses for sending specific types
         * of email.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetDeliveryOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationSetDeliveryOptionsOutcome PutConfigurationSetDeliveryOptions(const Model::PutConfigurationSetDeliveryOptionsRequest& request) const;

        /**
         * A Callable wrapper for PutConfigurationSetDeliveryOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutConfigurationSetDeliveryOptionsRequestT = Model::PutConfigurationSetDeliveryOptionsRequest>
        Model::PutConfigurationSetDeliveryOptionsOutcomeCallable PutConfigurationSetDeliveryOptionsCallable(const PutConfigurationSetDeliveryOptionsRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::PutConfigurationSetDeliveryOptions, request);
        }

        /**
         * An Async wrapper for PutConfigurationSetDeliveryOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutConfigurationSetDeliveryOptionsRequestT = Model::PutConfigurationSetDeliveryOptionsRequest>
        void PutConfigurationSetDeliveryOptionsAsync(const PutConfigurationSetDeliveryOptionsRequestT& request, const PutConfigurationSetDeliveryOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::PutConfigurationSetDeliveryOptions, request, handler, context);
        }

        /**
         * <p>Enable or disable collection of reputation metrics for emails that you send
         * using a particular configuration set in a specific Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetReputationOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationSetReputationOptionsOutcome PutConfigurationSetReputationOptions(const Model::PutConfigurationSetReputationOptionsRequest& request) const;

        /**
         * A Callable wrapper for PutConfigurationSetReputationOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutConfigurationSetReputationOptionsRequestT = Model::PutConfigurationSetReputationOptionsRequest>
        Model::PutConfigurationSetReputationOptionsOutcomeCallable PutConfigurationSetReputationOptionsCallable(const PutConfigurationSetReputationOptionsRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::PutConfigurationSetReputationOptions, request);
        }

        /**
         * An Async wrapper for PutConfigurationSetReputationOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutConfigurationSetReputationOptionsRequestT = Model::PutConfigurationSetReputationOptionsRequest>
        void PutConfigurationSetReputationOptionsAsync(const PutConfigurationSetReputationOptionsRequestT& request, const PutConfigurationSetReputationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::PutConfigurationSetReputationOptions, request, handler, context);
        }

        /**
         * <p>Enable or disable email sending for messages that use a particular
         * configuration set in a specific Amazon Web Services Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetSendingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationSetSendingOptionsOutcome PutConfigurationSetSendingOptions(const Model::PutConfigurationSetSendingOptionsRequest& request) const;

        /**
         * A Callable wrapper for PutConfigurationSetSendingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutConfigurationSetSendingOptionsRequestT = Model::PutConfigurationSetSendingOptionsRequest>
        Model::PutConfigurationSetSendingOptionsOutcomeCallable PutConfigurationSetSendingOptionsCallable(const PutConfigurationSetSendingOptionsRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::PutConfigurationSetSendingOptions, request);
        }

        /**
         * An Async wrapper for PutConfigurationSetSendingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutConfigurationSetSendingOptionsRequestT = Model::PutConfigurationSetSendingOptionsRequest>
        void PutConfigurationSetSendingOptionsAsync(const PutConfigurationSetSendingOptionsRequestT& request, const PutConfigurationSetSendingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::PutConfigurationSetSendingOptions, request, handler, context);
        }

        /**
         * <p>Specify the account suppression list preferences for a configuration
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetSuppressionOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationSetSuppressionOptionsOutcome PutConfigurationSetSuppressionOptions(const Model::PutConfigurationSetSuppressionOptionsRequest& request) const;

        /**
         * A Callable wrapper for PutConfigurationSetSuppressionOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutConfigurationSetSuppressionOptionsRequestT = Model::PutConfigurationSetSuppressionOptionsRequest>
        Model::PutConfigurationSetSuppressionOptionsOutcomeCallable PutConfigurationSetSuppressionOptionsCallable(const PutConfigurationSetSuppressionOptionsRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::PutConfigurationSetSuppressionOptions, request);
        }

        /**
         * An Async wrapper for PutConfigurationSetSuppressionOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutConfigurationSetSuppressionOptionsRequestT = Model::PutConfigurationSetSuppressionOptionsRequest>
        void PutConfigurationSetSuppressionOptionsAsync(const PutConfigurationSetSuppressionOptionsRequestT& request, const PutConfigurationSetSuppressionOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::PutConfigurationSetSuppressionOptions, request, handler, context);
        }

        /**
         * <p>Specify a custom domain to use for open and click tracking elements in email
         * that you send.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetTrackingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationSetTrackingOptionsOutcome PutConfigurationSetTrackingOptions(const Model::PutConfigurationSetTrackingOptionsRequest& request) const;

        /**
         * A Callable wrapper for PutConfigurationSetTrackingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutConfigurationSetTrackingOptionsRequestT = Model::PutConfigurationSetTrackingOptionsRequest>
        Model::PutConfigurationSetTrackingOptionsOutcomeCallable PutConfigurationSetTrackingOptionsCallable(const PutConfigurationSetTrackingOptionsRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::PutConfigurationSetTrackingOptions, request);
        }

        /**
         * An Async wrapper for PutConfigurationSetTrackingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutConfigurationSetTrackingOptionsRequestT = Model::PutConfigurationSetTrackingOptionsRequest>
        void PutConfigurationSetTrackingOptionsAsync(const PutConfigurationSetTrackingOptionsRequestT& request, const PutConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::PutConfigurationSetTrackingOptions, request, handler, context);
        }

        /**
         * <p>Specify VDM preferences for email that you send using the configuration
         * set.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetVdmOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationSetVdmOptionsOutcome PutConfigurationSetVdmOptions(const Model::PutConfigurationSetVdmOptionsRequest& request) const;

        /**
         * A Callable wrapper for PutConfigurationSetVdmOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutConfigurationSetVdmOptionsRequestT = Model::PutConfigurationSetVdmOptionsRequest>
        Model::PutConfigurationSetVdmOptionsOutcomeCallable PutConfigurationSetVdmOptionsCallable(const PutConfigurationSetVdmOptionsRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::PutConfigurationSetVdmOptions, request);
        }

        /**
         * An Async wrapper for PutConfigurationSetVdmOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutConfigurationSetVdmOptionsRequestT = Model::PutConfigurationSetVdmOptionsRequest>
        void PutConfigurationSetVdmOptionsAsync(const PutConfigurationSetVdmOptionsRequestT& request, const PutConfigurationSetVdmOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::PutConfigurationSetVdmOptions, request, handler, context);
        }

        /**
         * <p>Move a dedicated IP address to an existing dedicated IP pool.</p> 
         * <p>The dedicated IP address that you specify must already exist, and must be
         * associated with your Amazon Web Services account. </p> <p>The dedicated IP pool
         * you specify must already exist. You can create a new pool by using the
         * <code>CreateDedicatedIpPool</code> operation.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutDedicatedIpInPool">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDedicatedIpInPoolOutcome PutDedicatedIpInPool(const Model::PutDedicatedIpInPoolRequest& request) const;

        /**
         * A Callable wrapper for PutDedicatedIpInPool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutDedicatedIpInPoolRequestT = Model::PutDedicatedIpInPoolRequest>
        Model::PutDedicatedIpInPoolOutcomeCallable PutDedicatedIpInPoolCallable(const PutDedicatedIpInPoolRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::PutDedicatedIpInPool, request);
        }

        /**
         * An Async wrapper for PutDedicatedIpInPool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutDedicatedIpInPoolRequestT = Model::PutDedicatedIpInPoolRequest>
        void PutDedicatedIpInPoolAsync(const PutDedicatedIpInPoolRequestT& request, const PutDedicatedIpInPoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::PutDedicatedIpInPool, request, handler, context);
        }

        /**
         * <p>Used to convert a dedicated IP pool to a different scaling mode.</p> 
         * <p> <code>MANAGED</code> pools cannot be converted to <code>STANDARD</code>
         * scaling mode.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutDedicatedIpPoolScalingAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDedicatedIpPoolScalingAttributesOutcome PutDedicatedIpPoolScalingAttributes(const Model::PutDedicatedIpPoolScalingAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutDedicatedIpPoolScalingAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutDedicatedIpPoolScalingAttributesRequestT = Model::PutDedicatedIpPoolScalingAttributesRequest>
        Model::PutDedicatedIpPoolScalingAttributesOutcomeCallable PutDedicatedIpPoolScalingAttributesCallable(const PutDedicatedIpPoolScalingAttributesRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::PutDedicatedIpPoolScalingAttributes, request);
        }

        /**
         * An Async wrapper for PutDedicatedIpPoolScalingAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutDedicatedIpPoolScalingAttributesRequestT = Model::PutDedicatedIpPoolScalingAttributesRequest>
        void PutDedicatedIpPoolScalingAttributesAsync(const PutDedicatedIpPoolScalingAttributesRequestT& request, const PutDedicatedIpPoolScalingAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::PutDedicatedIpPoolScalingAttributes, request, handler, context);
        }

        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutDedicatedIpWarmupAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDedicatedIpWarmupAttributesOutcome PutDedicatedIpWarmupAttributes(const Model::PutDedicatedIpWarmupAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutDedicatedIpWarmupAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutDedicatedIpWarmupAttributesRequestT = Model::PutDedicatedIpWarmupAttributesRequest>
        Model::PutDedicatedIpWarmupAttributesOutcomeCallable PutDedicatedIpWarmupAttributesCallable(const PutDedicatedIpWarmupAttributesRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::PutDedicatedIpWarmupAttributes, request);
        }

        /**
         * An Async wrapper for PutDedicatedIpWarmupAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutDedicatedIpWarmupAttributesRequestT = Model::PutDedicatedIpWarmupAttributesRequest>
        void PutDedicatedIpWarmupAttributesAsync(const PutDedicatedIpWarmupAttributesRequestT& request, const PutDedicatedIpWarmupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::PutDedicatedIpWarmupAttributes, request, handler, context);
        }

        /**
         * <p>Enable or disable the Deliverability dashboard. When you enable the
         * Deliverability dashboard, you gain access to reputation, deliverability, and
         * other metrics for the domains that you use to send email. You also gain the
         * ability to perform predictive inbox placement tests.</p> <p>When you use the
         * Deliverability dashboard, you pay a monthly subscription charge, in addition to
         * any other fees that you accrue by using Amazon SES and other Amazon Web Services
         * services. For more information about the features and cost of a Deliverability
         * dashboard subscription, see <a href="http://aws.amazon.com/ses/pricing/">Amazon
         * SES Pricing</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutDeliverabilityDashboardOption">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDeliverabilityDashboardOptionOutcome PutDeliverabilityDashboardOption(const Model::PutDeliverabilityDashboardOptionRequest& request) const;

        /**
         * A Callable wrapper for PutDeliverabilityDashboardOption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutDeliverabilityDashboardOptionRequestT = Model::PutDeliverabilityDashboardOptionRequest>
        Model::PutDeliverabilityDashboardOptionOutcomeCallable PutDeliverabilityDashboardOptionCallable(const PutDeliverabilityDashboardOptionRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::PutDeliverabilityDashboardOption, request);
        }

        /**
         * An Async wrapper for PutDeliverabilityDashboardOption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutDeliverabilityDashboardOptionRequestT = Model::PutDeliverabilityDashboardOptionRequest>
        void PutDeliverabilityDashboardOptionAsync(const PutDeliverabilityDashboardOptionRequestT& request, const PutDeliverabilityDashboardOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::PutDeliverabilityDashboardOption, request, handler, context);
        }

        /**
         * <p>Used to associate a configuration set with an email identity.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityConfigurationSetAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEmailIdentityConfigurationSetAttributesOutcome PutEmailIdentityConfigurationSetAttributes(const Model::PutEmailIdentityConfigurationSetAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutEmailIdentityConfigurationSetAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutEmailIdentityConfigurationSetAttributesRequestT = Model::PutEmailIdentityConfigurationSetAttributesRequest>
        Model::PutEmailIdentityConfigurationSetAttributesOutcomeCallable PutEmailIdentityConfigurationSetAttributesCallable(const PutEmailIdentityConfigurationSetAttributesRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::PutEmailIdentityConfigurationSetAttributes, request);
        }

        /**
         * An Async wrapper for PutEmailIdentityConfigurationSetAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutEmailIdentityConfigurationSetAttributesRequestT = Model::PutEmailIdentityConfigurationSetAttributesRequest>
        void PutEmailIdentityConfigurationSetAttributesAsync(const PutEmailIdentityConfigurationSetAttributesRequestT& request, const PutEmailIdentityConfigurationSetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::PutEmailIdentityConfigurationSetAttributes, request, handler, context);
        }

        /**
         * <p>Used to enable or disable DKIM authentication for an email
         * identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityDkimAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEmailIdentityDkimAttributesOutcome PutEmailIdentityDkimAttributes(const Model::PutEmailIdentityDkimAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutEmailIdentityDkimAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutEmailIdentityDkimAttributesRequestT = Model::PutEmailIdentityDkimAttributesRequest>
        Model::PutEmailIdentityDkimAttributesOutcomeCallable PutEmailIdentityDkimAttributesCallable(const PutEmailIdentityDkimAttributesRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::PutEmailIdentityDkimAttributes, request);
        }

        /**
         * An Async wrapper for PutEmailIdentityDkimAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutEmailIdentityDkimAttributesRequestT = Model::PutEmailIdentityDkimAttributesRequest>
        void PutEmailIdentityDkimAttributesAsync(const PutEmailIdentityDkimAttributesRequestT& request, const PutEmailIdentityDkimAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::PutEmailIdentityDkimAttributes, request, handler, context);
        }

        /**
         * <p>Used to configure or change the DKIM authentication settings for an email
         * domain identity. You can use this operation to do any of the following:</p> <ul>
         * <li> <p>Update the signing attributes for an identity that uses Bring Your Own
         * DKIM (BYODKIM).</p> </li> <li> <p>Update the key length that should be used for
         * Easy DKIM.</p> </li> <li> <p>Change from using no DKIM authentication to using
         * Easy DKIM.</p> </li> <li> <p>Change from using no DKIM authentication to using
         * BYODKIM.</p> </li> <li> <p>Change from using Easy DKIM to using BYODKIM.</p>
         * </li> <li> <p>Change from using BYODKIM to using Easy DKIM.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityDkimSigningAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEmailIdentityDkimSigningAttributesOutcome PutEmailIdentityDkimSigningAttributes(const Model::PutEmailIdentityDkimSigningAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutEmailIdentityDkimSigningAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutEmailIdentityDkimSigningAttributesRequestT = Model::PutEmailIdentityDkimSigningAttributesRequest>
        Model::PutEmailIdentityDkimSigningAttributesOutcomeCallable PutEmailIdentityDkimSigningAttributesCallable(const PutEmailIdentityDkimSigningAttributesRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::PutEmailIdentityDkimSigningAttributes, request);
        }

        /**
         * An Async wrapper for PutEmailIdentityDkimSigningAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutEmailIdentityDkimSigningAttributesRequestT = Model::PutEmailIdentityDkimSigningAttributesRequest>
        void PutEmailIdentityDkimSigningAttributesAsync(const PutEmailIdentityDkimSigningAttributesRequestT& request, const PutEmailIdentityDkimSigningAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::PutEmailIdentityDkimSigningAttributes, request, handler, context);
        }

        /**
         * <p>Used to enable or disable feedback forwarding for an identity. This setting
         * determines what happens when an identity is used to send an email that results
         * in a bounce or complaint event.</p> <p>If the value is <code>true</code>, you
         * receive email notifications when bounce or complaint events occur. These
         * notifications are sent to the address that you specified in the
         * <code>Return-Path</code> header of the original email.</p> <p>You're required to
         * have a method of tracking bounces and complaints. If you haven't set up another
         * mechanism for receiving bounce or complaint notifications (for example, by
         * setting up an event destination), you receive an email notification when these
         * events occur (even if this setting is disabled).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityFeedbackAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEmailIdentityFeedbackAttributesOutcome PutEmailIdentityFeedbackAttributes(const Model::PutEmailIdentityFeedbackAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutEmailIdentityFeedbackAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutEmailIdentityFeedbackAttributesRequestT = Model::PutEmailIdentityFeedbackAttributesRequest>
        Model::PutEmailIdentityFeedbackAttributesOutcomeCallable PutEmailIdentityFeedbackAttributesCallable(const PutEmailIdentityFeedbackAttributesRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::PutEmailIdentityFeedbackAttributes, request);
        }

        /**
         * An Async wrapper for PutEmailIdentityFeedbackAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutEmailIdentityFeedbackAttributesRequestT = Model::PutEmailIdentityFeedbackAttributesRequest>
        void PutEmailIdentityFeedbackAttributesAsync(const PutEmailIdentityFeedbackAttributesRequestT& request, const PutEmailIdentityFeedbackAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::PutEmailIdentityFeedbackAttributes, request, handler, context);
        }

        /**
         * <p>Used to enable or disable the custom Mail-From domain configuration for an
         * email identity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityMailFromAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEmailIdentityMailFromAttributesOutcome PutEmailIdentityMailFromAttributes(const Model::PutEmailIdentityMailFromAttributesRequest& request) const;

        /**
         * A Callable wrapper for PutEmailIdentityMailFromAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutEmailIdentityMailFromAttributesRequestT = Model::PutEmailIdentityMailFromAttributesRequest>
        Model::PutEmailIdentityMailFromAttributesOutcomeCallable PutEmailIdentityMailFromAttributesCallable(const PutEmailIdentityMailFromAttributesRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::PutEmailIdentityMailFromAttributes, request);
        }

        /**
         * An Async wrapper for PutEmailIdentityMailFromAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutEmailIdentityMailFromAttributesRequestT = Model::PutEmailIdentityMailFromAttributesRequest>
        void PutEmailIdentityMailFromAttributesAsync(const PutEmailIdentityMailFromAttributesRequestT& request, const PutEmailIdentityMailFromAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::PutEmailIdentityMailFromAttributes, request, handler, context);
        }

        /**
         * <p>Adds an email address to the suppression list for your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutSuppressedDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSuppressedDestinationOutcome PutSuppressedDestination(const Model::PutSuppressedDestinationRequest& request) const;

        /**
         * A Callable wrapper for PutSuppressedDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutSuppressedDestinationRequestT = Model::PutSuppressedDestinationRequest>
        Model::PutSuppressedDestinationOutcomeCallable PutSuppressedDestinationCallable(const PutSuppressedDestinationRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::PutSuppressedDestination, request);
        }

        /**
         * An Async wrapper for PutSuppressedDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutSuppressedDestinationRequestT = Model::PutSuppressedDestinationRequest>
        void PutSuppressedDestinationAsync(const PutSuppressedDestinationRequestT& request, const PutSuppressedDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::PutSuppressedDestination, request, handler, context);
        }

        /**
         * <p>Composes an email message to multiple destinations.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendBulkEmail">AWS
         * API Reference</a></p>
         */
        virtual Model::SendBulkEmailOutcome SendBulkEmail(const Model::SendBulkEmailRequest& request) const;

        /**
         * A Callable wrapper for SendBulkEmail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendBulkEmailRequestT = Model::SendBulkEmailRequest>
        Model::SendBulkEmailOutcomeCallable SendBulkEmailCallable(const SendBulkEmailRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::SendBulkEmail, request);
        }

        /**
         * An Async wrapper for SendBulkEmail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendBulkEmailRequestT = Model::SendBulkEmailRequest>
        void SendBulkEmailAsync(const SendBulkEmailRequestT& request, const SendBulkEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::SendBulkEmail, request, handler, context);
        }

        /**
         * <p>Adds an email address to the list of identities for your Amazon SES account
         * in the current Amazon Web Services Region and attempts to verify it. As a result
         * of executing this operation, a customized verification email is sent to the
         * specified address.</p> <p>To use this operation, you must first create a custom
         * verification email template. For more information about creating and using
         * custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html#send-email-verify-address-custom">Using
         * custom verification email templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendCustomVerificationEmail">AWS
         * API Reference</a></p>
         */
        virtual Model::SendCustomVerificationEmailOutcome SendCustomVerificationEmail(const Model::SendCustomVerificationEmailRequest& request) const;

        /**
         * A Callable wrapper for SendCustomVerificationEmail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendCustomVerificationEmailRequestT = Model::SendCustomVerificationEmailRequest>
        Model::SendCustomVerificationEmailOutcomeCallable SendCustomVerificationEmailCallable(const SendCustomVerificationEmailRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::SendCustomVerificationEmail, request);
        }

        /**
         * An Async wrapper for SendCustomVerificationEmail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendCustomVerificationEmailRequestT = Model::SendCustomVerificationEmailRequest>
        void SendCustomVerificationEmailAsync(const SendCustomVerificationEmailRequestT& request, const SendCustomVerificationEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::SendCustomVerificationEmail, request, handler, context);
        }

        /**
         * <p>Sends an email message. You can use the Amazon SES API v2 to send the
         * following types of messages:</p> <ul> <li> <p> <b>Simple</b> – A standard email
         * message. When you create this type of message, you specify the sender, the
         * recipient, and the message body, and Amazon SES assembles the message for
         * you.</p> </li> <li> <p> <b>Raw</b> – A raw, MIME-formatted email message. When
         * you send this type of email, you have to specify all of the message headers, as
         * well as the message body. You can use this message type to send messages that
         * contain attachments. The message that you specify has to be a valid MIME
         * message.</p> </li> <li> <p> <b>Templated</b> – A message that contains
         * personalization tags. When you send this type of email, Amazon SES API v2
         * automatically replaces the tags with values that you specify.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SendEmail">AWS API
         * Reference</a></p>
         */
        virtual Model::SendEmailOutcome SendEmail(const Model::SendEmailRequest& request) const;

        /**
         * A Callable wrapper for SendEmail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendEmailRequestT = Model::SendEmailRequest>
        Model::SendEmailOutcomeCallable SendEmailCallable(const SendEmailRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::SendEmail, request);
        }

        /**
         * An Async wrapper for SendEmail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendEmailRequestT = Model::SendEmailRequest>
        void SendEmailAsync(const SendEmailRequestT& request, const SendEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::SendEmail, request, handler, context);
        }

        /**
         * <p>Add one or more tags (keys and values) to a specified resource. A
         * <i>tag</i> is a label that you optionally define and associate with a resource.
         * Tags can help you categorize and manage resources in different ways, such as by
         * purpose, owner, environment, or other criteria. A resource can have as many as
         * 50 tags.</p> <p>Each tag consists of a required <i>tag key</i> and an
         * associated <i>tag value</i>, both of which you define. A tag key is a general
         * label that acts as a category for more specific tag values. A tag value acts as
         * a descriptor within a tag key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::TagResource, request, handler, context);
        }

        /**
         * <p>Creates a preview of the MIME content of an email when provided with a
         * template and a set of replacement data.</p> <p>You can execute this operation no
         * more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/TestRenderEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::TestRenderEmailTemplateOutcome TestRenderEmailTemplate(const Model::TestRenderEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for TestRenderEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TestRenderEmailTemplateRequestT = Model::TestRenderEmailTemplateRequest>
        Model::TestRenderEmailTemplateOutcomeCallable TestRenderEmailTemplateCallable(const TestRenderEmailTemplateRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::TestRenderEmailTemplate, request);
        }

        /**
         * An Async wrapper for TestRenderEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestRenderEmailTemplateRequestT = Model::TestRenderEmailTemplateRequest>
        void TestRenderEmailTemplateAsync(const TestRenderEmailTemplateRequestT& request, const TestRenderEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::TestRenderEmailTemplate, request, handler, context);
        }

        /**
         * <p>Remove one or more tags (keys and values) from a specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::UntagResource, request, handler, context);
        }

        /**
         * <p>Update the configuration of an event destination for a configuration set.</p>
         * <p> <i>Events</i> include message sends, deliveries, opens, clicks, bounces, and
         * complaints. <i>Event destinations</i> are places that you can send information
         * about these events to. For example, you can send event data to Amazon
         * EventBridge and associate a rule to send the event to the specified
         * target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationSetEventDestinationOutcome UpdateConfigurationSetEventDestination(const Model::UpdateConfigurationSetEventDestinationRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfigurationSetEventDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConfigurationSetEventDestinationRequestT = Model::UpdateConfigurationSetEventDestinationRequest>
        Model::UpdateConfigurationSetEventDestinationOutcomeCallable UpdateConfigurationSetEventDestinationCallable(const UpdateConfigurationSetEventDestinationRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::UpdateConfigurationSetEventDestination, request);
        }

        /**
         * An Async wrapper for UpdateConfigurationSetEventDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConfigurationSetEventDestinationRequestT = Model::UpdateConfigurationSetEventDestinationRequest>
        void UpdateConfigurationSetEventDestinationAsync(const UpdateConfigurationSetEventDestinationRequestT& request, const UpdateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::UpdateConfigurationSetEventDestination, request, handler, context);
        }

        /**
         * <p>Updates a contact's preferences for a list.</p>  <p>You must specify
         * all existing topic preferences in the <code>TopicPreferences</code> object, not
         * just the ones that need updating; otherwise, all your existing preferences will
         * be removed.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactOutcome UpdateContact(const Model::UpdateContactRequest& request) const;

        /**
         * A Callable wrapper for UpdateContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContactRequestT = Model::UpdateContactRequest>
        Model::UpdateContactOutcomeCallable UpdateContactCallable(const UpdateContactRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::UpdateContact, request);
        }

        /**
         * An Async wrapper for UpdateContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContactRequestT = Model::UpdateContactRequest>
        void UpdateContactAsync(const UpdateContactRequestT& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::UpdateContact, request, handler, context);
        }

        /**
         * <p>Updates contact list metadata. This operation does a complete
         * replacement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateContactList">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactListOutcome UpdateContactList(const Model::UpdateContactListRequest& request) const;

        /**
         * A Callable wrapper for UpdateContactList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContactListRequestT = Model::UpdateContactListRequest>
        Model::UpdateContactListOutcomeCallable UpdateContactListCallable(const UpdateContactListRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::UpdateContactList, request);
        }

        /**
         * An Async wrapper for UpdateContactList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContactListRequestT = Model::UpdateContactListRequest>
        void UpdateContactListAsync(const UpdateContactListRequestT& request, const UpdateContactListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::UpdateContactList, request, handler, context);
        }

        /**
         * <p>Updates an existing custom verification email template.</p> <p>For more
         * information about custom verification email templates, see <a
         * href="https://docs.aws.amazon.com/ses/latest/dg/creating-identities.html#send-email-verify-address-custom">Using
         * custom verification email templates</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per
         * second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateCustomVerificationEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCustomVerificationEmailTemplateOutcome UpdateCustomVerificationEmailTemplate(const Model::UpdateCustomVerificationEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateCustomVerificationEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCustomVerificationEmailTemplateRequestT = Model::UpdateCustomVerificationEmailTemplateRequest>
        Model::UpdateCustomVerificationEmailTemplateOutcomeCallable UpdateCustomVerificationEmailTemplateCallable(const UpdateCustomVerificationEmailTemplateRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::UpdateCustomVerificationEmailTemplate, request);
        }

        /**
         * An Async wrapper for UpdateCustomVerificationEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCustomVerificationEmailTemplateRequestT = Model::UpdateCustomVerificationEmailTemplateRequest>
        void UpdateCustomVerificationEmailTemplateAsync(const UpdateCustomVerificationEmailTemplateRequestT& request, const UpdateCustomVerificationEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::UpdateCustomVerificationEmailTemplate, request, handler, context);
        }

        /**
         * <p>Updates the specified sending authorization policy for the given identity (an
         * email address or a domain). This API returns successfully even if a policy with
         * the specified name does not exist.</p>  <p>This API is for the identity
         * owner only. If you have not verified the identity, this API will return an
         * error.</p>  <p>Sending authorization is a feature that enables an
         * identity owner to authorize other senders to use its identities. For information
         * about using sending authorization, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateEmailIdentityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEmailIdentityPolicyOutcome UpdateEmailIdentityPolicy(const Model::UpdateEmailIdentityPolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateEmailIdentityPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEmailIdentityPolicyRequestT = Model::UpdateEmailIdentityPolicyRequest>
        Model::UpdateEmailIdentityPolicyOutcomeCallable UpdateEmailIdentityPolicyCallable(const UpdateEmailIdentityPolicyRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::UpdateEmailIdentityPolicy, request);
        }

        /**
         * An Async wrapper for UpdateEmailIdentityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEmailIdentityPolicyRequestT = Model::UpdateEmailIdentityPolicyRequest>
        void UpdateEmailIdentityPolicyAsync(const UpdateEmailIdentityPolicyRequestT& request, const UpdateEmailIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::UpdateEmailIdentityPolicy, request, handler, context);
        }

        /**
         * <p>Updates an email template. Email templates enable you to send personalized
         * email to one or more destinations in a single API operation. For more
         * information, see the <a
         * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon
         * SES Developer Guide</a>.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateEmailTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEmailTemplateOutcome UpdateEmailTemplate(const Model::UpdateEmailTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateEmailTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEmailTemplateRequestT = Model::UpdateEmailTemplateRequest>
        Model::UpdateEmailTemplateOutcomeCallable UpdateEmailTemplateCallable(const UpdateEmailTemplateRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::UpdateEmailTemplate, request);
        }

        /**
         * An Async wrapper for UpdateEmailTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEmailTemplateRequestT = Model::UpdateEmailTemplateRequest>
        void UpdateEmailTemplateAsync(const UpdateEmailTemplateRequestT& request, const UpdateEmailTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::UpdateEmailTemplate, request, handler, context);
        }

        /**
         * <p>Update the customer-managed sending status for a reputation entity. This
         * allows you to enable, disable, or reinstate sending for the entity.</p> <p>The
         * customer-managed status works in conjunction with the Amazon Web Services Amazon
         * SES-managed status to determine the overall sending capability. When you update
         * the customer-managed status, the Amazon Web Services Amazon SES-managed status
         * remains unchanged. If Amazon Web Services Amazon SES has disabled the entity, it
         * will not be allowed to send regardless of the customer-managed status setting.
         * When you reinstate an entity through the customer-managed status, it can
         * continue sending only if the Amazon Web Services Amazon SES-managed status also
         * permits sending, even if there are active reputation findings, until the
         * findings are resolved or new violations occur.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateReputationEntityCustomerManagedStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReputationEntityCustomerManagedStatusOutcome UpdateReputationEntityCustomerManagedStatus(const Model::UpdateReputationEntityCustomerManagedStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateReputationEntityCustomerManagedStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateReputationEntityCustomerManagedStatusRequestT = Model::UpdateReputationEntityCustomerManagedStatusRequest>
        Model::UpdateReputationEntityCustomerManagedStatusOutcomeCallable UpdateReputationEntityCustomerManagedStatusCallable(const UpdateReputationEntityCustomerManagedStatusRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::UpdateReputationEntityCustomerManagedStatus, request);
        }

        /**
         * An Async wrapper for UpdateReputationEntityCustomerManagedStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateReputationEntityCustomerManagedStatusRequestT = Model::UpdateReputationEntityCustomerManagedStatusRequest>
        void UpdateReputationEntityCustomerManagedStatusAsync(const UpdateReputationEntityCustomerManagedStatusRequestT& request, const UpdateReputationEntityCustomerManagedStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::UpdateReputationEntityCustomerManagedStatus, request, handler, context);
        }

        /**
         * <p>Update the reputation management policy for a reputation entity. The policy
         * determines how the entity responds to reputation findings, such as automatically
         * pausing sending when certain thresholds are exceeded.</p> <p>Reputation
         * management policies are Amazon Web Services Amazon SES-managed (predefined
         * policies). You can select from none, standard, and strict
         * policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateReputationEntityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReputationEntityPolicyOutcome UpdateReputationEntityPolicy(const Model::UpdateReputationEntityPolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateReputationEntityPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateReputationEntityPolicyRequestT = Model::UpdateReputationEntityPolicyRequest>
        Model::UpdateReputationEntityPolicyOutcomeCallable UpdateReputationEntityPolicyCallable(const UpdateReputationEntityPolicyRequestT& request) const
        {
            return SubmitCallable(&SESV2Client::UpdateReputationEntityPolicy, request);
        }

        /**
         * An Async wrapper for UpdateReputationEntityPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateReputationEntityPolicyRequestT = Model::UpdateReputationEntityPolicyRequest>
        void UpdateReputationEntityPolicyAsync(const UpdateReputationEntityPolicyRequestT& request, const UpdateReputationEntityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SESV2Client::UpdateReputationEntityPolicy, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SESV2EndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SESV2Client>;
      void init(const SESV2ClientConfiguration& clientConfiguration);

      SESV2ClientConfiguration m_clientConfiguration;
      std::shared_ptr<SESV2EndpointProviderBase> m_endpointProvider;
  };

} // namespace SESV2
} // namespace Aws
