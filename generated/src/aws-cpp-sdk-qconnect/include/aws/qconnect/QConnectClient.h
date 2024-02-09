/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/QConnectServiceClientModel.h>

namespace Aws
{
namespace QConnect
{
  /**
   *  <p> <b>Powered by Amazon Bedrock</b>: Amazon Web Services implements <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/abuse-detection.html">automated
   * abuse detection</a>. Because Amazon Q in Connect is built on Amazon Bedrock,
   * users can take full advantage of the controls implemented in Amazon Bedrock to
   * enforce safety, security, and the responsible use of artificial intelligence
   * (AI).</p>  <p>Amazon Q in Connect is a generative AI customer service
   * assistant. It is an LLM-enhanced evolution of Amazon Connect Wisdom that
   * delivers real-time recommendations to help contact center agents resolve
   * customer issues quickly and accurately.</p> <p>Amazon Q automatically detects
   * customer intent during calls and chats using conversational analytics and
   * natural language understanding (NLU). It then provides agents with immediate,
   * real-time generative responses and suggested actions, and links to relevant
   * documents and articles. Agents can also query Amazon Q directly using natural
   * language or keywords to answer customer requests.</p> <p>Use the Amazon Q in
   * Connect APIs to create an assistant and a knowledge base, for example, or manage
   * content by uploading custom files.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-q-connect.html">Use
   * Amazon Q in Connect for generative AI powered agent assistance in real-time</a>
   * in the <i>Amazon Connect Administrator Guide</i>.</p>
   */
  class AWS_QCONNECT_API QConnectClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<QConnectClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef QConnectClientConfiguration ClientConfigurationType;
      typedef QConnectEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QConnectClient(const Aws::QConnect::QConnectClientConfiguration& clientConfiguration = Aws::QConnect::QConnectClientConfiguration(),
                       std::shared_ptr<QConnectEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QConnectClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<QConnectEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::QConnect::QConnectClientConfiguration& clientConfiguration = Aws::QConnect::QConnectClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        QConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<QConnectEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::QConnect::QConnectClientConfiguration& clientConfiguration = Aws::QConnect::QConnectClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QConnectClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        QConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~QConnectClient();

        /**
         * <p>Creates an Amazon Q in Connect assistant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/CreateAssistant">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssistantOutcome CreateAssistant(const Model::CreateAssistantRequest& request) const;

        /**
         * A Callable wrapper for CreateAssistant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAssistantRequestT = Model::CreateAssistantRequest>
        Model::CreateAssistantOutcomeCallable CreateAssistantCallable(const CreateAssistantRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::CreateAssistant, request);
        }

        /**
         * An Async wrapper for CreateAssistant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAssistantRequestT = Model::CreateAssistantRequest>
        void CreateAssistantAsync(const CreateAssistantRequestT& request, const CreateAssistantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::CreateAssistant, request, handler, context);
        }

        /**
         * <p>Creates an association between an Amazon Q in Connect assistant and another
         * resource. Currently, the only supported association is with a knowledge base. An
         * assistant can have only a single association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/CreateAssistantAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssistantAssociationOutcome CreateAssistantAssociation(const Model::CreateAssistantAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateAssistantAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAssistantAssociationRequestT = Model::CreateAssistantAssociationRequest>
        Model::CreateAssistantAssociationOutcomeCallable CreateAssistantAssociationCallable(const CreateAssistantAssociationRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::CreateAssistantAssociation, request);
        }

        /**
         * An Async wrapper for CreateAssistantAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAssistantAssociationRequestT = Model::CreateAssistantAssociationRequest>
        void CreateAssistantAssociationAsync(const CreateAssistantAssociationRequestT& request, const CreateAssistantAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::CreateAssistantAssociation, request, handler, context);
        }

        /**
         * <p>Creates Amazon Q content. Before to calling this API, use <a
         * href="https://docs.aws.amazon.com/amazon-q-connect/latest/APIReference/API_StartContentUpload.html">StartContentUpload</a>
         * to upload an asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/CreateContent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContentOutcome CreateContent(const Model::CreateContentRequest& request) const;

        /**
         * A Callable wrapper for CreateContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateContentRequestT = Model::CreateContentRequest>
        Model::CreateContentOutcomeCallable CreateContentCallable(const CreateContentRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::CreateContent, request);
        }

        /**
         * An Async wrapper for CreateContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateContentRequestT = Model::CreateContentRequest>
        void CreateContentAsync(const CreateContentRequestT& request, const CreateContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::CreateContent, request, handler, context);
        }

        /**
         * <p>Creates a knowledge base.</p>  <p>When using this API, you cannot reuse
         * <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/Welcome.html">Amazon
         * AppIntegrations</a> DataIntegrations with external knowledge bases such as
         * Salesforce and ServiceNow. If you do, you'll get an
         * <code>InvalidRequestException</code> error. </p> <p>For example, you're
         * programmatically managing your external knowledge base, and you want to add or
         * remove one of the fields that is being ingested from Salesforce. Do the
         * following:</p> <ol> <li> <p>Call <a
         * href="https://docs.aws.amazon.com/amazon-q-connect/latest/APIReference/API_DeleteKnowledgeBase.html">DeleteKnowledgeBase</a>.</p>
         * </li> <li> <p>Call <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_DeleteDataIntegration.html">DeleteDataIntegration</a>.</p>
         * </li> <li> <p>Call <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
         * to recreate the DataIntegration or a create different one.</p> </li> <li>
         * <p>Call CreateKnowledgeBase.</p> </li> </ol> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/CreateKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKnowledgeBaseOutcome CreateKnowledgeBase(const Model::CreateKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for CreateKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateKnowledgeBaseRequestT = Model::CreateKnowledgeBaseRequest>
        Model::CreateKnowledgeBaseOutcomeCallable CreateKnowledgeBaseCallable(const CreateKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::CreateKnowledgeBase, request);
        }

        /**
         * An Async wrapper for CreateKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateKnowledgeBaseRequestT = Model::CreateKnowledgeBaseRequest>
        void CreateKnowledgeBaseAsync(const CreateKnowledgeBaseRequestT& request, const CreateKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::CreateKnowledgeBase, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Q quick response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/CreateQuickResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQuickResponseOutcome CreateQuickResponse(const Model::CreateQuickResponseRequest& request) const;

        /**
         * A Callable wrapper for CreateQuickResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateQuickResponseRequestT = Model::CreateQuickResponseRequest>
        Model::CreateQuickResponseOutcomeCallable CreateQuickResponseCallable(const CreateQuickResponseRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::CreateQuickResponse, request);
        }

        /**
         * An Async wrapper for CreateQuickResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateQuickResponseRequestT = Model::CreateQuickResponseRequest>
        void CreateQuickResponseAsync(const CreateQuickResponseRequestT& request, const CreateQuickResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::CreateQuickResponse, request, handler, context);
        }

        /**
         * <p>Creates a session. A session is a contextual container used for generating
         * recommendations. Amazon Connect creates a new Amazon Q session for each contact
         * on which Amazon Q is enabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/CreateSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSessionOutcome CreateSession(const Model::CreateSessionRequest& request) const;

        /**
         * A Callable wrapper for CreateSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSessionRequestT = Model::CreateSessionRequest>
        Model::CreateSessionOutcomeCallable CreateSessionCallable(const CreateSessionRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::CreateSession, request);
        }

        /**
         * An Async wrapper for CreateSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSessionRequestT = Model::CreateSessionRequest>
        void CreateSessionAsync(const CreateSessionRequestT& request, const CreateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::CreateSession, request, handler, context);
        }

        /**
         * <p>Deletes an assistant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DeleteAssistant">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssistantOutcome DeleteAssistant(const Model::DeleteAssistantRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssistant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAssistantRequestT = Model::DeleteAssistantRequest>
        Model::DeleteAssistantOutcomeCallable DeleteAssistantCallable(const DeleteAssistantRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::DeleteAssistant, request);
        }

        /**
         * An Async wrapper for DeleteAssistant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAssistantRequestT = Model::DeleteAssistantRequest>
        void DeleteAssistantAsync(const DeleteAssistantRequestT& request, const DeleteAssistantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::DeleteAssistant, request, handler, context);
        }

        /**
         * <p>Deletes an assistant association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DeleteAssistantAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssistantAssociationOutcome DeleteAssistantAssociation(const Model::DeleteAssistantAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssistantAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAssistantAssociationRequestT = Model::DeleteAssistantAssociationRequest>
        Model::DeleteAssistantAssociationOutcomeCallable DeleteAssistantAssociationCallable(const DeleteAssistantAssociationRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::DeleteAssistantAssociation, request);
        }

        /**
         * An Async wrapper for DeleteAssistantAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAssistantAssociationRequestT = Model::DeleteAssistantAssociationRequest>
        void DeleteAssistantAssociationAsync(const DeleteAssistantAssociationRequestT& request, const DeleteAssistantAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::DeleteAssistantAssociation, request, handler, context);
        }

        /**
         * <p>Deletes the content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DeleteContent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContentOutcome DeleteContent(const Model::DeleteContentRequest& request) const;

        /**
         * A Callable wrapper for DeleteContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteContentRequestT = Model::DeleteContentRequest>
        Model::DeleteContentOutcomeCallable DeleteContentCallable(const DeleteContentRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::DeleteContent, request);
        }

        /**
         * An Async wrapper for DeleteContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteContentRequestT = Model::DeleteContentRequest>
        void DeleteContentAsync(const DeleteContentRequestT& request, const DeleteContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::DeleteContent, request, handler, context);
        }

        /**
         * <p>Deletes the quick response import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DeleteImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImportJobOutcome DeleteImportJob(const Model::DeleteImportJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteImportJobRequestT = Model::DeleteImportJobRequest>
        Model::DeleteImportJobOutcomeCallable DeleteImportJobCallable(const DeleteImportJobRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::DeleteImportJob, request);
        }

        /**
         * An Async wrapper for DeleteImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteImportJobRequestT = Model::DeleteImportJobRequest>
        void DeleteImportJobAsync(const DeleteImportJobRequestT& request, const DeleteImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::DeleteImportJob, request, handler, context);
        }

        /**
         * <p>Deletes the knowledge base.</p>  <p>When you use this API to delete an
         * external knowledge base such as Salesforce or ServiceNow, you must also delete
         * the <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/Welcome.html">Amazon
         * AppIntegrations</a> DataIntegration. This is because you can't reuse the
         * DataIntegration after it's been associated with an external knowledge base.
         * However, you can delete and recreate it. See <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_DeleteDataIntegration.html">DeleteDataIntegration</a>
         * and <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
         * in the <i>Amazon AppIntegrations API Reference</i>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DeleteKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKnowledgeBaseOutcome DeleteKnowledgeBase(const Model::DeleteKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for DeleteKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteKnowledgeBaseRequestT = Model::DeleteKnowledgeBaseRequest>
        Model::DeleteKnowledgeBaseOutcomeCallable DeleteKnowledgeBaseCallable(const DeleteKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::DeleteKnowledgeBase, request);
        }

        /**
         * An Async wrapper for DeleteKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteKnowledgeBaseRequestT = Model::DeleteKnowledgeBaseRequest>
        void DeleteKnowledgeBaseAsync(const DeleteKnowledgeBaseRequestT& request, const DeleteKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::DeleteKnowledgeBase, request, handler, context);
        }

        /**
         * <p>Deletes a quick response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DeleteQuickResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQuickResponseOutcome DeleteQuickResponse(const Model::DeleteQuickResponseRequest& request) const;

        /**
         * A Callable wrapper for DeleteQuickResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteQuickResponseRequestT = Model::DeleteQuickResponseRequest>
        Model::DeleteQuickResponseOutcomeCallable DeleteQuickResponseCallable(const DeleteQuickResponseRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::DeleteQuickResponse, request);
        }

        /**
         * An Async wrapper for DeleteQuickResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteQuickResponseRequestT = Model::DeleteQuickResponseRequest>
        void DeleteQuickResponseAsync(const DeleteQuickResponseRequestT& request, const DeleteQuickResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::DeleteQuickResponse, request, handler, context);
        }

        /**
         * <p>Retrieves information about an assistant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GetAssistant">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssistantOutcome GetAssistant(const Model::GetAssistantRequest& request) const;

        /**
         * A Callable wrapper for GetAssistant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAssistantRequestT = Model::GetAssistantRequest>
        Model::GetAssistantOutcomeCallable GetAssistantCallable(const GetAssistantRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::GetAssistant, request);
        }

        /**
         * An Async wrapper for GetAssistant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAssistantRequestT = Model::GetAssistantRequest>
        void GetAssistantAsync(const GetAssistantRequestT& request, const GetAssistantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::GetAssistant, request, handler, context);
        }

        /**
         * <p>Retrieves information about an assistant association.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GetAssistantAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssistantAssociationOutcome GetAssistantAssociation(const Model::GetAssistantAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetAssistantAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAssistantAssociationRequestT = Model::GetAssistantAssociationRequest>
        Model::GetAssistantAssociationOutcomeCallable GetAssistantAssociationCallable(const GetAssistantAssociationRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::GetAssistantAssociation, request);
        }

        /**
         * An Async wrapper for GetAssistantAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAssistantAssociationRequestT = Model::GetAssistantAssociationRequest>
        void GetAssistantAssociationAsync(const GetAssistantAssociationRequestT& request, const GetAssistantAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::GetAssistantAssociation, request, handler, context);
        }

        /**
         * <p>Retrieves content, including a pre-signed URL to download the
         * content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GetContent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContentOutcome GetContent(const Model::GetContentRequest& request) const;

        /**
         * A Callable wrapper for GetContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContentRequestT = Model::GetContentRequest>
        Model::GetContentOutcomeCallable GetContentCallable(const GetContentRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::GetContent, request);
        }

        /**
         * An Async wrapper for GetContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContentRequestT = Model::GetContentRequest>
        void GetContentAsync(const GetContentRequestT& request, const GetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::GetContent, request, handler, context);
        }

        /**
         * <p>Retrieves summary information about the content.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GetContentSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContentSummaryOutcome GetContentSummary(const Model::GetContentSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetContentSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContentSummaryRequestT = Model::GetContentSummaryRequest>
        Model::GetContentSummaryOutcomeCallable GetContentSummaryCallable(const GetContentSummaryRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::GetContentSummary, request);
        }

        /**
         * An Async wrapper for GetContentSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContentSummaryRequestT = Model::GetContentSummaryRequest>
        void GetContentSummaryAsync(const GetContentSummaryRequestT& request, const GetContentSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::GetContentSummary, request, handler, context);
        }

        /**
         * <p>Retrieves the started import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportJobOutcome GetImportJob(const Model::GetImportJobRequest& request) const;

        /**
         * A Callable wrapper for GetImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetImportJobRequestT = Model::GetImportJobRequest>
        Model::GetImportJobOutcomeCallable GetImportJobCallable(const GetImportJobRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::GetImportJob, request);
        }

        /**
         * An Async wrapper for GetImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetImportJobRequestT = Model::GetImportJobRequest>
        void GetImportJobAsync(const GetImportJobRequestT& request, const GetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::GetImportJob, request, handler, context);
        }

        /**
         * <p>Retrieves information about the knowledge base.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GetKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKnowledgeBaseOutcome GetKnowledgeBase(const Model::GetKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for GetKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKnowledgeBaseRequestT = Model::GetKnowledgeBaseRequest>
        Model::GetKnowledgeBaseOutcomeCallable GetKnowledgeBaseCallable(const GetKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::GetKnowledgeBase, request);
        }

        /**
         * An Async wrapper for GetKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKnowledgeBaseRequestT = Model::GetKnowledgeBaseRequest>
        void GetKnowledgeBaseAsync(const GetKnowledgeBaseRequestT& request, const GetKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::GetKnowledgeBase, request, handler, context);
        }

        /**
         * <p>Retrieves the quick response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GetQuickResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQuickResponseOutcome GetQuickResponse(const Model::GetQuickResponseRequest& request) const;

        /**
         * A Callable wrapper for GetQuickResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQuickResponseRequestT = Model::GetQuickResponseRequest>
        Model::GetQuickResponseOutcomeCallable GetQuickResponseCallable(const GetQuickResponseRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::GetQuickResponse, request);
        }

        /**
         * An Async wrapper for GetQuickResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQuickResponseRequestT = Model::GetQuickResponseRequest>
        void GetQuickResponseAsync(const GetQuickResponseRequestT& request, const GetQuickResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::GetQuickResponse, request, handler, context);
        }

        /**
         * <p>Retrieves information for a specified session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GetSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSessionOutcome GetSession(const Model::GetSessionRequest& request) const;

        /**
         * A Callable wrapper for GetSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSessionRequestT = Model::GetSessionRequest>
        Model::GetSessionOutcomeCallable GetSessionCallable(const GetSessionRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::GetSession, request);
        }

        /**
         * An Async wrapper for GetSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSessionRequestT = Model::GetSessionRequest>
        void GetSessionAsync(const GetSessionRequestT& request, const GetSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::GetSession, request, handler, context);
        }

        /**
         * <p>Lists information about assistant associations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ListAssistantAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssistantAssociationsOutcome ListAssistantAssociations(const Model::ListAssistantAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListAssistantAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssistantAssociationsRequestT = Model::ListAssistantAssociationsRequest>
        Model::ListAssistantAssociationsOutcomeCallable ListAssistantAssociationsCallable(const ListAssistantAssociationsRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::ListAssistantAssociations, request);
        }

        /**
         * An Async wrapper for ListAssistantAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssistantAssociationsRequestT = Model::ListAssistantAssociationsRequest>
        void ListAssistantAssociationsAsync(const ListAssistantAssociationsRequestT& request, const ListAssistantAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::ListAssistantAssociations, request, handler, context);
        }

        /**
         * <p>Lists information about assistants.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ListAssistants">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssistantsOutcome ListAssistants(const Model::ListAssistantsRequest& request) const;

        /**
         * A Callable wrapper for ListAssistants that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssistantsRequestT = Model::ListAssistantsRequest>
        Model::ListAssistantsOutcomeCallable ListAssistantsCallable(const ListAssistantsRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::ListAssistants, request);
        }

        /**
         * An Async wrapper for ListAssistants that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssistantsRequestT = Model::ListAssistantsRequest>
        void ListAssistantsAsync(const ListAssistantsRequestT& request, const ListAssistantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::ListAssistants, request, handler, context);
        }

        /**
         * <p>Lists the content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ListContents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContentsOutcome ListContents(const Model::ListContentsRequest& request) const;

        /**
         * A Callable wrapper for ListContents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListContentsRequestT = Model::ListContentsRequest>
        Model::ListContentsOutcomeCallable ListContentsCallable(const ListContentsRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::ListContents, request);
        }

        /**
         * An Async wrapper for ListContents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListContentsRequestT = Model::ListContentsRequest>
        void ListContentsAsync(const ListContentsRequestT& request, const ListContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::ListContents, request, handler, context);
        }

        /**
         * <p>Lists information about import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ListImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImportJobsOutcome ListImportJobs(const Model::ListImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImportJobsRequestT = Model::ListImportJobsRequest>
        Model::ListImportJobsOutcomeCallable ListImportJobsCallable(const ListImportJobsRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::ListImportJobs, request);
        }

        /**
         * An Async wrapper for ListImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImportJobsRequestT = Model::ListImportJobsRequest>
        void ListImportJobsAsync(const ListImportJobsRequestT& request, const ListImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::ListImportJobs, request, handler, context);
        }

        /**
         * <p>Lists the knowledge bases.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ListKnowledgeBases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKnowledgeBasesOutcome ListKnowledgeBases(const Model::ListKnowledgeBasesRequest& request) const;

        /**
         * A Callable wrapper for ListKnowledgeBases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKnowledgeBasesRequestT = Model::ListKnowledgeBasesRequest>
        Model::ListKnowledgeBasesOutcomeCallable ListKnowledgeBasesCallable(const ListKnowledgeBasesRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::ListKnowledgeBases, request);
        }

        /**
         * An Async wrapper for ListKnowledgeBases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKnowledgeBasesRequestT = Model::ListKnowledgeBasesRequest>
        void ListKnowledgeBasesAsync(const ListKnowledgeBasesRequestT& request, const ListKnowledgeBasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::ListKnowledgeBases, request, handler, context);
        }

        /**
         * <p>Lists information about quick response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ListQuickResponses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQuickResponsesOutcome ListQuickResponses(const Model::ListQuickResponsesRequest& request) const;

        /**
         * A Callable wrapper for ListQuickResponses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListQuickResponsesRequestT = Model::ListQuickResponsesRequest>
        Model::ListQuickResponsesOutcomeCallable ListQuickResponsesCallable(const ListQuickResponsesRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::ListQuickResponses, request);
        }

        /**
         * An Async wrapper for ListQuickResponses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQuickResponsesRequestT = Model::ListQuickResponsesRequest>
        void ListQuickResponsesAsync(const ListQuickResponsesRequestT& request, const ListQuickResponsesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::ListQuickResponses, request, handler, context);
        }

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Removes the specified recommendations from the specified assistant's queue of
         * newly available recommendations. You can use this API in conjunction with <a
         * href="https://docs.aws.amazon.com/amazon-q-connect/latest/APIReference/API_GetRecommendations.html">GetRecommendations</a>
         * and a <code>waitTimeSeconds</code> input for long-polling behavior and avoiding
         * duplicate recommendations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/NotifyRecommendationsReceived">AWS
         * API Reference</a></p>
         */
        virtual Model::NotifyRecommendationsReceivedOutcome NotifyRecommendationsReceived(const Model::NotifyRecommendationsReceivedRequest& request) const;

        /**
         * A Callable wrapper for NotifyRecommendationsReceived that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename NotifyRecommendationsReceivedRequestT = Model::NotifyRecommendationsReceivedRequest>
        Model::NotifyRecommendationsReceivedOutcomeCallable NotifyRecommendationsReceivedCallable(const NotifyRecommendationsReceivedRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::NotifyRecommendationsReceived, request);
        }

        /**
         * An Async wrapper for NotifyRecommendationsReceived that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename NotifyRecommendationsReceivedRequestT = Model::NotifyRecommendationsReceivedRequest>
        void NotifyRecommendationsReceivedAsync(const NotifyRecommendationsReceivedRequestT& request, const NotifyRecommendationsReceivedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::NotifyRecommendationsReceived, request, handler, context);
        }

        /**
         * <p>Provides feedback against the specified assistant for the specified target.
         * This API only supports generative targets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/PutFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFeedbackOutcome PutFeedback(const Model::PutFeedbackRequest& request) const;

        /**
         * A Callable wrapper for PutFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutFeedbackRequestT = Model::PutFeedbackRequest>
        Model::PutFeedbackOutcomeCallable PutFeedbackCallable(const PutFeedbackRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::PutFeedback, request);
        }

        /**
         * An Async wrapper for PutFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutFeedbackRequestT = Model::PutFeedbackRequest>
        void PutFeedbackAsync(const PutFeedbackRequestT& request, const PutFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::PutFeedback, request, handler, context);
        }

        /**
         * <p>Removes a URI template from a knowledge base.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/RemoveKnowledgeBaseTemplateUri">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveKnowledgeBaseTemplateUriOutcome RemoveKnowledgeBaseTemplateUri(const Model::RemoveKnowledgeBaseTemplateUriRequest& request) const;

        /**
         * A Callable wrapper for RemoveKnowledgeBaseTemplateUri that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveKnowledgeBaseTemplateUriRequestT = Model::RemoveKnowledgeBaseTemplateUriRequest>
        Model::RemoveKnowledgeBaseTemplateUriOutcomeCallable RemoveKnowledgeBaseTemplateUriCallable(const RemoveKnowledgeBaseTemplateUriRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::RemoveKnowledgeBaseTemplateUri, request);
        }

        /**
         * An Async wrapper for RemoveKnowledgeBaseTemplateUri that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveKnowledgeBaseTemplateUriRequestT = Model::RemoveKnowledgeBaseTemplateUriRequest>
        void RemoveKnowledgeBaseTemplateUriAsync(const RemoveKnowledgeBaseTemplateUriRequestT& request, const RemoveKnowledgeBaseTemplateUriResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::RemoveKnowledgeBaseTemplateUri, request, handler, context);
        }

        /**
         * <p>Searches for content in a specified knowledge base. Can be used to get a
         * specific content resource by its name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SearchContent">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchContentOutcome SearchContent(const Model::SearchContentRequest& request) const;

        /**
         * A Callable wrapper for SearchContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchContentRequestT = Model::SearchContentRequest>
        Model::SearchContentOutcomeCallable SearchContentCallable(const SearchContentRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::SearchContent, request);
        }

        /**
         * An Async wrapper for SearchContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchContentRequestT = Model::SearchContentRequest>
        void SearchContentAsync(const SearchContentRequestT& request, const SearchContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::SearchContent, request, handler, context);
        }

        /**
         * <p>Searches existing Amazon Q quick responses in an Amazon Q knowledge
         * base.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SearchQuickResponses">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchQuickResponsesOutcome SearchQuickResponses(const Model::SearchQuickResponsesRequest& request) const;

        /**
         * A Callable wrapper for SearchQuickResponses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchQuickResponsesRequestT = Model::SearchQuickResponsesRequest>
        Model::SearchQuickResponsesOutcomeCallable SearchQuickResponsesCallable(const SearchQuickResponsesRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::SearchQuickResponses, request);
        }

        /**
         * An Async wrapper for SearchQuickResponses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchQuickResponsesRequestT = Model::SearchQuickResponsesRequest>
        void SearchQuickResponsesAsync(const SearchQuickResponsesRequestT& request, const SearchQuickResponsesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::SearchQuickResponses, request, handler, context);
        }

        /**
         * <p>Searches for sessions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SearchSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchSessionsOutcome SearchSessions(const Model::SearchSessionsRequest& request) const;

        /**
         * A Callable wrapper for SearchSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchSessionsRequestT = Model::SearchSessionsRequest>
        Model::SearchSessionsOutcomeCallable SearchSessionsCallable(const SearchSessionsRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::SearchSessions, request);
        }

        /**
         * An Async wrapper for SearchSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchSessionsRequestT = Model::SearchSessionsRequest>
        void SearchSessionsAsync(const SearchSessionsRequestT& request, const SearchSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::SearchSessions, request, handler, context);
        }

        /**
         * <p>Get a URL to upload content to a knowledge base. To upload content, first
         * make a PUT request to the returned URL with your file, making sure to include
         * the required headers. Then use <a
         * href="https://docs.aws.amazon.com/amazon-q-connect/latest/APIReference/API_CreateContent.html">CreateContent</a>
         * to finalize the content creation process or <a
         * href="https://docs.aws.amazon.com/amazon-q-connect/latest/APIReference/API_UpdateContent.html">UpdateContent</a>
         * to modify an existing resource. You can only upload content to a knowledge base
         * of type CUSTOM.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/StartContentUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::StartContentUploadOutcome StartContentUpload(const Model::StartContentUploadRequest& request) const;

        /**
         * A Callable wrapper for StartContentUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartContentUploadRequestT = Model::StartContentUploadRequest>
        Model::StartContentUploadOutcomeCallable StartContentUploadCallable(const StartContentUploadRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::StartContentUpload, request);
        }

        /**
         * An Async wrapper for StartContentUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartContentUploadRequestT = Model::StartContentUploadRequest>
        void StartContentUploadAsync(const StartContentUploadRequestT& request, const StartContentUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::StartContentUpload, request, handler, context);
        }

        /**
         * <p>Start an asynchronous job to import Amazon Q resources from an uploaded
         * source file. Before calling this API, use <a
         * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_StartContentUpload.html">StartContentUpload</a>
         * to upload an asset that contains the resource data.</p> <ul> <li> <p>For
         * importing Amazon Q quick responses, you need to upload a csv file including the
         * quick responses. For information about how to format the csv file for importing
         * quick responses, see <a
         * href="https://docs.aws.amazon.com/console/connect/quick-responses/add-data">Import
         * quick responses</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/StartImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImportJobOutcome StartImportJob(const Model::StartImportJobRequest& request) const;

        /**
         * A Callable wrapper for StartImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartImportJobRequestT = Model::StartImportJobRequest>
        Model::StartImportJobOutcomeCallable StartImportJobCallable(const StartImportJobRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::StartImportJob, request);
        }

        /**
         * An Async wrapper for StartImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartImportJobRequestT = Model::StartImportJobRequest>
        void StartImportJobAsync(const StartImportJobRequestT& request, const StartImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::StartImportJob, request, handler, context);
        }

        /**
         * <p>Adds the specified tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates information about the content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/UpdateContent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContentOutcome UpdateContent(const Model::UpdateContentRequest& request) const;

        /**
         * A Callable wrapper for UpdateContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContentRequestT = Model::UpdateContentRequest>
        Model::UpdateContentOutcomeCallable UpdateContentCallable(const UpdateContentRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::UpdateContent, request);
        }

        /**
         * An Async wrapper for UpdateContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContentRequestT = Model::UpdateContentRequest>
        void UpdateContentAsync(const UpdateContentRequestT& request, const UpdateContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::UpdateContent, request, handler, context);
        }

        /**
         * <p>Updates the template URI of a knowledge base. This is only supported for
         * knowledge bases of type EXTERNAL. Include a single variable in
         * <code>${variable}</code> format; this interpolated by Amazon Q using ingested
         * content. For example, if you ingest a Salesforce article, it has an
         * <code>Id</code> value, and you can set the template URI to
         * <code>https://myInstanceName.lightning.force.com/lightning/r/Knowledge__kav/ *${Id}* /view</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/UpdateKnowledgeBaseTemplateUri">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateKnowledgeBaseTemplateUriOutcome UpdateKnowledgeBaseTemplateUri(const Model::UpdateKnowledgeBaseTemplateUriRequest& request) const;

        /**
         * A Callable wrapper for UpdateKnowledgeBaseTemplateUri that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateKnowledgeBaseTemplateUriRequestT = Model::UpdateKnowledgeBaseTemplateUriRequest>
        Model::UpdateKnowledgeBaseTemplateUriOutcomeCallable UpdateKnowledgeBaseTemplateUriCallable(const UpdateKnowledgeBaseTemplateUriRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::UpdateKnowledgeBaseTemplateUri, request);
        }

        /**
         * An Async wrapper for UpdateKnowledgeBaseTemplateUri that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateKnowledgeBaseTemplateUriRequestT = Model::UpdateKnowledgeBaseTemplateUriRequest>
        void UpdateKnowledgeBaseTemplateUriAsync(const UpdateKnowledgeBaseTemplateUriRequestT& request, const UpdateKnowledgeBaseTemplateUriResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::UpdateKnowledgeBaseTemplateUri, request, handler, context);
        }

        /**
         * <p>Updates an existing Amazon Q quick response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/UpdateQuickResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQuickResponseOutcome UpdateQuickResponse(const Model::UpdateQuickResponseRequest& request) const;

        /**
         * A Callable wrapper for UpdateQuickResponse that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQuickResponseRequestT = Model::UpdateQuickResponseRequest>
        Model::UpdateQuickResponseOutcomeCallable UpdateQuickResponseCallable(const UpdateQuickResponseRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::UpdateQuickResponse, request);
        }

        /**
         * An Async wrapper for UpdateQuickResponse that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQuickResponseRequestT = Model::UpdateQuickResponseRequest>
        void UpdateQuickResponseAsync(const UpdateQuickResponseRequestT& request, const UpdateQuickResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::UpdateQuickResponse, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<QConnectEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<QConnectClient>;
      void init(const QConnectClientConfiguration& clientConfiguration);

      QConnectClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<QConnectEndpointProviderBase> m_endpointProvider;
  };

} // namespace QConnect
} // namespace Aws
