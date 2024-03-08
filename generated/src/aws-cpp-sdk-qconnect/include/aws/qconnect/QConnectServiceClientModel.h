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
#include <aws/qconnect/model/CreateAssistantResult.h>
#include <aws/qconnect/model/CreateAssistantAssociationResult.h>
#include <aws/qconnect/model/CreateContentResult.h>
#include <aws/qconnect/model/CreateKnowledgeBaseResult.h>
#include <aws/qconnect/model/CreateQuickResponseResult.h>
#include <aws/qconnect/model/CreateSessionResult.h>
#include <aws/qconnect/model/DeleteAssistantResult.h>
#include <aws/qconnect/model/DeleteAssistantAssociationResult.h>
#include <aws/qconnect/model/DeleteContentResult.h>
#include <aws/qconnect/model/DeleteImportJobResult.h>
#include <aws/qconnect/model/DeleteKnowledgeBaseResult.h>
#include <aws/qconnect/model/DeleteQuickResponseResult.h>
#include <aws/qconnect/model/GetAssistantResult.h>
#include <aws/qconnect/model/GetAssistantAssociationResult.h>
#include <aws/qconnect/model/GetContentResult.h>
#include <aws/qconnect/model/GetContentSummaryResult.h>
#include <aws/qconnect/model/GetImportJobResult.h>
#include <aws/qconnect/model/GetKnowledgeBaseResult.h>
#include <aws/qconnect/model/GetQuickResponseResult.h>
#include <aws/qconnect/model/GetSessionResult.h>
#include <aws/qconnect/model/ListAssistantAssociationsResult.h>
#include <aws/qconnect/model/ListAssistantsResult.h>
#include <aws/qconnect/model/ListContentsResult.h>
#include <aws/qconnect/model/ListImportJobsResult.h>
#include <aws/qconnect/model/ListKnowledgeBasesResult.h>
#include <aws/qconnect/model/ListQuickResponsesResult.h>
#include <aws/qconnect/model/ListTagsForResourceResult.h>
#include <aws/qconnect/model/NotifyRecommendationsReceivedResult.h>
#include <aws/qconnect/model/PutFeedbackResult.h>
#include <aws/qconnect/model/RemoveKnowledgeBaseTemplateUriResult.h>
#include <aws/qconnect/model/SearchContentResult.h>
#include <aws/qconnect/model/SearchQuickResponsesResult.h>
#include <aws/qconnect/model/SearchSessionsResult.h>
#include <aws/qconnect/model/StartContentUploadResult.h>
#include <aws/qconnect/model/StartImportJobResult.h>
#include <aws/qconnect/model/TagResourceResult.h>
#include <aws/qconnect/model/UntagResourceResult.h>
#include <aws/qconnect/model/UpdateContentResult.h>
#include <aws/qconnect/model/UpdateKnowledgeBaseTemplateUriResult.h>
#include <aws/qconnect/model/UpdateQuickResponseResult.h>
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
    using QConnectClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using QConnectEndpointProviderBase = Aws::QConnect::Endpoint::QConnectEndpointProviderBase;
    using QConnectEndpointProvider = Aws::QConnect::Endpoint::QConnectEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in QConnectClient header */
      class CreateAssistantRequest;
      class CreateAssistantAssociationRequest;
      class CreateContentRequest;
      class CreateKnowledgeBaseRequest;
      class CreateQuickResponseRequest;
      class CreateSessionRequest;
      class DeleteAssistantRequest;
      class DeleteAssistantAssociationRequest;
      class DeleteContentRequest;
      class DeleteImportJobRequest;
      class DeleteKnowledgeBaseRequest;
      class DeleteQuickResponseRequest;
      class GetAssistantRequest;
      class GetAssistantAssociationRequest;
      class GetContentRequest;
      class GetContentSummaryRequest;
      class GetImportJobRequest;
      class GetKnowledgeBaseRequest;
      class GetQuickResponseRequest;
      class GetSessionRequest;
      class ListAssistantAssociationsRequest;
      class ListAssistantsRequest;
      class ListContentsRequest;
      class ListImportJobsRequest;
      class ListKnowledgeBasesRequest;
      class ListQuickResponsesRequest;
      class ListTagsForResourceRequest;
      class NotifyRecommendationsReceivedRequest;
      class PutFeedbackRequest;
      class RemoveKnowledgeBaseTemplateUriRequest;
      class SearchContentRequest;
      class SearchQuickResponsesRequest;
      class SearchSessionsRequest;
      class StartContentUploadRequest;
      class StartImportJobRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateContentRequest;
      class UpdateKnowledgeBaseTemplateUriRequest;
      class UpdateQuickResponseRequest;
      /* End of service model forward declarations required in QConnectClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateAssistantResult, QConnectError> CreateAssistantOutcome;
      typedef Aws::Utils::Outcome<CreateAssistantAssociationResult, QConnectError> CreateAssistantAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateContentResult, QConnectError> CreateContentOutcome;
      typedef Aws::Utils::Outcome<CreateKnowledgeBaseResult, QConnectError> CreateKnowledgeBaseOutcome;
      typedef Aws::Utils::Outcome<CreateQuickResponseResult, QConnectError> CreateQuickResponseOutcome;
      typedef Aws::Utils::Outcome<CreateSessionResult, QConnectError> CreateSessionOutcome;
      typedef Aws::Utils::Outcome<DeleteAssistantResult, QConnectError> DeleteAssistantOutcome;
      typedef Aws::Utils::Outcome<DeleteAssistantAssociationResult, QConnectError> DeleteAssistantAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteContentResult, QConnectError> DeleteContentOutcome;
      typedef Aws::Utils::Outcome<DeleteImportJobResult, QConnectError> DeleteImportJobOutcome;
      typedef Aws::Utils::Outcome<DeleteKnowledgeBaseResult, QConnectError> DeleteKnowledgeBaseOutcome;
      typedef Aws::Utils::Outcome<DeleteQuickResponseResult, QConnectError> DeleteQuickResponseOutcome;
      typedef Aws::Utils::Outcome<GetAssistantResult, QConnectError> GetAssistantOutcome;
      typedef Aws::Utils::Outcome<GetAssistantAssociationResult, QConnectError> GetAssistantAssociationOutcome;
      typedef Aws::Utils::Outcome<GetContentResult, QConnectError> GetContentOutcome;
      typedef Aws::Utils::Outcome<GetContentSummaryResult, QConnectError> GetContentSummaryOutcome;
      typedef Aws::Utils::Outcome<GetImportJobResult, QConnectError> GetImportJobOutcome;
      typedef Aws::Utils::Outcome<GetKnowledgeBaseResult, QConnectError> GetKnowledgeBaseOutcome;
      typedef Aws::Utils::Outcome<GetQuickResponseResult, QConnectError> GetQuickResponseOutcome;
      typedef Aws::Utils::Outcome<GetSessionResult, QConnectError> GetSessionOutcome;
      typedef Aws::Utils::Outcome<ListAssistantAssociationsResult, QConnectError> ListAssistantAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListAssistantsResult, QConnectError> ListAssistantsOutcome;
      typedef Aws::Utils::Outcome<ListContentsResult, QConnectError> ListContentsOutcome;
      typedef Aws::Utils::Outcome<ListImportJobsResult, QConnectError> ListImportJobsOutcome;
      typedef Aws::Utils::Outcome<ListKnowledgeBasesResult, QConnectError> ListKnowledgeBasesOutcome;
      typedef Aws::Utils::Outcome<ListQuickResponsesResult, QConnectError> ListQuickResponsesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, QConnectError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<NotifyRecommendationsReceivedResult, QConnectError> NotifyRecommendationsReceivedOutcome;
      typedef Aws::Utils::Outcome<PutFeedbackResult, QConnectError> PutFeedbackOutcome;
      typedef Aws::Utils::Outcome<RemoveKnowledgeBaseTemplateUriResult, QConnectError> RemoveKnowledgeBaseTemplateUriOutcome;
      typedef Aws::Utils::Outcome<SearchContentResult, QConnectError> SearchContentOutcome;
      typedef Aws::Utils::Outcome<SearchQuickResponsesResult, QConnectError> SearchQuickResponsesOutcome;
      typedef Aws::Utils::Outcome<SearchSessionsResult, QConnectError> SearchSessionsOutcome;
      typedef Aws::Utils::Outcome<StartContentUploadResult, QConnectError> StartContentUploadOutcome;
      typedef Aws::Utils::Outcome<StartImportJobResult, QConnectError> StartImportJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, QConnectError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, QConnectError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateContentResult, QConnectError> UpdateContentOutcome;
      typedef Aws::Utils::Outcome<UpdateKnowledgeBaseTemplateUriResult, QConnectError> UpdateKnowledgeBaseTemplateUriOutcome;
      typedef Aws::Utils::Outcome<UpdateQuickResponseResult, QConnectError> UpdateQuickResponseOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateAssistantOutcome> CreateAssistantOutcomeCallable;
      typedef std::future<CreateAssistantAssociationOutcome> CreateAssistantAssociationOutcomeCallable;
      typedef std::future<CreateContentOutcome> CreateContentOutcomeCallable;
      typedef std::future<CreateKnowledgeBaseOutcome> CreateKnowledgeBaseOutcomeCallable;
      typedef std::future<CreateQuickResponseOutcome> CreateQuickResponseOutcomeCallable;
      typedef std::future<CreateSessionOutcome> CreateSessionOutcomeCallable;
      typedef std::future<DeleteAssistantOutcome> DeleteAssistantOutcomeCallable;
      typedef std::future<DeleteAssistantAssociationOutcome> DeleteAssistantAssociationOutcomeCallable;
      typedef std::future<DeleteContentOutcome> DeleteContentOutcomeCallable;
      typedef std::future<DeleteImportJobOutcome> DeleteImportJobOutcomeCallable;
      typedef std::future<DeleteKnowledgeBaseOutcome> DeleteKnowledgeBaseOutcomeCallable;
      typedef std::future<DeleteQuickResponseOutcome> DeleteQuickResponseOutcomeCallable;
      typedef std::future<GetAssistantOutcome> GetAssistantOutcomeCallable;
      typedef std::future<GetAssistantAssociationOutcome> GetAssistantAssociationOutcomeCallable;
      typedef std::future<GetContentOutcome> GetContentOutcomeCallable;
      typedef std::future<GetContentSummaryOutcome> GetContentSummaryOutcomeCallable;
      typedef std::future<GetImportJobOutcome> GetImportJobOutcomeCallable;
      typedef std::future<GetKnowledgeBaseOutcome> GetKnowledgeBaseOutcomeCallable;
      typedef std::future<GetQuickResponseOutcome> GetQuickResponseOutcomeCallable;
      typedef std::future<GetSessionOutcome> GetSessionOutcomeCallable;
      typedef std::future<ListAssistantAssociationsOutcome> ListAssistantAssociationsOutcomeCallable;
      typedef std::future<ListAssistantsOutcome> ListAssistantsOutcomeCallable;
      typedef std::future<ListContentsOutcome> ListContentsOutcomeCallable;
      typedef std::future<ListImportJobsOutcome> ListImportJobsOutcomeCallable;
      typedef std::future<ListKnowledgeBasesOutcome> ListKnowledgeBasesOutcomeCallable;
      typedef std::future<ListQuickResponsesOutcome> ListQuickResponsesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<NotifyRecommendationsReceivedOutcome> NotifyRecommendationsReceivedOutcomeCallable;
      typedef std::future<PutFeedbackOutcome> PutFeedbackOutcomeCallable;
      typedef std::future<RemoveKnowledgeBaseTemplateUriOutcome> RemoveKnowledgeBaseTemplateUriOutcomeCallable;
      typedef std::future<SearchContentOutcome> SearchContentOutcomeCallable;
      typedef std::future<SearchQuickResponsesOutcome> SearchQuickResponsesOutcomeCallable;
      typedef std::future<SearchSessionsOutcome> SearchSessionsOutcomeCallable;
      typedef std::future<StartContentUploadOutcome> StartContentUploadOutcomeCallable;
      typedef std::future<StartImportJobOutcome> StartImportJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateContentOutcome> UpdateContentOutcomeCallable;
      typedef std::future<UpdateKnowledgeBaseTemplateUriOutcome> UpdateKnowledgeBaseTemplateUriOutcomeCallable;
      typedef std::future<UpdateQuickResponseOutcome> UpdateQuickResponseOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class QConnectClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const QConnectClient*, const Model::CreateAssistantRequest&, const Model::CreateAssistantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssistantResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateAssistantAssociationRequest&, const Model::CreateAssistantAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssistantAssociationResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateContentRequest&, const Model::CreateContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContentResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateKnowledgeBaseRequest&, const Model::CreateKnowledgeBaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKnowledgeBaseResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateQuickResponseRequest&, const Model::CreateQuickResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQuickResponseResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::CreateSessionRequest&, const Model::CreateSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSessionResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteAssistantRequest&, const Model::DeleteAssistantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssistantResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteAssistantAssociationRequest&, const Model::DeleteAssistantAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssistantAssociationResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteContentRequest&, const Model::DeleteContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContentResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteImportJobRequest&, const Model::DeleteImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImportJobResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteKnowledgeBaseRequest&, const Model::DeleteKnowledgeBaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKnowledgeBaseResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::DeleteQuickResponseRequest&, const Model::DeleteQuickResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQuickResponseResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetAssistantRequest&, const Model::GetAssistantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssistantResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetAssistantAssociationRequest&, const Model::GetAssistantAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssistantAssociationResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetContentRequest&, const Model::GetContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContentResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetContentSummaryRequest&, const Model::GetContentSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContentSummaryResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetImportJobRequest&, const Model::GetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImportJobResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetKnowledgeBaseRequest&, const Model::GetKnowledgeBaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKnowledgeBaseResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetQuickResponseRequest&, const Model::GetQuickResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQuickResponseResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::GetSessionRequest&, const Model::GetSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSessionResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListAssistantAssociationsRequest&, const Model::ListAssistantAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssistantAssociationsResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListAssistantsRequest&, const Model::ListAssistantsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssistantsResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListContentsRequest&, const Model::ListContentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContentsResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListImportJobsRequest&, const Model::ListImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImportJobsResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListKnowledgeBasesRequest&, const Model::ListKnowledgeBasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKnowledgeBasesResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListQuickResponsesRequest&, const Model::ListQuickResponsesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQuickResponsesResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::NotifyRecommendationsReceivedRequest&, const Model::NotifyRecommendationsReceivedOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > NotifyRecommendationsReceivedResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::PutFeedbackRequest&, const Model::PutFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutFeedbackResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::RemoveKnowledgeBaseTemplateUriRequest&, const Model::RemoveKnowledgeBaseTemplateUriOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveKnowledgeBaseTemplateUriResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::SearchContentRequest&, const Model::SearchContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchContentResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::SearchQuickResponsesRequest&, const Model::SearchQuickResponsesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchQuickResponsesResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::SearchSessionsRequest&, const Model::SearchSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchSessionsResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::StartContentUploadRequest&, const Model::StartContentUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartContentUploadResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::StartImportJobRequest&, const Model::StartImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartImportJobResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::UpdateContentRequest&, const Model::UpdateContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContentResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::UpdateKnowledgeBaseTemplateUriRequest&, const Model::UpdateKnowledgeBaseTemplateUriOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKnowledgeBaseTemplateUriResponseReceivedHandler;
    typedef std::function<void(const QConnectClient*, const Model::UpdateQuickResponseRequest&, const Model::UpdateQuickResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQuickResponseResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace QConnect
} // namespace Aws
