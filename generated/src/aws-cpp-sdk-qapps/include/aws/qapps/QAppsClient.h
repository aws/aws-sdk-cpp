/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qapps/QAppsServiceClientModel.h>

namespace Aws
{
namespace QApps
{
  /**
   * <p>The Amazon Q Apps feature capability within Amazon Q Business allows web
   * experience users to create lightweight, purpose-built AI apps to fulfill
   * specific tasks from within their web experience. For example, users can create a
   * Q App that exclusively generates marketing-related content to improve your
   * marketing team's productivity or a Q App for writing customer emails and
   * creating promotional content using a certain style of voice, tone, and branding.
   * For more information on the capabilities, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/deploy-experience-iam-role.html#q-apps-actions">Amazon
   * Q Apps capabilities</a> in the <i>Amazon Q Business User Guide</i>. </p> <p>For
   * an overview of the Amazon Q App APIs, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_Operations_QApps.html">Overview
   * of Amazon Q Apps API operations</a>.</p> <p>For information about the IAM access
   * control permissions you need to use the Amazon Q Apps API, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/deploy-experience-iam-role.html">
   * IAM role for the Amazon Q Business web experience including Amazon Q Apps</a> in
   * the <i>Amazon Q Business User Guide</i>.</p>
   */
  class AWS_QAPPS_API QAppsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<QAppsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef QAppsClientConfiguration ClientConfigurationType;
      typedef QAppsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QAppsClient(const Aws::QApps::QAppsClientConfiguration& clientConfiguration = Aws::QApps::QAppsClientConfiguration(),
                    std::shared_ptr<QAppsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QAppsClient(const Aws::Auth::AWSCredentials& credentials,
                    std::shared_ptr<QAppsEndpointProviderBase> endpointProvider = nullptr,
                    const Aws::QApps::QAppsClientConfiguration& clientConfiguration = Aws::QApps::QAppsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        QAppsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    std::shared_ptr<QAppsEndpointProviderBase> endpointProvider = nullptr,
                    const Aws::QApps::QAppsClientConfiguration& clientConfiguration = Aws::QApps::QAppsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QAppsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QAppsClient(const Aws::Auth::AWSCredentials& credentials,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        QAppsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~QAppsClient();

        /**
         * <p>Associates a rating or review for a library item with the user submitting the
         * request. This increments the rating count for the specified library
         * item.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/AssociateLibraryItemReview">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateLibraryItemReviewOutcome AssociateLibraryItemReview(const Model::AssociateLibraryItemReviewRequest& request) const;

        /**
         * A Callable wrapper for AssociateLibraryItemReview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateLibraryItemReviewRequestT = Model::AssociateLibraryItemReviewRequest>
        Model::AssociateLibraryItemReviewOutcomeCallable AssociateLibraryItemReviewCallable(const AssociateLibraryItemReviewRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::AssociateLibraryItemReview, request);
        }

        /**
         * An Async wrapper for AssociateLibraryItemReview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateLibraryItemReviewRequestT = Model::AssociateLibraryItemReviewRequest>
        void AssociateLibraryItemReviewAsync(const AssociateLibraryItemReviewRequestT& request, const AssociateLibraryItemReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::AssociateLibraryItemReview, request, handler, context);
        }

        /**
         * <p>This operation creates a link between the user's identity calling the
         * operation and a specific Q App. This is useful to mark the Q App as a
         * <i>favorite</i> for the user if the user doesn't own the Amazon Q App so they
         * can still run it and see it in their inventory of Q Apps.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/AssociateQAppWithUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateQAppWithUserOutcome AssociateQAppWithUser(const Model::AssociateQAppWithUserRequest& request) const;

        /**
         * A Callable wrapper for AssociateQAppWithUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateQAppWithUserRequestT = Model::AssociateQAppWithUserRequest>
        Model::AssociateQAppWithUserOutcomeCallable AssociateQAppWithUserCallable(const AssociateQAppWithUserRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::AssociateQAppWithUser, request);
        }

        /**
         * An Async wrapper for AssociateQAppWithUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateQAppWithUserRequestT = Model::AssociateQAppWithUserRequest>
        void AssociateQAppWithUserAsync(const AssociateQAppWithUserRequestT& request, const AssociateQAppWithUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::AssociateQAppWithUser, request, handler, context);
        }

        /**
         * <p>Creates Categories for the Amazon Q Business application environment
         * instance. Web experience users use Categories to tag and filter library items.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/qapps-custom-labels.html">Custom
         * labels for Amazon Q Apps</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/BatchCreateCategory">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateCategoryOutcome BatchCreateCategory(const Model::BatchCreateCategoryRequest& request) const;

        /**
         * A Callable wrapper for BatchCreateCategory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchCreateCategoryRequestT = Model::BatchCreateCategoryRequest>
        Model::BatchCreateCategoryOutcomeCallable BatchCreateCategoryCallable(const BatchCreateCategoryRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::BatchCreateCategory, request);
        }

        /**
         * An Async wrapper for BatchCreateCategory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchCreateCategoryRequestT = Model::BatchCreateCategoryRequest>
        void BatchCreateCategoryAsync(const BatchCreateCategoryRequestT& request, const BatchCreateCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::BatchCreateCategory, request, handler, context);
        }

        /**
         * <p>Deletes Categories for the Amazon Q Business application environment
         * instance. Web experience users use Categories to tag and filter library items.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/qapps-custom-labels.html">Custom
         * labels for Amazon Q Apps</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/BatchDeleteCategory">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteCategoryOutcome BatchDeleteCategory(const Model::BatchDeleteCategoryRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteCategory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteCategoryRequestT = Model::BatchDeleteCategoryRequest>
        Model::BatchDeleteCategoryOutcomeCallable BatchDeleteCategoryCallable(const BatchDeleteCategoryRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::BatchDeleteCategory, request);
        }

        /**
         * An Async wrapper for BatchDeleteCategory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteCategoryRequestT = Model::BatchDeleteCategoryRequest>
        void BatchDeleteCategoryAsync(const BatchDeleteCategoryRequestT& request, const BatchDeleteCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::BatchDeleteCategory, request, handler, context);
        }

        /**
         * <p>Updates Categories for the Amazon Q Business application environment
         * instance. Web experience users use Categories to tag and filter library items.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/qapps-custom-labels.html">Custom
         * labels for Amazon Q Apps</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/BatchUpdateCategory">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateCategoryOutcome BatchUpdateCategory(const Model::BatchUpdateCategoryRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateCategory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpdateCategoryRequestT = Model::BatchUpdateCategoryRequest>
        Model::BatchUpdateCategoryOutcomeCallable BatchUpdateCategoryCallable(const BatchUpdateCategoryRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::BatchUpdateCategory, request);
        }

        /**
         * An Async wrapper for BatchUpdateCategory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpdateCategoryRequestT = Model::BatchUpdateCategoryRequest>
        void BatchUpdateCategoryAsync(const BatchUpdateCategoryRequestT& request, const BatchUpdateCategoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::BatchUpdateCategory, request, handler, context);
        }

        /**
         * <p>Creates a new library item for an Amazon Q App, allowing it to be discovered
         * and used by other allowed users. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/CreateLibraryItem">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLibraryItemOutcome CreateLibraryItem(const Model::CreateLibraryItemRequest& request) const;

        /**
         * A Callable wrapper for CreateLibraryItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLibraryItemRequestT = Model::CreateLibraryItemRequest>
        Model::CreateLibraryItemOutcomeCallable CreateLibraryItemCallable(const CreateLibraryItemRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::CreateLibraryItem, request);
        }

        /**
         * An Async wrapper for CreateLibraryItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLibraryItemRequestT = Model::CreateLibraryItemRequest>
        void CreateLibraryItemAsync(const CreateLibraryItemRequestT& request, const CreateLibraryItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::CreateLibraryItem, request, handler, context);
        }

        /**
         * <p>Creates a presigned URL for an S3 POST operation to upload a file. You can
         * use this URL to set a default file for a <code>FileUploadCard</code> in a Q App
         * definition or to provide a file for a single Q App run. The <code>scope</code>
         * parameter determines how the file will be used, either at the app definition
         * level or the app session level.</p>  <p>The IAM permissions are derived
         * from the <code>qapps:ImportDocument</code> action. For more information on the
         * IAM policy for Amazon Q Apps, see <a
         * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/deploy-q-apps-iam-permissions.html">IAM
         * permissions for using Amazon Q Apps</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/CreatePresignedUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePresignedUrlOutcome CreatePresignedUrl(const Model::CreatePresignedUrlRequest& request) const;

        /**
         * A Callable wrapper for CreatePresignedUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePresignedUrlRequestT = Model::CreatePresignedUrlRequest>
        Model::CreatePresignedUrlOutcomeCallable CreatePresignedUrlCallable(const CreatePresignedUrlRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::CreatePresignedUrl, request);
        }

        /**
         * An Async wrapper for CreatePresignedUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePresignedUrlRequestT = Model::CreatePresignedUrlRequest>
        void CreatePresignedUrlAsync(const CreatePresignedUrlRequestT& request, const CreatePresignedUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::CreatePresignedUrl, request, handler, context);
        }

        /**
         * <p>Creates a new Amazon Q App based on the provided definition. The Q App
         * definition specifies the cards and flow of the Q App. This operation also
         * calculates the dependencies between the cards by inspecting the references in
         * the prompts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/CreateQApp">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQAppOutcome CreateQApp(const Model::CreateQAppRequest& request) const;

        /**
         * A Callable wrapper for CreateQApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateQAppRequestT = Model::CreateQAppRequest>
        Model::CreateQAppOutcomeCallable CreateQAppCallable(const CreateQAppRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::CreateQApp, request);
        }

        /**
         * An Async wrapper for CreateQApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateQAppRequestT = Model::CreateQAppRequest>
        void CreateQAppAsync(const CreateQAppRequestT& request, const CreateQAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::CreateQApp, request, handler, context);
        }

        /**
         * <p>Deletes a library item for an Amazon Q App, removing it from the library so
         * it can no longer be discovered or used by other users.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/DeleteLibraryItem">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLibraryItemOutcome DeleteLibraryItem(const Model::DeleteLibraryItemRequest& request) const;

        /**
         * A Callable wrapper for DeleteLibraryItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLibraryItemRequestT = Model::DeleteLibraryItemRequest>
        Model::DeleteLibraryItemOutcomeCallable DeleteLibraryItemCallable(const DeleteLibraryItemRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::DeleteLibraryItem, request);
        }

        /**
         * An Async wrapper for DeleteLibraryItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLibraryItemRequestT = Model::DeleteLibraryItemRequest>
        void DeleteLibraryItemAsync(const DeleteLibraryItemRequestT& request, const DeleteLibraryItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::DeleteLibraryItem, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Q App owned by the user. If the Q App was previously
         * published to the library, it is also removed from the library.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/DeleteQApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQAppOutcome DeleteQApp(const Model::DeleteQAppRequest& request) const;

        /**
         * A Callable wrapper for DeleteQApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteQAppRequestT = Model::DeleteQAppRequest>
        Model::DeleteQAppOutcomeCallable DeleteQAppCallable(const DeleteQAppRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::DeleteQApp, request);
        }

        /**
         * An Async wrapper for DeleteQApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteQAppRequestT = Model::DeleteQAppRequest>
        void DeleteQAppAsync(const DeleteQAppRequestT& request, const DeleteQAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::DeleteQApp, request, handler, context);
        }

        /**
         * <p> Describes read permissions for a Amazon Q App in Amazon Q Business
         * application environment instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/DescribeQAppPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeQAppPermissionsOutcome DescribeQAppPermissions(const Model::DescribeQAppPermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeQAppPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeQAppPermissionsRequestT = Model::DescribeQAppPermissionsRequest>
        Model::DescribeQAppPermissionsOutcomeCallable DescribeQAppPermissionsCallable(const DescribeQAppPermissionsRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::DescribeQAppPermissions, request);
        }

        /**
         * An Async wrapper for DescribeQAppPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeQAppPermissionsRequestT = Model::DescribeQAppPermissionsRequest>
        void DescribeQAppPermissionsAsync(const DescribeQAppPermissionsRequestT& request, const DescribeQAppPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::DescribeQAppPermissions, request, handler, context);
        }

        /**
         * <p>Removes a rating or review previously submitted by the user for a library
         * item.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/DisassociateLibraryItemReview">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateLibraryItemReviewOutcome DisassociateLibraryItemReview(const Model::DisassociateLibraryItemReviewRequest& request) const;

        /**
         * A Callable wrapper for DisassociateLibraryItemReview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateLibraryItemReviewRequestT = Model::DisassociateLibraryItemReviewRequest>
        Model::DisassociateLibraryItemReviewOutcomeCallable DisassociateLibraryItemReviewCallable(const DisassociateLibraryItemReviewRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::DisassociateLibraryItemReview, request);
        }

        /**
         * An Async wrapper for DisassociateLibraryItemReview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateLibraryItemReviewRequestT = Model::DisassociateLibraryItemReviewRequest>
        void DisassociateLibraryItemReviewAsync(const DisassociateLibraryItemReviewRequestT& request, const DisassociateLibraryItemReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::DisassociateLibraryItemReview, request, handler, context);
        }

        /**
         * <p>Disassociates a Q App from a user removing the user's access to run the Q
         * App.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/DisassociateQAppFromUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateQAppFromUserOutcome DisassociateQAppFromUser(const Model::DisassociateQAppFromUserRequest& request) const;

        /**
         * A Callable wrapper for DisassociateQAppFromUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateQAppFromUserRequestT = Model::DisassociateQAppFromUserRequest>
        Model::DisassociateQAppFromUserOutcomeCallable DisassociateQAppFromUserCallable(const DisassociateQAppFromUserRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::DisassociateQAppFromUser, request);
        }

        /**
         * An Async wrapper for DisassociateQAppFromUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateQAppFromUserRequestT = Model::DisassociateQAppFromUserRequest>
        void DisassociateQAppFromUserAsync(const DisassociateQAppFromUserRequestT& request, const DisassociateQAppFromUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::DisassociateQAppFromUser, request, handler, context);
        }

        /**
         * <p>Exports the collected data of a Q App data collection session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/ExportQAppSessionData">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportQAppSessionDataOutcome ExportQAppSessionData(const Model::ExportQAppSessionDataRequest& request) const;

        /**
         * A Callable wrapper for ExportQAppSessionData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportQAppSessionDataRequestT = Model::ExportQAppSessionDataRequest>
        Model::ExportQAppSessionDataOutcomeCallable ExportQAppSessionDataCallable(const ExportQAppSessionDataRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::ExportQAppSessionData, request);
        }

        /**
         * An Async wrapper for ExportQAppSessionData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportQAppSessionDataRequestT = Model::ExportQAppSessionDataRequest>
        void ExportQAppSessionDataAsync(const ExportQAppSessionDataRequestT& request, const ExportQAppSessionDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::ExportQAppSessionData, request, handler, context);
        }

        /**
         * <p>Retrieves details about a library item for an Amazon Q App, including its
         * metadata, categories, ratings, and usage statistics.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/GetLibraryItem">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLibraryItemOutcome GetLibraryItem(const Model::GetLibraryItemRequest& request) const;

        /**
         * A Callable wrapper for GetLibraryItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLibraryItemRequestT = Model::GetLibraryItemRequest>
        Model::GetLibraryItemOutcomeCallable GetLibraryItemCallable(const GetLibraryItemRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::GetLibraryItem, request);
        }

        /**
         * An Async wrapper for GetLibraryItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLibraryItemRequestT = Model::GetLibraryItemRequest>
        void GetLibraryItemAsync(const GetLibraryItemRequestT& request, const GetLibraryItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::GetLibraryItem, request, handler, context);
        }

        /**
         * <p>Retrieves the full details of an Q App, including its definition specifying
         * the cards and flow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/GetQApp">AWS API
         * Reference</a></p>
         */
        virtual Model::GetQAppOutcome GetQApp(const Model::GetQAppRequest& request) const;

        /**
         * A Callable wrapper for GetQApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQAppRequestT = Model::GetQAppRequest>
        Model::GetQAppOutcomeCallable GetQAppCallable(const GetQAppRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::GetQApp, request);
        }

        /**
         * An Async wrapper for GetQApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQAppRequestT = Model::GetQAppRequest>
        void GetQAppAsync(const GetQAppRequestT& request, const GetQAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::GetQApp, request, handler, context);
        }

        /**
         * <p>Retrieves the current state and results for an active session of an Amazon Q
         * App.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/GetQAppSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQAppSessionOutcome GetQAppSession(const Model::GetQAppSessionRequest& request) const;

        /**
         * A Callable wrapper for GetQAppSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQAppSessionRequestT = Model::GetQAppSessionRequest>
        Model::GetQAppSessionOutcomeCallable GetQAppSessionCallable(const GetQAppSessionRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::GetQAppSession, request);
        }

        /**
         * An Async wrapper for GetQAppSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQAppSessionRequestT = Model::GetQAppSessionRequest>
        void GetQAppSessionAsync(const GetQAppSessionRequestT& request, const GetQAppSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::GetQAppSession, request, handler, context);
        }

        /**
         * <p>Retrieves the current configuration of a Q App session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/GetQAppSessionMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQAppSessionMetadataOutcome GetQAppSessionMetadata(const Model::GetQAppSessionMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetQAppSessionMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQAppSessionMetadataRequestT = Model::GetQAppSessionMetadataRequest>
        Model::GetQAppSessionMetadataOutcomeCallable GetQAppSessionMetadataCallable(const GetQAppSessionMetadataRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::GetQAppSessionMetadata, request);
        }

        /**
         * An Async wrapper for GetQAppSessionMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQAppSessionMetadataRequestT = Model::GetQAppSessionMetadataRequest>
        void GetQAppSessionMetadataAsync(const GetQAppSessionMetadataRequestT& request, const GetQAppSessionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::GetQAppSessionMetadata, request, handler, context);
        }

        /**
         * <p>Uploads a file that can then be used either as a default in a
         * <code>FileUploadCard</code> from Q App definition or as a file that is used
         * inside a single Q App run. The purpose of the document is determined by a scope
         * parameter that indicates whether it is at the app definition level or at the app
         * session level.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/ImportDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportDocumentOutcome ImportDocument(const Model::ImportDocumentRequest& request) const;

        /**
         * A Callable wrapper for ImportDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportDocumentRequestT = Model::ImportDocumentRequest>
        Model::ImportDocumentOutcomeCallable ImportDocumentCallable(const ImportDocumentRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::ImportDocument, request);
        }

        /**
         * An Async wrapper for ImportDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportDocumentRequestT = Model::ImportDocumentRequest>
        void ImportDocumentAsync(const ImportDocumentRequestT& request, const ImportDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::ImportDocument, request, handler, context);
        }

        /**
         * <p>Lists the categories of a Amazon Q Business application environment instance.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/qapps-custom-labels.html">Custom
         * labels for Amazon Q Apps</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/ListCategories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCategoriesOutcome ListCategories(const Model::ListCategoriesRequest& request) const;

        /**
         * A Callable wrapper for ListCategories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCategoriesRequestT = Model::ListCategoriesRequest>
        Model::ListCategoriesOutcomeCallable ListCategoriesCallable(const ListCategoriesRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::ListCategories, request);
        }

        /**
         * An Async wrapper for ListCategories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCategoriesRequestT = Model::ListCategoriesRequest>
        void ListCategoriesAsync(const ListCategoriesRequestT& request, const ListCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::ListCategories, request, handler, context);
        }

        /**
         * <p>Lists the library items for Amazon Q Apps that are published and available
         * for users in your Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/ListLibraryItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLibraryItemsOutcome ListLibraryItems(const Model::ListLibraryItemsRequest& request) const;

        /**
         * A Callable wrapper for ListLibraryItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLibraryItemsRequestT = Model::ListLibraryItemsRequest>
        Model::ListLibraryItemsOutcomeCallable ListLibraryItemsCallable(const ListLibraryItemsRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::ListLibraryItems, request);
        }

        /**
         * An Async wrapper for ListLibraryItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLibraryItemsRequestT = Model::ListLibraryItemsRequest>
        void ListLibraryItemsAsync(const ListLibraryItemsRequestT& request, const ListLibraryItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::ListLibraryItems, request, handler, context);
        }

        /**
         * <p>Lists the collected data of a Q App data collection session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/ListQAppSessionData">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQAppSessionDataOutcome ListQAppSessionData(const Model::ListQAppSessionDataRequest& request) const;

        /**
         * A Callable wrapper for ListQAppSessionData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListQAppSessionDataRequestT = Model::ListQAppSessionDataRequest>
        Model::ListQAppSessionDataOutcomeCallable ListQAppSessionDataCallable(const ListQAppSessionDataRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::ListQAppSessionData, request);
        }

        /**
         * An Async wrapper for ListQAppSessionData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQAppSessionDataRequestT = Model::ListQAppSessionDataRequest>
        void ListQAppSessionDataAsync(const ListQAppSessionDataRequestT& request, const ListQAppSessionDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::ListQAppSessionData, request, handler, context);
        }

        /**
         * <p>Lists the Amazon Q Apps owned by or associated with the user either because
         * they created it or because they used it from the library in the past. The user
         * identity is extracted from the credentials used to invoke this
         * operation..</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/ListQApps">AWS API
         * Reference</a></p>
         */
        virtual Model::ListQAppsOutcome ListQApps(const Model::ListQAppsRequest& request) const;

        /**
         * A Callable wrapper for ListQApps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListQAppsRequestT = Model::ListQAppsRequest>
        Model::ListQAppsOutcomeCallable ListQAppsCallable(const ListQAppsRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::ListQApps, request);
        }

        /**
         * An Async wrapper for ListQApps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQAppsRequestT = Model::ListQAppsRequest>
        void ListQAppsAsync(const ListQAppsRequestT& request, const ListQAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::ListQApps, request, handler, context);
        }

        /**
         * <p>Lists the tags associated with an Amazon Q Apps resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Generates an Amazon Q App definition based on either a conversation or a
         * problem statement provided as input.The resulting app definition can be used to
         * call <code>CreateQApp</code>. This API doesn't create Amazon Q Apps
         * directly.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/PredictQApp">AWS
         * API Reference</a></p>
         */
        virtual Model::PredictQAppOutcome PredictQApp(const Model::PredictQAppRequest& request) const;

        /**
         * A Callable wrapper for PredictQApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PredictQAppRequestT = Model::PredictQAppRequest>
        Model::PredictQAppOutcomeCallable PredictQAppCallable(const PredictQAppRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::PredictQApp, request);
        }

        /**
         * An Async wrapper for PredictQApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PredictQAppRequestT = Model::PredictQAppRequest>
        void PredictQAppAsync(const PredictQAppRequestT& request, const PredictQAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::PredictQApp, request, handler, context);
        }

        /**
         * <p>Starts a new session for an Amazon Q App, allowing inputs to be provided and
         * the app to be run.</p>  <p>Each Q App session will be condensed into a
         * single conversation in the web experience.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/StartQAppSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StartQAppSessionOutcome StartQAppSession(const Model::StartQAppSessionRequest& request) const;

        /**
         * A Callable wrapper for StartQAppSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartQAppSessionRequestT = Model::StartQAppSessionRequest>
        Model::StartQAppSessionOutcomeCallable StartQAppSessionCallable(const StartQAppSessionRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::StartQAppSession, request);
        }

        /**
         * An Async wrapper for StartQAppSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartQAppSessionRequestT = Model::StartQAppSessionRequest>
        void StartQAppSessionAsync(const StartQAppSessionRequestT& request, const StartQAppSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::StartQAppSession, request, handler, context);
        }

        /**
         * <p>Stops an active session for an Amazon Q App.This deletes all data related to
         * the session and makes it invalid for future uses. The results of the session
         * will be persisted as part of the conversation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/StopQAppSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StopQAppSessionOutcome StopQAppSession(const Model::StopQAppSessionRequest& request) const;

        /**
         * A Callable wrapper for StopQAppSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopQAppSessionRequestT = Model::StopQAppSessionRequest>
        Model::StopQAppSessionOutcomeCallable StopQAppSessionCallable(const StopQAppSessionRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::StopQAppSession, request);
        }

        /**
         * An Async wrapper for StopQAppSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopQAppSessionRequestT = Model::StopQAppSessionRequest>
        void StopQAppSessionAsync(const StopQAppSessionRequestT& request, const StopQAppSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::StopQAppSession, request, handler, context);
        }

        /**
         * <p>Associates tags with an Amazon Q Apps resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Disassociates tags from an Amazon Q Apps resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the library item for an Amazon Q App.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/UpdateLibraryItem">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLibraryItemOutcome UpdateLibraryItem(const Model::UpdateLibraryItemRequest& request) const;

        /**
         * A Callable wrapper for UpdateLibraryItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLibraryItemRequestT = Model::UpdateLibraryItemRequest>
        Model::UpdateLibraryItemOutcomeCallable UpdateLibraryItemCallable(const UpdateLibraryItemRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::UpdateLibraryItem, request);
        }

        /**
         * An Async wrapper for UpdateLibraryItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLibraryItemRequestT = Model::UpdateLibraryItemRequest>
        void UpdateLibraryItemAsync(const UpdateLibraryItemRequestT& request, const UpdateLibraryItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::UpdateLibraryItem, request, handler, context);
        }

        /**
         * <p>Updates the verification status of a library item for an Amazon Q
         * App.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/UpdateLibraryItemMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLibraryItemMetadataOutcome UpdateLibraryItemMetadata(const Model::UpdateLibraryItemMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateLibraryItemMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLibraryItemMetadataRequestT = Model::UpdateLibraryItemMetadataRequest>
        Model::UpdateLibraryItemMetadataOutcomeCallable UpdateLibraryItemMetadataCallable(const UpdateLibraryItemMetadataRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::UpdateLibraryItemMetadata, request);
        }

        /**
         * An Async wrapper for UpdateLibraryItemMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLibraryItemMetadataRequestT = Model::UpdateLibraryItemMetadataRequest>
        void UpdateLibraryItemMetadataAsync(const UpdateLibraryItemMetadataRequestT& request, const UpdateLibraryItemMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::UpdateLibraryItemMetadata, request, handler, context);
        }

        /**
         * <p>Updates an existing Amazon Q App, allowing modifications to its title,
         * description, and definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/UpdateQApp">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQAppOutcome UpdateQApp(const Model::UpdateQAppRequest& request) const;

        /**
         * A Callable wrapper for UpdateQApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQAppRequestT = Model::UpdateQAppRequest>
        Model::UpdateQAppOutcomeCallable UpdateQAppCallable(const UpdateQAppRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::UpdateQApp, request);
        }

        /**
         * An Async wrapper for UpdateQApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQAppRequestT = Model::UpdateQAppRequest>
        void UpdateQAppAsync(const UpdateQAppRequestT& request, const UpdateQAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::UpdateQApp, request, handler, context);
        }

        /**
         * <p>Updates read permissions for a Amazon Q App in Amazon Q Business application
         * environment instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/UpdateQAppPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQAppPermissionsOutcome UpdateQAppPermissions(const Model::UpdateQAppPermissionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateQAppPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQAppPermissionsRequestT = Model::UpdateQAppPermissionsRequest>
        Model::UpdateQAppPermissionsOutcomeCallable UpdateQAppPermissionsCallable(const UpdateQAppPermissionsRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::UpdateQAppPermissions, request);
        }

        /**
         * An Async wrapper for UpdateQAppPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQAppPermissionsRequestT = Model::UpdateQAppPermissionsRequest>
        void UpdateQAppPermissionsAsync(const UpdateQAppPermissionsRequestT& request, const UpdateQAppPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::UpdateQAppPermissions, request, handler, context);
        }

        /**
         * <p>Updates the session for a given Q App <code>sessionId</code>. This is only
         * valid when at least one card of the session is in the <code>WAITING</code>
         * state. Data for each <code>WAITING</code> card can be provided as input. If
         * inputs are not provided, the call will be accepted but session will not move
         * forward. Inputs for cards that are not in the <code>WAITING</code> status will
         * be ignored.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/UpdateQAppSession">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQAppSessionOutcome UpdateQAppSession(const Model::UpdateQAppSessionRequest& request) const;

        /**
         * A Callable wrapper for UpdateQAppSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQAppSessionRequestT = Model::UpdateQAppSessionRequest>
        Model::UpdateQAppSessionOutcomeCallable UpdateQAppSessionCallable(const UpdateQAppSessionRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::UpdateQAppSession, request);
        }

        /**
         * An Async wrapper for UpdateQAppSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQAppSessionRequestT = Model::UpdateQAppSessionRequest>
        void UpdateQAppSessionAsync(const UpdateQAppSessionRequestT& request, const UpdateQAppSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::UpdateQAppSession, request, handler, context);
        }

        /**
         * <p>Updates the configuration metadata of a session for a given Q App
         * <code>sessionId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/UpdateQAppSessionMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQAppSessionMetadataOutcome UpdateQAppSessionMetadata(const Model::UpdateQAppSessionMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateQAppSessionMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQAppSessionMetadataRequestT = Model::UpdateQAppSessionMetadataRequest>
        Model::UpdateQAppSessionMetadataOutcomeCallable UpdateQAppSessionMetadataCallable(const UpdateQAppSessionMetadataRequestT& request) const
        {
            return SubmitCallable(&QAppsClient::UpdateQAppSessionMetadata, request);
        }

        /**
         * An Async wrapper for UpdateQAppSessionMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQAppSessionMetadataRequestT = Model::UpdateQAppSessionMetadataRequest>
        void UpdateQAppSessionMetadataAsync(const UpdateQAppSessionMetadataRequestT& request, const UpdateQAppSessionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QAppsClient::UpdateQAppSessionMetadata, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<QAppsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<QAppsClient>;
      void init(const QAppsClientConfiguration& clientConfiguration);

      QAppsClientConfiguration m_clientConfiguration;
      std::shared_ptr<QAppsEndpointProviderBase> m_endpointProvider;
  };

} // namespace QApps
} // namespace Aws
