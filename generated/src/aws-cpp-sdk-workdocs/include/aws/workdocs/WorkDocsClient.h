/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workdocs/WorkDocsServiceClientModel.h>

namespace Aws
{
namespace WorkDocs
{
  /**
   * <p>The Amazon WorkDocs API is designed for the following use cases:</p> <ul>
   * <li> <p>File Migration: File migration applications are supported for users who
   * want to migrate their files from an on-premises or off-premises file system or
   * service. Users can insert files into a user directory structure, as well as
   * allow for basic metadata changes, such as modifications to the permissions of
   * files.</p> </li> <li> <p>Security: Support security applications are supported
   * for users who have additional security needs, such as antivirus or data loss
   * prevention. The API actions, along with CloudTrail, allow these applications to
   * detect when changes occur in Amazon WorkDocs. Then, the application can take the
   * necessary actions and replace the target file. If the target file violates the
   * policy, the application can also choose to email the user.</p> </li> <li>
   * <p>eDiscovery/Analytics: General administrative applications are supported, such
   * as eDiscovery and analytics. These applications can choose to mimic or record
   * the actions in an Amazon WorkDocs site, along with CloudTrail, to replicate data
   * for eDiscovery, backup, or analytical applications.</p> </li> </ul> <p>All
   * Amazon WorkDocs API actions are Amazon authenticated and certificate-signed.
   * They not only require the use of the Amazon Web Services SDK, but also allow for
   * the exclusive use of IAM users and roles to help facilitate access, trust, and
   * permission policies. By creating a role and allowing an IAM user to access the
   * Amazon WorkDocs site, the IAM user gains full administrative visibility into the
   * entire Amazon WorkDocs site (or as set in the IAM policy). This includes, but is
   * not limited to, the ability to modify file permissions and upload any file to
   * any user. This allows developers to perform the three use cases above, as well
   * as give users the ability to grant access on a selective basis using the IAM
   * model.</p>  <p>The pricing for Amazon WorkDocs APIs varies depending on
   * the API call type for these actions:</p> <ul> <li> <p> <code>READ (Get*)</code>
   * </p> </li> <li> <p> <code>WRITE (Activate*, Add*, Create*, Deactivate*,
   * Initiate*, Update*)</code> </p> </li> <li> <p> <code>LIST (Describe*)</code>
   * </p> </li> <li> <p> <code>DELETE*, CANCEL</code> </p> </li> </ul> <p>For
   * information about Amazon WorkDocs API pricing, see <a
   * href="https://aws.amazon.com/workdocs/pricing/">Amazon WorkDocs Pricing</a>.</p>
   * 
   */
  class AWS_WORKDOCS_API WorkDocsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<WorkDocsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef WorkDocsClientConfiguration ClientConfigurationType;
      typedef WorkDocsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkDocsClient(const Aws::WorkDocs::WorkDocsClientConfiguration& clientConfiguration = Aws::WorkDocs::WorkDocsClientConfiguration(),
                       std::shared_ptr<WorkDocsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkDocsClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<WorkDocsEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::WorkDocs::WorkDocsClientConfiguration& clientConfiguration = Aws::WorkDocs::WorkDocsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkDocsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<WorkDocsEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::WorkDocs::WorkDocsClientConfiguration& clientConfiguration = Aws::WorkDocs::WorkDocsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkDocsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkDocsClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkDocsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~WorkDocsClient();

        /**
         * <p>Aborts the upload of the specified document version that was previously
         * initiated by <a>InitiateDocumentVersionUpload</a>. The client should make this
         * call only when it no longer intends to upload the document version, or fails to
         * do so.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/AbortDocumentVersionUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::AbortDocumentVersionUploadOutcome AbortDocumentVersionUpload(const Model::AbortDocumentVersionUploadRequest& request) const;

        /**
         * A Callable wrapper for AbortDocumentVersionUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AbortDocumentVersionUploadRequestT = Model::AbortDocumentVersionUploadRequest>
        Model::AbortDocumentVersionUploadOutcomeCallable AbortDocumentVersionUploadCallable(const AbortDocumentVersionUploadRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::AbortDocumentVersionUpload, request);
        }

        /**
         * An Async wrapper for AbortDocumentVersionUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AbortDocumentVersionUploadRequestT = Model::AbortDocumentVersionUploadRequest>
        void AbortDocumentVersionUploadAsync(const AbortDocumentVersionUploadRequestT& request, const AbortDocumentVersionUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::AbortDocumentVersionUpload, request, handler, context);
        }

        /**
         * <p>Activates the specified user. Only active users can access Amazon
         * WorkDocs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/ActivateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateUserOutcome ActivateUser(const Model::ActivateUserRequest& request) const;

        /**
         * A Callable wrapper for ActivateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ActivateUserRequestT = Model::ActivateUserRequest>
        Model::ActivateUserOutcomeCallable ActivateUserCallable(const ActivateUserRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::ActivateUser, request);
        }

        /**
         * An Async wrapper for ActivateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ActivateUserRequestT = Model::ActivateUserRequest>
        void ActivateUserAsync(const ActivateUserRequestT& request, const ActivateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::ActivateUser, request, handler, context);
        }

        /**
         * <p>Creates a set of permissions for the specified folder or document. The
         * resource permissions are overwritten if the principals already have different
         * permissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/AddResourcePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::AddResourcePermissionsOutcome AddResourcePermissions(const Model::AddResourcePermissionsRequest& request) const;

        /**
         * A Callable wrapper for AddResourcePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddResourcePermissionsRequestT = Model::AddResourcePermissionsRequest>
        Model::AddResourcePermissionsOutcomeCallable AddResourcePermissionsCallable(const AddResourcePermissionsRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::AddResourcePermissions, request);
        }

        /**
         * An Async wrapper for AddResourcePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddResourcePermissionsRequestT = Model::AddResourcePermissionsRequest>
        void AddResourcePermissionsAsync(const AddResourcePermissionsRequestT& request, const AddResourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::AddResourcePermissions, request, handler, context);
        }

        /**
         * <p>Adds a new comment to the specified document version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateComment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCommentOutcome CreateComment(const Model::CreateCommentRequest& request) const;

        /**
         * A Callable wrapper for CreateComment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCommentRequestT = Model::CreateCommentRequest>
        Model::CreateCommentOutcomeCallable CreateCommentCallable(const CreateCommentRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::CreateComment, request);
        }

        /**
         * An Async wrapper for CreateComment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCommentRequestT = Model::CreateCommentRequest>
        void CreateCommentAsync(const CreateCommentRequestT& request, const CreateCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::CreateComment, request, handler, context);
        }

        /**
         * <p>Adds one or more custom properties to the specified resource (a folder,
         * document, or version).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateCustomMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomMetadataOutcome CreateCustomMetadata(const Model::CreateCustomMetadataRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCustomMetadataRequestT = Model::CreateCustomMetadataRequest>
        Model::CreateCustomMetadataOutcomeCallable CreateCustomMetadataCallable(const CreateCustomMetadataRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::CreateCustomMetadata, request);
        }

        /**
         * An Async wrapper for CreateCustomMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCustomMetadataRequestT = Model::CreateCustomMetadataRequest>
        void CreateCustomMetadataAsync(const CreateCustomMetadataRequestT& request, const CreateCustomMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::CreateCustomMetadata, request, handler, context);
        }

        /**
         * <p>Creates a folder with the specified name and parent folder.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFolderOutcome CreateFolder(const Model::CreateFolderRequest& request) const;

        /**
         * A Callable wrapper for CreateFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFolderRequestT = Model::CreateFolderRequest>
        Model::CreateFolderOutcomeCallable CreateFolderCallable(const CreateFolderRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::CreateFolder, request);
        }

        /**
         * An Async wrapper for CreateFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFolderRequestT = Model::CreateFolderRequest>
        void CreateFolderAsync(const CreateFolderRequestT& request, const CreateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::CreateFolder, request, handler, context);
        }

        /**
         * <p>Adds the specified list of labels to the given resource (a document or
         * folder)</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateLabels">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLabelsOutcome CreateLabels(const Model::CreateLabelsRequest& request) const;

        /**
         * A Callable wrapper for CreateLabels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLabelsRequestT = Model::CreateLabelsRequest>
        Model::CreateLabelsOutcomeCallable CreateLabelsCallable(const CreateLabelsRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::CreateLabels, request);
        }

        /**
         * An Async wrapper for CreateLabels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLabelsRequestT = Model::CreateLabelsRequest>
        void CreateLabelsAsync(const CreateLabelsRequestT& request, const CreateLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::CreateLabels, request, handler, context);
        }

        /**
         * <p>Configure Amazon WorkDocs to use Amazon SNS notifications. The endpoint
         * receives a confirmation message, and must confirm the subscription.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/workdocs/latest/developerguide/manage-notifications.html">Setting
         * up notifications for an IAM user or role</a> in the <i>Amazon WorkDocs Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateNotificationSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNotificationSubscriptionOutcome CreateNotificationSubscription(const Model::CreateNotificationSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for CreateNotificationSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateNotificationSubscriptionRequestT = Model::CreateNotificationSubscriptionRequest>
        Model::CreateNotificationSubscriptionOutcomeCallable CreateNotificationSubscriptionCallable(const CreateNotificationSubscriptionRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::CreateNotificationSubscription, request);
        }

        /**
         * An Async wrapper for CreateNotificationSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNotificationSubscriptionRequestT = Model::CreateNotificationSubscriptionRequest>
        void CreateNotificationSubscriptionAsync(const CreateNotificationSubscriptionRequestT& request, const CreateNotificationSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::CreateNotificationSubscription, request, handler, context);
        }

        /**
         * <p>Creates a user in a Simple AD or Microsoft AD directory. The status of a
         * newly created user is "ACTIVE". New users can access Amazon
         * WorkDocs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        Model::CreateUserOutcomeCallable CreateUserCallable(const CreateUserRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::CreateUser, request);
        }

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        void CreateUserAsync(const CreateUserRequestT& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::CreateUser, request, handler, context);
        }

        /**
         * <p>Deactivates the specified user, which revokes the user's access to Amazon
         * WorkDocs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeactivateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateUserOutcome DeactivateUser(const Model::DeactivateUserRequest& request) const;

        /**
         * A Callable wrapper for DeactivateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeactivateUserRequestT = Model::DeactivateUserRequest>
        Model::DeactivateUserOutcomeCallable DeactivateUserCallable(const DeactivateUserRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::DeactivateUser, request);
        }

        /**
         * An Async wrapper for DeactivateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeactivateUserRequestT = Model::DeactivateUserRequest>
        void DeactivateUserAsync(const DeactivateUserRequestT& request, const DeactivateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::DeactivateUser, request, handler, context);
        }

        /**
         * <p>Deletes the specified comment from the document version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteComment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCommentOutcome DeleteComment(const Model::DeleteCommentRequest& request) const;

        /**
         * A Callable wrapper for DeleteComment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCommentRequestT = Model::DeleteCommentRequest>
        Model::DeleteCommentOutcomeCallable DeleteCommentCallable(const DeleteCommentRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::DeleteComment, request);
        }

        /**
         * An Async wrapper for DeleteComment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCommentRequestT = Model::DeleteCommentRequest>
        void DeleteCommentAsync(const DeleteCommentRequestT& request, const DeleteCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::DeleteComment, request, handler, context);
        }

        /**
         * <p>Deletes custom metadata from the specified resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteCustomMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomMetadataOutcome DeleteCustomMetadata(const Model::DeleteCustomMetadataRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCustomMetadataRequestT = Model::DeleteCustomMetadataRequest>
        Model::DeleteCustomMetadataOutcomeCallable DeleteCustomMetadataCallable(const DeleteCustomMetadataRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::DeleteCustomMetadata, request);
        }

        /**
         * An Async wrapper for DeleteCustomMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCustomMetadataRequestT = Model::DeleteCustomMetadataRequest>
        void DeleteCustomMetadataAsync(const DeleteCustomMetadataRequestT& request, const DeleteCustomMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::DeleteCustomMetadata, request, handler, context);
        }

        /**
         * <p>Permanently deletes the specified document and its associated
         * metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDocumentOutcome DeleteDocument(const Model::DeleteDocumentRequest& request) const;

        /**
         * A Callable wrapper for DeleteDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDocumentRequestT = Model::DeleteDocumentRequest>
        Model::DeleteDocumentOutcomeCallable DeleteDocumentCallable(const DeleteDocumentRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::DeleteDocument, request);
        }

        /**
         * An Async wrapper for DeleteDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDocumentRequestT = Model::DeleteDocumentRequest>
        void DeleteDocumentAsync(const DeleteDocumentRequestT& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::DeleteDocument, request, handler, context);
        }

        /**
         * <p>Deletes a specific version of a document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteDocumentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDocumentVersionOutcome DeleteDocumentVersion(const Model::DeleteDocumentVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteDocumentVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDocumentVersionRequestT = Model::DeleteDocumentVersionRequest>
        Model::DeleteDocumentVersionOutcomeCallable DeleteDocumentVersionCallable(const DeleteDocumentVersionRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::DeleteDocumentVersion, request);
        }

        /**
         * An Async wrapper for DeleteDocumentVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDocumentVersionRequestT = Model::DeleteDocumentVersionRequest>
        void DeleteDocumentVersionAsync(const DeleteDocumentVersionRequestT& request, const DeleteDocumentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::DeleteDocumentVersion, request, handler, context);
        }

        /**
         * <p>Permanently deletes the specified folder and its contents.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFolderOutcome DeleteFolder(const Model::DeleteFolderRequest& request) const;

        /**
         * A Callable wrapper for DeleteFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFolderRequestT = Model::DeleteFolderRequest>
        Model::DeleteFolderOutcomeCallable DeleteFolderCallable(const DeleteFolderRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::DeleteFolder, request);
        }

        /**
         * An Async wrapper for DeleteFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFolderRequestT = Model::DeleteFolderRequest>
        void DeleteFolderAsync(const DeleteFolderRequestT& request, const DeleteFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::DeleteFolder, request, handler, context);
        }

        /**
         * <p>Deletes the contents of the specified folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteFolderContents">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFolderContentsOutcome DeleteFolderContents(const Model::DeleteFolderContentsRequest& request) const;

        /**
         * A Callable wrapper for DeleteFolderContents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFolderContentsRequestT = Model::DeleteFolderContentsRequest>
        Model::DeleteFolderContentsOutcomeCallable DeleteFolderContentsCallable(const DeleteFolderContentsRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::DeleteFolderContents, request);
        }

        /**
         * An Async wrapper for DeleteFolderContents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFolderContentsRequestT = Model::DeleteFolderContentsRequest>
        void DeleteFolderContentsAsync(const DeleteFolderContentsRequestT& request, const DeleteFolderContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::DeleteFolderContents, request, handler, context);
        }

        /**
         * <p>Deletes the specified list of labels from a resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteLabels">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLabelsOutcome DeleteLabels(const Model::DeleteLabelsRequest& request) const;

        /**
         * A Callable wrapper for DeleteLabels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLabelsRequestT = Model::DeleteLabelsRequest>
        Model::DeleteLabelsOutcomeCallable DeleteLabelsCallable(const DeleteLabelsRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::DeleteLabels, request);
        }

        /**
         * An Async wrapper for DeleteLabels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLabelsRequestT = Model::DeleteLabelsRequest>
        void DeleteLabelsAsync(const DeleteLabelsRequestT& request, const DeleteLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::DeleteLabels, request, handler, context);
        }

        /**
         * <p>Deletes the specified subscription from the specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteNotificationSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotificationSubscriptionOutcome DeleteNotificationSubscription(const Model::DeleteNotificationSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteNotificationSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNotificationSubscriptionRequestT = Model::DeleteNotificationSubscriptionRequest>
        Model::DeleteNotificationSubscriptionOutcomeCallable DeleteNotificationSubscriptionCallable(const DeleteNotificationSubscriptionRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::DeleteNotificationSubscription, request);
        }

        /**
         * An Async wrapper for DeleteNotificationSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNotificationSubscriptionRequestT = Model::DeleteNotificationSubscriptionRequest>
        void DeleteNotificationSubscriptionAsync(const DeleteNotificationSubscriptionRequestT& request, const DeleteNotificationSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::DeleteNotificationSubscription, request, handler, context);
        }

        /**
         * <p>Deletes the specified user from a Simple AD or Microsoft AD directory.</p>
         *  <p>Deleting a user immediately and permanently deletes all content
         * in that user's folder structure. Site retention policies do NOT apply to this
         * type of deletion.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        Model::DeleteUserOutcomeCallable DeleteUserCallable(const DeleteUserRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::DeleteUser, request);
        }

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        void DeleteUserAsync(const DeleteUserRequestT& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::DeleteUser, request, handler, context);
        }

        /**
         * <p>Describes the user activities in a specified time period.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeActivities">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActivitiesOutcome DescribeActivities(const Model::DescribeActivitiesRequest& request) const;

        /**
         * A Callable wrapper for DescribeActivities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeActivitiesRequestT = Model::DescribeActivitiesRequest>
        Model::DescribeActivitiesOutcomeCallable DescribeActivitiesCallable(const DescribeActivitiesRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::DescribeActivities, request);
        }

        /**
         * An Async wrapper for DescribeActivities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeActivitiesRequestT = Model::DescribeActivitiesRequest>
        void DescribeActivitiesAsync(const DescribeActivitiesRequestT& request, const DescribeActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::DescribeActivities, request, handler, context);
        }

        /**
         * <p>List all the comments for the specified document version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeComments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCommentsOutcome DescribeComments(const Model::DescribeCommentsRequest& request) const;

        /**
         * A Callable wrapper for DescribeComments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCommentsRequestT = Model::DescribeCommentsRequest>
        Model::DescribeCommentsOutcomeCallable DescribeCommentsCallable(const DescribeCommentsRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::DescribeComments, request);
        }

        /**
         * An Async wrapper for DescribeComments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCommentsRequestT = Model::DescribeCommentsRequest>
        void DescribeCommentsAsync(const DescribeCommentsRequestT& request, const DescribeCommentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::DescribeComments, request, handler, context);
        }

        /**
         * <p>Retrieves the document versions for the specified document.</p> <p>By
         * default, only active versions are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeDocumentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDocumentVersionsOutcome DescribeDocumentVersions(const Model::DescribeDocumentVersionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDocumentVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDocumentVersionsRequestT = Model::DescribeDocumentVersionsRequest>
        Model::DescribeDocumentVersionsOutcomeCallable DescribeDocumentVersionsCallable(const DescribeDocumentVersionsRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::DescribeDocumentVersions, request);
        }

        /**
         * An Async wrapper for DescribeDocumentVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDocumentVersionsRequestT = Model::DescribeDocumentVersionsRequest>
        void DescribeDocumentVersionsAsync(const DescribeDocumentVersionsRequestT& request, const DescribeDocumentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::DescribeDocumentVersions, request, handler, context);
        }

        /**
         * <p>Describes the contents of the specified folder, including its documents and
         * subfolders.</p> <p>By default, Amazon WorkDocs returns the first 100 active
         * document and folder metadata items. If there are more results, the response
         * includes a marker that you can use to request the next set of results. You can
         * also request initialized documents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeFolderContents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFolderContentsOutcome DescribeFolderContents(const Model::DescribeFolderContentsRequest& request) const;

        /**
         * A Callable wrapper for DescribeFolderContents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFolderContentsRequestT = Model::DescribeFolderContentsRequest>
        Model::DescribeFolderContentsOutcomeCallable DescribeFolderContentsCallable(const DescribeFolderContentsRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::DescribeFolderContents, request);
        }

        /**
         * An Async wrapper for DescribeFolderContents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFolderContentsRequestT = Model::DescribeFolderContentsRequest>
        void DescribeFolderContentsAsync(const DescribeFolderContentsRequestT& request, const DescribeFolderContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::DescribeFolderContents, request, handler, context);
        }

        /**
         * <p>Describes the groups specified by the query. Groups are defined by the
         * underlying Active Directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGroupsOutcome DescribeGroups(const Model::DescribeGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeGroupsRequestT = Model::DescribeGroupsRequest>
        Model::DescribeGroupsOutcomeCallable DescribeGroupsCallable(const DescribeGroupsRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::DescribeGroups, request);
        }

        /**
         * An Async wrapper for DescribeGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeGroupsRequestT = Model::DescribeGroupsRequest>
        void DescribeGroupsAsync(const DescribeGroupsRequestT& request, const DescribeGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::DescribeGroups, request, handler, context);
        }

        /**
         * <p>Lists the specified notification subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeNotificationSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotificationSubscriptionsOutcome DescribeNotificationSubscriptions(const Model::DescribeNotificationSubscriptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeNotificationSubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeNotificationSubscriptionsRequestT = Model::DescribeNotificationSubscriptionsRequest>
        Model::DescribeNotificationSubscriptionsOutcomeCallable DescribeNotificationSubscriptionsCallable(const DescribeNotificationSubscriptionsRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::DescribeNotificationSubscriptions, request);
        }

        /**
         * An Async wrapper for DescribeNotificationSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeNotificationSubscriptionsRequestT = Model::DescribeNotificationSubscriptionsRequest>
        void DescribeNotificationSubscriptionsAsync(const DescribeNotificationSubscriptionsRequestT& request, const DescribeNotificationSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::DescribeNotificationSubscriptions, request, handler, context);
        }

        /**
         * <p>Describes the permissions of a specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeResourcePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourcePermissionsOutcome DescribeResourcePermissions(const Model::DescribeResourcePermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeResourcePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeResourcePermissionsRequestT = Model::DescribeResourcePermissionsRequest>
        Model::DescribeResourcePermissionsOutcomeCallable DescribeResourcePermissionsCallable(const DescribeResourcePermissionsRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::DescribeResourcePermissions, request);
        }

        /**
         * An Async wrapper for DescribeResourcePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeResourcePermissionsRequestT = Model::DescribeResourcePermissionsRequest>
        void DescribeResourcePermissionsAsync(const DescribeResourcePermissionsRequestT& request, const DescribeResourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::DescribeResourcePermissions, request, handler, context);
        }

        /**
         * <p>Describes the current user's special folders; the <code>RootFolder</code> and
         * the <code>RecycleBin</code>. <code>RootFolder</code> is the root of user's files
         * and folders and <code>RecycleBin</code> is the root of recycled items. This is
         * not a valid action for SigV4 (administrative API) clients.</p> <p>This action
         * requires an authentication token. To get an authentication token, register an
         * application with Amazon WorkDocs. For more information, see <a
         * href="https://docs.aws.amazon.com/workdocs/latest/developerguide/wd-auth-user.html">Authentication
         * and Access Control for User Applications</a> in the <i>Amazon WorkDocs Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeRootFolders">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRootFoldersOutcome DescribeRootFolders(const Model::DescribeRootFoldersRequest& request) const;

        /**
         * A Callable wrapper for DescribeRootFolders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRootFoldersRequestT = Model::DescribeRootFoldersRequest>
        Model::DescribeRootFoldersOutcomeCallable DescribeRootFoldersCallable(const DescribeRootFoldersRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::DescribeRootFolders, request);
        }

        /**
         * An Async wrapper for DescribeRootFolders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRootFoldersRequestT = Model::DescribeRootFoldersRequest>
        void DescribeRootFoldersAsync(const DescribeRootFoldersRequestT& request, const DescribeRootFoldersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::DescribeRootFolders, request, handler, context);
        }

        /**
         * <p>Describes the specified users. You can describe all users or filter the
         * results (for example, by status or organization).</p> <p>By default, Amazon
         * WorkDocs returns the first 24 active or pending users. If there are more
         * results, the response includes a marker that you can use to request the next set
         * of results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUsersOutcome DescribeUsers(const Model::DescribeUsersRequest& request) const;

        /**
         * A Callable wrapper for DescribeUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUsersRequestT = Model::DescribeUsersRequest>
        Model::DescribeUsersOutcomeCallable DescribeUsersCallable(const DescribeUsersRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::DescribeUsers, request);
        }

        /**
         * An Async wrapper for DescribeUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUsersRequestT = Model::DescribeUsersRequest>
        void DescribeUsersAsync(const DescribeUsersRequestT& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::DescribeUsers, request, handler, context);
        }

        /**
         * <p>Retrieves details of the current user for whom the authentication token was
         * generated. This is not a valid action for SigV4 (administrative API)
         * clients.</p> <p>This action requires an authentication token. To get an
         * authentication token, register an application with Amazon WorkDocs. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/workdocs/latest/developerguide/wd-auth-user.html">Authentication
         * and Access Control for User Applications</a> in the <i>Amazon WorkDocs Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetCurrentUser">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCurrentUserOutcome GetCurrentUser(const Model::GetCurrentUserRequest& request) const;

        /**
         * A Callable wrapper for GetCurrentUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCurrentUserRequestT = Model::GetCurrentUserRequest>
        Model::GetCurrentUserOutcomeCallable GetCurrentUserCallable(const GetCurrentUserRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::GetCurrentUser, request);
        }

        /**
         * An Async wrapper for GetCurrentUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCurrentUserRequestT = Model::GetCurrentUserRequest>
        void GetCurrentUserAsync(const GetCurrentUserRequestT& request, const GetCurrentUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::GetCurrentUser, request, handler, context);
        }

        /**
         * <p>Retrieves details of a document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentOutcome GetDocument(const Model::GetDocumentRequest& request) const;

        /**
         * A Callable wrapper for GetDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDocumentRequestT = Model::GetDocumentRequest>
        Model::GetDocumentOutcomeCallable GetDocumentCallable(const GetDocumentRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::GetDocument, request);
        }

        /**
         * An Async wrapper for GetDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDocumentRequestT = Model::GetDocumentRequest>
        void GetDocumentAsync(const GetDocumentRequestT& request, const GetDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::GetDocument, request, handler, context);
        }

        /**
         * <p>Retrieves the path information (the hierarchy from the root folder) for the
         * requested document.</p> <p>By default, Amazon WorkDocs returns a maximum of 100
         * levels upwards from the requested document and only includes the IDs of the
         * parent folders in the path. You can limit the maximum number of levels. You can
         * also request the names of the parent folders.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetDocumentPath">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentPathOutcome GetDocumentPath(const Model::GetDocumentPathRequest& request) const;

        /**
         * A Callable wrapper for GetDocumentPath that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDocumentPathRequestT = Model::GetDocumentPathRequest>
        Model::GetDocumentPathOutcomeCallable GetDocumentPathCallable(const GetDocumentPathRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::GetDocumentPath, request);
        }

        /**
         * An Async wrapper for GetDocumentPath that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDocumentPathRequestT = Model::GetDocumentPathRequest>
        void GetDocumentPathAsync(const GetDocumentPathRequestT& request, const GetDocumentPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::GetDocumentPath, request, handler, context);
        }

        /**
         * <p>Retrieves version metadata for the specified document.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetDocumentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentVersionOutcome GetDocumentVersion(const Model::GetDocumentVersionRequest& request) const;

        /**
         * A Callable wrapper for GetDocumentVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDocumentVersionRequestT = Model::GetDocumentVersionRequest>
        Model::GetDocumentVersionOutcomeCallable GetDocumentVersionCallable(const GetDocumentVersionRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::GetDocumentVersion, request);
        }

        /**
         * An Async wrapper for GetDocumentVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDocumentVersionRequestT = Model::GetDocumentVersionRequest>
        void GetDocumentVersionAsync(const GetDocumentVersionRequestT& request, const GetDocumentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::GetDocumentVersion, request, handler, context);
        }

        /**
         * <p>Retrieves the metadata of the specified folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFolderOutcome GetFolder(const Model::GetFolderRequest& request) const;

        /**
         * A Callable wrapper for GetFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFolderRequestT = Model::GetFolderRequest>
        Model::GetFolderOutcomeCallable GetFolderCallable(const GetFolderRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::GetFolder, request);
        }

        /**
         * An Async wrapper for GetFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFolderRequestT = Model::GetFolderRequest>
        void GetFolderAsync(const GetFolderRequestT& request, const GetFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::GetFolder, request, handler, context);
        }

        /**
         * <p>Retrieves the path information (the hierarchy from the root folder) for the
         * specified folder.</p> <p>By default, Amazon WorkDocs returns a maximum of 100
         * levels upwards from the requested folder and only includes the IDs of the parent
         * folders in the path. You can limit the maximum number of levels. You can also
         * request the parent folder names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetFolderPath">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFolderPathOutcome GetFolderPath(const Model::GetFolderPathRequest& request) const;

        /**
         * A Callable wrapper for GetFolderPath that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFolderPathRequestT = Model::GetFolderPathRequest>
        Model::GetFolderPathOutcomeCallable GetFolderPathCallable(const GetFolderPathRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::GetFolderPath, request);
        }

        /**
         * An Async wrapper for GetFolderPath that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFolderPathRequestT = Model::GetFolderPathRequest>
        void GetFolderPathAsync(const GetFolderPathRequestT& request, const GetFolderPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::GetFolderPath, request, handler, context);
        }

        /**
         * <p>Retrieves a collection of resources, including folders and documents. The
         * only <code>CollectionType</code> supported is
         * <code>SHARED_WITH_ME</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetResources">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcesOutcome GetResources(const Model::GetResourcesRequest& request) const;

        /**
         * A Callable wrapper for GetResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourcesRequestT = Model::GetResourcesRequest>
        Model::GetResourcesOutcomeCallable GetResourcesCallable(const GetResourcesRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::GetResources, request);
        }

        /**
         * An Async wrapper for GetResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourcesRequestT = Model::GetResourcesRequest>
        void GetResourcesAsync(const GetResourcesRequestT& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::GetResources, request, handler, context);
        }

        /**
         * <p>Creates a new document object and version object.</p> <p>The client specifies
         * the parent folder ID and name of the document to upload. The ID is optionally
         * specified when creating a new version of an existing document. This is the first
         * step to upload a document. Next, upload the document to the URL returned from
         * the call, and then call <a>UpdateDocumentVersion</a>.</p> <p>To cancel the
         * document upload, call <a>AbortDocumentVersionUpload</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/InitiateDocumentVersionUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::InitiateDocumentVersionUploadOutcome InitiateDocumentVersionUpload(const Model::InitiateDocumentVersionUploadRequest& request) const;

        /**
         * A Callable wrapper for InitiateDocumentVersionUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InitiateDocumentVersionUploadRequestT = Model::InitiateDocumentVersionUploadRequest>
        Model::InitiateDocumentVersionUploadOutcomeCallable InitiateDocumentVersionUploadCallable(const InitiateDocumentVersionUploadRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::InitiateDocumentVersionUpload, request);
        }

        /**
         * An Async wrapper for InitiateDocumentVersionUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InitiateDocumentVersionUploadRequestT = Model::InitiateDocumentVersionUploadRequest>
        void InitiateDocumentVersionUploadAsync(const InitiateDocumentVersionUploadRequestT& request, const InitiateDocumentVersionUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::InitiateDocumentVersionUpload, request, handler, context);
        }

        /**
         * <p>Removes all the permissions from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/RemoveAllResourcePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAllResourcePermissionsOutcome RemoveAllResourcePermissions(const Model::RemoveAllResourcePermissionsRequest& request) const;

        /**
         * A Callable wrapper for RemoveAllResourcePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveAllResourcePermissionsRequestT = Model::RemoveAllResourcePermissionsRequest>
        Model::RemoveAllResourcePermissionsOutcomeCallable RemoveAllResourcePermissionsCallable(const RemoveAllResourcePermissionsRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::RemoveAllResourcePermissions, request);
        }

        /**
         * An Async wrapper for RemoveAllResourcePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveAllResourcePermissionsRequestT = Model::RemoveAllResourcePermissionsRequest>
        void RemoveAllResourcePermissionsAsync(const RemoveAllResourcePermissionsRequestT& request, const RemoveAllResourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::RemoveAllResourcePermissions, request, handler, context);
        }

        /**
         * <p>Removes the permission for the specified principal from the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/RemoveResourcePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveResourcePermissionOutcome RemoveResourcePermission(const Model::RemoveResourcePermissionRequest& request) const;

        /**
         * A Callable wrapper for RemoveResourcePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveResourcePermissionRequestT = Model::RemoveResourcePermissionRequest>
        Model::RemoveResourcePermissionOutcomeCallable RemoveResourcePermissionCallable(const RemoveResourcePermissionRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::RemoveResourcePermission, request);
        }

        /**
         * An Async wrapper for RemoveResourcePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveResourcePermissionRequestT = Model::RemoveResourcePermissionRequest>
        void RemoveResourcePermissionAsync(const RemoveResourcePermissionRequestT& request, const RemoveResourcePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::RemoveResourcePermission, request, handler, context);
        }

        /**
         * <p>Recovers a deleted version of an Amazon WorkDocs document.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/RestoreDocumentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDocumentVersionsOutcome RestoreDocumentVersions(const Model::RestoreDocumentVersionsRequest& request) const;

        /**
         * A Callable wrapper for RestoreDocumentVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreDocumentVersionsRequestT = Model::RestoreDocumentVersionsRequest>
        Model::RestoreDocumentVersionsOutcomeCallable RestoreDocumentVersionsCallable(const RestoreDocumentVersionsRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::RestoreDocumentVersions, request);
        }

        /**
         * An Async wrapper for RestoreDocumentVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreDocumentVersionsRequestT = Model::RestoreDocumentVersionsRequest>
        void RestoreDocumentVersionsAsync(const RestoreDocumentVersionsRequestT& request, const RestoreDocumentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::RestoreDocumentVersions, request, handler, context);
        }

        /**
         * <p>Searches metadata and the content of folders, documents, document versions,
         * and comments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/SearchResources">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchResourcesOutcome SearchResources(const Model::SearchResourcesRequest& request) const;

        /**
         * A Callable wrapper for SearchResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchResourcesRequestT = Model::SearchResourcesRequest>
        Model::SearchResourcesOutcomeCallable SearchResourcesCallable(const SearchResourcesRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::SearchResources, request);
        }

        /**
         * An Async wrapper for SearchResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchResourcesRequestT = Model::SearchResourcesRequest>
        void SearchResourcesAsync(const SearchResourcesRequestT& request, const SearchResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::SearchResources, request, handler, context);
        }

        /**
         * <p>Updates the specified attributes of a document. The user must have access to
         * both the document and its parent folder, if applicable.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UpdateDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentOutcome UpdateDocument(const Model::UpdateDocumentRequest& request) const;

        /**
         * A Callable wrapper for UpdateDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDocumentRequestT = Model::UpdateDocumentRequest>
        Model::UpdateDocumentOutcomeCallable UpdateDocumentCallable(const UpdateDocumentRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::UpdateDocument, request);
        }

        /**
         * An Async wrapper for UpdateDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDocumentRequestT = Model::UpdateDocumentRequest>
        void UpdateDocumentAsync(const UpdateDocumentRequestT& request, const UpdateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::UpdateDocument, request, handler, context);
        }

        /**
         * <p>Changes the status of the document version to ACTIVE. </p> <p>Amazon WorkDocs
         * also sets its document container to ACTIVE. This is the last step in a document
         * upload, after the client uploads the document to an S3-presigned URL returned by
         * <a>InitiateDocumentVersionUpload</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UpdateDocumentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentVersionOutcome UpdateDocumentVersion(const Model::UpdateDocumentVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateDocumentVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDocumentVersionRequestT = Model::UpdateDocumentVersionRequest>
        Model::UpdateDocumentVersionOutcomeCallable UpdateDocumentVersionCallable(const UpdateDocumentVersionRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::UpdateDocumentVersion, request);
        }

        /**
         * An Async wrapper for UpdateDocumentVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDocumentVersionRequestT = Model::UpdateDocumentVersionRequest>
        void UpdateDocumentVersionAsync(const UpdateDocumentVersionRequestT& request, const UpdateDocumentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::UpdateDocumentVersion, request, handler, context);
        }

        /**
         * <p>Updates the specified attributes of the specified folder. The user must have
         * access to both the folder and its parent folder, if applicable.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UpdateFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFolderOutcome UpdateFolder(const Model::UpdateFolderRequest& request) const;

        /**
         * A Callable wrapper for UpdateFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFolderRequestT = Model::UpdateFolderRequest>
        Model::UpdateFolderOutcomeCallable UpdateFolderCallable(const UpdateFolderRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::UpdateFolder, request);
        }

        /**
         * An Async wrapper for UpdateFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFolderRequestT = Model::UpdateFolderRequest>
        void UpdateFolderAsync(const UpdateFolderRequestT& request, const UpdateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::UpdateFolder, request, handler, context);
        }

        /**
         * <p>Updates the specified attributes of the specified user, and grants or revokes
         * administrative privileges to the Amazon WorkDocs site.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /**
         * A Callable wrapper for UpdateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserRequestT = Model::UpdateUserRequest>
        Model::UpdateUserOutcomeCallable UpdateUserCallable(const UpdateUserRequestT& request) const
        {
            return SubmitCallable(&WorkDocsClient::UpdateUser, request);
        }

        /**
         * An Async wrapper for UpdateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserRequestT = Model::UpdateUserRequest>
        void UpdateUserAsync(const UpdateUserRequestT& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&WorkDocsClient::UpdateUser, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<WorkDocsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<WorkDocsClient>;
      void init(const WorkDocsClientConfiguration& clientConfiguration);

      WorkDocsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<WorkDocsEndpointProviderBase> m_endpointProvider;
  };

} // namespace WorkDocs
} // namespace Aws
