/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sso-admin/SSOAdminServiceClientModel.h>

namespace Aws
{
namespace SSOAdmin
{
  /**
   * <p>IAM Identity Center (successor to Single Sign-On) helps you securely create,
   * or connect, your workforce identities and manage their access centrally across
   * Amazon Web Services accounts and applications. IAM Identity Center is the
   * recommended approach for workforce authentication and authorization in Amazon
   * Web Services, for organizations of any size and type.</p>  <p>IAM Identity
   * Center uses the <code>sso</code> and <code>identitystore</code> API
   * namespaces.</p>  <p>This reference guide provides information on single
   * sign-on operations which could be used for access management of Amazon Web
   * Services accounts. For information about IAM Identity Center features, see the
   * <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">IAM
   * Identity Center User Guide</a>.</p> <p>Many operations in the IAM Identity
   * Center APIs rely on identifiers for users and groups, known as principals. For
   * more information about how to work with principals and principal IDs in IAM
   * Identity Center, see the <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/welcome.html">Identity
   * Store API Reference</a>.</p>  <p>Amazon Web Services provides SDKs that
   * consist of libraries and sample code for various programming languages and
   * platforms (Java, Ruby, .Net, iOS, Android, and more). The SDKs provide a
   * convenient way to create programmatic access to IAM Identity Center and other
   * Amazon Web Services services. For more information about the Amazon Web Services
   * SDKs, including how to download and install them, see <a
   * href="http://aws.amazon.com/tools/">Tools for Amazon Web Services</a>.</p>
   * 
   */
  class AWS_SSOADMIN_API SSOAdminClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SSOAdminClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SSOAdminClientConfiguration ClientConfigurationType;
      typedef SSOAdminEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOAdminClient(const Aws::SSOAdmin::SSOAdminClientConfiguration& clientConfiguration = Aws::SSOAdmin::SSOAdminClientConfiguration(),
                       std::shared_ptr<SSOAdminEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOAdminClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<SSOAdminEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::SSOAdmin::SSOAdminClientConfiguration& clientConfiguration = Aws::SSOAdmin::SSOAdminClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSOAdminClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<SSOAdminEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::SSOAdmin::SSOAdminClientConfiguration& clientConfiguration = Aws::SSOAdmin::SSOAdminClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOAdminClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOAdminClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSOAdminClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SSOAdminClient();

        /**
         * <p>Attaches the specified customer managed policy to the specified
         * <a>PermissionSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/AttachCustomerManagedPolicyReferenceToPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachCustomerManagedPolicyReferenceToPermissionSetOutcome AttachCustomerManagedPolicyReferenceToPermissionSet(const Model::AttachCustomerManagedPolicyReferenceToPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for AttachCustomerManagedPolicyReferenceToPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AttachCustomerManagedPolicyReferenceToPermissionSetRequestT = Model::AttachCustomerManagedPolicyReferenceToPermissionSetRequest>
        Model::AttachCustomerManagedPolicyReferenceToPermissionSetOutcomeCallable AttachCustomerManagedPolicyReferenceToPermissionSetCallable(const AttachCustomerManagedPolicyReferenceToPermissionSetRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::AttachCustomerManagedPolicyReferenceToPermissionSet, request);
        }

        /**
         * An Async wrapper for AttachCustomerManagedPolicyReferenceToPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AttachCustomerManagedPolicyReferenceToPermissionSetRequestT = Model::AttachCustomerManagedPolicyReferenceToPermissionSetRequest>
        void AttachCustomerManagedPolicyReferenceToPermissionSetAsync(const AttachCustomerManagedPolicyReferenceToPermissionSetRequestT& request, const AttachCustomerManagedPolicyReferenceToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::AttachCustomerManagedPolicyReferenceToPermissionSet, request, handler, context);
        }

        /**
         * <p>Attaches an Amazon Web Services managed policy ARN to a permission set.</p>
         *  <p>If the permission set is already referenced by one or more account
         * assignments, you will need to call <code> <a>ProvisionPermissionSet</a> </code>
         * after this operation. Calling <code>ProvisionPermissionSet</code> applies the
         * corresponding IAM policy updates to all assigned accounts.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/AttachManagedPolicyToPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachManagedPolicyToPermissionSetOutcome AttachManagedPolicyToPermissionSet(const Model::AttachManagedPolicyToPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for AttachManagedPolicyToPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AttachManagedPolicyToPermissionSetRequestT = Model::AttachManagedPolicyToPermissionSetRequest>
        Model::AttachManagedPolicyToPermissionSetOutcomeCallable AttachManagedPolicyToPermissionSetCallable(const AttachManagedPolicyToPermissionSetRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::AttachManagedPolicyToPermissionSet, request);
        }

        /**
         * An Async wrapper for AttachManagedPolicyToPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AttachManagedPolicyToPermissionSetRequestT = Model::AttachManagedPolicyToPermissionSetRequest>
        void AttachManagedPolicyToPermissionSetAsync(const AttachManagedPolicyToPermissionSetRequestT& request, const AttachManagedPolicyToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::AttachManagedPolicyToPermissionSet, request, handler, context);
        }

        /**
         * <p>Assigns access to a principal for a specified Amazon Web Services account
         * using a specified permission set.</p>  <p>The term <i>principal</i> here
         * refers to a user or group that is defined in IAM Identity Center.</p> 
         *  <p>As part of a successful <code>CreateAccountAssignment</code> call, the
         * specified permission set will automatically be provisioned to the account in the
         * form of an IAM policy. That policy is attached to the IAM role created in IAM
         * Identity Center. If the permission set is subsequently updated, the
         * corresponding IAM policies attached to roles in your accounts will not be
         * updated automatically. In this case, you must call <code>
         * <a>ProvisionPermissionSet</a> </code> to make these updates.</p>  
         * <p> After a successful response, call
         * <code>DescribeAccountAssignmentCreationStatus</code> to describe the status of
         * an assignment creation request. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CreateAccountAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccountAssignmentOutcome CreateAccountAssignment(const Model::CreateAccountAssignmentRequest& request) const;

        /**
         * A Callable wrapper for CreateAccountAssignment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAccountAssignmentRequestT = Model::CreateAccountAssignmentRequest>
        Model::CreateAccountAssignmentOutcomeCallable CreateAccountAssignmentCallable(const CreateAccountAssignmentRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::CreateAccountAssignment, request);
        }

        /**
         * An Async wrapper for CreateAccountAssignment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAccountAssignmentRequestT = Model::CreateAccountAssignmentRequest>
        void CreateAccountAssignmentAsync(const CreateAccountAssignmentRequestT& request, const CreateAccountAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::CreateAccountAssignment, request, handler, context);
        }

        /**
         * <p>Creates an application in IAM Identity Center for the given application
         * provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const CreateApplicationRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::CreateApplication, request);
        }

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        void CreateApplicationAsync(const CreateApplicationRequestT& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::CreateApplication, request, handler, context);
        }

        /**
         * <p>Grant application access to a user or group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CreateApplicationAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationAssignmentOutcome CreateApplicationAssignment(const Model::CreateApplicationAssignmentRequest& request) const;

        /**
         * A Callable wrapper for CreateApplicationAssignment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationAssignmentRequestT = Model::CreateApplicationAssignmentRequest>
        Model::CreateApplicationAssignmentOutcomeCallable CreateApplicationAssignmentCallable(const CreateApplicationAssignmentRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::CreateApplicationAssignment, request);
        }

        /**
         * An Async wrapper for CreateApplicationAssignment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationAssignmentRequestT = Model::CreateApplicationAssignmentRequest>
        void CreateApplicationAssignmentAsync(const CreateApplicationAssignmentRequestT& request, const CreateApplicationAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::CreateApplicationAssignment, request, handler, context);
        }

        /**
         * <p>Creates an instance of IAM Identity Center for a standalone Amazon Web
         * Services account that is not managed by Organizations or a member Amazon Web
         * Services account in an organization. You can create only one instance per
         * account and across all Amazon Web Services Regions.</p> <p>The CreateInstance
         * request is rejected if the following apply: </p> <ul> <li> <p>The instance is
         * created within the organization management account.</p> </li> <li> <p>An
         * instance already exists in the same account.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CreateInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInstanceRequestT = Model::CreateInstanceRequest>
        Model::CreateInstanceOutcomeCallable CreateInstanceCallable(const CreateInstanceRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::CreateInstance, request);
        }

        /**
         * An Async wrapper for CreateInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInstanceRequestT = Model::CreateInstanceRequest>
        void CreateInstanceAsync(const CreateInstanceRequestT& request, const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::CreateInstance, request, handler, context);
        }

        /**
         * <p>Enables the attributes-based access control (ABAC) feature for the specified
         * IAM Identity Center instance. You can also specify new attributes to add to your
         * ABAC configuration during the enabling process. For more information about ABAC,
         * see <a href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access
         * Control</a> in the <i>IAM Identity Center User Guide</i>.</p>  <p>After a
         * successful response, call
         * <code>DescribeInstanceAccessControlAttributeConfiguration</code> to validate
         * that <code>InstanceAccessControlAttributeConfiguration</code> was created.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CreateInstanceAccessControlAttributeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceAccessControlAttributeConfigurationOutcome CreateInstanceAccessControlAttributeConfiguration(const Model::CreateInstanceAccessControlAttributeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateInstanceAccessControlAttributeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInstanceAccessControlAttributeConfigurationRequestT = Model::CreateInstanceAccessControlAttributeConfigurationRequest>
        Model::CreateInstanceAccessControlAttributeConfigurationOutcomeCallable CreateInstanceAccessControlAttributeConfigurationCallable(const CreateInstanceAccessControlAttributeConfigurationRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::CreateInstanceAccessControlAttributeConfiguration, request);
        }

        /**
         * An Async wrapper for CreateInstanceAccessControlAttributeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInstanceAccessControlAttributeConfigurationRequestT = Model::CreateInstanceAccessControlAttributeConfigurationRequest>
        void CreateInstanceAccessControlAttributeConfigurationAsync(const CreateInstanceAccessControlAttributeConfigurationRequestT& request, const CreateInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::CreateInstanceAccessControlAttributeConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a permission set within a specified IAM Identity Center instance.</p>
         *  <p>To grant users and groups access to Amazon Web Services account
         * resources, use <code> <a>CreateAccountAssignment</a> </code>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CreatePermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePermissionSetOutcome CreatePermissionSet(const Model::CreatePermissionSetRequest& request) const;

        /**
         * A Callable wrapper for CreatePermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePermissionSetRequestT = Model::CreatePermissionSetRequest>
        Model::CreatePermissionSetOutcomeCallable CreatePermissionSetCallable(const CreatePermissionSetRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::CreatePermissionSet, request);
        }

        /**
         * An Async wrapper for CreatePermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePermissionSetRequestT = Model::CreatePermissionSetRequest>
        void CreatePermissionSetAsync(const CreatePermissionSetRequestT& request, const CreatePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::CreatePermissionSet, request, handler, context);
        }

        /**
         * <p>Creates a connection to a trusted token issuer in an instance of IAM Identity
         * Center. A trusted token issuer enables trusted identity propagation to be used
         * with applications that authenticate outside of Amazon Web Services.</p> <p>This
         * trusted token issuer describes an external identity provider (IdP) that can
         * generate claims or assertions in the form of access tokens for a user.
         * Applications enabled for IAM Identity Center can use these tokens for
         * authentication. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/CreateTrustedTokenIssuer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrustedTokenIssuerOutcome CreateTrustedTokenIssuer(const Model::CreateTrustedTokenIssuerRequest& request) const;

        /**
         * A Callable wrapper for CreateTrustedTokenIssuer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTrustedTokenIssuerRequestT = Model::CreateTrustedTokenIssuerRequest>
        Model::CreateTrustedTokenIssuerOutcomeCallable CreateTrustedTokenIssuerCallable(const CreateTrustedTokenIssuerRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::CreateTrustedTokenIssuer, request);
        }

        /**
         * An Async wrapper for CreateTrustedTokenIssuer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTrustedTokenIssuerRequestT = Model::CreateTrustedTokenIssuerRequest>
        void CreateTrustedTokenIssuerAsync(const CreateTrustedTokenIssuerRequestT& request, const CreateTrustedTokenIssuerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::CreateTrustedTokenIssuer, request, handler, context);
        }

        /**
         * <p>Deletes a principal's access from a specified Amazon Web Services account
         * using a specified permission set.</p>  <p>After a successful response,
         * call <code>DescribeAccountAssignmentDeletionStatus</code> to describe the status
         * of an assignment deletion request.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteAccountAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountAssignmentOutcome DeleteAccountAssignment(const Model::DeleteAccountAssignmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccountAssignment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAccountAssignmentRequestT = Model::DeleteAccountAssignmentRequest>
        Model::DeleteAccountAssignmentOutcomeCallable DeleteAccountAssignmentCallable(const DeleteAccountAssignmentRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DeleteAccountAssignment, request);
        }

        /**
         * An Async wrapper for DeleteAccountAssignment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAccountAssignmentRequestT = Model::DeleteAccountAssignmentRequest>
        void DeleteAccountAssignmentAsync(const DeleteAccountAssignmentRequestT& request, const DeleteAccountAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DeleteAccountAssignment, request, handler, context);
        }

        /**
         * <p>Deletes the association with the application. The connected service resource
         * still exists.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const DeleteApplicationRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DeleteApplication, request);
        }

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        void DeleteApplicationAsync(const DeleteApplicationRequestT& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DeleteApplication, request, handler, context);
        }

        /**
         * <p>Deletes an IAM Identity Center access scope from an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteApplicationAccessScope">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationAccessScopeOutcome DeleteApplicationAccessScope(const Model::DeleteApplicationAccessScopeRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplicationAccessScope that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationAccessScopeRequestT = Model::DeleteApplicationAccessScopeRequest>
        Model::DeleteApplicationAccessScopeOutcomeCallable DeleteApplicationAccessScopeCallable(const DeleteApplicationAccessScopeRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DeleteApplicationAccessScope, request);
        }

        /**
         * An Async wrapper for DeleteApplicationAccessScope that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationAccessScopeRequestT = Model::DeleteApplicationAccessScopeRequest>
        void DeleteApplicationAccessScopeAsync(const DeleteApplicationAccessScopeRequestT& request, const DeleteApplicationAccessScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DeleteApplicationAccessScope, request, handler, context);
        }

        /**
         * <p>Revoke application access to an application by deleting application
         * assignments for a user or group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteApplicationAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationAssignmentOutcome DeleteApplicationAssignment(const Model::DeleteApplicationAssignmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplicationAssignment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationAssignmentRequestT = Model::DeleteApplicationAssignmentRequest>
        Model::DeleteApplicationAssignmentOutcomeCallable DeleteApplicationAssignmentCallable(const DeleteApplicationAssignmentRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DeleteApplicationAssignment, request);
        }

        /**
         * An Async wrapper for DeleteApplicationAssignment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationAssignmentRequestT = Model::DeleteApplicationAssignmentRequest>
        void DeleteApplicationAssignmentAsync(const DeleteApplicationAssignmentRequestT& request, const DeleteApplicationAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DeleteApplicationAssignment, request, handler, context);
        }

        /**
         * <p>Deletes an authentication method from an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteApplicationAuthenticationMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationAuthenticationMethodOutcome DeleteApplicationAuthenticationMethod(const Model::DeleteApplicationAuthenticationMethodRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplicationAuthenticationMethod that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationAuthenticationMethodRequestT = Model::DeleteApplicationAuthenticationMethodRequest>
        Model::DeleteApplicationAuthenticationMethodOutcomeCallable DeleteApplicationAuthenticationMethodCallable(const DeleteApplicationAuthenticationMethodRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DeleteApplicationAuthenticationMethod, request);
        }

        /**
         * An Async wrapper for DeleteApplicationAuthenticationMethod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationAuthenticationMethodRequestT = Model::DeleteApplicationAuthenticationMethodRequest>
        void DeleteApplicationAuthenticationMethodAsync(const DeleteApplicationAuthenticationMethodRequestT& request, const DeleteApplicationAuthenticationMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DeleteApplicationAuthenticationMethod, request, handler, context);
        }

        /**
         * <p>Deletes a grant from an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteApplicationGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationGrantOutcome DeleteApplicationGrant(const Model::DeleteApplicationGrantRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplicationGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationGrantRequestT = Model::DeleteApplicationGrantRequest>
        Model::DeleteApplicationGrantOutcomeCallable DeleteApplicationGrantCallable(const DeleteApplicationGrantRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DeleteApplicationGrant, request);
        }

        /**
         * An Async wrapper for DeleteApplicationGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationGrantRequestT = Model::DeleteApplicationGrantRequest>
        void DeleteApplicationGrantAsync(const DeleteApplicationGrantRequestT& request, const DeleteApplicationGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DeleteApplicationGrant, request, handler, context);
        }

        /**
         * <p>Deletes the inline policy from a specified permission set.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteInlinePolicyFromPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInlinePolicyFromPermissionSetOutcome DeleteInlinePolicyFromPermissionSet(const Model::DeleteInlinePolicyFromPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteInlinePolicyFromPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInlinePolicyFromPermissionSetRequestT = Model::DeleteInlinePolicyFromPermissionSetRequest>
        Model::DeleteInlinePolicyFromPermissionSetOutcomeCallable DeleteInlinePolicyFromPermissionSetCallable(const DeleteInlinePolicyFromPermissionSetRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DeleteInlinePolicyFromPermissionSet, request);
        }

        /**
         * An Async wrapper for DeleteInlinePolicyFromPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInlinePolicyFromPermissionSetRequestT = Model::DeleteInlinePolicyFromPermissionSetRequest>
        void DeleteInlinePolicyFromPermissionSetAsync(const DeleteInlinePolicyFromPermissionSetRequestT& request, const DeleteInlinePolicyFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DeleteInlinePolicyFromPermissionSet, request, handler, context);
        }

        /**
         * <p>Deletes the instance of IAM Identity Center. Only the account that owns the
         * instance can call this API. Neither the delegated administrator nor member
         * account can delete the organization instance, but those roles can delete their
         * own instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInstanceRequestT = Model::DeleteInstanceRequest>
        Model::DeleteInstanceOutcomeCallable DeleteInstanceCallable(const DeleteInstanceRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DeleteInstance, request);
        }

        /**
         * An Async wrapper for DeleteInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInstanceRequestT = Model::DeleteInstanceRequest>
        void DeleteInstanceAsync(const DeleteInstanceRequestT& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DeleteInstance, request, handler, context);
        }

        /**
         * <p>Disables the attributes-based access control (ABAC) feature for the specified
         * IAM Identity Center instance and deletes all of the attribute mappings that have
         * been configured. Once deleted, any attributes that are received from an identity
         * source and any custom attributes you have previously configured will not be
         * passed. For more information about ABAC, see <a
         * href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access
         * Control</a> in the <i>IAM Identity Center User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteInstanceAccessControlAttributeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceAccessControlAttributeConfigurationOutcome DeleteInstanceAccessControlAttributeConfiguration(const Model::DeleteInstanceAccessControlAttributeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteInstanceAccessControlAttributeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInstanceAccessControlAttributeConfigurationRequestT = Model::DeleteInstanceAccessControlAttributeConfigurationRequest>
        Model::DeleteInstanceAccessControlAttributeConfigurationOutcomeCallable DeleteInstanceAccessControlAttributeConfigurationCallable(const DeleteInstanceAccessControlAttributeConfigurationRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DeleteInstanceAccessControlAttributeConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteInstanceAccessControlAttributeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInstanceAccessControlAttributeConfigurationRequestT = Model::DeleteInstanceAccessControlAttributeConfigurationRequest>
        void DeleteInstanceAccessControlAttributeConfigurationAsync(const DeleteInstanceAccessControlAttributeConfigurationRequestT& request, const DeleteInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DeleteInstanceAccessControlAttributeConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the specified permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeletePermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePermissionSetOutcome DeletePermissionSet(const Model::DeletePermissionSetRequest& request) const;

        /**
         * A Callable wrapper for DeletePermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePermissionSetRequestT = Model::DeletePermissionSetRequest>
        Model::DeletePermissionSetOutcomeCallable DeletePermissionSetCallable(const DeletePermissionSetRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DeletePermissionSet, request);
        }

        /**
         * An Async wrapper for DeletePermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePermissionSetRequestT = Model::DeletePermissionSetRequest>
        void DeletePermissionSetAsync(const DeletePermissionSetRequestT& request, const DeletePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DeletePermissionSet, request, handler, context);
        }

        /**
         * <p>Deletes the permissions boundary from a specified
         * <a>PermissionSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeletePermissionsBoundaryFromPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePermissionsBoundaryFromPermissionSetOutcome DeletePermissionsBoundaryFromPermissionSet(const Model::DeletePermissionsBoundaryFromPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for DeletePermissionsBoundaryFromPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePermissionsBoundaryFromPermissionSetRequestT = Model::DeletePermissionsBoundaryFromPermissionSetRequest>
        Model::DeletePermissionsBoundaryFromPermissionSetOutcomeCallable DeletePermissionsBoundaryFromPermissionSetCallable(const DeletePermissionsBoundaryFromPermissionSetRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DeletePermissionsBoundaryFromPermissionSet, request);
        }

        /**
         * An Async wrapper for DeletePermissionsBoundaryFromPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePermissionsBoundaryFromPermissionSetRequestT = Model::DeletePermissionsBoundaryFromPermissionSetRequest>
        void DeletePermissionsBoundaryFromPermissionSetAsync(const DeletePermissionsBoundaryFromPermissionSetRequestT& request, const DeletePermissionsBoundaryFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DeletePermissionsBoundaryFromPermissionSet, request, handler, context);
        }

        /**
         * <p>Deletes a trusted token issuer configuration from an instance of IAM Identity
         * Center.</p>  <p>Deleting this trusted token issuer configuration will
         * cause users to lose access to any applications that are configured to use the
         * trusted token issuer.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DeleteTrustedTokenIssuer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrustedTokenIssuerOutcome DeleteTrustedTokenIssuer(const Model::DeleteTrustedTokenIssuerRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrustedTokenIssuer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTrustedTokenIssuerRequestT = Model::DeleteTrustedTokenIssuerRequest>
        Model::DeleteTrustedTokenIssuerOutcomeCallable DeleteTrustedTokenIssuerCallable(const DeleteTrustedTokenIssuerRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DeleteTrustedTokenIssuer, request);
        }

        /**
         * An Async wrapper for DeleteTrustedTokenIssuer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTrustedTokenIssuerRequestT = Model::DeleteTrustedTokenIssuerRequest>
        void DeleteTrustedTokenIssuerAsync(const DeleteTrustedTokenIssuerRequestT& request, const DeleteTrustedTokenIssuerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DeleteTrustedTokenIssuer, request, handler, context);
        }

        /**
         * <p>Describes the status of the assignment creation request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeAccountAssignmentCreationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountAssignmentCreationStatusOutcome DescribeAccountAssignmentCreationStatus(const Model::DescribeAccountAssignmentCreationStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountAssignmentCreationStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAccountAssignmentCreationStatusRequestT = Model::DescribeAccountAssignmentCreationStatusRequest>
        Model::DescribeAccountAssignmentCreationStatusOutcomeCallable DescribeAccountAssignmentCreationStatusCallable(const DescribeAccountAssignmentCreationStatusRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DescribeAccountAssignmentCreationStatus, request);
        }

        /**
         * An Async wrapper for DescribeAccountAssignmentCreationStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountAssignmentCreationStatusRequestT = Model::DescribeAccountAssignmentCreationStatusRequest>
        void DescribeAccountAssignmentCreationStatusAsync(const DescribeAccountAssignmentCreationStatusRequestT& request, const DescribeAccountAssignmentCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DescribeAccountAssignmentCreationStatus, request, handler, context);
        }

        /**
         * <p>Describes the status of the assignment deletion request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeAccountAssignmentDeletionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountAssignmentDeletionStatusOutcome DescribeAccountAssignmentDeletionStatus(const Model::DescribeAccountAssignmentDeletionStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountAssignmentDeletionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAccountAssignmentDeletionStatusRequestT = Model::DescribeAccountAssignmentDeletionStatusRequest>
        Model::DescribeAccountAssignmentDeletionStatusOutcomeCallable DescribeAccountAssignmentDeletionStatusCallable(const DescribeAccountAssignmentDeletionStatusRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DescribeAccountAssignmentDeletionStatus, request);
        }

        /**
         * An Async wrapper for DescribeAccountAssignmentDeletionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountAssignmentDeletionStatusRequestT = Model::DescribeAccountAssignmentDeletionStatusRequest>
        void DescribeAccountAssignmentDeletionStatusAsync(const DescribeAccountAssignmentDeletionStatusRequestT& request, const DescribeAccountAssignmentDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DescribeAccountAssignmentDeletionStatus, request, handler, context);
        }

        /**
         * <p>Retrieves the details of an application associated with an instance of IAM
         * Identity Center.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeApplicationRequestT = Model::DescribeApplicationRequest>
        Model::DescribeApplicationOutcomeCallable DescribeApplicationCallable(const DescribeApplicationRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DescribeApplication, request);
        }

        /**
         * An Async wrapper for DescribeApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeApplicationRequestT = Model::DescribeApplicationRequest>
        void DescribeApplicationAsync(const DescribeApplicationRequestT& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DescribeApplication, request, handler, context);
        }

        /**
         * <p>Retrieves a direct assignment of a user or group to an application. If the
         * user doesn’t have a direct assignment to the application, the user may still
         * have access to the application through a group. Therefore, don’t use this API to
         * test access to an application for a user. Instead use
         * <a>ListApplicationAssignmentsForPrincipal</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeApplicationAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationAssignmentOutcome DescribeApplicationAssignment(const Model::DescribeApplicationAssignmentRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplicationAssignment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeApplicationAssignmentRequestT = Model::DescribeApplicationAssignmentRequest>
        Model::DescribeApplicationAssignmentOutcomeCallable DescribeApplicationAssignmentCallable(const DescribeApplicationAssignmentRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DescribeApplicationAssignment, request);
        }

        /**
         * An Async wrapper for DescribeApplicationAssignment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeApplicationAssignmentRequestT = Model::DescribeApplicationAssignmentRequest>
        void DescribeApplicationAssignmentAsync(const DescribeApplicationAssignmentRequestT& request, const DescribeApplicationAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DescribeApplicationAssignment, request, handler, context);
        }

        /**
         * <p>Retrieves details about a provider that can be used to connect an Amazon Web
         * Services managed application or customer managed application to IAM Identity
         * Center.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeApplicationProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationProviderOutcome DescribeApplicationProvider(const Model::DescribeApplicationProviderRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplicationProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeApplicationProviderRequestT = Model::DescribeApplicationProviderRequest>
        Model::DescribeApplicationProviderOutcomeCallable DescribeApplicationProviderCallable(const DescribeApplicationProviderRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DescribeApplicationProvider, request);
        }

        /**
         * An Async wrapper for DescribeApplicationProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeApplicationProviderRequestT = Model::DescribeApplicationProviderRequest>
        void DescribeApplicationProviderAsync(const DescribeApplicationProviderRequestT& request, const DescribeApplicationProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DescribeApplicationProvider, request, handler, context);
        }

        /**
         * <p>Returns the details of an instance of IAM Identity Center. The status can be
         * one of the following:</p> <ul> <li> <p> <code>CREATE_IN_PROGRESS</code> - The
         * instance is in the process of being created. When the instance is ready for use,
         * DescribeInstance returns the status of <code>ACTIVE</code>. While the instance
         * is in the <code>CREATE_IN_PROGRESS</code> state, you can call only
         * DescribeInstance and DeleteInstance operations.</p> </li> <li> <p>
         * <code>DELETE_IN_PROGRESS</code> - The instance is being deleted. Returns
         * <code>AccessDeniedException</code> after the delete operation completes. </p>
         * </li> <li> <p> <code>ACTIVE</code> - The instance is active.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceOutcome DescribeInstance(const Model::DescribeInstanceRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInstanceRequestT = Model::DescribeInstanceRequest>
        Model::DescribeInstanceOutcomeCallable DescribeInstanceCallable(const DescribeInstanceRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DescribeInstance, request);
        }

        /**
         * An Async wrapper for DescribeInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInstanceRequestT = Model::DescribeInstanceRequest>
        void DescribeInstanceAsync(const DescribeInstanceRequestT& request, const DescribeInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DescribeInstance, request, handler, context);
        }

        /**
         * <p>Returns the list of IAM Identity Center identity store attributes that have
         * been configured to work with attributes-based access control (ABAC) for the
         * specified IAM Identity Center instance. This will not return attributes
         * configured and sent by an external identity provider. For more information about
         * ABAC, see <a href="/singlesignon/latest/userguide/abac.html">Attribute-Based
         * Access Control</a> in the <i>IAM Identity Center User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeInstanceAccessControlAttributeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceAccessControlAttributeConfigurationOutcome DescribeInstanceAccessControlAttributeConfiguration(const Model::DescribeInstanceAccessControlAttributeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstanceAccessControlAttributeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInstanceAccessControlAttributeConfigurationRequestT = Model::DescribeInstanceAccessControlAttributeConfigurationRequest>
        Model::DescribeInstanceAccessControlAttributeConfigurationOutcomeCallable DescribeInstanceAccessControlAttributeConfigurationCallable(const DescribeInstanceAccessControlAttributeConfigurationRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DescribeInstanceAccessControlAttributeConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeInstanceAccessControlAttributeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInstanceAccessControlAttributeConfigurationRequestT = Model::DescribeInstanceAccessControlAttributeConfigurationRequest>
        void DescribeInstanceAccessControlAttributeConfigurationAsync(const DescribeInstanceAccessControlAttributeConfigurationRequestT& request, const DescribeInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DescribeInstanceAccessControlAttributeConfiguration, request, handler, context);
        }

        /**
         * <p>Gets the details of the permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribePermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePermissionSetOutcome DescribePermissionSet(const Model::DescribePermissionSetRequest& request) const;

        /**
         * A Callable wrapper for DescribePermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePermissionSetRequestT = Model::DescribePermissionSetRequest>
        Model::DescribePermissionSetOutcomeCallable DescribePermissionSetCallable(const DescribePermissionSetRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DescribePermissionSet, request);
        }

        /**
         * An Async wrapper for DescribePermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePermissionSetRequestT = Model::DescribePermissionSetRequest>
        void DescribePermissionSetAsync(const DescribePermissionSetRequestT& request, const DescribePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DescribePermissionSet, request, handler, context);
        }

        /**
         * <p>Describes the status for the given permission set provisioning
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribePermissionSetProvisioningStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePermissionSetProvisioningStatusOutcome DescribePermissionSetProvisioningStatus(const Model::DescribePermissionSetProvisioningStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribePermissionSetProvisioningStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePermissionSetProvisioningStatusRequestT = Model::DescribePermissionSetProvisioningStatusRequest>
        Model::DescribePermissionSetProvisioningStatusOutcomeCallable DescribePermissionSetProvisioningStatusCallable(const DescribePermissionSetProvisioningStatusRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DescribePermissionSetProvisioningStatus, request);
        }

        /**
         * An Async wrapper for DescribePermissionSetProvisioningStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePermissionSetProvisioningStatusRequestT = Model::DescribePermissionSetProvisioningStatusRequest>
        void DescribePermissionSetProvisioningStatusAsync(const DescribePermissionSetProvisioningStatusRequestT& request, const DescribePermissionSetProvisioningStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DescribePermissionSetProvisioningStatus, request, handler, context);
        }

        /**
         * <p>Retrieves details about a trusted token issuer configuration stored in an
         * instance of IAM Identity Center. Details include the name of the trusted token
         * issuer, the issuer URL, and the path of the source attribute and the destination
         * attribute for a trusted token issuer configuration. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DescribeTrustedTokenIssuer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrustedTokenIssuerOutcome DescribeTrustedTokenIssuer(const Model::DescribeTrustedTokenIssuerRequest& request) const;

        /**
         * A Callable wrapper for DescribeTrustedTokenIssuer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTrustedTokenIssuerRequestT = Model::DescribeTrustedTokenIssuerRequest>
        Model::DescribeTrustedTokenIssuerOutcomeCallable DescribeTrustedTokenIssuerCallable(const DescribeTrustedTokenIssuerRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DescribeTrustedTokenIssuer, request);
        }

        /**
         * An Async wrapper for DescribeTrustedTokenIssuer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTrustedTokenIssuerRequestT = Model::DescribeTrustedTokenIssuerRequest>
        void DescribeTrustedTokenIssuerAsync(const DescribeTrustedTokenIssuerRequestT& request, const DescribeTrustedTokenIssuerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DescribeTrustedTokenIssuer, request, handler, context);
        }

        /**
         * <p>Detaches the specified customer managed policy from the specified
         * <a>PermissionSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DetachCustomerManagedPolicyReferenceFromPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachCustomerManagedPolicyReferenceFromPermissionSetOutcome DetachCustomerManagedPolicyReferenceFromPermissionSet(const Model::DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for DetachCustomerManagedPolicyReferenceFromPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetachCustomerManagedPolicyReferenceFromPermissionSetRequestT = Model::DetachCustomerManagedPolicyReferenceFromPermissionSetRequest>
        Model::DetachCustomerManagedPolicyReferenceFromPermissionSetOutcomeCallable DetachCustomerManagedPolicyReferenceFromPermissionSetCallable(const DetachCustomerManagedPolicyReferenceFromPermissionSetRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DetachCustomerManagedPolicyReferenceFromPermissionSet, request);
        }

        /**
         * An Async wrapper for DetachCustomerManagedPolicyReferenceFromPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetachCustomerManagedPolicyReferenceFromPermissionSetRequestT = Model::DetachCustomerManagedPolicyReferenceFromPermissionSetRequest>
        void DetachCustomerManagedPolicyReferenceFromPermissionSetAsync(const DetachCustomerManagedPolicyReferenceFromPermissionSetRequestT& request, const DetachCustomerManagedPolicyReferenceFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DetachCustomerManagedPolicyReferenceFromPermissionSet, request, handler, context);
        }

        /**
         * <p>Detaches the attached Amazon Web Services managed policy ARN from the
         * specified permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DetachManagedPolicyFromPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachManagedPolicyFromPermissionSetOutcome DetachManagedPolicyFromPermissionSet(const Model::DetachManagedPolicyFromPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for DetachManagedPolicyFromPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetachManagedPolicyFromPermissionSetRequestT = Model::DetachManagedPolicyFromPermissionSetRequest>
        Model::DetachManagedPolicyFromPermissionSetOutcomeCallable DetachManagedPolicyFromPermissionSetCallable(const DetachManagedPolicyFromPermissionSetRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::DetachManagedPolicyFromPermissionSet, request);
        }

        /**
         * An Async wrapper for DetachManagedPolicyFromPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetachManagedPolicyFromPermissionSetRequestT = Model::DetachManagedPolicyFromPermissionSetRequest>
        void DetachManagedPolicyFromPermissionSetAsync(const DetachManagedPolicyFromPermissionSetRequestT& request, const DetachManagedPolicyFromPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::DetachManagedPolicyFromPermissionSet, request, handler, context);
        }

        /**
         * <p>Retrieves the authorized targets for an IAM Identity Center access scope for
         * an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/GetApplicationAccessScope">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationAccessScopeOutcome GetApplicationAccessScope(const Model::GetApplicationAccessScopeRequest& request) const;

        /**
         * A Callable wrapper for GetApplicationAccessScope that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApplicationAccessScopeRequestT = Model::GetApplicationAccessScopeRequest>
        Model::GetApplicationAccessScopeOutcomeCallable GetApplicationAccessScopeCallable(const GetApplicationAccessScopeRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::GetApplicationAccessScope, request);
        }

        /**
         * An Async wrapper for GetApplicationAccessScope that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationAccessScopeRequestT = Model::GetApplicationAccessScopeRequest>
        void GetApplicationAccessScopeAsync(const GetApplicationAccessScopeRequestT& request, const GetApplicationAccessScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::GetApplicationAccessScope, request, handler, context);
        }

        /**
         * <p>Retrieves the configuration of
         * <a>PutApplicationAssignmentConfiguration</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/GetApplicationAssignmentConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationAssignmentConfigurationOutcome GetApplicationAssignmentConfiguration(const Model::GetApplicationAssignmentConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetApplicationAssignmentConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApplicationAssignmentConfigurationRequestT = Model::GetApplicationAssignmentConfigurationRequest>
        Model::GetApplicationAssignmentConfigurationOutcomeCallable GetApplicationAssignmentConfigurationCallable(const GetApplicationAssignmentConfigurationRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::GetApplicationAssignmentConfiguration, request);
        }

        /**
         * An Async wrapper for GetApplicationAssignmentConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationAssignmentConfigurationRequestT = Model::GetApplicationAssignmentConfigurationRequest>
        void GetApplicationAssignmentConfigurationAsync(const GetApplicationAssignmentConfigurationRequestT& request, const GetApplicationAssignmentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::GetApplicationAssignmentConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves details about an authentication method used by an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/GetApplicationAuthenticationMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationAuthenticationMethodOutcome GetApplicationAuthenticationMethod(const Model::GetApplicationAuthenticationMethodRequest& request) const;

        /**
         * A Callable wrapper for GetApplicationAuthenticationMethod that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApplicationAuthenticationMethodRequestT = Model::GetApplicationAuthenticationMethodRequest>
        Model::GetApplicationAuthenticationMethodOutcomeCallable GetApplicationAuthenticationMethodCallable(const GetApplicationAuthenticationMethodRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::GetApplicationAuthenticationMethod, request);
        }

        /**
         * An Async wrapper for GetApplicationAuthenticationMethod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationAuthenticationMethodRequestT = Model::GetApplicationAuthenticationMethodRequest>
        void GetApplicationAuthenticationMethodAsync(const GetApplicationAuthenticationMethodRequestT& request, const GetApplicationAuthenticationMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::GetApplicationAuthenticationMethod, request, handler, context);
        }

        /**
         * <p>Retrieves details about an application grant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/GetApplicationGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationGrantOutcome GetApplicationGrant(const Model::GetApplicationGrantRequest& request) const;

        /**
         * A Callable wrapper for GetApplicationGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApplicationGrantRequestT = Model::GetApplicationGrantRequest>
        Model::GetApplicationGrantOutcomeCallable GetApplicationGrantCallable(const GetApplicationGrantRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::GetApplicationGrant, request);
        }

        /**
         * An Async wrapper for GetApplicationGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationGrantRequestT = Model::GetApplicationGrantRequest>
        void GetApplicationGrantAsync(const GetApplicationGrantRequestT& request, const GetApplicationGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::GetApplicationGrant, request, handler, context);
        }

        /**
         * <p>Obtains the inline policy assigned to the permission set.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/GetInlinePolicyForPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInlinePolicyForPermissionSetOutcome GetInlinePolicyForPermissionSet(const Model::GetInlinePolicyForPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for GetInlinePolicyForPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInlinePolicyForPermissionSetRequestT = Model::GetInlinePolicyForPermissionSetRequest>
        Model::GetInlinePolicyForPermissionSetOutcomeCallable GetInlinePolicyForPermissionSetCallable(const GetInlinePolicyForPermissionSetRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::GetInlinePolicyForPermissionSet, request);
        }

        /**
         * An Async wrapper for GetInlinePolicyForPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInlinePolicyForPermissionSetRequestT = Model::GetInlinePolicyForPermissionSetRequest>
        void GetInlinePolicyForPermissionSetAsync(const GetInlinePolicyForPermissionSetRequestT& request, const GetInlinePolicyForPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::GetInlinePolicyForPermissionSet, request, handler, context);
        }

        /**
         * <p>Obtains the permissions boundary for a specified
         * <a>PermissionSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/GetPermissionsBoundaryForPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPermissionsBoundaryForPermissionSetOutcome GetPermissionsBoundaryForPermissionSet(const Model::GetPermissionsBoundaryForPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for GetPermissionsBoundaryForPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPermissionsBoundaryForPermissionSetRequestT = Model::GetPermissionsBoundaryForPermissionSetRequest>
        Model::GetPermissionsBoundaryForPermissionSetOutcomeCallable GetPermissionsBoundaryForPermissionSetCallable(const GetPermissionsBoundaryForPermissionSetRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::GetPermissionsBoundaryForPermissionSet, request);
        }

        /**
         * An Async wrapper for GetPermissionsBoundaryForPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPermissionsBoundaryForPermissionSetRequestT = Model::GetPermissionsBoundaryForPermissionSetRequest>
        void GetPermissionsBoundaryForPermissionSetAsync(const GetPermissionsBoundaryForPermissionSetRequestT& request, const GetPermissionsBoundaryForPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::GetPermissionsBoundaryForPermissionSet, request, handler, context);
        }

        /**
         * <p>Lists the status of the Amazon Web Services account assignment creation
         * requests for a specified IAM Identity Center instance.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountAssignmentCreationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountAssignmentCreationStatusOutcome ListAccountAssignmentCreationStatus(const Model::ListAccountAssignmentCreationStatusRequest& request) const;

        /**
         * A Callable wrapper for ListAccountAssignmentCreationStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccountAssignmentCreationStatusRequestT = Model::ListAccountAssignmentCreationStatusRequest>
        Model::ListAccountAssignmentCreationStatusOutcomeCallable ListAccountAssignmentCreationStatusCallable(const ListAccountAssignmentCreationStatusRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ListAccountAssignmentCreationStatus, request);
        }

        /**
         * An Async wrapper for ListAccountAssignmentCreationStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccountAssignmentCreationStatusRequestT = Model::ListAccountAssignmentCreationStatusRequest>
        void ListAccountAssignmentCreationStatusAsync(const ListAccountAssignmentCreationStatusRequestT& request, const ListAccountAssignmentCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ListAccountAssignmentCreationStatus, request, handler, context);
        }

        /**
         * <p>Lists the status of the Amazon Web Services account assignment deletion
         * requests for a specified IAM Identity Center instance.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountAssignmentDeletionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountAssignmentDeletionStatusOutcome ListAccountAssignmentDeletionStatus(const Model::ListAccountAssignmentDeletionStatusRequest& request) const;

        /**
         * A Callable wrapper for ListAccountAssignmentDeletionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccountAssignmentDeletionStatusRequestT = Model::ListAccountAssignmentDeletionStatusRequest>
        Model::ListAccountAssignmentDeletionStatusOutcomeCallable ListAccountAssignmentDeletionStatusCallable(const ListAccountAssignmentDeletionStatusRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ListAccountAssignmentDeletionStatus, request);
        }

        /**
         * An Async wrapper for ListAccountAssignmentDeletionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccountAssignmentDeletionStatusRequestT = Model::ListAccountAssignmentDeletionStatusRequest>
        void ListAccountAssignmentDeletionStatusAsync(const ListAccountAssignmentDeletionStatusRequestT& request, const ListAccountAssignmentDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ListAccountAssignmentDeletionStatus, request, handler, context);
        }

        /**
         * <p>Lists the assignee of the specified Amazon Web Services account with the
         * specified permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountAssignments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountAssignmentsOutcome ListAccountAssignments(const Model::ListAccountAssignmentsRequest& request) const;

        /**
         * A Callable wrapper for ListAccountAssignments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccountAssignmentsRequestT = Model::ListAccountAssignmentsRequest>
        Model::ListAccountAssignmentsOutcomeCallable ListAccountAssignmentsCallable(const ListAccountAssignmentsRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ListAccountAssignments, request);
        }

        /**
         * An Async wrapper for ListAccountAssignments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccountAssignmentsRequestT = Model::ListAccountAssignmentsRequest>
        void ListAccountAssignmentsAsync(const ListAccountAssignmentsRequestT& request, const ListAccountAssignmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ListAccountAssignments, request, handler, context);
        }

        /**
         * <p>Retrieves a list of the IAM Identity Center associated Amazon Web Services
         * accounts that the principal has access to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountAssignmentsForPrincipal">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountAssignmentsForPrincipalOutcome ListAccountAssignmentsForPrincipal(const Model::ListAccountAssignmentsForPrincipalRequest& request) const;

        /**
         * A Callable wrapper for ListAccountAssignmentsForPrincipal that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccountAssignmentsForPrincipalRequestT = Model::ListAccountAssignmentsForPrincipalRequest>
        Model::ListAccountAssignmentsForPrincipalOutcomeCallable ListAccountAssignmentsForPrincipalCallable(const ListAccountAssignmentsForPrincipalRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ListAccountAssignmentsForPrincipal, request);
        }

        /**
         * An Async wrapper for ListAccountAssignmentsForPrincipal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccountAssignmentsForPrincipalRequestT = Model::ListAccountAssignmentsForPrincipalRequest>
        void ListAccountAssignmentsForPrincipalAsync(const ListAccountAssignmentsForPrincipalRequestT& request, const ListAccountAssignmentsForPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ListAccountAssignmentsForPrincipal, request, handler, context);
        }

        /**
         * <p>Lists all the Amazon Web Services accounts where the specified permission set
         * is provisioned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListAccountsForProvisionedPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountsForProvisionedPermissionSetOutcome ListAccountsForProvisionedPermissionSet(const Model::ListAccountsForProvisionedPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for ListAccountsForProvisionedPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccountsForProvisionedPermissionSetRequestT = Model::ListAccountsForProvisionedPermissionSetRequest>
        Model::ListAccountsForProvisionedPermissionSetOutcomeCallable ListAccountsForProvisionedPermissionSetCallable(const ListAccountsForProvisionedPermissionSetRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ListAccountsForProvisionedPermissionSet, request);
        }

        /**
         * An Async wrapper for ListAccountsForProvisionedPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccountsForProvisionedPermissionSetRequestT = Model::ListAccountsForProvisionedPermissionSetRequest>
        void ListAccountsForProvisionedPermissionSetAsync(const ListAccountsForProvisionedPermissionSetRequestT& request, const ListAccountsForProvisionedPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ListAccountsForProvisionedPermissionSet, request, handler, context);
        }

        /**
         * <p>Lists the access scopes and authorized targets associated with an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListApplicationAccessScopes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationAccessScopesOutcome ListApplicationAccessScopes(const Model::ListApplicationAccessScopesRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationAccessScopes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationAccessScopesRequestT = Model::ListApplicationAccessScopesRequest>
        Model::ListApplicationAccessScopesOutcomeCallable ListApplicationAccessScopesCallable(const ListApplicationAccessScopesRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ListApplicationAccessScopes, request);
        }

        /**
         * An Async wrapper for ListApplicationAccessScopes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationAccessScopesRequestT = Model::ListApplicationAccessScopesRequest>
        void ListApplicationAccessScopesAsync(const ListApplicationAccessScopesRequestT& request, const ListApplicationAccessScopesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ListApplicationAccessScopes, request, handler, context);
        }

        /**
         * <p>Lists Amazon Web Services account users that are assigned to an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListApplicationAssignments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationAssignmentsOutcome ListApplicationAssignments(const Model::ListApplicationAssignmentsRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationAssignments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationAssignmentsRequestT = Model::ListApplicationAssignmentsRequest>
        Model::ListApplicationAssignmentsOutcomeCallable ListApplicationAssignmentsCallable(const ListApplicationAssignmentsRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ListApplicationAssignments, request);
        }

        /**
         * An Async wrapper for ListApplicationAssignments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationAssignmentsRequestT = Model::ListApplicationAssignmentsRequest>
        void ListApplicationAssignmentsAsync(const ListApplicationAssignmentsRequestT& request, const ListApplicationAssignmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ListApplicationAssignments, request, handler, context);
        }

        /**
         * <p>Lists the applications to which a specified principal is
         * assigned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListApplicationAssignmentsForPrincipal">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationAssignmentsForPrincipalOutcome ListApplicationAssignmentsForPrincipal(const Model::ListApplicationAssignmentsForPrincipalRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationAssignmentsForPrincipal that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationAssignmentsForPrincipalRequestT = Model::ListApplicationAssignmentsForPrincipalRequest>
        Model::ListApplicationAssignmentsForPrincipalOutcomeCallable ListApplicationAssignmentsForPrincipalCallable(const ListApplicationAssignmentsForPrincipalRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ListApplicationAssignmentsForPrincipal, request);
        }

        /**
         * An Async wrapper for ListApplicationAssignmentsForPrincipal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationAssignmentsForPrincipalRequestT = Model::ListApplicationAssignmentsForPrincipalRequest>
        void ListApplicationAssignmentsForPrincipalAsync(const ListApplicationAssignmentsForPrincipalRequestT& request, const ListApplicationAssignmentsForPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ListApplicationAssignmentsForPrincipal, request, handler, context);
        }

        /**
         * <p>Lists all of the authentication methods supported by the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListApplicationAuthenticationMethods">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationAuthenticationMethodsOutcome ListApplicationAuthenticationMethods(const Model::ListApplicationAuthenticationMethodsRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationAuthenticationMethods that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationAuthenticationMethodsRequestT = Model::ListApplicationAuthenticationMethodsRequest>
        Model::ListApplicationAuthenticationMethodsOutcomeCallable ListApplicationAuthenticationMethodsCallable(const ListApplicationAuthenticationMethodsRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ListApplicationAuthenticationMethods, request);
        }

        /**
         * An Async wrapper for ListApplicationAuthenticationMethods that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationAuthenticationMethodsRequestT = Model::ListApplicationAuthenticationMethodsRequest>
        void ListApplicationAuthenticationMethodsAsync(const ListApplicationAuthenticationMethodsRequestT& request, const ListApplicationAuthenticationMethodsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ListApplicationAuthenticationMethods, request, handler, context);
        }

        /**
         * <p>List the grants associated with an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListApplicationGrants">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationGrantsOutcome ListApplicationGrants(const Model::ListApplicationGrantsRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationGrants that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationGrantsRequestT = Model::ListApplicationGrantsRequest>
        Model::ListApplicationGrantsOutcomeCallable ListApplicationGrantsCallable(const ListApplicationGrantsRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ListApplicationGrants, request);
        }

        /**
         * An Async wrapper for ListApplicationGrants that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationGrantsRequestT = Model::ListApplicationGrantsRequest>
        void ListApplicationGrantsAsync(const ListApplicationGrantsRequestT& request, const ListApplicationGrantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ListApplicationGrants, request, handler, context);
        }

        /**
         * <p>Lists the application providers configured in the IAM Identity Center
         * identity store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListApplicationProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationProvidersOutcome ListApplicationProviders(const Model::ListApplicationProvidersRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationProviders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationProvidersRequestT = Model::ListApplicationProvidersRequest>
        Model::ListApplicationProvidersOutcomeCallable ListApplicationProvidersCallable(const ListApplicationProvidersRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ListApplicationProviders, request);
        }

        /**
         * An Async wrapper for ListApplicationProviders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationProvidersRequestT = Model::ListApplicationProvidersRequest>
        void ListApplicationProvidersAsync(const ListApplicationProvidersRequestT& request, const ListApplicationProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ListApplicationProviders, request, handler, context);
        }

        /**
         * <p>Lists all applications associated with the instance of IAM Identity Center.
         * When listing applications for an instance in the management account, member
         * accounts must use the <code>applicationAccount</code> parameter to filter the
         * list to only applications created from that account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const ListApplicationsRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ListApplications, request);
        }

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        void ListApplicationsAsync(const ListApplicationsRequestT& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ListApplications, request, handler, context);
        }

        /**
         * <p>Lists all customer managed policies attached to a specified
         * <a>PermissionSet</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListCustomerManagedPolicyReferencesInPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomerManagedPolicyReferencesInPermissionSetOutcome ListCustomerManagedPolicyReferencesInPermissionSet(const Model::ListCustomerManagedPolicyReferencesInPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for ListCustomerManagedPolicyReferencesInPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCustomerManagedPolicyReferencesInPermissionSetRequestT = Model::ListCustomerManagedPolicyReferencesInPermissionSetRequest>
        Model::ListCustomerManagedPolicyReferencesInPermissionSetOutcomeCallable ListCustomerManagedPolicyReferencesInPermissionSetCallable(const ListCustomerManagedPolicyReferencesInPermissionSetRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ListCustomerManagedPolicyReferencesInPermissionSet, request);
        }

        /**
         * An Async wrapper for ListCustomerManagedPolicyReferencesInPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCustomerManagedPolicyReferencesInPermissionSetRequestT = Model::ListCustomerManagedPolicyReferencesInPermissionSetRequest>
        void ListCustomerManagedPolicyReferencesInPermissionSetAsync(const ListCustomerManagedPolicyReferencesInPermissionSetRequestT& request, const ListCustomerManagedPolicyReferencesInPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ListCustomerManagedPolicyReferencesInPermissionSet, request, handler, context);
        }

        /**
         * <p>Lists the details of the organization and account instances of IAM Identity
         * Center that were created in or visible to the account calling this API.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstancesOutcome ListInstances(const Model::ListInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInstancesRequestT = Model::ListInstancesRequest>
        Model::ListInstancesOutcomeCallable ListInstancesCallable(const ListInstancesRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ListInstances, request);
        }

        /**
         * An Async wrapper for ListInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInstancesRequestT = Model::ListInstancesRequest>
        void ListInstancesAsync(const ListInstancesRequestT& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ListInstances, request, handler, context);
        }

        /**
         * <p>Lists the Amazon Web Services managed policy that is attached to a specified
         * permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListManagedPoliciesInPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedPoliciesInPermissionSetOutcome ListManagedPoliciesInPermissionSet(const Model::ListManagedPoliciesInPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for ListManagedPoliciesInPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListManagedPoliciesInPermissionSetRequestT = Model::ListManagedPoliciesInPermissionSetRequest>
        Model::ListManagedPoliciesInPermissionSetOutcomeCallable ListManagedPoliciesInPermissionSetCallable(const ListManagedPoliciesInPermissionSetRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ListManagedPoliciesInPermissionSet, request);
        }

        /**
         * An Async wrapper for ListManagedPoliciesInPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListManagedPoliciesInPermissionSetRequestT = Model::ListManagedPoliciesInPermissionSetRequest>
        void ListManagedPoliciesInPermissionSetAsync(const ListManagedPoliciesInPermissionSetRequestT& request, const ListManagedPoliciesInPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ListManagedPoliciesInPermissionSet, request, handler, context);
        }

        /**
         * <p>Lists the status of the permission set provisioning requests for a specified
         * IAM Identity Center instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListPermissionSetProvisioningStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionSetProvisioningStatusOutcome ListPermissionSetProvisioningStatus(const Model::ListPermissionSetProvisioningStatusRequest& request) const;

        /**
         * A Callable wrapper for ListPermissionSetProvisioningStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPermissionSetProvisioningStatusRequestT = Model::ListPermissionSetProvisioningStatusRequest>
        Model::ListPermissionSetProvisioningStatusOutcomeCallable ListPermissionSetProvisioningStatusCallable(const ListPermissionSetProvisioningStatusRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ListPermissionSetProvisioningStatus, request);
        }

        /**
         * An Async wrapper for ListPermissionSetProvisioningStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPermissionSetProvisioningStatusRequestT = Model::ListPermissionSetProvisioningStatusRequest>
        void ListPermissionSetProvisioningStatusAsync(const ListPermissionSetProvisioningStatusRequestT& request, const ListPermissionSetProvisioningStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ListPermissionSetProvisioningStatus, request, handler, context);
        }

        /**
         * <p>Lists the <a>PermissionSet</a>s in an IAM Identity Center
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListPermissionSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionSetsOutcome ListPermissionSets(const Model::ListPermissionSetsRequest& request) const;

        /**
         * A Callable wrapper for ListPermissionSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPermissionSetsRequestT = Model::ListPermissionSetsRequest>
        Model::ListPermissionSetsOutcomeCallable ListPermissionSetsCallable(const ListPermissionSetsRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ListPermissionSets, request);
        }

        /**
         * An Async wrapper for ListPermissionSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPermissionSetsRequestT = Model::ListPermissionSetsRequest>
        void ListPermissionSetsAsync(const ListPermissionSetsRequestT& request, const ListPermissionSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ListPermissionSets, request, handler, context);
        }

        /**
         * <p>Lists all the permission sets that are provisioned to a specified Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListPermissionSetsProvisionedToAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionSetsProvisionedToAccountOutcome ListPermissionSetsProvisionedToAccount(const Model::ListPermissionSetsProvisionedToAccountRequest& request) const;

        /**
         * A Callable wrapper for ListPermissionSetsProvisionedToAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPermissionSetsProvisionedToAccountRequestT = Model::ListPermissionSetsProvisionedToAccountRequest>
        Model::ListPermissionSetsProvisionedToAccountOutcomeCallable ListPermissionSetsProvisionedToAccountCallable(const ListPermissionSetsProvisionedToAccountRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ListPermissionSetsProvisionedToAccount, request);
        }

        /**
         * An Async wrapper for ListPermissionSetsProvisionedToAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPermissionSetsProvisionedToAccountRequestT = Model::ListPermissionSetsProvisionedToAccountRequest>
        void ListPermissionSetsProvisionedToAccountAsync(const ListPermissionSetsProvisionedToAccountRequestT& request, const ListPermissionSetsProvisionedToAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ListPermissionSetsProvisionedToAccount, request, handler, context);
        }

        /**
         * <p>Lists the tags that are attached to a specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists all the trusted token issuers configured in an instance of IAM Identity
         * Center.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ListTrustedTokenIssuers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrustedTokenIssuersOutcome ListTrustedTokenIssuers(const Model::ListTrustedTokenIssuersRequest& request) const;

        /**
         * A Callable wrapper for ListTrustedTokenIssuers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTrustedTokenIssuersRequestT = Model::ListTrustedTokenIssuersRequest>
        Model::ListTrustedTokenIssuersOutcomeCallable ListTrustedTokenIssuersCallable(const ListTrustedTokenIssuersRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ListTrustedTokenIssuers, request);
        }

        /**
         * An Async wrapper for ListTrustedTokenIssuers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTrustedTokenIssuersRequestT = Model::ListTrustedTokenIssuersRequest>
        void ListTrustedTokenIssuersAsync(const ListTrustedTokenIssuersRequestT& request, const ListTrustedTokenIssuersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ListTrustedTokenIssuers, request, handler, context);
        }

        /**
         * <p>The process by which a specified permission set is provisioned to the
         * specified target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ProvisionPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ProvisionPermissionSetOutcome ProvisionPermissionSet(const Model::ProvisionPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for ProvisionPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ProvisionPermissionSetRequestT = Model::ProvisionPermissionSetRequest>
        Model::ProvisionPermissionSetOutcomeCallable ProvisionPermissionSetCallable(const ProvisionPermissionSetRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::ProvisionPermissionSet, request);
        }

        /**
         * An Async wrapper for ProvisionPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ProvisionPermissionSetRequestT = Model::ProvisionPermissionSetRequest>
        void ProvisionPermissionSetAsync(const ProvisionPermissionSetRequestT& request, const ProvisionPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::ProvisionPermissionSet, request, handler, context);
        }

        /**
         * <p>Adds or updates the list of authorized targets for an IAM Identity Center
         * access scope for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/PutApplicationAccessScope">AWS
         * API Reference</a></p>
         */
        virtual Model::PutApplicationAccessScopeOutcome PutApplicationAccessScope(const Model::PutApplicationAccessScopeRequest& request) const;

        /**
         * A Callable wrapper for PutApplicationAccessScope that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutApplicationAccessScopeRequestT = Model::PutApplicationAccessScopeRequest>
        Model::PutApplicationAccessScopeOutcomeCallable PutApplicationAccessScopeCallable(const PutApplicationAccessScopeRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::PutApplicationAccessScope, request);
        }

        /**
         * An Async wrapper for PutApplicationAccessScope that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutApplicationAccessScopeRequestT = Model::PutApplicationAccessScopeRequest>
        void PutApplicationAccessScopeAsync(const PutApplicationAccessScopeRequestT& request, const PutApplicationAccessScopeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::PutApplicationAccessScope, request, handler, context);
        }

        /**
         * <p>Configure how users gain access to an application. If
         * <code>AssignmentsRequired</code> is <code>true</code> (default value), users
         * don’t have access to the application unless an assignment is created using the
         * <a
         * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_CreateApplicationAssignment.html">CreateApplicationAssignment
         * API</a>. If <code>false</code>, all users have access to the application. If an
         * assignment is created using <a
         * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_CreateApplicationAssignment.html">CreateApplicationAssignment</a>.,
         * the user retains access if <code>AssignmentsRequired</code> is set to
         * <code>true</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/PutApplicationAssignmentConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutApplicationAssignmentConfigurationOutcome PutApplicationAssignmentConfiguration(const Model::PutApplicationAssignmentConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutApplicationAssignmentConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutApplicationAssignmentConfigurationRequestT = Model::PutApplicationAssignmentConfigurationRequest>
        Model::PutApplicationAssignmentConfigurationOutcomeCallable PutApplicationAssignmentConfigurationCallable(const PutApplicationAssignmentConfigurationRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::PutApplicationAssignmentConfiguration, request);
        }

        /**
         * An Async wrapper for PutApplicationAssignmentConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutApplicationAssignmentConfigurationRequestT = Model::PutApplicationAssignmentConfigurationRequest>
        void PutApplicationAssignmentConfigurationAsync(const PutApplicationAssignmentConfigurationRequestT& request, const PutApplicationAssignmentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::PutApplicationAssignmentConfiguration, request, handler, context);
        }

        /**
         * <p>Adds or updates an authentication method for an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/PutApplicationAuthenticationMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::PutApplicationAuthenticationMethodOutcome PutApplicationAuthenticationMethod(const Model::PutApplicationAuthenticationMethodRequest& request) const;

        /**
         * A Callable wrapper for PutApplicationAuthenticationMethod that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutApplicationAuthenticationMethodRequestT = Model::PutApplicationAuthenticationMethodRequest>
        Model::PutApplicationAuthenticationMethodOutcomeCallable PutApplicationAuthenticationMethodCallable(const PutApplicationAuthenticationMethodRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::PutApplicationAuthenticationMethod, request);
        }

        /**
         * An Async wrapper for PutApplicationAuthenticationMethod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutApplicationAuthenticationMethodRequestT = Model::PutApplicationAuthenticationMethodRequest>
        void PutApplicationAuthenticationMethodAsync(const PutApplicationAuthenticationMethodRequestT& request, const PutApplicationAuthenticationMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::PutApplicationAuthenticationMethod, request, handler, context);
        }

        /**
         * <p>Adds a grant to an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/PutApplicationGrant">AWS
         * API Reference</a></p>
         */
        virtual Model::PutApplicationGrantOutcome PutApplicationGrant(const Model::PutApplicationGrantRequest& request) const;

        /**
         * A Callable wrapper for PutApplicationGrant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutApplicationGrantRequestT = Model::PutApplicationGrantRequest>
        Model::PutApplicationGrantOutcomeCallable PutApplicationGrantCallable(const PutApplicationGrantRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::PutApplicationGrant, request);
        }

        /**
         * An Async wrapper for PutApplicationGrant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutApplicationGrantRequestT = Model::PutApplicationGrantRequest>
        void PutApplicationGrantAsync(const PutApplicationGrantRequestT& request, const PutApplicationGrantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::PutApplicationGrant, request, handler, context);
        }

        /**
         * <p>Attaches an inline policy to a permission set.</p>  <p>If the
         * permission set is already referenced by one or more account assignments, you
         * will need to call <code> <a>ProvisionPermissionSet</a> </code> after this action
         * to apply the corresponding IAM policy updates to all assigned accounts.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/PutInlinePolicyToPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInlinePolicyToPermissionSetOutcome PutInlinePolicyToPermissionSet(const Model::PutInlinePolicyToPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for PutInlinePolicyToPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutInlinePolicyToPermissionSetRequestT = Model::PutInlinePolicyToPermissionSetRequest>
        Model::PutInlinePolicyToPermissionSetOutcomeCallable PutInlinePolicyToPermissionSetCallable(const PutInlinePolicyToPermissionSetRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::PutInlinePolicyToPermissionSet, request);
        }

        /**
         * An Async wrapper for PutInlinePolicyToPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutInlinePolicyToPermissionSetRequestT = Model::PutInlinePolicyToPermissionSetRequest>
        void PutInlinePolicyToPermissionSetAsync(const PutInlinePolicyToPermissionSetRequestT& request, const PutInlinePolicyToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::PutInlinePolicyToPermissionSet, request, handler, context);
        }

        /**
         * <p>Attaches an Amazon Web Services managed or customer managed policy to the
         * specified <a>PermissionSet</a> as a permissions boundary.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/PutPermissionsBoundaryToPermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPermissionsBoundaryToPermissionSetOutcome PutPermissionsBoundaryToPermissionSet(const Model::PutPermissionsBoundaryToPermissionSetRequest& request) const;

        /**
         * A Callable wrapper for PutPermissionsBoundaryToPermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutPermissionsBoundaryToPermissionSetRequestT = Model::PutPermissionsBoundaryToPermissionSetRequest>
        Model::PutPermissionsBoundaryToPermissionSetOutcomeCallable PutPermissionsBoundaryToPermissionSetCallable(const PutPermissionsBoundaryToPermissionSetRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::PutPermissionsBoundaryToPermissionSet, request);
        }

        /**
         * An Async wrapper for PutPermissionsBoundaryToPermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutPermissionsBoundaryToPermissionSetRequestT = Model::PutPermissionsBoundaryToPermissionSetRequest>
        void PutPermissionsBoundaryToPermissionSetAsync(const PutPermissionsBoundaryToPermissionSetRequestT& request, const PutPermissionsBoundaryToPermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::PutPermissionsBoundaryToPermissionSet, request, handler, context);
        }

        /**
         * <p>Associates a set of tags with a specified resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::TagResource, request, handler, context);
        }

        /**
         * <p>Disassociates a set of tags from a specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates application properties. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const UpdateApplicationRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::UpdateApplication, request);
        }

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        void UpdateApplicationAsync(const UpdateApplicationRequestT& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::UpdateApplication, request, handler, context);
        }

        /**
         * <p>Update the details for the instance of IAM Identity Center that is owned by
         * the Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/UpdateInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInstanceOutcome UpdateInstance(const Model::UpdateInstanceRequest& request) const;

        /**
         * A Callable wrapper for UpdateInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInstanceRequestT = Model::UpdateInstanceRequest>
        Model::UpdateInstanceOutcomeCallable UpdateInstanceCallable(const UpdateInstanceRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::UpdateInstance, request);
        }

        /**
         * An Async wrapper for UpdateInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInstanceRequestT = Model::UpdateInstanceRequest>
        void UpdateInstanceAsync(const UpdateInstanceRequestT& request, const UpdateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::UpdateInstance, request, handler, context);
        }

        /**
         * <p>Updates the IAM Identity Center identity store attributes that you can use
         * with the IAM Identity Center instance for attributes-based access control
         * (ABAC). When using an external identity provider as an identity source, you can
         * pass attributes through the SAML assertion as an alternative to configuring
         * attributes from the IAM Identity Center identity store. If a SAML assertion
         * passes any of these attributes, IAM Identity Center replaces the attribute value
         * with the value from the IAM Identity Center identity store. For more information
         * about ABAC, see <a
         * href="/singlesignon/latest/userguide/abac.html">Attribute-Based Access
         * Control</a> in the <i>IAM Identity Center User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/UpdateInstanceAccessControlAttributeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInstanceAccessControlAttributeConfigurationOutcome UpdateInstanceAccessControlAttributeConfiguration(const Model::UpdateInstanceAccessControlAttributeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateInstanceAccessControlAttributeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInstanceAccessControlAttributeConfigurationRequestT = Model::UpdateInstanceAccessControlAttributeConfigurationRequest>
        Model::UpdateInstanceAccessControlAttributeConfigurationOutcomeCallable UpdateInstanceAccessControlAttributeConfigurationCallable(const UpdateInstanceAccessControlAttributeConfigurationRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::UpdateInstanceAccessControlAttributeConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateInstanceAccessControlAttributeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInstanceAccessControlAttributeConfigurationRequestT = Model::UpdateInstanceAccessControlAttributeConfigurationRequest>
        void UpdateInstanceAccessControlAttributeConfigurationAsync(const UpdateInstanceAccessControlAttributeConfigurationRequestT& request, const UpdateInstanceAccessControlAttributeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::UpdateInstanceAccessControlAttributeConfiguration, request, handler, context);
        }

        /**
         * <p>Updates an existing permission set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/UpdatePermissionSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePermissionSetOutcome UpdatePermissionSet(const Model::UpdatePermissionSetRequest& request) const;

        /**
         * A Callable wrapper for UpdatePermissionSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePermissionSetRequestT = Model::UpdatePermissionSetRequest>
        Model::UpdatePermissionSetOutcomeCallable UpdatePermissionSetCallable(const UpdatePermissionSetRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::UpdatePermissionSet, request);
        }

        /**
         * An Async wrapper for UpdatePermissionSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePermissionSetRequestT = Model::UpdatePermissionSetRequest>
        void UpdatePermissionSetAsync(const UpdatePermissionSetRequestT& request, const UpdatePermissionSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::UpdatePermissionSet, request, handler, context);
        }

        /**
         * <p>Updates the name of the trusted token issuer, or the path of a source
         * attribute or destination attribute for a trusted token issuer configuration.</p>
         *  <p>Updating this trusted token issuer configuration might cause users to
         * lose access to any applications that are configured to use the trusted token
         * issuer.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/UpdateTrustedTokenIssuer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrustedTokenIssuerOutcome UpdateTrustedTokenIssuer(const Model::UpdateTrustedTokenIssuerRequest& request) const;

        /**
         * A Callable wrapper for UpdateTrustedTokenIssuer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTrustedTokenIssuerRequestT = Model::UpdateTrustedTokenIssuerRequest>
        Model::UpdateTrustedTokenIssuerOutcomeCallable UpdateTrustedTokenIssuerCallable(const UpdateTrustedTokenIssuerRequestT& request) const
        {
            return SubmitCallable(&SSOAdminClient::UpdateTrustedTokenIssuer, request);
        }

        /**
         * An Async wrapper for UpdateTrustedTokenIssuer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTrustedTokenIssuerRequestT = Model::UpdateTrustedTokenIssuerRequest>
        void UpdateTrustedTokenIssuerAsync(const UpdateTrustedTokenIssuerRequestT& request, const UpdateTrustedTokenIssuerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSOAdminClient::UpdateTrustedTokenIssuer, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SSOAdminEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SSOAdminClient>;
      void init(const SSOAdminClientConfiguration& clientConfiguration);

      SSOAdminClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SSOAdminEndpointProviderBase> m_endpointProvider;
  };

} // namespace SSOAdmin
} // namespace Aws
