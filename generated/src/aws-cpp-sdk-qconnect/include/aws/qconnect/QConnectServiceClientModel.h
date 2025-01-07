/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/qconnect/QConnectErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/qconnect/QConnectEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in QConnectClient header */
#include <aws/qconnect/model/ActivateMessageTemplateResult.h>
#include <aws/qconnect/model/CreateAIAgentResult.h>
#include <aws/qconnect/model/CreateAIAgentVersionResult.h>
#include <aws/qconnect/model/CreateAIGuardrailResult.h>
#include <aws/qconnect/model/CreateAIGuardrailVersionResult.h>
#include <aws/qconnect/model/CreateAIPromptResult.h>
#include <aws/qconnect/model/CreateAIPromptVersionResult.h>
#include <aws/qconnect/model/CreateAssistantResult.h>
#include <aws/qconnect/model/CreateAssistantAssociationResult.h>
#include <aws/qconnect/model/CreateContentResult.h>
#include <aws/qconnect/model/CreateContentAssociationResult.h>
#include <aws/qconnect/model/CreateKnowledgeBaseResult.h>
#include <aws/qconnect/model/CreateMessageTemplateResult.h>
#include <aws/qconnect/model/CreateMessageTemplateAttachmentResult.h>
#include <aws/qconnect/model/CreateMessageTemplateVersionResult.h>
#include <aws/qconnect/model/CreateQuickResponseResult.h>
#include <aws/qconnect/model/CreateSessionResult.h>
#include <aws/qconnect/model/DeactivateMessageTemplateResult.h>
#include <aws/qconnect/model/DeleteAIAgentResult.h>
#include <aws/qconnect/model/DeleteAIAgentVersionResult.h>
#include <aws/qconnect/model/DeleteAIGuardrailResult.h>
#include <aws/qconnect/model/DeleteAIGuardrailVersionResult.h>
#include <aws/qconnect/model/DeleteAIPromptResult.h>
#include <aws/qconnect/model/DeleteAIPromptVersionResult.h>
#include <aws/qconnect/model/DeleteAssistantResult.h>
#include <aws/qconnect/model/DeleteAssistantAssociationResult.h>
#include <aws/qconnect/model/DeleteContentResult.h>
#include <aws/qconnect/model/DeleteContentAssociationResult.h>
#include <aws/qconnect/model/DeleteImportJobResult.h>
#include <aws/qconnect/model/DeleteKnowledgeBaseResult.h>
#include <aws/qconnect/model/DeleteMessageTemplateResult.h>
#include <aws/qconnect/model/DeleteMessageTemplateAttachmentResult.h>
#include <aws/qconnect/model/DeleteQuickResponseResult.h>
#include <aws/qconnect/model/GetAIAgentResult.h>
#include <aws/qconnect/model/GetAIGuardrailResult.h>
#include <aws/qconnect/model/GetAIPromptResult.h>
#include <aws/qconnect/model/GetAssistantResult.h>
#include <aws/qconnect/model/GetAssistantAssociationResult.h>
#include <aws/qconnect/model/GetContentResult.h>
#include <aws/qconnect/model/GetContentAssociationResult.h>
#include <aws/qconnect/model/GetContentSummaryResult.h>
#include <aws/qconnect/model/GetImportJobResult.h>
#include <aws/qconnect/model/GetKnowledgeBaseResult.h>
#include <aws/qconnect/model/GetMessageTemplateResult.h>
#include <aws/qconnect/model/GetNextMessageResult.h>
#include <aws/qconnect/model/GetQuickResponseResult.h>
#include <aws/qconnect/model/GetSessionResult.h>
#include <aws/qconnect/model/ListAIAgentVersionsResult.h>
#include <aws/qconnect/model/ListAIAgentsResult.h>
#include <aws/qconnect/model/ListAIGuardrailVersionsResult.h>
#include <aws/qconnect/model/ListAIGuardrailsResult.h>
#include <aws/qconnect/model/ListAIPromptVersionsResult.h>
#include <aws/qconnect/model/ListAIPromptsResult.h>
#include <aws/qconnect/model/ListAssistantAssociationsResult.h>
#include <aws/qconnect/model/ListAssistantsResult.h>
#include <aws/qconnect/model/ListContentAssociationsResult.h>
#include <aws/qconnect/model/ListContentsResult.h>
#include <aws/qconnect/model/ListImportJobsResult.h>
#include <aws/qconnect/model/ListKnowledgeBasesResult.h>
#include <aws/qconnect/model/ListMessageTemplateVersionsResult.h>
#include <aws/qconnect/model/ListMessageTemplatesResult.h>
#include <aws/qconnect/model/ListMessagesResult.h>
#include <aws/qconnect/model/ListQuickResponsesResult.h>
#include <aws/qconnect/model/ListTagsForResourceResult.h>
#include <aws/qconnect/model/NotifyRecommendationsReceivedResult.h>
#include <aws/qconnect/model/PutFeedbackResult.h>
#include <aws/qconnect/model/RemoveAssistantAIAgentResult.h>
#include <aws/qconnect/model/RemoveKnowledgeBaseTemplateUriResult.h>
#include <aws/qconnect/model/RenderMessageTemplateResult.h>
#include <aws/qconnect/model/SearchContentResult.h>
#include <aws/qconnect/model/SearchMessageTemplatesResult.h>
#include <aws/qconnect/model/SearchQuickResponsesResult.h>
#include <aws/qconnect/model/SearchSessionsResult.h>
#include <aws/qconnect/model/SendMessageResult.h>
#include <aws/qconnect/model/StartContentUploadResult.h>
#include <aws/qconnect/model/StartImportJobResult.h>
#include <aws/qconnect/model/TagResourceResult.h>
#include <aws/qconnect/model/UntagResourceResult.h>
#include <aws/qconnect/model/UpdateAIAgentResult.h>
#include <aws/qconnect/model/UpdateAIGuardrailResult.h>
#include <aws/qconnect/model/UpdateAIPromptResult.h>
#include <aws/qconnect/model/UpdateAssistantAIAgentResult.h>
#include <aws/qconnect/model/UpdateContentResult.h>
#include <aws/qconnect/model/UpdateKnowledgeBaseTemplateUriResult.h>
#include <aws/qconnect/model/UpdateMessageTemplateResult.h>
#include <aws/qconnect/model/UpdateMessageTemplateMetadataResult.h>
#include <aws/qconnect/model/UpdateQuickResponseResult.h>
#include <aws/qconnect/model/UpdateSessionResult.h>
#include <aws/qconnect/model/UpdateSessionDataResult.h>
#include <aws/qconnect/model/ListKnowledgeBasesRequest.h>
#include <aws/qconnect/model/ListAssistantsRequest.h>
/* End of service model headers required in QConnectClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace QConnect
  {
    using QConnectClientConfiguration = Aws::Client::GenericClientConfiguration;
    using QConnectEndpointProviderBase = Aws::QConnect::Endpoint::QConnectEndpointProviderBase;
    using QConnectEndpointProvider = Aws::QConnect::Endpoint::QConnectEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in QConnectClient header */
      class ActivateMessageTemplateRequest;
      class CreateAIAgentRequest;
      class CreateAIAgentVersionRequest;
      class CreateAIGuardrailRequest;
      class CreateAIGuardrailVersionRequest;
      class CreateAIPromptRequest;
      class CreateAIPromptVersionRequest;
      class CreateAssistantRequest;
      class CreateAssistantAssociationRequest;
      class CreateContentRequest;
      class CreateContentAssociationRequest;
      class CreateKnowledgeBaseRequest;
      class CreateMessageTemplateRequest;
      class CreateMessageTemplateAttachmentRequest;
      class CreateMessageTemplateVersionRequest;
      class CreateQuickResponseRequest;
      class CreateSessionRequest;
      class DeactivateMessageTemplateRequest;
      class DeleteAIAgentRequest;
      class DeleteAIAgentVersionRequest;
      class DeleteAIGuardrailRequest;
      class DeleteAIGuardrailVersionRequest;
      class DeleteAIPromptRequest;
      class DeleteAIPromptVersionRequest;
      class DeleteAssistantRequest;
      class DeleteAssistantAssociationRequest;
      class DeleteContentRequest;
      class DeleteContentAssociationRequest;
      class DeleteImportJobRequest;
      class DeleteKnowledgeBaseRequest;
      class DeleteMessageTemplateRequest;
      class DeleteMessageTemplateAttachmentRequest;
      class DeleteQuickResponseRequest;
      class GetAIAgentRequest;
      class GetAIGuardrailRequest;
      class GetAIPromptRequest;
      class GetAssistantRequest;
      class GetAssistantAssociationRequest;
      class GetContentRequest;
      class GetContentAssociationRequest;
      class GetContentSummaryRequest;
      class GetImportJobRequest;
      class GetKnowledgeBaseRequest;
      class GetMessageTemplateRequest;
      class GetNextMessageRequest;
      class GetQuickResponseRequest;
      class GetSessionRequest;
      class ListAIAgentVersionsRequest;
      class ListAIAgentsRequest;
      class ListAIGuardrailVersionsRequest;
      class ListAIGuardrailsRequest;
      class ListAIPromptVersionsRequest;
      class ListAIPromptsRequest;
      class ListAssistantAssociationsRequest;
      class ListAssistantsRequest;
      class ListContentAssociationsRequest;
      class ListContentsRequest;
      class ListImportJobsRequest;
      class ListKnowledgeBasesRequest;
      class ListMessageTemplateVersionsRequest;
      class ListMessageTemplatesRequest;
      class ListMessagesRequest;
      class ListQuickResponsesRequest;
      class ListTagsForResourceRequest;
      class NotifyRecommendationsReceivedRequest;
      class PutFeedbackRequest;
      class RemoveAssistantAIAgentRequest;
      class RemoveKnowledgeBaseTemplateUriRequest;
      class RenderMessageTemplateRequest;
      class SearchContentRequest;
      class SearchMessageTemplatesRequest;
      class SearchQuickResponsesRequest;
      class SearchSessionsRequest;
      class SendMessageRequest;
      class StartContentUploadRequest;
      class StartImportJobRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAIAgentRequest;
      class UpdateAIGuardrailRequest;
      class UpdateAIPromptRequest;
      class UpdateAssistantAIAgentRequest;
      class UpdateContentRequest;
      class UpdateKnowledgeBaseTemplateUriRequest;
      class UpdateMessageTemplateRequest;
      class UpdateMessageTemplateMetadataRequest;
      class UpdateQuickResponseRequest;
      class UpdateSessionRequest;
      class UpdateSessionDataRequest;
      /* End of service model forward declarations required in QConnectClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ActivateMessageTemplateResult, QConnectError> ActivateMessageTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateAIAgentResult, QConnectError> CreateAIAgentOutcome;
      typedef Aws::Utils::Outcome<CreateAIAgentVersionResult, QConnectError> CreateAIAgentVersionOutcome;
      typedef Aws::Utils::Outcome<CreateAIGuardrailResult, QConnectError> CreateAIGuardrailOutcome;
      typedef Aws::Utils::Outcome<CreateAIGuardrailVersionResult, QConnectError> CreateAIGuardrailVersionOutcome;
      typedef Aws::Utils::Outcome<CreateAIPromptResult, QConnectError> CreateAIPromptOutcome;
      typedef Aws::Utils::Outcome<CreateAIPromptVersionResult, QConnectError> CreateAIPromptVersionOutcome;
      typedef Aws::Utils::Outcome<CreateAssistantResult, QConnectError> CreateAssistantOutcome;
      typedef Aws::Utils::Outcome<CreateAssistantAssociationResult, QConnectError> CreateAssistantAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateContentResult, QConnectError> CreateContentOutcome;
      typedef Aws::Utils::Outcome<CreateContentAssociationResult, QConnectError> CreateContentAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateKnowledgeBaseResult, QConnectError> CreateKnowledgeBaseOutcome;
      typedef Aws::Utils::Outcome<CreateMessageTemplateResult, QConnectError> CreateMessageTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateMessageTemplateAttachmentResult, QConnectError> CreateMessageTemplateAttachmentOutcome;
      typedef Aws::Utils::Outcome<CreateMessageTemplateVersionResult, QConnectError> CreateMessageTemplateVersionOutcome;
      typedef Aws::Utils::Outcome<CreateQuickResponseResult, QConnectError> CreateQuickResponseOutcome;
      typedef Aws::Utils::Outcome<CreateSessionResult, QConnectError> CreateSessionOutcome;
      typedef Aws::Utils::Outcome<DeactivateMessageTemplateResult, QConnectError> DeactivateMessageTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteAIAgentResult, QConnectError> DeleteAIAgentOutcome;
      typedef Aws::Utils::Outcome<DeleteAIAgentVersionResult, QConnectError> DeleteAIAgentVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteAIGuardrailResult, QConnectError> DeleteAIGuardrailOutcome;
      typedef Aws::Utils::Outcome<DeleteAIGuardrailVersionResult, QConnectError> DeleteAIGuardrailVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteAIPromptResult, QConnectError> DeleteAIPromptOutcome;
      typedef Aws::Utils::Outcome<DeleteAIPromptVersionResult, QConnectError> DeleteAIPromptVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteAssistantResult, QConnectError> DeleteAssistantOutcome;
      typedef Aws::Utils::Outcome<DeleteAssistantAssociationResult, QConnectError> DeleteAssistantAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteContentResult, QConnectError> DeleteContentOutcome;
      typedef Aws::Utils::Outcome<DeleteContentAssociationResult, QConnectError> DeleteContentAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteImportJobResult, QConnectError> DeleteImportJobOutcome;
      typedef Aws::Utils::Outcome<DeleteKnowledgeBaseResult, QConnectError> DeleteKnowledgeBaseOutcome;
      typedef Aws::Utils::Outcome<DeleteMessageTemplateResult, QConnectError> DeleteMessageTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteMessageTemplateAttachmentResult, QConnectError> DeleteMessageTemplateAttachmentOutcome;
      typedef Aws::Utils::Outcome<DeleteQuickResponseResult, QConnectError> DeleteQuickResponseOutcome;
      typedef Aws::Utils::Outcome<GetAIAgentResult, QConnectError> GetAIAgentOutcome;
      typedef Aws::Utils::Outcome<GetAIGuardrailResult, QConnectError> GetAIGuardrailOutcome;
      typedef Aws::Utils::Outcome<GetAIPromptResult, QConnectError> GetAIPromptOutcome;
      typedef Aws::Utils::Outcome<GetAssistantResult, QConnectError> GetAssistantOutcome;
      typedef Aws::Utils::Outcome<GetAssistantAssociationResult, QConnectError> GetAssistantAssociationOutcome;
      typedef Aws::Utils::Outcome<GetContentResult, QConnectError> GetContentOutcome;
      typedef Aws::Utils::Outcome<GetContentAssociationResult, QConnectError> GetContentAssociationOutcome;
      typedef Aws::Utils::Outcome<GetContentSummaryResult, QConnectError> GetContentSummaryOutcome;
      typedef Aws::Utils::Outcome<GetImportJobResult, QConnectError> GetImportJobOutcome;
      typedef Aws::Utils::Outcome<GetKnowledgeBaseResult, QConnectError> GetKnowledgeBaseOutcome;
      typedef Aws::Utils::Outcome<GetMessageTemplateResult, QConnectError> GetMessageTemplateOutcome;
      typedef Aws::Utils::Outcome<GetNextMessageResult, QConnectError> GetNextMessageOutcome;
      typedef Aws::Utils::Outcome<GetQuickResponseResult, QConnectError> GetQuickResponseOutcome;
      typedef Aws::Utils::Outcome<GetSessionResult, QConnectError> GetSessionOutcome;
      typedef Aws::Utils::Outcome<ListAIAgentVersionsResult, QConnectError> ListAIAgentVersionsOutcome;
      typedef Aws::Utils::Outcome<ListAIAgentsResult, QConnectError> ListAIAgentsOutcome;
      typedef Aws::Utils::Outcome<ListAIGuardrailVersionsResult, QConnectError> ListAIGuardrailVersionsOutcome;
      typedef Aws::Utils::Outcome<ListAIGuardrailsResult, QConnectError> ListAIGuardrailsOutcome;
      typedef Aws::Utils::Outcome<ListAIPromptVersionsResult, QConnectError> ListAIPromptVersionsOutcome;
      typedef Aws::Utils::Outcome<ListAIPromptsResult, QConnectError> ListAIPromptsOutcome;
      typedef Aws::Utils::Outcome<ListAssistantAssociationsResult, QConnectError> ListAssistantAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListAssistantsResult, QConnectError> ListAssistantsOutcome;
      typedef Aws::Utils::Outcome<ListContentAssociationsResult, QConnectError> ListContentAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListContentsResult, QConnectError> ListContentsOutcome;
      typedef Aws::Utils::Outcome<ListImportJobsResult, QConnectError> ListImportJobsOutcome;
      typedef Aws::Utils::Outcome<ListKnowledgeBasesResult, QConnectError> ListKnowledgeBasesOutcome;
      typedef Aws::Utils::Outcome<ListMessageTemplateVersionsResult, QConnectError> ListMessageTemplateVersionsOutcome;
      typedef Aws::Utils::Outcome<ListMessageTemplatesResult, QConnectError> ListMessageTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListMessagesResult, QConnectError> ListMessagesOutcome;
      typedef Aws::Utils::Outcome<ListQuickResponsesResult, QConnectError> ListQuickResponsesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, QConnectError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<NotifyRecommendationsReceivedResult, QConnectError> NotifyRecommendationsReceivedOutcome;
      typedef Aws::Utils::Outcome<PutFeedbackResult, QConnectError> PutFeedbackOutcome;
      typedef Aws::Utils::Outcome<RemoveAssistantAIAgentResult, QConnectError> RemoveAssistantAIAgentOutcome;
      typedef Aws::Utils::Outcome<RemoveKnowledgeBaseTemplateUriResult, QConnectError> RemoveKnowledgeBaseTemplateUriOutcome;
      typedef Aws::Utils::Outcome<RenderMessageTemplateResult, QConnectError> RenderMessageTemplateOutcome;
      typedef Aws::Utils::Outcome<SearchContentResult, QConnectError> SearchContentOutcome;
      typedef Aws::Utils::Outcome<SearchMessageTemplatesResult, QConnectError> SearchMessageTemplatesOutcome;
      typedef Aws::Utils::Outcome<SearchQuickResponsesResult, QConnectError> SearchQuickResponsesOutcome;
      typedef Aws::Utils::Outcome<SearchSessionsResult, QConnectError> SearchSessionsOutcome;
      typedef Aws::Utils::Outcome<SendMessageResult, QConnectError> SendMessageOutcome;
      typedef Aws::Utils::Outcome<StartContentUploadResult, QConnectError> StartContentUploadOutcome;
      typedef Aws::Utils::Outcome<StartImportJobResult, QConnectError> StartImportJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, QConnectError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, QConnectError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAIAgentResult, QConnectError> UpdateAIAgentOutcome;
      typedef Aws::Utils::Outcome<UpdateAIGuardrailResult, QConnectError> UpdateAIGuardrailOutcome;
      typedef Aws::Utils::Outcome<UpdateAIPromptResult, QConnectError> UpdateAIPromptOutcome;
      typedef Aws::Utils::Outcome<UpdateAssistantAIAgentResult, QConnectError> UpdateAssistantAIAgentOutcome;
      typedef Aws::Utils::Outcome<UpdateContentResult, QConnectError> UpdateContentOutcome;
      typedef Aws::Utils::Outcome<UpdateKnowledgeBaseTemplateUriResult, QConnectError> UpdateKnowledgeBaseTemplateUriOutcome;
      typedef Aws::Utils::Outcome<UpdateMessageTemplateResult, QConnectError> UpdateMessageTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateMessageTemplateMetadataResult, QConnectError> UpdateMessageTemplateMetadataOutcome;
      typedef Aws::Utils::Outcome<UpdateQuickResponseResult, QConnectError> UpdateQuickResponseOutcome;
      typedef Aws::Utils::Outcome<UpdateSessionResult, QConnectError> UpdateSessionOutcome;
      typedef Aws::Utils::Outcome<UpdateSessionDataResult, QConnectError> UpdateSessionDataOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ActivateMessageTemplateOutcome> ActivateMessageTemplateOutcomeCallable;
      typedef std::future<CreateAIAgentOutcome> CreateAIAgentOutcomeCallable;
      typedef std::future<CreateAIAgentVersionOutcome> CreateAIAgentVersionOutcomeCallable;
      typedef std::future<CreateAIGuardrailOutcome> CreateAIGuardrailOutcomeCallable;
      typedef std::future<CreateAIGuardrailVersionOutcome> CreateAIGuardrailVersionOutcomeCallable;
      typedef std::future<CreateAIPromptOutcome> CreateAIPromptOutcomeCallable;
      typedef std::future<CreateAIPromptVersionOutcome> CreateAIPromptVersionOutcomeCallable;
      typedef std::future<CreateAssistantOutcome> CreateAssistantOutcomeCallable;
      typedef std::future<CreateAssistantAssociationOutcome> CreateAssistantAssociationOutcomeCallable;
      typedef std::future<CreateContentOutcome> CreateContentOutcomeCallable;
      typedef std::future<CreateContentAssociationOutcome> CreateContentAssociationOutcomeCallable;
      typedef std::future<CreateKnowledgeBaseOutcome> CreateKnowledgeBaseOutcomeCallable;
      typedef std::future<CreateMessageTemplateOutcome> CreateMessageTemplateOutcomeCallable;
      typedef std::future<CreateMessageTemplateAttachmentOutcome> CreateMessageTemplateAttachmentOutcomeCallable;
      typedef std::future<CreateMessageTemplateVersionOutcome> CreateMessageTemplateVersionOutcomeCallable;
      typedef std::future<CreateQuickResponseOutcome> CreateQuickResponseOutcomeCallable;
      typedef std::future<CreateSessionOutcome> CreateSessionOutcomeCallable;
      typedef std::future<DeactivateMessageTemplateOutcome> DeactivateMessageTemplateOutcomeCallable;
      typedef std::future<DeleteAIAgentOutcome> DeleteAIAgentOutcomeCallable;
      typedef std::future<DeleteAIAgentVersionOutcome> DeleteAIAgentVersionOutcomeCallable;
      typedef std::future<DeleteAIGuardrailOutcome> DeleteAIGuardrailOutcomeCallable;
      typedef std::future<DeleteAIGuardrailVersionOutcome> DeleteAIGuardrailVersionOutcomeCallable;
      typedef std::future<DeleteAIPromptOutcome> DeleteAIPromptOutcomeCallable;
      typedef std::future<DeleteAIPromptVersionOutcome> DeleteAIPromptVersionOutcomeCallable;
      typedef std::future<DeleteAssistantOutcome> DeleteAssistantOutcomeCallable;
      typedef std::future<DeleteAssistantAssociationOutcome> DeleteAssistantAssociationOutcomeCallable;
      typedef std::future<DeleteContentOutcome> DeleteContentOutcomeCallable;
      typedef std::future<DeleteContentAssociationOutcome> DeleteContentAssociationOutcomeCallable;
      typedef std::future<DeleteImportJobOutcome> DeleteImportJobOutcomeCallable;
      typedef std::future<DeleteKnowledgeBaseOutcome> DeleteKnowledgeBaseOutcomeCallable;
      typedef std::future<DeleteMessageTemplateOutcome> DeleteMessageTemplateOutcomeCallable;
      typedef std::future<DeleteMessageTemplateAttachmentOutcome> DeleteMessageTemplateAttachmentOutcomeCallable;
      typedef std::future<DeleteQuickResponseOutcome> DeleteQuickResponseOutcomeCallable;
      typedef std::future<GetAIAgentOutcome> GetAIAgentOutcomeCallable;
      typedef std::future<GetAIGuardrailOutcome> GetAIGuardrailOutcomeCallable;
      typedef std::future<GetAIPromptOutcome> GetAIPromptOutcomeCallable;
      typedef std::future<GetAssistantOutcome> GetAssistantOutcomeCallable;
      typedef std::future<GetAssistantAssociationOutcome> GetAssistantAssociationOutcomeCallable;
      typedef std::future<GetContentOutcome> GetContentOutcomeCallable;
      typedef std::future<GetContentAssociationOutcome> GetContentAssociationOutcomeCallable;
      typedef std::future<GetContentSummaryOutcome> GetContentSummaryOutcomeCallable;
      typedef std::future<GetImportJobOutcome> GetImportJobOutcomeCallable;
      typedef std::future<GetKnowledgeBaseOutcome> GetKnowledgeBaseOutcomeCallable;
      typedef std::future<GetMessageTemplateOutcome> GetMessageTemplateOutcomeCallable;
      typedef std::future<GetNextMessageOutcome> GetNextMessageOutcomeCallable;
      typedef std::future<GetQuickResponseOutcome> GetQuickResponseOutcomeCallable;
      typedef std::future<GetSessionOutcome> GetSessionOutcomeCallable;
      typedef std::future<ListAIAgentVersionsOutcome> ListAIAgentVersionsOutcomeCallable;
      typedef std::future<ListAIAgentsOutcome> ListAIAgentsOutcomeCallable;
      typedef std::future<ListAIGuardrailVersionsOutcome> ListAIGuardrailVersionsOutcomeCallable;
      typedef std::future<ListAIGuardrailsOutcome> ListAIGuardrailsOutcomeCallable;
      typedef std::future<ListAIPromptVersionsOutcome> ListAIPromptVersionsOutcomeCallable;
      typedef std::future<ListAIPromptsOutcome> ListAIPromptsOutcomeCallable;
      typedef std::future<ListAssistantAssociationsOutcome> ListAssistantAssociationsOutcomeCallable;
      typedef std::future<ListAssistantsOutcome> ListAssistantsOutcomeCallable;
      typedef std::future<ListContentAssociationsOutcome> ListContentAssociationsOutcomeCallable;
      typedef std::future<ListContentsOutcome> ListContentsOutcomeCallable;
      typedef std::future<ListImportJobsOutcome> ListImportJobsOutcomeCallable;
      typedef std::future<ListKnowledgeBasesOutcome> ListKnowledgeBasesOutcomeCallable;
      typedef std::future<ListMessageTemplateVersionsOutcome> ListMessageTemplateVersionsOutcomeCallable;
      typedef std::future<ListMessageTemplatesOutcome> ListMessageTemplatesOutcomeCallable;
      typedef std::future<ListMessagesOutcome> ListMessagesOutcomeCallable;
      typedef std::future<ListQuickResponsesOutcome> ListQuickResponsesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<NotifyRecommendationsReceivedOutcome> NotifyRecommendationsReceivedOutcomeCallable;
      typedef std::future<PutFeedbackOutcome> PutFeedbackOutcomeCallable;
      typedef std::future<RemoveAssistantAIAgentOutcome> RemoveAssistantAIAgentOutcomeCallable;
      typedef std::future<RemoveKnowledgeBaseTemplateUriOutcome> RemoveKnowledgeBaseTemplateUriOutcomeCallable;
      typedef std::future<RenderMessageTemplateOutcome> RenderMessageTemplateOutcomeCallable;
      typedef std::future<SearchContentOutcome> SearchContentOutcomeCallable;
      typedef std::future<SearchMessageTemplatesOutcome> SearchMessageTemplatesOutcomeCallable;
      typedef std::future<SearchQuickResponsesOutcome> SearchQuickResponsesOutcomeCallable;
      typedef std::future<SearchSessionsOutcome> SearchSessionsOutcomeCallable;
      typedef std::future<SendMessageOutcome> SendMessageOutcomeCallable;
      typedef std::future<StartContentUploadOutcome> StartContentUploadOutcomeCallable;
      typedef std::future<StartImportJobOutcome> StartImportJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAIAgentOutcome> UpdateAIAgentOutcomeCallable;
      typedef std::future<UpdateAIGuardrailOutcome> UpdateAIGuardrailOutcomeCallable;
      typedef std::future<UpdateAIPromptOutcome> UpdateAIPromptOutcomeCallable;
      typedef std::future<UpdateAssistantAIAgentOutcome> UpdateAssistantAIAgentOutcomeCallable;
      typedef std::future<UpdateContentOutcome> UpdateContentOutcomeCallable;
      typedef std::future<UpdateKnowledgeBaseTemplateUriOutcome> UpdateKnowledgeBaseTemplateUriOutcomeCallable;
      typedef std::future<UpdateMessageTemplateOutcome> UpdateMessageTemplateOutcomeCallable;
      typedef std::future<UpdateMessageTemplateMetadataOutcome> UpdateMessageTemplateMetadataOutcomeCallable;
      typedef std::future<UpdateQuickResponseOutcome> UpdateQuickResponseOutcomeCallable;
      typedef std::future<UpdateSessionOutcome> UpdateSessionOutcomeCallable;
      typedef std::future<UpdateSessionDataOutcome> UpdateSessionDataOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class QConnectClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const QConnectClient*, const Model::ActivateMessageTemplateRequest&, const Model::ActivateMessageTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateMessageTemplateResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateAIAgentRequest&, const Model::CreateAIAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAIAgentResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateAIAgentVersionRequest&, const Model::CreateAIAgentVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAIAgentVersionResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateAIGuardrailRequest&, const Model::CreateAIGuardrailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAIGuardrailResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateAIGuardrailVersionRequest&, const Model::CreateAIGuardrailVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAIGuardrailVersionResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateAIPromptRequest&, const Model::CreateAIPromptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAIPromptResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateAIPromptVersionRequest&, const Model::CreateAIPromptVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAIPromptVersionResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateAssistantRequest&, const Model::CreateAssistantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssistantResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateAssistantAssociationRequest&, const Model::CreateAssistantAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssistantAssociationResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateContentRequest&, const Model::CreateContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContentResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateContentAssociationRequest&, const Model::CreateContentAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContentAssociationResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateKnowledgeBaseRequest&, const Model::CreateKnowledgeBaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKnowledgeBaseResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateMessageTemplateRequest&, const Model::CreateMessageTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMessageTemplateResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateMessageTemplateAttachmentRequest&, const Model::CreateMessageTemplateAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMessageTemplateAttachmentResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateMessageTemplateVersionRequest&, const Model::CreateMessageTemplateVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMessageTemplateVersionResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateQuickResponseRequest&, const Model::CreateQuickResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQuickResponseResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateSessionRequest&, const Model::CreateSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSessionResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeactivateMessageTemplateRequest&, const Model::DeactivateMessageTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeactivateMessageTemplateResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteAIAgentRequest&, const Model::DeleteAIAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAIAgentResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteAIAgentVersionRequest&, const Model::DeleteAIAgentVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAIAgentVersionResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteAIGuardrailRequest&, const Model::DeleteAIGuardrailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAIGuardrailResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteAIGuardrailVersionRequest&, const Model::DeleteAIGuardrailVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAIGuardrailVersionResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteAIPromptRequest&, const Model::DeleteAIPromptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAIPromptResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteAIPromptVersionRequest&, const Model::DeleteAIPromptVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAIPromptVersionResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteAssistantRequest&, const Model::DeleteAssistantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssistantResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteAssistantAssociationRequest&, const Model::DeleteAssistantAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssistantAssociationResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteContentRequest&, const Model::DeleteContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContentResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteContentAssociationRequest&, const Model::DeleteContentAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContentAssociationResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteImportJobRequest&, const Model::DeleteImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImportJobResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteKnowledgeBaseRequest&, const Model::DeleteKnowledgeBaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKnowledgeBaseResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteMessageTemplateRequest&, const Model::DeleteMessageTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMessageTemplateResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteMessageTemplateAttachmentRequest&, const Model::DeleteMessageTemplateAttachmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMessageTemplateAttachmentResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteQuickResponseRequest&, const Model::DeleteQuickResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQuickResponseResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetAIAgentRequest&, const Model::GetAIAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAIAgentResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetAIGuardrailRequest&, const Model::GetAIGuardrailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAIGuardrailResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetAIPromptRequest&, const Model::GetAIPromptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAIPromptResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetAssistantRequest&, const Model::GetAssistantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssistantResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetAssistantAssociationRequest&, const Model::GetAssistantAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssistantAssociationResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetContentRequest&, const Model::GetContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContentResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetContentAssociationRequest&, const Model::GetContentAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContentAssociationResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetContentSummaryRequest&, const Model::GetContentSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContentSummaryResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetImportJobRequest&, const Model::GetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImportJobResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetKnowledgeBaseRequest&, const Model::GetKnowledgeBaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKnowledgeBaseResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetMessageTemplateRequest&, const Model::GetMessageTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMessageTemplateResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetNextMessageRequest&, const Model::GetNextMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNextMessageResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetQuickResponseRequest&, const Model::GetQuickResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQuickResponseResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetSessionRequest&, const Model::GetSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSessionResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListAIAgentVersionsRequest&, const Model::ListAIAgentVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAIAgentVersionsResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListAIAgentsRequest&, const Model::ListAIAgentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAIAgentsResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListAIGuardrailVersionsRequest&, const Model::ListAIGuardrailVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAIGuardrailVersionsResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListAIGuardrailsRequest&, const Model::ListAIGuardrailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAIGuardrailsResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListAIPromptVersionsRequest&, const Model::ListAIPromptVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAIPromptVersionsResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListAIPromptsRequest&, const Model::ListAIPromptsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAIPromptsResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListAssistantAssociationsRequest&, const Model::ListAssistantAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssistantAssociationsResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListAssistantsRequest&, const Model::ListAssistantsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssistantsResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListContentAssociationsRequest&, const Model::ListContentAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContentAssociationsResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListContentsRequest&, const Model::ListContentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContentsResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListImportJobsRequest&, const Model::ListImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImportJobsResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListKnowledgeBasesRequest&, const Model::ListKnowledgeBasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKnowledgeBasesResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListMessageTemplateVersionsRequest&, const Model::ListMessageTemplateVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMessageTemplateVersionsResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListMessageTemplatesRequest&, const Model::ListMessageTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMessageTemplatesResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListMessagesRequest&, const Model::ListMessagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMessagesResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListQuickResponsesRequest&, const Model::ListQuickResponsesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQuickResponsesResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::NotifyRecommendationsReceivedRequest&, const Model::NotifyRecommendationsReceivedOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > NotifyRecommendationsReceivedResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::PutFeedbackRequest&, const Model::PutFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutFeedbackResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::RemoveAssistantAIAgentRequest&, const Model::RemoveAssistantAIAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveAssistantAIAgentResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::RemoveKnowledgeBaseTemplateUriRequest&, const Model::RemoveKnowledgeBaseTemplateUriOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveKnowledgeBaseTemplateUriResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::RenderMessageTemplateRequest&, const Model::RenderMessageTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RenderMessageTemplateResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::SearchContentRequest&, const Model::SearchContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchContentResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::SearchMessageTemplatesRequest&, const Model::SearchMessageTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchMessageTemplatesResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::SearchQuickResponsesRequest&, const Model::SearchQuickResponsesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchQuickResponsesResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::SearchSessionsRequest&, const Model::SearchSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchSessionsResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::SendMessageRequest&, const Model::SendMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendMessageResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::StartContentUploadRequest&, const Model::StartContentUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartContentUploadResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::StartImportJobRequest&, const Model::StartImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartImportJobResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::UpdateAIAgentRequest&, const Model::UpdateAIAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAIAgentResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::UpdateAIGuardrailRequest&, const Model::UpdateAIGuardrailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAIGuardrailResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::UpdateAIPromptRequest&, const Model::UpdateAIPromptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAIPromptResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::UpdateAssistantAIAgentRequest&, const Model::UpdateAssistantAIAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssistantAIAgentResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::UpdateContentRequest&, const Model::UpdateContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContentResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::UpdateKnowledgeBaseTemplateUriRequest&, const Model::UpdateKnowledgeBaseTemplateUriOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKnowledgeBaseTemplateUriResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::UpdateMessageTemplateRequest&, const Model::UpdateMessageTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMessageTemplateResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::UpdateMessageTemplateMetadataRequest&, const Model::UpdateMessageTemplateMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMessageTemplateMetadataResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::UpdateQuickResponseRequest&, const Model::UpdateQuickResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQuickResponseResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::UpdateSessionRequest&, const Model::UpdateSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSessionResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::UpdateSessionDataRequest&, const Model::UpdateSessionDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSessionDataResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace QConnect
} // namespace Aws
