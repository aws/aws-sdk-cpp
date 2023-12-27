﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/organizations/OrganizationsServiceClientModel.h>
#include <aws/organizations/model/LeaveOrganizationRequest.h>
#include <aws/organizations/model/DescribeResourcePolicyRequest.h>
#include <aws/organizations/model/DeleteResourcePolicyRequest.h>
#include <aws/organizations/model/DescribeOrganizationRequest.h>
#include <aws/organizations/model/DeleteOrganizationRequest.h>

namespace Aws
{
namespace Organizations
{
  /**
   * <p>Organizations is a web service that enables you to consolidate your multiple
   * Amazon Web Services accounts into an <i>organization</i> and centrally manage
   * your accounts and their resources.</p> <p>This guide provides descriptions of
   * the Organizations operations. For more information about using this service, see
   * the <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">Organizations
   * User Guide</a>.</p> <p> <b>Support and feedback for Organizations</b> </p> <p>We
   * welcome your feedback. Send your comments to <a
   * href="mailto:feedback-awsorganizations@amazon.com">feedback-awsorganizations@amazon.com</a>
   * or post your feedback and questions in the <a
   * href="http://forums.aws.amazon.com/forum.jspa?forumID=219">Organizations support
   * forum</a>. For more information about the Amazon Web Services support forums,
   * see <a href="http://forums.aws.amazon.com/help.jspa">Forums Help</a>.</p> <p>
   * <b>Endpoint to call When using the CLI or the Amazon Web Services SDK</b> </p>
   * <p>For the current release of Organizations, specify the <code>us-east-1</code>
   * region for all Amazon Web Services API and CLI calls made from the commercial
   * Amazon Web Services Regions outside of China. If calling from one of the Amazon
   * Web Services Regions in China, then specify <code>cn-northwest-1</code>. You can
   * do this in the CLI by using these parameters and commands:</p> <ul> <li> <p>Use
   * the following parameter with each command to specify both the endpoint and its
   * region:</p> <p> <code>--endpoint-url
   * https://organizations.us-east-1.amazonaws.com</code> <i>(from commercial Amazon
   * Web Services Regions outside of China)</i> </p> <p>or</p> <p>
   * <code>--endpoint-url
   * https://organizations.cn-northwest-1.amazonaws.com.cn</code> <i>(from Amazon Web
   * Services Regions in China)</i> </p> </li> <li> <p>Use the default endpoint, but
   * configure your default region with this command:</p> <p> <code>aws configure set
   * default.region us-east-1</code> <i>(from commercial Amazon Web Services Regions
   * outside of China)</i> </p> <p>or</p> <p> <code>aws configure set default.region
   * cn-northwest-1</code> <i>(from Amazon Web Services Regions in China)</i> </p>
   * </li> <li> <p>Use the following parameter with each command to specify the
   * endpoint:</p> <p> <code>--region us-east-1</code> <i>(from commercial Amazon Web
   * Services Regions outside of China)</i> </p> <p>or</p> <p> <code>--region
   * cn-northwest-1</code> <i>(from Amazon Web Services Regions in China)</i> </p>
   * </li> </ul> <p> <b>Recording API Requests</b> </p> <p>Organizations supports
   * CloudTrail, a service that records Amazon Web Services API calls for your Amazon
   * Web Services account and delivers log files to an Amazon S3 bucket. By using
   * information collected by CloudTrail, you can determine which requests the
   * Organizations service received, who made the request and when, and so on. For
   * more about Organizations and its support for CloudTrail, see <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_incident-response.html#orgs_cloudtrail-integration">Logging
   * Organizations API calls with CloudTrail</a> in the <i>Organizations User
   * Guide</i>. To learn more about CloudTrail, including how to turn it on and find
   * your log files, see the <a
   * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">CloudTrail
   * User Guide</a>.</p>
   */
  class AWS_ORGANIZATIONS_API OrganizationsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<OrganizationsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef OrganizationsClientConfiguration ClientConfigurationType;
      typedef OrganizationsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OrganizationsClient(const Aws::Organizations::OrganizationsClientConfiguration& clientConfiguration = Aws::Organizations::OrganizationsClientConfiguration(),
                            std::shared_ptr<OrganizationsEndpointProviderBase> endpointProvider = Aws::MakeShared<OrganizationsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OrganizationsClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<OrganizationsEndpointProviderBase> endpointProvider = Aws::MakeShared<OrganizationsEndpointProvider>(ALLOCATION_TAG),
                            const Aws::Organizations::OrganizationsClientConfiguration& clientConfiguration = Aws::Organizations::OrganizationsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OrganizationsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<OrganizationsEndpointProviderBase> endpointProvider = Aws::MakeShared<OrganizationsEndpointProvider>(ALLOCATION_TAG),
                            const Aws::Organizations::OrganizationsClientConfiguration& clientConfiguration = Aws::Organizations::OrganizationsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OrganizationsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OrganizationsClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OrganizationsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~OrganizationsClient();

        /**
         * <p>Sends a response to the originator of a handshake agreeing to the action
         * proposed by the handshake request.</p> <p>You can only call this operation by
         * the following principals when they also have the relevant IAM permissions:</p>
         * <ul> <li> <p> <b>Invitation to join</b> or <b>Approve all features request</b>
         * handshakes: only a principal from the member account.</p> <p>The user who calls
         * the API for an invitation to join must have the
         * <code>organizations:AcceptHandshake</code> permission. If you enabled all
         * features in the organization, the user must also have the
         * <code>iam:CreateServiceLinkedRole</code> permission so that Organizations can
         * create the required service-linked role named
         * <code>AWSServiceRoleForOrganizations</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integration_services.html#orgs_integrate_services-using_slrs">Organizations
         * and service-linked roles</a> in the <i>Organizations User Guide</i>.</p> </li>
         * <li> <p> <b>Enable all features final confirmation</b> handshake: only a
         * principal from the management account.</p> <p>For more information about
         * invitations, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_invites.html">Inviting
         * an Amazon Web Services account to join your organization</a> in the
         * <i>Organizations User Guide</i>. For more information about requests to enable
         * all features in the organization, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
         * all features in your organization</a> in the <i>Organizations User
         * Guide</i>.</p> </li> </ul> <p>After you accept a handshake, it continues to
         * appear in the results of relevant APIs for only 30 days. After that, it's
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/AcceptHandshake">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptHandshakeOutcome AcceptHandshake(const Model::AcceptHandshakeRequest& request) const;

        /**
         * A Callable wrapper for AcceptHandshake that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcceptHandshakeRequestT = Model::AcceptHandshakeRequest>
        Model::AcceptHandshakeOutcomeCallable AcceptHandshakeCallable(const AcceptHandshakeRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::AcceptHandshake, request);
        }

        /**
         * An Async wrapper for AcceptHandshake that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptHandshakeRequestT = Model::AcceptHandshakeRequest>
        void AcceptHandshakeAsync(const AcceptHandshakeRequestT& request, const AcceptHandshakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::AcceptHandshake, request, handler, context);
        }

        /**
         * <p>Attaches a policy to a root, an organizational unit (OU), or an individual
         * account. How the policy affects accounts depends on the type of policy. Refer to
         * the <i>Organizations User Guide</i> for information about each policy type:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">SERVICE_CONTROL_POLICY</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
         * </p> </li> </ul> <p>This operation can be called only from the organization's
         * management account or by a member account that is a delegated administrator for
         * an Amazon Web Services service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/AttachPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachPolicyOutcome AttachPolicy(const Model::AttachPolicyRequest& request) const;

        /**
         * A Callable wrapper for AttachPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AttachPolicyRequestT = Model::AttachPolicyRequest>
        Model::AttachPolicyOutcomeCallable AttachPolicyCallable(const AttachPolicyRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::AttachPolicy, request);
        }

        /**
         * An Async wrapper for AttachPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AttachPolicyRequestT = Model::AttachPolicyRequest>
        void AttachPolicyAsync(const AttachPolicyRequestT& request, const AttachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::AttachPolicy, request, handler, context);
        }

        /**
         * <p>Cancels a handshake. Canceling a handshake sets the handshake state to
         * <code>CANCELED</code>.</p> <p>This operation can be called only from the account
         * that originated the handshake. The recipient of the handshake can't cancel it,
         * but can use <a>DeclineHandshake</a> instead. After a handshake is canceled, the
         * recipient can no longer respond to that handshake.</p> <p>After you cancel a
         * handshake, it continues to appear in the results of relevant APIs for only 30
         * days. After that, it's deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CancelHandshake">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelHandshakeOutcome CancelHandshake(const Model::CancelHandshakeRequest& request) const;

        /**
         * A Callable wrapper for CancelHandshake that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelHandshakeRequestT = Model::CancelHandshakeRequest>
        Model::CancelHandshakeOutcomeCallable CancelHandshakeCallable(const CancelHandshakeRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::CancelHandshake, request);
        }

        /**
         * An Async wrapper for CancelHandshake that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelHandshakeRequestT = Model::CancelHandshakeRequest>
        void CancelHandshakeAsync(const CancelHandshakeRequestT& request, const CancelHandshakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::CancelHandshake, request, handler, context);
        }

        /**
         * <p>Closes an Amazon Web Services member account within an organization. You can
         * close an account when <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">all
         * features are enabled </a>. You can't close the management account with this API.
         * This is an asynchronous request that Amazon Web Services performs in the
         * background. Because <code>CloseAccount</code> operates asynchronously, it can
         * return a successful completion message even though account closure might still
         * be in progress. You need to wait a few minutes before the account is fully
         * closed. To check the status of the request, do one of the following:</p> <ul>
         * <li> <p>Use the <code>AccountId</code> that you sent in the
         * <code>CloseAccount</code> request to provide as a parameter to the
         * <a>DescribeAccount</a> operation. </p> <p>While the close account request is in
         * progress, Account status will indicate PENDING_CLOSURE. When the close account
         * request completes, the status will change to SUSPENDED. </p> </li> <li> <p>Check
         * the CloudTrail log for the <code>CloseAccountResult</code> event that gets
         * published after the account closes successfully. For information on using
         * CloudTrail with Organizations, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_security_incident-response.html#orgs_cloudtrail-integration">Logging
         * and monitoring in Organizations</a> in the <i>Organizations User Guide</i>.</p>
         * </li> </ul>  <ul> <li> <p>You can close only 10% of member accounts,
         * between 10 and 200, within a rolling 30 day period. This quota is not bound by a
         * calendar month, but starts when you close an account. After you reach this
         * limit, you can close additional accounts. For more information, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_close.html">Closing
         * a member account in your organization</a> in the <i>Organizations User
         * Guide</i>. </p> </li> <li> <p>To reinstate a closed account, contact Amazon Web
         * Services Support within the 90-day grace period while the account is in
         * SUSPENDED status. </p> </li> <li> <p>If the Amazon Web Services account you
         * attempt to close is linked to an Amazon Web Services GovCloud (US) account, the
         * <code>CloseAccount</code> request will close both accounts. To learn important
         * pre-closure details, see <a
         * href="https://docs.aws.amazon.com/govcloud-us/latest/UserGuide/Closing-govcloud-account.html">
         * Closing an Amazon Web Services GovCloud (US) account</a> in the <i> Amazon Web
         * Services GovCloud User Guide</i>.</p> </li> </ul> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CloseAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::CloseAccountOutcome CloseAccount(const Model::CloseAccountRequest& request) const;

        /**
         * A Callable wrapper for CloseAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CloseAccountRequestT = Model::CloseAccountRequest>
        Model::CloseAccountOutcomeCallable CloseAccountCallable(const CloseAccountRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::CloseAccount, request);
        }

        /**
         * An Async wrapper for CloseAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CloseAccountRequestT = Model::CloseAccountRequest>
        void CloseAccountAsync(const CloseAccountRequestT& request, const CloseAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::CloseAccount, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Web Services account that is automatically a member of the
         * organization whose credentials made the request. This is an asynchronous request
         * that Amazon Web Services performs in the background. Because
         * <code>CreateAccount</code> operates asynchronously, it can return a successful
         * completion message even though account initialization might still be in
         * progress. You might need to wait a few minutes before you can successfully
         * access the account. To check the status of the request, do one of the
         * following:</p> <ul> <li> <p>Use the <code>Id</code> value of the
         * <code>CreateAccountStatus</code> response element from this operation to provide
         * as a parameter to the <a>DescribeCreateAccountStatus</a> operation.</p> </li>
         * <li> <p>Check the CloudTrail log for the <code>CreateAccountResult</code> event.
         * For information on using CloudTrail with Organizations, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_security_incident-response.html#orgs_cloudtrail-integration">Logging
         * and monitoring in Organizations</a> in the <i>Organizations User Guide</i>.</p>
         * </li> </ul> <p>The user who calls the API to create an account must have the
         * <code>organizations:CreateAccount</code> permission. If you enabled all features
         * in the organization, Organizations creates the required service-linked role
         * named <code>AWSServiceRoleForOrganizations</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html#orgs_integrate_services-using_slrs">Organizations
         * and service-linked roles</a> in the <i>Organizations User Guide</i>.</p> <p>If
         * the request includes tags, then the requester must have the
         * <code>organizations:TagResource</code> permission.</p> <p>Organizations
         * preconfigures the new member account with a role (named
         * <code>OrganizationAccountAccessRole</code> by default) that grants users in the
         * management account administrator permissions in the new member account.
         * Principals in the management account can assume the role. Organizations clones
         * the company name and address information for the new account from the
         * organization's management account.</p> <p>This operation can be called only from
         * the organization's management account.</p> <p>For more information about
         * creating accounts, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_create.html">Creating
         * a member account in your organization</a> in the <i>Organizations User
         * Guide</i>.</p>  <ul> <li> <p>When you create an account in an
         * organization using the Organizations console, API, or CLI commands, the
         * information required for the account to operate as a standalone account, such as
         * a payment method and signing the end user license agreement (EULA) is <i>not</i>
         * automatically collected. If you must remove an account from your organization
         * later, you can do so only after you provide the missing information. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_account-before-remove.html">Considerations
         * before removing an account from an organization</a> in the <i>Organizations User
         * Guide</i>.</p> </li> <li> <p>If you get an exception that indicates that you
         * exceeded your account limits for the organization, contact <a
         * href="https://console.aws.amazon.com/support/home#/">Amazon Web Services
         * Support</a>.</p> </li> <li> <p>If you get an exception that indicates that the
         * operation failed because your organization is still initializing, wait one hour
         * and then try again. If the error persists, contact <a
         * href="https://console.aws.amazon.com/support/home#/">Amazon Web Services
         * Support</a>.</p> </li> <li> <p>Using <code>CreateAccount</code> to create
         * multiple temporary accounts isn't recommended. You can only close an account
         * from the Billing and Cost Management console, and you must be signed in as the
         * root user. For information on the requirements and process for closing an
         * account, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_close.html">Closing
         * a member account in your organization</a> in the <i>Organizations User
         * Guide</i>.</p> </li> </ul>   <p>When you create a member
         * account with this operation, you can choose whether to create the account with
         * the <b>IAM User and Role Access to Billing Information</b> switch enabled. If
         * you enable it, IAM users and roles that have appropriate permissions can view
         * billing information for the account. If you disable it, only the account root
         * user can access billing information. For information about how to disable this
         * switch for an account, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/control-access-billing.html#grantaccess">Granting
         * access to your billing information and tools</a>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccountOutcome CreateAccount(const Model::CreateAccountRequest& request) const;

        /**
         * A Callable wrapper for CreateAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAccountRequestT = Model::CreateAccountRequest>
        Model::CreateAccountOutcomeCallable CreateAccountCallable(const CreateAccountRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::CreateAccount, request);
        }

        /**
         * An Async wrapper for CreateAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAccountRequestT = Model::CreateAccountRequest>
        void CreateAccountAsync(const CreateAccountRequestT& request, const CreateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::CreateAccount, request, handler, context);
        }

        /**
         * <p>This action is available if all of the following are true:</p> <ul> <li>
         * <p>You're authorized to create accounts in the Amazon Web Services GovCloud (US)
         * Region. For more information on the Amazon Web Services GovCloud (US) Region,
         * see the <a
         * href="https://docs.aws.amazon.com/govcloud-us/latest/UserGuide/welcome.html">
         * <i>Amazon Web Services GovCloud User Guide</i>.</a> </p> </li> <li> <p>You
         * already have an account in the Amazon Web Services GovCloud (US) Region that is
         * paired with a management account of an organization in the commercial
         * Region.</p> </li> <li> <p>You call this action from the management account of
         * your organization in the commercial Region.</p> </li> <li> <p>You have the
         * <code>organizations:CreateGovCloudAccount</code> permission. </p> </li> </ul>
         * <p>Organizations automatically creates the required service-linked role named
         * <code>AWSServiceRoleForOrganizations</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html#orgs_integrate_services-using_slrs">Organizations
         * and service-linked roles</a> in the <i>Organizations User Guide</i>.</p>
         * <p>Amazon Web Services automatically enables CloudTrail for Amazon Web Services
         * GovCloud (US) accounts, but you should also do the following:</p> <ul> <li>
         * <p>Verify that CloudTrail is enabled to store logs.</p> </li> <li> <p>Create an
         * Amazon S3 bucket for CloudTrail log storage.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/govcloud-us/latest/UserGuide/verifying-cloudtrail.html">Verifying
         * CloudTrail Is Enabled</a> in the <i>Amazon Web Services GovCloud User Guide</i>.
         * </p> </li> </ul> <p>If the request includes tags, then the requester must have
         * the <code>organizations:TagResource</code> permission. The tags are attached to
         * the commercial account associated with the GovCloud account, rather than the
         * GovCloud account itself. To add tags to the GovCloud account, call the
         * <a>TagResource</a> operation in the GovCloud Region after the new GovCloud
         * account exists.</p> <p>You call this action from the management account of your
         * organization in the commercial Region to create a standalone Amazon Web Services
         * account in the Amazon Web Services GovCloud (US) Region. After the account is
         * created, the management account of an organization in the Amazon Web Services
         * GovCloud (US) Region can invite it to that organization. For more information on
         * inviting standalone accounts in the Amazon Web Services GovCloud (US) to join an
         * organization, see <a
         * href="https://docs.aws.amazon.com/govcloud-us/latest/UserGuide/govcloud-organizations.html">Organizations</a>
         * in the <i>Amazon Web Services GovCloud User Guide</i>.</p> <p>Calling
         * <code>CreateGovCloudAccount</code> is an asynchronous request that Amazon Web
         * Services performs in the background. Because <code>CreateGovCloudAccount</code>
         * operates asynchronously, it can return a successful completion message even
         * though account initialization might still be in progress. You might need to wait
         * a few minutes before you can successfully access the account. To check the
         * status of the request, do one of the following:</p> <ul> <li> <p>Use the
         * <code>OperationId</code> response element from this operation to provide as a
         * parameter to the <a>DescribeCreateAccountStatus</a> operation.</p> </li> <li>
         * <p>Check the CloudTrail log for the <code>CreateAccountResult</code> event. For
         * information on using CloudTrail with Organizations, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_security_incident-response.html">Logging
         * and monitoring in Organizations</a> in the <i>Organizations User Guide</i>.</p>
         * </li> </ul> <p/> <p>When you call the <code>CreateGovCloudAccount</code> action,
         * you create two accounts: a standalone account in the Amazon Web Services
         * GovCloud (US) Region and an associated account in the commercial Region for
         * billing and support purposes. The account in the commercial Region is
         * automatically a member of the organization whose credentials made the request.
         * Both accounts are associated with the same email address.</p> <p>A role is
         * created in the new account in the commercial Region that allows the management
         * account in the organization in the commercial Region to assume it. An Amazon Web
         * Services GovCloud (US) account is then created and associated with the
         * commercial account that you just created. A role is also created in the new
         * Amazon Web Services GovCloud (US) account that can be assumed by the Amazon Web
         * Services GovCloud (US) account that is associated with the management account of
         * the commercial organization. For more information and to view a diagram that
         * explains how account access works, see <a
         * href="https://docs.aws.amazon.com/govcloud-us/latest/UserGuide/govcloud-organizations.html">Organizations</a>
         * in the <i>Amazon Web Services GovCloud User Guide</i>.</p> <p>For more
         * information about creating accounts, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_create.html">Creating
         * a member account in your organization</a> in the <i>Organizations User
         * Guide</i>.</p>  <ul> <li> <p>When you create an account in an
         * organization using the Organizations console, API, or CLI commands, the
         * information required for the account to operate as a standalone account is
         * <i>not</i> automatically collected. This includes a payment method and signing
         * the end user license agreement (EULA). If you must remove an account from your
         * organization later, you can do so only after you provide the missing
         * information. For more information, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_account-before-remove.html">Considerations
         * before removing an account from an organization</a> in the <i>Organizations User
         * Guide</i>.</p> </li> <li> <p>If you get an exception that indicates that you
         * exceeded your account limits for the organization, contact <a
         * href="https://console.aws.amazon.com/support/home#/">Amazon Web Services
         * Support</a>.</p> </li> <li> <p>If you get an exception that indicates that the
         * operation failed because your organization is still initializing, wait one hour
         * and then try again. If the error persists, contact <a
         * href="https://console.aws.amazon.com/support/home#/">Amazon Web Services
         * Support</a>.</p> </li> <li> <p>Using <code>CreateGovCloudAccount</code> to
         * create multiple temporary accounts isn't recommended. You can only close an
         * account from the Amazon Web Services Billing and Cost Management console, and
         * you must be signed in as the root user. For information on the requirements and
         * process for closing an account, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_close.html">Closing
         * a member account in your organization</a> in the <i>Organizations User
         * Guide</i>.</p> </li> </ul>   <p>When you create a member
         * account with this operation, you can choose whether to create the account with
         * the <b>IAM User and Role Access to Billing Information</b> switch enabled. If
         * you enable it, IAM users and roles that have appropriate permissions can view
         * billing information for the account. If you disable it, only the account root
         * user can access billing information. For information about how to disable this
         * switch for an account, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html">Granting
         * access to your billing information and tools</a>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateGovCloudAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGovCloudAccountOutcome CreateGovCloudAccount(const Model::CreateGovCloudAccountRequest& request) const;

        /**
         * A Callable wrapper for CreateGovCloudAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGovCloudAccountRequestT = Model::CreateGovCloudAccountRequest>
        Model::CreateGovCloudAccountOutcomeCallable CreateGovCloudAccountCallable(const CreateGovCloudAccountRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::CreateGovCloudAccount, request);
        }

        /**
         * An Async wrapper for CreateGovCloudAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGovCloudAccountRequestT = Model::CreateGovCloudAccountRequest>
        void CreateGovCloudAccountAsync(const CreateGovCloudAccountRequestT& request, const CreateGovCloudAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::CreateGovCloudAccount, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Web Services organization. The account whose user is
         * calling the <code>CreateOrganization</code> operation automatically becomes the
         * <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#account">management
         * account</a> of the new organization.</p> <p>This operation must be called using
         * credentials from the account that is to become the new organization's management
         * account. The principal must also have the relevant IAM permissions.</p> <p>By
         * default (or if you set the <code>FeatureSet</code> parameter to
         * <code>ALL</code>), the new organization is created with all features enabled and
         * service control policies automatically enabled in the root. If you instead
         * choose to create the organization supporting only the consolidated billing
         * features by setting the <code>FeatureSet</code> parameter to
         * <code>CONSOLIDATED_BILLING</code>, no policy types are enabled by default and
         * you can't use organization policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOrganizationOutcome CreateOrganization(const Model::CreateOrganizationRequest& request) const;

        /**
         * A Callable wrapper for CreateOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOrganizationRequestT = Model::CreateOrganizationRequest>
        Model::CreateOrganizationOutcomeCallable CreateOrganizationCallable(const CreateOrganizationRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::CreateOrganization, request);
        }

        /**
         * An Async wrapper for CreateOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOrganizationRequestT = Model::CreateOrganizationRequest>
        void CreateOrganizationAsync(const CreateOrganizationRequestT& request, const CreateOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::CreateOrganization, request, handler, context);
        }

        /**
         * <p>Creates an organizational unit (OU) within a root or parent OU. An OU is a
         * container for accounts that enables you to organize your accounts to apply
         * policies according to your business requirements. The number of levels deep that
         * you can nest OUs is dependent upon the policy types enabled for that root. For
         * service control policies, the limit is five.</p> <p>For more information about
         * OUs, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_ous.html">Managing
         * organizational units (OUs)</a> in the <i>Organizations User Guide</i>.</p> <p>If
         * the request includes tags, then the requester must have the
         * <code>organizations:TagResource</code> permission.</p> <p>This operation can be
         * called only from the organization's management account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateOrganizationalUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOrganizationalUnitOutcome CreateOrganizationalUnit(const Model::CreateOrganizationalUnitRequest& request) const;

        /**
         * A Callable wrapper for CreateOrganizationalUnit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOrganizationalUnitRequestT = Model::CreateOrganizationalUnitRequest>
        Model::CreateOrganizationalUnitOutcomeCallable CreateOrganizationalUnitCallable(const CreateOrganizationalUnitRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::CreateOrganizationalUnit, request);
        }

        /**
         * An Async wrapper for CreateOrganizationalUnit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOrganizationalUnitRequestT = Model::CreateOrganizationalUnitRequest>
        void CreateOrganizationalUnitAsync(const CreateOrganizationalUnitRequestT& request, const CreateOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::CreateOrganizationalUnit, request, handler, context);
        }

        /**
         * <p>Creates a policy of a specified type that you can attach to a root, an
         * organizational unit (OU), or an individual Amazon Web Services account.</p>
         * <p>For more information about policies and their use, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies.html">Managing
         * Organizations policies</a>.</p> <p>If the request includes tags, then the
         * requester must have the <code>organizations:TagResource</code> permission.</p>
         * <p>This operation can be called only from the organization's management account
         * or by a member account that is a delegated administrator for an Amazon Web
         * Services service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreatePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePolicyOutcome CreatePolicy(const Model::CreatePolicyRequest& request) const;

        /**
         * A Callable wrapper for CreatePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePolicyRequestT = Model::CreatePolicyRequest>
        Model::CreatePolicyOutcomeCallable CreatePolicyCallable(const CreatePolicyRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::CreatePolicy, request);
        }

        /**
         * An Async wrapper for CreatePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePolicyRequestT = Model::CreatePolicyRequest>
        void CreatePolicyAsync(const CreatePolicyRequestT& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::CreatePolicy, request, handler, context);
        }

        /**
         * <p>Declines a handshake request. This sets the handshake state to
         * <code>DECLINED</code> and effectively deactivates the request.</p> <p>This
         * operation can be called only from the account that received the handshake. The
         * originator of the handshake can use <a>CancelHandshake</a> instead. The
         * originator can't reactivate a declined request, but can reinitiate the process
         * with a new handshake request.</p> <p>After you decline a handshake, it continues
         * to appear in the results of relevant APIs for only 30 days. After that, it's
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeclineHandshake">AWS
         * API Reference</a></p>
         */
        virtual Model::DeclineHandshakeOutcome DeclineHandshake(const Model::DeclineHandshakeRequest& request) const;

        /**
         * A Callable wrapper for DeclineHandshake that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeclineHandshakeRequestT = Model::DeclineHandshakeRequest>
        Model::DeclineHandshakeOutcomeCallable DeclineHandshakeCallable(const DeclineHandshakeRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::DeclineHandshake, request);
        }

        /**
         * An Async wrapper for DeclineHandshake that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeclineHandshakeRequestT = Model::DeclineHandshakeRequest>
        void DeclineHandshakeAsync(const DeclineHandshakeRequestT& request, const DeclineHandshakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::DeclineHandshake, request, handler, context);
        }

        /**
         * <p>Deletes the organization. You can delete an organization only by using
         * credentials from the management account. The organization must be empty of
         * member accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeleteOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOrganizationOutcome DeleteOrganization(const Model::DeleteOrganizationRequest& request = {}) const;

        /**
         * A Callable wrapper for DeleteOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOrganizationRequestT = Model::DeleteOrganizationRequest>
        Model::DeleteOrganizationOutcomeCallable DeleteOrganizationCallable(const DeleteOrganizationRequestT& request = {}) const
        {
            return SubmitCallable(&OrganizationsClient::DeleteOrganization, request);
        }

        /**
         * An Async wrapper for DeleteOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOrganizationRequestT = Model::DeleteOrganizationRequest>
        void DeleteOrganizationAsync(const DeleteOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DeleteOrganizationRequestT& request = {}) const
        {
            return SubmitAsync(&OrganizationsClient::DeleteOrganization, request, handler, context);
        }

        /**
         * <p>Deletes an organizational unit (OU) from a root or another OU. You must first
         * remove all accounts and child OUs from the OU that you want to delete.</p>
         * <p>This operation can be called only from the organization's management
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeleteOrganizationalUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOrganizationalUnitOutcome DeleteOrganizationalUnit(const Model::DeleteOrganizationalUnitRequest& request) const;

        /**
         * A Callable wrapper for DeleteOrganizationalUnit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOrganizationalUnitRequestT = Model::DeleteOrganizationalUnitRequest>
        Model::DeleteOrganizationalUnitOutcomeCallable DeleteOrganizationalUnitCallable(const DeleteOrganizationalUnitRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::DeleteOrganizationalUnit, request);
        }

        /**
         * An Async wrapper for DeleteOrganizationalUnit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOrganizationalUnitRequestT = Model::DeleteOrganizationalUnitRequest>
        void DeleteOrganizationalUnitAsync(const DeleteOrganizationalUnitRequestT& request, const DeleteOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::DeleteOrganizationalUnit, request, handler, context);
        }

        /**
         * <p>Deletes the specified policy from your organization. Before you perform this
         * operation, you must first detach the policy from all organizational units (OUs),
         * roots, and accounts.</p> <p>This operation can be called only from the
         * organization's management account or by a member account that is a delegated
         * administrator for an Amazon Web Services service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeletePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeletePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePolicyRequestT = Model::DeletePolicyRequest>
        Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const DeletePolicyRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::DeletePolicy, request);
        }

        /**
         * An Async wrapper for DeletePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePolicyRequestT = Model::DeletePolicyRequest>
        void DeletePolicyAsync(const DeletePolicyRequestT& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::DeletePolicy, request, handler, context);
        }

        /**
         * <p>Deletes the resource policy from your organization.</p> <p>You can only call
         * this operation from the organization's management account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request = {}) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request = {}) const
        {
            return SubmitCallable(&OrganizationsClient::DeleteResourcePolicy, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        void DeleteResourcePolicyAsync(const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DeleteResourcePolicyRequestT& request = {}) const
        {
            return SubmitAsync(&OrganizationsClient::DeleteResourcePolicy, request, handler, context);
        }

        /**
         * <p>Removes the specified member Amazon Web Services account as a delegated
         * administrator for the specified Amazon Web Services service.</p> 
         * <p>Deregistering a delegated administrator can have unintended impacts on the
         * functionality of the enabled Amazon Web Services service. See the documentation
         * for the enabled service before you deregister a delegated administrator so that
         * you understand any potential impacts.</p>  <p>You can run this
         * action only for Amazon Web Services services that support this feature. For a
         * current list of services that support it, see the column <i>Supports Delegated
         * Administrator</i> in the table at <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services_list.html">Amazon
         * Web Services Services that you can use with Organizations</a> in the
         * <i>Organizations User Guide.</i> </p> <p>This operation can be called only from
         * the organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeregisterDelegatedAdministrator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterDelegatedAdministratorOutcome DeregisterDelegatedAdministrator(const Model::DeregisterDelegatedAdministratorRequest& request) const;

        /**
         * A Callable wrapper for DeregisterDelegatedAdministrator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterDelegatedAdministratorRequestT = Model::DeregisterDelegatedAdministratorRequest>
        Model::DeregisterDelegatedAdministratorOutcomeCallable DeregisterDelegatedAdministratorCallable(const DeregisterDelegatedAdministratorRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::DeregisterDelegatedAdministrator, request);
        }

        /**
         * An Async wrapper for DeregisterDelegatedAdministrator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterDelegatedAdministratorRequestT = Model::DeregisterDelegatedAdministratorRequest>
        void DeregisterDelegatedAdministratorAsync(const DeregisterDelegatedAdministratorRequestT& request, const DeregisterDelegatedAdministratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::DeregisterDelegatedAdministrator, request, handler, context);
        }

        /**
         * <p>Retrieves Organizations-related information about the specified account.</p>
         * <p>This operation can be called only from the organization's management account
         * or by a member account that is a delegated administrator for an Amazon Web
         * Services service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountOutcome DescribeAccount(const Model::DescribeAccountRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAccountRequestT = Model::DescribeAccountRequest>
        Model::DescribeAccountOutcomeCallable DescribeAccountCallable(const DescribeAccountRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::DescribeAccount, request);
        }

        /**
         * An Async wrapper for DescribeAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountRequestT = Model::DescribeAccountRequest>
        void DescribeAccountAsync(const DescribeAccountRequestT& request, const DescribeAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::DescribeAccount, request, handler, context);
        }

        /**
         * <p>Retrieves the current status of an asynchronous request to create an
         * account.</p> <p>This operation can be called only from the organization's
         * management account or by a member account that is a delegated administrator for
         * an Amazon Web Services service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeCreateAccountStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCreateAccountStatusOutcome DescribeCreateAccountStatus(const Model::DescribeCreateAccountStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeCreateAccountStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCreateAccountStatusRequestT = Model::DescribeCreateAccountStatusRequest>
        Model::DescribeCreateAccountStatusOutcomeCallable DescribeCreateAccountStatusCallable(const DescribeCreateAccountStatusRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::DescribeCreateAccountStatus, request);
        }

        /**
         * An Async wrapper for DescribeCreateAccountStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCreateAccountStatusRequestT = Model::DescribeCreateAccountStatusRequest>
        void DescribeCreateAccountStatusAsync(const DescribeCreateAccountStatusRequestT& request, const DescribeCreateAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::DescribeCreateAccountStatus, request, handler, context);
        }

        /**
         * <p>Returns the contents of the effective policy for specified policy type and
         * account. The effective policy is the aggregation of any policies of the
         * specified type that the account inherits, plus any policy of that type that is
         * directly attached to the account.</p> <p>This operation applies only to policy
         * types <i>other</i> than service control policies (SCPs).</p> <p>For more
         * information about policy inheritance, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_inheritance_mgmt.html">Understanding
         * management policy inheritance</a> in the <i>Organizations User Guide</i>.</p>
         * <p>This operation can be called from any account in the
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeEffectivePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEffectivePolicyOutcome DescribeEffectivePolicy(const Model::DescribeEffectivePolicyRequest& request) const;

        /**
         * A Callable wrapper for DescribeEffectivePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEffectivePolicyRequestT = Model::DescribeEffectivePolicyRequest>
        Model::DescribeEffectivePolicyOutcomeCallable DescribeEffectivePolicyCallable(const DescribeEffectivePolicyRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::DescribeEffectivePolicy, request);
        }

        /**
         * An Async wrapper for DescribeEffectivePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEffectivePolicyRequestT = Model::DescribeEffectivePolicyRequest>
        void DescribeEffectivePolicyAsync(const DescribeEffectivePolicyRequestT& request, const DescribeEffectivePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::DescribeEffectivePolicy, request, handler, context);
        }

        /**
         * <p>Retrieves information about a previously requested handshake. The handshake
         * ID comes from the response to the original <a>InviteAccountToOrganization</a>
         * operation that generated the handshake.</p> <p>You can access handshakes that
         * are <code>ACCEPTED</code>, <code>DECLINED</code>, or <code>CANCELED</code> for
         * only 30 days after they change to that state. They're then deleted and no longer
         * accessible.</p> <p>This operation can be called from any account in the
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeHandshake">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHandshakeOutcome DescribeHandshake(const Model::DescribeHandshakeRequest& request) const;

        /**
         * A Callable wrapper for DescribeHandshake that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeHandshakeRequestT = Model::DescribeHandshakeRequest>
        Model::DescribeHandshakeOutcomeCallable DescribeHandshakeCallable(const DescribeHandshakeRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::DescribeHandshake, request);
        }

        /**
         * An Async wrapper for DescribeHandshake that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeHandshakeRequestT = Model::DescribeHandshakeRequest>
        void DescribeHandshakeAsync(const DescribeHandshakeRequestT& request, const DescribeHandshakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::DescribeHandshake, request, handler, context);
        }

        /**
         * <p>Retrieves information about the organization that the user's account belongs
         * to.</p> <p>This operation can be called from any account in the
         * organization.</p>  <p>Even if a policy type is shown as available in the
         * organization, you can disable it separately at the root level with
         * <a>DisablePolicyType</a>. Use <a>ListRoots</a> to see the status of policy types
         * for a specified root.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationOutcome DescribeOrganization(const Model::DescribeOrganizationRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOrganizationRequestT = Model::DescribeOrganizationRequest>
        Model::DescribeOrganizationOutcomeCallable DescribeOrganizationCallable(const DescribeOrganizationRequestT& request = {}) const
        {
            return SubmitCallable(&OrganizationsClient::DescribeOrganization, request);
        }

        /**
         * An Async wrapper for DescribeOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOrganizationRequestT = Model::DescribeOrganizationRequest>
        void DescribeOrganizationAsync(const DescribeOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeOrganizationRequestT& request = {}) const
        {
            return SubmitAsync(&OrganizationsClient::DescribeOrganization, request, handler, context);
        }

        /**
         * <p>Retrieves information about an organizational unit (OU).</p> <p>This
         * operation can be called only from the organization's management account or by a
         * member account that is a delegated administrator for an Amazon Web Services
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeOrganizationalUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationalUnitOutcome DescribeOrganizationalUnit(const Model::DescribeOrganizationalUnitRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrganizationalUnit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOrganizationalUnitRequestT = Model::DescribeOrganizationalUnitRequest>
        Model::DescribeOrganizationalUnitOutcomeCallable DescribeOrganizationalUnitCallable(const DescribeOrganizationalUnitRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::DescribeOrganizationalUnit, request);
        }

        /**
         * An Async wrapper for DescribeOrganizationalUnit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOrganizationalUnitRequestT = Model::DescribeOrganizationalUnitRequest>
        void DescribeOrganizationalUnitAsync(const DescribeOrganizationalUnitRequestT& request, const DescribeOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::DescribeOrganizationalUnit, request, handler, context);
        }

        /**
         * <p>Retrieves information about a policy.</p> <p>This operation can be called
         * only from the organization's management account or by a member account that is a
         * delegated administrator for an Amazon Web Services service.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePolicyOutcome DescribePolicy(const Model::DescribePolicyRequest& request) const;

        /**
         * A Callable wrapper for DescribePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePolicyRequestT = Model::DescribePolicyRequest>
        Model::DescribePolicyOutcomeCallable DescribePolicyCallable(const DescribePolicyRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::DescribePolicy, request);
        }

        /**
         * An Async wrapper for DescribePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePolicyRequestT = Model::DescribePolicyRequest>
        void DescribePolicyAsync(const DescribePolicyRequestT& request, const DescribePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::DescribePolicy, request, handler, context);
        }

        /**
         * <p>Retrieves information about a resource policy.</p> <p>This operation can be
         * called only from the organization's management account or by a member account
         * that is a delegated administrator for an Amazon Web Services
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourcePolicyOutcome DescribeResourcePolicy(const Model::DescribeResourcePolicyRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeResourcePolicyRequestT = Model::DescribeResourcePolicyRequest>
        Model::DescribeResourcePolicyOutcomeCallable DescribeResourcePolicyCallable(const DescribeResourcePolicyRequestT& request = {}) const
        {
            return SubmitCallable(&OrganizationsClient::DescribeResourcePolicy, request);
        }

        /**
         * An Async wrapper for DescribeResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeResourcePolicyRequestT = Model::DescribeResourcePolicyRequest>
        void DescribeResourcePolicyAsync(const DescribeResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeResourcePolicyRequestT& request = {}) const
        {
            return SubmitAsync(&OrganizationsClient::DescribeResourcePolicy, request, handler, context);
        }

        /**
         * <p>Detaches a policy from a target root, organizational unit (OU), or
         * account.</p>  <p>If the policy being detached is a service control
         * policy (SCP), the changes to permissions for Identity and Access Management
         * (IAM) users and roles in affected accounts are immediate.</p> 
         * <p>Every root, OU, and account must have at least one SCP attached. If you want
         * to replace the default <code>FullAWSAccess</code> policy with an SCP that limits
         * the permissions that can be delegated, you must attach the replacement SCP
         * before you can remove the default SCP. This is the authorization strategy of an
         * "<a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/SCP_strategies.html#orgs_policies_allowlist">allow
         * list</a>". If you instead attach a second SCP and leave the
         * <code>FullAWSAccess</code> SCP still attached, and specify <code>"Effect":
         * "Deny"</code> in the second SCP to override the <code>"Effect": "Allow"</code>
         * in the <code>FullAWSAccess</code> policy (or any other attached SCP), you're
         * using the authorization strategy of a "<a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/SCP_strategies.html#orgs_policies_denylist">deny
         * list</a>".</p> <p>This operation can be called only from the organization's
         * management account or by a member account that is a delegated administrator for
         * an Amazon Web Services service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DetachPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachPolicyOutcome DetachPolicy(const Model::DetachPolicyRequest& request) const;

        /**
         * A Callable wrapper for DetachPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetachPolicyRequestT = Model::DetachPolicyRequest>
        Model::DetachPolicyOutcomeCallable DetachPolicyCallable(const DetachPolicyRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::DetachPolicy, request);
        }

        /**
         * An Async wrapper for DetachPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetachPolicyRequestT = Model::DetachPolicyRequest>
        void DetachPolicyAsync(const DetachPolicyRequestT& request, const DetachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::DetachPolicy, request, handler, context);
        }

        /**
         * <p>Disables the integration of an Amazon Web Services service (the service that
         * is specified by <code>ServicePrincipal</code>) with Organizations. When you
         * disable integration, the specified service no longer can create a <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html">service-linked
         * role</a> in <i>new</i> accounts in your organization. This means the service
         * can't perform operations on your behalf on any new accounts in your
         * organization. The service can still perform operations in older accounts until
         * the service completes its clean-up from Organizations.</p>  <p>We <b>
         * <i>strongly recommend</i> </b> that you don't use this command to disable
         * integration between Organizations and the specified Amazon Web Services service.
         * Instead, use the console or commands that are provided by the specified service.
         * This lets the trusted service perform any required initialization when enabling
         * trusted access, such as creating any required resources and any required clean
         * up of resources when disabling trusted access. </p> <p>For information about how
         * to disable trusted service access to your organization using the trusted
         * service, see the <b>Learn more</b> link under the <b>Supports Trusted Access</b>
         * column at <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services_list.html">Amazon
         * Web Services services that you can use with Organizations</a>. on this page.</p>
         * <p>If you disable access by using this command, it causes the following actions
         * to occur:</p> <ul> <li> <p>The service can no longer create a service-linked
         * role in the accounts in your organization. This means that the service can't
         * perform operations on your behalf on any new accounts in your organization. The
         * service can still perform operations in older accounts until the service
         * completes its clean-up from Organizations. </p> </li> <li> <p>The service can no
         * longer perform tasks in the member accounts in the organization, unless those
         * operations are explicitly permitted by the IAM policies that are attached to
         * your roles. This includes any data aggregation from the member accounts to the
         * management account, or to a delegated administrator account, where relevant.</p>
         * </li> <li> <p>Some services detect this and clean up any remaining data or
         * resources related to the integration, while other services stop accessing the
         * organization but leave any historical data and configuration in place to support
         * a possible re-enabling of the integration.</p> </li> </ul> <p>Using the other
         * service's console or commands to disable the integration ensures that the other
         * service is aware that it can clean up any resources that are required only for
         * the integration. How the service cleans up its resources in the organization's
         * accounts depends on that service. For more information, see the documentation
         * for the other Amazon Web Services service. </p>  <p>After you
         * perform the <code>DisableAWSServiceAccess</code> operation, the specified
         * service can no longer perform operations in your organization's accounts </p>
         * <p>For more information about integrating other services with Organizations,
         * including the list of services that work with Organizations, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Using
         * Organizations with other Amazon Web Services services</a> in the
         * <i>Organizations User Guide</i>.</p> <p>This operation can be called only from
         * the organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DisableAWSServiceAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableAWSServiceAccessOutcome DisableAWSServiceAccess(const Model::DisableAWSServiceAccessRequest& request) const;

        /**
         * A Callable wrapper for DisableAWSServiceAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableAWSServiceAccessRequestT = Model::DisableAWSServiceAccessRequest>
        Model::DisableAWSServiceAccessOutcomeCallable DisableAWSServiceAccessCallable(const DisableAWSServiceAccessRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::DisableAWSServiceAccess, request);
        }

        /**
         * An Async wrapper for DisableAWSServiceAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableAWSServiceAccessRequestT = Model::DisableAWSServiceAccessRequest>
        void DisableAWSServiceAccessAsync(const DisableAWSServiceAccessRequestT& request, const DisableAWSServiceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::DisableAWSServiceAccess, request, handler, context);
        }

        /**
         * <p>Disables an organizational policy type in a root. A policy of a certain type
         * can be attached to entities in a root only if that type is enabled in the root.
         * After you perform this operation, you no longer can attach policies of the
         * specified type to that root or to any organizational unit (OU) or account in
         * that root. You can undo this by using the <a>EnablePolicyType</a> operation.</p>
         * <p>This is an asynchronous request that Amazon Web Services performs in the
         * background. If you disable a policy type for a root, it still appears enabled
         * for the organization if <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">all
         * features</a> are enabled for the organization. Amazon Web Services recommends
         * that you first use <a>ListRoots</a> to see the status of policy types for a
         * specified root, and then use this operation.</p> <p>This operation can be called
         * only from the organization's management account or by a member account that is a
         * delegated administrator for an Amazon Web Services service.</p> <p> To view the
         * status of available policy types in the organization, use
         * <a>DescribeOrganization</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DisablePolicyType">AWS
         * API Reference</a></p>
         */
        virtual Model::DisablePolicyTypeOutcome DisablePolicyType(const Model::DisablePolicyTypeRequest& request) const;

        /**
         * A Callable wrapper for DisablePolicyType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisablePolicyTypeRequestT = Model::DisablePolicyTypeRequest>
        Model::DisablePolicyTypeOutcomeCallable DisablePolicyTypeCallable(const DisablePolicyTypeRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::DisablePolicyType, request);
        }

        /**
         * An Async wrapper for DisablePolicyType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisablePolicyTypeRequestT = Model::DisablePolicyTypeRequest>
        void DisablePolicyTypeAsync(const DisablePolicyTypeRequestT& request, const DisablePolicyTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::DisablePolicyType, request, handler, context);
        }

        /**
         * <p>Enables the integration of an Amazon Web Services service (the service that
         * is specified by <code>ServicePrincipal</code>) with Organizations. When you
         * enable integration, you allow the specified service to create a <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html">service-linked
         * role</a> in all the accounts in your organization. This allows the service to
         * perform operations on your behalf in your organization and its accounts.</p>
         *  <p>We recommend that you enable integration between Organizations
         * and the specified Amazon Web Services service by using the console or commands
         * that are provided by the specified service. Doing so ensures that the service is
         * aware that it can create the resources that are required for the integration.
         * How the service creates those resources in the organization's accounts depends
         * on that service. For more information, see the documentation for the other
         * Amazon Web Services service.</p>  <p>For more information about
         * enabling services to integrate with Organizations, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Using
         * Organizations with other Amazon Web Services services</a> in the
         * <i>Organizations User Guide</i>.</p> <p>You can only call this operation from
         * the organization's management account and only if the organization has <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">enabled
         * all features</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/EnableAWSServiceAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableAWSServiceAccessOutcome EnableAWSServiceAccess(const Model::EnableAWSServiceAccessRequest& request) const;

        /**
         * A Callable wrapper for EnableAWSServiceAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableAWSServiceAccessRequestT = Model::EnableAWSServiceAccessRequest>
        Model::EnableAWSServiceAccessOutcomeCallable EnableAWSServiceAccessCallable(const EnableAWSServiceAccessRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::EnableAWSServiceAccess, request);
        }

        /**
         * An Async wrapper for EnableAWSServiceAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableAWSServiceAccessRequestT = Model::EnableAWSServiceAccessRequest>
        void EnableAWSServiceAccessAsync(const EnableAWSServiceAccessRequestT& request, const EnableAWSServiceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::EnableAWSServiceAccess, request, handler, context);
        }

        /**
         * <p>Enables all features in an organization. This enables the use of organization
         * policies that can restrict the services and actions that can be called in each
         * account. Until you enable all features, you have access only to consolidated
         * billing, and you can't use any of the advanced account administration features
         * that Organizations supports. For more information, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
         * all features in your organization</a> in the <i>Organizations User
         * Guide</i>.</p>  <p>This operation is required only for organizations
         * that were created explicitly with only the consolidated billing features
         * enabled. Calling this operation sends a handshake to every invited account in
         * the organization. The feature set change can be finalized and the additional
         * features enabled only after all administrators in the invited accounts approve
         * the change by accepting the handshake.</p>  <p>After you enable all
         * features, you can separately enable or disable individual policy types in a root
         * using <a>EnablePolicyType</a> and <a>DisablePolicyType</a>. To see the status of
         * policy types in a root, use <a>ListRoots</a>.</p> <p>After all invited member
         * accounts accept the handshake, you finalize the feature set change by accepting
         * the handshake that contains <code>"Action": "ENABLE_ALL_FEATURES"</code>. This
         * completes the change.</p> <p>After you enable all features in your organization,
         * the management account in the organization can apply policies on all member
         * accounts. These policies can restrict what users and even administrators in
         * those accounts can do. The management account can apply policies that prevent
         * accounts from leaving the organization. Ensure that your account administrators
         * are aware of this.</p> <p>This operation can be called only from the
         * organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/EnableAllFeatures">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableAllFeaturesOutcome EnableAllFeatures(const Model::EnableAllFeaturesRequest& request) const;

        /**
         * A Callable wrapper for EnableAllFeatures that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableAllFeaturesRequestT = Model::EnableAllFeaturesRequest>
        Model::EnableAllFeaturesOutcomeCallable EnableAllFeaturesCallable(const EnableAllFeaturesRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::EnableAllFeatures, request);
        }

        /**
         * An Async wrapper for EnableAllFeatures that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableAllFeaturesRequestT = Model::EnableAllFeaturesRequest>
        void EnableAllFeaturesAsync(const EnableAllFeaturesRequestT& request, const EnableAllFeaturesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::EnableAllFeatures, request, handler, context);
        }

        /**
         * <p>Enables a policy type in a root. After you enable a policy type in a root,
         * you can attach policies of that type to the root, any organizational unit (OU),
         * or account in that root. You can undo this by using the <a>DisablePolicyType</a>
         * operation.</p> <p>This is an asynchronous request that Amazon Web Services
         * performs in the background. Amazon Web Services recommends that you first use
         * <a>ListRoots</a> to see the status of policy types for a specified root, and
         * then use this operation.</p> <p>This operation can be called only from the
         * organization's management account or by a member account that is a delegated
         * administrator for an Amazon Web Services service.</p> <p>You can enable a policy
         * type in a root only if that policy type is available in the organization. To
         * view the status of available policy types in the organization, use
         * <a>DescribeOrganization</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/EnablePolicyType">AWS
         * API Reference</a></p>
         */
        virtual Model::EnablePolicyTypeOutcome EnablePolicyType(const Model::EnablePolicyTypeRequest& request) const;

        /**
         * A Callable wrapper for EnablePolicyType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnablePolicyTypeRequestT = Model::EnablePolicyTypeRequest>
        Model::EnablePolicyTypeOutcomeCallable EnablePolicyTypeCallable(const EnablePolicyTypeRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::EnablePolicyType, request);
        }

        /**
         * An Async wrapper for EnablePolicyType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnablePolicyTypeRequestT = Model::EnablePolicyTypeRequest>
        void EnablePolicyTypeAsync(const EnablePolicyTypeRequestT& request, const EnablePolicyTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::EnablePolicyType, request, handler, context);
        }

        /**
         * <p>Sends an invitation to another account to join your organization as a member
         * account. Organizations sends email on your behalf to the email address that is
         * associated with the other account's owner. The invitation is implemented as a
         * <a>Handshake</a> whose details are in the response.</p>  <ul> <li>
         * <p>You can invite Amazon Web Services accounts only from the same seller as the
         * management account. For example, if your organization's management account was
         * created by Amazon Internet Services Pvt. Ltd (AISPL), an Amazon Web Services
         * seller in India, you can invite only other AISPL accounts to your organization.
         * You can't combine accounts from AISPL and Amazon Web Services or from any other
         * Amazon Web Services seller. For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/useconsolidatedbilling-India.html">Consolidated
         * billing in India</a>.</p> </li> <li> <p>If you receive an exception that
         * indicates that you exceeded your account limits for the organization or that the
         * operation failed because your organization is still initializing, wait one hour
         * and then try again. If the error persists after an hour, contact <a
         * href="https://console.aws.amazon.com/support/home#/">Amazon Web Services
         * Support</a>.</p> </li> </ul>  <p>If the request includes tags, then
         * the requester must have the <code>organizations:TagResource</code>
         * permission.</p> <p>This operation can be called only from the organization's
         * management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/InviteAccountToOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::InviteAccountToOrganizationOutcome InviteAccountToOrganization(const Model::InviteAccountToOrganizationRequest& request) const;

        /**
         * A Callable wrapper for InviteAccountToOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InviteAccountToOrganizationRequestT = Model::InviteAccountToOrganizationRequest>
        Model::InviteAccountToOrganizationOutcomeCallable InviteAccountToOrganizationCallable(const InviteAccountToOrganizationRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::InviteAccountToOrganization, request);
        }

        /**
         * An Async wrapper for InviteAccountToOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InviteAccountToOrganizationRequestT = Model::InviteAccountToOrganizationRequest>
        void InviteAccountToOrganizationAsync(const InviteAccountToOrganizationRequestT& request, const InviteAccountToOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::InviteAccountToOrganization, request, handler, context);
        }

        /**
         * <p>Removes a member account from its parent organization. This version of the
         * operation is performed by the account that wants to leave. To remove a member
         * account as a user in the management account, use
         * <a>RemoveAccountFromOrganization</a> instead.</p> <p>This operation can be
         * called only from a member account in the organization.</p>  <ul> <li>
         * <p>The management account in an organization with all features enabled can set
         * service control policies (SCPs) that can restrict what administrators of member
         * accounts can do. This includes preventing them from successfully calling
         * <code>LeaveOrganization</code> and leaving the organization.</p> </li> <li>
         * <p>You can leave an organization as a member account only if the account is
         * configured with the information required to operate as a standalone account.
         * When you create an account in an organization using the Organizations console,
         * API, or CLI commands, the information required of standalone accounts is
         * <i>not</i> automatically collected. For each account that you want to make
         * standalone, you must perform the following steps. If any of the steps are
         * already completed for this account, that step doesn't appear.</p> <ul> <li>
         * <p>Choose a support plan</p> </li> <li> <p>Provide and verify the required
         * contact information</p> </li> <li> <p>Provide a current payment method</p> </li>
         * </ul> <p>Amazon Web Services uses the payment method to charge for any billable
         * (not free tier) Amazon Web Services activity that occurs while the account isn't
         * attached to an organization. For more information, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_account-before-remove.html">Considerations
         * before removing an account from an organization</a> in the <i>Organizations User
         * Guide</i>.</p> </li> <li> <p>The account that you want to leave must not be a
         * delegated administrator account for any Amazon Web Services service enabled for
         * your organization. If the account is a delegated administrator, you must first
         * change the delegated administrator account to another account that is remaining
         * in the organization.</p> </li> <li> <p>You can leave an organization only after
         * you enable IAM user access to billing in your account. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html#ControllingAccessWebsite-Activate">About
         * IAM access to the Billing and Cost Management console</a> in the <i>Amazon Web
         * Services Billing and Cost Management User Guide</i>.</p> </li> <li> <p>After the
         * account leaves the organization, all tags that were attached to the account
         * object in the organization are deleted. Amazon Web Services accounts outside of
         * an organization do not support tags.</p> </li> <li> <p>A newly created account
         * has a waiting period before it can be removed from its organization. If you get
         * an error that indicates that a wait period is required, then try again in a few
         * days.</p> </li> <li> <p>If you are using an organization principal to call
         * <code>LeaveOrganization</code> across multiple accounts, you can only do this up
         * to 5 accounts per second in a single organization.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/LeaveOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::LeaveOrganizationOutcome LeaveOrganization(const Model::LeaveOrganizationRequest& request = {}) const;

        /**
         * A Callable wrapper for LeaveOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename LeaveOrganizationRequestT = Model::LeaveOrganizationRequest>
        Model::LeaveOrganizationOutcomeCallable LeaveOrganizationCallable(const LeaveOrganizationRequestT& request = {}) const
        {
            return SubmitCallable(&OrganizationsClient::LeaveOrganization, request);
        }

        /**
         * An Async wrapper for LeaveOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename LeaveOrganizationRequestT = Model::LeaveOrganizationRequest>
        void LeaveOrganizationAsync(const LeaveOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const LeaveOrganizationRequestT& request = {}) const
        {
            return SubmitAsync(&OrganizationsClient::LeaveOrganization, request, handler, context);
        }

        /**
         * <p>Returns a list of the Amazon Web Services services that you enabled to
         * integrate with your organization. After a service on this list creates the
         * resources that it requires for the integration, it can perform operations on
         * your organization and its accounts.</p> <p>For more information about
         * integrating other services with Organizations, including the list of services
         * that currently work with Organizations, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Using
         * Organizations with other Amazon Web Services services</a> in the
         * <i>Organizations User Guide</i>.</p> <p>This operation can be called only from
         * the organization's management account or by a member account that is a delegated
         * administrator for an Amazon Web Services service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListAWSServiceAccessForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAWSServiceAccessForOrganizationOutcome ListAWSServiceAccessForOrganization(const Model::ListAWSServiceAccessForOrganizationRequest& request) const;

        /**
         * A Callable wrapper for ListAWSServiceAccessForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAWSServiceAccessForOrganizationRequestT = Model::ListAWSServiceAccessForOrganizationRequest>
        Model::ListAWSServiceAccessForOrganizationOutcomeCallable ListAWSServiceAccessForOrganizationCallable(const ListAWSServiceAccessForOrganizationRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::ListAWSServiceAccessForOrganization, request);
        }

        /**
         * An Async wrapper for ListAWSServiceAccessForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAWSServiceAccessForOrganizationRequestT = Model::ListAWSServiceAccessForOrganizationRequest>
        void ListAWSServiceAccessForOrganizationAsync(const ListAWSServiceAccessForOrganizationRequestT& request, const ListAWSServiceAccessForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::ListAWSServiceAccessForOrganization, request, handler, context);
        }

        /**
         * <p>Lists all the accounts in the organization. To request only the accounts in a
         * specified root or organizational unit (OU), use the <a>ListAccountsForParent</a>
         * operation instead.</p>  <p>Always check the <code>NextToken</code>
         * response parameter for a <code>null</code> value when calling a
         * <code>List*</code> operation. These operations can occasionally return an empty
         * set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called only from the organization's management account or by a member account
         * that is a delegated administrator for an Amazon Web Services
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountsOutcome ListAccounts(const Model::ListAccountsRequest& request) const;

        /**
         * A Callable wrapper for ListAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccountsRequestT = Model::ListAccountsRequest>
        Model::ListAccountsOutcomeCallable ListAccountsCallable(const ListAccountsRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::ListAccounts, request);
        }

        /**
         * An Async wrapper for ListAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccountsRequestT = Model::ListAccountsRequest>
        void ListAccountsAsync(const ListAccountsRequestT& request, const ListAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::ListAccounts, request, handler, context);
        }

        /**
         * <p>Lists the accounts in an organization that are contained by the specified
         * target root or organizational unit (OU). If you specify the root, you get a list
         * of all the accounts that aren't in any OU. If you specify an OU, you get a list
         * of all the accounts in only that OU and not in any child OUs. To get a list of
         * all accounts in the organization, use the <a>ListAccounts</a> operation.</p>
         *  <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         *  <p>This operation can be called only from the organization's management
         * account or by a member account that is a delegated administrator for an Amazon
         * Web Services service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListAccountsForParent">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountsForParentOutcome ListAccountsForParent(const Model::ListAccountsForParentRequest& request) const;

        /**
         * A Callable wrapper for ListAccountsForParent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccountsForParentRequestT = Model::ListAccountsForParentRequest>
        Model::ListAccountsForParentOutcomeCallable ListAccountsForParentCallable(const ListAccountsForParentRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::ListAccountsForParent, request);
        }

        /**
         * An Async wrapper for ListAccountsForParent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccountsForParentRequestT = Model::ListAccountsForParentRequest>
        void ListAccountsForParentAsync(const ListAccountsForParentRequestT& request, const ListAccountsForParentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::ListAccountsForParent, request, handler, context);
        }

        /**
         * <p>Lists all of the organizational units (OUs) or accounts that are contained in
         * the specified parent OU or root. This operation, along with <a>ListParents</a>
         * enables you to traverse the tree structure that makes up this root.</p> 
         * <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         *  <p>This operation can be called only from the organization's management
         * account or by a member account that is a delegated administrator for an Amazon
         * Web Services service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListChildren">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChildrenOutcome ListChildren(const Model::ListChildrenRequest& request) const;

        /**
         * A Callable wrapper for ListChildren that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChildrenRequestT = Model::ListChildrenRequest>
        Model::ListChildrenOutcomeCallable ListChildrenCallable(const ListChildrenRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::ListChildren, request);
        }

        /**
         * An Async wrapper for ListChildren that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChildrenRequestT = Model::ListChildrenRequest>
        void ListChildrenAsync(const ListChildrenRequestT& request, const ListChildrenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::ListChildren, request, handler, context);
        }

        /**
         * <p>Lists the account creation requests that match the specified status that is
         * currently being tracked for the organization.</p>  <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called only from the organization's management account or by a member account
         * that is a delegated administrator for an Amazon Web Services
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListCreateAccountStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCreateAccountStatusOutcome ListCreateAccountStatus(const Model::ListCreateAccountStatusRequest& request) const;

        /**
         * A Callable wrapper for ListCreateAccountStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCreateAccountStatusRequestT = Model::ListCreateAccountStatusRequest>
        Model::ListCreateAccountStatusOutcomeCallable ListCreateAccountStatusCallable(const ListCreateAccountStatusRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::ListCreateAccountStatus, request);
        }

        /**
         * An Async wrapper for ListCreateAccountStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCreateAccountStatusRequestT = Model::ListCreateAccountStatusRequest>
        void ListCreateAccountStatusAsync(const ListCreateAccountStatusRequestT& request, const ListCreateAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::ListCreateAccountStatus, request, handler, context);
        }

        /**
         * <p>Lists the Amazon Web Services accounts that are designated as delegated
         * administrators in this organization.</p> <p>This operation can be called only
         * from the organization's management account or by a member account that is a
         * delegated administrator for an Amazon Web Services service.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListDelegatedAdministrators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDelegatedAdministratorsOutcome ListDelegatedAdministrators(const Model::ListDelegatedAdministratorsRequest& request) const;

        /**
         * A Callable wrapper for ListDelegatedAdministrators that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDelegatedAdministratorsRequestT = Model::ListDelegatedAdministratorsRequest>
        Model::ListDelegatedAdministratorsOutcomeCallable ListDelegatedAdministratorsCallable(const ListDelegatedAdministratorsRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::ListDelegatedAdministrators, request);
        }

        /**
         * An Async wrapper for ListDelegatedAdministrators that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDelegatedAdministratorsRequestT = Model::ListDelegatedAdministratorsRequest>
        void ListDelegatedAdministratorsAsync(const ListDelegatedAdministratorsRequestT& request, const ListDelegatedAdministratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::ListDelegatedAdministrators, request, handler, context);
        }

        /**
         * <p>List the Amazon Web Services services for which the specified account is a
         * delegated administrator.</p> <p>This operation can be called only from the
         * organization's management account or by a member account that is a delegated
         * administrator for an Amazon Web Services service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListDelegatedServicesForAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDelegatedServicesForAccountOutcome ListDelegatedServicesForAccount(const Model::ListDelegatedServicesForAccountRequest& request) const;

        /**
         * A Callable wrapper for ListDelegatedServicesForAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDelegatedServicesForAccountRequestT = Model::ListDelegatedServicesForAccountRequest>
        Model::ListDelegatedServicesForAccountOutcomeCallable ListDelegatedServicesForAccountCallable(const ListDelegatedServicesForAccountRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::ListDelegatedServicesForAccount, request);
        }

        /**
         * An Async wrapper for ListDelegatedServicesForAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDelegatedServicesForAccountRequestT = Model::ListDelegatedServicesForAccountRequest>
        void ListDelegatedServicesForAccountAsync(const ListDelegatedServicesForAccountRequestT& request, const ListDelegatedServicesForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::ListDelegatedServicesForAccount, request, handler, context);
        }

        /**
         * <p>Lists the current handshakes that are associated with the account of the
         * requesting user.</p> <p>Handshakes that are <code>ACCEPTED</code>,
         * <code>DECLINED</code>, <code>CANCELED</code>, or <code>EXPIRED</code> appear in
         * the results of this API for only 30 days after changing to that state. After
         * that, they're deleted and no longer accessible.</p>  <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called from any account in the organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListHandshakesForAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHandshakesForAccountOutcome ListHandshakesForAccount(const Model::ListHandshakesForAccountRequest& request) const;

        /**
         * A Callable wrapper for ListHandshakesForAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListHandshakesForAccountRequestT = Model::ListHandshakesForAccountRequest>
        Model::ListHandshakesForAccountOutcomeCallable ListHandshakesForAccountCallable(const ListHandshakesForAccountRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::ListHandshakesForAccount, request);
        }

        /**
         * An Async wrapper for ListHandshakesForAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListHandshakesForAccountRequestT = Model::ListHandshakesForAccountRequest>
        void ListHandshakesForAccountAsync(const ListHandshakesForAccountRequestT& request, const ListHandshakesForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::ListHandshakesForAccount, request, handler, context);
        }

        /**
         * <p>Lists the handshakes that are associated with the organization that the
         * requesting user is part of. The <code>ListHandshakesForOrganization</code>
         * operation returns a list of handshake structures. Each structure contains
         * details and status about a handshake.</p> <p>Handshakes that are
         * <code>ACCEPTED</code>, <code>DECLINED</code>, <code>CANCELED</code>, or
         * <code>EXPIRED</code> appear in the results of this API for only 30 days after
         * changing to that state. After that, they're deleted and no longer
         * accessible.</p>  <p>Always check the <code>NextToken</code> response
         * parameter for a <code>null</code> value when calling a <code>List*</code>
         * operation. These operations can occasionally return an empty set of results even
         * when there are more results available. The <code>NextToken</code> response
         * parameter value is <code>null</code> <i>only</i> when there are no more results
         * to display.</p>  <p>This operation can be called only from the
         * organization's management account or by a member account that is a delegated
         * administrator for an Amazon Web Services service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListHandshakesForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHandshakesForOrganizationOutcome ListHandshakesForOrganization(const Model::ListHandshakesForOrganizationRequest& request) const;

        /**
         * A Callable wrapper for ListHandshakesForOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListHandshakesForOrganizationRequestT = Model::ListHandshakesForOrganizationRequest>
        Model::ListHandshakesForOrganizationOutcomeCallable ListHandshakesForOrganizationCallable(const ListHandshakesForOrganizationRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::ListHandshakesForOrganization, request);
        }

        /**
         * An Async wrapper for ListHandshakesForOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListHandshakesForOrganizationRequestT = Model::ListHandshakesForOrganizationRequest>
        void ListHandshakesForOrganizationAsync(const ListHandshakesForOrganizationRequestT& request, const ListHandshakesForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::ListHandshakesForOrganization, request, handler, context);
        }

        /**
         * <p>Lists the organizational units (OUs) in a parent organizational unit or
         * root.</p>  <p>Always check the <code>NextToken</code> response parameter
         * for a <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         *  <p>This operation can be called only from the organization's management
         * account or by a member account that is a delegated administrator for an Amazon
         * Web Services service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListOrganizationalUnitsForParent">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationalUnitsForParentOutcome ListOrganizationalUnitsForParent(const Model::ListOrganizationalUnitsForParentRequest& request) const;

        /**
         * A Callable wrapper for ListOrganizationalUnitsForParent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOrganizationalUnitsForParentRequestT = Model::ListOrganizationalUnitsForParentRequest>
        Model::ListOrganizationalUnitsForParentOutcomeCallable ListOrganizationalUnitsForParentCallable(const ListOrganizationalUnitsForParentRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::ListOrganizationalUnitsForParent, request);
        }

        /**
         * An Async wrapper for ListOrganizationalUnitsForParent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOrganizationalUnitsForParentRequestT = Model::ListOrganizationalUnitsForParentRequest>
        void ListOrganizationalUnitsForParentAsync(const ListOrganizationalUnitsForParentRequestT& request, const ListOrganizationalUnitsForParentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::ListOrganizationalUnitsForParent, request, handler, context);
        }

        /**
         * <p>Lists the root or organizational units (OUs) that serve as the immediate
         * parent of the specified child OU or account. This operation, along with
         * <a>ListChildren</a> enables you to traverse the tree structure that makes up
         * this root.</p>  <p>Always check the <code>NextToken</code> response
         * parameter for a <code>null</code> value when calling a <code>List*</code>
         * operation. These operations can occasionally return an empty set of results even
         * when there are more results available. The <code>NextToken</code> response
         * parameter value is <code>null</code> <i>only</i> when there are no more results
         * to display.</p>  <p>This operation can be called only from the
         * organization's management account or by a member account that is a delegated
         * administrator for an Amazon Web Services service.</p>  <p>In the current
         * release, a child can have only a single parent.</p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListParents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListParentsOutcome ListParents(const Model::ListParentsRequest& request) const;

        /**
         * A Callable wrapper for ListParents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListParentsRequestT = Model::ListParentsRequest>
        Model::ListParentsOutcomeCallable ListParentsCallable(const ListParentsRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::ListParents, request);
        }

        /**
         * An Async wrapper for ListParents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListParentsRequestT = Model::ListParentsRequest>
        void ListParentsAsync(const ListParentsRequestT& request, const ListParentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::ListParents, request, handler, context);
        }

        /**
         * <p>Retrieves the list of all policies in an organization of a specified
         * type.</p>  <p>Always check the <code>NextToken</code> response parameter
         * for a <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         *  <p>This operation can be called only from the organization's management
         * account or by a member account that is a delegated administrator for an Amazon
         * Web Services service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPoliciesOutcome ListPolicies(const Model::ListPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPoliciesRequestT = Model::ListPoliciesRequest>
        Model::ListPoliciesOutcomeCallable ListPoliciesCallable(const ListPoliciesRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::ListPolicies, request);
        }

        /**
         * An Async wrapper for ListPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPoliciesRequestT = Model::ListPoliciesRequest>
        void ListPoliciesAsync(const ListPoliciesRequestT& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::ListPolicies, request, handler, context);
        }

        /**
         * <p>Lists the policies that are directly attached to the specified target root,
         * organizational unit (OU), or account. You must specify the policy type that you
         * want included in the returned list.</p>  <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called only from the organization's management account or by a member account
         * that is a delegated administrator for an Amazon Web Services
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListPoliciesForTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPoliciesForTargetOutcome ListPoliciesForTarget(const Model::ListPoliciesForTargetRequest& request) const;

        /**
         * A Callable wrapper for ListPoliciesForTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPoliciesForTargetRequestT = Model::ListPoliciesForTargetRequest>
        Model::ListPoliciesForTargetOutcomeCallable ListPoliciesForTargetCallable(const ListPoliciesForTargetRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::ListPoliciesForTarget, request);
        }

        /**
         * An Async wrapper for ListPoliciesForTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPoliciesForTargetRequestT = Model::ListPoliciesForTargetRequest>
        void ListPoliciesForTargetAsync(const ListPoliciesForTargetRequestT& request, const ListPoliciesForTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::ListPoliciesForTarget, request, handler, context);
        }

        /**
         * <p>Lists the roots that are defined in the current organization.</p> 
         * <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         *  <p>This operation can be called only from the organization's management
         * account or by a member account that is a delegated administrator for an Amazon
         * Web Services service.</p>  <p>Policy types can be enabled and disabled in
         * roots. This is distinct from whether they're available in the organization. When
         * you enable all features, you make policy types available for use in that
         * organization. Individual policy types can then be enabled and disabled in a
         * root. To see the availability of a policy type in an organization, use
         * <a>DescribeOrganization</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListRoots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRootsOutcome ListRoots(const Model::ListRootsRequest& request) const;

        /**
         * A Callable wrapper for ListRoots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRootsRequestT = Model::ListRootsRequest>
        Model::ListRootsOutcomeCallable ListRootsCallable(const ListRootsRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::ListRoots, request);
        }

        /**
         * An Async wrapper for ListRoots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRootsRequestT = Model::ListRootsRequest>
        void ListRootsAsync(const ListRootsRequestT& request, const ListRootsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::ListRoots, request, handler, context);
        }

        /**
         * <p>Lists tags that are attached to the specified resource.</p> <p>You can attach
         * tags to the following resources in Organizations.</p> <ul> <li> <p>Amazon Web
         * Services account</p> </li> <li> <p>Organization root</p> </li> <li>
         * <p>Organizational unit (OU)</p> </li> <li> <p>Policy (any type)</p> </li> </ul>
         * <p>This operation can be called only from the organization's management account
         * or by a member account that is a delegated administrator for an Amazon Web
         * Services service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists all the roots, organizational units (OUs), and accounts that the
         * specified policy is attached to.</p>  <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called only from the organization's management account or by a member account
         * that is a delegated administrator for an Amazon Web Services
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListTargetsForPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetsForPolicyOutcome ListTargetsForPolicy(const Model::ListTargetsForPolicyRequest& request) const;

        /**
         * A Callable wrapper for ListTargetsForPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTargetsForPolicyRequestT = Model::ListTargetsForPolicyRequest>
        Model::ListTargetsForPolicyOutcomeCallable ListTargetsForPolicyCallable(const ListTargetsForPolicyRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::ListTargetsForPolicy, request);
        }

        /**
         * An Async wrapper for ListTargetsForPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTargetsForPolicyRequestT = Model::ListTargetsForPolicyRequest>
        void ListTargetsForPolicyAsync(const ListTargetsForPolicyRequestT& request, const ListTargetsForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::ListTargetsForPolicy, request, handler, context);
        }

        /**
         * <p>Moves an account from its current source parent root or organizational unit
         * (OU) to the specified destination parent root or OU.</p> <p>This operation can
         * be called only from the organization's management account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/MoveAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::MoveAccountOutcome MoveAccount(const Model::MoveAccountRequest& request) const;

        /**
         * A Callable wrapper for MoveAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename MoveAccountRequestT = Model::MoveAccountRequest>
        Model::MoveAccountOutcomeCallable MoveAccountCallable(const MoveAccountRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::MoveAccount, request);
        }

        /**
         * An Async wrapper for MoveAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename MoveAccountRequestT = Model::MoveAccountRequest>
        void MoveAccountAsync(const MoveAccountRequestT& request, const MoveAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::MoveAccount, request, handler, context);
        }

        /**
         * <p>Creates or updates a resource policy.</p> <p>You can only call this operation
         * from the organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::PutResourcePolicy, request);
        }

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::PutResourcePolicy, request, handler, context);
        }

        /**
         * <p>Enables the specified member account to administer the Organizations features
         * of the specified Amazon Web Services service. It grants read-only access to
         * Organizations service data. The account still requires IAM permissions to access
         * and administer the Amazon Web Services service.</p> <p>You can run this action
         * only for Amazon Web Services services that support this feature. For a current
         * list of services that support it, see the column <i>Supports Delegated
         * Administrator</i> in the table at <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services_list.html">Amazon
         * Web Services Services that you can use with Organizations</a> in the
         * <i>Organizations User Guide.</i> </p> <p>This operation can be called only from
         * the organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/RegisterDelegatedAdministrator">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterDelegatedAdministratorOutcome RegisterDelegatedAdministrator(const Model::RegisterDelegatedAdministratorRequest& request) const;

        /**
         * A Callable wrapper for RegisterDelegatedAdministrator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterDelegatedAdministratorRequestT = Model::RegisterDelegatedAdministratorRequest>
        Model::RegisterDelegatedAdministratorOutcomeCallable RegisterDelegatedAdministratorCallable(const RegisterDelegatedAdministratorRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::RegisterDelegatedAdministrator, request);
        }

        /**
         * An Async wrapper for RegisterDelegatedAdministrator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterDelegatedAdministratorRequestT = Model::RegisterDelegatedAdministratorRequest>
        void RegisterDelegatedAdministratorAsync(const RegisterDelegatedAdministratorRequestT& request, const RegisterDelegatedAdministratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::RegisterDelegatedAdministrator, request, handler, context);
        }

        /**
         * <p>Removes the specified account from the organization.</p> <p>The removed
         * account becomes a standalone account that isn't a member of any organization.
         * It's no longer subject to any policies and is responsible for its own bill
         * payments. The organization's management account is no longer charged for any
         * expenses accrued by the member account after it's removed from the
         * organization.</p> <p>This operation can be called only from the organization's
         * management account. Member accounts can remove themselves with
         * <a>LeaveOrganization</a> instead.</p>  <ul> <li> <p>You can remove an
         * account from your organization only if the account is configured with the
         * information required to operate as a standalone account. When you create an
         * account in an organization using the Organizations console, API, or CLI
         * commands, the information required of standalone accounts is <i>not</i>
         * automatically collected. For more information, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_account-before-remove.html">Considerations
         * before removing an account from an organization</a> in the <i>Organizations User
         * Guide</i>.</p> </li> <li> <p>The account that you want to leave must not be a
         * delegated administrator account for any Amazon Web Services service enabled for
         * your organization. If the account is a delegated administrator, you must first
         * change the delegated administrator account to another account that is remaining
         * in the organization.</p> </li> <li> <p>After the account leaves the
         * organization, all tags that were attached to the account object in the
         * organization are deleted. Amazon Web Services accounts outside of an
         * organization do not support tags.</p> </li> </ul> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/RemoveAccountFromOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAccountFromOrganizationOutcome RemoveAccountFromOrganization(const Model::RemoveAccountFromOrganizationRequest& request) const;

        /**
         * A Callable wrapper for RemoveAccountFromOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveAccountFromOrganizationRequestT = Model::RemoveAccountFromOrganizationRequest>
        Model::RemoveAccountFromOrganizationOutcomeCallable RemoveAccountFromOrganizationCallable(const RemoveAccountFromOrganizationRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::RemoveAccountFromOrganization, request);
        }

        /**
         * An Async wrapper for RemoveAccountFromOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveAccountFromOrganizationRequestT = Model::RemoveAccountFromOrganizationRequest>
        void RemoveAccountFromOrganizationAsync(const RemoveAccountFromOrganizationRequestT& request, const RemoveAccountFromOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::RemoveAccountFromOrganization, request, handler, context);
        }

        /**
         * <p>Adds one or more tags to the specified resource.</p> <p>Currently, you can
         * attach tags to the following resources in Organizations.</p> <ul> <li> <p>Amazon
         * Web Services account</p> </li> <li> <p>Organization root</p> </li> <li>
         * <p>Organizational unit (OU)</p> </li> <li> <p>Policy (any type)</p> </li> </ul>
         * <p>This operation can be called only from the organization's management account
         * or by a member account that is a delegated administrator for an Amazon Web
         * Services service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes any tags with the specified keys from the specified resource.</p>
         * <p>You can attach tags to the following resources in Organizations.</p> <ul>
         * <li> <p>Amazon Web Services account</p> </li> <li> <p>Organization root</p>
         * </li> <li> <p>Organizational unit (OU)</p> </li> <li> <p>Policy (any type)</p>
         * </li> </ul> <p>This operation can be called only from the organization's
         * management account or by a member account that is a delegated administrator for
         * an Amazon Web Services service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Renames the specified organizational unit (OU). The ID and ARN don't change.
         * The child OUs and accounts remain in place, and any attached policies of the OU
         * remain attached.</p> <p>This operation can be called only from the
         * organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/UpdateOrganizationalUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOrganizationalUnitOutcome UpdateOrganizationalUnit(const Model::UpdateOrganizationalUnitRequest& request) const;

        /**
         * A Callable wrapper for UpdateOrganizationalUnit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateOrganizationalUnitRequestT = Model::UpdateOrganizationalUnitRequest>
        Model::UpdateOrganizationalUnitOutcomeCallable UpdateOrganizationalUnitCallable(const UpdateOrganizationalUnitRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::UpdateOrganizationalUnit, request);
        }

        /**
         * An Async wrapper for UpdateOrganizationalUnit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateOrganizationalUnitRequestT = Model::UpdateOrganizationalUnitRequest>
        void UpdateOrganizationalUnitAsync(const UpdateOrganizationalUnitRequestT& request, const UpdateOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::UpdateOrganizationalUnit, request, handler, context);
        }

        /**
         * <p>Updates an existing policy with a new name, description, or content. If you
         * don't supply any parameter, that value remains unchanged. You can't change a
         * policy's type.</p> <p>This operation can be called only from the organization's
         * management account or by a member account that is a delegated administrator for
         * an Amazon Web Services service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/UpdatePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePolicyOutcome UpdatePolicy(const Model::UpdatePolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdatePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePolicyRequestT = Model::UpdatePolicyRequest>
        Model::UpdatePolicyOutcomeCallable UpdatePolicyCallable(const UpdatePolicyRequestT& request) const
        {
            return SubmitCallable(&OrganizationsClient::UpdatePolicy, request);
        }

        /**
         * An Async wrapper for UpdatePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePolicyRequestT = Model::UpdatePolicyRequest>
        void UpdatePolicyAsync(const UpdatePolicyRequestT& request, const UpdatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&OrganizationsClient::UpdatePolicy, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<OrganizationsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<OrganizationsClient>;
      void init(const OrganizationsClientConfiguration& clientConfiguration);

      OrganizationsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<OrganizationsEndpointProviderBase> m_endpointProvider;
  };

} // namespace Organizations
} // namespace Aws
