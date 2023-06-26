/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wisdom/ConnectWisdomServiceServiceClientModel.h>

namespace Aws
{
namespace ConnectWisdomService
{
  /**
   * <p>Amazon Connect Wisdom delivers agents the information they need to solve
   * customer issues as they're actively speaking with customers. Agents can search
   * across connected repositories from within their agent desktop to find answers
   * quickly. Use Amazon Connect Wisdom to create an assistant and a knowledge base,
   * for example, or manage content by uploading custom files.</p>
   */
  class AWS_CONNECTWISDOMSERVICE_API ConnectWisdomServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ConnectWisdomServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef ConnectWisdomServiceClientConfiguration ClientConfigurationType;
      typedef ConnectWisdomServiceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectWisdomServiceClient(const Aws::ConnectWisdomService::ConnectWisdomServiceClientConfiguration& clientConfiguration = Aws::ConnectWisdomService::ConnectWisdomServiceClientConfiguration(),
                                   std::shared_ptr<ConnectWisdomServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectWisdomServiceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectWisdomServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                   std::shared_ptr<ConnectWisdomServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectWisdomServiceEndpointProvider>(ALLOCATION_TAG),
                                   const Aws::ConnectWisdomService::ConnectWisdomServiceClientConfiguration& clientConfiguration = Aws::ConnectWisdomService::ConnectWisdomServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectWisdomServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<ConnectWisdomServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ConnectWisdomServiceEndpointProvider>(ALLOCATION_TAG),
                                   const Aws::ConnectWisdomService::ConnectWisdomServiceClientConfiguration& clientConfiguration = Aws::ConnectWisdomService::ConnectWisdomServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectWisdomServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectWisdomServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectWisdomServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ConnectWisdomServiceClient();

        /**
         * <p>Creates an Amazon Connect Wisdom assistant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/CreateAssistant">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssistantOutcome CreateAssistant(const Model::CreateAssistantRequest& request) const;

        /**
         * A Callable wrapper for CreateAssistant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAssistantRequestT = Model::CreateAssistantRequest>
        Model::CreateAssistantOutcomeCallable CreateAssistantCallable(const CreateAssistantRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::CreateAssistant, request);
        }

        /**
         * An Async wrapper for CreateAssistant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAssistantRequestT = Model::CreateAssistantRequest>
        void CreateAssistantAsync(const CreateAssistantRequestT& request, const CreateAssistantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::CreateAssistant, request, handler, context);
        }

        /**
         * <p>Creates an association between an Amazon Connect Wisdom assistant and another
         * resource. Currently, the only supported association is with a knowledge base. An
         * assistant can have only a single association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/CreateAssistantAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssistantAssociationOutcome CreateAssistantAssociation(const Model::CreateAssistantAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateAssistantAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAssistantAssociationRequestT = Model::CreateAssistantAssociationRequest>
        Model::CreateAssistantAssociationOutcomeCallable CreateAssistantAssociationCallable(const CreateAssistantAssociationRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::CreateAssistantAssociation, request);
        }

        /**
         * An Async wrapper for CreateAssistantAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAssistantAssociationRequestT = Model::CreateAssistantAssociationRequest>
        void CreateAssistantAssociationAsync(const CreateAssistantAssociationRequestT& request, const CreateAssistantAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::CreateAssistantAssociation, request, handler, context);
        }

        /**
         * <p>Creates Wisdom content. Before to calling this API, use <a
         * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_StartContentUpload.html">StartContentUpload</a>
         * to upload an asset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/CreateContent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContentOutcome CreateContent(const Model::CreateContentRequest& request) const;

        /**
         * A Callable wrapper for CreateContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateContentRequestT = Model::CreateContentRequest>
        Model::CreateContentOutcomeCallable CreateContentCallable(const CreateContentRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::CreateContent, request);
        }

        /**
         * An Async wrapper for CreateContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateContentRequestT = Model::CreateContentRequest>
        void CreateContentAsync(const CreateContentRequestT& request, const CreateContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::CreateContent, request, handler, context);
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
         * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_DeleteKnowledgeBase.html">DeleteKnowledgeBase</a>.</p>
         * </li> <li> <p>Call <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_DeleteDataIntegration.html">DeleteDataIntegration</a>.</p>
         * </li> <li> <p>Call <a
         * href="https://docs.aws.amazon.com/appintegrations/latest/APIReference/API_CreateDataIntegration.html">CreateDataIntegration</a>
         * to recreate the DataIntegration or a create different one.</p> </li> <li>
         * <p>Call CreateKnowledgeBase.</p> </li> </ol> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/CreateKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKnowledgeBaseOutcome CreateKnowledgeBase(const Model::CreateKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for CreateKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateKnowledgeBaseRequestT = Model::CreateKnowledgeBaseRequest>
        Model::CreateKnowledgeBaseOutcomeCallable CreateKnowledgeBaseCallable(const CreateKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::CreateKnowledgeBase, request);
        }

        /**
         * An Async wrapper for CreateKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateKnowledgeBaseRequestT = Model::CreateKnowledgeBaseRequest>
        void CreateKnowledgeBaseAsync(const CreateKnowledgeBaseRequestT& request, const CreateKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::CreateKnowledgeBase, request, handler, context);
        }

        /**
         * <p>Creates a session. A session is a contextual container used for generating
         * recommendations. Amazon Connect creates a new Wisdom session for each contact on
         * which Wisdom is enabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/CreateSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSessionOutcome CreateSession(const Model::CreateSessionRequest& request) const;

        /**
         * A Callable wrapper for CreateSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSessionRequestT = Model::CreateSessionRequest>
        Model::CreateSessionOutcomeCallable CreateSessionCallable(const CreateSessionRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::CreateSession, request);
        }

        /**
         * An Async wrapper for CreateSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSessionRequestT = Model::CreateSessionRequest>
        void CreateSessionAsync(const CreateSessionRequestT& request, const CreateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::CreateSession, request, handler, context);
        }

        /**
         * <p>Deletes an assistant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/DeleteAssistant">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssistantOutcome DeleteAssistant(const Model::DeleteAssistantRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssistant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAssistantRequestT = Model::DeleteAssistantRequest>
        Model::DeleteAssistantOutcomeCallable DeleteAssistantCallable(const DeleteAssistantRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::DeleteAssistant, request);
        }

        /**
         * An Async wrapper for DeleteAssistant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAssistantRequestT = Model::DeleteAssistantRequest>
        void DeleteAssistantAsync(const DeleteAssistantRequestT& request, const DeleteAssistantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::DeleteAssistant, request, handler, context);
        }

        /**
         * <p>Deletes an assistant association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/DeleteAssistantAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssistantAssociationOutcome DeleteAssistantAssociation(const Model::DeleteAssistantAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssistantAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAssistantAssociationRequestT = Model::DeleteAssistantAssociationRequest>
        Model::DeleteAssistantAssociationOutcomeCallable DeleteAssistantAssociationCallable(const DeleteAssistantAssociationRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::DeleteAssistantAssociation, request);
        }

        /**
         * An Async wrapper for DeleteAssistantAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAssistantAssociationRequestT = Model::DeleteAssistantAssociationRequest>
        void DeleteAssistantAssociationAsync(const DeleteAssistantAssociationRequestT& request, const DeleteAssistantAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::DeleteAssistantAssociation, request, handler, context);
        }

        /**
         * <p>Deletes the content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/DeleteContent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContentOutcome DeleteContent(const Model::DeleteContentRequest& request) const;

        /**
         * A Callable wrapper for DeleteContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteContentRequestT = Model::DeleteContentRequest>
        Model::DeleteContentOutcomeCallable DeleteContentCallable(const DeleteContentRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::DeleteContent, request);
        }

        /**
         * An Async wrapper for DeleteContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteContentRequestT = Model::DeleteContentRequest>
        void DeleteContentAsync(const DeleteContentRequestT& request, const DeleteContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::DeleteContent, request, handler, context);
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/DeleteKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKnowledgeBaseOutcome DeleteKnowledgeBase(const Model::DeleteKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for DeleteKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteKnowledgeBaseRequestT = Model::DeleteKnowledgeBaseRequest>
        Model::DeleteKnowledgeBaseOutcomeCallable DeleteKnowledgeBaseCallable(const DeleteKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::DeleteKnowledgeBase, request);
        }

        /**
         * An Async wrapper for DeleteKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteKnowledgeBaseRequestT = Model::DeleteKnowledgeBaseRequest>
        void DeleteKnowledgeBaseAsync(const DeleteKnowledgeBaseRequestT& request, const DeleteKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::DeleteKnowledgeBase, request, handler, context);
        }

        /**
         * <p>Retrieves information about an assistant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/GetAssistant">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssistantOutcome GetAssistant(const Model::GetAssistantRequest& request) const;

        /**
         * A Callable wrapper for GetAssistant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAssistantRequestT = Model::GetAssistantRequest>
        Model::GetAssistantOutcomeCallable GetAssistantCallable(const GetAssistantRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::GetAssistant, request);
        }

        /**
         * An Async wrapper for GetAssistant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAssistantRequestT = Model::GetAssistantRequest>
        void GetAssistantAsync(const GetAssistantRequestT& request, const GetAssistantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::GetAssistant, request, handler, context);
        }

        /**
         * <p>Retrieves information about an assistant association.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/GetAssistantAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssistantAssociationOutcome GetAssistantAssociation(const Model::GetAssistantAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetAssistantAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAssistantAssociationRequestT = Model::GetAssistantAssociationRequest>
        Model::GetAssistantAssociationOutcomeCallable GetAssistantAssociationCallable(const GetAssistantAssociationRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::GetAssistantAssociation, request);
        }

        /**
         * An Async wrapper for GetAssistantAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAssistantAssociationRequestT = Model::GetAssistantAssociationRequest>
        void GetAssistantAssociationAsync(const GetAssistantAssociationRequestT& request, const GetAssistantAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::GetAssistantAssociation, request, handler, context);
        }

        /**
         * <p>Retrieves content, including a pre-signed URL to download the
         * content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/GetContent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContentOutcome GetContent(const Model::GetContentRequest& request) const;

        /**
         * A Callable wrapper for GetContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContentRequestT = Model::GetContentRequest>
        Model::GetContentOutcomeCallable GetContentCallable(const GetContentRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::GetContent, request);
        }

        /**
         * An Async wrapper for GetContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContentRequestT = Model::GetContentRequest>
        void GetContentAsync(const GetContentRequestT& request, const GetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::GetContent, request, handler, context);
        }

        /**
         * <p>Retrieves summary information about the content.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/GetContentSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContentSummaryOutcome GetContentSummary(const Model::GetContentSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetContentSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContentSummaryRequestT = Model::GetContentSummaryRequest>
        Model::GetContentSummaryOutcomeCallable GetContentSummaryCallable(const GetContentSummaryRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::GetContentSummary, request);
        }

        /**
         * An Async wrapper for GetContentSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContentSummaryRequestT = Model::GetContentSummaryRequest>
        void GetContentSummaryAsync(const GetContentSummaryRequestT& request, const GetContentSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::GetContentSummary, request, handler, context);
        }

        /**
         * <p>Retrieves information about the knowledge base.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/GetKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKnowledgeBaseOutcome GetKnowledgeBase(const Model::GetKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for GetKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKnowledgeBaseRequestT = Model::GetKnowledgeBaseRequest>
        Model::GetKnowledgeBaseOutcomeCallable GetKnowledgeBaseCallable(const GetKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::GetKnowledgeBase, request);
        }

        /**
         * An Async wrapper for GetKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKnowledgeBaseRequestT = Model::GetKnowledgeBaseRequest>
        void GetKnowledgeBaseAsync(const GetKnowledgeBaseRequestT& request, const GetKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::GetKnowledgeBase, request, handler, context);
        }

        /**
         * <p>Retrieves recommendations for the specified session. To avoid retrieving the
         * same recommendations in subsequent calls, use <a
         * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_NotifyRecommendationsReceived.html">NotifyRecommendationsReceived</a>.
         * This API supports long-polling behavior with the <code>waitTimeSeconds</code>
         * parameter. Short poll is the default behavior and only returns recommendations
         * already available. To perform a manual query against an assistant, use <a
         * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_QueryAssistant.html">QueryAssistant</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/GetRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecommendationsOutcome GetRecommendations(const Model::GetRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for GetRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRecommendationsRequestT = Model::GetRecommendationsRequest>
        Model::GetRecommendationsOutcomeCallable GetRecommendationsCallable(const GetRecommendationsRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::GetRecommendations, request);
        }

        /**
         * An Async wrapper for GetRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRecommendationsRequestT = Model::GetRecommendationsRequest>
        void GetRecommendationsAsync(const GetRecommendationsRequestT& request, const GetRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::GetRecommendations, request, handler, context);
        }

        /**
         * <p>Retrieves information for a specified session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/GetSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSessionOutcome GetSession(const Model::GetSessionRequest& request) const;

        /**
         * A Callable wrapper for GetSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSessionRequestT = Model::GetSessionRequest>
        Model::GetSessionOutcomeCallable GetSessionCallable(const GetSessionRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::GetSession, request);
        }

        /**
         * An Async wrapper for GetSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSessionRequestT = Model::GetSessionRequest>
        void GetSessionAsync(const GetSessionRequestT& request, const GetSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::GetSession, request, handler, context);
        }

        /**
         * <p>Lists information about assistant associations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/ListAssistantAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssistantAssociationsOutcome ListAssistantAssociations(const Model::ListAssistantAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListAssistantAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssistantAssociationsRequestT = Model::ListAssistantAssociationsRequest>
        Model::ListAssistantAssociationsOutcomeCallable ListAssistantAssociationsCallable(const ListAssistantAssociationsRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::ListAssistantAssociations, request);
        }

        /**
         * An Async wrapper for ListAssistantAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssistantAssociationsRequestT = Model::ListAssistantAssociationsRequest>
        void ListAssistantAssociationsAsync(const ListAssistantAssociationsRequestT& request, const ListAssistantAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::ListAssistantAssociations, request, handler, context);
        }

        /**
         * <p>Lists information about assistants.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/ListAssistants">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssistantsOutcome ListAssistants(const Model::ListAssistantsRequest& request) const;

        /**
         * A Callable wrapper for ListAssistants that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssistantsRequestT = Model::ListAssistantsRequest>
        Model::ListAssistantsOutcomeCallable ListAssistantsCallable(const ListAssistantsRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::ListAssistants, request);
        }

        /**
         * An Async wrapper for ListAssistants that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssistantsRequestT = Model::ListAssistantsRequest>
        void ListAssistantsAsync(const ListAssistantsRequestT& request, const ListAssistantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::ListAssistants, request, handler, context);
        }

        /**
         * <p>Lists the content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/ListContents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContentsOutcome ListContents(const Model::ListContentsRequest& request) const;

        /**
         * A Callable wrapper for ListContents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListContentsRequestT = Model::ListContentsRequest>
        Model::ListContentsOutcomeCallable ListContentsCallable(const ListContentsRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::ListContents, request);
        }

        /**
         * An Async wrapper for ListContents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListContentsRequestT = Model::ListContentsRequest>
        void ListContentsAsync(const ListContentsRequestT& request, const ListContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::ListContents, request, handler, context);
        }

        /**
         * <p>Lists the knowledge bases.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/ListKnowledgeBases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKnowledgeBasesOutcome ListKnowledgeBases(const Model::ListKnowledgeBasesRequest& request) const;

        /**
         * A Callable wrapper for ListKnowledgeBases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKnowledgeBasesRequestT = Model::ListKnowledgeBasesRequest>
        Model::ListKnowledgeBasesOutcomeCallable ListKnowledgeBasesCallable(const ListKnowledgeBasesRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::ListKnowledgeBases, request);
        }

        /**
         * An Async wrapper for ListKnowledgeBases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKnowledgeBasesRequestT = Model::ListKnowledgeBasesRequest>
        void ListKnowledgeBasesAsync(const ListKnowledgeBasesRequestT& request, const ListKnowledgeBasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::ListKnowledgeBases, request, handler, context);
        }

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Removes the specified recommendations from the specified assistant's queue of
         * newly available recommendations. You can use this API in conjunction with <a
         * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_GetRecommendations.html">GetRecommendations</a>
         * and a <code>waitTimeSeconds</code> input for long-polling behavior and avoiding
         * duplicate recommendations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/NotifyRecommendationsReceived">AWS
         * API Reference</a></p>
         */
        virtual Model::NotifyRecommendationsReceivedOutcome NotifyRecommendationsReceived(const Model::NotifyRecommendationsReceivedRequest& request) const;

        /**
         * A Callable wrapper for NotifyRecommendationsReceived that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename NotifyRecommendationsReceivedRequestT = Model::NotifyRecommendationsReceivedRequest>
        Model::NotifyRecommendationsReceivedOutcomeCallable NotifyRecommendationsReceivedCallable(const NotifyRecommendationsReceivedRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::NotifyRecommendationsReceived, request);
        }

        /**
         * An Async wrapper for NotifyRecommendationsReceived that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename NotifyRecommendationsReceivedRequestT = Model::NotifyRecommendationsReceivedRequest>
        void NotifyRecommendationsReceivedAsync(const NotifyRecommendationsReceivedRequestT& request, const NotifyRecommendationsReceivedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::NotifyRecommendationsReceived, request, handler, context);
        }

        /**
         * <p>Performs a manual search against the specified assistant. To retrieve
         * recommendations for an assistant, use <a
         * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_GetRecommendations.html">GetRecommendations</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/QueryAssistant">AWS
         * API Reference</a></p>
         */
        virtual Model::QueryAssistantOutcome QueryAssistant(const Model::QueryAssistantRequest& request) const;

        /**
         * A Callable wrapper for QueryAssistant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename QueryAssistantRequestT = Model::QueryAssistantRequest>
        Model::QueryAssistantOutcomeCallable QueryAssistantCallable(const QueryAssistantRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::QueryAssistant, request);
        }

        /**
         * An Async wrapper for QueryAssistant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename QueryAssistantRequestT = Model::QueryAssistantRequest>
        void QueryAssistantAsync(const QueryAssistantRequestT& request, const QueryAssistantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::QueryAssistant, request, handler, context);
        }

        /**
         * <p>Removes a URI template from a knowledge base.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/RemoveKnowledgeBaseTemplateUri">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveKnowledgeBaseTemplateUriOutcome RemoveKnowledgeBaseTemplateUri(const Model::RemoveKnowledgeBaseTemplateUriRequest& request) const;

        /**
         * A Callable wrapper for RemoveKnowledgeBaseTemplateUri that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveKnowledgeBaseTemplateUriRequestT = Model::RemoveKnowledgeBaseTemplateUriRequest>
        Model::RemoveKnowledgeBaseTemplateUriOutcomeCallable RemoveKnowledgeBaseTemplateUriCallable(const RemoveKnowledgeBaseTemplateUriRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::RemoveKnowledgeBaseTemplateUri, request);
        }

        /**
         * An Async wrapper for RemoveKnowledgeBaseTemplateUri that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveKnowledgeBaseTemplateUriRequestT = Model::RemoveKnowledgeBaseTemplateUriRequest>
        void RemoveKnowledgeBaseTemplateUriAsync(const RemoveKnowledgeBaseTemplateUriRequestT& request, const RemoveKnowledgeBaseTemplateUriResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::RemoveKnowledgeBaseTemplateUri, request, handler, context);
        }

        /**
         * <p>Searches for content in a specified knowledge base. Can be used to get a
         * specific content resource by its name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/SearchContent">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchContentOutcome SearchContent(const Model::SearchContentRequest& request) const;

        /**
         * A Callable wrapper for SearchContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchContentRequestT = Model::SearchContentRequest>
        Model::SearchContentOutcomeCallable SearchContentCallable(const SearchContentRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::SearchContent, request);
        }

        /**
         * An Async wrapper for SearchContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchContentRequestT = Model::SearchContentRequest>
        void SearchContentAsync(const SearchContentRequestT& request, const SearchContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::SearchContent, request, handler, context);
        }

        /**
         * <p>Searches for sessions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/SearchSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchSessionsOutcome SearchSessions(const Model::SearchSessionsRequest& request) const;

        /**
         * A Callable wrapper for SearchSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchSessionsRequestT = Model::SearchSessionsRequest>
        Model::SearchSessionsOutcomeCallable SearchSessionsCallable(const SearchSessionsRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::SearchSessions, request);
        }

        /**
         * An Async wrapper for SearchSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchSessionsRequestT = Model::SearchSessionsRequest>
        void SearchSessionsAsync(const SearchSessionsRequestT& request, const SearchSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::SearchSessions, request, handler, context);
        }

        /**
         * <p>Get a URL to upload content to a knowledge base. To upload content, first
         * make a PUT request to the returned URL with your file, making sure to include
         * the required headers. Then use <a
         * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_CreateContent.html">CreateContent</a>
         * to finalize the content creation process or <a
         * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_UpdateContent.html">UpdateContent</a>
         * to modify an existing resource. You can only upload content to a knowledge base
         * of type CUSTOM.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/StartContentUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::StartContentUploadOutcome StartContentUpload(const Model::StartContentUploadRequest& request) const;

        /**
         * A Callable wrapper for StartContentUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartContentUploadRequestT = Model::StartContentUploadRequest>
        Model::StartContentUploadOutcomeCallable StartContentUploadCallable(const StartContentUploadRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::StartContentUpload, request);
        }

        /**
         * An Async wrapper for StartContentUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartContentUploadRequestT = Model::StartContentUploadRequest>
        void StartContentUploadAsync(const StartContentUploadRequestT& request, const StartContentUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::StartContentUpload, request, handler, context);
        }

        /**
         * <p>Adds the specified tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates information about the content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/UpdateContent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContentOutcome UpdateContent(const Model::UpdateContentRequest& request) const;

        /**
         * A Callable wrapper for UpdateContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContentRequestT = Model::UpdateContentRequest>
        Model::UpdateContentOutcomeCallable UpdateContentCallable(const UpdateContentRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::UpdateContent, request);
        }

        /**
         * An Async wrapper for UpdateContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContentRequestT = Model::UpdateContentRequest>
        void UpdateContentAsync(const UpdateContentRequestT& request, const UpdateContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::UpdateContent, request, handler, context);
        }

        /**
         * <p>Updates the template URI of a knowledge base. This is only supported for
         * knowledge bases of type EXTERNAL. Include a single variable in
         * <code>${variable}</code> format; this interpolated by Wisdom using ingested
         * content. For example, if you ingest a Salesforce article, it has an
         * <code>Id</code> value, and you can set the template URI to
         * <code>https://myInstanceName.lightning.force.com/lightning/r/Knowledge__kav/ *${Id}* /view</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/UpdateKnowledgeBaseTemplateUri">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateKnowledgeBaseTemplateUriOutcome UpdateKnowledgeBaseTemplateUri(const Model::UpdateKnowledgeBaseTemplateUriRequest& request) const;

        /**
         * A Callable wrapper for UpdateKnowledgeBaseTemplateUri that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateKnowledgeBaseTemplateUriRequestT = Model::UpdateKnowledgeBaseTemplateUriRequest>
        Model::UpdateKnowledgeBaseTemplateUriOutcomeCallable UpdateKnowledgeBaseTemplateUriCallable(const UpdateKnowledgeBaseTemplateUriRequestT& request) const
        {
            return SubmitCallable(&ConnectWisdomServiceClient::UpdateKnowledgeBaseTemplateUri, request);
        }

        /**
         * An Async wrapper for UpdateKnowledgeBaseTemplateUri that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateKnowledgeBaseTemplateUriRequestT = Model::UpdateKnowledgeBaseTemplateUriRequest>
        void UpdateKnowledgeBaseTemplateUriAsync(const UpdateKnowledgeBaseTemplateUriRequestT& request, const UpdateKnowledgeBaseTemplateUriResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectWisdomServiceClient::UpdateKnowledgeBaseTemplateUri, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ConnectWisdomServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ConnectWisdomServiceClient>;
      void init(const ConnectWisdomServiceClientConfiguration& clientConfiguration);

      ConnectWisdomServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ConnectWisdomServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace ConnectWisdomService
} // namespace Aws
