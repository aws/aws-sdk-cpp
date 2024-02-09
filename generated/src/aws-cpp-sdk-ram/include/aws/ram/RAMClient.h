/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ram/RAMServiceClientModel.h>

namespace Aws
{
namespace RAM
{
  /**
   * <p>This is the <i>Resource Access Manager API Reference</i>. This documentation
   * provides descriptions and syntax for each of the actions and data types in RAM.
   * RAM is a service that helps you securely share your Amazon Web Services
   * resources to other Amazon Web Services accounts. If you use Organizations to
   * manage your accounts, then you can share your resources with your entire
   * organization or to organizational units (OUs). For supported resource types, you
   * can also share resources with individual Identity and Access Management (IAM)
   * roles and users. </p> <p>To learn more about RAM, see the following
   * resources:</p> <ul> <li> <p> <a href="http://aws.amazon.com/ram">Resource Access
   * Manager product page</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/ram/latest/userguide/">Resource Access Manager
   * User Guide</a> </p> </li> </ul>
   */
  class AWS_RAM_API RAMClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<RAMClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef RAMClientConfiguration ClientConfigurationType;
      typedef RAMEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RAMClient(const Aws::RAM::RAMClientConfiguration& clientConfiguration = Aws::RAM::RAMClientConfiguration(),
                  std::shared_ptr<RAMEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RAMClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<RAMEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::RAM::RAMClientConfiguration& clientConfiguration = Aws::RAM::RAMClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RAMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<RAMEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::RAM::RAMClientConfiguration& clientConfiguration = Aws::RAM::RAMClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RAMClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RAMClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RAMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~RAMClient();

        /**
         * <p>Accepts an invitation to a resource share from another Amazon Web Services
         * account. After you accept the invitation, the resources included in the resource
         * share are available to interact with in the relevant Amazon Web Services
         * Management Consoles and tools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/AcceptResourceShareInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptResourceShareInvitationOutcome AcceptResourceShareInvitation(const Model::AcceptResourceShareInvitationRequest& request) const;

        /**
         * A Callable wrapper for AcceptResourceShareInvitation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcceptResourceShareInvitationRequestT = Model::AcceptResourceShareInvitationRequest>
        Model::AcceptResourceShareInvitationOutcomeCallable AcceptResourceShareInvitationCallable(const AcceptResourceShareInvitationRequestT& request) const
        {
            return SubmitCallable(&RAMClient::AcceptResourceShareInvitation, request);
        }

        /**
         * An Async wrapper for AcceptResourceShareInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptResourceShareInvitationRequestT = Model::AcceptResourceShareInvitationRequest>
        void AcceptResourceShareInvitationAsync(const AcceptResourceShareInvitationRequestT& request, const AcceptResourceShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::AcceptResourceShareInvitation, request, handler, context);
        }

        /**
         * <p>Adds the specified list of principals and list of resources to a resource
         * share. Principals that already have access to this resource share immediately
         * receive access to the added resources. Newly added principals immediately
         * receive access to the resources shared in this resource share. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/AssociateResourceShare">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateResourceShareOutcome AssociateResourceShare(const Model::AssociateResourceShareRequest& request) const;

        /**
         * A Callable wrapper for AssociateResourceShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateResourceShareRequestT = Model::AssociateResourceShareRequest>
        Model::AssociateResourceShareOutcomeCallable AssociateResourceShareCallable(const AssociateResourceShareRequestT& request) const
        {
            return SubmitCallable(&RAMClient::AssociateResourceShare, request);
        }

        /**
         * An Async wrapper for AssociateResourceShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateResourceShareRequestT = Model::AssociateResourceShareRequest>
        void AssociateResourceShareAsync(const AssociateResourceShareRequestT& request, const AssociateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::AssociateResourceShare, request, handler, context);
        }

        /**
         * <p>Adds or replaces the RAM permission for a resource type included in a
         * resource share. You can have exactly one permission associated with each
         * resource type in the resource share. You can add a new RAM permission only if
         * there are currently no resources of that resource type currently in the resource
         * share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/AssociateResourceSharePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateResourceSharePermissionOutcome AssociateResourceSharePermission(const Model::AssociateResourceSharePermissionRequest& request) const;

        /**
         * A Callable wrapper for AssociateResourceSharePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateResourceSharePermissionRequestT = Model::AssociateResourceSharePermissionRequest>
        Model::AssociateResourceSharePermissionOutcomeCallable AssociateResourceSharePermissionCallable(const AssociateResourceSharePermissionRequestT& request) const
        {
            return SubmitCallable(&RAMClient::AssociateResourceSharePermission, request);
        }

        /**
         * An Async wrapper for AssociateResourceSharePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateResourceSharePermissionRequestT = Model::AssociateResourceSharePermissionRequest>
        void AssociateResourceSharePermissionAsync(const AssociateResourceSharePermissionRequestT& request, const AssociateResourceSharePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::AssociateResourceSharePermission, request, handler, context);
        }

        /**
         * <p>Creates a customer managed permission for a specified resource type that you
         * can attach to resource shares. It is created in the Amazon Web Services Region
         * in which you call the operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/CreatePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePermissionOutcome CreatePermission(const Model::CreatePermissionRequest& request) const;

        /**
         * A Callable wrapper for CreatePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePermissionRequestT = Model::CreatePermissionRequest>
        Model::CreatePermissionOutcomeCallable CreatePermissionCallable(const CreatePermissionRequestT& request) const
        {
            return SubmitCallable(&RAMClient::CreatePermission, request);
        }

        /**
         * An Async wrapper for CreatePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePermissionRequestT = Model::CreatePermissionRequest>
        void CreatePermissionAsync(const CreatePermissionRequestT& request, const CreatePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::CreatePermission, request, handler, context);
        }

        /**
         * <p>Creates a new version of the specified customer managed permission. The new
         * version is automatically set as the default version of the customer managed
         * permission. New resource shares automatically use the default permission.
         * Existing resource shares continue to use their original permission versions, but
         * you can use <a>ReplacePermissionAssociations</a> to update them.</p> <p>If the
         * specified customer managed permission already has the maximum of 5 versions,
         * then you must delete one of the existing versions before you can create a new
         * one.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/CreatePermissionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePermissionVersionOutcome CreatePermissionVersion(const Model::CreatePermissionVersionRequest& request) const;

        /**
         * A Callable wrapper for CreatePermissionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePermissionVersionRequestT = Model::CreatePermissionVersionRequest>
        Model::CreatePermissionVersionOutcomeCallable CreatePermissionVersionCallable(const CreatePermissionVersionRequestT& request) const
        {
            return SubmitCallable(&RAMClient::CreatePermissionVersion, request);
        }

        /**
         * An Async wrapper for CreatePermissionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePermissionVersionRequestT = Model::CreatePermissionVersionRequest>
        void CreatePermissionVersionAsync(const CreatePermissionVersionRequestT& request, const CreatePermissionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::CreatePermissionVersion, request, handler, context);
        }

        /**
         * <p>Creates a resource share. You can provide a list of the <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
         * Resource Names (ARNs)</a> for the resources that you want to share, a list of
         * principals you want to share the resources with, and the permissions to grant
         * those principals.</p>  <p>Sharing a resource makes it available for use by
         * principals outside of the Amazon Web Services account that created the resource.
         * Sharing doesn't change any permissions or quotas that apply to the resource in
         * the account that created it.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/CreateResourceShare">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceShareOutcome CreateResourceShare(const Model::CreateResourceShareRequest& request) const;

        /**
         * A Callable wrapper for CreateResourceShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateResourceShareRequestT = Model::CreateResourceShareRequest>
        Model::CreateResourceShareOutcomeCallable CreateResourceShareCallable(const CreateResourceShareRequestT& request) const
        {
            return SubmitCallable(&RAMClient::CreateResourceShare, request);
        }

        /**
         * An Async wrapper for CreateResourceShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateResourceShareRequestT = Model::CreateResourceShareRequest>
        void CreateResourceShareAsync(const CreateResourceShareRequestT& request, const CreateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::CreateResourceShare, request, handler, context);
        }

        /**
         * <p>Deletes the specified customer managed permission in the Amazon Web Services
         * Region in which you call this operation. You can delete a customer managed
         * permission only if it isn't attached to any resource share. The operation
         * deletes all versions associated with the customer managed
         * permission.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/DeletePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePermissionOutcome DeletePermission(const Model::DeletePermissionRequest& request) const;

        /**
         * A Callable wrapper for DeletePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePermissionRequestT = Model::DeletePermissionRequest>
        Model::DeletePermissionOutcomeCallable DeletePermissionCallable(const DeletePermissionRequestT& request) const
        {
            return SubmitCallable(&RAMClient::DeletePermission, request);
        }

        /**
         * An Async wrapper for DeletePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePermissionRequestT = Model::DeletePermissionRequest>
        void DeletePermissionAsync(const DeletePermissionRequestT& request, const DeletePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::DeletePermission, request, handler, context);
        }

        /**
         * <p>Deletes one version of a customer managed permission. The version you specify
         * must not be attached to any resource share and must not be the default version
         * for the permission.</p> <p>If a customer managed permission has the maximum of 5
         * versions, then you must delete at least one version before you can create
         * another.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/DeletePermissionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePermissionVersionOutcome DeletePermissionVersion(const Model::DeletePermissionVersionRequest& request) const;

        /**
         * A Callable wrapper for DeletePermissionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePermissionVersionRequestT = Model::DeletePermissionVersionRequest>
        Model::DeletePermissionVersionOutcomeCallable DeletePermissionVersionCallable(const DeletePermissionVersionRequestT& request) const
        {
            return SubmitCallable(&RAMClient::DeletePermissionVersion, request);
        }

        /**
         * An Async wrapper for DeletePermissionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePermissionVersionRequestT = Model::DeletePermissionVersionRequest>
        void DeletePermissionVersionAsync(const DeletePermissionVersionRequestT& request, const DeletePermissionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::DeletePermissionVersion, request, handler, context);
        }

        /**
         * <p>Deletes the specified resource share.</p>  <p>This doesn't delete
         * any of the resources that were associated with the resource share; it only stops
         * the sharing of those resources through this resource share.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/DeleteResourceShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceShareOutcome DeleteResourceShare(const Model::DeleteResourceShareRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourceShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourceShareRequestT = Model::DeleteResourceShareRequest>
        Model::DeleteResourceShareOutcomeCallable DeleteResourceShareCallable(const DeleteResourceShareRequestT& request) const
        {
            return SubmitCallable(&RAMClient::DeleteResourceShare, request);
        }

        /**
         * An Async wrapper for DeleteResourceShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourceShareRequestT = Model::DeleteResourceShareRequest>
        void DeleteResourceShareAsync(const DeleteResourceShareRequestT& request, const DeleteResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::DeleteResourceShare, request, handler, context);
        }

        /**
         * <p>Removes the specified principals or resources from participating in the
         * specified resource share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/DisassociateResourceShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateResourceShareOutcome DisassociateResourceShare(const Model::DisassociateResourceShareRequest& request) const;

        /**
         * A Callable wrapper for DisassociateResourceShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateResourceShareRequestT = Model::DisassociateResourceShareRequest>
        Model::DisassociateResourceShareOutcomeCallable DisassociateResourceShareCallable(const DisassociateResourceShareRequestT& request) const
        {
            return SubmitCallable(&RAMClient::DisassociateResourceShare, request);
        }

        /**
         * An Async wrapper for DisassociateResourceShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateResourceShareRequestT = Model::DisassociateResourceShareRequest>
        void DisassociateResourceShareAsync(const DisassociateResourceShareRequestT& request, const DisassociateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::DisassociateResourceShare, request, handler, context);
        }

        /**
         * <p>Removes a managed permission from a resource share. Permission changes take
         * effect immediately. You can remove a managed permission from a resource share
         * only if there are currently no resources of the relevant resource type currently
         * attached to the resource share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/DisassociateResourceSharePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateResourceSharePermissionOutcome DisassociateResourceSharePermission(const Model::DisassociateResourceSharePermissionRequest& request) const;

        /**
         * A Callable wrapper for DisassociateResourceSharePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateResourceSharePermissionRequestT = Model::DisassociateResourceSharePermissionRequest>
        Model::DisassociateResourceSharePermissionOutcomeCallable DisassociateResourceSharePermissionCallable(const DisassociateResourceSharePermissionRequestT& request) const
        {
            return SubmitCallable(&RAMClient::DisassociateResourceSharePermission, request);
        }

        /**
         * An Async wrapper for DisassociateResourceSharePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateResourceSharePermissionRequestT = Model::DisassociateResourceSharePermissionRequest>
        void DisassociateResourceSharePermissionAsync(const DisassociateResourceSharePermissionRequestT& request, const DisassociateResourceSharePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::DisassociateResourceSharePermission, request, handler, context);
        }

        /**
         * <p>Enables resource sharing within your organization in Organizations. This
         * operation creates a service-linked role called
         * <code>AWSServiceRoleForResourceAccessManager</code> that has the IAM managed
         * policy named AWSResourceAccessManagerServiceRolePolicy attached. This role
         * permits RAM to retrieve information about the organization and its structure.
         * This lets you share resources with all of the accounts in the calling account's
         * organization by specifying the organization ID, or all of the accounts in an
         * organizational unit (OU) by specifying the OU ID. Until you enable sharing
         * within the organization, you can specify only individual Amazon Web Services
         * accounts, or for supported resource types, IAM roles and users.</p> <p>You must
         * call this operation from an IAM role or user in the organization's management
         * account.</p> <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/EnableSharingWithAwsOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableSharingWithAwsOrganizationOutcome EnableSharingWithAwsOrganization(const Model::EnableSharingWithAwsOrganizationRequest& request) const;

        /**
         * A Callable wrapper for EnableSharingWithAwsOrganization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableSharingWithAwsOrganizationRequestT = Model::EnableSharingWithAwsOrganizationRequest>
        Model::EnableSharingWithAwsOrganizationOutcomeCallable EnableSharingWithAwsOrganizationCallable(const EnableSharingWithAwsOrganizationRequestT& request) const
        {
            return SubmitCallable(&RAMClient::EnableSharingWithAwsOrganization, request);
        }

        /**
         * An Async wrapper for EnableSharingWithAwsOrganization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableSharingWithAwsOrganizationRequestT = Model::EnableSharingWithAwsOrganizationRequest>
        void EnableSharingWithAwsOrganizationAsync(const EnableSharingWithAwsOrganizationRequestT& request, const EnableSharingWithAwsOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::EnableSharingWithAwsOrganization, request, handler, context);
        }

        /**
         * <p>Retrieves the contents of a managed permission in JSON format.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPermissionOutcome GetPermission(const Model::GetPermissionRequest& request) const;

        /**
         * A Callable wrapper for GetPermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPermissionRequestT = Model::GetPermissionRequest>
        Model::GetPermissionOutcomeCallable GetPermissionCallable(const GetPermissionRequestT& request) const
        {
            return SubmitCallable(&RAMClient::GetPermission, request);
        }

        /**
         * An Async wrapper for GetPermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPermissionRequestT = Model::GetPermissionRequest>
        void GetPermissionAsync(const GetPermissionRequestT& request, const GetPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::GetPermission, request, handler, context);
        }

        /**
         * <p>Retrieves the resource policies for the specified resources that you own and
         * have shared.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourcePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePoliciesOutcome GetResourcePolicies(const Model::GetResourcePoliciesRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourcePoliciesRequestT = Model::GetResourcePoliciesRequest>
        Model::GetResourcePoliciesOutcomeCallable GetResourcePoliciesCallable(const GetResourcePoliciesRequestT& request) const
        {
            return SubmitCallable(&RAMClient::GetResourcePolicies, request);
        }

        /**
         * An Async wrapper for GetResourcePolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourcePoliciesRequestT = Model::GetResourcePoliciesRequest>
        void GetResourcePoliciesAsync(const GetResourcePoliciesRequestT& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::GetResourcePolicies, request, handler, context);
        }

        /**
         * <p>Retrieves the lists of resources and principals that associated for resource
         * shares that you own.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourceShareAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceShareAssociationsOutcome GetResourceShareAssociations(const Model::GetResourceShareAssociationsRequest& request) const;

        /**
         * A Callable wrapper for GetResourceShareAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourceShareAssociationsRequestT = Model::GetResourceShareAssociationsRequest>
        Model::GetResourceShareAssociationsOutcomeCallable GetResourceShareAssociationsCallable(const GetResourceShareAssociationsRequestT& request) const
        {
            return SubmitCallable(&RAMClient::GetResourceShareAssociations, request);
        }

        /**
         * An Async wrapper for GetResourceShareAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourceShareAssociationsRequestT = Model::GetResourceShareAssociationsRequest>
        void GetResourceShareAssociationsAsync(const GetResourceShareAssociationsRequestT& request, const GetResourceShareAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::GetResourceShareAssociations, request, handler, context);
        }

        /**
         * <p>Retrieves details about invitations that you have received for resource
         * shares.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourceShareInvitations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceShareInvitationsOutcome GetResourceShareInvitations(const Model::GetResourceShareInvitationsRequest& request) const;

        /**
         * A Callable wrapper for GetResourceShareInvitations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourceShareInvitationsRequestT = Model::GetResourceShareInvitationsRequest>
        Model::GetResourceShareInvitationsOutcomeCallable GetResourceShareInvitationsCallable(const GetResourceShareInvitationsRequestT& request) const
        {
            return SubmitCallable(&RAMClient::GetResourceShareInvitations, request);
        }

        /**
         * An Async wrapper for GetResourceShareInvitations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourceShareInvitationsRequestT = Model::GetResourceShareInvitationsRequest>
        void GetResourceShareInvitationsAsync(const GetResourceShareInvitationsRequestT& request, const GetResourceShareInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::GetResourceShareInvitations, request, handler, context);
        }

        /**
         * <p>Retrieves details about the resource shares that you own or that are shared
         * with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/GetResourceShares">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceSharesOutcome GetResourceShares(const Model::GetResourceSharesRequest& request) const;

        /**
         * A Callable wrapper for GetResourceShares that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourceSharesRequestT = Model::GetResourceSharesRequest>
        Model::GetResourceSharesOutcomeCallable GetResourceSharesCallable(const GetResourceSharesRequestT& request) const
        {
            return SubmitCallable(&RAMClient::GetResourceShares, request);
        }

        /**
         * An Async wrapper for GetResourceShares that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourceSharesRequestT = Model::GetResourceSharesRequest>
        void GetResourceSharesAsync(const GetResourceSharesRequestT& request, const GetResourceSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::GetResourceShares, request, handler, context);
        }

        /**
         * <p>Lists the resources in a resource share that is shared with you but for which
         * the invitation is still <code>PENDING</code>. That means that you haven't
         * accepted or rejected the invitation and the invitation hasn't
         * expired.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListPendingInvitationResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPendingInvitationResourcesOutcome ListPendingInvitationResources(const Model::ListPendingInvitationResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListPendingInvitationResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPendingInvitationResourcesRequestT = Model::ListPendingInvitationResourcesRequest>
        Model::ListPendingInvitationResourcesOutcomeCallable ListPendingInvitationResourcesCallable(const ListPendingInvitationResourcesRequestT& request) const
        {
            return SubmitCallable(&RAMClient::ListPendingInvitationResources, request);
        }

        /**
         * An Async wrapper for ListPendingInvitationResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPendingInvitationResourcesRequestT = Model::ListPendingInvitationResourcesRequest>
        void ListPendingInvitationResourcesAsync(const ListPendingInvitationResourcesRequestT& request, const ListPendingInvitationResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::ListPendingInvitationResources, request, handler, context);
        }

        /**
         * <p>Lists information about the managed permission and its associations to any
         * resource shares that use this managed permission. This lets you see which
         * resource shares use which versions of the specified managed
         * permission.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListPermissionAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionAssociationsOutcome ListPermissionAssociations(const Model::ListPermissionAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListPermissionAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPermissionAssociationsRequestT = Model::ListPermissionAssociationsRequest>
        Model::ListPermissionAssociationsOutcomeCallable ListPermissionAssociationsCallable(const ListPermissionAssociationsRequestT& request) const
        {
            return SubmitCallable(&RAMClient::ListPermissionAssociations, request);
        }

        /**
         * An Async wrapper for ListPermissionAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPermissionAssociationsRequestT = Model::ListPermissionAssociationsRequest>
        void ListPermissionAssociationsAsync(const ListPermissionAssociationsRequestT& request, const ListPermissionAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::ListPermissionAssociations, request, handler, context);
        }

        /**
         * <p>Lists the available versions of the specified RAM permission.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListPermissionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionVersionsOutcome ListPermissionVersions(const Model::ListPermissionVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListPermissionVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPermissionVersionsRequestT = Model::ListPermissionVersionsRequest>
        Model::ListPermissionVersionsOutcomeCallable ListPermissionVersionsCallable(const ListPermissionVersionsRequestT& request) const
        {
            return SubmitCallable(&RAMClient::ListPermissionVersions, request);
        }

        /**
         * An Async wrapper for ListPermissionVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPermissionVersionsRequestT = Model::ListPermissionVersionsRequest>
        void ListPermissionVersionsAsync(const ListPermissionVersionsRequestT& request, const ListPermissionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::ListPermissionVersions, request, handler, context);
        }

        /**
         * <p>Retrieves a list of available RAM permissions that you can use for the
         * supported resource types. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionsOutcome ListPermissions(const Model::ListPermissionsRequest& request) const;

        /**
         * A Callable wrapper for ListPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPermissionsRequestT = Model::ListPermissionsRequest>
        Model::ListPermissionsOutcomeCallable ListPermissionsCallable(const ListPermissionsRequestT& request) const
        {
            return SubmitCallable(&RAMClient::ListPermissions, request);
        }

        /**
         * An Async wrapper for ListPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPermissionsRequestT = Model::ListPermissionsRequest>
        void ListPermissionsAsync(const ListPermissionsRequestT& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::ListPermissions, request, handler, context);
        }

        /**
         * <p>Lists the principals that you are sharing resources with or that are sharing
         * resources with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListPrincipals">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPrincipalsOutcome ListPrincipals(const Model::ListPrincipalsRequest& request) const;

        /**
         * A Callable wrapper for ListPrincipals that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPrincipalsRequestT = Model::ListPrincipalsRequest>
        Model::ListPrincipalsOutcomeCallable ListPrincipalsCallable(const ListPrincipalsRequestT& request) const
        {
            return SubmitCallable(&RAMClient::ListPrincipals, request);
        }

        /**
         * An Async wrapper for ListPrincipals that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPrincipalsRequestT = Model::ListPrincipalsRequest>
        void ListPrincipalsAsync(const ListPrincipalsRequestT& request, const ListPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::ListPrincipals, request, handler, context);
        }

        /**
         * <p>Retrieves the current status of the asynchronous tasks performed by RAM when
         * you perform the <a>ReplacePermissionAssociationsWork</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListReplacePermissionAssociationsWork">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReplacePermissionAssociationsWorkOutcome ListReplacePermissionAssociationsWork(const Model::ListReplacePermissionAssociationsWorkRequest& request) const;

        /**
         * A Callable wrapper for ListReplacePermissionAssociationsWork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReplacePermissionAssociationsWorkRequestT = Model::ListReplacePermissionAssociationsWorkRequest>
        Model::ListReplacePermissionAssociationsWorkOutcomeCallable ListReplacePermissionAssociationsWorkCallable(const ListReplacePermissionAssociationsWorkRequestT& request) const
        {
            return SubmitCallable(&RAMClient::ListReplacePermissionAssociationsWork, request);
        }

        /**
         * An Async wrapper for ListReplacePermissionAssociationsWork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReplacePermissionAssociationsWorkRequestT = Model::ListReplacePermissionAssociationsWorkRequest>
        void ListReplacePermissionAssociationsWorkAsync(const ListReplacePermissionAssociationsWorkRequestT& request, const ListReplacePermissionAssociationsWorkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::ListReplacePermissionAssociationsWork, request, handler, context);
        }

        /**
         * <p>Lists the RAM permissions that are associated with a resource
         * share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListResourceSharePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceSharePermissionsOutcome ListResourceSharePermissions(const Model::ListResourceSharePermissionsRequest& request) const;

        /**
         * A Callable wrapper for ListResourceSharePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourceSharePermissionsRequestT = Model::ListResourceSharePermissionsRequest>
        Model::ListResourceSharePermissionsOutcomeCallable ListResourceSharePermissionsCallable(const ListResourceSharePermissionsRequestT& request) const
        {
            return SubmitCallable(&RAMClient::ListResourceSharePermissions, request);
        }

        /**
         * An Async wrapper for ListResourceSharePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceSharePermissionsRequestT = Model::ListResourceSharePermissionsRequest>
        void ListResourceSharePermissionsAsync(const ListResourceSharePermissionsRequestT& request, const ListResourceSharePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::ListResourceSharePermissions, request, handler, context);
        }

        /**
         * <p>Lists the resource types that can be shared by RAM.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListResourceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceTypesOutcome ListResourceTypes(const Model::ListResourceTypesRequest& request) const;

        /**
         * A Callable wrapper for ListResourceTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourceTypesRequestT = Model::ListResourceTypesRequest>
        Model::ListResourceTypesOutcomeCallable ListResourceTypesCallable(const ListResourceTypesRequestT& request) const
        {
            return SubmitCallable(&RAMClient::ListResourceTypes, request);
        }

        /**
         * An Async wrapper for ListResourceTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceTypesRequestT = Model::ListResourceTypesRequest>
        void ListResourceTypesAsync(const ListResourceTypesRequestT& request, const ListResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::ListResourceTypes, request, handler, context);
        }

        /**
         * <p>Lists the resources that you added to a resource share or the resources that
         * are shared with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ListResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesOutcome ListResources(const Model::ListResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourcesRequestT = Model::ListResourcesRequest>
        Model::ListResourcesOutcomeCallable ListResourcesCallable(const ListResourcesRequestT& request) const
        {
            return SubmitCallable(&RAMClient::ListResources, request);
        }

        /**
         * An Async wrapper for ListResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourcesRequestT = Model::ListResourcesRequest>
        void ListResourcesAsync(const ListResourcesRequestT& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::ListResources, request, handler, context);
        }

        /**
         * <p>When you attach a resource-based policy to a resource, RAM automatically
         * creates a resource share of
         * <code>featureSet</code>=<code>CREATED_FROM_POLICY</code> with a managed
         * permission that has the same IAM permissions as the original resource-based
         * policy. However, this type of managed permission is visible to only the resource
         * share owner, and the associated resource share can't be modified by using
         * RAM.</p> <p>This operation creates a separate, fully manageable customer managed
         * permission that has the same IAM permissions as the original resource-based
         * policy. You can associate this customer managed permission to any resource
         * shares.</p> <p>Before you use <a>PromoteResourceShareCreatedFromPolicy</a>, you
         * should first run this operation to ensure that you have an appropriate customer
         * managed permission that can be associated with the promoted resource share.</p>
         *  <ul> <li> <p>The original <code>CREATED_FROM_POLICY</code> policy isn't
         * deleted, and resource shares using that original policy aren't automatically
         * updated.</p> </li> <li> <p>You can't modify a <code>CREATED_FROM_POLICY</code>
         * resource share so you can't associate the new customer managed permission by
         * using <code>ReplacePermsissionAssociations</code>. However, if you use
         * <a>PromoteResourceShareCreatedFromPolicy</a>, that operation automatically
         * associates the fully manageable customer managed permission to the newly
         * promoted <code>STANDARD</code> resource share.</p> </li> <li> <p>After you
         * promote a resource share, if the original <code>CREATED_FROM_POLICY</code>
         * managed permission has no other associations to A resource share, then RAM
         * automatically deletes it.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/PromotePermissionCreatedFromPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PromotePermissionCreatedFromPolicyOutcome PromotePermissionCreatedFromPolicy(const Model::PromotePermissionCreatedFromPolicyRequest& request) const;

        /**
         * A Callable wrapper for PromotePermissionCreatedFromPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PromotePermissionCreatedFromPolicyRequestT = Model::PromotePermissionCreatedFromPolicyRequest>
        Model::PromotePermissionCreatedFromPolicyOutcomeCallable PromotePermissionCreatedFromPolicyCallable(const PromotePermissionCreatedFromPolicyRequestT& request) const
        {
            return SubmitCallable(&RAMClient::PromotePermissionCreatedFromPolicy, request);
        }

        /**
         * An Async wrapper for PromotePermissionCreatedFromPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PromotePermissionCreatedFromPolicyRequestT = Model::PromotePermissionCreatedFromPolicyRequest>
        void PromotePermissionCreatedFromPolicyAsync(const PromotePermissionCreatedFromPolicyRequestT& request, const PromotePermissionCreatedFromPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::PromotePermissionCreatedFromPolicy, request, handler, context);
        }

        /**
         * <p>When you attach a resource-based policy to a resource, RAM automatically
         * creates a resource share of
         * <code>featureSet</code>=<code>CREATED_FROM_POLICY</code> with a managed
         * permission that has the same IAM permissions as the original resource-based
         * policy. However, this type of managed permission is visible to only the resource
         * share owner, and the associated resource share can't be modified by using
         * RAM.</p> <p>This operation promotes the resource share to a
         * <code>STANDARD</code> resource share that is fully manageable in RAM. When you
         * promote a resource share, you can then manage the resource share in RAM and it
         * becomes visible to all of the principals you shared it with.</p> 
         * <p>Before you perform this operation, you should first run
         * <a>PromotePermissionCreatedFromPolicy</a>to ensure that you have an appropriate
         * customer managed permission that can be associated with this resource share
         * after its is promoted. If this operation can't find a managed permission that
         * exactly matches the existing <code>CREATED_FROM_POLICY</code> permission, then
         * this operation fails.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/PromoteResourceShareCreatedFromPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PromoteResourceShareCreatedFromPolicyOutcome PromoteResourceShareCreatedFromPolicy(const Model::PromoteResourceShareCreatedFromPolicyRequest& request) const;

        /**
         * A Callable wrapper for PromoteResourceShareCreatedFromPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PromoteResourceShareCreatedFromPolicyRequestT = Model::PromoteResourceShareCreatedFromPolicyRequest>
        Model::PromoteResourceShareCreatedFromPolicyOutcomeCallable PromoteResourceShareCreatedFromPolicyCallable(const PromoteResourceShareCreatedFromPolicyRequestT& request) const
        {
            return SubmitCallable(&RAMClient::PromoteResourceShareCreatedFromPolicy, request);
        }

        /**
         * An Async wrapper for PromoteResourceShareCreatedFromPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PromoteResourceShareCreatedFromPolicyRequestT = Model::PromoteResourceShareCreatedFromPolicyRequest>
        void PromoteResourceShareCreatedFromPolicyAsync(const PromoteResourceShareCreatedFromPolicyRequestT& request, const PromoteResourceShareCreatedFromPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::PromoteResourceShareCreatedFromPolicy, request, handler, context);
        }

        /**
         * <p>Rejects an invitation to a resource share from another Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/RejectResourceShareInvitation">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectResourceShareInvitationOutcome RejectResourceShareInvitation(const Model::RejectResourceShareInvitationRequest& request) const;

        /**
         * A Callable wrapper for RejectResourceShareInvitation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RejectResourceShareInvitationRequestT = Model::RejectResourceShareInvitationRequest>
        Model::RejectResourceShareInvitationOutcomeCallable RejectResourceShareInvitationCallable(const RejectResourceShareInvitationRequestT& request) const
        {
            return SubmitCallable(&RAMClient::RejectResourceShareInvitation, request);
        }

        /**
         * An Async wrapper for RejectResourceShareInvitation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RejectResourceShareInvitationRequestT = Model::RejectResourceShareInvitationRequest>
        void RejectResourceShareInvitationAsync(const RejectResourceShareInvitationRequestT& request, const RejectResourceShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::RejectResourceShareInvitation, request, handler, context);
        }

        /**
         * <p>Updates all resource shares that use a managed permission to a different
         * managed permission. This operation always applies the default version of the
         * target managed permission. You can optionally specify that the update applies to
         * only resource shares that currently use a specified version. This enables you to
         * update to the latest version, without changing the which managed permission is
         * used.</p> <p>You can use this operation to update all of your resource shares to
         * use the current default version of the permission by specifying the same value
         * for the <code>fromPermissionArn</code> and <code>toPermissionArn</code>
         * parameters.</p> <p>You can use the optional <code>fromPermissionVersion</code>
         * parameter to update only those resources that use a specified version of the
         * managed permission to the new managed permission.</p>  <p>To
         * successfully perform this operation, you must have permission to update the
         * resource-based policy on all affected resource types.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ReplacePermissionAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplacePermissionAssociationsOutcome ReplacePermissionAssociations(const Model::ReplacePermissionAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ReplacePermissionAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ReplacePermissionAssociationsRequestT = Model::ReplacePermissionAssociationsRequest>
        Model::ReplacePermissionAssociationsOutcomeCallable ReplacePermissionAssociationsCallable(const ReplacePermissionAssociationsRequestT& request) const
        {
            return SubmitCallable(&RAMClient::ReplacePermissionAssociations, request);
        }

        /**
         * An Async wrapper for ReplacePermissionAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ReplacePermissionAssociationsRequestT = Model::ReplacePermissionAssociationsRequest>
        void ReplacePermissionAssociationsAsync(const ReplacePermissionAssociationsRequestT& request, const ReplacePermissionAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::ReplacePermissionAssociations, request, handler, context);
        }

        /**
         * <p>Designates the specified version number as the default version for the
         * specified customer managed permission. New resource shares automatically use
         * this new default permission. Existing resource shares continue to use their
         * original permission version, but you can use
         * <a>ReplacePermissionAssociations</a> to update them.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/SetDefaultPermissionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::SetDefaultPermissionVersionOutcome SetDefaultPermissionVersion(const Model::SetDefaultPermissionVersionRequest& request) const;

        /**
         * A Callable wrapper for SetDefaultPermissionVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetDefaultPermissionVersionRequestT = Model::SetDefaultPermissionVersionRequest>
        Model::SetDefaultPermissionVersionOutcomeCallable SetDefaultPermissionVersionCallable(const SetDefaultPermissionVersionRequestT& request) const
        {
            return SubmitCallable(&RAMClient::SetDefaultPermissionVersion, request);
        }

        /**
         * An Async wrapper for SetDefaultPermissionVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetDefaultPermissionVersionRequestT = Model::SetDefaultPermissionVersionRequest>
        void SetDefaultPermissionVersionAsync(const SetDefaultPermissionVersionRequestT& request, const SetDefaultPermissionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::SetDefaultPermissionVersion, request, handler, context);
        }

        /**
         * <p>Adds the specified tag keys and values to a resource share or managed
         * permission. If you choose a resource share, the tags are attached to only the
         * resource share, not to the resources that are in the resource share.</p> <p>The
         * tags on a managed permission are the same for all versions of the managed
         * permission.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&RAMClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the specified tag key and value pairs from the specified resource
         * share or managed permission.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&RAMClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Modifies some of the properties of the specified resource
         * share.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/UpdateResourceShare">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceShareOutcome UpdateResourceShare(const Model::UpdateResourceShareRequest& request) const;

        /**
         * A Callable wrapper for UpdateResourceShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateResourceShareRequestT = Model::UpdateResourceShareRequest>
        Model::UpdateResourceShareOutcomeCallable UpdateResourceShareCallable(const UpdateResourceShareRequestT& request) const
        {
            return SubmitCallable(&RAMClient::UpdateResourceShare, request);
        }

        /**
         * An Async wrapper for UpdateResourceShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResourceShareRequestT = Model::UpdateResourceShareRequest>
        void UpdateResourceShareAsync(const UpdateResourceShareRequestT& request, const UpdateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RAMClient::UpdateResourceShare, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<RAMEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<RAMClient>;
      void init(const RAMClientConfiguration& clientConfiguration);

      RAMClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<RAMEndpointProviderBase> m_endpointProvider;
  };

} // namespace RAM
} // namespace Aws
