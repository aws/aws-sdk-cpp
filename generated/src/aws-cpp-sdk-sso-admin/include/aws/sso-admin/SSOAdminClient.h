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
   * <p>AWS IAM Identity Center (successor to AWS Single Sign-On) helps you securely
   * create, or connect, your workforce identities and manage their access centrally
   * across AWS accounts and applications. IAM Identity Center is the recommended
   * approach for workforce authentication and authorization in AWS, for
   * organizations of any size and type.</p>  <p>Although AWS Single Sign-On
   * was renamed, the <code>sso</code> and <code>identitystore</code> API namespaces
   * will continue to retain their original name for backward compatibility purposes.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html#renamed">IAM
   * Identity Center rename</a>.</p>  <p>This reference guide provides
   * information on single sign-on operations which could be used for access
   * management of AWS accounts. For information about IAM Identity Center features,
   * see the <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">IAM
   * Identity Center User Guide</a>.</p> <p>Many operations in the IAM Identity
   * Center APIs rely on identifiers for users and groups, known as principals. For
   * more information about how to work with principals and principal IDs in IAM
   * Identity Center, see the <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/welcome.html">Identity
   * Store API Reference</a>.</p>  <p>AWS provides SDKs that consist of
   * libraries and sample code for various programming languages and platforms (Java,
   * Ruby, .Net, iOS, Android, and more). The SDKs provide a convenient way to create
   * programmatic access to IAM Identity Center and other AWS services. For more
   * information about the AWS SDKs, including how to download and install them, see
   * <a href="http://aws.amazon.com/tools/">Tools for Amazon Web Services</a>.</p>
   * 
   */
  class AWS_SSOADMIN_API SSOAdminClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SSOAdminClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef SSOAdminClientConfiguration ClientConfigurationType;
      typedef SSOAdminEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOAdminClient(const Aws::SSOAdmin::SSOAdminClientConfiguration& clientConfiguration = Aws::SSOAdmin::SSOAdminClientConfiguration(),
                       std::shared_ptr<SSOAdminEndpointProviderBase> endpointProvider = Aws::MakeShared<SSOAdminEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSOAdminClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<SSOAdminEndpointProviderBase> endpointProvider = Aws::MakeShared<SSOAdminEndpointProvider>(ALLOCATION_TAG),
                       const Aws::SSOAdmin::SSOAdminClientConfiguration& clientConfiguration = Aws::SSOAdmin::SSOAdminClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSOAdminClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<SSOAdminEndpointProviderBase> endpointProvider = Aws::MakeShared<SSOAdminEndpointProvider>(ALLOCATION_TAG),
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
         * <p>Attaches an AWS managed policy ARN to a permission set.</p>  <p>If the
         * permission set is already referenced by one or more account assignments, you
         * will need to call <code> <a>ProvisionPermissionSet</a> </code> after this
         * operation. Calling <code>ProvisionPermissionSet</code> applies the corresponding
         * IAM policy updates to all assigned accounts.</p> <p><h3>See Also:</h3>  
         * <a
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
         * <p>Assigns access to a principal for a specified AWS account using a specified
         * permission set.</p>  <p>The term <i>principal</i> here refers to a user or
         * group that is defined in IAM Identity Center.</p>   <p>As part of a
         * successful <code>CreateAccountAssignment</code> call, the specified permission
         * set will automatically be provisioned to the account in the form of an IAM
         * policy. That policy is attached to the IAM role created in IAM Identity Center.
         * If the permission set is subsequently updated, the corresponding IAM policies
         * attached to roles in your accounts will not be updated automatically. In this
         * case, you must call <code> <a>ProvisionPermissionSet</a> </code> to make these
         * updates.</p>   <p> After a successful response, call
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
         *  <p>To grant users and groups access to AWS account resources, use <code>
         * <a>CreateAccountAssignment</a> </code>.</p> <p><h3>See Also:</h3>   <a
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
         * <p>Deletes a principal's access from a specified AWS account using a specified
         * permission set.</p>  <p>After a successful response, call
         * <code>DescribeAccountAssignmentCreationStatus</code> to describe the status of
         * an assignment deletion request.</p> <p><h3>See Also:</h3>   <a
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
         * <p>Detaches the attached AWS managed policy ARN from the specified permission
         * set.</p><p><h3>See Also:</h3>   <a
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
         * <p>Lists the status of the AWS account assignment creation requests for a
         * specified IAM Identity Center instance.</p><p><h3>See Also:</h3>   <a
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
         * <p>Lists the status of the AWS account assignment deletion requests for a
         * specified IAM Identity Center instance.</p><p><h3>See Also:</h3>   <a
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
         * <p>Lists the assignee of the specified AWS account with the specified permission
         * set.</p><p><h3>See Also:</h3>   <a
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
         * <p>Lists all the AWS accounts where the specified permission set is
         * provisioned.</p><p><h3>See Also:</h3>   <a
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
         * <p>Lists the IAM Identity Center instances that the caller has access
         * to.</p><p><h3>See Also:</h3>   <a
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
         * <p>Lists the AWS managed policy that is attached to a specified permission
         * set.</p><p><h3>See Also:</h3>   <a
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
         * <p>Lists all the permission sets that are provisioned to a specified AWS
         * account.</p><p><h3>See Also:</h3>   <a
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
         * <p>Attaches an AWS managed or customer managed policy to the specified
         * <a>PermissionSet</a> as a permissions boundary.</p><p><h3>See Also:</h3>   <a
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
