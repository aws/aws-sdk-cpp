/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qbusiness/QBusinessServiceClientModel.h>

namespace Aws
{
namespace QBusiness
{
  /**
   * <p>This is the <i>Amazon Q Business</i> API Reference. Amazon Q Business is a
   * fully managed, generative-AI powered enterprise chat assistant that you can
   * deploy within your organization. Amazon Q Business enhances employee
   * productivity by supporting key tasks such as question-answering, knowledge
   * discovery, writing email messages, summarizing text, drafting document outlines,
   * and brainstorming ideas. Users ask questions of Amazon Q Business and get
   * answers that are presented in a conversational manner. For an introduction to
   * the service, see the <a
   * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/what-is.html">
   * <i>Amazon Q Business User Guide</i> </a>.</p> <p>For an overview of the Amazon Q
   * Business APIs, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/api-ref.html#api-overview">Overview
   * of Amazon Q Business API operations</a>.</p> <p>For information about the IAM
   * access control permissions you need to use this API, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/iam-roles.html">IAM
   * roles for Amazon Q Business</a> in the <i>Amazon Q Business User Guide</i>.</p>
   * <p>The following resources provide additional information about using the Amazon
   * Q Business API:</p> <ul> <li> <p> <i> <a
   * href="https://docs.aws.amazon.com/amazonq/latest/business-use-dg/setting-up.html">Setting
   * up for Amazon Q Business</a> </i> </p> </li> <li> <p> <i> <a
   * href="https://awscli.amazonaws.com/v2/documentation/api/latest/reference/qbusiness/index.html">Amazon
   * Q Business CLI Reference</a> </i> </p> </li> <li> <p> <i> <a
   * href="https://docs.aws.amazon.com/general/latest/gr/amazonq.html">Amazon Web
   * Services General Reference</a> </i> </p> </li> </ul>
   */
  class AWS_QBUSINESS_API QBusinessClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<QBusinessClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef QBusinessClientConfiguration ClientConfigurationType;
      typedef QBusinessEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QBusinessClient(const Aws::QBusiness::QBusinessClientConfiguration& clientConfiguration = Aws::QBusiness::QBusinessClientConfiguration(),
                        std::shared_ptr<QBusinessEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QBusinessClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<QBusinessEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::QBusiness::QBusinessClientConfiguration& clientConfiguration = Aws::QBusiness::QBusinessClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        QBusinessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<QBusinessEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::QBusiness::QBusinessClientConfiguration& clientConfiguration = Aws::QBusiness::QBusinessClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QBusinessClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QBusinessClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        QBusinessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~QBusinessClient();

        /**
         * <p>Adds or updates a permission policy for a Amazon Q Business application,
         * allowing cross-account access for an ISV. This operation creates a new policy
         * statement for the specified Amazon Q Business application. The policy statement
         * defines the IAM actions that the ISV is allowed to perform on the Amazon Q
         * Business application's resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/AssociatePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePermissionOutcome AssociatePermission(const Model::AssociatePermissionRequest& request) const;

        /**
         * A Callable wrapper for AssociatePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociatePermissionRequestT = Model::AssociatePermissionRequest>
        Model::AssociatePermissionOutcomeCallable AssociatePermissionCallable(const AssociatePermissionRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::AssociatePermission, request);
        }

        /**
         * An Async wrapper for AssociatePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociatePermissionRequestT = Model::AssociatePermissionRequest>
        void AssociatePermissionAsync(const AssociatePermissionRequestT& request, const AssociatePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::AssociatePermission, request, handler, context);
        }

        /**
         * <p>Asynchronously deletes one or more documents added using the
         * <code>BatchPutDocument</code> API from an Amazon Q Business index.</p> <p>You
         * can see the progress of the deletion, and any error messages related to the
         * process, by using CloudWatch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/BatchDeleteDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteDocumentOutcome BatchDeleteDocument(const Model::BatchDeleteDocumentRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteDocumentRequestT = Model::BatchDeleteDocumentRequest>
        Model::BatchDeleteDocumentOutcomeCallable BatchDeleteDocumentCallable(const BatchDeleteDocumentRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::BatchDeleteDocument, request);
        }

        /**
         * An Async wrapper for BatchDeleteDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteDocumentRequestT = Model::BatchDeleteDocumentRequest>
        void BatchDeleteDocumentAsync(const BatchDeleteDocumentRequestT& request, const BatchDeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::BatchDeleteDocument, request, handler, context);
        }

        /**
         * <p>Adds one or more documents to an Amazon Q Business index.</p> <p>You use this
         * API to:</p> <ul> <li> <p>ingest your structured and unstructured documents and
         * documents stored in an Amazon S3 bucket into an Amazon Q Business index.</p>
         * </li> <li> <p>add custom attributes to documents in an Amazon Q Business
         * index.</p> </li> <li> <p>attach an access control list to the documents added to
         * an Amazon Q Business index.</p> </li> </ul> <p>You can see the progress of the
         * deletion, and any error messages related to the process, by using
         * CloudWatch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/BatchPutDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutDocumentOutcome BatchPutDocument(const Model::BatchPutDocumentRequest& request) const;

        /**
         * A Callable wrapper for BatchPutDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchPutDocumentRequestT = Model::BatchPutDocumentRequest>
        Model::BatchPutDocumentOutcomeCallable BatchPutDocumentCallable(const BatchPutDocumentRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::BatchPutDocument, request);
        }

        /**
         * An Async wrapper for BatchPutDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchPutDocumentRequestT = Model::BatchPutDocumentRequest>
        void BatchPutDocumentAsync(const BatchPutDocumentRequestT& request, const BatchPutDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::BatchPutDocument, request, handler, context);
        }

        /**
         * <p>Unsubscribes a user or a group from their pricing tier in an Amazon Q
         * Business application. An unsubscribed user or group loses all Amazon Q Business
         * feature access at the start of next month. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/CancelSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSubscriptionOutcome CancelSubscription(const Model::CancelSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for CancelSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelSubscriptionRequestT = Model::CancelSubscriptionRequest>
        Model::CancelSubscriptionOutcomeCallable CancelSubscriptionCallable(const CancelSubscriptionRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::CancelSubscription, request);
        }

        /**
         * An Async wrapper for CancelSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelSubscriptionRequestT = Model::CancelSubscriptionRequest>
        void CancelSubscriptionAsync(const CancelSubscriptionRequestT& request, const CancelSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::CancelSubscription, request, handler, context);
        }

        /**
         * <p>Starts or continues a streaming Amazon Q Business conversation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/Chat">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor.
         * The streamReadyHandler is triggered when the stream is ready to be written to.
         * The handler is triggered when the request is finished.
         */
        virtual void ChatAsync(Model::ChatRequest& request,
                const ChatStreamReadyHandler& streamReadyHandler,
                const ChatResponseReceivedHandler& handler,
                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& handlerContext = nullptr) const;

        /**
         * <p>Starts or continues a non-streaming Amazon Q Business
         * conversation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ChatSync">AWS
         * API Reference</a></p>
         */
        virtual Model::ChatSyncOutcome ChatSync(const Model::ChatSyncRequest& request) const;

        /**
         * A Callable wrapper for ChatSync that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ChatSyncRequestT = Model::ChatSyncRequest>
        Model::ChatSyncOutcomeCallable ChatSyncCallable(const ChatSyncRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::ChatSync, request);
        }

        /**
         * An Async wrapper for ChatSync that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ChatSyncRequestT = Model::ChatSyncRequest>
        void ChatSyncAsync(const ChatSyncRequestT& request, const ChatSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::ChatSync, request, handler, context);
        }

        /**
         * <p>Verifies if a user has access permissions for a specified document and
         * returns the actual ACL attached to the document. Resolves user access on the
         * document via user aliases and groups when verifying user access.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/CheckDocumentAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckDocumentAccessOutcome CheckDocumentAccess(const Model::CheckDocumentAccessRequest& request) const;

        /**
         * A Callable wrapper for CheckDocumentAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CheckDocumentAccessRequestT = Model::CheckDocumentAccessRequest>
        Model::CheckDocumentAccessOutcomeCallable CheckDocumentAccessCallable(const CheckDocumentAccessRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::CheckDocumentAccess, request);
        }

        /**
         * An Async wrapper for CheckDocumentAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CheckDocumentAccessRequestT = Model::CheckDocumentAccessRequest>
        void CheckDocumentAccessAsync(const CheckDocumentAccessRequestT& request, const CheckDocumentAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::CheckDocumentAccess, request, handler, context);
        }

        /**
         * <p>Creates a unique URL for anonymous Amazon Q Business web experience. This URL
         * can only be used once and must be used within 5 minutes after it's
         * generated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/CreateAnonymousWebExperienceUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAnonymousWebExperienceUrlOutcome CreateAnonymousWebExperienceUrl(const Model::CreateAnonymousWebExperienceUrlRequest& request) const;

        /**
         * A Callable wrapper for CreateAnonymousWebExperienceUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAnonymousWebExperienceUrlRequestT = Model::CreateAnonymousWebExperienceUrlRequest>
        Model::CreateAnonymousWebExperienceUrlOutcomeCallable CreateAnonymousWebExperienceUrlCallable(const CreateAnonymousWebExperienceUrlRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::CreateAnonymousWebExperienceUrl, request);
        }

        /**
         * An Async wrapper for CreateAnonymousWebExperienceUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAnonymousWebExperienceUrlRequestT = Model::CreateAnonymousWebExperienceUrlRequest>
        void CreateAnonymousWebExperienceUrlAsync(const CreateAnonymousWebExperienceUrlRequestT& request, const CreateAnonymousWebExperienceUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::CreateAnonymousWebExperienceUrl, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Q Business application.</p>  <p>There are new tiers
         * for Amazon Q Business. Not all features in Amazon Q Business Pro are also
         * available in Amazon Q Business Lite. For information on what's included in
         * Amazon Q Business Lite and what's included in Amazon Q Business Pro, see <a
         * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/tiers.html#user-sub-tiers">Amazon
         * Q Business tiers</a>. You must use the Amazon Q Business console to assign
         * subscription tiers to users. </p> <p>An Amazon Q Apps service linked role will
         * be created if it's absent in the Amazon Web Services account when
         * <code>QAppsConfiguration</code> is enabled in the request. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/using-service-linked-roles-qapps.html">
         * Using service-linked roles for Q Apps</a>.</p> <p>When you create an
         * application, Amazon Q Business may securely transmit data for processing from
         * your selected Amazon Web Services region, but within your geography. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/cross-region-inference.html">Cross
         * region inference in Amazon Q Business</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const CreateApplicationRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::CreateApplication, request);
        }

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        void CreateApplicationAsync(const CreateApplicationRequestT& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::CreateApplication, request, handler, context);
        }

        /**
         * <p>Creates a new chat response configuration for an Amazon Q Business
         * application. This operation establishes a set of parameters that define how the
         * system generates and formats responses to user queries in chat
         * interactions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/CreateChatResponseConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChatResponseConfigurationOutcome CreateChatResponseConfiguration(const Model::CreateChatResponseConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateChatResponseConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChatResponseConfigurationRequestT = Model::CreateChatResponseConfigurationRequest>
        Model::CreateChatResponseConfigurationOutcomeCallable CreateChatResponseConfigurationCallable(const CreateChatResponseConfigurationRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::CreateChatResponseConfiguration, request);
        }

        /**
         * An Async wrapper for CreateChatResponseConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChatResponseConfigurationRequestT = Model::CreateChatResponseConfigurationRequest>
        void CreateChatResponseConfigurationAsync(const CreateChatResponseConfigurationRequestT& request, const CreateChatResponseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::CreateChatResponseConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a new data accessor for an ISV to access data from a Amazon Q
         * Business application. The data accessor is an entity that represents the ISV's
         * access to the Amazon Q Business application's data. It includes the IAM role ARN
         * for the ISV, a friendly name, and a set of action configurations that define the
         * specific actions the ISV is allowed to perform and any associated data filters.
         * When the data accessor is created, an IAM Identity Center application is also
         * created to manage the ISV's identity and authentication for accessing the Amazon
         * Q Business application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/CreateDataAccessor">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataAccessorOutcome CreateDataAccessor(const Model::CreateDataAccessorRequest& request) const;

        /**
         * A Callable wrapper for CreateDataAccessor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataAccessorRequestT = Model::CreateDataAccessorRequest>
        Model::CreateDataAccessorOutcomeCallable CreateDataAccessorCallable(const CreateDataAccessorRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::CreateDataAccessor, request);
        }

        /**
         * An Async wrapper for CreateDataAccessor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataAccessorRequestT = Model::CreateDataAccessorRequest>
        void CreateDataAccessorAsync(const CreateDataAccessorRequestT& request, const CreateDataAccessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::CreateDataAccessor, request, handler, context);
        }

        /**
         * <p>Creates a data source connector for an Amazon Q Business application.</p> <p>
         * <code>CreateDataSource</code> is a synchronous operation. The operation returns
         * 200 if the data source was successfully created. Otherwise, an exception is
         * raised.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/CreateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSourceOutcome CreateDataSource(const Model::CreateDataSourceRequest& request) const;

        /**
         * A Callable wrapper for CreateDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataSourceRequestT = Model::CreateDataSourceRequest>
        Model::CreateDataSourceOutcomeCallable CreateDataSourceCallable(const CreateDataSourceRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::CreateDataSource, request);
        }

        /**
         * An Async wrapper for CreateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataSourceRequestT = Model::CreateDataSourceRequest>
        void CreateDataSourceAsync(const CreateDataSourceRequestT& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::CreateDataSource, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Q Business index.</p> <p>To determine if index creation has
         * completed, check the <code>Status</code> field returned from a call to
         * <code>DescribeIndex</code>. The <code>Status</code> field is set to
         * <code>ACTIVE</code> when the index is ready to use.</p> <p>Once the index is
         * active, you can index your documents using the <a
         * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_BatchPutDocument.html">
         * <code>BatchPutDocument</code> </a> API or the <a
         * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_CreateDataSource.html">
         * <code>CreateDataSource</code> </a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/CreateIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIndexOutcome CreateIndex(const Model::CreateIndexRequest& request) const;

        /**
         * A Callable wrapper for CreateIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIndexRequestT = Model::CreateIndexRequest>
        Model::CreateIndexOutcomeCallable CreateIndexCallable(const CreateIndexRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::CreateIndex, request);
        }

        /**
         * An Async wrapper for CreateIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIndexRequestT = Model::CreateIndexRequest>
        void CreateIndexAsync(const CreateIndexRequestT& request, const CreateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::CreateIndex, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Q Business plugin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/CreatePlugin">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePluginOutcome CreatePlugin(const Model::CreatePluginRequest& request) const;

        /**
         * A Callable wrapper for CreatePlugin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePluginRequestT = Model::CreatePluginRequest>
        Model::CreatePluginOutcomeCallable CreatePluginCallable(const CreatePluginRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::CreatePlugin, request);
        }

        /**
         * An Async wrapper for CreatePlugin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePluginRequestT = Model::CreatePluginRequest>
        void CreatePluginAsync(const CreatePluginRequestT& request, const CreatePluginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::CreatePlugin, request, handler, context);
        }

        /**
         * <p>Adds a retriever to your Amazon Q Business application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/CreateRetriever">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRetrieverOutcome CreateRetriever(const Model::CreateRetrieverRequest& request) const;

        /**
         * A Callable wrapper for CreateRetriever that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRetrieverRequestT = Model::CreateRetrieverRequest>
        Model::CreateRetrieverOutcomeCallable CreateRetrieverCallable(const CreateRetrieverRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::CreateRetriever, request);
        }

        /**
         * An Async wrapper for CreateRetriever that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRetrieverRequestT = Model::CreateRetrieverRequest>
        void CreateRetrieverAsync(const CreateRetrieverRequestT& request, const CreateRetrieverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::CreateRetriever, request, handler, context);
        }

        /**
         * <p>Subscribes an IAM Identity Center user or a group to a pricing tier for an
         * Amazon Q Business application.</p> <p>Amazon Q Business offers two subscription
         * tiers: <code>Q_LITE</code> and <code>Q_BUSINESS</code>. Subscription tier
         * determines feature access for the user. For more information on subscriptions
         * and pricing tiers, see <a
         * href="https://aws.amazon.com/q/business/pricing/">Amazon Q Business
         * pricing</a>.</p>  <p>For an example IAM role policy for assigning
         * subscriptions, see <a
         * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/setting-up.html#permissions">Set
         * up required permissions</a> in the Amazon Q Business User Guide.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/CreateSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriptionOutcome CreateSubscription(const Model::CreateSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for CreateSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSubscriptionRequestT = Model::CreateSubscriptionRequest>
        Model::CreateSubscriptionOutcomeCallable CreateSubscriptionCallable(const CreateSubscriptionRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::CreateSubscription, request);
        }

        /**
         * An Async wrapper for CreateSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSubscriptionRequestT = Model::CreateSubscriptionRequest>
        void CreateSubscriptionAsync(const CreateSubscriptionRequestT& request, const CreateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::CreateSubscription, request, handler, context);
        }

        /**
         * <p>Creates a universally unique identifier (UUID) mapped to a list of local user
         * ids within an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        Model::CreateUserOutcomeCallable CreateUserCallable(const CreateUserRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::CreateUser, request);
        }

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        void CreateUserAsync(const CreateUserRequestT& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::CreateUser, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Q Business web experience.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/CreateWebExperience">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWebExperienceOutcome CreateWebExperience(const Model::CreateWebExperienceRequest& request) const;

        /**
         * A Callable wrapper for CreateWebExperience that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWebExperienceRequestT = Model::CreateWebExperienceRequest>
        Model::CreateWebExperienceOutcomeCallable CreateWebExperienceCallable(const CreateWebExperienceRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::CreateWebExperience, request);
        }

        /**
         * An Async wrapper for CreateWebExperience that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWebExperienceRequestT = Model::CreateWebExperienceRequest>
        void CreateWebExperienceAsync(const CreateWebExperienceRequestT& request, const CreateWebExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::CreateWebExperience, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Q Business application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const DeleteApplicationRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::DeleteApplication, request);
        }

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        void DeleteApplicationAsync(const DeleteApplicationRequestT& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::DeleteApplication, request, handler, context);
        }

        /**
         * <p>Deletes an attachment associated with a specific Amazon Q Business
         * conversation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DeleteAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAttachmentOutcome DeleteAttachment(const Model::DeleteAttachmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAttachmentRequestT = Model::DeleteAttachmentRequest>
        Model::DeleteAttachmentOutcomeCallable DeleteAttachmentCallable(const DeleteAttachmentRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::DeleteAttachment, request);
        }

        /**
         * An Async wrapper for DeleteAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAttachmentRequestT = Model::DeleteAttachmentRequest>
        void DeleteAttachmentAsync(const DeleteAttachmentRequestT& request, const DeleteAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::DeleteAttachment, request, handler, context);
        }

        /**
         * <p>Deletes chat controls configured for an existing Amazon Q Business
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DeleteChatControlsConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChatControlsConfigurationOutcome DeleteChatControlsConfiguration(const Model::DeleteChatControlsConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteChatControlsConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChatControlsConfigurationRequestT = Model::DeleteChatControlsConfigurationRequest>
        Model::DeleteChatControlsConfigurationOutcomeCallable DeleteChatControlsConfigurationCallable(const DeleteChatControlsConfigurationRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::DeleteChatControlsConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteChatControlsConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChatControlsConfigurationRequestT = Model::DeleteChatControlsConfigurationRequest>
        void DeleteChatControlsConfigurationAsync(const DeleteChatControlsConfigurationRequestT& request, const DeleteChatControlsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::DeleteChatControlsConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes a specified chat response configuration from an Amazon Q Business
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DeleteChatResponseConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChatResponseConfigurationOutcome DeleteChatResponseConfiguration(const Model::DeleteChatResponseConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteChatResponseConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChatResponseConfigurationRequestT = Model::DeleteChatResponseConfigurationRequest>
        Model::DeleteChatResponseConfigurationOutcomeCallable DeleteChatResponseConfigurationCallable(const DeleteChatResponseConfigurationRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::DeleteChatResponseConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteChatResponseConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChatResponseConfigurationRequestT = Model::DeleteChatResponseConfigurationRequest>
        void DeleteChatResponseConfigurationAsync(const DeleteChatResponseConfigurationRequestT& request, const DeleteChatResponseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::DeleteChatResponseConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Q Business web experience conversation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DeleteConversation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConversationOutcome DeleteConversation(const Model::DeleteConversationRequest& request) const;

        /**
         * A Callable wrapper for DeleteConversation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConversationRequestT = Model::DeleteConversationRequest>
        Model::DeleteConversationOutcomeCallable DeleteConversationCallable(const DeleteConversationRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::DeleteConversation, request);
        }

        /**
         * An Async wrapper for DeleteConversation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConversationRequestT = Model::DeleteConversationRequest>
        void DeleteConversationAsync(const DeleteConversationRequestT& request, const DeleteConversationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::DeleteConversation, request, handler, context);
        }

        /**
         * <p>Deletes a specified data accessor. This operation permanently removes the
         * data accessor and its associated IAM Identity Center application. Any access
         * granted to the ISV through this data accessor will be revoked.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DeleteDataAccessor">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataAccessorOutcome DeleteDataAccessor(const Model::DeleteDataAccessorRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataAccessor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataAccessorRequestT = Model::DeleteDataAccessorRequest>
        Model::DeleteDataAccessorOutcomeCallable DeleteDataAccessorCallable(const DeleteDataAccessorRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::DeleteDataAccessor, request);
        }

        /**
         * An Async wrapper for DeleteDataAccessor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataAccessorRequestT = Model::DeleteDataAccessorRequest>
        void DeleteDataAccessorAsync(const DeleteDataAccessorRequestT& request, const DeleteDataAccessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::DeleteDataAccessor, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Q Business data source connector. While the data source is
         * being deleted, the <code>Status</code> field returned by a call to the
         * <code>DescribeDataSource</code> API is set to <code>DELETING</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DeleteDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSourceOutcome DeleteDataSource(const Model::DeleteDataSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataSourceRequestT = Model::DeleteDataSourceRequest>
        Model::DeleteDataSourceOutcomeCallable DeleteDataSourceCallable(const DeleteDataSourceRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::DeleteDataSource, request);
        }

        /**
         * An Async wrapper for DeleteDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataSourceRequestT = Model::DeleteDataSourceRequest>
        void DeleteDataSourceAsync(const DeleteDataSourceRequestT& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::DeleteDataSource, request, handler, context);
        }

        /**
         * <p>Deletes a group so that all users and sub groups that belong to the group can
         * no longer access documents only available to that group. For example, after
         * deleting the group "Summer Interns", all interns who belonged to that group no
         * longer see intern-only documents in their chat results. </p> <p>If you want to
         * delete, update, or replace users or sub groups of a group, you need to use the
         * <code>PutGroup</code> operation. For example, if a user in the group
         * "Engineering" leaves the engineering team and another user takes their place,
         * you provide an updated list of users or sub groups that belong to the
         * "Engineering" group when calling <code>PutGroup</code>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGroupRequestT = Model::DeleteGroupRequest>
        Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const DeleteGroupRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::DeleteGroup, request);
        }

        /**
         * An Async wrapper for DeleteGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGroupRequestT = Model::DeleteGroupRequest>
        void DeleteGroupAsync(const DeleteGroupRequestT& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::DeleteGroup, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Q Business index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DeleteIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIndexOutcome DeleteIndex(const Model::DeleteIndexRequest& request) const;

        /**
         * A Callable wrapper for DeleteIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIndexRequestT = Model::DeleteIndexRequest>
        Model::DeleteIndexOutcomeCallable DeleteIndexCallable(const DeleteIndexRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::DeleteIndex, request);
        }

        /**
         * An Async wrapper for DeleteIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIndexRequestT = Model::DeleteIndexRequest>
        void DeleteIndexAsync(const DeleteIndexRequestT& request, const DeleteIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::DeleteIndex, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Q Business plugin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DeletePlugin">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePluginOutcome DeletePlugin(const Model::DeletePluginRequest& request) const;

        /**
         * A Callable wrapper for DeletePlugin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePluginRequestT = Model::DeletePluginRequest>
        Model::DeletePluginOutcomeCallable DeletePluginCallable(const DeletePluginRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::DeletePlugin, request);
        }

        /**
         * An Async wrapper for DeletePlugin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePluginRequestT = Model::DeletePluginRequest>
        void DeletePluginAsync(const DeletePluginRequestT& request, const DeletePluginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::DeletePlugin, request, handler, context);
        }

        /**
         * <p>Deletes the retriever used by an Amazon Q Business application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DeleteRetriever">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRetrieverOutcome DeleteRetriever(const Model::DeleteRetrieverRequest& request) const;

        /**
         * A Callable wrapper for DeleteRetriever that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRetrieverRequestT = Model::DeleteRetrieverRequest>
        Model::DeleteRetrieverOutcomeCallable DeleteRetrieverCallable(const DeleteRetrieverRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::DeleteRetriever, request);
        }

        /**
         * An Async wrapper for DeleteRetriever that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRetrieverRequestT = Model::DeleteRetrieverRequest>
        void DeleteRetrieverAsync(const DeleteRetrieverRequestT& request, const DeleteRetrieverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::DeleteRetriever, request, handler, context);
        }

        /**
         * <p>Deletes a user by email id.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        Model::DeleteUserOutcomeCallable DeleteUserCallable(const DeleteUserRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::DeleteUser, request);
        }

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        void DeleteUserAsync(const DeleteUserRequestT& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::DeleteUser, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Q Business web experience.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DeleteWebExperience">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWebExperienceOutcome DeleteWebExperience(const Model::DeleteWebExperienceRequest& request) const;

        /**
         * A Callable wrapper for DeleteWebExperience that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWebExperienceRequestT = Model::DeleteWebExperienceRequest>
        Model::DeleteWebExperienceOutcomeCallable DeleteWebExperienceCallable(const DeleteWebExperienceRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::DeleteWebExperience, request);
        }

        /**
         * An Async wrapper for DeleteWebExperience that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWebExperienceRequestT = Model::DeleteWebExperienceRequest>
        void DeleteWebExperienceAsync(const DeleteWebExperienceRequestT& request, const DeleteWebExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::DeleteWebExperience, request, handler, context);
        }

        /**
         * <p>Removes a permission policy from a Amazon Q Business application, revoking
         * the cross-account access that was previously granted to an ISV. This operation
         * deletes the specified policy statement from the application's permission
         * policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DisassociatePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociatePermissionOutcome DisassociatePermission(const Model::DisassociatePermissionRequest& request) const;

        /**
         * A Callable wrapper for DisassociatePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociatePermissionRequestT = Model::DisassociatePermissionRequest>
        Model::DisassociatePermissionOutcomeCallable DisassociatePermissionCallable(const DisassociatePermissionRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::DisassociatePermission, request);
        }

        /**
         * An Async wrapper for DisassociatePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociatePermissionRequestT = Model::DisassociatePermissionRequest>
        void DisassociatePermissionAsync(const DisassociatePermissionRequestT& request, const DisassociatePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::DisassociatePermission, request, handler, context);
        }

        /**
         * <p>Gets information about an existing Amazon Q Business
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/GetApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

        /**
         * A Callable wrapper for GetApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApplicationRequestT = Model::GetApplicationRequest>
        Model::GetApplicationOutcomeCallable GetApplicationCallable(const GetApplicationRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::GetApplication, request);
        }

        /**
         * An Async wrapper for GetApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationRequestT = Model::GetApplicationRequest>
        void GetApplicationAsync(const GetApplicationRequestT& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::GetApplication, request, handler, context);
        }

        /**
         * <p>Gets information about chat controls configured for an existing Amazon Q
         * Business application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/GetChatControlsConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChatControlsConfigurationOutcome GetChatControlsConfiguration(const Model::GetChatControlsConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetChatControlsConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChatControlsConfigurationRequestT = Model::GetChatControlsConfigurationRequest>
        Model::GetChatControlsConfigurationOutcomeCallable GetChatControlsConfigurationCallable(const GetChatControlsConfigurationRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::GetChatControlsConfiguration, request);
        }

        /**
         * An Async wrapper for GetChatControlsConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChatControlsConfigurationRequestT = Model::GetChatControlsConfigurationRequest>
        void GetChatControlsConfigurationAsync(const GetChatControlsConfigurationRequestT& request, const GetChatControlsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::GetChatControlsConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves detailed information about a specific chat response configuration
         * from an Amazon Q Business application. This operation returns the complete
         * configuration settings and metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/GetChatResponseConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChatResponseConfigurationOutcome GetChatResponseConfiguration(const Model::GetChatResponseConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetChatResponseConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChatResponseConfigurationRequestT = Model::GetChatResponseConfigurationRequest>
        Model::GetChatResponseConfigurationOutcomeCallable GetChatResponseConfigurationCallable(const GetChatResponseConfigurationRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::GetChatResponseConfiguration, request);
        }

        /**
         * An Async wrapper for GetChatResponseConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChatResponseConfigurationRequestT = Model::GetChatResponseConfigurationRequest>
        void GetChatResponseConfigurationAsync(const GetChatResponseConfigurationRequestT& request, const GetChatResponseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::GetChatResponseConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves information about a specified data accessor. This operation returns
         * details about the data accessor, including its display name, unique identifier,
         * Amazon Resource Name (ARN), the associated Amazon Q Business application and IAM
         * Identity Center application, the IAM role for the ISV, the action
         * configurations, and the timestamps for when the data accessor was created and
         * last updated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/GetDataAccessor">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataAccessorOutcome GetDataAccessor(const Model::GetDataAccessorRequest& request) const;

        /**
         * A Callable wrapper for GetDataAccessor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataAccessorRequestT = Model::GetDataAccessorRequest>
        Model::GetDataAccessorOutcomeCallable GetDataAccessorCallable(const GetDataAccessorRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::GetDataAccessor, request);
        }

        /**
         * An Async wrapper for GetDataAccessor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataAccessorRequestT = Model::GetDataAccessorRequest>
        void GetDataAccessorAsync(const GetDataAccessorRequestT& request, const GetDataAccessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::GetDataAccessor, request, handler, context);
        }

        /**
         * <p>Gets information about an existing Amazon Q Business data source
         * connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/GetDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataSourceOutcome GetDataSource(const Model::GetDataSourceRequest& request) const;

        /**
         * A Callable wrapper for GetDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataSourceRequestT = Model::GetDataSourceRequest>
        Model::GetDataSourceOutcomeCallable GetDataSourceCallable(const GetDataSourceRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::GetDataSource, request);
        }

        /**
         * An Async wrapper for GetDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataSourceRequestT = Model::GetDataSourceRequest>
        void GetDataSourceAsync(const GetDataSourceRequestT& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::GetDataSource, request, handler, context);
        }

        /**
         * <p>Retrieves the content of a document that was ingested into Amazon Q Business.
         * This API validates user authorization against document ACLs before returning a
         * pre-signed URL for secure document access. You can download or view source
         * documents referenced in chat responses through the URL.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/GetDocumentContent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentContentOutcome GetDocumentContent(const Model::GetDocumentContentRequest& request) const;

        /**
         * A Callable wrapper for GetDocumentContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDocumentContentRequestT = Model::GetDocumentContentRequest>
        Model::GetDocumentContentOutcomeCallable GetDocumentContentCallable(const GetDocumentContentRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::GetDocumentContent, request);
        }

        /**
         * An Async wrapper for GetDocumentContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDocumentContentRequestT = Model::GetDocumentContentRequest>
        void GetDocumentContentAsync(const GetDocumentContentRequestT& request, const GetDocumentContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::GetDocumentContent, request, handler, context);
        }

        /**
         * <p>Describes a group by group name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/GetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupOutcome GetGroup(const Model::GetGroupRequest& request) const;

        /**
         * A Callable wrapper for GetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGroupRequestT = Model::GetGroupRequest>
        Model::GetGroupOutcomeCallable GetGroupCallable(const GetGroupRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::GetGroup, request);
        }

        /**
         * An Async wrapper for GetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGroupRequestT = Model::GetGroupRequest>
        void GetGroupAsync(const GetGroupRequestT& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::GetGroup, request, handler, context);
        }

        /**
         * <p>Gets information about an existing Amazon Q Business index.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/GetIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIndexOutcome GetIndex(const Model::GetIndexRequest& request) const;

        /**
         * A Callable wrapper for GetIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIndexRequestT = Model::GetIndexRequest>
        Model::GetIndexOutcomeCallable GetIndexCallable(const GetIndexRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::GetIndex, request);
        }

        /**
         * An Async wrapper for GetIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIndexRequestT = Model::GetIndexRequest>
        void GetIndexAsync(const GetIndexRequestT& request, const GetIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::GetIndex, request, handler, context);
        }

        /**
         * <p>Returns the image bytes corresponding to a media object. If you have
         * implemented your own application with the Chat and ChatSync APIs, and have
         * enabled content extraction from visual data in Amazon Q Business, you use the
         * GetMedia API operation to download the images so you can show them in your UI
         * with responses.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/extracting-meaning-from-images.html">Extracting
         * semantic meaning from images and visuals</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/GetMedia">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMediaOutcome GetMedia(const Model::GetMediaRequest& request) const;

        /**
         * A Callable wrapper for GetMedia that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMediaRequestT = Model::GetMediaRequest>
        Model::GetMediaOutcomeCallable GetMediaCallable(const GetMediaRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::GetMedia, request);
        }

        /**
         * An Async wrapper for GetMedia that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMediaRequestT = Model::GetMediaRequest>
        void GetMediaAsync(const GetMediaRequestT& request, const GetMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::GetMedia, request, handler, context);
        }

        /**
         * <p>Gets information about an existing Amazon Q Business plugin.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/GetPlugin">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPluginOutcome GetPlugin(const Model::GetPluginRequest& request) const;

        /**
         * A Callable wrapper for GetPlugin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPluginRequestT = Model::GetPluginRequest>
        Model::GetPluginOutcomeCallable GetPluginCallable(const GetPluginRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::GetPlugin, request);
        }

        /**
         * An Async wrapper for GetPlugin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPluginRequestT = Model::GetPluginRequest>
        void GetPluginAsync(const GetPluginRequestT& request, const GetPluginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::GetPlugin, request, handler, context);
        }

        /**
         * <p>Retrieves the current permission policy for a Amazon Q Business application.
         * The policy is returned as a JSON-formatted string and defines the IAM actions
         * that are allowed or denied for the application's resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/GetPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPolicyRequestT = Model::GetPolicyRequest>
        Model::GetPolicyOutcomeCallable GetPolicyCallable(const GetPolicyRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::GetPolicy, request);
        }

        /**
         * An Async wrapper for GetPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPolicyRequestT = Model::GetPolicyRequest>
        void GetPolicyAsync(const GetPolicyRequestT& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::GetPolicy, request, handler, context);
        }

        /**
         * <p>Gets information about an existing retriever used by an Amazon Q Business
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/GetRetriever">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRetrieverOutcome GetRetriever(const Model::GetRetrieverRequest& request) const;

        /**
         * A Callable wrapper for GetRetriever that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRetrieverRequestT = Model::GetRetrieverRequest>
        Model::GetRetrieverOutcomeCallable GetRetrieverCallable(const GetRetrieverRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::GetRetriever, request);
        }

        /**
         * An Async wrapper for GetRetriever that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRetrieverRequestT = Model::GetRetrieverRequest>
        void GetRetrieverAsync(const GetRetrieverRequestT& request, const GetRetrieverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::GetRetriever, request, handler, context);
        }

        /**
         * <p>Describes the universally unique identifier (UUID) associated with a local
         * user in a data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/GetUser">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserOutcome GetUser(const Model::GetUserRequest& request) const;

        /**
         * A Callable wrapper for GetUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUserRequestT = Model::GetUserRequest>
        Model::GetUserOutcomeCallable GetUserCallable(const GetUserRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::GetUser, request);
        }

        /**
         * An Async wrapper for GetUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUserRequestT = Model::GetUserRequest>
        void GetUserAsync(const GetUserRequestT& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::GetUser, request, handler, context);
        }

        /**
         * <p>Gets information about an existing Amazon Q Business web
         * experience.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/GetWebExperience">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWebExperienceOutcome GetWebExperience(const Model::GetWebExperienceRequest& request) const;

        /**
         * A Callable wrapper for GetWebExperience that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWebExperienceRequestT = Model::GetWebExperienceRequest>
        Model::GetWebExperienceOutcomeCallable GetWebExperienceCallable(const GetWebExperienceRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::GetWebExperience, request);
        }

        /**
         * An Async wrapper for GetWebExperience that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWebExperienceRequestT = Model::GetWebExperienceRequest>
        void GetWebExperienceAsync(const GetWebExperienceRequestT& request, const GetWebExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::GetWebExperience, request, handler, context);
        }

        /**
         * <p>Lists Amazon Q Business applications.</p>  <p>Amazon Q Business
         * applications may securely transmit data for processing across Amazon Web
         * Services Regions within your geography. For more information, see <a
         * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/cross-region-inference.html">Cross
         * region inference in Amazon Q Business</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const ListApplicationsRequestT& request = {}) const
        {
            return SubmitCallable(&QBusinessClient::ListApplications, request);
        }

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        void ListApplicationsAsync(const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListApplicationsRequestT& request = {}) const
        {
            return SubmitAsync(&QBusinessClient::ListApplications, request, handler, context);
        }

        /**
         * <p>Gets a list of attachments associated with an Amazon Q Business web
         * experience or a list of attachements associated with a specific Amazon Q
         * Business conversation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ListAttachments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttachmentsOutcome ListAttachments(const Model::ListAttachmentsRequest& request) const;

        /**
         * A Callable wrapper for ListAttachments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAttachmentsRequestT = Model::ListAttachmentsRequest>
        Model::ListAttachmentsOutcomeCallable ListAttachmentsCallable(const ListAttachmentsRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::ListAttachments, request);
        }

        /**
         * An Async wrapper for ListAttachments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAttachmentsRequestT = Model::ListAttachmentsRequest>
        void ListAttachmentsAsync(const ListAttachmentsRequestT& request, const ListAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::ListAttachments, request, handler, context);
        }

        /**
         * <p>Retrieves a list of all chat response configurations available in a specified
         * Amazon Q Business application. This operation returns summary information about
         * each configuration to help administrators manage and select appropriate response
         * settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ListChatResponseConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChatResponseConfigurationsOutcome ListChatResponseConfigurations(const Model::ListChatResponseConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListChatResponseConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChatResponseConfigurationsRequestT = Model::ListChatResponseConfigurationsRequest>
        Model::ListChatResponseConfigurationsOutcomeCallable ListChatResponseConfigurationsCallable(const ListChatResponseConfigurationsRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::ListChatResponseConfigurations, request);
        }

        /**
         * An Async wrapper for ListChatResponseConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChatResponseConfigurationsRequestT = Model::ListChatResponseConfigurationsRequest>
        void ListChatResponseConfigurationsAsync(const ListChatResponseConfigurationsRequestT& request, const ListChatResponseConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::ListChatResponseConfigurations, request, handler, context);
        }

        /**
         * <p>Lists one or more Amazon Q Business conversations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ListConversations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConversationsOutcome ListConversations(const Model::ListConversationsRequest& request) const;

        /**
         * A Callable wrapper for ListConversations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConversationsRequestT = Model::ListConversationsRequest>
        Model::ListConversationsOutcomeCallable ListConversationsCallable(const ListConversationsRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::ListConversations, request);
        }

        /**
         * An Async wrapper for ListConversations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConversationsRequestT = Model::ListConversationsRequest>
        void ListConversationsAsync(const ListConversationsRequestT& request, const ListConversationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::ListConversations, request, handler, context);
        }

        /**
         * <p>Lists the data accessors for a Amazon Q Business application. This operation
         * returns a paginated list of data accessor summaries, including the friendly
         * name, unique identifier, ARN, associated IAM role, and creation/update
         * timestamps for each data accessor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ListDataAccessors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataAccessorsOutcome ListDataAccessors(const Model::ListDataAccessorsRequest& request) const;

        /**
         * A Callable wrapper for ListDataAccessors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataAccessorsRequestT = Model::ListDataAccessorsRequest>
        Model::ListDataAccessorsOutcomeCallable ListDataAccessorsCallable(const ListDataAccessorsRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::ListDataAccessors, request);
        }

        /**
         * An Async wrapper for ListDataAccessors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataAccessorsRequestT = Model::ListDataAccessorsRequest>
        void ListDataAccessorsAsync(const ListDataAccessorsRequestT& request, const ListDataAccessorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::ListDataAccessors, request, handler, context);
        }

        /**
         * <p>Get information about an Amazon Q Business data source connector
         * synchronization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ListDataSourceSyncJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSourceSyncJobsOutcome ListDataSourceSyncJobs(const Model::ListDataSourceSyncJobsRequest& request) const;

        /**
         * A Callable wrapper for ListDataSourceSyncJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataSourceSyncJobsRequestT = Model::ListDataSourceSyncJobsRequest>
        Model::ListDataSourceSyncJobsOutcomeCallable ListDataSourceSyncJobsCallable(const ListDataSourceSyncJobsRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::ListDataSourceSyncJobs, request);
        }

        /**
         * An Async wrapper for ListDataSourceSyncJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataSourceSyncJobsRequestT = Model::ListDataSourceSyncJobsRequest>
        void ListDataSourceSyncJobsAsync(const ListDataSourceSyncJobsRequestT& request, const ListDataSourceSyncJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::ListDataSourceSyncJobs, request, handler, context);
        }

        /**
         * <p>Lists the Amazon Q Business data source connectors that you have
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ListDataSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSourcesOutcome ListDataSources(const Model::ListDataSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListDataSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataSourcesRequestT = Model::ListDataSourcesRequest>
        Model::ListDataSourcesOutcomeCallable ListDataSourcesCallable(const ListDataSourcesRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::ListDataSources, request);
        }

        /**
         * An Async wrapper for ListDataSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataSourcesRequestT = Model::ListDataSourcesRequest>
        void ListDataSourcesAsync(const ListDataSourcesRequestT& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::ListDataSources, request, handler, context);
        }

        /**
         * <p>A list of documents attached to an index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ListDocuments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDocumentsOutcome ListDocuments(const Model::ListDocumentsRequest& request) const;

        /**
         * A Callable wrapper for ListDocuments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDocumentsRequestT = Model::ListDocumentsRequest>
        Model::ListDocumentsOutcomeCallable ListDocumentsCallable(const ListDocumentsRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::ListDocuments, request);
        }

        /**
         * An Async wrapper for ListDocuments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDocumentsRequestT = Model::ListDocumentsRequest>
        void ListDocumentsAsync(const ListDocumentsRequestT& request, const ListDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::ListDocuments, request, handler, context);
        }

        /**
         * <p>Provides a list of groups that are mapped to users.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListGroupsRequestT = Model::ListGroupsRequest>
        Model::ListGroupsOutcomeCallable ListGroupsCallable(const ListGroupsRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::ListGroups, request);
        }

        /**
         * An Async wrapper for ListGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGroupsRequestT = Model::ListGroupsRequest>
        void ListGroupsAsync(const ListGroupsRequestT& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::ListGroups, request, handler, context);
        }

        /**
         * <p>Lists the Amazon Q Business indices you have created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ListIndices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIndicesOutcome ListIndices(const Model::ListIndicesRequest& request) const;

        /**
         * A Callable wrapper for ListIndices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIndicesRequestT = Model::ListIndicesRequest>
        Model::ListIndicesOutcomeCallable ListIndicesCallable(const ListIndicesRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::ListIndices, request);
        }

        /**
         * An Async wrapper for ListIndices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIndicesRequestT = Model::ListIndicesRequest>
        void ListIndicesAsync(const ListIndicesRequestT& request, const ListIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::ListIndices, request, handler, context);
        }

        /**
         * <p>Gets a list of messages associated with an Amazon Q Business web
         * experience.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ListMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMessagesOutcome ListMessages(const Model::ListMessagesRequest& request) const;

        /**
         * A Callable wrapper for ListMessages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMessagesRequestT = Model::ListMessagesRequest>
        Model::ListMessagesOutcomeCallable ListMessagesCallable(const ListMessagesRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::ListMessages, request);
        }

        /**
         * An Async wrapper for ListMessages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMessagesRequestT = Model::ListMessagesRequest>
        void ListMessagesAsync(const ListMessagesRequestT& request, const ListMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::ListMessages, request, handler, context);
        }

        /**
         * <p>Lists configured Amazon Q Business actions for a specific plugin in an Amazon
         * Q Business application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ListPluginActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPluginActionsOutcome ListPluginActions(const Model::ListPluginActionsRequest& request) const;

        /**
         * A Callable wrapper for ListPluginActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPluginActionsRequestT = Model::ListPluginActionsRequest>
        Model::ListPluginActionsOutcomeCallable ListPluginActionsCallable(const ListPluginActionsRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::ListPluginActions, request);
        }

        /**
         * An Async wrapper for ListPluginActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPluginActionsRequestT = Model::ListPluginActionsRequest>
        void ListPluginActionsAsync(const ListPluginActionsRequestT& request, const ListPluginActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::ListPluginActions, request, handler, context);
        }

        /**
         * <p>Lists configured Amazon Q Business actions for any plugin type—both built-in
         * and custom.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ListPluginTypeActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPluginTypeActionsOutcome ListPluginTypeActions(const Model::ListPluginTypeActionsRequest& request) const;

        /**
         * A Callable wrapper for ListPluginTypeActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPluginTypeActionsRequestT = Model::ListPluginTypeActionsRequest>
        Model::ListPluginTypeActionsOutcomeCallable ListPluginTypeActionsCallable(const ListPluginTypeActionsRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::ListPluginTypeActions, request);
        }

        /**
         * An Async wrapper for ListPluginTypeActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPluginTypeActionsRequestT = Model::ListPluginTypeActionsRequest>
        void ListPluginTypeActionsAsync(const ListPluginTypeActionsRequestT& request, const ListPluginTypeActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::ListPluginTypeActions, request, handler, context);
        }

        /**
         * <p>Lists metadata for all Amazon Q Business plugin types.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ListPluginTypeMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPluginTypeMetadataOutcome ListPluginTypeMetadata(const Model::ListPluginTypeMetadataRequest& request = {}) const;

        /**
         * A Callable wrapper for ListPluginTypeMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPluginTypeMetadataRequestT = Model::ListPluginTypeMetadataRequest>
        Model::ListPluginTypeMetadataOutcomeCallable ListPluginTypeMetadataCallable(const ListPluginTypeMetadataRequestT& request = {}) const
        {
            return SubmitCallable(&QBusinessClient::ListPluginTypeMetadata, request);
        }

        /**
         * An Async wrapper for ListPluginTypeMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPluginTypeMetadataRequestT = Model::ListPluginTypeMetadataRequest>
        void ListPluginTypeMetadataAsync(const ListPluginTypeMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListPluginTypeMetadataRequestT& request = {}) const
        {
            return SubmitAsync(&QBusinessClient::ListPluginTypeMetadata, request, handler, context);
        }

        /**
         * <p>Lists configured Amazon Q Business plugins.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ListPlugins">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPluginsOutcome ListPlugins(const Model::ListPluginsRequest& request) const;

        /**
         * A Callable wrapper for ListPlugins that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPluginsRequestT = Model::ListPluginsRequest>
        Model::ListPluginsOutcomeCallable ListPluginsCallable(const ListPluginsRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::ListPlugins, request);
        }

        /**
         * An Async wrapper for ListPlugins that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPluginsRequestT = Model::ListPluginsRequest>
        void ListPluginsAsync(const ListPluginsRequestT& request, const ListPluginsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::ListPlugins, request, handler, context);
        }

        /**
         * <p>Lists the retriever used by an Amazon Q Business application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ListRetrievers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRetrieversOutcome ListRetrievers(const Model::ListRetrieversRequest& request) const;

        /**
         * A Callable wrapper for ListRetrievers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRetrieversRequestT = Model::ListRetrieversRequest>
        Model::ListRetrieversOutcomeCallable ListRetrieversCallable(const ListRetrieversRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::ListRetrievers, request);
        }

        /**
         * An Async wrapper for ListRetrievers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRetrieversRequestT = Model::ListRetrieversRequest>
        void ListRetrieversAsync(const ListRetrieversRequestT& request, const ListRetrieversResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::ListRetrievers, request, handler, context);
        }

        /**
         * <p> Lists all subscriptions created in an Amazon Q Business application.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ListSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscriptionsOutcome ListSubscriptions(const Model::ListSubscriptionsRequest& request) const;

        /**
         * A Callable wrapper for ListSubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSubscriptionsRequestT = Model::ListSubscriptionsRequest>
        Model::ListSubscriptionsOutcomeCallable ListSubscriptionsCallable(const ListSubscriptionsRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::ListSubscriptions, request);
        }

        /**
         * An Async wrapper for ListSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSubscriptionsRequestT = Model::ListSubscriptionsRequest>
        void ListSubscriptionsAsync(const ListSubscriptionsRequestT& request, const ListSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::ListSubscriptions, request, handler, context);
        }

        /**
         * <p>Gets a list of tags associated with a specified resource. Amazon Q Business
         * applications and data sources can have tags associated with them.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists one or more Amazon Q Business Web Experiences.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ListWebExperiences">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWebExperiencesOutcome ListWebExperiences(const Model::ListWebExperiencesRequest& request) const;

        /**
         * A Callable wrapper for ListWebExperiences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWebExperiencesRequestT = Model::ListWebExperiencesRequest>
        Model::ListWebExperiencesOutcomeCallable ListWebExperiencesCallable(const ListWebExperiencesRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::ListWebExperiences, request);
        }

        /**
         * An Async wrapper for ListWebExperiences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWebExperiencesRequestT = Model::ListWebExperiencesRequest>
        void ListWebExperiencesAsync(const ListWebExperiencesRequestT& request, const ListWebExperiencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::ListWebExperiences, request, handler, context);
        }

        /**
         * <p>Enables your end user to provide feedback on their Amazon Q Business
         * generated chat responses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/PutFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFeedbackOutcome PutFeedback(const Model::PutFeedbackRequest& request) const;

        /**
         * A Callable wrapper for PutFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutFeedbackRequestT = Model::PutFeedbackRequest>
        Model::PutFeedbackOutcomeCallable PutFeedbackCallable(const PutFeedbackRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::PutFeedback, request);
        }

        /**
         * An Async wrapper for PutFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutFeedbackRequestT = Model::PutFeedbackRequest>
        void PutFeedbackAsync(const PutFeedbackRequestT& request, const PutFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::PutFeedback, request, handler, context);
        }

        /**
         * <p>Create, or updates, a mapping of users—who have access to a document—to
         * groups.</p> <p>You can also map sub groups to groups. For example, the group
         * "Company Intellectual Property Teams" includes sub groups "Research" and
         * "Engineering". These sub groups include their own list of users or people who
         * work in these teams. Only users who work in research and engineering, and
         * therefore belong in the intellectual property group, can see top-secret company
         * documents in their Amazon Q Business chat results.</p> <p>There are two options
         * for creating groups, either passing group members inline or using an S3 file via
         * the S3PathForGroupMembers field. For inline groups, there is a limit of 1000
         * members per group and for provided S3 files there is a limit of 100 thousand
         * members. When creating a group using an S3 file, you provide both an S3 file and
         * a <code>RoleArn</code> for Amazon Q Buisness to access the file.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/PutGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::PutGroupOutcome PutGroup(const Model::PutGroupRequest& request) const;

        /**
         * A Callable wrapper for PutGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutGroupRequestT = Model::PutGroupRequest>
        Model::PutGroupOutcomeCallable PutGroupCallable(const PutGroupRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::PutGroup, request);
        }

        /**
         * An Async wrapper for PutGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutGroupRequestT = Model::PutGroupRequest>
        void PutGroupAsync(const PutGroupRequestT& request, const PutGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::PutGroup, request, handler, context);
        }

        /**
         * <p>Searches for relevant content in a Amazon Q Business application based on a
         * query. This operation takes a search query text, the Amazon Q Business
         * application identifier, and optional filters (such as content source and maximum
         * results) as input. It returns a list of relevant content items, where each item
         * includes the content text, the unique document identifier, the document title,
         * the document URI, any relevant document attributes, and score attributes
         * indicating the confidence level of the relevance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/SearchRelevantContent">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchRelevantContentOutcome SearchRelevantContent(const Model::SearchRelevantContentRequest& request) const;

        /**
         * A Callable wrapper for SearchRelevantContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchRelevantContentRequestT = Model::SearchRelevantContentRequest>
        Model::SearchRelevantContentOutcomeCallable SearchRelevantContentCallable(const SearchRelevantContentRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::SearchRelevantContent, request);
        }

        /**
         * An Async wrapper for SearchRelevantContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchRelevantContentRequestT = Model::SearchRelevantContentRequest>
        void SearchRelevantContentAsync(const SearchRelevantContentRequestT& request, const SearchRelevantContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::SearchRelevantContent, request, handler, context);
        }

        /**
         * <p>Starts a data source connector synchronization job. If a synchronization job
         * is already in progress, Amazon Q Business returns a
         * <code>ConflictException</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/StartDataSourceSyncJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDataSourceSyncJobOutcome StartDataSourceSyncJob(const Model::StartDataSourceSyncJobRequest& request) const;

        /**
         * A Callable wrapper for StartDataSourceSyncJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDataSourceSyncJobRequestT = Model::StartDataSourceSyncJobRequest>
        Model::StartDataSourceSyncJobOutcomeCallable StartDataSourceSyncJobCallable(const StartDataSourceSyncJobRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::StartDataSourceSyncJob, request);
        }

        /**
         * An Async wrapper for StartDataSourceSyncJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDataSourceSyncJobRequestT = Model::StartDataSourceSyncJobRequest>
        void StartDataSourceSyncJobAsync(const StartDataSourceSyncJobRequestT& request, const StartDataSourceSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::StartDataSourceSyncJob, request, handler, context);
        }

        /**
         * <p>Stops an Amazon Q Business data source connector synchronization job already
         * in progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/StopDataSourceSyncJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDataSourceSyncJobOutcome StopDataSourceSyncJob(const Model::StopDataSourceSyncJobRequest& request) const;

        /**
         * A Callable wrapper for StopDataSourceSyncJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopDataSourceSyncJobRequestT = Model::StopDataSourceSyncJobRequest>
        Model::StopDataSourceSyncJobOutcomeCallable StopDataSourceSyncJobCallable(const StopDataSourceSyncJobRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::StopDataSourceSyncJob, request);
        }

        /**
         * An Async wrapper for StopDataSourceSyncJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopDataSourceSyncJobRequestT = Model::StopDataSourceSyncJobRequest>
        void StopDataSourceSyncJobAsync(const StopDataSourceSyncJobRequestT& request, const StopDataSourceSyncJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::StopDataSourceSyncJob, request, handler, context);
        }

        /**
         * <p>Adds the specified tag to the specified Amazon Q Business application or data
         * source resource. If the tag already exists, the existing value is replaced with
         * the new value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a tag from an Amazon Q Business application or a data
         * source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing Amazon Q Business application.</p>  <p>Amazon Q
         * Business applications may securely transmit data for processing across Amazon
         * Web Services Regions within your geography. For more information, see <a
         * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/cross-region-inference.html">Cross
         * region inference in Amazon Q Business</a>.</p>   <p>An Amazon Q
         * Apps service-linked role will be created if it's absent in the Amazon Web
         * Services account when <code>QAppsConfiguration</code> is enabled in the request.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/using-service-linked-roles-qapps.html">Using
         * service-linked roles for Q Apps</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const UpdateApplicationRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::UpdateApplication, request);
        }

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        void UpdateApplicationAsync(const UpdateApplicationRequestT& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::UpdateApplication, request, handler, context);
        }

        /**
         * <p>Updates a set of chat controls configured for an existing Amazon Q Business
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/UpdateChatControlsConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChatControlsConfigurationOutcome UpdateChatControlsConfiguration(const Model::UpdateChatControlsConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateChatControlsConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChatControlsConfigurationRequestT = Model::UpdateChatControlsConfigurationRequest>
        Model::UpdateChatControlsConfigurationOutcomeCallable UpdateChatControlsConfigurationCallable(const UpdateChatControlsConfigurationRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::UpdateChatControlsConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateChatControlsConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChatControlsConfigurationRequestT = Model::UpdateChatControlsConfigurationRequest>
        void UpdateChatControlsConfigurationAsync(const UpdateChatControlsConfigurationRequestT& request, const UpdateChatControlsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::UpdateChatControlsConfiguration, request, handler, context);
        }

        /**
         * <p>Updates an existing chat response configuration in an Amazon Q Business
         * application. This operation allows administrators to modify configuration
         * settings, display name, and response parameters to refine how the system
         * generates responses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/UpdateChatResponseConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChatResponseConfigurationOutcome UpdateChatResponseConfiguration(const Model::UpdateChatResponseConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateChatResponseConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChatResponseConfigurationRequestT = Model::UpdateChatResponseConfigurationRequest>
        Model::UpdateChatResponseConfigurationOutcomeCallable UpdateChatResponseConfigurationCallable(const UpdateChatResponseConfigurationRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::UpdateChatResponseConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateChatResponseConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChatResponseConfigurationRequestT = Model::UpdateChatResponseConfigurationRequest>
        void UpdateChatResponseConfigurationAsync(const UpdateChatResponseConfigurationRequestT& request, const UpdateChatResponseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::UpdateChatResponseConfiguration, request, handler, context);
        }

        /**
         * <p>Updates an existing data accessor. This operation allows modifying the action
         * configurations (the allowed actions and associated filters) and the display name
         * of the data accessor. It does not allow changing the IAM role associated with
         * the data accessor or other core properties of the data accessor.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/UpdateDataAccessor">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataAccessorOutcome UpdateDataAccessor(const Model::UpdateDataAccessorRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataAccessor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataAccessorRequestT = Model::UpdateDataAccessorRequest>
        Model::UpdateDataAccessorOutcomeCallable UpdateDataAccessorCallable(const UpdateDataAccessorRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::UpdateDataAccessor, request);
        }

        /**
         * An Async wrapper for UpdateDataAccessor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataAccessorRequestT = Model::UpdateDataAccessorRequest>
        void UpdateDataAccessorAsync(const UpdateDataAccessorRequestT& request, const UpdateDataAccessorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::UpdateDataAccessor, request, handler, context);
        }

        /**
         * <p>Updates an existing Amazon Q Business data source connector.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/UpdateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSourceOutcome UpdateDataSource(const Model::UpdateDataSourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataSourceRequestT = Model::UpdateDataSourceRequest>
        Model::UpdateDataSourceOutcomeCallable UpdateDataSourceCallable(const UpdateDataSourceRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::UpdateDataSource, request);
        }

        /**
         * An Async wrapper for UpdateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataSourceRequestT = Model::UpdateDataSourceRequest>
        void UpdateDataSourceAsync(const UpdateDataSourceRequestT& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::UpdateDataSource, request, handler, context);
        }

        /**
         * <p>Updates an Amazon Q Business index.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/UpdateIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIndexOutcome UpdateIndex(const Model::UpdateIndexRequest& request) const;

        /**
         * A Callable wrapper for UpdateIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIndexRequestT = Model::UpdateIndexRequest>
        Model::UpdateIndexOutcomeCallable UpdateIndexCallable(const UpdateIndexRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::UpdateIndex, request);
        }

        /**
         * An Async wrapper for UpdateIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIndexRequestT = Model::UpdateIndexRequest>
        void UpdateIndexAsync(const UpdateIndexRequestT& request, const UpdateIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::UpdateIndex, request, handler, context);
        }

        /**
         * <p>Updates an Amazon Q Business plugin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/UpdatePlugin">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePluginOutcome UpdatePlugin(const Model::UpdatePluginRequest& request) const;

        /**
         * A Callable wrapper for UpdatePlugin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePluginRequestT = Model::UpdatePluginRequest>
        Model::UpdatePluginOutcomeCallable UpdatePluginCallable(const UpdatePluginRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::UpdatePlugin, request);
        }

        /**
         * An Async wrapper for UpdatePlugin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePluginRequestT = Model::UpdatePluginRequest>
        void UpdatePluginAsync(const UpdatePluginRequestT& request, const UpdatePluginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::UpdatePlugin, request, handler, context);
        }

        /**
         * <p>Updates the retriever used for your Amazon Q Business
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/UpdateRetriever">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRetrieverOutcome UpdateRetriever(const Model::UpdateRetrieverRequest& request) const;

        /**
         * A Callable wrapper for UpdateRetriever that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRetrieverRequestT = Model::UpdateRetrieverRequest>
        Model::UpdateRetrieverOutcomeCallable UpdateRetrieverCallable(const UpdateRetrieverRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::UpdateRetriever, request);
        }

        /**
         * An Async wrapper for UpdateRetriever that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRetrieverRequestT = Model::UpdateRetrieverRequest>
        void UpdateRetrieverAsync(const UpdateRetrieverRequestT& request, const UpdateRetrieverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::UpdateRetriever, request, handler, context);
        }

        /**
         * <p>Updates the pricing tier for an Amazon Q Business subscription. Upgrades are
         * instant. Downgrades apply at the start of the next month. Subscription tier
         * determines feature access for the user. For more information on subscriptions
         * and pricing tiers, see <a
         * href="https://aws.amazon.com/q/business/pricing/">Amazon Q Business
         * pricing</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/UpdateSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubscriptionOutcome UpdateSubscription(const Model::UpdateSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for UpdateSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSubscriptionRequestT = Model::UpdateSubscriptionRequest>
        Model::UpdateSubscriptionOutcomeCallable UpdateSubscriptionCallable(const UpdateSubscriptionRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::UpdateSubscription, request);
        }

        /**
         * An Async wrapper for UpdateSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSubscriptionRequestT = Model::UpdateSubscriptionRequest>
        void UpdateSubscriptionAsync(const UpdateSubscriptionRequestT& request, const UpdateSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::UpdateSubscription, request, handler, context);
        }

        /**
         * <p>Updates a information associated with a user id.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/UpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /**
         * A Callable wrapper for UpdateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserRequestT = Model::UpdateUserRequest>
        Model::UpdateUserOutcomeCallable UpdateUserCallable(const UpdateUserRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::UpdateUser, request);
        }

        /**
         * An Async wrapper for UpdateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserRequestT = Model::UpdateUserRequest>
        void UpdateUserAsync(const UpdateUserRequestT& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::UpdateUser, request, handler, context);
        }

        /**
         * <p>Updates an Amazon Q Business web experience. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/UpdateWebExperience">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWebExperienceOutcome UpdateWebExperience(const Model::UpdateWebExperienceRequest& request) const;

        /**
         * A Callable wrapper for UpdateWebExperience that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWebExperienceRequestT = Model::UpdateWebExperienceRequest>
        Model::UpdateWebExperienceOutcomeCallable UpdateWebExperienceCallable(const UpdateWebExperienceRequestT& request) const
        {
            return SubmitCallable(&QBusinessClient::UpdateWebExperience, request);
        }

        /**
         * An Async wrapper for UpdateWebExperience that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWebExperienceRequestT = Model::UpdateWebExperienceRequest>
        void UpdateWebExperienceAsync(const UpdateWebExperienceRequestT& request, const UpdateWebExperienceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QBusinessClient::UpdateWebExperience, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<QBusinessEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<QBusinessClient>;
      void init(const QBusinessClientConfiguration& clientConfiguration);

      QBusinessClientConfiguration m_clientConfiguration;
      std::shared_ptr<QBusinessEndpointProviderBase> m_endpointProvider;
  };

} // namespace QBusiness
} // namespace Aws
