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
   * <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_Operations_Amazon_Q_Connect.html">Amazon
   * Q actions</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_Types_Amazon_Q_Connect.html">Amazon
   * Q data types</a> </p> </li> </ul>  <p> <b>Powered by Amazon Bedrock</b>:
   * Amazon Web Services implements <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/abuse-detection.html">automated
   * abuse detection</a>. Because Amazon Q in Connect is built on Amazon Bedrock,
   * users can take full advantage of the controls implemented in Amazon Bedrock to
   * enforce safety, security, and the responsible use of artificial intelligence
   * (AI).</p>  <p>Amazon Q in Connect is a generative AI customer service
   * assistant. It is an LLM-enhanced evolution of Amazon Connect Wisdom that
   * delivers real-time recommendations to help contact center agents resolve
   * customer issues quickly and accurately.</p> <p>Amazon Q in Connect automatically
   * detects customer intent during calls and chats using conversational analytics
   * and natural language understanding (NLU). It then provides agents with
   * immediate, real-time generative responses and suggested actions, and links to
   * relevant documents and articles. Agents can also query Amazon Q in Connect
   * directly using natural language or keywords to answer customer requests.</p>
   * <p>Use the Amazon Q in Connect APIs to create an assistant and a knowledge base,
   * for example, or manage content by uploading custom files.</p> <p>For more
   * information, see <a
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
         * <p>Activates a specific version of the Amazon Q in Connect message template.
         * After the version is activated, the previous active version will be deactivated
         * automatically. You can use the <code>$ACTIVE_VERSION</code> qualifier later to
         * reference the version that is in active status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ActivateMessageTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateMessageTemplateOutcome ActivateMessageTemplate(const Model::ActivateMessageTemplateRequest& request) const;

        /**
         * A Callable wrapper for ActivateMessageTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ActivateMessageTemplateRequestT = Model::ActivateMessageTemplateRequest>
        Model::ActivateMessageTemplateOutcomeCallable ActivateMessageTemplateCallable(const ActivateMessageTemplateRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::ActivateMessageTemplate, request);
        }

        /**
         * An Async wrapper for ActivateMessageTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ActivateMessageTemplateRequestT = Model::ActivateMessageTemplateRequest>
        void ActivateMessageTemplateAsync(const ActivateMessageTemplateRequestT& request, const ActivateMessageTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::ActivateMessageTemplate, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Q in Connect AI Agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/CreateAIAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAIAgentOutcome CreateAIAgent(const Model::CreateAIAgentRequest& request) const;

        /**
         * A Callable wrapper for CreateAIAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAIAgentRequestT = Model::CreateAIAgentRequest>
        Model::CreateAIAgentOutcomeCallable CreateAIAgentCallable(const CreateAIAgentRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::CreateAIAgent, request);
        }

        /**
         * An Async wrapper for CreateAIAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAIAgentRequestT = Model::CreateAIAgentRequest>
        void CreateAIAgentAsync(const CreateAIAgentRequestT& request, const CreateAIAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::CreateAIAgent, request, handler, context);
        }

        /**
         * <p>Creates and Amazon Q in Connect AI Agent version.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/CreateAIAgentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAIAgentVersionOutcome CreateAIAgentVersion(const Model::CreateAIAgentVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateAIAgentVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAIAgentVersionRequestT = Model::CreateAIAgentVersionRequest>
        Model::CreateAIAgentVersionOutcomeCallable CreateAIAgentVersionCallable(const CreateAIAgentVersionRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::CreateAIAgentVersion, request);
        }

        /**
         * An Async wrapper for CreateAIAgentVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAIAgentVersionRequestT = Model::CreateAIAgentVersionRequest>
        void CreateAIAgentVersionAsync(const CreateAIAgentVersionRequestT& request, const CreateAIAgentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::CreateAIAgentVersion, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Q in Connect AI Guardrail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/CreateAIGuardrail">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAIGuardrailOutcome CreateAIGuardrail(const Model::CreateAIGuardrailRequest& request) const;

        /**
         * A Callable wrapper for CreateAIGuardrail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAIGuardrailRequestT = Model::CreateAIGuardrailRequest>
        Model::CreateAIGuardrailOutcomeCallable CreateAIGuardrailCallable(const CreateAIGuardrailRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::CreateAIGuardrail, request);
        }

        /**
         * An Async wrapper for CreateAIGuardrail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAIGuardrailRequestT = Model::CreateAIGuardrailRequest>
        void CreateAIGuardrailAsync(const CreateAIGuardrailRequestT& request, const CreateAIGuardrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::CreateAIGuardrail, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Q in Connect AI Guardrail version.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/CreateAIGuardrailVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAIGuardrailVersionOutcome CreateAIGuardrailVersion(const Model::CreateAIGuardrailVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateAIGuardrailVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAIGuardrailVersionRequestT = Model::CreateAIGuardrailVersionRequest>
        Model::CreateAIGuardrailVersionOutcomeCallable CreateAIGuardrailVersionCallable(const CreateAIGuardrailVersionRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::CreateAIGuardrailVersion, request);
        }

        /**
         * An Async wrapper for CreateAIGuardrailVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAIGuardrailVersionRequestT = Model::CreateAIGuardrailVersionRequest>
        void CreateAIGuardrailVersionAsync(const CreateAIGuardrailVersionRequestT& request, const CreateAIGuardrailVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::CreateAIGuardrailVersion, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Q in Connect AI Prompt.</p>  <p>For more information
         * on supported models, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/create-ai-prompts.html#cli-create-aiprompt">Supported
         * models for system and custom prompts</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/CreateAIPrompt">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAIPromptOutcome CreateAIPrompt(const Model::CreateAIPromptRequest& request) const;

        /**
         * A Callable wrapper for CreateAIPrompt that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAIPromptRequestT = Model::CreateAIPromptRequest>
        Model::CreateAIPromptOutcomeCallable CreateAIPromptCallable(const CreateAIPromptRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::CreateAIPrompt, request);
        }

        /**
         * An Async wrapper for CreateAIPrompt that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAIPromptRequestT = Model::CreateAIPromptRequest>
        void CreateAIPromptAsync(const CreateAIPromptRequestT& request, const CreateAIPromptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::CreateAIPrompt, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Q in Connect AI Prompt version.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/CreateAIPromptVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAIPromptVersionOutcome CreateAIPromptVersion(const Model::CreateAIPromptVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateAIPromptVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAIPromptVersionRequestT = Model::CreateAIPromptVersionRequest>
        Model::CreateAIPromptVersionOutcomeCallable CreateAIPromptVersionCallable(const CreateAIPromptVersionRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::CreateAIPromptVersion, request);
        }

        /**
         * An Async wrapper for CreateAIPromptVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAIPromptVersionRequestT = Model::CreateAIPromptVersionRequest>
        void CreateAIPromptVersionAsync(const CreateAIPromptVersionRequestT& request, const CreateAIPromptVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::CreateAIPromptVersion, request, handler, context);
        }

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
         * <p>Creates Amazon Q in Connect content. Before to calling this API, use <a
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
         * <p>Creates an association between a content resource in a knowledge base and <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/step-by-step-guided-experiences.html">step-by-step
         * guides</a>. Step-by-step guides offer instructions to agents for resolving
         * common customer issues. You create a content association to integrate Amazon Q
         * in Connect and step-by-step guides. </p> <p>After you integrate Amazon Q and
         * step-by-step guides, when Amazon Q provides a recommendation to an agent based
         * on the intent that it's detected, it also provides them with the option to start
         * the step-by-step guide that you have associated with the content.</p> <p>Note
         * the following limitations:</p> <ul> <li> <p>You can create only one content
         * association for each content resource in a knowledge base.</p> </li> <li> <p>You
         * can associate a step-by-step guide with multiple content resources.</p> </li>
         * </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/integrate-q-with-guides.html">Integrate
         * Amazon Q in Connect with step-by-step guides</a> in the <i>Amazon Connect
         * Administrator Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/CreateContentAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContentAssociationOutcome CreateContentAssociation(const Model::CreateContentAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateContentAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateContentAssociationRequestT = Model::CreateContentAssociationRequest>
        Model::CreateContentAssociationOutcomeCallable CreateContentAssociationCallable(const CreateContentAssociationRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::CreateContentAssociation, request);
        }

        /**
         * An Async wrapper for CreateContentAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateContentAssociationRequestT = Model::CreateContentAssociationRequest>
        void CreateContentAssociationAsync(const CreateContentAssociationRequestT& request, const CreateContentAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::CreateContentAssociation, request, handler, context);
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
         * <p>Creates an Amazon Q in Connect message template. The name of the message
         * template has to be unique for each knowledge base. The channel subtype of the
         * message template is immutable and cannot be modified after creation. After the
         * message template is created, you can use the <code>$LATEST</code> qualifier to
         * reference the created message template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/CreateMessageTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMessageTemplateOutcome CreateMessageTemplate(const Model::CreateMessageTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateMessageTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMessageTemplateRequestT = Model::CreateMessageTemplateRequest>
        Model::CreateMessageTemplateOutcomeCallable CreateMessageTemplateCallable(const CreateMessageTemplateRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::CreateMessageTemplate, request);
        }

        /**
         * An Async wrapper for CreateMessageTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMessageTemplateRequestT = Model::CreateMessageTemplateRequest>
        void CreateMessageTemplateAsync(const CreateMessageTemplateRequestT& request, const CreateMessageTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::CreateMessageTemplate, request, handler, context);
        }

        /**
         * <p>Uploads an attachment file to the specified Amazon Q in Connect message
         * template. The name of the message template attachment has to be unique for each
         * message template referenced by the <code>$LATEST</code> qualifier. The body of
         * the attachment file should be encoded using base64 encoding. After the file is
         * uploaded, you can use the pre-signed Amazon S3 URL returned in response to
         * download the uploaded file.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/CreateMessageTemplateAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMessageTemplateAttachmentOutcome CreateMessageTemplateAttachment(const Model::CreateMessageTemplateAttachmentRequest& request) const;

        /**
         * A Callable wrapper for CreateMessageTemplateAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMessageTemplateAttachmentRequestT = Model::CreateMessageTemplateAttachmentRequest>
        Model::CreateMessageTemplateAttachmentOutcomeCallable CreateMessageTemplateAttachmentCallable(const CreateMessageTemplateAttachmentRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::CreateMessageTemplateAttachment, request);
        }

        /**
         * An Async wrapper for CreateMessageTemplateAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMessageTemplateAttachmentRequestT = Model::CreateMessageTemplateAttachmentRequest>
        void CreateMessageTemplateAttachmentAsync(const CreateMessageTemplateAttachmentRequestT& request, const CreateMessageTemplateAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::CreateMessageTemplateAttachment, request, handler, context);
        }

        /**
         * <p>Creates a new Amazon Q in Connect message template version from the current
         * content and configuration of a message template. Versions are immutable and
         * monotonically increasing. Once a version is created, you can reference a
         * specific version of the message template by passing in
         * <code>&lt;message-template-id&gt;:&lt;versionNumber&gt;</code> as the message
         * template identifier. An error is displayed if the supplied
         * <code>messageTemplateContentSha256</code> is different from the
         * <code>messageTemplateContentSha256</code> of the message template with
         * <code>$LATEST</code> qualifier. If multiple
         * <code>CreateMessageTemplateVersion</code> requests are made while the message
         * template remains the same, only the first invocation creates a new version and
         * the succeeding requests will return the same response as the first
         * invocation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/CreateMessageTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMessageTemplateVersionOutcome CreateMessageTemplateVersion(const Model::CreateMessageTemplateVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateMessageTemplateVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMessageTemplateVersionRequestT = Model::CreateMessageTemplateVersionRequest>
        Model::CreateMessageTemplateVersionOutcomeCallable CreateMessageTemplateVersionCallable(const CreateMessageTemplateVersionRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::CreateMessageTemplateVersion, request);
        }

        /**
         * An Async wrapper for CreateMessageTemplateVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMessageTemplateVersionRequestT = Model::CreateMessageTemplateVersionRequest>
        void CreateMessageTemplateVersionAsync(const CreateMessageTemplateVersionRequestT& request, const CreateMessageTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::CreateMessageTemplateVersion, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Q in Connect quick response.</p><p><h3>See Also:</h3>   <a
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
         * recommendations. Amazon Connect creates a new Amazon Q in Connect session for
         * each contact on which Amazon Q in Connect is enabled.</p><p><h3>See Also:</h3>  
         * <a
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
         * <p>Deactivates a specific version of the Amazon Q in Connect message template .
         * After the version is deactivated, you can no longer use the
         * <code>$ACTIVE_VERSION</code> qualifier to reference the version in active
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DeactivateMessageTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateMessageTemplateOutcome DeactivateMessageTemplate(const Model::DeactivateMessageTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeactivateMessageTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeactivateMessageTemplateRequestT = Model::DeactivateMessageTemplateRequest>
        Model::DeactivateMessageTemplateOutcomeCallable DeactivateMessageTemplateCallable(const DeactivateMessageTemplateRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::DeactivateMessageTemplate, request);
        }

        /**
         * An Async wrapper for DeactivateMessageTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeactivateMessageTemplateRequestT = Model::DeactivateMessageTemplateRequest>
        void DeactivateMessageTemplateAsync(const DeactivateMessageTemplateRequestT& request, const DeactivateMessageTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::DeactivateMessageTemplate, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Q in Connect AI Agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DeleteAIAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAIAgentOutcome DeleteAIAgent(const Model::DeleteAIAgentRequest& request) const;

        /**
         * A Callable wrapper for DeleteAIAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAIAgentRequestT = Model::DeleteAIAgentRequest>
        Model::DeleteAIAgentOutcomeCallable DeleteAIAgentCallable(const DeleteAIAgentRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::DeleteAIAgent, request);
        }

        /**
         * An Async wrapper for DeleteAIAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAIAgentRequestT = Model::DeleteAIAgentRequest>
        void DeleteAIAgentAsync(const DeleteAIAgentRequestT& request, const DeleteAIAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::DeleteAIAgent, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Q in Connect AI Agent Version.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DeleteAIAgentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAIAgentVersionOutcome DeleteAIAgentVersion(const Model::DeleteAIAgentVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteAIAgentVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAIAgentVersionRequestT = Model::DeleteAIAgentVersionRequest>
        Model::DeleteAIAgentVersionOutcomeCallable DeleteAIAgentVersionCallable(const DeleteAIAgentVersionRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::DeleteAIAgentVersion, request);
        }

        /**
         * An Async wrapper for DeleteAIAgentVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAIAgentVersionRequestT = Model::DeleteAIAgentVersionRequest>
        void DeleteAIAgentVersionAsync(const DeleteAIAgentVersionRequestT& request, const DeleteAIAgentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::DeleteAIAgentVersion, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Q in Connect AI Guardrail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DeleteAIGuardrail">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAIGuardrailOutcome DeleteAIGuardrail(const Model::DeleteAIGuardrailRequest& request) const;

        /**
         * A Callable wrapper for DeleteAIGuardrail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAIGuardrailRequestT = Model::DeleteAIGuardrailRequest>
        Model::DeleteAIGuardrailOutcomeCallable DeleteAIGuardrailCallable(const DeleteAIGuardrailRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::DeleteAIGuardrail, request);
        }

        /**
         * An Async wrapper for DeleteAIGuardrail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAIGuardrailRequestT = Model::DeleteAIGuardrailRequest>
        void DeleteAIGuardrailAsync(const DeleteAIGuardrailRequestT& request, const DeleteAIGuardrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::DeleteAIGuardrail, request, handler, context);
        }

        /**
         * <p>Delete and Amazon Q in Connect AI Guardrail version.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DeleteAIGuardrailVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAIGuardrailVersionOutcome DeleteAIGuardrailVersion(const Model::DeleteAIGuardrailVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteAIGuardrailVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAIGuardrailVersionRequestT = Model::DeleteAIGuardrailVersionRequest>
        Model::DeleteAIGuardrailVersionOutcomeCallable DeleteAIGuardrailVersionCallable(const DeleteAIGuardrailVersionRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::DeleteAIGuardrailVersion, request);
        }

        /**
         * An Async wrapper for DeleteAIGuardrailVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAIGuardrailVersionRequestT = Model::DeleteAIGuardrailVersionRequest>
        void DeleteAIGuardrailVersionAsync(const DeleteAIGuardrailVersionRequestT& request, const DeleteAIGuardrailVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::DeleteAIGuardrailVersion, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Q in Connect AI Prompt.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DeleteAIPrompt">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAIPromptOutcome DeleteAIPrompt(const Model::DeleteAIPromptRequest& request) const;

        /**
         * A Callable wrapper for DeleteAIPrompt that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAIPromptRequestT = Model::DeleteAIPromptRequest>
        Model::DeleteAIPromptOutcomeCallable DeleteAIPromptCallable(const DeleteAIPromptRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::DeleteAIPrompt, request);
        }

        /**
         * An Async wrapper for DeleteAIPrompt that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAIPromptRequestT = Model::DeleteAIPromptRequest>
        void DeleteAIPromptAsync(const DeleteAIPromptRequestT& request, const DeleteAIPromptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::DeleteAIPrompt, request, handler, context);
        }

        /**
         * <p>Delete and Amazon Q in Connect AI Prompt version.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DeleteAIPromptVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAIPromptVersionOutcome DeleteAIPromptVersion(const Model::DeleteAIPromptVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteAIPromptVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAIPromptVersionRequestT = Model::DeleteAIPromptVersionRequest>
        Model::DeleteAIPromptVersionOutcomeCallable DeleteAIPromptVersionCallable(const DeleteAIPromptVersionRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::DeleteAIPromptVersion, request);
        }

        /**
         * An Async wrapper for DeleteAIPromptVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAIPromptVersionRequestT = Model::DeleteAIPromptVersionRequest>
        void DeleteAIPromptVersionAsync(const DeleteAIPromptVersionRequestT& request, const DeleteAIPromptVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::DeleteAIPromptVersion, request, handler, context);
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
         * <p>Deletes the content association. </p> <p>For more information about content
         * associations--what they are and when they are used--see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/integrate-q-with-guides.html">Integrate
         * Amazon Q in Connect with step-by-step guides</a> in the <i>Amazon Connect
         * Administrator Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DeleteContentAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContentAssociationOutcome DeleteContentAssociation(const Model::DeleteContentAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteContentAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteContentAssociationRequestT = Model::DeleteContentAssociationRequest>
        Model::DeleteContentAssociationOutcomeCallable DeleteContentAssociationCallable(const DeleteContentAssociationRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::DeleteContentAssociation, request);
        }

        /**
         * An Async wrapper for DeleteContentAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteContentAssociationRequestT = Model::DeleteContentAssociationRequest>
        void DeleteContentAssociationAsync(const DeleteContentAssociationRequestT& request, const DeleteContentAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::DeleteContentAssociation, request, handler, context);
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
         * <p>Deletes an Amazon Q in Connect message template entirely or a specific
         * version of the message template if version is supplied in the request. You can
         * provide the message template identifier as
         * <code>&lt;message-template-id&gt;:&lt;versionNumber&gt;</code> to delete a
         * specific version of the message template. If it is not supplied, the message
         * template and all available versions will be deleted.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DeleteMessageTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMessageTemplateOutcome DeleteMessageTemplate(const Model::DeleteMessageTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteMessageTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMessageTemplateRequestT = Model::DeleteMessageTemplateRequest>
        Model::DeleteMessageTemplateOutcomeCallable DeleteMessageTemplateCallable(const DeleteMessageTemplateRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::DeleteMessageTemplate, request);
        }

        /**
         * An Async wrapper for DeleteMessageTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMessageTemplateRequestT = Model::DeleteMessageTemplateRequest>
        void DeleteMessageTemplateAsync(const DeleteMessageTemplateRequestT& request, const DeleteMessageTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::DeleteMessageTemplate, request, handler, context);
        }

        /**
         * <p>Deletes the attachment file from the Amazon Q in Connect message template
         * that is referenced by <code>$LATEST</code> qualifier. Attachments on available
         * message template versions will remain unchanged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/DeleteMessageTemplateAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMessageTemplateAttachmentOutcome DeleteMessageTemplateAttachment(const Model::DeleteMessageTemplateAttachmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteMessageTemplateAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMessageTemplateAttachmentRequestT = Model::DeleteMessageTemplateAttachmentRequest>
        Model::DeleteMessageTemplateAttachmentOutcomeCallable DeleteMessageTemplateAttachmentCallable(const DeleteMessageTemplateAttachmentRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::DeleteMessageTemplateAttachment, request);
        }

        /**
         * An Async wrapper for DeleteMessageTemplateAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMessageTemplateAttachmentRequestT = Model::DeleteMessageTemplateAttachmentRequest>
        void DeleteMessageTemplateAttachmentAsync(const DeleteMessageTemplateAttachmentRequestT& request, const DeleteMessageTemplateAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::DeleteMessageTemplateAttachment, request, handler, context);
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
         * <p>Gets an Amazon Q in Connect AI Agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GetAIAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAIAgentOutcome GetAIAgent(const Model::GetAIAgentRequest& request) const;

        /**
         * A Callable wrapper for GetAIAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAIAgentRequestT = Model::GetAIAgentRequest>
        Model::GetAIAgentOutcomeCallable GetAIAgentCallable(const GetAIAgentRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::GetAIAgent, request);
        }

        /**
         * An Async wrapper for GetAIAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAIAgentRequestT = Model::GetAIAgentRequest>
        void GetAIAgentAsync(const GetAIAgentRequestT& request, const GetAIAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::GetAIAgent, request, handler, context);
        }

        /**
         * <p>Gets the Amazon Q in Connect AI Guardrail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GetAIGuardrail">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAIGuardrailOutcome GetAIGuardrail(const Model::GetAIGuardrailRequest& request) const;

        /**
         * A Callable wrapper for GetAIGuardrail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAIGuardrailRequestT = Model::GetAIGuardrailRequest>
        Model::GetAIGuardrailOutcomeCallable GetAIGuardrailCallable(const GetAIGuardrailRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::GetAIGuardrail, request);
        }

        /**
         * An Async wrapper for GetAIGuardrail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAIGuardrailRequestT = Model::GetAIGuardrailRequest>
        void GetAIGuardrailAsync(const GetAIGuardrailRequestT& request, const GetAIGuardrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::GetAIGuardrail, request, handler, context);
        }

        /**
         * <p>Gets and Amazon Q in Connect AI Prompt.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GetAIPrompt">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAIPromptOutcome GetAIPrompt(const Model::GetAIPromptRequest& request) const;

        /**
         * A Callable wrapper for GetAIPrompt that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAIPromptRequestT = Model::GetAIPromptRequest>
        Model::GetAIPromptOutcomeCallable GetAIPromptCallable(const GetAIPromptRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::GetAIPrompt, request);
        }

        /**
         * An Async wrapper for GetAIPrompt that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAIPromptRequestT = Model::GetAIPromptRequest>
        void GetAIPromptAsync(const GetAIPromptRequestT& request, const GetAIPromptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::GetAIPrompt, request, handler, context);
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
         * <p>Returns the content association.</p> <p>For more information about content
         * associations--what they are and when they are used--see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/integrate-q-with-guides.html">Integrate
         * Amazon Q in Connect with step-by-step guides</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GetContentAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContentAssociationOutcome GetContentAssociation(const Model::GetContentAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetContentAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContentAssociationRequestT = Model::GetContentAssociationRequest>
        Model::GetContentAssociationOutcomeCallable GetContentAssociationCallable(const GetContentAssociationRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::GetContentAssociation, request);
        }

        /**
         * An Async wrapper for GetContentAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContentAssociationRequestT = Model::GetContentAssociationRequest>
        void GetContentAssociationAsync(const GetContentAssociationRequestT& request, const GetContentAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::GetContentAssociation, request, handler, context);
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
         * <p>Retrieves the Amazon Q in Connect message template. The message template
         * identifier can contain an optional qualifier, for example,
         * <code>&lt;message-template-id&gt;:&lt;qualifier&gt;</code>, which is either an
         * actual version number or an Amazon Q Connect managed qualifier
         * <code>$ACTIVE_VERSION</code> | <code>$LATEST</code>. If it is not supplied, then
         * <code>$LATEST</code> is assumed implicitly.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GetMessageTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMessageTemplateOutcome GetMessageTemplate(const Model::GetMessageTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetMessageTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMessageTemplateRequestT = Model::GetMessageTemplateRequest>
        Model::GetMessageTemplateOutcomeCallable GetMessageTemplateCallable(const GetMessageTemplateRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::GetMessageTemplate, request);
        }

        /**
         * An Async wrapper for GetMessageTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMessageTemplateRequestT = Model::GetMessageTemplateRequest>
        void GetMessageTemplateAsync(const GetMessageTemplateRequestT& request, const GetMessageTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::GetMessageTemplate, request, handler, context);
        }

        /**
         * <p>Retrieves next message on an Amazon Q in Connect session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GetNextMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNextMessageOutcome GetNextMessage(const Model::GetNextMessageRequest& request) const;

        /**
         * A Callable wrapper for GetNextMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetNextMessageRequestT = Model::GetNextMessageRequest>
        Model::GetNextMessageOutcomeCallable GetNextMessageCallable(const GetNextMessageRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::GetNextMessage, request);
        }

        /**
         * An Async wrapper for GetNextMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNextMessageRequestT = Model::GetNextMessageRequest>
        void GetNextMessageAsync(const GetNextMessageRequestT& request, const GetNextMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::GetNextMessage, request, handler, context);
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
         * <p>List AI Agent versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ListAIAgentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAIAgentVersionsOutcome ListAIAgentVersions(const Model::ListAIAgentVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListAIAgentVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAIAgentVersionsRequestT = Model::ListAIAgentVersionsRequest>
        Model::ListAIAgentVersionsOutcomeCallable ListAIAgentVersionsCallable(const ListAIAgentVersionsRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::ListAIAgentVersions, request);
        }

        /**
         * An Async wrapper for ListAIAgentVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAIAgentVersionsRequestT = Model::ListAIAgentVersionsRequest>
        void ListAIAgentVersionsAsync(const ListAIAgentVersionsRequestT& request, const ListAIAgentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::ListAIAgentVersions, request, handler, context);
        }

        /**
         * <p>Lists AI Agents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ListAIAgents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAIAgentsOutcome ListAIAgents(const Model::ListAIAgentsRequest& request) const;

        /**
         * A Callable wrapper for ListAIAgents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAIAgentsRequestT = Model::ListAIAgentsRequest>
        Model::ListAIAgentsOutcomeCallable ListAIAgentsCallable(const ListAIAgentsRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::ListAIAgents, request);
        }

        /**
         * An Async wrapper for ListAIAgents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAIAgentsRequestT = Model::ListAIAgentsRequest>
        void ListAIAgentsAsync(const ListAIAgentsRequestT& request, const ListAIAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::ListAIAgents, request, handler, context);
        }

        /**
         * <p>Lists AI Guardrail versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ListAIGuardrailVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAIGuardrailVersionsOutcome ListAIGuardrailVersions(const Model::ListAIGuardrailVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListAIGuardrailVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAIGuardrailVersionsRequestT = Model::ListAIGuardrailVersionsRequest>
        Model::ListAIGuardrailVersionsOutcomeCallable ListAIGuardrailVersionsCallable(const ListAIGuardrailVersionsRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::ListAIGuardrailVersions, request);
        }

        /**
         * An Async wrapper for ListAIGuardrailVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAIGuardrailVersionsRequestT = Model::ListAIGuardrailVersionsRequest>
        void ListAIGuardrailVersionsAsync(const ListAIGuardrailVersionsRequestT& request, const ListAIGuardrailVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::ListAIGuardrailVersions, request, handler, context);
        }

        /**
         * <p>Lists the AI Guardrails available on the Amazon Q in Connect
         * assistant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ListAIGuardrails">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAIGuardrailsOutcome ListAIGuardrails(const Model::ListAIGuardrailsRequest& request) const;

        /**
         * A Callable wrapper for ListAIGuardrails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAIGuardrailsRequestT = Model::ListAIGuardrailsRequest>
        Model::ListAIGuardrailsOutcomeCallable ListAIGuardrailsCallable(const ListAIGuardrailsRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::ListAIGuardrails, request);
        }

        /**
         * An Async wrapper for ListAIGuardrails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAIGuardrailsRequestT = Model::ListAIGuardrailsRequest>
        void ListAIGuardrailsAsync(const ListAIGuardrailsRequestT& request, const ListAIGuardrailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::ListAIGuardrails, request, handler, context);
        }

        /**
         * <p>Lists AI Prompt versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ListAIPromptVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAIPromptVersionsOutcome ListAIPromptVersions(const Model::ListAIPromptVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListAIPromptVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAIPromptVersionsRequestT = Model::ListAIPromptVersionsRequest>
        Model::ListAIPromptVersionsOutcomeCallable ListAIPromptVersionsCallable(const ListAIPromptVersionsRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::ListAIPromptVersions, request);
        }

        /**
         * An Async wrapper for ListAIPromptVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAIPromptVersionsRequestT = Model::ListAIPromptVersionsRequest>
        void ListAIPromptVersionsAsync(const ListAIPromptVersionsRequestT& request, const ListAIPromptVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::ListAIPromptVersions, request, handler, context);
        }

        /**
         * <p>Lists the AI Prompts available on the Amazon Q in Connect
         * assistant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ListAIPrompts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAIPromptsOutcome ListAIPrompts(const Model::ListAIPromptsRequest& request) const;

        /**
         * A Callable wrapper for ListAIPrompts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAIPromptsRequestT = Model::ListAIPromptsRequest>
        Model::ListAIPromptsOutcomeCallable ListAIPromptsCallable(const ListAIPromptsRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::ListAIPrompts, request);
        }

        /**
         * An Async wrapper for ListAIPrompts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAIPromptsRequestT = Model::ListAIPromptsRequest>
        void ListAIPromptsAsync(const ListAIPromptsRequestT& request, const ListAIPromptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::ListAIPrompts, request, handler, context);
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
        virtual Model::ListAssistantsOutcome ListAssistants(const Model::ListAssistantsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListAssistants that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssistantsRequestT = Model::ListAssistantsRequest>
        Model::ListAssistantsOutcomeCallable ListAssistantsCallable(const ListAssistantsRequestT& request = {}) const
        {
            return SubmitCallable(&QConnectClient::ListAssistants, request);
        }

        /**
         * An Async wrapper for ListAssistants that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssistantsRequestT = Model::ListAssistantsRequest>
        void ListAssistantsAsync(const ListAssistantsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListAssistantsRequestT& request = {}) const
        {
            return SubmitAsync(&QConnectClient::ListAssistants, request, handler, context);
        }

        /**
         * <p>Lists the content associations.</p> <p>For more information about content
         * associations--what they are and when they are used--see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/integrate-q-with-guides.html">Integrate
         * Amazon Q in Connect with step-by-step guides</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ListContentAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContentAssociationsOutcome ListContentAssociations(const Model::ListContentAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListContentAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListContentAssociationsRequestT = Model::ListContentAssociationsRequest>
        Model::ListContentAssociationsOutcomeCallable ListContentAssociationsCallable(const ListContentAssociationsRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::ListContentAssociations, request);
        }

        /**
         * An Async wrapper for ListContentAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListContentAssociationsRequestT = Model::ListContentAssociationsRequest>
        void ListContentAssociationsAsync(const ListContentAssociationsRequestT& request, const ListContentAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::ListContentAssociations, request, handler, context);
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
        virtual Model::ListKnowledgeBasesOutcome ListKnowledgeBases(const Model::ListKnowledgeBasesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListKnowledgeBases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKnowledgeBasesRequestT = Model::ListKnowledgeBasesRequest>
        Model::ListKnowledgeBasesOutcomeCallable ListKnowledgeBasesCallable(const ListKnowledgeBasesRequestT& request = {}) const
        {
            return SubmitCallable(&QConnectClient::ListKnowledgeBases, request);
        }

        /**
         * An Async wrapper for ListKnowledgeBases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKnowledgeBasesRequestT = Model::ListKnowledgeBasesRequest>
        void ListKnowledgeBasesAsync(const ListKnowledgeBasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListKnowledgeBasesRequestT& request = {}) const
        {
            return SubmitAsync(&QConnectClient::ListKnowledgeBases, request, handler, context);
        }

        /**
         * <p>Lists all the available versions for the specified Amazon Q in Connect
         * message template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ListMessageTemplateVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMessageTemplateVersionsOutcome ListMessageTemplateVersions(const Model::ListMessageTemplateVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListMessageTemplateVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMessageTemplateVersionsRequestT = Model::ListMessageTemplateVersionsRequest>
        Model::ListMessageTemplateVersionsOutcomeCallable ListMessageTemplateVersionsCallable(const ListMessageTemplateVersionsRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::ListMessageTemplateVersions, request);
        }

        /**
         * An Async wrapper for ListMessageTemplateVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMessageTemplateVersionsRequestT = Model::ListMessageTemplateVersionsRequest>
        void ListMessageTemplateVersionsAsync(const ListMessageTemplateVersionsRequestT& request, const ListMessageTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::ListMessageTemplateVersions, request, handler, context);
        }

        /**
         * <p>Lists all the available Amazon Q in Connect message templates for the
         * specified knowledge base.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ListMessageTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMessageTemplatesOutcome ListMessageTemplates(const Model::ListMessageTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListMessageTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMessageTemplatesRequestT = Model::ListMessageTemplatesRequest>
        Model::ListMessageTemplatesOutcomeCallable ListMessageTemplatesCallable(const ListMessageTemplatesRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::ListMessageTemplates, request);
        }

        /**
         * An Async wrapper for ListMessageTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMessageTemplatesRequestT = Model::ListMessageTemplatesRequest>
        void ListMessageTemplatesAsync(const ListMessageTemplatesRequestT& request, const ListMessageTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::ListMessageTemplates, request, handler, context);
        }

        /**
         * <p>Lists messages on an Amazon Q in Connect session.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ListMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMessagesOutcome ListMessages(const Model::ListMessagesRequest& request) const;

        /**
         * A Callable wrapper for ListMessages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMessagesRequestT = Model::ListMessagesRequest>
        Model::ListMessagesOutcomeCallable ListMessagesCallable(const ListMessagesRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::ListMessages, request);
        }

        /**
         * An Async wrapper for ListMessages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMessagesRequestT = Model::ListMessagesRequest>
        void ListMessagesAsync(const ListMessagesRequestT& request, const ListMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::ListMessages, request, handler, context);
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
         * <p>Removes the AI Agent that is set for use by default on an Amazon Q in Connect
         * Assistant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/RemoveAssistantAIAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAssistantAIAgentOutcome RemoveAssistantAIAgent(const Model::RemoveAssistantAIAgentRequest& request) const;

        /**
         * A Callable wrapper for RemoveAssistantAIAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveAssistantAIAgentRequestT = Model::RemoveAssistantAIAgentRequest>
        Model::RemoveAssistantAIAgentOutcomeCallable RemoveAssistantAIAgentCallable(const RemoveAssistantAIAgentRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::RemoveAssistantAIAgent, request);
        }

        /**
         * An Async wrapper for RemoveAssistantAIAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveAssistantAIAgentRequestT = Model::RemoveAssistantAIAgentRequest>
        void RemoveAssistantAIAgentAsync(const RemoveAssistantAIAgentRequestT& request, const RemoveAssistantAIAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::RemoveAssistantAIAgent, request, handler, context);
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
         * <p>Renders the Amazon Q in Connect message template based on the attribute
         * values provided and generates the message content. For any variable present in
         * the message template, if the attribute value is neither provided in the
         * attribute request parameter nor the default attribute of the message template,
         * the rendered message content will keep the variable placeholder as it is and
         * return the attribute keys that are missing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/RenderMessageTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::RenderMessageTemplateOutcome RenderMessageTemplate(const Model::RenderMessageTemplateRequest& request) const;

        /**
         * A Callable wrapper for RenderMessageTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RenderMessageTemplateRequestT = Model::RenderMessageTemplateRequest>
        Model::RenderMessageTemplateOutcomeCallable RenderMessageTemplateCallable(const RenderMessageTemplateRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::RenderMessageTemplate, request);
        }

        /**
         * An Async wrapper for RenderMessageTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RenderMessageTemplateRequestT = Model::RenderMessageTemplateRequest>
        void RenderMessageTemplateAsync(const RenderMessageTemplateRequestT& request, const RenderMessageTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::RenderMessageTemplate, request, handler, context);
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
         * <p>Searches for Amazon Q in Connect message templates in the specified knowledge
         * base.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SearchMessageTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchMessageTemplatesOutcome SearchMessageTemplates(const Model::SearchMessageTemplatesRequest& request) const;

        /**
         * A Callable wrapper for SearchMessageTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchMessageTemplatesRequestT = Model::SearchMessageTemplatesRequest>
        Model::SearchMessageTemplatesOutcomeCallable SearchMessageTemplatesCallable(const SearchMessageTemplatesRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::SearchMessageTemplates, request);
        }

        /**
         * An Async wrapper for SearchMessageTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchMessageTemplatesRequestT = Model::SearchMessageTemplatesRequest>
        void SearchMessageTemplatesAsync(const SearchMessageTemplatesRequestT& request, const SearchMessageTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::SearchMessageTemplates, request, handler, context);
        }

        /**
         * <p>Searches existing Amazon Q in Connect quick responses in an Amazon Q in
         * Connect knowledge base.</p><p><h3>See Also:</h3>   <a
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
         * <p>Submits a message to the Amazon Q in Connect session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SendMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::SendMessageOutcome SendMessage(const Model::SendMessageRequest& request) const;

        /**
         * A Callable wrapper for SendMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendMessageRequestT = Model::SendMessageRequest>
        Model::SendMessageOutcomeCallable SendMessageCallable(const SendMessageRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::SendMessage, request);
        }

        /**
         * An Async wrapper for SendMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendMessageRequestT = Model::SendMessageRequest>
        void SendMessageAsync(const SendMessageRequestT& request, const SendMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::SendMessage, request, handler, context);
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
         * <p>Start an asynchronous job to import Amazon Q in Connect resources from an
         * uploaded source file. Before calling this API, use <a
         * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_StartContentUpload.html">StartContentUpload</a>
         * to upload an asset that contains the resource data.</p> <ul> <li> <p>For
         * importing Amazon Q in Connect quick responses, you need to upload a csv file
         * including the quick responses. For information about how to format the csv file
         * for importing quick responses, see <a
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
         * <p>Updates an AI Agent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/UpdateAIAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAIAgentOutcome UpdateAIAgent(const Model::UpdateAIAgentRequest& request) const;

        /**
         * A Callable wrapper for UpdateAIAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAIAgentRequestT = Model::UpdateAIAgentRequest>
        Model::UpdateAIAgentOutcomeCallable UpdateAIAgentCallable(const UpdateAIAgentRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::UpdateAIAgent, request);
        }

        /**
         * An Async wrapper for UpdateAIAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAIAgentRequestT = Model::UpdateAIAgentRequest>
        void UpdateAIAgentAsync(const UpdateAIAgentRequestT& request, const UpdateAIAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::UpdateAIAgent, request, handler, context);
        }

        /**
         * <p>Updates an AI Guardrail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/UpdateAIGuardrail">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAIGuardrailOutcome UpdateAIGuardrail(const Model::UpdateAIGuardrailRequest& request) const;

        /**
         * A Callable wrapper for UpdateAIGuardrail that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAIGuardrailRequestT = Model::UpdateAIGuardrailRequest>
        Model::UpdateAIGuardrailOutcomeCallable UpdateAIGuardrailCallable(const UpdateAIGuardrailRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::UpdateAIGuardrail, request);
        }

        /**
         * An Async wrapper for UpdateAIGuardrail that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAIGuardrailRequestT = Model::UpdateAIGuardrailRequest>
        void UpdateAIGuardrailAsync(const UpdateAIGuardrailRequestT& request, const UpdateAIGuardrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::UpdateAIGuardrail, request, handler, context);
        }

        /**
         * <p>Updates an AI Prompt.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/UpdateAIPrompt">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAIPromptOutcome UpdateAIPrompt(const Model::UpdateAIPromptRequest& request) const;

        /**
         * A Callable wrapper for UpdateAIPrompt that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAIPromptRequestT = Model::UpdateAIPromptRequest>
        Model::UpdateAIPromptOutcomeCallable UpdateAIPromptCallable(const UpdateAIPromptRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::UpdateAIPrompt, request);
        }

        /**
         * An Async wrapper for UpdateAIPrompt that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAIPromptRequestT = Model::UpdateAIPromptRequest>
        void UpdateAIPromptAsync(const UpdateAIPromptRequestT& request, const UpdateAIPromptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::UpdateAIPrompt, request, handler, context);
        }

        /**
         * <p>Updates the AI Agent that is set for use by default on an Amazon Q in Connect
         * Assistant.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/UpdateAssistantAIAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssistantAIAgentOutcome UpdateAssistantAIAgent(const Model::UpdateAssistantAIAgentRequest& request) const;

        /**
         * A Callable wrapper for UpdateAssistantAIAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAssistantAIAgentRequestT = Model::UpdateAssistantAIAgentRequest>
        Model::UpdateAssistantAIAgentOutcomeCallable UpdateAssistantAIAgentCallable(const UpdateAssistantAIAgentRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::UpdateAssistantAIAgent, request);
        }

        /**
         * An Async wrapper for UpdateAssistantAIAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAssistantAIAgentRequestT = Model::UpdateAssistantAIAgentRequest>
        void UpdateAssistantAIAgentAsync(const UpdateAssistantAIAgentRequestT& request, const UpdateAssistantAIAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::UpdateAssistantAIAgent, request, handler, context);
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
         * <code>${variable}</code> format; this interpolated by Amazon Q in Connect using
         * ingested content. For example, if you ingest a Salesforce article, it has an
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
         * <p>Updates the Amazon Q in Connect message template. Partial update is
         * supported. If any field is not supplied, it will remain unchanged for the
         * message template that is referenced by the <code>$LATEST</code> qualifier. Any
         * modification will only apply to the message template that is referenced by the
         * <code>$LATEST</code> qualifier. The fields for all available versions will
         * remain unchanged.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/UpdateMessageTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMessageTemplateOutcome UpdateMessageTemplate(const Model::UpdateMessageTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateMessageTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMessageTemplateRequestT = Model::UpdateMessageTemplateRequest>
        Model::UpdateMessageTemplateOutcomeCallable UpdateMessageTemplateCallable(const UpdateMessageTemplateRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::UpdateMessageTemplate, request);
        }

        /**
         * An Async wrapper for UpdateMessageTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMessageTemplateRequestT = Model::UpdateMessageTemplateRequest>
        void UpdateMessageTemplateAsync(const UpdateMessageTemplateRequestT& request, const UpdateMessageTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::UpdateMessageTemplate, request, handler, context);
        }

        /**
         * <p>Updates the Amazon Q in Connect message template metadata. Note that any
         * modification to the message template’s name, description and grouping
         * configuration will applied to the message template pointed by the
         * <code>$LATEST</code> qualifier and all available versions. Partial update is
         * supported. If any field is not supplied, it will remain unchanged for the
         * message template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/UpdateMessageTemplateMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMessageTemplateMetadataOutcome UpdateMessageTemplateMetadata(const Model::UpdateMessageTemplateMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateMessageTemplateMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMessageTemplateMetadataRequestT = Model::UpdateMessageTemplateMetadataRequest>
        Model::UpdateMessageTemplateMetadataOutcomeCallable UpdateMessageTemplateMetadataCallable(const UpdateMessageTemplateMetadataRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::UpdateMessageTemplateMetadata, request);
        }

        /**
         * An Async wrapper for UpdateMessageTemplateMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMessageTemplateMetadataRequestT = Model::UpdateMessageTemplateMetadataRequest>
        void UpdateMessageTemplateMetadataAsync(const UpdateMessageTemplateMetadataRequestT& request, const UpdateMessageTemplateMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::UpdateMessageTemplateMetadata, request, handler, context);
        }

        /**
         * <p>Updates an existing Amazon Q in Connect quick response.</p><p><h3>See
         * Also:</h3>   <a
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

        /**
         * <p>Updates a session. A session is a contextual container used for generating
         * recommendations. Amazon Connect updates the existing Amazon Q in Connect session
         * for each contact on which Amazon Q in Connect is enabled.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/UpdateSession">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSessionOutcome UpdateSession(const Model::UpdateSessionRequest& request) const;

        /**
         * A Callable wrapper for UpdateSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSessionRequestT = Model::UpdateSessionRequest>
        Model::UpdateSessionOutcomeCallable UpdateSessionCallable(const UpdateSessionRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::UpdateSession, request);
        }

        /**
         * An Async wrapper for UpdateSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSessionRequestT = Model::UpdateSessionRequest>
        void UpdateSessionAsync(const UpdateSessionRequestT& request, const UpdateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::UpdateSession, request, handler, context);
        }

        /**
         * <p>Updates the data stored on an Amazon Q in Connect Session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/UpdateSessionData">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSessionDataOutcome UpdateSessionData(const Model::UpdateSessionDataRequest& request) const;

        /**
         * A Callable wrapper for UpdateSessionData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSessionDataRequestT = Model::UpdateSessionDataRequest>
        Model::UpdateSessionDataOutcomeCallable UpdateSessionDataCallable(const UpdateSessionDataRequestT& request) const
        {
            return SubmitCallable(&QConnectClient::UpdateSessionData, request);
        }

        /**
         * An Async wrapper for UpdateSessionData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSessionDataRequestT = Model::UpdateSessionDataRequest>
        void UpdateSessionDataAsync(const UpdateSessionDataRequestT& request, const UpdateSessionDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&QConnectClient::UpdateSessionData, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<QConnectEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<QConnectClient>;
      void init(const QConnectClientConfiguration& clientConfiguration);

      QConnectClientConfiguration m_clientConfiguration;
      std::shared_ptr<QConnectEndpointProviderBase> m_endpointProvider;
  };

} // namespace QConnect
} // namespace Aws
