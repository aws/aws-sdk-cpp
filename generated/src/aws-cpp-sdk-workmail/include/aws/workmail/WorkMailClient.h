/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workmail/WorkMailServiceClientModel.h>

namespace Aws
{
namespace WorkMail
{
  /**
   * <p>WorkMail is a secure, managed business email and calendaring service with
   * support for existing desktop and mobile email clients. You can access your
   * email, contacts, and calendars using Microsoft Outlook, your browser, or other
   * native iOS and Android email applications. You can integrate WorkMail with your
   * existing corporate directory and control both the keys that encrypt your data
   * and the location in which your data is stored.</p> <p>The WorkMail API is
   * designed for the following scenarios:</p> <ul> <li> <p>Listing and describing
   * organizations</p> </li> </ul> <ul> <li> <p>Managing users</p> </li> </ul> <ul>
   * <li> <p>Managing groups</p> </li> </ul> <ul> <li> <p>Managing resources</p>
   * </li> </ul> <p>All WorkMail API operations are Amazon-authenticated and
   * certificate-signed. They not only require the use of the AWS SDK, but also allow
   * for the exclusive use of AWS Identity and Access Management users and roles to
   * help facilitate access, trust, and permission policies. By creating a role and
   * allowing an IAM user to access the WorkMail site, the IAM user gains full
   * administrative visibility into the entire WorkMail organization (or as set in
   * the IAM policy). This includes, but is not limited to, the ability to create,
   * update, and delete users, groups, and resources. This allows developers to
   * perform the scenarios listed above, as well as give users the ability to grant
   * access on a selective basis using the IAM model.</p>
   */
  class AWS_WORKMAIL_API WorkMailClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<WorkMailClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef WorkMailClientConfiguration ClientConfigurationType;
      typedef WorkMailEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkMailClient(const Aws::WorkMail::WorkMailClientConfiguration& clientConfiguration = Aws::WorkMail::WorkMailClientConfiguration(),
                       std::shared_ptr<WorkMailEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkMailClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<WorkMailEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::WorkMail::WorkMailClientConfiguration& clientConfiguration = Aws::WorkMail::WorkMailClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkMailClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<WorkMailEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::WorkMail::WorkMailClientConfiguration& clientConfiguration = Aws::WorkMail::WorkMailClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkMailClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkMailClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkMailClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~WorkMailClient();

        /**
         * <p>Adds a member (user or group) to the resource's set of
         * delegates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/AssociateDelegateToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDelegateToResourceOutcome AssociateDelegateToResource(const Model::AssociateDelegateToResourceRequest& request) const;

        /**
         * A Callable wrapper for AssociateDelegateToResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateDelegateToResourceRequestT = Model::AssociateDelegateToResourceRequest>
        Model::AssociateDelegateToResourceOutcomeCallable AssociateDelegateToResourceCallable(const AssociateDelegateToResourceRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::AssociateDelegateToResource, request);
        }

        /**
         * An Async wrapper for AssociateDelegateToResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateDelegateToResourceRequestT = Model::AssociateDelegateToResourceRequest>
        void AssociateDelegateToResourceAsync(const AssociateDelegateToResourceRequestT& request, const AssociateDelegateToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::AssociateDelegateToResource, request, handler, context);
        }

        /**
         * <p>Adds a member (user or group) to the group's set.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/AssociateMemberToGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateMemberToGroupOutcome AssociateMemberToGroup(const Model::AssociateMemberToGroupRequest& request) const;

        /**
         * A Callable wrapper for AssociateMemberToGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateMemberToGroupRequestT = Model::AssociateMemberToGroupRequest>
        Model::AssociateMemberToGroupOutcomeCallable AssociateMemberToGroupCallable(const AssociateMemberToGroupRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::AssociateMemberToGroup, request);
        }

        /**
         * An Async wrapper for AssociateMemberToGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateMemberToGroupRequestT = Model::AssociateMemberToGroupRequest>
        void AssociateMemberToGroupAsync(const AssociateMemberToGroupRequestT& request, const AssociateMemberToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::AssociateMemberToGroup, request, handler, context);
        }

        /**
         * <p>Assumes an impersonation role for the given WorkMail organization. This
         * method returns an authentication token you can use to make impersonated
         * calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/AssumeImpersonationRole">AWS
         * API Reference</a></p>
         */
        virtual Model::AssumeImpersonationRoleOutcome AssumeImpersonationRole(const Model::AssumeImpersonationRoleRequest& request) const;

        /**
         * A Callable wrapper for AssumeImpersonationRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssumeImpersonationRoleRequestT = Model::AssumeImpersonationRoleRequest>
        Model::AssumeImpersonationRoleOutcomeCallable AssumeImpersonationRoleCallable(const AssumeImpersonationRoleRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::AssumeImpersonationRole, request);
        }

        /**
         * An Async wrapper for AssumeImpersonationRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssumeImpersonationRoleRequestT = Model::AssumeImpersonationRoleRequest>
        void AssumeImpersonationRoleAsync(const AssumeImpersonationRoleRequestT& request, const AssumeImpersonationRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::AssumeImpersonationRole, request, handler, context);
        }

        /**
         * <p>Cancels a mailbox export job.</p>  <p>If the mailbox export job is near
         * completion, it might not be possible to cancel it.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CancelMailboxExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelMailboxExportJobOutcome CancelMailboxExportJob(const Model::CancelMailboxExportJobRequest& request) const;

        /**
         * A Callable wrapper for CancelMailboxExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelMailboxExportJobRequestT = Model::CancelMailboxExportJobRequest>
        Model::CancelMailboxExportJobOutcomeCallable CancelMailboxExportJobCallable(const CancelMailboxExportJobRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::CancelMailboxExportJob, request);
        }

        /**
         * An Async wrapper for CancelMailboxExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelMailboxExportJobRequestT = Model::CancelMailboxExportJobRequest>
        void CancelMailboxExportJobAsync(const CancelMailboxExportJobRequestT& request, const CancelMailboxExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::CancelMailboxExportJob, request, handler, context);
        }

        /**
         * <p>Adds an alias to the set of a given member (user or group) of
         * WorkMail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest& request) const;

        /**
         * A Callable wrapper for CreateAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAliasRequestT = Model::CreateAliasRequest>
        Model::CreateAliasOutcomeCallable CreateAliasCallable(const CreateAliasRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::CreateAlias, request);
        }

        /**
         * An Async wrapper for CreateAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAliasRequestT = Model::CreateAliasRequest>
        void CreateAliasAsync(const CreateAliasRequestT& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::CreateAlias, request, handler, context);
        }

        /**
         * <p>Creates an <code>AvailabilityConfiguration</code> for the given WorkMail
         * organization and domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateAvailabilityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAvailabilityConfigurationOutcome CreateAvailabilityConfiguration(const Model::CreateAvailabilityConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateAvailabilityConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAvailabilityConfigurationRequestT = Model::CreateAvailabilityConfigurationRequest>
        Model::CreateAvailabilityConfigurationOutcomeCallable CreateAvailabilityConfigurationCallable(const CreateAvailabilityConfigurationRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::CreateAvailabilityConfiguration, request);
        }

        /**
         * An Async wrapper for CreateAvailabilityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAvailabilityConfigurationRequestT = Model::CreateAvailabilityConfigurationRequest>
        void CreateAvailabilityConfigurationAsync(const CreateAvailabilityConfigurationRequestT& request, const CreateAvailabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::CreateAvailabilityConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a group that can be used in WorkMail by calling the
         * <a>RegisterToWorkMail</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGroupRequestT = Model::CreateGroupRequest>
        Model::CreateGroupOutcomeCallable CreateGroupCallable(const CreateGroupRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::CreateGroup, request);
        }

        /**
         * An Async wrapper for CreateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGroupRequestT = Model::CreateGroupRequest>
        void CreateGroupAsync(const CreateGroupRequestT& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::CreateGroup, request, handler, context);
        }

        /**
         * <p>Creates an impersonation role for the given WorkMail organization.</p> <p>
         * <i>Idempotency</i> ensures that an API request completes no more than one time.
         * With an idempotent request, if the original request completes successfully, any
         * subsequent retries also complete successfully without performing any further
         * actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateImpersonationRole">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImpersonationRoleOutcome CreateImpersonationRole(const Model::CreateImpersonationRoleRequest& request) const;

        /**
         * A Callable wrapper for CreateImpersonationRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateImpersonationRoleRequestT = Model::CreateImpersonationRoleRequest>
        Model::CreateImpersonationRoleOutcomeCallable CreateImpersonationRoleCallable(const CreateImpersonationRoleRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::CreateImpersonationRole, request);
        }

        /**
         * An Async wrapper for CreateImpersonationRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateImpersonationRoleRequestT = Model::CreateImpersonationRoleRequest>
        void CreateImpersonationRoleAsync(const CreateImpersonationRoleRequestT& request, const CreateImpersonationRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::CreateImpersonationRole, request, handler, context);
        }

        /**
         * <p>Creates a new mobile device access rule for the specified WorkMail
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateMobileDeviceAccessRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMobileDeviceAccessRuleOutcome CreateMobileDeviceAccessRule(const Model::CreateMobileDeviceAccessRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateMobileDeviceAccessRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMobileDeviceAccessRuleRequestT = Model::CreateMobileDeviceAccessRuleRequest>
        Model::CreateMobileDeviceAccessRuleOutcomeCallable CreateMobileDeviceAccessRuleCallable(const CreateMobileDeviceAccessRuleRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::CreateMobileDeviceAccessRule, request);
        }

        /**
         * An Async wrapper for CreateMobileDeviceAccessRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMobileDeviceAccessRuleRequestT = Model::CreateMobileDeviceAccessRuleRequest>
        void CreateMobileDeviceAccessRuleAsync(const CreateMobileDeviceAccessRuleRequestT& request, const CreateMobileDeviceAccessRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::CreateMobileDeviceAccessRule, request, handler, context);
        }

        /**
         * <p>Creates a new WorkMail organization. Optionally, you can choose to associate
         * an existing AWS Directory Service directory with your organization. If an AWS
         * Directory Service directory ID is specified, the organization alias must match
         * the directory alias. If you choose not to associate an existing directory with
         * your organization, then we create a new WorkMail directory for you. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/add_new_organization.html">Adding
         * an organization</a> in the <i>WorkMail Administrator Guide</i>.</p> <p>You can
         * associate multiple email domains with an organization, then choose your default
         * email domain from the WorkMail console. You can also associate a domain that is
         * managed in an Amazon Route 53 public hosted zone. For more information, see <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/add_domain.html">Adding
         * a domain</a> and <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/default_domain.html">Choosing
         * the default domain</a> in the <i>WorkMail Administrator Guide</i>.</p>
         * <p>Optionally, you can use a customer managed key from AWS Key Management
         * Service (AWS KMS) to encrypt email for your organization. If you don't associate
         * an AWS KMS key, WorkMail creates a default, AWS managed key for
         * you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOrganizationOutcome CreateOrganization(const Model::CreateOrganizationRequest& request) const;

        /**
         * A Callable wrapper for CreateOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOrganizationRequestT = Model::CreateOrganizationRequest>
        Model::CreateOrganizationOutcomeCallable CreateOrganizationCallable(const CreateOrganizationRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::CreateOrganization, request);
        }

        /**
         * An Async wrapper for CreateOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOrganizationRequestT = Model::CreateOrganizationRequest>
        void CreateOrganizationAsync(const CreateOrganizationRequestT& request, const CreateOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::CreateOrganization, request, handler, context);
        }

        /**
         * <p>Creates a new WorkMail resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceOutcome CreateResource(const Model::CreateResourceRequest& request) const;

        /**
         * A Callable wrapper for CreateResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateResourceRequestT = Model::CreateResourceRequest>
        Model::CreateResourceOutcomeCallable CreateResourceCallable(const CreateResourceRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::CreateResource, request);
        }

        /**
         * An Async wrapper for CreateResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateResourceRequestT = Model::CreateResourceRequest>
        void CreateResourceAsync(const CreateResourceRequestT& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::CreateResource, request, handler, context);
        }

        /**
         * <p>Creates a user who can be used in WorkMail by calling the
         * <a>RegisterToWorkMail</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        Model::CreateUserOutcomeCallable CreateUserCallable(const CreateUserRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::CreateUser, request);
        }

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        void CreateUserAsync(const CreateUserRequestT& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::CreateUser, request, handler, context);
        }

        /**
         * <p>Deletes an access control rule for the specified WorkMail organization.</p>
         *  <p>Deleting already deleted and non-existing rules does not produce an
         * error. In those cases, the service sends back an HTTP 200 response with an empty
         * HTTP body.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteAccessControlRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessControlRuleOutcome DeleteAccessControlRule(const Model::DeleteAccessControlRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccessControlRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAccessControlRuleRequestT = Model::DeleteAccessControlRuleRequest>
        Model::DeleteAccessControlRuleOutcomeCallable DeleteAccessControlRuleCallable(const DeleteAccessControlRuleRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DeleteAccessControlRule, request);
        }

        /**
         * An Async wrapper for DeleteAccessControlRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAccessControlRuleRequestT = Model::DeleteAccessControlRuleRequest>
        void DeleteAccessControlRuleAsync(const DeleteAccessControlRuleRequestT& request, const DeleteAccessControlRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DeleteAccessControlRule, request, handler, context);
        }

        /**
         * <p>Remove one or more specified aliases from a set of aliases for a given
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest& request) const;

        /**
         * A Callable wrapper for DeleteAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAliasRequestT = Model::DeleteAliasRequest>
        Model::DeleteAliasOutcomeCallable DeleteAliasCallable(const DeleteAliasRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DeleteAlias, request);
        }

        /**
         * An Async wrapper for DeleteAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAliasRequestT = Model::DeleteAliasRequest>
        void DeleteAliasAsync(const DeleteAliasRequestT& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DeleteAlias, request, handler, context);
        }

        /**
         * <p>Deletes the <code>AvailabilityConfiguration</code> for the given WorkMail
         * organization and domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteAvailabilityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAvailabilityConfigurationOutcome DeleteAvailabilityConfiguration(const Model::DeleteAvailabilityConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteAvailabilityConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAvailabilityConfigurationRequestT = Model::DeleteAvailabilityConfigurationRequest>
        Model::DeleteAvailabilityConfigurationOutcomeCallable DeleteAvailabilityConfigurationCallable(const DeleteAvailabilityConfigurationRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DeleteAvailabilityConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteAvailabilityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAvailabilityConfigurationRequestT = Model::DeleteAvailabilityConfigurationRequest>
        void DeleteAvailabilityConfigurationAsync(const DeleteAvailabilityConfigurationRequestT& request, const DeleteAvailabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DeleteAvailabilityConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the email monitoring configuration for a specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteEmailMonitoringConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEmailMonitoringConfigurationOutcome DeleteEmailMonitoringConfiguration(const Model::DeleteEmailMonitoringConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteEmailMonitoringConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEmailMonitoringConfigurationRequestT = Model::DeleteEmailMonitoringConfigurationRequest>
        Model::DeleteEmailMonitoringConfigurationOutcomeCallable DeleteEmailMonitoringConfigurationCallable(const DeleteEmailMonitoringConfigurationRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DeleteEmailMonitoringConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteEmailMonitoringConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEmailMonitoringConfigurationRequestT = Model::DeleteEmailMonitoringConfigurationRequest>
        void DeleteEmailMonitoringConfigurationAsync(const DeleteEmailMonitoringConfigurationRequestT& request, const DeleteEmailMonitoringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DeleteEmailMonitoringConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes a group from WorkMail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGroupRequestT = Model::DeleteGroupRequest>
        Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const DeleteGroupRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DeleteGroup, request);
        }

        /**
         * An Async wrapper for DeleteGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGroupRequestT = Model::DeleteGroupRequest>
        void DeleteGroupAsync(const DeleteGroupRequestT& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DeleteGroup, request, handler, context);
        }

        /**
         * <p>Deletes an impersonation role for the given WorkMail
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteImpersonationRole">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImpersonationRoleOutcome DeleteImpersonationRole(const Model::DeleteImpersonationRoleRequest& request) const;

        /**
         * A Callable wrapper for DeleteImpersonationRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteImpersonationRoleRequestT = Model::DeleteImpersonationRoleRequest>
        Model::DeleteImpersonationRoleOutcomeCallable DeleteImpersonationRoleCallable(const DeleteImpersonationRoleRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DeleteImpersonationRole, request);
        }

        /**
         * An Async wrapper for DeleteImpersonationRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteImpersonationRoleRequestT = Model::DeleteImpersonationRoleRequest>
        void DeleteImpersonationRoleAsync(const DeleteImpersonationRoleRequestT& request, const DeleteImpersonationRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DeleteImpersonationRole, request, handler, context);
        }

        /**
         * <p>Deletes permissions granted to a member (user or group).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteMailboxPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMailboxPermissionsOutcome DeleteMailboxPermissions(const Model::DeleteMailboxPermissionsRequest& request) const;

        /**
         * A Callable wrapper for DeleteMailboxPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMailboxPermissionsRequestT = Model::DeleteMailboxPermissionsRequest>
        Model::DeleteMailboxPermissionsOutcomeCallable DeleteMailboxPermissionsCallable(const DeleteMailboxPermissionsRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DeleteMailboxPermissions, request);
        }

        /**
         * An Async wrapper for DeleteMailboxPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMailboxPermissionsRequestT = Model::DeleteMailboxPermissionsRequest>
        void DeleteMailboxPermissionsAsync(const DeleteMailboxPermissionsRequestT& request, const DeleteMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DeleteMailboxPermissions, request, handler, context);
        }

        /**
         * <p>Deletes the mobile device access override for the given WorkMail
         * organization, user, and device.</p>  <p>Deleting already deleted and
         * non-existing overrides does not produce an error. In those cases, the service
         * sends back an HTTP 200 response with an empty HTTP body.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteMobileDeviceAccessOverride">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMobileDeviceAccessOverrideOutcome DeleteMobileDeviceAccessOverride(const Model::DeleteMobileDeviceAccessOverrideRequest& request) const;

        /**
         * A Callable wrapper for DeleteMobileDeviceAccessOverride that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMobileDeviceAccessOverrideRequestT = Model::DeleteMobileDeviceAccessOverrideRequest>
        Model::DeleteMobileDeviceAccessOverrideOutcomeCallable DeleteMobileDeviceAccessOverrideCallable(const DeleteMobileDeviceAccessOverrideRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DeleteMobileDeviceAccessOverride, request);
        }

        /**
         * An Async wrapper for DeleteMobileDeviceAccessOverride that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMobileDeviceAccessOverrideRequestT = Model::DeleteMobileDeviceAccessOverrideRequest>
        void DeleteMobileDeviceAccessOverrideAsync(const DeleteMobileDeviceAccessOverrideRequestT& request, const DeleteMobileDeviceAccessOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DeleteMobileDeviceAccessOverride, request, handler, context);
        }

        /**
         * <p>Deletes a mobile device access rule for the specified WorkMail
         * organization.</p>  <p>Deleting already deleted and non-existing rules does
         * not produce an error. In those cases, the service sends back an HTTP 200
         * response with an empty HTTP body.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteMobileDeviceAccessRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMobileDeviceAccessRuleOutcome DeleteMobileDeviceAccessRule(const Model::DeleteMobileDeviceAccessRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteMobileDeviceAccessRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMobileDeviceAccessRuleRequestT = Model::DeleteMobileDeviceAccessRuleRequest>
        Model::DeleteMobileDeviceAccessRuleOutcomeCallable DeleteMobileDeviceAccessRuleCallable(const DeleteMobileDeviceAccessRuleRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DeleteMobileDeviceAccessRule, request);
        }

        /**
         * An Async wrapper for DeleteMobileDeviceAccessRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMobileDeviceAccessRuleRequestT = Model::DeleteMobileDeviceAccessRuleRequest>
        void DeleteMobileDeviceAccessRuleAsync(const DeleteMobileDeviceAccessRuleRequestT& request, const DeleteMobileDeviceAccessRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DeleteMobileDeviceAccessRule, request, handler, context);
        }

        /**
         * <p>Deletes an WorkMail organization and all underlying AWS resources managed by
         * WorkMail as part of the organization. You can choose whether to delete the
         * associated directory. For more information, see <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/remove_organization.html">Removing
         * an organization</a> in the <i>WorkMail Administrator Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOrganizationOutcome DeleteOrganization(const Model::DeleteOrganizationRequest& request) const;

        /**
         * A Callable wrapper for DeleteOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOrganizationRequestT = Model::DeleteOrganizationRequest>
        Model::DeleteOrganizationOutcomeCallable DeleteOrganizationCallable(const DeleteOrganizationRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DeleteOrganization, request);
        }

        /**
         * An Async wrapper for DeleteOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOrganizationRequestT = Model::DeleteOrganizationRequest>
        void DeleteOrganizationAsync(const DeleteOrganizationRequestT& request, const DeleteOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DeleteOrganization, request, handler, context);
        }

        /**
         * <p>Deletes the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceOutcome DeleteResource(const Model::DeleteResourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourceRequestT = Model::DeleteResourceRequest>
        Model::DeleteResourceOutcomeCallable DeleteResourceCallable(const DeleteResourceRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DeleteResource, request);
        }

        /**
         * An Async wrapper for DeleteResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourceRequestT = Model::DeleteResourceRequest>
        void DeleteResourceAsync(const DeleteResourceRequestT& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DeleteResource, request, handler, context);
        }

        /**
         * <p>Deletes the specified retention policy from the specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteRetentionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRetentionPolicyOutcome DeleteRetentionPolicy(const Model::DeleteRetentionPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteRetentionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRetentionPolicyRequestT = Model::DeleteRetentionPolicyRequest>
        Model::DeleteRetentionPolicyOutcomeCallable DeleteRetentionPolicyCallable(const DeleteRetentionPolicyRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DeleteRetentionPolicy, request);
        }

        /**
         * An Async wrapper for DeleteRetentionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRetentionPolicyRequestT = Model::DeleteRetentionPolicyRequest>
        void DeleteRetentionPolicyAsync(const DeleteRetentionPolicyRequestT& request, const DeleteRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DeleteRetentionPolicy, request, handler, context);
        }

        /**
         * <p>Deletes a user from WorkMail and all subsequent systems. Before you can
         * delete a user, the user state must be <code>DISABLED</code>. Use the
         * <a>DescribeUser</a> action to confirm the user state.</p> <p>Deleting a user is
         * permanent and cannot be undone. WorkMail archives user mailboxes for 30 days
         * before they are permanently removed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        Model::DeleteUserOutcomeCallable DeleteUserCallable(const DeleteUserRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DeleteUser, request);
        }

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        void DeleteUserAsync(const DeleteUserRequestT& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DeleteUser, request, handler, context);
        }

        /**
         * <p>Mark a user, group, or resource as no longer used in WorkMail. This action
         * disassociates the mailbox and schedules it for clean-up. WorkMail keeps
         * mailboxes for 30 days before they are permanently removed. The functionality in
         * the console is <i>Disable</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeregisterFromWorkMail">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterFromWorkMailOutcome DeregisterFromWorkMail(const Model::DeregisterFromWorkMailRequest& request) const;

        /**
         * A Callable wrapper for DeregisterFromWorkMail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterFromWorkMailRequestT = Model::DeregisterFromWorkMailRequest>
        Model::DeregisterFromWorkMailOutcomeCallable DeregisterFromWorkMailCallable(const DeregisterFromWorkMailRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DeregisterFromWorkMail, request);
        }

        /**
         * An Async wrapper for DeregisterFromWorkMail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterFromWorkMailRequestT = Model::DeregisterFromWorkMailRequest>
        void DeregisterFromWorkMailAsync(const DeregisterFromWorkMailRequestT& request, const DeregisterFromWorkMailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DeregisterFromWorkMail, request, handler, context);
        }

        /**
         * <p>Removes a domain from WorkMail, stops email routing to WorkMail, and removes
         * the authorization allowing WorkMail use. SES keeps the domain because other
         * applications may use it. You must first remove any email address used by
         * WorkMail entities before you remove the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DeregisterMailDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterMailDomainOutcome DeregisterMailDomain(const Model::DeregisterMailDomainRequest& request) const;

        /**
         * A Callable wrapper for DeregisterMailDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterMailDomainRequestT = Model::DeregisterMailDomainRequest>
        Model::DeregisterMailDomainOutcomeCallable DeregisterMailDomainCallable(const DeregisterMailDomainRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DeregisterMailDomain, request);
        }

        /**
         * An Async wrapper for DeregisterMailDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterMailDomainRequestT = Model::DeregisterMailDomainRequest>
        void DeregisterMailDomainAsync(const DeregisterMailDomainRequestT& request, const DeregisterMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DeregisterMailDomain, request, handler, context);
        }

        /**
         * <p>Describes the current email monitoring configuration for a specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeEmailMonitoringConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEmailMonitoringConfigurationOutcome DescribeEmailMonitoringConfiguration(const Model::DescribeEmailMonitoringConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeEmailMonitoringConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEmailMonitoringConfigurationRequestT = Model::DescribeEmailMonitoringConfigurationRequest>
        Model::DescribeEmailMonitoringConfigurationOutcomeCallable DescribeEmailMonitoringConfigurationCallable(const DescribeEmailMonitoringConfigurationRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DescribeEmailMonitoringConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeEmailMonitoringConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEmailMonitoringConfigurationRequestT = Model::DescribeEmailMonitoringConfigurationRequest>
        void DescribeEmailMonitoringConfigurationAsync(const DescribeEmailMonitoringConfigurationRequestT& request, const DescribeEmailMonitoringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DescribeEmailMonitoringConfiguration, request, handler, context);
        }

        /**
         * <p>Returns basic details about an entity in WorkMail. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEntityOutcome DescribeEntity(const Model::DescribeEntityRequest& request) const;

        /**
         * A Callable wrapper for DescribeEntity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEntityRequestT = Model::DescribeEntityRequest>
        Model::DescribeEntityOutcomeCallable DescribeEntityCallable(const DescribeEntityRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DescribeEntity, request);
        }

        /**
         * An Async wrapper for DescribeEntity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEntityRequestT = Model::DescribeEntityRequest>
        void DescribeEntityAsync(const DescribeEntityRequestT& request, const DescribeEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DescribeEntity, request, handler, context);
        }

        /**
         * <p>Returns the data available for the group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGroupOutcome DescribeGroup(const Model::DescribeGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeGroupRequestT = Model::DescribeGroupRequest>
        Model::DescribeGroupOutcomeCallable DescribeGroupCallable(const DescribeGroupRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DescribeGroup, request);
        }

        /**
         * An Async wrapper for DescribeGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeGroupRequestT = Model::DescribeGroupRequest>
        void DescribeGroupAsync(const DescribeGroupRequestT& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DescribeGroup, request, handler, context);
        }

        /**
         * <p>Lists the settings in a DMARC policy for a specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeInboundDmarcSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInboundDmarcSettingsOutcome DescribeInboundDmarcSettings(const Model::DescribeInboundDmarcSettingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeInboundDmarcSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInboundDmarcSettingsRequestT = Model::DescribeInboundDmarcSettingsRequest>
        Model::DescribeInboundDmarcSettingsOutcomeCallable DescribeInboundDmarcSettingsCallable(const DescribeInboundDmarcSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DescribeInboundDmarcSettings, request);
        }

        /**
         * An Async wrapper for DescribeInboundDmarcSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInboundDmarcSettingsRequestT = Model::DescribeInboundDmarcSettingsRequest>
        void DescribeInboundDmarcSettingsAsync(const DescribeInboundDmarcSettingsRequestT& request, const DescribeInboundDmarcSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DescribeInboundDmarcSettings, request, handler, context);
        }

        /**
         * <p>Describes the current status of a mailbox export job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeMailboxExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMailboxExportJobOutcome DescribeMailboxExportJob(const Model::DescribeMailboxExportJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeMailboxExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMailboxExportJobRequestT = Model::DescribeMailboxExportJobRequest>
        Model::DescribeMailboxExportJobOutcomeCallable DescribeMailboxExportJobCallable(const DescribeMailboxExportJobRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DescribeMailboxExportJob, request);
        }

        /**
         * An Async wrapper for DescribeMailboxExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMailboxExportJobRequestT = Model::DescribeMailboxExportJobRequest>
        void DescribeMailboxExportJobAsync(const DescribeMailboxExportJobRequestT& request, const DescribeMailboxExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DescribeMailboxExportJob, request, handler, context);
        }

        /**
         * <p>Provides more information regarding a given organization based on its
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationOutcome DescribeOrganization(const Model::DescribeOrganizationRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOrganizationRequestT = Model::DescribeOrganizationRequest>
        Model::DescribeOrganizationOutcomeCallable DescribeOrganizationCallable(const DescribeOrganizationRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DescribeOrganization, request);
        }

        /**
         * An Async wrapper for DescribeOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOrganizationRequestT = Model::DescribeOrganizationRequest>
        void DescribeOrganizationAsync(const DescribeOrganizationRequestT& request, const DescribeOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DescribeOrganization, request, handler, context);
        }

        /**
         * <p>Returns the data available for the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourceOutcome DescribeResource(const Model::DescribeResourceRequest& request) const;

        /**
         * A Callable wrapper for DescribeResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeResourceRequestT = Model::DescribeResourceRequest>
        Model::DescribeResourceOutcomeCallable DescribeResourceCallable(const DescribeResourceRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DescribeResource, request);
        }

        /**
         * An Async wrapper for DescribeResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeResourceRequestT = Model::DescribeResourceRequest>
        void DescribeResourceAsync(const DescribeResourceRequestT& request, const DescribeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DescribeResource, request, handler, context);
        }

        /**
         * <p>Provides information regarding the user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DescribeUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;

        /**
         * A Callable wrapper for DescribeUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUserRequestT = Model::DescribeUserRequest>
        Model::DescribeUserOutcomeCallable DescribeUserCallable(const DescribeUserRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DescribeUser, request);
        }

        /**
         * An Async wrapper for DescribeUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUserRequestT = Model::DescribeUserRequest>
        void DescribeUserAsync(const DescribeUserRequestT& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DescribeUser, request, handler, context);
        }

        /**
         * <p>Removes a member from the resource's set of delegates.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DisassociateDelegateFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDelegateFromResourceOutcome DisassociateDelegateFromResource(const Model::DisassociateDelegateFromResourceRequest& request) const;

        /**
         * A Callable wrapper for DisassociateDelegateFromResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateDelegateFromResourceRequestT = Model::DisassociateDelegateFromResourceRequest>
        Model::DisassociateDelegateFromResourceOutcomeCallable DisassociateDelegateFromResourceCallable(const DisassociateDelegateFromResourceRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DisassociateDelegateFromResource, request);
        }

        /**
         * An Async wrapper for DisassociateDelegateFromResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateDelegateFromResourceRequestT = Model::DisassociateDelegateFromResourceRequest>
        void DisassociateDelegateFromResourceAsync(const DisassociateDelegateFromResourceRequestT& request, const DisassociateDelegateFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DisassociateDelegateFromResource, request, handler, context);
        }

        /**
         * <p>Removes a member from a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/DisassociateMemberFromGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMemberFromGroupOutcome DisassociateMemberFromGroup(const Model::DisassociateMemberFromGroupRequest& request) const;

        /**
         * A Callable wrapper for DisassociateMemberFromGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateMemberFromGroupRequestT = Model::DisassociateMemberFromGroupRequest>
        Model::DisassociateMemberFromGroupOutcomeCallable DisassociateMemberFromGroupCallable(const DisassociateMemberFromGroupRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::DisassociateMemberFromGroup, request);
        }

        /**
         * An Async wrapper for DisassociateMemberFromGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateMemberFromGroupRequestT = Model::DisassociateMemberFromGroupRequest>
        void DisassociateMemberFromGroupAsync(const DisassociateMemberFromGroupRequestT& request, const DisassociateMemberFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::DisassociateMemberFromGroup, request, handler, context);
        }

        /**
         * <p>Gets the effects of an organization's access control rules as they apply to a
         * specified IPv4 address, access protocol action, and user ID or impersonation
         * role ID. You must provide either the user ID or impersonation role ID.
         * Impersonation role ID can only be used with Action EWS.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetAccessControlEffect">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessControlEffectOutcome GetAccessControlEffect(const Model::GetAccessControlEffectRequest& request) const;

        /**
         * A Callable wrapper for GetAccessControlEffect that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccessControlEffectRequestT = Model::GetAccessControlEffectRequest>
        Model::GetAccessControlEffectOutcomeCallable GetAccessControlEffectCallable(const GetAccessControlEffectRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::GetAccessControlEffect, request);
        }

        /**
         * An Async wrapper for GetAccessControlEffect that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccessControlEffectRequestT = Model::GetAccessControlEffectRequest>
        void GetAccessControlEffectAsync(const GetAccessControlEffectRequestT& request, const GetAccessControlEffectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::GetAccessControlEffect, request, handler, context);
        }

        /**
         * <p>Gets the default retention policy details for the specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetDefaultRetentionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDefaultRetentionPolicyOutcome GetDefaultRetentionPolicy(const Model::GetDefaultRetentionPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetDefaultRetentionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDefaultRetentionPolicyRequestT = Model::GetDefaultRetentionPolicyRequest>
        Model::GetDefaultRetentionPolicyOutcomeCallable GetDefaultRetentionPolicyCallable(const GetDefaultRetentionPolicyRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::GetDefaultRetentionPolicy, request);
        }

        /**
         * An Async wrapper for GetDefaultRetentionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDefaultRetentionPolicyRequestT = Model::GetDefaultRetentionPolicyRequest>
        void GetDefaultRetentionPolicyAsync(const GetDefaultRetentionPolicyRequestT& request, const GetDefaultRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::GetDefaultRetentionPolicy, request, handler, context);
        }

        /**
         * <p>Gets the impersonation role details for the given WorkMail
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetImpersonationRole">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImpersonationRoleOutcome GetImpersonationRole(const Model::GetImpersonationRoleRequest& request) const;

        /**
         * A Callable wrapper for GetImpersonationRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetImpersonationRoleRequestT = Model::GetImpersonationRoleRequest>
        Model::GetImpersonationRoleOutcomeCallable GetImpersonationRoleCallable(const GetImpersonationRoleRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::GetImpersonationRole, request);
        }

        /**
         * An Async wrapper for GetImpersonationRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetImpersonationRoleRequestT = Model::GetImpersonationRoleRequest>
        void GetImpersonationRoleAsync(const GetImpersonationRoleRequestT& request, const GetImpersonationRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::GetImpersonationRole, request, handler, context);
        }

        /**
         * <p>Tests whether the given impersonation role can impersonate a target
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetImpersonationRoleEffect">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImpersonationRoleEffectOutcome GetImpersonationRoleEffect(const Model::GetImpersonationRoleEffectRequest& request) const;

        /**
         * A Callable wrapper for GetImpersonationRoleEffect that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetImpersonationRoleEffectRequestT = Model::GetImpersonationRoleEffectRequest>
        Model::GetImpersonationRoleEffectOutcomeCallable GetImpersonationRoleEffectCallable(const GetImpersonationRoleEffectRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::GetImpersonationRoleEffect, request);
        }

        /**
         * An Async wrapper for GetImpersonationRoleEffect that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetImpersonationRoleEffectRequestT = Model::GetImpersonationRoleEffectRequest>
        void GetImpersonationRoleEffectAsync(const GetImpersonationRoleEffectRequestT& request, const GetImpersonationRoleEffectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::GetImpersonationRoleEffect, request, handler, context);
        }

        /**
         * <p>Gets details for a mail domain, including domain records required to
         * configure your domain with recommended security.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetMailDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMailDomainOutcome GetMailDomain(const Model::GetMailDomainRequest& request) const;

        /**
         * A Callable wrapper for GetMailDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMailDomainRequestT = Model::GetMailDomainRequest>
        Model::GetMailDomainOutcomeCallable GetMailDomainCallable(const GetMailDomainRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::GetMailDomain, request);
        }

        /**
         * An Async wrapper for GetMailDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMailDomainRequestT = Model::GetMailDomainRequest>
        void GetMailDomainAsync(const GetMailDomainRequestT& request, const GetMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::GetMailDomain, request, handler, context);
        }

        /**
         * <p>Requests a user's mailbox details for a specified organization and
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetMailboxDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMailboxDetailsOutcome GetMailboxDetails(const Model::GetMailboxDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetMailboxDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMailboxDetailsRequestT = Model::GetMailboxDetailsRequest>
        Model::GetMailboxDetailsOutcomeCallable GetMailboxDetailsCallable(const GetMailboxDetailsRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::GetMailboxDetails, request);
        }

        /**
         * An Async wrapper for GetMailboxDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMailboxDetailsRequestT = Model::GetMailboxDetailsRequest>
        void GetMailboxDetailsAsync(const GetMailboxDetailsRequestT& request, const GetMailboxDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::GetMailboxDetails, request, handler, context);
        }

        /**
         * <p>Simulates the effect of the mobile device access rules for the given
         * attributes of a sample access event. Use this method to test the effects of the
         * current set of mobile device access rules for the WorkMail organization for a
         * particular user's attributes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetMobileDeviceAccessEffect">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMobileDeviceAccessEffectOutcome GetMobileDeviceAccessEffect(const Model::GetMobileDeviceAccessEffectRequest& request) const;

        /**
         * A Callable wrapper for GetMobileDeviceAccessEffect that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMobileDeviceAccessEffectRequestT = Model::GetMobileDeviceAccessEffectRequest>
        Model::GetMobileDeviceAccessEffectOutcomeCallable GetMobileDeviceAccessEffectCallable(const GetMobileDeviceAccessEffectRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::GetMobileDeviceAccessEffect, request);
        }

        /**
         * An Async wrapper for GetMobileDeviceAccessEffect that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMobileDeviceAccessEffectRequestT = Model::GetMobileDeviceAccessEffectRequest>
        void GetMobileDeviceAccessEffectAsync(const GetMobileDeviceAccessEffectRequestT& request, const GetMobileDeviceAccessEffectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::GetMobileDeviceAccessEffect, request, handler, context);
        }

        /**
         * <p>Gets the mobile device access override for the given WorkMail organization,
         * user, and device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/GetMobileDeviceAccessOverride">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMobileDeviceAccessOverrideOutcome GetMobileDeviceAccessOverride(const Model::GetMobileDeviceAccessOverrideRequest& request) const;

        /**
         * A Callable wrapper for GetMobileDeviceAccessOverride that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMobileDeviceAccessOverrideRequestT = Model::GetMobileDeviceAccessOverrideRequest>
        Model::GetMobileDeviceAccessOverrideOutcomeCallable GetMobileDeviceAccessOverrideCallable(const GetMobileDeviceAccessOverrideRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::GetMobileDeviceAccessOverride, request);
        }

        /**
         * An Async wrapper for GetMobileDeviceAccessOverride that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMobileDeviceAccessOverrideRequestT = Model::GetMobileDeviceAccessOverrideRequest>
        void GetMobileDeviceAccessOverrideAsync(const GetMobileDeviceAccessOverrideRequestT& request, const GetMobileDeviceAccessOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::GetMobileDeviceAccessOverride, request, handler, context);
        }

        /**
         * <p>Lists the access control rules for the specified organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListAccessControlRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessControlRulesOutcome ListAccessControlRules(const Model::ListAccessControlRulesRequest& request) const;

        /**
         * A Callable wrapper for ListAccessControlRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccessControlRulesRequestT = Model::ListAccessControlRulesRequest>
        Model::ListAccessControlRulesOutcomeCallable ListAccessControlRulesCallable(const ListAccessControlRulesRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::ListAccessControlRules, request);
        }

        /**
         * An Async wrapper for ListAccessControlRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccessControlRulesRequestT = Model::ListAccessControlRulesRequest>
        void ListAccessControlRulesAsync(const ListAccessControlRulesRequestT& request, const ListAccessControlRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::ListAccessControlRules, request, handler, context);
        }

        /**
         * <p>Creates a paginated call to list the aliases associated with a given
         * entity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAliasesOutcome ListAliases(const Model::ListAliasesRequest& request) const;

        /**
         * A Callable wrapper for ListAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAliasesRequestT = Model::ListAliasesRequest>
        Model::ListAliasesOutcomeCallable ListAliasesCallable(const ListAliasesRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::ListAliases, request);
        }

        /**
         * An Async wrapper for ListAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAliasesRequestT = Model::ListAliasesRequest>
        void ListAliasesAsync(const ListAliasesRequestT& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::ListAliases, request, handler, context);
        }

        /**
         * <p>List all the <code>AvailabilityConfiguration</code>'s for the given WorkMail
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListAvailabilityConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAvailabilityConfigurationsOutcome ListAvailabilityConfigurations(const Model::ListAvailabilityConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListAvailabilityConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAvailabilityConfigurationsRequestT = Model::ListAvailabilityConfigurationsRequest>
        Model::ListAvailabilityConfigurationsOutcomeCallable ListAvailabilityConfigurationsCallable(const ListAvailabilityConfigurationsRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::ListAvailabilityConfigurations, request);
        }

        /**
         * An Async wrapper for ListAvailabilityConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAvailabilityConfigurationsRequestT = Model::ListAvailabilityConfigurationsRequest>
        void ListAvailabilityConfigurationsAsync(const ListAvailabilityConfigurationsRequestT& request, const ListAvailabilityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::ListAvailabilityConfigurations, request, handler, context);
        }

        /**
         * <p>Returns an overview of the members of a group. Users and groups can be
         * members of a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListGroupMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupMembersOutcome ListGroupMembers(const Model::ListGroupMembersRequest& request) const;

        /**
         * A Callable wrapper for ListGroupMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGroupMembersRequestT = Model::ListGroupMembersRequest>
        Model::ListGroupMembersOutcomeCallable ListGroupMembersCallable(const ListGroupMembersRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::ListGroupMembers, request);
        }

        /**
         * An Async wrapper for ListGroupMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGroupMembersRequestT = Model::ListGroupMembersRequest>
        void ListGroupMembersAsync(const ListGroupMembersRequestT& request, const ListGroupMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::ListGroupMembers, request, handler, context);
        }

        /**
         * <p>Returns summaries of the organization's groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGroupsRequestT = Model::ListGroupsRequest>
        Model::ListGroupsOutcomeCallable ListGroupsCallable(const ListGroupsRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::ListGroups, request);
        }

        /**
         * An Async wrapper for ListGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGroupsRequestT = Model::ListGroupsRequest>
        void ListGroupsAsync(const ListGroupsRequestT& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::ListGroups, request, handler, context);
        }

        /**
         * <p>Returns all the groups to which an entity belongs.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListGroupsForEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsForEntityOutcome ListGroupsForEntity(const Model::ListGroupsForEntityRequest& request) const;

        /**
         * A Callable wrapper for ListGroupsForEntity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGroupsForEntityRequestT = Model::ListGroupsForEntityRequest>
        Model::ListGroupsForEntityOutcomeCallable ListGroupsForEntityCallable(const ListGroupsForEntityRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::ListGroupsForEntity, request);
        }

        /**
         * An Async wrapper for ListGroupsForEntity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGroupsForEntityRequestT = Model::ListGroupsForEntityRequest>
        void ListGroupsForEntityAsync(const ListGroupsForEntityRequestT& request, const ListGroupsForEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::ListGroupsForEntity, request, handler, context);
        }

        /**
         * <p>Lists all the impersonation roles for the given WorkMail
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListImpersonationRoles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImpersonationRolesOutcome ListImpersonationRoles(const Model::ListImpersonationRolesRequest& request) const;

        /**
         * A Callable wrapper for ListImpersonationRoles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImpersonationRolesRequestT = Model::ListImpersonationRolesRequest>
        Model::ListImpersonationRolesOutcomeCallable ListImpersonationRolesCallable(const ListImpersonationRolesRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::ListImpersonationRoles, request);
        }

        /**
         * An Async wrapper for ListImpersonationRoles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImpersonationRolesRequestT = Model::ListImpersonationRolesRequest>
        void ListImpersonationRolesAsync(const ListImpersonationRolesRequestT& request, const ListImpersonationRolesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::ListImpersonationRoles, request, handler, context);
        }

        /**
         * <p>Lists the mail domains in a given WorkMail organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListMailDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMailDomainsOutcome ListMailDomains(const Model::ListMailDomainsRequest& request) const;

        /**
         * A Callable wrapper for ListMailDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMailDomainsRequestT = Model::ListMailDomainsRequest>
        Model::ListMailDomainsOutcomeCallable ListMailDomainsCallable(const ListMailDomainsRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::ListMailDomains, request);
        }

        /**
         * An Async wrapper for ListMailDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMailDomainsRequestT = Model::ListMailDomainsRequest>
        void ListMailDomainsAsync(const ListMailDomainsRequestT& request, const ListMailDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::ListMailDomains, request, handler, context);
        }

        /**
         * <p>Lists the mailbox export jobs started for the specified organization within
         * the last seven days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListMailboxExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMailboxExportJobsOutcome ListMailboxExportJobs(const Model::ListMailboxExportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListMailboxExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMailboxExportJobsRequestT = Model::ListMailboxExportJobsRequest>
        Model::ListMailboxExportJobsOutcomeCallable ListMailboxExportJobsCallable(const ListMailboxExportJobsRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::ListMailboxExportJobs, request);
        }

        /**
         * An Async wrapper for ListMailboxExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMailboxExportJobsRequestT = Model::ListMailboxExportJobsRequest>
        void ListMailboxExportJobsAsync(const ListMailboxExportJobsRequestT& request, const ListMailboxExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::ListMailboxExportJobs, request, handler, context);
        }

        /**
         * <p>Lists the mailbox permissions associated with a user, group, or resource
         * mailbox.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListMailboxPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMailboxPermissionsOutcome ListMailboxPermissions(const Model::ListMailboxPermissionsRequest& request) const;

        /**
         * A Callable wrapper for ListMailboxPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMailboxPermissionsRequestT = Model::ListMailboxPermissionsRequest>
        Model::ListMailboxPermissionsOutcomeCallable ListMailboxPermissionsCallable(const ListMailboxPermissionsRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::ListMailboxPermissions, request);
        }

        /**
         * An Async wrapper for ListMailboxPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMailboxPermissionsRequestT = Model::ListMailboxPermissionsRequest>
        void ListMailboxPermissionsAsync(const ListMailboxPermissionsRequestT& request, const ListMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::ListMailboxPermissions, request, handler, context);
        }

        /**
         * <p>Lists all the mobile device access overrides for any given combination of
         * WorkMail organization, user, or device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListMobileDeviceAccessOverrides">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMobileDeviceAccessOverridesOutcome ListMobileDeviceAccessOverrides(const Model::ListMobileDeviceAccessOverridesRequest& request) const;

        /**
         * A Callable wrapper for ListMobileDeviceAccessOverrides that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMobileDeviceAccessOverridesRequestT = Model::ListMobileDeviceAccessOverridesRequest>
        Model::ListMobileDeviceAccessOverridesOutcomeCallable ListMobileDeviceAccessOverridesCallable(const ListMobileDeviceAccessOverridesRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::ListMobileDeviceAccessOverrides, request);
        }

        /**
         * An Async wrapper for ListMobileDeviceAccessOverrides that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMobileDeviceAccessOverridesRequestT = Model::ListMobileDeviceAccessOverridesRequest>
        void ListMobileDeviceAccessOverridesAsync(const ListMobileDeviceAccessOverridesRequestT& request, const ListMobileDeviceAccessOverridesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::ListMobileDeviceAccessOverrides, request, handler, context);
        }

        /**
         * <p>Lists the mobile device access rules for the specified WorkMail
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListMobileDeviceAccessRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMobileDeviceAccessRulesOutcome ListMobileDeviceAccessRules(const Model::ListMobileDeviceAccessRulesRequest& request) const;

        /**
         * A Callable wrapper for ListMobileDeviceAccessRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMobileDeviceAccessRulesRequestT = Model::ListMobileDeviceAccessRulesRequest>
        Model::ListMobileDeviceAccessRulesOutcomeCallable ListMobileDeviceAccessRulesCallable(const ListMobileDeviceAccessRulesRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::ListMobileDeviceAccessRules, request);
        }

        /**
         * An Async wrapper for ListMobileDeviceAccessRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMobileDeviceAccessRulesRequestT = Model::ListMobileDeviceAccessRulesRequest>
        void ListMobileDeviceAccessRulesAsync(const ListMobileDeviceAccessRulesRequestT& request, const ListMobileDeviceAccessRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::ListMobileDeviceAccessRules, request, handler, context);
        }

        /**
         * <p>Returns summaries of the customer's organizations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListOrganizations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationsOutcome ListOrganizations(const Model::ListOrganizationsRequest& request) const;

        /**
         * A Callable wrapper for ListOrganizations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOrganizationsRequestT = Model::ListOrganizationsRequest>
        Model::ListOrganizationsOutcomeCallable ListOrganizationsCallable(const ListOrganizationsRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::ListOrganizations, request);
        }

        /**
         * An Async wrapper for ListOrganizations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOrganizationsRequestT = Model::ListOrganizationsRequest>
        void ListOrganizationsAsync(const ListOrganizationsRequestT& request, const ListOrganizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::ListOrganizations, request, handler, context);
        }

        /**
         * <p>Lists the delegates associated with a resource. Users and groups can be
         * resource delegates and answer requests on behalf of the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListResourceDelegates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceDelegatesOutcome ListResourceDelegates(const Model::ListResourceDelegatesRequest& request) const;

        /**
         * A Callable wrapper for ListResourceDelegates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourceDelegatesRequestT = Model::ListResourceDelegatesRequest>
        Model::ListResourceDelegatesOutcomeCallable ListResourceDelegatesCallable(const ListResourceDelegatesRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::ListResourceDelegates, request);
        }

        /**
         * An Async wrapper for ListResourceDelegates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceDelegatesRequestT = Model::ListResourceDelegatesRequest>
        void ListResourceDelegatesAsync(const ListResourceDelegatesRequestT& request, const ListResourceDelegatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::ListResourceDelegates, request, handler, context);
        }

        /**
         * <p>Returns summaries of the organization's resources.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesOutcome ListResources(const Model::ListResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourcesRequestT = Model::ListResourcesRequest>
        Model::ListResourcesOutcomeCallable ListResourcesCallable(const ListResourcesRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::ListResources, request);
        }

        /**
         * An Async wrapper for ListResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourcesRequestT = Model::ListResourcesRequest>
        void ListResourcesAsync(const ListResourcesRequestT& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::ListResources, request, handler, context);
        }

        /**
         * <p>Lists the tags applied to an WorkMail organization resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Returns summaries of the organization's users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * A Callable wrapper for ListUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        Model::ListUsersOutcomeCallable ListUsersCallable(const ListUsersRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::ListUsers, request);
        }

        /**
         * An Async wrapper for ListUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        void ListUsersAsync(const ListUsersRequestT& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::ListUsers, request, handler, context);
        }

        /**
         * <p>Adds a new access control rule for the specified organization. The rule
         * allows or denies access to the organization for the specified IPv4 addresses,
         * access protocol actions, user IDs and impersonation IDs. Adding a new rule with
         * the same name as an existing rule replaces the older rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutAccessControlRule">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccessControlRuleOutcome PutAccessControlRule(const Model::PutAccessControlRuleRequest& request) const;

        /**
         * A Callable wrapper for PutAccessControlRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAccessControlRuleRequestT = Model::PutAccessControlRuleRequest>
        Model::PutAccessControlRuleOutcomeCallable PutAccessControlRuleCallable(const PutAccessControlRuleRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::PutAccessControlRule, request);
        }

        /**
         * An Async wrapper for PutAccessControlRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAccessControlRuleRequestT = Model::PutAccessControlRuleRequest>
        void PutAccessControlRuleAsync(const PutAccessControlRuleRequestT& request, const PutAccessControlRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::PutAccessControlRule, request, handler, context);
        }

        /**
         * <p>Creates or updates the email monitoring configuration for a specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutEmailMonitoringConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEmailMonitoringConfigurationOutcome PutEmailMonitoringConfiguration(const Model::PutEmailMonitoringConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutEmailMonitoringConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutEmailMonitoringConfigurationRequestT = Model::PutEmailMonitoringConfigurationRequest>
        Model::PutEmailMonitoringConfigurationOutcomeCallable PutEmailMonitoringConfigurationCallable(const PutEmailMonitoringConfigurationRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::PutEmailMonitoringConfiguration, request);
        }

        /**
         * An Async wrapper for PutEmailMonitoringConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutEmailMonitoringConfigurationRequestT = Model::PutEmailMonitoringConfigurationRequest>
        void PutEmailMonitoringConfigurationAsync(const PutEmailMonitoringConfigurationRequestT& request, const PutEmailMonitoringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::PutEmailMonitoringConfiguration, request, handler, context);
        }

        /**
         * <p>Enables or disables a DMARC policy for a given organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutInboundDmarcSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInboundDmarcSettingsOutcome PutInboundDmarcSettings(const Model::PutInboundDmarcSettingsRequest& request) const;

        /**
         * A Callable wrapper for PutInboundDmarcSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutInboundDmarcSettingsRequestT = Model::PutInboundDmarcSettingsRequest>
        Model::PutInboundDmarcSettingsOutcomeCallable PutInboundDmarcSettingsCallable(const PutInboundDmarcSettingsRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::PutInboundDmarcSettings, request);
        }

        /**
         * An Async wrapper for PutInboundDmarcSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutInboundDmarcSettingsRequestT = Model::PutInboundDmarcSettingsRequest>
        void PutInboundDmarcSettingsAsync(const PutInboundDmarcSettingsRequestT& request, const PutInboundDmarcSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::PutInboundDmarcSettings, request, handler, context);
        }

        /**
         * <p>Sets permissions for a user, group, or resource. This replaces any
         * pre-existing permissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutMailboxPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMailboxPermissionsOutcome PutMailboxPermissions(const Model::PutMailboxPermissionsRequest& request) const;

        /**
         * A Callable wrapper for PutMailboxPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutMailboxPermissionsRequestT = Model::PutMailboxPermissionsRequest>
        Model::PutMailboxPermissionsOutcomeCallable PutMailboxPermissionsCallable(const PutMailboxPermissionsRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::PutMailboxPermissions, request);
        }

        /**
         * An Async wrapper for PutMailboxPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutMailboxPermissionsRequestT = Model::PutMailboxPermissionsRequest>
        void PutMailboxPermissionsAsync(const PutMailboxPermissionsRequestT& request, const PutMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::PutMailboxPermissions, request, handler, context);
        }

        /**
         * <p>Creates or updates a mobile device access override for the given WorkMail
         * organization, user, and device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutMobileDeviceAccessOverride">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMobileDeviceAccessOverrideOutcome PutMobileDeviceAccessOverride(const Model::PutMobileDeviceAccessOverrideRequest& request) const;

        /**
         * A Callable wrapper for PutMobileDeviceAccessOverride that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutMobileDeviceAccessOverrideRequestT = Model::PutMobileDeviceAccessOverrideRequest>
        Model::PutMobileDeviceAccessOverrideOutcomeCallable PutMobileDeviceAccessOverrideCallable(const PutMobileDeviceAccessOverrideRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::PutMobileDeviceAccessOverride, request);
        }

        /**
         * An Async wrapper for PutMobileDeviceAccessOverride that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutMobileDeviceAccessOverrideRequestT = Model::PutMobileDeviceAccessOverrideRequest>
        void PutMobileDeviceAccessOverrideAsync(const PutMobileDeviceAccessOverrideRequestT& request, const PutMobileDeviceAccessOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::PutMobileDeviceAccessOverride, request, handler, context);
        }

        /**
         * <p>Puts a retention policy to the specified organization.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PutRetentionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRetentionPolicyOutcome PutRetentionPolicy(const Model::PutRetentionPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutRetentionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRetentionPolicyRequestT = Model::PutRetentionPolicyRequest>
        Model::PutRetentionPolicyOutcomeCallable PutRetentionPolicyCallable(const PutRetentionPolicyRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::PutRetentionPolicy, request);
        }

        /**
         * An Async wrapper for PutRetentionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRetentionPolicyRequestT = Model::PutRetentionPolicyRequest>
        void PutRetentionPolicyAsync(const PutRetentionPolicyRequestT& request, const PutRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::PutRetentionPolicy, request, handler, context);
        }

        /**
         * <p>Registers a new domain in WorkMail and SES, and configures it for use by
         * WorkMail. Emails received by SES for this domain are routed to the specified
         * WorkMail organization, and WorkMail has permanent permission to use the
         * specified domain for sending your users' emails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/RegisterMailDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterMailDomainOutcome RegisterMailDomain(const Model::RegisterMailDomainRequest& request) const;

        /**
         * A Callable wrapper for RegisterMailDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterMailDomainRequestT = Model::RegisterMailDomainRequest>
        Model::RegisterMailDomainOutcomeCallable RegisterMailDomainCallable(const RegisterMailDomainRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::RegisterMailDomain, request);
        }

        /**
         * An Async wrapper for RegisterMailDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterMailDomainRequestT = Model::RegisterMailDomainRequest>
        void RegisterMailDomainAsync(const RegisterMailDomainRequestT& request, const RegisterMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::RegisterMailDomain, request, handler, context);
        }

        /**
         * <p>Registers an existing and disabled user, group, or resource for WorkMail use
         * by associating a mailbox and calendaring capabilities. It performs no change if
         * the user, group, or resource is enabled and fails if the user, group, or
         * resource is deleted. This operation results in the accumulation of costs. For
         * more information, see <a
         * href="https://aws.amazon.com/workmail/pricing">Pricing</a>. The equivalent
         * console functionality for this operation is <i>Enable</i>.</p> <p>Users can
         * either be created by calling the <a>CreateUser</a> API operation or they can be
         * synchronized from your directory. For more information, see
         * <a>DeregisterFromWorkMail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/RegisterToWorkMail">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterToWorkMailOutcome RegisterToWorkMail(const Model::RegisterToWorkMailRequest& request) const;

        /**
         * A Callable wrapper for RegisterToWorkMail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterToWorkMailRequestT = Model::RegisterToWorkMailRequest>
        Model::RegisterToWorkMailOutcomeCallable RegisterToWorkMailCallable(const RegisterToWorkMailRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::RegisterToWorkMail, request);
        }

        /**
         * An Async wrapper for RegisterToWorkMail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterToWorkMailRequestT = Model::RegisterToWorkMailRequest>
        void RegisterToWorkMailAsync(const RegisterToWorkMailRequestT& request, const RegisterToWorkMailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::RegisterToWorkMail, request, handler, context);
        }

        /**
         * <p>Allows the administrator to reset the password for a user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ResetPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetPasswordOutcome ResetPassword(const Model::ResetPasswordRequest& request) const;

        /**
         * A Callable wrapper for ResetPassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetPasswordRequestT = Model::ResetPasswordRequest>
        Model::ResetPasswordOutcomeCallable ResetPasswordCallable(const ResetPasswordRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::ResetPassword, request);
        }

        /**
         * An Async wrapper for ResetPassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetPasswordRequestT = Model::ResetPasswordRequest>
        void ResetPasswordAsync(const ResetPasswordRequestT& request, const ResetPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::ResetPassword, request, handler, context);
        }

        /**
         * <p>Starts a mailbox export job to export MIME-format email messages and calendar
         * items from the specified mailbox to the specified Amazon Simple Storage Service
         * (Amazon S3) bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/workmail/latest/adminguide/mail-export.html">Exporting
         * mailbox content</a> in the <i>WorkMail Administrator Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/StartMailboxExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMailboxExportJobOutcome StartMailboxExportJob(const Model::StartMailboxExportJobRequest& request) const;

        /**
         * A Callable wrapper for StartMailboxExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMailboxExportJobRequestT = Model::StartMailboxExportJobRequest>
        Model::StartMailboxExportJobOutcomeCallable StartMailboxExportJobCallable(const StartMailboxExportJobRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::StartMailboxExportJob, request);
        }

        /**
         * An Async wrapper for StartMailboxExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMailboxExportJobRequestT = Model::StartMailboxExportJobRequest>
        void StartMailboxExportJobAsync(const StartMailboxExportJobRequestT& request, const StartMailboxExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::StartMailboxExportJob, request, handler, context);
        }

        /**
         * <p>Applies the specified tags to the specified WorkMailorganization
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::TagResource, request, handler, context);
        }

        /**
         * <p>Performs a test on an availability provider to ensure that access is allowed.
         * For EWS, it verifies the provided credentials can be used to successfully log
         * in. For Lambda, it verifies that the Lambda function can be invoked and that the
         * resource access policy was configured to deny anonymous access. An anonymous
         * invocation is one done without providing either a <code>SourceArn</code> or
         * <code>SourceAccount</code> header.</p>  <p>The request must contain either
         * one provider definition (<code>EwsProvider</code> or
         * <code>LambdaProvider</code>) or the <code>DomainName</code> parameter. If the
         * <code>DomainName</code> parameter is provided, the configuration stored under
         * the <code>DomainName</code> will be tested.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/TestAvailabilityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::TestAvailabilityConfigurationOutcome TestAvailabilityConfiguration(const Model::TestAvailabilityConfigurationRequest& request) const;

        /**
         * A Callable wrapper for TestAvailabilityConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TestAvailabilityConfigurationRequestT = Model::TestAvailabilityConfigurationRequest>
        Model::TestAvailabilityConfigurationOutcomeCallable TestAvailabilityConfigurationCallable(const TestAvailabilityConfigurationRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::TestAvailabilityConfiguration, request);
        }

        /**
         * An Async wrapper for TestAvailabilityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestAvailabilityConfigurationRequestT = Model::TestAvailabilityConfigurationRequest>
        void TestAvailabilityConfigurationAsync(const TestAvailabilityConfigurationRequestT& request, const TestAvailabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::TestAvailabilityConfiguration, request, handler, context);
        }

        /**
         * <p>Untags the specified tags from the specified WorkMail organization
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing <code>AvailabilityConfiguration</code> for the given
         * WorkMail organization and domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateAvailabilityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAvailabilityConfigurationOutcome UpdateAvailabilityConfiguration(const Model::UpdateAvailabilityConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateAvailabilityConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAvailabilityConfigurationRequestT = Model::UpdateAvailabilityConfigurationRequest>
        Model::UpdateAvailabilityConfigurationOutcomeCallable UpdateAvailabilityConfigurationCallable(const UpdateAvailabilityConfigurationRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::UpdateAvailabilityConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateAvailabilityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAvailabilityConfigurationRequestT = Model::UpdateAvailabilityConfigurationRequest>
        void UpdateAvailabilityConfigurationAsync(const UpdateAvailabilityConfigurationRequestT& request, const UpdateAvailabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::UpdateAvailabilityConfiguration, request, handler, context);
        }

        /**
         * <p>Updates the default mail domain for an organization. The default mail domain
         * is used by the WorkMail AWS Console to suggest an email address when enabling a
         * mail user. You can only have one default domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateDefaultMailDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDefaultMailDomainOutcome UpdateDefaultMailDomain(const Model::UpdateDefaultMailDomainRequest& request) const;

        /**
         * A Callable wrapper for UpdateDefaultMailDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDefaultMailDomainRequestT = Model::UpdateDefaultMailDomainRequest>
        Model::UpdateDefaultMailDomainOutcomeCallable UpdateDefaultMailDomainCallable(const UpdateDefaultMailDomainRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::UpdateDefaultMailDomain, request);
        }

        /**
         * An Async wrapper for UpdateDefaultMailDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDefaultMailDomainRequestT = Model::UpdateDefaultMailDomainRequest>
        void UpdateDefaultMailDomainAsync(const UpdateDefaultMailDomainRequestT& request, const UpdateDefaultMailDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::UpdateDefaultMailDomain, request, handler, context);
        }

        /**
         * <p>Updates attibutes in a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGroupRequestT = Model::UpdateGroupRequest>
        Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const UpdateGroupRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::UpdateGroup, request);
        }

        /**
         * An Async wrapper for UpdateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGroupRequestT = Model::UpdateGroupRequest>
        void UpdateGroupAsync(const UpdateGroupRequestT& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::UpdateGroup, request, handler, context);
        }

        /**
         * <p>Updates an impersonation role for the given WorkMail
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateImpersonationRole">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateImpersonationRoleOutcome UpdateImpersonationRole(const Model::UpdateImpersonationRoleRequest& request) const;

        /**
         * A Callable wrapper for UpdateImpersonationRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateImpersonationRoleRequestT = Model::UpdateImpersonationRoleRequest>
        Model::UpdateImpersonationRoleOutcomeCallable UpdateImpersonationRoleCallable(const UpdateImpersonationRoleRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::UpdateImpersonationRole, request);
        }

        /**
         * An Async wrapper for UpdateImpersonationRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateImpersonationRoleRequestT = Model::UpdateImpersonationRoleRequest>
        void UpdateImpersonationRoleAsync(const UpdateImpersonationRoleRequestT& request, const UpdateImpersonationRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::UpdateImpersonationRole, request, handler, context);
        }

        /**
         * <p>Updates a user's current mailbox quota for a specified organization and
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateMailboxQuota">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMailboxQuotaOutcome UpdateMailboxQuota(const Model::UpdateMailboxQuotaRequest& request) const;

        /**
         * A Callable wrapper for UpdateMailboxQuota that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMailboxQuotaRequestT = Model::UpdateMailboxQuotaRequest>
        Model::UpdateMailboxQuotaOutcomeCallable UpdateMailboxQuotaCallable(const UpdateMailboxQuotaRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::UpdateMailboxQuota, request);
        }

        /**
         * An Async wrapper for UpdateMailboxQuota that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMailboxQuotaRequestT = Model::UpdateMailboxQuotaRequest>
        void UpdateMailboxQuotaAsync(const UpdateMailboxQuotaRequestT& request, const UpdateMailboxQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::UpdateMailboxQuota, request, handler, context);
        }

        /**
         * <p>Updates a mobile device access rule for the specified WorkMail
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateMobileDeviceAccessRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMobileDeviceAccessRuleOutcome UpdateMobileDeviceAccessRule(const Model::UpdateMobileDeviceAccessRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateMobileDeviceAccessRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMobileDeviceAccessRuleRequestT = Model::UpdateMobileDeviceAccessRuleRequest>
        Model::UpdateMobileDeviceAccessRuleOutcomeCallable UpdateMobileDeviceAccessRuleCallable(const UpdateMobileDeviceAccessRuleRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::UpdateMobileDeviceAccessRule, request);
        }

        /**
         * An Async wrapper for UpdateMobileDeviceAccessRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMobileDeviceAccessRuleRequestT = Model::UpdateMobileDeviceAccessRuleRequest>
        void UpdateMobileDeviceAccessRuleAsync(const UpdateMobileDeviceAccessRuleRequestT& request, const UpdateMobileDeviceAccessRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::UpdateMobileDeviceAccessRule, request, handler, context);
        }

        /**
         * <p>Updates the primary email for a user, group, or resource. The current email
         * is moved into the list of aliases (or swapped between an existing alias and the
         * current primary email), and the email provided in the input is promoted as the
         * primary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdatePrimaryEmailAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePrimaryEmailAddressOutcome UpdatePrimaryEmailAddress(const Model::UpdatePrimaryEmailAddressRequest& request) const;

        /**
         * A Callable wrapper for UpdatePrimaryEmailAddress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePrimaryEmailAddressRequestT = Model::UpdatePrimaryEmailAddressRequest>
        Model::UpdatePrimaryEmailAddressOutcomeCallable UpdatePrimaryEmailAddressCallable(const UpdatePrimaryEmailAddressRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::UpdatePrimaryEmailAddress, request);
        }

        /**
         * An Async wrapper for UpdatePrimaryEmailAddress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePrimaryEmailAddressRequestT = Model::UpdatePrimaryEmailAddressRequest>
        void UpdatePrimaryEmailAddressAsync(const UpdatePrimaryEmailAddressRequestT& request, const UpdatePrimaryEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::UpdatePrimaryEmailAddress, request, handler, context);
        }

        /**
         * <p>Updates data for the resource. To have the latest information, it must be
         * preceded by a <a>DescribeResource</a> call. The dataset in the request should be
         * the one expected when performing another <code>DescribeResource</code>
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceOutcome UpdateResource(const Model::UpdateResourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateResourceRequestT = Model::UpdateResourceRequest>
        Model::UpdateResourceOutcomeCallable UpdateResourceCallable(const UpdateResourceRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::UpdateResource, request);
        }

        /**
         * An Async wrapper for UpdateResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResourceRequestT = Model::UpdateResourceRequest>
        void UpdateResourceAsync(const UpdateResourceRequestT& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::UpdateResource, request, handler, context);
        }

        /**
         * <p>Updates data for the user. To have the latest information, it must be
         * preceded by a <a>DescribeUser</a> call. The dataset in the request should be the
         * one expected when performing another <code>DescribeUser</code>
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/UpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /**
         * A Callable wrapper for UpdateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserRequestT = Model::UpdateUserRequest>
        Model::UpdateUserOutcomeCallable UpdateUserCallable(const UpdateUserRequestT& request) const
        {
            return SubmitCallable(&WorkMailClient::UpdateUser, request);
        }

        /**
         * An Async wrapper for UpdateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserRequestT = Model::UpdateUserRequest>
        void UpdateUserAsync(const UpdateUserRequestT& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkMailClient::UpdateUser, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<WorkMailEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<WorkMailClient>;
      void init(const WorkMailClientConfiguration& clientConfiguration);

      WorkMailClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<WorkMailEndpointProviderBase> m_endpointProvider;
  };

} // namespace WorkMail
} // namespace Aws
