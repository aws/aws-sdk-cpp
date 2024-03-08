/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/SecurityHubServiceClientModel.h>

namespace Aws
{
namespace SecurityHub
{
  /**
   * <p>Security Hub provides you with a comprehensive view of your security state in
   * Amazon Web Services and helps you assess your Amazon Web Services environment
   * against security industry standards and best practices.</p> <p>Security Hub
   * collects security data across Amazon Web Services accounts, Amazon Web Services,
   * and supported third-party products and helps you analyze your security trends
   * and identify the highest priority security issues.</p> <p>To help you manage the
   * security state of your organization, Security Hub supports multiple security
   * standards. These include the Amazon Web Services Foundational Security Best
   * Practices (FSBP) standard developed by Amazon Web Services, and external
   * compliance frameworks such as the Center for Internet Security (CIS), the
   * Payment Card Industry Data Security Standard (PCI DSS), and the National
   * Institute of Standards and Technology (NIST). Each standard includes several
   * security controls, each of which represents a security best practice. Security
   * Hub runs checks against security controls and generates control findings to help
   * you assess your compliance against security best practices.</p> <p>In addition
   * to generating control findings, Security Hub also receives findings from other
   * Amazon Web Services, such as Amazon GuardDuty and Amazon Inspector, and
   * supported third-party products. This gives you a single pane of glass into a
   * variety of security-related issues. You can also send Security Hub findings to
   * other Amazon Web Services and supported third-party products.</p> <p>Security
   * Hub offers automation features that help you triage and remediate security
   * issues. For example, you can use automation rules to automatically update
   * critical findings when a security check fails. You can also leverage the
   * integration with Amazon EventBridge to trigger automatic responses to specific
   * findings.</p> <p>This guide, the <i>Security Hub API Reference</i>, provides
   * information about the Security Hub API. This includes supported resources, HTTP
   * methods, parameters, and schemas. If you're new to Security Hub, you might find
   * it helpful to also review the <a
   * href="https://docs.aws.amazon.com/securityhub/latest/userguide/what-is-securityhub.html">
   * <i>Security Hub User Guide</i> </a>. The user guide explains key concepts and
   * provides procedures that demonstrate how to use Security Hub features. It also
   * provides information about topics such as integrating Security Hub with other
   * Amazon Web Services.</p> <p>In addition to interacting with Security Hub by
   * making calls to the Security Hub API, you can use a current version of an Amazon
   * Web Services command line tool or SDK. Amazon Web Services provides tools and
   * SDKs that consist of libraries and sample code for various languages and
   * platforms, such as PowerShell, Java, Go, Python, C++, and .NET. These tools and
   * SDKs provide convenient, programmatic access to Security Hub and other Amazon
   * Web Services . They also handle tasks such as signing requests, managing errors,
   * and retrying requests automatically. For information about installing and using
   * the Amazon Web Services tools and SDKs, see <a
   * href="http://aws.amazon.com/developer/tools/">Tools to Build on Amazon Web
   * Services</a>.</p> <p>With the exception of operations that are related to
   * central configuration, Security Hub API requests are executed only in the Amazon
   * Web Services Region that is currently active or in the specific Amazon Web
   * Services Region that you specify in your request. Any configuration or settings
   * change that results from the operation is applied only to that Region. To make
   * the same change in other Regions, call the same API operation in each Region in
   * which you want to apply the change. When you use central configuration, API
   * requests for enabling Security Hub, standards, and controls are executed in the
   * home Region and all linked Regions. For a list of central configuration
   * operations, see the <a
   * href="https://docs.aws.amazon.com/securityhub/latest/userguide/central-configuration-intro.html#central-configuration-concepts">Central
   * configuration terms and concepts</a> section of the <i>Security Hub User
   * Guide</i>.</p> <p>The following throttling limits apply to Security Hub API
   * operations.</p> <ul> <li> <p> <code>BatchEnableStandards</code> -
   * <code>RateLimit</code> of 1 request per second. <code>BurstLimit</code> of 1
   * request per second.</p> </li> <li> <p> <code>GetFindings</code> -
   * <code>RateLimit</code> of 3 requests per second. <code>BurstLimit</code> of 6
   * requests per second.</p> </li> <li> <p> <code>BatchImportFindings</code> -
   * <code>RateLimit</code> of 10 requests per second. <code>BurstLimit</code> of 30
   * requests per second.</p> </li> <li> <p> <code>BatchUpdateFindings</code> -
   * <code>RateLimit</code> of 10 requests per second. <code>BurstLimit</code> of 30
   * requests per second.</p> </li> <li> <p> <code>UpdateStandardsControl</code> -
   * <code>RateLimit</code> of 1 request per second. <code>BurstLimit</code> of 5
   * requests per second.</p> </li> <li> <p>All other operations -
   * <code>RateLimit</code> of 10 requests per second. <code>BurstLimit</code> of 30
   * requests per second.</p> </li> </ul>
   */
  class AWS_SECURITYHUB_API SecurityHubClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SecurityHubClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SecurityHubClientConfiguration ClientConfigurationType;
      typedef SecurityHubEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityHubClient(const Aws::SecurityHub::SecurityHubClientConfiguration& clientConfiguration = Aws::SecurityHub::SecurityHubClientConfiguration(),
                          std::shared_ptr<SecurityHubEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityHubClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<SecurityHubEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::SecurityHub::SecurityHubClientConfiguration& clientConfiguration = Aws::SecurityHub::SecurityHubClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SecurityHubClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<SecurityHubEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::SecurityHub::SecurityHubClientConfiguration& clientConfiguration = Aws::SecurityHub::SecurityHubClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityHubClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecurityHubClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SecurityHubClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SecurityHubClient();

        /**
         * <p>Accepts the invitation to be a member account and be monitored by the
         * Security Hub administrator account that the invitation was sent from.</p>
         * <p>This operation is only used by member accounts that are not added through
         * Organizations.</p> <p>When the member account accepts the invitation, permission
         * is granted to the administrator account to view findings generated in the member
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AcceptAdministratorInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptAdministratorInvitationOutcome AcceptAdministratorInvitation(const Model::AcceptAdministratorInvitationRequest& request) const;

        /**
         * A Callable wrapper for AcceptAdministratorInvitation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcceptAdministratorInvitationRequestT = Model::AcceptAdministratorInvitationRequest>
        Model::AcceptAdministratorInvitationOutcomeCallable AcceptAdministratorInvitationCallable(const AcceptAdministratorInvitationRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::AcceptAdministratorInvitation, request);
        }

        /**
         * An Async wrapper for AcceptAdministratorInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptAdministratorInvitationRequestT = Model::AcceptAdministratorInvitationRequest>
        void AcceptAdministratorInvitationAsync(const AcceptAdministratorInvitationRequestT& request, const AcceptAdministratorInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::AcceptAdministratorInvitation, request, handler, context);
        }

        /**
         * <p> Deletes one or more automation rules. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchDeleteAutomationRules">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteAutomationRulesOutcome BatchDeleteAutomationRules(const Model::BatchDeleteAutomationRulesRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteAutomationRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteAutomationRulesRequestT = Model::BatchDeleteAutomationRulesRequest>
        Model::BatchDeleteAutomationRulesOutcomeCallable BatchDeleteAutomationRulesCallable(const BatchDeleteAutomationRulesRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::BatchDeleteAutomationRules, request);
        }

        /**
         * An Async wrapper for BatchDeleteAutomationRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteAutomationRulesRequestT = Model::BatchDeleteAutomationRulesRequest>
        void BatchDeleteAutomationRulesAsync(const BatchDeleteAutomationRulesRequestT& request, const BatchDeleteAutomationRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::BatchDeleteAutomationRules, request, handler, context);
        }

        /**
         * <p>Disables the standards specified by the provided
         * <code>StandardsSubscriptionArns</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards.html">Security
         * Standards</a> section of the <i>Security Hub User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchDisableStandards">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisableStandardsOutcome BatchDisableStandards(const Model::BatchDisableStandardsRequest& request) const;

        /**
         * A Callable wrapper for BatchDisableStandards that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDisableStandardsRequestT = Model::BatchDisableStandardsRequest>
        Model::BatchDisableStandardsOutcomeCallable BatchDisableStandardsCallable(const BatchDisableStandardsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::BatchDisableStandards, request);
        }

        /**
         * An Async wrapper for BatchDisableStandards that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDisableStandardsRequestT = Model::BatchDisableStandardsRequest>
        void BatchDisableStandardsAsync(const BatchDisableStandardsRequestT& request, const BatchDisableStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::BatchDisableStandards, request, handler, context);
        }

        /**
         * <p>Enables the standards specified by the provided <code>StandardsArn</code>. To
         * obtain the ARN for a standard, use the <code>DescribeStandards</code>
         * operation.</p> <p>For more information, see the <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-standards.html">Security
         * Standards</a> section of the <i>Security Hub User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchEnableStandards">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchEnableStandardsOutcome BatchEnableStandards(const Model::BatchEnableStandardsRequest& request) const;

        /**
         * A Callable wrapper for BatchEnableStandards that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchEnableStandardsRequestT = Model::BatchEnableStandardsRequest>
        Model::BatchEnableStandardsOutcomeCallable BatchEnableStandardsCallable(const BatchEnableStandardsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::BatchEnableStandards, request);
        }

        /**
         * An Async wrapper for BatchEnableStandards that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchEnableStandardsRequestT = Model::BatchEnableStandardsRequest>
        void BatchEnableStandardsAsync(const BatchEnableStandardsRequestT& request, const BatchEnableStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::BatchEnableStandards, request, handler, context);
        }

        /**
         * <p> Retrieves a list of details for automation rules based on rule Amazon
         * Resource Names (ARNs). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchGetAutomationRules">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetAutomationRulesOutcome BatchGetAutomationRules(const Model::BatchGetAutomationRulesRequest& request) const;

        /**
         * A Callable wrapper for BatchGetAutomationRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetAutomationRulesRequestT = Model::BatchGetAutomationRulesRequest>
        Model::BatchGetAutomationRulesOutcomeCallable BatchGetAutomationRulesCallable(const BatchGetAutomationRulesRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::BatchGetAutomationRules, request);
        }

        /**
         * An Async wrapper for BatchGetAutomationRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetAutomationRulesRequestT = Model::BatchGetAutomationRulesRequest>
        void BatchGetAutomationRulesAsync(const BatchGetAutomationRulesRequestT& request, const BatchGetAutomationRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::BatchGetAutomationRules, request, handler, context);
        }

        /**
         * <p> Returns associations between an Security Hub configuration and a batch of
         * target accounts, organizational units, or the root. Only the Security Hub
         * delegated administrator can invoke this operation from the home Region. A
         * configuration can refer to a configuration policy or to a self-managed
         * configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchGetConfigurationPolicyAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetConfigurationPolicyAssociationsOutcome BatchGetConfigurationPolicyAssociations(const Model::BatchGetConfigurationPolicyAssociationsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetConfigurationPolicyAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetConfigurationPolicyAssociationsRequestT = Model::BatchGetConfigurationPolicyAssociationsRequest>
        Model::BatchGetConfigurationPolicyAssociationsOutcomeCallable BatchGetConfigurationPolicyAssociationsCallable(const BatchGetConfigurationPolicyAssociationsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::BatchGetConfigurationPolicyAssociations, request);
        }

        /**
         * An Async wrapper for BatchGetConfigurationPolicyAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetConfigurationPolicyAssociationsRequestT = Model::BatchGetConfigurationPolicyAssociationsRequest>
        void BatchGetConfigurationPolicyAssociationsAsync(const BatchGetConfigurationPolicyAssociationsRequestT& request, const BatchGetConfigurationPolicyAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::BatchGetConfigurationPolicyAssociations, request, handler, context);
        }

        /**
         * <p> Provides details about a batch of security controls for the current Amazon
         * Web Services account and Amazon Web Services Region. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchGetSecurityControls">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetSecurityControlsOutcome BatchGetSecurityControls(const Model::BatchGetSecurityControlsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetSecurityControls that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetSecurityControlsRequestT = Model::BatchGetSecurityControlsRequest>
        Model::BatchGetSecurityControlsOutcomeCallable BatchGetSecurityControlsCallable(const BatchGetSecurityControlsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::BatchGetSecurityControls, request);
        }

        /**
         * An Async wrapper for BatchGetSecurityControls that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetSecurityControlsRequestT = Model::BatchGetSecurityControlsRequest>
        void BatchGetSecurityControlsAsync(const BatchGetSecurityControlsRequestT& request, const BatchGetSecurityControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::BatchGetSecurityControls, request, handler, context);
        }

        /**
         * <p> For a batch of security controls and standards, identifies whether each
         * control is currently enabled or disabled in a standard. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchGetStandardsControlAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetStandardsControlAssociationsOutcome BatchGetStandardsControlAssociations(const Model::BatchGetStandardsControlAssociationsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetStandardsControlAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetStandardsControlAssociationsRequestT = Model::BatchGetStandardsControlAssociationsRequest>
        Model::BatchGetStandardsControlAssociationsOutcomeCallable BatchGetStandardsControlAssociationsCallable(const BatchGetStandardsControlAssociationsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::BatchGetStandardsControlAssociations, request);
        }

        /**
         * An Async wrapper for BatchGetStandardsControlAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetStandardsControlAssociationsRequestT = Model::BatchGetStandardsControlAssociationsRequest>
        void BatchGetStandardsControlAssociationsAsync(const BatchGetStandardsControlAssociationsRequestT& request, const BatchGetStandardsControlAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::BatchGetStandardsControlAssociations, request, handler, context);
        }

        /**
         * <p>Imports security findings generated by a finding provider into Security Hub.
         * This action is requested by the finding provider to import its findings into
         * Security Hub.</p> <p> <code>BatchImportFindings</code> must be called by one of
         * the following:</p> <ul> <li> <p>The Amazon Web Services account that is
         * associated with a finding if you are using the <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-custom-providers.html#securityhub-custom-providers-bfi-reqs">default
         * product ARN</a> or are a partner sending findings from within a customer's
         * Amazon Web Services account. In these cases, the identifier of the account that
         * you are calling <code>BatchImportFindings</code> from needs to be the same as
         * the <code>AwsAccountId</code> attribute for the finding.</p> </li> <li> <p>An
         * Amazon Web Services account that Security Hub has allow-listed for an official
         * partner integration. In this case, you can call <code>BatchImportFindings</code>
         * from the allow-listed account and send findings from different customer accounts
         * in the same batch.</p> </li> </ul> <p>The maximum allowed size for a finding is
         * 240 Kb. An error is returned for any finding larger than 240 Kb.</p> <p>After a
         * finding is created, <code>BatchImportFindings</code> cannot be used to update
         * the following finding fields and objects, which Security Hub customers use to
         * manage their investigation workflow.</p> <ul> <li> <p> <code>Note</code> </p>
         * </li> <li> <p> <code>UserDefinedFields</code> </p> </li> <li> <p>
         * <code>VerificationState</code> </p> </li> <li> <p> <code>Workflow</code> </p>
         * </li> </ul> <p>Finding providers also should not use
         * <code>BatchImportFindings</code> to update the following attributes.</p> <ul>
         * <li> <p> <code>Confidence</code> </p> </li> <li> <p> <code>Criticality</code>
         * </p> </li> <li> <p> <code>RelatedFindings</code> </p> </li> <li> <p>
         * <code>Severity</code> </p> </li> <li> <p> <code>Types</code> </p> </li> </ul>
         * <p>Instead, finding providers use <code>FindingProviderFields</code> to provide
         * values for these attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchImportFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchImportFindingsOutcome BatchImportFindings(const Model::BatchImportFindingsRequest& request) const;

        /**
         * A Callable wrapper for BatchImportFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchImportFindingsRequestT = Model::BatchImportFindingsRequest>
        Model::BatchImportFindingsOutcomeCallable BatchImportFindingsCallable(const BatchImportFindingsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::BatchImportFindings, request);
        }

        /**
         * An Async wrapper for BatchImportFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchImportFindingsRequestT = Model::BatchImportFindingsRequest>
        void BatchImportFindingsAsync(const BatchImportFindingsRequestT& request, const BatchImportFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::BatchImportFindings, request, handler, context);
        }

        /**
         * <p> Updates one or more automation rules based on rule Amazon Resource Names
         * (ARNs) and input parameters. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchUpdateAutomationRules">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateAutomationRulesOutcome BatchUpdateAutomationRules(const Model::BatchUpdateAutomationRulesRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateAutomationRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpdateAutomationRulesRequestT = Model::BatchUpdateAutomationRulesRequest>
        Model::BatchUpdateAutomationRulesOutcomeCallable BatchUpdateAutomationRulesCallable(const BatchUpdateAutomationRulesRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::BatchUpdateAutomationRules, request);
        }

        /**
         * An Async wrapper for BatchUpdateAutomationRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpdateAutomationRulesRequestT = Model::BatchUpdateAutomationRulesRequest>
        void BatchUpdateAutomationRulesAsync(const BatchUpdateAutomationRulesRequestT& request, const BatchUpdateAutomationRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::BatchUpdateAutomationRules, request, handler, context);
        }

        /**
         * <p>Used by Security Hub customers to update information about their
         * investigation into a finding. Requested by administrator accounts or member
         * accounts. Administrator accounts can update findings for their account and their
         * member accounts. Member accounts can update findings for their account.</p>
         * <p>Updates from <code>BatchUpdateFindings</code> do not affect the value of
         * <code>UpdatedAt</code> for a finding.</p> <p>Administrator and member accounts
         * can use <code>BatchUpdateFindings</code> to update the following finding fields
         * and objects.</p> <ul> <li> <p> <code>Confidence</code> </p> </li> <li> <p>
         * <code>Criticality</code> </p> </li> <li> <p> <code>Note</code> </p> </li> <li>
         * <p> <code>RelatedFindings</code> </p> </li> <li> <p> <code>Severity</code> </p>
         * </li> <li> <p> <code>Types</code> </p> </li> <li> <p>
         * <code>UserDefinedFields</code> </p> </li> <li> <p>
         * <code>VerificationState</code> </p> </li> <li> <p> <code>Workflow</code> </p>
         * </li> </ul> <p>You can configure IAM policies to restrict access to fields and
         * field values. For example, you might not want member accounts to be able to
         * suppress findings or change the finding severity. See <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/finding-update-batchupdatefindings.html#batchupdatefindings-configure-access">Configuring
         * access to BatchUpdateFindings</a> in the <i>Security Hub User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchUpdateFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateFindingsOutcome BatchUpdateFindings(const Model::BatchUpdateFindingsRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpdateFindingsRequestT = Model::BatchUpdateFindingsRequest>
        Model::BatchUpdateFindingsOutcomeCallable BatchUpdateFindingsCallable(const BatchUpdateFindingsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::BatchUpdateFindings, request);
        }

        /**
         * An Async wrapper for BatchUpdateFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpdateFindingsRequestT = Model::BatchUpdateFindingsRequest>
        void BatchUpdateFindingsAsync(const BatchUpdateFindingsRequestT& request, const BatchUpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::BatchUpdateFindings, request, handler, context);
        }

        /**
         * <p> For a batch of security controls and standards, this operation updates the
         * enablement status of a control in a standard. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchUpdateStandardsControlAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateStandardsControlAssociationsOutcome BatchUpdateStandardsControlAssociations(const Model::BatchUpdateStandardsControlAssociationsRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateStandardsControlAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpdateStandardsControlAssociationsRequestT = Model::BatchUpdateStandardsControlAssociationsRequest>
        Model::BatchUpdateStandardsControlAssociationsOutcomeCallable BatchUpdateStandardsControlAssociationsCallable(const BatchUpdateStandardsControlAssociationsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::BatchUpdateStandardsControlAssociations, request);
        }

        /**
         * An Async wrapper for BatchUpdateStandardsControlAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpdateStandardsControlAssociationsRequestT = Model::BatchUpdateStandardsControlAssociationsRequest>
        void BatchUpdateStandardsControlAssociationsAsync(const BatchUpdateStandardsControlAssociationsRequestT& request, const BatchUpdateStandardsControlAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::BatchUpdateStandardsControlAssociations, request, handler, context);
        }

        /**
         * <p>Creates a custom action target in Security Hub.</p> <p>You can use custom
         * actions on findings and insights in Security Hub to trigger target actions in
         * Amazon CloudWatch Events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateActionTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateActionTargetOutcome CreateActionTarget(const Model::CreateActionTargetRequest& request) const;

        /**
         * A Callable wrapper for CreateActionTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateActionTargetRequestT = Model::CreateActionTargetRequest>
        Model::CreateActionTargetOutcomeCallable CreateActionTargetCallable(const CreateActionTargetRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::CreateActionTarget, request);
        }

        /**
         * An Async wrapper for CreateActionTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateActionTargetRequestT = Model::CreateActionTargetRequest>
        void CreateActionTargetAsync(const CreateActionTargetRequestT& request, const CreateActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::CreateActionTarget, request, handler, context);
        }

        /**
         * <p> Creates an automation rule based on input parameters. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateAutomationRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAutomationRuleOutcome CreateAutomationRule(const Model::CreateAutomationRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateAutomationRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAutomationRuleRequestT = Model::CreateAutomationRuleRequest>
        Model::CreateAutomationRuleOutcomeCallable CreateAutomationRuleCallable(const CreateAutomationRuleRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::CreateAutomationRule, request);
        }

        /**
         * An Async wrapper for CreateAutomationRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAutomationRuleRequestT = Model::CreateAutomationRuleRequest>
        void CreateAutomationRuleAsync(const CreateAutomationRuleRequestT& request, const CreateAutomationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::CreateAutomationRule, request, handler, context);
        }

        /**
         * <p> Creates a configuration policy with the defined configuration. Only the
         * Security Hub delegated administrator can invoke this operation from the home
         * Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateConfigurationPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationPolicyOutcome CreateConfigurationPolicy(const Model::CreateConfigurationPolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateConfigurationPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConfigurationPolicyRequestT = Model::CreateConfigurationPolicyRequest>
        Model::CreateConfigurationPolicyOutcomeCallable CreateConfigurationPolicyCallable(const CreateConfigurationPolicyRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::CreateConfigurationPolicy, request);
        }

        /**
         * An Async wrapper for CreateConfigurationPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfigurationPolicyRequestT = Model::CreateConfigurationPolicyRequest>
        void CreateConfigurationPolicyAsync(const CreateConfigurationPolicyRequestT& request, const CreateConfigurationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::CreateConfigurationPolicy, request, handler, context);
        }

        /**
         * <p>Used to enable finding aggregation. Must be called from the aggregation
         * Region.</p> <p>For more details about cross-Region replication, see <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/finding-aggregation.html">Configuring
         * finding aggregation</a> in the <i>Security Hub User Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateFindingAggregator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFindingAggregatorOutcome CreateFindingAggregator(const Model::CreateFindingAggregatorRequest& request) const;

        /**
         * A Callable wrapper for CreateFindingAggregator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFindingAggregatorRequestT = Model::CreateFindingAggregatorRequest>
        Model::CreateFindingAggregatorOutcomeCallable CreateFindingAggregatorCallable(const CreateFindingAggregatorRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::CreateFindingAggregator, request);
        }

        /**
         * An Async wrapper for CreateFindingAggregator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFindingAggregatorRequestT = Model::CreateFindingAggregatorRequest>
        void CreateFindingAggregatorAsync(const CreateFindingAggregatorRequestT& request, const CreateFindingAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::CreateFindingAggregator, request, handler, context);
        }

        /**
         * <p>Creates a custom insight in Security Hub. An insight is a consolidation of
         * findings that relate to a security issue that requires attention or
         * remediation.</p> <p>To group the related findings in the insight, use the
         * <code>GroupByAttribute</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInsightOutcome CreateInsight(const Model::CreateInsightRequest& request) const;

        /**
         * A Callable wrapper for CreateInsight that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInsightRequestT = Model::CreateInsightRequest>
        Model::CreateInsightOutcomeCallable CreateInsightCallable(const CreateInsightRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::CreateInsight, request);
        }

        /**
         * An Async wrapper for CreateInsight that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInsightRequestT = Model::CreateInsightRequest>
        void CreateInsightAsync(const CreateInsightRequestT& request, const CreateInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::CreateInsight, request, handler, context);
        }

        /**
         * <p>Creates a member association in Security Hub between the specified accounts
         * and the account used to make the request, which is the administrator account. If
         * you are integrated with Organizations, then the administrator account is
         * designated by the organization management account.</p> <p>
         * <code>CreateMembers</code> is always used to add accounts that are not
         * organization members.</p> <p>For accounts that are managed using Organizations,
         * <code>CreateMembers</code> is only used in the following cases:</p> <ul> <li>
         * <p>Security Hub is not configured to automatically add new organization
         * accounts.</p> </li> <li> <p>The account was disassociated or deleted in Security
         * Hub.</p> </li> </ul> <p>This action can only be used by an account that has
         * Security Hub enabled. To enable Security Hub, you can use the
         * <code>EnableSecurityHub</code> operation.</p> <p>For accounts that are not
         * organization members, you create the account association and then send an
         * invitation to the member account. To send the invitation, you use the
         * <code>InviteMembers</code> operation. If the account owner accepts the
         * invitation, the account becomes a member account in Security Hub.</p>
         * <p>Accounts that are managed using Organizations do not receive an invitation.
         * They automatically become a member account in Security Hub.</p> <ul> <li> <p>If
         * the organization account does not have Security Hub enabled, then Security Hub
         * and the default standards are automatically enabled. Note that Security Hub
         * cannot be enabled automatically for the organization management account. The
         * organization management account must enable Security Hub before the
         * administrator account enables it as a member account.</p> </li> <li> <p>For
         * organization accounts that already have Security Hub enabled, Security Hub does
         * not make any other changes to those accounts. It does not change their enabled
         * standards or controls.</p> </li> </ul> <p>A permissions policy is added that
         * permits the administrator account to view the findings generated in the member
         * account.</p> <p>To remove the association between the administrator and member
         * accounts, use the <code>DisassociateFromMasterAccount</code> or
         * <code>DisassociateMembers</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CreateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMembersOutcome CreateMembers(const Model::CreateMembersRequest& request) const;

        /**
         * A Callable wrapper for CreateMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMembersRequestT = Model::CreateMembersRequest>
        Model::CreateMembersOutcomeCallable CreateMembersCallable(const CreateMembersRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::CreateMembers, request);
        }

        /**
         * An Async wrapper for CreateMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMembersRequestT = Model::CreateMembersRequest>
        void CreateMembersAsync(const CreateMembersRequestT& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::CreateMembers, request, handler, context);
        }

        /**
         * <p>Declines invitations to become a member account.</p> <p>A prospective member
         * account uses this operation to decline an invitation to become a member.</p>
         * <p>This operation is only called by member accounts that aren't part of an
         * organization. Organization accounts don't receive invitations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeclineInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeclineInvitationsOutcome DeclineInvitations(const Model::DeclineInvitationsRequest& request) const;

        /**
         * A Callable wrapper for DeclineInvitations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeclineInvitationsRequestT = Model::DeclineInvitationsRequest>
        Model::DeclineInvitationsOutcomeCallable DeclineInvitationsCallable(const DeclineInvitationsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::DeclineInvitations, request);
        }

        /**
         * An Async wrapper for DeclineInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeclineInvitationsRequestT = Model::DeclineInvitationsRequest>
        void DeclineInvitationsAsync(const DeclineInvitationsRequestT& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::DeclineInvitations, request, handler, context);
        }

        /**
         * <p>Deletes a custom action target from Security Hub.</p> <p>Deleting a custom
         * action target does not affect any findings or insights that were already sent to
         * Amazon CloudWatch Events using the custom action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteActionTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteActionTargetOutcome DeleteActionTarget(const Model::DeleteActionTargetRequest& request) const;

        /**
         * A Callable wrapper for DeleteActionTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteActionTargetRequestT = Model::DeleteActionTargetRequest>
        Model::DeleteActionTargetOutcomeCallable DeleteActionTargetCallable(const DeleteActionTargetRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::DeleteActionTarget, request);
        }

        /**
         * An Async wrapper for DeleteActionTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteActionTargetRequestT = Model::DeleteActionTargetRequest>
        void DeleteActionTargetAsync(const DeleteActionTargetRequestT& request, const DeleteActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::DeleteActionTarget, request, handler, context);
        }

        /**
         * <p> Deletes a configuration policy. Only the Security Hub delegated
         * administrator can invoke this operation from the home Region. For the deletion
         * to succeed, you must first disassociate a configuration policy from target
         * accounts, organizational units, or the root by invoking the
         * <code>StartConfigurationPolicyDisassociation</code> operation. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteConfigurationPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationPolicyOutcome DeleteConfigurationPolicy(const Model::DeleteConfigurationPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfigurationPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfigurationPolicyRequestT = Model::DeleteConfigurationPolicyRequest>
        Model::DeleteConfigurationPolicyOutcomeCallable DeleteConfigurationPolicyCallable(const DeleteConfigurationPolicyRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::DeleteConfigurationPolicy, request);
        }

        /**
         * An Async wrapper for DeleteConfigurationPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfigurationPolicyRequestT = Model::DeleteConfigurationPolicyRequest>
        void DeleteConfigurationPolicyAsync(const DeleteConfigurationPolicyRequestT& request, const DeleteConfigurationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::DeleteConfigurationPolicy, request, handler, context);
        }

        /**
         * <p>Deletes a finding aggregator. When you delete the finding aggregator, you
         * stop finding aggregation.</p> <p>When you stop finding aggregation, findings
         * that were already aggregated to the aggregation Region are still visible from
         * the aggregation Region. New findings and finding updates are not aggregated.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteFindingAggregator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFindingAggregatorOutcome DeleteFindingAggregator(const Model::DeleteFindingAggregatorRequest& request) const;

        /**
         * A Callable wrapper for DeleteFindingAggregator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFindingAggregatorRequestT = Model::DeleteFindingAggregatorRequest>
        Model::DeleteFindingAggregatorOutcomeCallable DeleteFindingAggregatorCallable(const DeleteFindingAggregatorRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::DeleteFindingAggregator, request);
        }

        /**
         * An Async wrapper for DeleteFindingAggregator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFindingAggregatorRequestT = Model::DeleteFindingAggregatorRequest>
        void DeleteFindingAggregatorAsync(const DeleteFindingAggregatorRequestT& request, const DeleteFindingAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::DeleteFindingAggregator, request, handler, context);
        }

        /**
         * <p>Deletes the insight specified by the <code>InsightArn</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInsightOutcome DeleteInsight(const Model::DeleteInsightRequest& request) const;

        /**
         * A Callable wrapper for DeleteInsight that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInsightRequestT = Model::DeleteInsightRequest>
        Model::DeleteInsightOutcomeCallable DeleteInsightCallable(const DeleteInsightRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::DeleteInsight, request);
        }

        /**
         * An Async wrapper for DeleteInsight that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInsightRequestT = Model::DeleteInsightRequest>
        void DeleteInsightAsync(const DeleteInsightRequestT& request, const DeleteInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::DeleteInsight, request, handler, context);
        }

        /**
         * <p>Deletes invitations received by the Amazon Web Services account to become a
         * member account.</p> <p>A Security Hub administrator account can use this
         * operation to delete invitations sent to one or more member accounts.</p> <p>This
         * operation is only used to delete invitations that are sent to member accounts
         * that aren't part of an organization. Organization accounts don't receive
         * invitations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInvitationsOutcome DeleteInvitations(const Model::DeleteInvitationsRequest& request) const;

        /**
         * A Callable wrapper for DeleteInvitations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInvitationsRequestT = Model::DeleteInvitationsRequest>
        Model::DeleteInvitationsOutcomeCallable DeleteInvitationsCallable(const DeleteInvitationsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::DeleteInvitations, request);
        }

        /**
         * An Async wrapper for DeleteInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInvitationsRequestT = Model::DeleteInvitationsRequest>
        void DeleteInvitationsAsync(const DeleteInvitationsRequestT& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::DeleteInvitations, request, handler, context);
        }

        /**
         * <p>Deletes the specified member accounts from Security Hub.</p> <p>You can
         * invoke this API only to delete accounts that became members through invitation.
         * You can't invoke this API to delete accounts that belong to an Organizations
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DeleteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMembersOutcome DeleteMembers(const Model::DeleteMembersRequest& request) const;

        /**
         * A Callable wrapper for DeleteMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMembersRequestT = Model::DeleteMembersRequest>
        Model::DeleteMembersOutcomeCallable DeleteMembersCallable(const DeleteMembersRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::DeleteMembers, request);
        }

        /**
         * An Async wrapper for DeleteMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMembersRequestT = Model::DeleteMembersRequest>
        void DeleteMembersAsync(const DeleteMembersRequestT& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::DeleteMembers, request, handler, context);
        }

        /**
         * <p>Returns a list of the custom action targets in Security Hub in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeActionTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActionTargetsOutcome DescribeActionTargets(const Model::DescribeActionTargetsRequest& request) const;

        /**
         * A Callable wrapper for DescribeActionTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeActionTargetsRequestT = Model::DescribeActionTargetsRequest>
        Model::DescribeActionTargetsOutcomeCallable DescribeActionTargetsCallable(const DescribeActionTargetsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::DescribeActionTargets, request);
        }

        /**
         * An Async wrapper for DescribeActionTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeActionTargetsRequestT = Model::DescribeActionTargetsRequest>
        void DescribeActionTargetsAsync(const DescribeActionTargetsRequestT& request, const DescribeActionTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::DescribeActionTargets, request, handler, context);
        }

        /**
         * <p>Returns details about the Hub resource in your account, including the
         * <code>HubArn</code> and the time when you enabled Security Hub.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeHub">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHubOutcome DescribeHub(const Model::DescribeHubRequest& request) const;

        /**
         * A Callable wrapper for DescribeHub that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeHubRequestT = Model::DescribeHubRequest>
        Model::DescribeHubOutcomeCallable DescribeHubCallable(const DescribeHubRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::DescribeHub, request);
        }

        /**
         * An Async wrapper for DescribeHub that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeHubRequestT = Model::DescribeHubRequest>
        void DescribeHubAsync(const DescribeHubRequestT& request, const DescribeHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::DescribeHub, request, handler, context);
        }

        /**
         * <p>Returns information about the way your organization is configured in Security
         * Hub. Only the Security Hub administrator account can invoke this
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationConfigurationOutcome DescribeOrganizationConfiguration(const Model::DescribeOrganizationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrganizationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOrganizationConfigurationRequestT = Model::DescribeOrganizationConfigurationRequest>
        Model::DescribeOrganizationConfigurationOutcomeCallable DescribeOrganizationConfigurationCallable(const DescribeOrganizationConfigurationRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::DescribeOrganizationConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOrganizationConfigurationRequestT = Model::DescribeOrganizationConfigurationRequest>
        void DescribeOrganizationConfigurationAsync(const DescribeOrganizationConfigurationRequestT& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::DescribeOrganizationConfiguration, request, handler, context);
        }

        /**
         * <p>Returns information about product integrations in Security Hub.</p> <p>You
         * can optionally provide an integration ARN. If you provide an integration ARN,
         * then the results only include that integration.</p> <p>If you do not provide an
         * integration ARN, then the results include all of the available product
         * integrations. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeProducts">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProductsOutcome DescribeProducts(const Model::DescribeProductsRequest& request) const;

        /**
         * A Callable wrapper for DescribeProducts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeProductsRequestT = Model::DescribeProductsRequest>
        Model::DescribeProductsOutcomeCallable DescribeProductsCallable(const DescribeProductsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::DescribeProducts, request);
        }

        /**
         * An Async wrapper for DescribeProducts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProductsRequestT = Model::DescribeProductsRequest>
        void DescribeProductsAsync(const DescribeProductsRequestT& request, const DescribeProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::DescribeProducts, request, handler, context);
        }

        /**
         * <p>Returns a list of the available standards in Security Hub.</p> <p>For each
         * standard, the results include the standard ARN, the name, and a description.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeStandards">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStandardsOutcome DescribeStandards(const Model::DescribeStandardsRequest& request) const;

        /**
         * A Callable wrapper for DescribeStandards that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeStandardsRequestT = Model::DescribeStandardsRequest>
        Model::DescribeStandardsOutcomeCallable DescribeStandardsCallable(const DescribeStandardsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::DescribeStandards, request);
        }

        /**
         * An Async wrapper for DescribeStandards that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeStandardsRequestT = Model::DescribeStandardsRequest>
        void DescribeStandardsAsync(const DescribeStandardsRequestT& request, const DescribeStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::DescribeStandards, request, handler, context);
        }

        /**
         * <p>Returns a list of security standards controls.</p> <p>For each control, the
         * results include information about whether it is currently enabled, the severity,
         * and a link to remediation information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DescribeStandardsControls">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStandardsControlsOutcome DescribeStandardsControls(const Model::DescribeStandardsControlsRequest& request) const;

        /**
         * A Callable wrapper for DescribeStandardsControls that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeStandardsControlsRequestT = Model::DescribeStandardsControlsRequest>
        Model::DescribeStandardsControlsOutcomeCallable DescribeStandardsControlsCallable(const DescribeStandardsControlsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::DescribeStandardsControls, request);
        }

        /**
         * An Async wrapper for DescribeStandardsControls that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeStandardsControlsRequestT = Model::DescribeStandardsControlsRequest>
        void DescribeStandardsControlsAsync(const DescribeStandardsControlsRequestT& request, const DescribeStandardsControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::DescribeStandardsControls, request, handler, context);
        }

        /**
         * <p>Disables the integration of the specified product with Security Hub. After
         * the integration is disabled, findings from that product are no longer sent to
         * Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableImportFindingsForProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableImportFindingsForProductOutcome DisableImportFindingsForProduct(const Model::DisableImportFindingsForProductRequest& request) const;

        /**
         * A Callable wrapper for DisableImportFindingsForProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableImportFindingsForProductRequestT = Model::DisableImportFindingsForProductRequest>
        Model::DisableImportFindingsForProductOutcomeCallable DisableImportFindingsForProductCallable(const DisableImportFindingsForProductRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::DisableImportFindingsForProduct, request);
        }

        /**
         * An Async wrapper for DisableImportFindingsForProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableImportFindingsForProductRequestT = Model::DisableImportFindingsForProductRequest>
        void DisableImportFindingsForProductAsync(const DisableImportFindingsForProductRequestT& request, const DisableImportFindingsForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::DisableImportFindingsForProduct, request, handler, context);
        }

        /**
         * <p>Disables a Security Hub administrator account. Can only be called by the
         * organization management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableOrganizationAdminAccountOutcome DisableOrganizationAdminAccount(const Model::DisableOrganizationAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for DisableOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableOrganizationAdminAccountRequestT = Model::DisableOrganizationAdminAccountRequest>
        Model::DisableOrganizationAdminAccountOutcomeCallable DisableOrganizationAdminAccountCallable(const DisableOrganizationAdminAccountRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::DisableOrganizationAdminAccount, request);
        }

        /**
         * An Async wrapper for DisableOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableOrganizationAdminAccountRequestT = Model::DisableOrganizationAdminAccountRequest>
        void DisableOrganizationAdminAccountAsync(const DisableOrganizationAdminAccountRequestT& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::DisableOrganizationAdminAccount, request, handler, context);
        }

        /**
         * <p>Disables Security Hub in your account only in the current Amazon Web Services
         * Region. To disable Security Hub in all Regions, you must submit one request per
         * Region where you have enabled Security Hub.</p> <p>You can't disable Security
         * Hub in an account that is currently the Security Hub administrator.</p> <p>When
         * you disable Security Hub, your existing findings and insights and any Security
         * Hub configuration settings are deleted after 90 days and cannot be recovered.
         * Any standards that were enabled are disabled, and your administrator and member
         * account associations are removed.</p> <p>If you want to save your existing
         * findings, you must export them before you disable Security Hub.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisableSecurityHub">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableSecurityHubOutcome DisableSecurityHub(const Model::DisableSecurityHubRequest& request) const;

        /**
         * A Callable wrapper for DisableSecurityHub that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableSecurityHubRequestT = Model::DisableSecurityHubRequest>
        Model::DisableSecurityHubOutcomeCallable DisableSecurityHubCallable(const DisableSecurityHubRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::DisableSecurityHub, request);
        }

        /**
         * An Async wrapper for DisableSecurityHub that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableSecurityHubRequestT = Model::DisableSecurityHubRequest>
        void DisableSecurityHubAsync(const DisableSecurityHubRequestT& request, const DisableSecurityHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::DisableSecurityHub, request, handler, context);
        }

        /**
         * <p>Disassociates the current Security Hub member account from the associated
         * administrator account.</p> <p>This operation is only used by accounts that are
         * not part of an organization. For organization accounts, only the administrator
         * account can disassociate a member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateFromAdministratorAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFromAdministratorAccountOutcome DisassociateFromAdministratorAccount(const Model::DisassociateFromAdministratorAccountRequest& request) const;

        /**
         * A Callable wrapper for DisassociateFromAdministratorAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateFromAdministratorAccountRequestT = Model::DisassociateFromAdministratorAccountRequest>
        Model::DisassociateFromAdministratorAccountOutcomeCallable DisassociateFromAdministratorAccountCallable(const DisassociateFromAdministratorAccountRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::DisassociateFromAdministratorAccount, request);
        }

        /**
         * An Async wrapper for DisassociateFromAdministratorAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateFromAdministratorAccountRequestT = Model::DisassociateFromAdministratorAccountRequest>
        void DisassociateFromAdministratorAccountAsync(const DisassociateFromAdministratorAccountRequestT& request, const DisassociateFromAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::DisassociateFromAdministratorAccount, request, handler, context);
        }

        /**
         * <p>Disassociates the specified member accounts from the associated administrator
         * account.</p> <p>Can be used to disassociate both accounts that are managed using
         * Organizations and accounts that were invited manually.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DisassociateMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMembersOutcome DisassociateMembers(const Model::DisassociateMembersRequest& request) const;

        /**
         * A Callable wrapper for DisassociateMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateMembersRequestT = Model::DisassociateMembersRequest>
        Model::DisassociateMembersOutcomeCallable DisassociateMembersCallable(const DisassociateMembersRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::DisassociateMembers, request);
        }

        /**
         * An Async wrapper for DisassociateMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateMembersRequestT = Model::DisassociateMembersRequest>
        void DisassociateMembersAsync(const DisassociateMembersRequestT& request, const DisassociateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::DisassociateMembers, request, handler, context);
        }

        /**
         * <p>Enables the integration of a partner product with Security Hub. Integrated
         * products send findings to Security Hub.</p> <p>When you enable a product
         * integration, a permissions policy that grants permission for the product to send
         * findings to Security Hub is applied.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableImportFindingsForProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableImportFindingsForProductOutcome EnableImportFindingsForProduct(const Model::EnableImportFindingsForProductRequest& request) const;

        /**
         * A Callable wrapper for EnableImportFindingsForProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableImportFindingsForProductRequestT = Model::EnableImportFindingsForProductRequest>
        Model::EnableImportFindingsForProductOutcomeCallable EnableImportFindingsForProductCallable(const EnableImportFindingsForProductRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::EnableImportFindingsForProduct, request);
        }

        /**
         * An Async wrapper for EnableImportFindingsForProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableImportFindingsForProductRequestT = Model::EnableImportFindingsForProductRequest>
        void EnableImportFindingsForProductAsync(const EnableImportFindingsForProductRequestT& request, const EnableImportFindingsForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::EnableImportFindingsForProduct, request, handler, context);
        }

        /**
         * <p>Designates the Security Hub administrator account for an organization. Can
         * only be called by the organization management account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableOrganizationAdminAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableOrganizationAdminAccountOutcome EnableOrganizationAdminAccount(const Model::EnableOrganizationAdminAccountRequest& request) const;

        /**
         * A Callable wrapper for EnableOrganizationAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableOrganizationAdminAccountRequestT = Model::EnableOrganizationAdminAccountRequest>
        Model::EnableOrganizationAdminAccountOutcomeCallable EnableOrganizationAdminAccountCallable(const EnableOrganizationAdminAccountRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::EnableOrganizationAdminAccount, request);
        }

        /**
         * An Async wrapper for EnableOrganizationAdminAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableOrganizationAdminAccountRequestT = Model::EnableOrganizationAdminAccountRequest>
        void EnableOrganizationAdminAccountAsync(const EnableOrganizationAdminAccountRequestT& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::EnableOrganizationAdminAccount, request, handler, context);
        }

        /**
         * <p>Enables Security Hub for your account in the current Region or the Region you
         * specify in the request.</p> <p>When you enable Security Hub, you grant to
         * Security Hub the permissions necessary to gather findings from other services
         * that are integrated with Security Hub.</p> <p>When you use the
         * <code>EnableSecurityHub</code> operation to enable Security Hub, you also
         * automatically enable the following standards:</p> <ul> <li> <p>Center for
         * Internet Security (CIS) Amazon Web Services Foundations Benchmark v1.2.0</p>
         * </li> <li> <p>Amazon Web Services Foundational Security Best Practices</p> </li>
         * </ul> <p>Other standards are not automatically enabled. </p> <p>To opt out of
         * automatically enabled standards, set <code>EnableDefaultStandards</code> to
         * <code>false</code>.</p> <p>After you enable Security Hub, to enable a standard,
         * use the <code>BatchEnableStandards</code> operation. To disable a standard, use
         * the <code>BatchDisableStandards</code> operation.</p> <p>To learn more, see the
         * <a
         * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-settingup.html">setup
         * information</a> in the <i>Security Hub User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/EnableSecurityHub">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableSecurityHubOutcome EnableSecurityHub(const Model::EnableSecurityHubRequest& request) const;

        /**
         * A Callable wrapper for EnableSecurityHub that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableSecurityHubRequestT = Model::EnableSecurityHubRequest>
        Model::EnableSecurityHubOutcomeCallable EnableSecurityHubCallable(const EnableSecurityHubRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::EnableSecurityHub, request);
        }

        /**
         * An Async wrapper for EnableSecurityHub that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableSecurityHubRequestT = Model::EnableSecurityHubRequest>
        void EnableSecurityHubAsync(const EnableSecurityHubRequestT& request, const EnableSecurityHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::EnableSecurityHub, request, handler, context);
        }

        /**
         * <p>Provides the details for the Security Hub administrator account for the
         * current member account.</p> <p>Can be used by both member accounts that are
         * managed using Organizations and accounts that were invited
         * manually.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetAdministratorAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAdministratorAccountOutcome GetAdministratorAccount(const Model::GetAdministratorAccountRequest& request) const;

        /**
         * A Callable wrapper for GetAdministratorAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAdministratorAccountRequestT = Model::GetAdministratorAccountRequest>
        Model::GetAdministratorAccountOutcomeCallable GetAdministratorAccountCallable(const GetAdministratorAccountRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::GetAdministratorAccount, request);
        }

        /**
         * An Async wrapper for GetAdministratorAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAdministratorAccountRequestT = Model::GetAdministratorAccountRequest>
        void GetAdministratorAccountAsync(const GetAdministratorAccountRequestT& request, const GetAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::GetAdministratorAccount, request, handler, context);
        }

        /**
         * <p> Provides information about a configuration policy. Only the Security Hub
         * delegated administrator can invoke this operation from the home Region.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetConfigurationPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigurationPolicyOutcome GetConfigurationPolicy(const Model::GetConfigurationPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetConfigurationPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConfigurationPolicyRequestT = Model::GetConfigurationPolicyRequest>
        Model::GetConfigurationPolicyOutcomeCallable GetConfigurationPolicyCallable(const GetConfigurationPolicyRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::GetConfigurationPolicy, request);
        }

        /**
         * An Async wrapper for GetConfigurationPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConfigurationPolicyRequestT = Model::GetConfigurationPolicyRequest>
        void GetConfigurationPolicyAsync(const GetConfigurationPolicyRequestT& request, const GetConfigurationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::GetConfigurationPolicy, request, handler, context);
        }

        /**
         * <p> Returns the association between a configuration and a target account,
         * organizational unit, or the root. The configuration can be a configuration
         * policy or self-managed behavior. Only the Security Hub delegated administrator
         * can invoke this operation from the home Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetConfigurationPolicyAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigurationPolicyAssociationOutcome GetConfigurationPolicyAssociation(const Model::GetConfigurationPolicyAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetConfigurationPolicyAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConfigurationPolicyAssociationRequestT = Model::GetConfigurationPolicyAssociationRequest>
        Model::GetConfigurationPolicyAssociationOutcomeCallable GetConfigurationPolicyAssociationCallable(const GetConfigurationPolicyAssociationRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::GetConfigurationPolicyAssociation, request);
        }

        /**
         * An Async wrapper for GetConfigurationPolicyAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConfigurationPolicyAssociationRequestT = Model::GetConfigurationPolicyAssociationRequest>
        void GetConfigurationPolicyAssociationAsync(const GetConfigurationPolicyAssociationRequestT& request, const GetConfigurationPolicyAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::GetConfigurationPolicyAssociation, request, handler, context);
        }

        /**
         * <p>Returns a list of the standards that are currently enabled.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetEnabledStandards">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnabledStandardsOutcome GetEnabledStandards(const Model::GetEnabledStandardsRequest& request) const;

        /**
         * A Callable wrapper for GetEnabledStandards that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEnabledStandardsRequestT = Model::GetEnabledStandardsRequest>
        Model::GetEnabledStandardsOutcomeCallable GetEnabledStandardsCallable(const GetEnabledStandardsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::GetEnabledStandards, request);
        }

        /**
         * An Async wrapper for GetEnabledStandards that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEnabledStandardsRequestT = Model::GetEnabledStandardsRequest>
        void GetEnabledStandardsAsync(const GetEnabledStandardsRequestT& request, const GetEnabledStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::GetEnabledStandards, request, handler, context);
        }

        /**
         * <p>Returns the current finding aggregation configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetFindingAggregator">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingAggregatorOutcome GetFindingAggregator(const Model::GetFindingAggregatorRequest& request) const;

        /**
         * A Callable wrapper for GetFindingAggregator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFindingAggregatorRequestT = Model::GetFindingAggregatorRequest>
        Model::GetFindingAggregatorOutcomeCallable GetFindingAggregatorCallable(const GetFindingAggregatorRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::GetFindingAggregator, request);
        }

        /**
         * An Async wrapper for GetFindingAggregator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFindingAggregatorRequestT = Model::GetFindingAggregatorRequest>
        void GetFindingAggregatorAsync(const GetFindingAggregatorRequestT& request, const GetFindingAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::GetFindingAggregator, request, handler, context);
        }

        /**
         * <p> Returns history for a Security Hub finding in the last 90 days. The history
         * includes changes made to any fields in the Amazon Web Services Security Finding
         * Format (ASFF). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetFindingHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingHistoryOutcome GetFindingHistory(const Model::GetFindingHistoryRequest& request) const;

        /**
         * A Callable wrapper for GetFindingHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFindingHistoryRequestT = Model::GetFindingHistoryRequest>
        Model::GetFindingHistoryOutcomeCallable GetFindingHistoryCallable(const GetFindingHistoryRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::GetFindingHistory, request);
        }

        /**
         * An Async wrapper for GetFindingHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFindingHistoryRequestT = Model::GetFindingHistoryRequest>
        void GetFindingHistoryAsync(const GetFindingHistoryRequestT& request, const GetFindingHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::GetFindingHistory, request, handler, context);
        }

        /**
         * <p>Returns a list of findings that match the specified criteria.</p> <p>If
         * finding aggregation is enabled, then when you call <code>GetFindings</code> from
         * the aggregation Region, the results include all of the matching findings from
         * both the aggregation Region and the linked Regions.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingsOutcome GetFindings(const Model::GetFindingsRequest& request) const;

        /**
         * A Callable wrapper for GetFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFindingsRequestT = Model::GetFindingsRequest>
        Model::GetFindingsOutcomeCallable GetFindingsCallable(const GetFindingsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::GetFindings, request);
        }

        /**
         * An Async wrapper for GetFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFindingsRequestT = Model::GetFindingsRequest>
        void GetFindingsAsync(const GetFindingsRequestT& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::GetFindings, request, handler, context);
        }

        /**
         * <p>Lists the results of the Security Hub insight specified by the insight
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsightResults">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightResultsOutcome GetInsightResults(const Model::GetInsightResultsRequest& request) const;

        /**
         * A Callable wrapper for GetInsightResults that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInsightResultsRequestT = Model::GetInsightResultsRequest>
        Model::GetInsightResultsOutcomeCallable GetInsightResultsCallable(const GetInsightResultsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::GetInsightResults, request);
        }

        /**
         * An Async wrapper for GetInsightResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInsightResultsRequestT = Model::GetInsightResultsRequest>
        void GetInsightResultsAsync(const GetInsightResultsRequestT& request, const GetInsightResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::GetInsightResults, request, handler, context);
        }

        /**
         * <p>Lists and describes insights for the specified insight ARNs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightsOutcome GetInsights(const Model::GetInsightsRequest& request) const;

        /**
         * A Callable wrapper for GetInsights that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInsightsRequestT = Model::GetInsightsRequest>
        Model::GetInsightsOutcomeCallable GetInsightsCallable(const GetInsightsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::GetInsights, request);
        }

        /**
         * An Async wrapper for GetInsights that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInsightsRequestT = Model::GetInsightsRequest>
        void GetInsightsAsync(const GetInsightsRequestT& request, const GetInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::GetInsights, request, handler, context);
        }

        /**
         * <p>Returns the count of all Security Hub membership invitations that were sent
         * to the current member account, not including the currently accepted invitation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetInvitationsCount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvitationsCountOutcome GetInvitationsCount(const Model::GetInvitationsCountRequest& request) const;

        /**
         * A Callable wrapper for GetInvitationsCount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInvitationsCountRequestT = Model::GetInvitationsCountRequest>
        Model::GetInvitationsCountOutcomeCallable GetInvitationsCountCallable(const GetInvitationsCountRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::GetInvitationsCount, request);
        }

        /**
         * An Async wrapper for GetInvitationsCount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInvitationsCountRequestT = Model::GetInvitationsCountRequest>
        void GetInvitationsCountAsync(const GetInvitationsCountRequestT& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::GetInvitationsCount, request, handler, context);
        }

        /**
         * <p>Returns the details for the Security Hub member accounts for the specified
         * account IDs.</p> <p>An administrator account can be either the delegated
         * Security Hub administrator account for an organization or an administrator
         * account that enabled Security Hub manually.</p> <p>The results include both
         * member accounts that are managed using Organizations and accounts that were
         * invited manually.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMembersOutcome GetMembers(const Model::GetMembersRequest& request) const;

        /**
         * A Callable wrapper for GetMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMembersRequestT = Model::GetMembersRequest>
        Model::GetMembersOutcomeCallable GetMembersCallable(const GetMembersRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::GetMembers, request);
        }

        /**
         * An Async wrapper for GetMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMembersRequestT = Model::GetMembersRequest>
        void GetMembersAsync(const GetMembersRequestT& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::GetMembers, request, handler, context);
        }

        /**
         * <p> Retrieves the definition of a security control. The definition includes the
         * control title, description, Region availability, parameter definitions, and
         * other details. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GetSecurityControlDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSecurityControlDefinitionOutcome GetSecurityControlDefinition(const Model::GetSecurityControlDefinitionRequest& request) const;

        /**
         * A Callable wrapper for GetSecurityControlDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSecurityControlDefinitionRequestT = Model::GetSecurityControlDefinitionRequest>
        Model::GetSecurityControlDefinitionOutcomeCallable GetSecurityControlDefinitionCallable(const GetSecurityControlDefinitionRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::GetSecurityControlDefinition, request);
        }

        /**
         * An Async wrapper for GetSecurityControlDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSecurityControlDefinitionRequestT = Model::GetSecurityControlDefinitionRequest>
        void GetSecurityControlDefinitionAsync(const GetSecurityControlDefinitionRequestT& request, const GetSecurityControlDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::GetSecurityControlDefinition, request, handler, context);
        }

        /**
         * <p>Invites other Amazon Web Services accounts to become member accounts for the
         * Security Hub administrator account that the invitation is sent from.</p> <p>This
         * operation is only used to invite accounts that do not belong to an organization.
         * Organization accounts do not receive invitations.</p> <p>Before you can use this
         * action to invite a member, you must first use the <code>CreateMembers</code>
         * action to create the member account in Security Hub.</p> <p>When the account
         * owner enables Security Hub and accepts the invitation to become a member
         * account, the administrator account can view the findings generated from the
         * member account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/InviteMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::InviteMembersOutcome InviteMembers(const Model::InviteMembersRequest& request) const;

        /**
         * A Callable wrapper for InviteMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InviteMembersRequestT = Model::InviteMembersRequest>
        Model::InviteMembersOutcomeCallable InviteMembersCallable(const InviteMembersRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::InviteMembers, request);
        }

        /**
         * An Async wrapper for InviteMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InviteMembersRequestT = Model::InviteMembersRequest>
        void InviteMembersAsync(const InviteMembersRequestT& request, const InviteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::InviteMembers, request, handler, context);
        }

        /**
         * <p> A list of automation rules and their metadata for the calling account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListAutomationRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAutomationRulesOutcome ListAutomationRules(const Model::ListAutomationRulesRequest& request) const;

        /**
         * A Callable wrapper for ListAutomationRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAutomationRulesRequestT = Model::ListAutomationRulesRequest>
        Model::ListAutomationRulesOutcomeCallable ListAutomationRulesCallable(const ListAutomationRulesRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::ListAutomationRules, request);
        }

        /**
         * An Async wrapper for ListAutomationRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAutomationRulesRequestT = Model::ListAutomationRulesRequest>
        void ListAutomationRulesAsync(const ListAutomationRulesRequestT& request, const ListAutomationRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::ListAutomationRules, request, handler, context);
        }

        /**
         * <p> Lists the configuration policies that the Security Hub delegated
         * administrator has created for your organization. Only the delegated
         * administrator can invoke this operation from the home Region. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListConfigurationPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationPoliciesOutcome ListConfigurationPolicies(const Model::ListConfigurationPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListConfigurationPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConfigurationPoliciesRequestT = Model::ListConfigurationPoliciesRequest>
        Model::ListConfigurationPoliciesOutcomeCallable ListConfigurationPoliciesCallable(const ListConfigurationPoliciesRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::ListConfigurationPolicies, request);
        }

        /**
         * An Async wrapper for ListConfigurationPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConfigurationPoliciesRequestT = Model::ListConfigurationPoliciesRequest>
        void ListConfigurationPoliciesAsync(const ListConfigurationPoliciesRequestT& request, const ListConfigurationPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::ListConfigurationPolicies, request, handler, context);
        }

        /**
         * <p> Provides information about the associations for your configuration policies
         * and self-managed behavior. Only the Security Hub delegated administrator can
         * invoke this operation from the home Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListConfigurationPolicyAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationPolicyAssociationsOutcome ListConfigurationPolicyAssociations(const Model::ListConfigurationPolicyAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListConfigurationPolicyAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConfigurationPolicyAssociationsRequestT = Model::ListConfigurationPolicyAssociationsRequest>
        Model::ListConfigurationPolicyAssociationsOutcomeCallable ListConfigurationPolicyAssociationsCallable(const ListConfigurationPolicyAssociationsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::ListConfigurationPolicyAssociations, request);
        }

        /**
         * An Async wrapper for ListConfigurationPolicyAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConfigurationPolicyAssociationsRequestT = Model::ListConfigurationPolicyAssociationsRequest>
        void ListConfigurationPolicyAssociationsAsync(const ListConfigurationPolicyAssociationsRequestT& request, const ListConfigurationPolicyAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::ListConfigurationPolicyAssociations, request, handler, context);
        }

        /**
         * <p>Lists all findings-generating solutions (products) that you are subscribed to
         * receive findings from in Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListEnabledProductsForImport">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnabledProductsForImportOutcome ListEnabledProductsForImport(const Model::ListEnabledProductsForImportRequest& request) const;

        /**
         * A Callable wrapper for ListEnabledProductsForImport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEnabledProductsForImportRequestT = Model::ListEnabledProductsForImportRequest>
        Model::ListEnabledProductsForImportOutcomeCallable ListEnabledProductsForImportCallable(const ListEnabledProductsForImportRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::ListEnabledProductsForImport, request);
        }

        /**
         * An Async wrapper for ListEnabledProductsForImport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEnabledProductsForImportRequestT = Model::ListEnabledProductsForImportRequest>
        void ListEnabledProductsForImportAsync(const ListEnabledProductsForImportRequestT& request, const ListEnabledProductsForImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::ListEnabledProductsForImport, request, handler, context);
        }

        /**
         * <p>If finding aggregation is enabled, then <code>ListFindingAggregators</code>
         * returns the ARN of the finding aggregator. You can run this operation from any
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListFindingAggregators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingAggregatorsOutcome ListFindingAggregators(const Model::ListFindingAggregatorsRequest& request) const;

        /**
         * A Callable wrapper for ListFindingAggregators that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFindingAggregatorsRequestT = Model::ListFindingAggregatorsRequest>
        Model::ListFindingAggregatorsOutcomeCallable ListFindingAggregatorsCallable(const ListFindingAggregatorsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::ListFindingAggregators, request);
        }

        /**
         * An Async wrapper for ListFindingAggregators that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFindingAggregatorsRequestT = Model::ListFindingAggregatorsRequest>
        void ListFindingAggregatorsAsync(const ListFindingAggregatorsRequestT& request, const ListFindingAggregatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::ListFindingAggregators, request, handler, context);
        }

        /**
         * <p>Lists all Security Hub membership invitations that were sent to the current
         * Amazon Web Services account.</p> <p>This operation is only used by accounts that
         * are managed by invitation. Accounts that are managed using the integration with
         * Organizations do not receive invitations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvitationsOutcome ListInvitations(const Model::ListInvitationsRequest& request) const;

        /**
         * A Callable wrapper for ListInvitations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInvitationsRequestT = Model::ListInvitationsRequest>
        Model::ListInvitationsOutcomeCallable ListInvitationsCallable(const ListInvitationsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::ListInvitations, request);
        }

        /**
         * An Async wrapper for ListInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInvitationsRequestT = Model::ListInvitationsRequest>
        void ListInvitationsAsync(const ListInvitationsRequestT& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::ListInvitations, request, handler, context);
        }

        /**
         * <p>Lists details about all member accounts for the current Security Hub
         * administrator account.</p> <p>The results include both member accounts that
         * belong to an organization and member accounts that were invited
         * manually.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMembersOutcome ListMembers(const Model::ListMembersRequest& request) const;

        /**
         * A Callable wrapper for ListMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMembersRequestT = Model::ListMembersRequest>
        Model::ListMembersOutcomeCallable ListMembersCallable(const ListMembersRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::ListMembers, request);
        }

        /**
         * An Async wrapper for ListMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMembersRequestT = Model::ListMembersRequest>
        void ListMembersAsync(const ListMembersRequestT& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::ListMembers, request, handler, context);
        }

        /**
         * <p>Lists the Security Hub administrator accounts. Can only be called by the
         * organization management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListOrganizationAdminAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationAdminAccountsOutcome ListOrganizationAdminAccounts(const Model::ListOrganizationAdminAccountsRequest& request) const;

        /**
         * A Callable wrapper for ListOrganizationAdminAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOrganizationAdminAccountsRequestT = Model::ListOrganizationAdminAccountsRequest>
        Model::ListOrganizationAdminAccountsOutcomeCallable ListOrganizationAdminAccountsCallable(const ListOrganizationAdminAccountsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::ListOrganizationAdminAccounts, request);
        }

        /**
         * An Async wrapper for ListOrganizationAdminAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOrganizationAdminAccountsRequestT = Model::ListOrganizationAdminAccountsRequest>
        void ListOrganizationAdminAccountsAsync(const ListOrganizationAdminAccountsRequestT& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::ListOrganizationAdminAccounts, request, handler, context);
        }

        /**
         * <p> Lists all of the security controls that apply to a specified standard.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListSecurityControlDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityControlDefinitionsOutcome ListSecurityControlDefinitions(const Model::ListSecurityControlDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListSecurityControlDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSecurityControlDefinitionsRequestT = Model::ListSecurityControlDefinitionsRequest>
        Model::ListSecurityControlDefinitionsOutcomeCallable ListSecurityControlDefinitionsCallable(const ListSecurityControlDefinitionsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::ListSecurityControlDefinitions, request);
        }

        /**
         * An Async wrapper for ListSecurityControlDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSecurityControlDefinitionsRequestT = Model::ListSecurityControlDefinitionsRequest>
        void ListSecurityControlDefinitionsAsync(const ListSecurityControlDefinitionsRequestT& request, const ListSecurityControlDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::ListSecurityControlDefinitions, request, handler, context);
        }

        /**
         * <p> Specifies whether a control is currently enabled or disabled in each enabled
         * standard in the calling account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListStandardsControlAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStandardsControlAssociationsOutcome ListStandardsControlAssociations(const Model::ListStandardsControlAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListStandardsControlAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStandardsControlAssociationsRequestT = Model::ListStandardsControlAssociationsRequest>
        Model::ListStandardsControlAssociationsOutcomeCallable ListStandardsControlAssociationsCallable(const ListStandardsControlAssociationsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::ListStandardsControlAssociations, request);
        }

        /**
         * An Async wrapper for ListStandardsControlAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStandardsControlAssociationsRequestT = Model::ListStandardsControlAssociationsRequest>
        void ListStandardsControlAssociationsAsync(const ListStandardsControlAssociationsRequestT& request, const ListStandardsControlAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::ListStandardsControlAssociations, request, handler, context);
        }

        /**
         * <p>Returns a list of tags associated with a resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p> Associates a target account, organizational unit, or the root with a
         * specified configuration. The target can be associated with a configuration
         * policy or self-managed behavior. Only the Security Hub delegated administrator
         * can invoke this operation from the home Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StartConfigurationPolicyAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartConfigurationPolicyAssociationOutcome StartConfigurationPolicyAssociation(const Model::StartConfigurationPolicyAssociationRequest& request) const;

        /**
         * A Callable wrapper for StartConfigurationPolicyAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartConfigurationPolicyAssociationRequestT = Model::StartConfigurationPolicyAssociationRequest>
        Model::StartConfigurationPolicyAssociationOutcomeCallable StartConfigurationPolicyAssociationCallable(const StartConfigurationPolicyAssociationRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::StartConfigurationPolicyAssociation, request);
        }

        /**
         * An Async wrapper for StartConfigurationPolicyAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartConfigurationPolicyAssociationRequestT = Model::StartConfigurationPolicyAssociationRequest>
        void StartConfigurationPolicyAssociationAsync(const StartConfigurationPolicyAssociationRequestT& request, const StartConfigurationPolicyAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::StartConfigurationPolicyAssociation, request, handler, context);
        }

        /**
         * <p> Disassociates a target account, organizational unit, or the root from a
         * specified configuration. When you disassociate a configuration from its target,
         * the target inherits the configuration of the closest parent. If there’s no
         * configuration to inherit, the target retains its settings but becomes a
         * self-managed account. A target can be disassociated from a configuration policy
         * or self-managed behavior. Only the Security Hub delegated administrator can
         * invoke this operation from the home Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StartConfigurationPolicyDisassociation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartConfigurationPolicyDisassociationOutcome StartConfigurationPolicyDisassociation(const Model::StartConfigurationPolicyDisassociationRequest& request) const;

        /**
         * A Callable wrapper for StartConfigurationPolicyDisassociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartConfigurationPolicyDisassociationRequestT = Model::StartConfigurationPolicyDisassociationRequest>
        Model::StartConfigurationPolicyDisassociationOutcomeCallable StartConfigurationPolicyDisassociationCallable(const StartConfigurationPolicyDisassociationRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::StartConfigurationPolicyDisassociation, request);
        }

        /**
         * An Async wrapper for StartConfigurationPolicyDisassociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartConfigurationPolicyDisassociationRequestT = Model::StartConfigurationPolicyDisassociationRequest>
        void StartConfigurationPolicyDisassociationAsync(const StartConfigurationPolicyDisassociationRequestT& request, const StartConfigurationPolicyDisassociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::StartConfigurationPolicyDisassociation, request, handler, context);
        }

        /**
         * <p>Adds one or more tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the name and description of a custom action target in Security
         * Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateActionTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateActionTargetOutcome UpdateActionTarget(const Model::UpdateActionTargetRequest& request) const;

        /**
         * A Callable wrapper for UpdateActionTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateActionTargetRequestT = Model::UpdateActionTargetRequest>
        Model::UpdateActionTargetOutcomeCallable UpdateActionTargetCallable(const UpdateActionTargetRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::UpdateActionTarget, request);
        }

        /**
         * An Async wrapper for UpdateActionTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateActionTargetRequestT = Model::UpdateActionTargetRequest>
        void UpdateActionTargetAsync(const UpdateActionTargetRequestT& request, const UpdateActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::UpdateActionTarget, request, handler, context);
        }

        /**
         * <p> Updates a configuration policy. Only the Security Hub delegated
         * administrator can invoke this operation from the home Region. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateConfigurationPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationPolicyOutcome UpdateConfigurationPolicy(const Model::UpdateConfigurationPolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfigurationPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConfigurationPolicyRequestT = Model::UpdateConfigurationPolicyRequest>
        Model::UpdateConfigurationPolicyOutcomeCallable UpdateConfigurationPolicyCallable(const UpdateConfigurationPolicyRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::UpdateConfigurationPolicy, request);
        }

        /**
         * An Async wrapper for UpdateConfigurationPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConfigurationPolicyRequestT = Model::UpdateConfigurationPolicyRequest>
        void UpdateConfigurationPolicyAsync(const UpdateConfigurationPolicyRequestT& request, const UpdateConfigurationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::UpdateConfigurationPolicy, request, handler, context);
        }

        /**
         * <p>Updates the finding aggregation configuration. Used to update the Region
         * linking mode and the list of included or excluded Regions. You cannot use
         * <code>UpdateFindingAggregator</code> to change the aggregation Region.</p>
         * <p>You must run <code>UpdateFindingAggregator</code> from the current
         * aggregation Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateFindingAggregator">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFindingAggregatorOutcome UpdateFindingAggregator(const Model::UpdateFindingAggregatorRequest& request) const;

        /**
         * A Callable wrapper for UpdateFindingAggregator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFindingAggregatorRequestT = Model::UpdateFindingAggregatorRequest>
        Model::UpdateFindingAggregatorOutcomeCallable UpdateFindingAggregatorCallable(const UpdateFindingAggregatorRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::UpdateFindingAggregator, request);
        }

        /**
         * An Async wrapper for UpdateFindingAggregator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFindingAggregatorRequestT = Model::UpdateFindingAggregatorRequest>
        void UpdateFindingAggregatorAsync(const UpdateFindingAggregatorRequestT& request, const UpdateFindingAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::UpdateFindingAggregator, request, handler, context);
        }

        /**
         * <p> <code>UpdateFindings</code> is deprecated. Instead of
         * <code>UpdateFindings</code>, use <code>BatchUpdateFindings</code>.</p>
         * <p>Updates the <code>Note</code> and <code>RecordState</code> of the Security
         * Hub-aggregated findings that the filter attributes specify. Any member account
         * that can view the finding also sees the update to the finding.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFindingsOutcome UpdateFindings(const Model::UpdateFindingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFindingsRequestT = Model::UpdateFindingsRequest>
        Model::UpdateFindingsOutcomeCallable UpdateFindingsCallable(const UpdateFindingsRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::UpdateFindings, request);
        }

        /**
         * An Async wrapper for UpdateFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFindingsRequestT = Model::UpdateFindingsRequest>
        void UpdateFindingsAsync(const UpdateFindingsRequestT& request, const UpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::UpdateFindings, request, handler, context);
        }

        /**
         * <p>Updates the Security Hub insight identified by the specified insight
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInsightOutcome UpdateInsight(const Model::UpdateInsightRequest& request) const;

        /**
         * A Callable wrapper for UpdateInsight that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInsightRequestT = Model::UpdateInsightRequest>
        Model::UpdateInsightOutcomeCallable UpdateInsightCallable(const UpdateInsightRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::UpdateInsight, request);
        }

        /**
         * An Async wrapper for UpdateInsight that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInsightRequestT = Model::UpdateInsightRequest>
        void UpdateInsightAsync(const UpdateInsightRequestT& request, const UpdateInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::UpdateInsight, request, handler, context);
        }

        /**
         * <p>Updates the configuration of your organization in Security Hub. Only the
         * Security Hub administrator account can invoke this operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateOrganizationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOrganizationConfigurationOutcome UpdateOrganizationConfiguration(const Model::UpdateOrganizationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateOrganizationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateOrganizationConfigurationRequestT = Model::UpdateOrganizationConfigurationRequest>
        Model::UpdateOrganizationConfigurationOutcomeCallable UpdateOrganizationConfigurationCallable(const UpdateOrganizationConfigurationRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::UpdateOrganizationConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateOrganizationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateOrganizationConfigurationRequestT = Model::UpdateOrganizationConfigurationRequest>
        void UpdateOrganizationConfigurationAsync(const UpdateOrganizationConfigurationRequestT& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::UpdateOrganizationConfiguration, request, handler, context);
        }

        /**
         * <p> Updates the properties of a security control. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateSecurityControl">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecurityControlOutcome UpdateSecurityControl(const Model::UpdateSecurityControlRequest& request) const;

        /**
         * A Callable wrapper for UpdateSecurityControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSecurityControlRequestT = Model::UpdateSecurityControlRequest>
        Model::UpdateSecurityControlOutcomeCallable UpdateSecurityControlCallable(const UpdateSecurityControlRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::UpdateSecurityControl, request);
        }

        /**
         * An Async wrapper for UpdateSecurityControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSecurityControlRequestT = Model::UpdateSecurityControlRequest>
        void UpdateSecurityControlAsync(const UpdateSecurityControlRequestT& request, const UpdateSecurityControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::UpdateSecurityControl, request, handler, context);
        }

        /**
         * <p>Updates configuration options for Security Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateSecurityHubConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecurityHubConfigurationOutcome UpdateSecurityHubConfiguration(const Model::UpdateSecurityHubConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateSecurityHubConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSecurityHubConfigurationRequestT = Model::UpdateSecurityHubConfigurationRequest>
        Model::UpdateSecurityHubConfigurationOutcomeCallable UpdateSecurityHubConfigurationCallable(const UpdateSecurityHubConfigurationRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::UpdateSecurityHubConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateSecurityHubConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSecurityHubConfigurationRequestT = Model::UpdateSecurityHubConfigurationRequest>
        void UpdateSecurityHubConfigurationAsync(const UpdateSecurityHubConfigurationRequestT& request, const UpdateSecurityHubConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::UpdateSecurityHubConfiguration, request, handler, context);
        }

        /**
         * <p>Used to control whether an individual security standard control is enabled or
         * disabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateStandardsControl">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStandardsControlOutcome UpdateStandardsControl(const Model::UpdateStandardsControlRequest& request) const;

        /**
         * A Callable wrapper for UpdateStandardsControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateStandardsControlRequestT = Model::UpdateStandardsControlRequest>
        Model::UpdateStandardsControlOutcomeCallable UpdateStandardsControlCallable(const UpdateStandardsControlRequestT& request) const
        {
            return SubmitCallable(&SecurityHubClient::UpdateStandardsControl, request);
        }

        /**
         * An Async wrapper for UpdateStandardsControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStandardsControlRequestT = Model::UpdateStandardsControlRequest>
        void UpdateStandardsControlAsync(const UpdateStandardsControlRequestT& request, const UpdateStandardsControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecurityHubClient::UpdateStandardsControl, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SecurityHubEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SecurityHubClient>;
      void init(const SecurityHubClientConfiguration& clientConfiguration);

      SecurityHubClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SecurityHubEndpointProviderBase> m_endpointProvider;
  };

} // namespace SecurityHub
} // namespace Aws
