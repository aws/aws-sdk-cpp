/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/wisdom/ConnectWisdomServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/wisdom/ConnectWisdomServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ConnectWisdomServiceClient header */
#include <aws/wisdom/model/CreateAssistantResult.h>
#include <aws/wisdom/model/CreateAssistantAssociationResult.h>
#include <aws/wisdom/model/CreateContentResult.h>
#include <aws/wisdom/model/CreateKnowledgeBaseResult.h>
#include <aws/wisdom/model/CreateQuickResponseResult.h>
#include <aws/wisdom/model/CreateSessionResult.h>
#include <aws/wisdom/model/DeleteAssistantResult.h>
#include <aws/wisdom/model/DeleteAssistantAssociationResult.h>
#include <aws/wisdom/model/DeleteContentResult.h>
#include <aws/wisdom/model/DeleteImportJobResult.h>
#include <aws/wisdom/model/DeleteKnowledgeBaseResult.h>
#include <aws/wisdom/model/DeleteQuickResponseResult.h>
#include <aws/wisdom/model/GetAssistantResult.h>
#include <aws/wisdom/model/GetAssistantAssociationResult.h>
#include <aws/wisdom/model/GetContentResult.h>
#include <aws/wisdom/model/GetContentSummaryResult.h>
#include <aws/wisdom/model/GetImportJobResult.h>
#include <aws/wisdom/model/GetKnowledgeBaseResult.h>
#include <aws/wisdom/model/GetQuickResponseResult.h>
#include <aws/wisdom/model/GetSessionResult.h>
#include <aws/wisdom/model/ListAssistantAssociationsResult.h>
#include <aws/wisdom/model/ListAssistantsResult.h>
#include <aws/wisdom/model/ListContentsResult.h>
#include <aws/wisdom/model/ListImportJobsResult.h>
#include <aws/wisdom/model/ListKnowledgeBasesResult.h>
#include <aws/wisdom/model/ListQuickResponsesResult.h>
#include <aws/wisdom/model/ListTagsForResourceResult.h>
#include <aws/wisdom/model/NotifyRecommendationsReceivedResult.h>
#include <aws/wisdom/model/RemoveKnowledgeBaseTemplateUriResult.h>
#include <aws/wisdom/model/SearchContentResult.h>
#include <aws/wisdom/model/SearchQuickResponsesResult.h>
#include <aws/wisdom/model/SearchSessionsResult.h>
#include <aws/wisdom/model/StartContentUploadResult.h>
#include <aws/wisdom/model/StartImportJobResult.h>
#include <aws/wisdom/model/TagResourceResult.h>
#include <aws/wisdom/model/UntagResourceResult.h>
#include <aws/wisdom/model/UpdateContentResult.h>
#include <aws/wisdom/model/UpdateKnowledgeBaseTemplateUriResult.h>
#include <aws/wisdom/model/UpdateQuickResponseResult.h>
/* End of service model headers required in ConnectWisdomServiceClient header */

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

  namespace ConnectWisdomService
  {
    using ConnectWisdomServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ConnectWisdomServiceEndpointProviderBase = Aws::ConnectWisdomService::Endpoint::ConnectWisdomServiceEndpointProviderBase;
    using ConnectWisdomServiceEndpointProvider = Aws::ConnectWisdomService::Endpoint::ConnectWisdomServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ConnectWisdomServiceClient header */
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
      /* End of service model forward declarations required in ConnectWisdomServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateAssistantResult, ConnectWisdomServiceError> CreateAssistantOutcome;
      typedef Aws::Utils::Outcome<CreateAssistantAssociationResult, ConnectWisdomServiceError> CreateAssistantAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateContentResult, ConnectWisdomServiceError> CreateContentOutcome;
      typedef Aws::Utils::Outcome<CreateKnowledgeBaseResult, ConnectWisdomServiceError> CreateKnowledgeBaseOutcome;
      typedef Aws::Utils::Outcome<CreateQuickResponseResult, ConnectWisdomServiceError> CreateQuickResponseOutcome;
      typedef Aws::Utils::Outcome<CreateSessionResult, ConnectWisdomServiceError> CreateSessionOutcome;
      typedef Aws::Utils::Outcome<DeleteAssistantResult, ConnectWisdomServiceError> DeleteAssistantOutcome;
      typedef Aws::Utils::Outcome<DeleteAssistantAssociationResult, ConnectWisdomServiceError> DeleteAssistantAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteContentResult, ConnectWisdomServiceError> DeleteContentOutcome;
      typedef Aws::Utils::Outcome<DeleteImportJobResult, ConnectWisdomServiceError> DeleteImportJobOutcome;
      typedef Aws::Utils::Outcome<DeleteKnowledgeBaseResult, ConnectWisdomServiceError> DeleteKnowledgeBaseOutcome;
      typedef Aws::Utils::Outcome<DeleteQuickResponseResult, ConnectWisdomServiceError> DeleteQuickResponseOutcome;
      typedef Aws::Utils::Outcome<GetAssistantResult, ConnectWisdomServiceError> GetAssistantOutcome;
      typedef Aws::Utils::Outcome<GetAssistantAssociationResult, ConnectWisdomServiceError> GetAssistantAssociationOutcome;
      typedef Aws::Utils::Outcome<GetContentResult, ConnectWisdomServiceError> GetContentOutcome;
      typedef Aws::Utils::Outcome<GetContentSummaryResult, ConnectWisdomServiceError> GetContentSummaryOutcome;
      typedef Aws::Utils::Outcome<GetImportJobResult, ConnectWisdomServiceError> GetImportJobOutcome;
      typedef Aws::Utils::Outcome<GetKnowledgeBaseResult, ConnectWisdomServiceError> GetKnowledgeBaseOutcome;
      typedef Aws::Utils::Outcome<GetQuickResponseResult, ConnectWisdomServiceError> GetQuickResponseOutcome;
      typedef Aws::Utils::Outcome<GetSessionResult, ConnectWisdomServiceError> GetSessionOutcome;
      typedef Aws::Utils::Outcome<ListAssistantAssociationsResult, ConnectWisdomServiceError> ListAssistantAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListAssistantsResult, ConnectWisdomServiceError> ListAssistantsOutcome;
      typedef Aws::Utils::Outcome<ListContentsResult, ConnectWisdomServiceError> ListContentsOutcome;
      typedef Aws::Utils::Outcome<ListImportJobsResult, ConnectWisdomServiceError> ListImportJobsOutcome;
      typedef Aws::Utils::Outcome<ListKnowledgeBasesResult, ConnectWisdomServiceError> ListKnowledgeBasesOutcome;
      typedef Aws::Utils::Outcome<ListQuickResponsesResult, ConnectWisdomServiceError> ListQuickResponsesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ConnectWisdomServiceError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<NotifyRecommendationsReceivedResult, ConnectWisdomServiceError> NotifyRecommendationsReceivedOutcome;
      typedef Aws::Utils::Outcome<RemoveKnowledgeBaseTemplateUriResult, ConnectWisdomServiceError> RemoveKnowledgeBaseTemplateUriOutcome;
      typedef Aws::Utils::Outcome<SearchContentResult, ConnectWisdomServiceError> SearchContentOutcome;
      typedef Aws::Utils::Outcome<SearchQuickResponsesResult, ConnectWisdomServiceError> SearchQuickResponsesOutcome;
      typedef Aws::Utils::Outcome<SearchSessionsResult, ConnectWisdomServiceError> SearchSessionsOutcome;
      typedef Aws::Utils::Outcome<StartContentUploadResult, ConnectWisdomServiceError> StartContentUploadOutcome;
      typedef Aws::Utils::Outcome<StartImportJobResult, ConnectWisdomServiceError> StartImportJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, ConnectWisdomServiceError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, ConnectWisdomServiceError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateContentResult, ConnectWisdomServiceError> UpdateContentOutcome;
      typedef Aws::Utils::Outcome<UpdateKnowledgeBaseTemplateUriResult, ConnectWisdomServiceError> UpdateKnowledgeBaseTemplateUriOutcome;
      typedef Aws::Utils::Outcome<UpdateQuickResponseResult, ConnectWisdomServiceError> UpdateQuickResponseOutcome;
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

    class ConnectWisdomServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::CreateAssistantRequest&, const Model::CreateAssistantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssistantResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::CreateAssistantAssociationRequest&, const Model::CreateAssistantAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssistantAssociationResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::CreateContentRequest&, const Model::CreateContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContentResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::CreateKnowledgeBaseRequest&, const Model::CreateKnowledgeBaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKnowledgeBaseResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::CreateQuickResponseRequest&, const Model::CreateQuickResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateQuickResponseResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::CreateSessionRequest&, const Model::CreateSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSessionResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::DeleteAssistantRequest&, const Model::DeleteAssistantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssistantResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::DeleteAssistantAssociationRequest&, const Model::DeleteAssistantAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssistantAssociationResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::DeleteContentRequest&, const Model::DeleteContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContentResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::DeleteImportJobRequest&, const Model::DeleteImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImportJobResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::DeleteKnowledgeBaseRequest&, const Model::DeleteKnowledgeBaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKnowledgeBaseResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::DeleteQuickResponseRequest&, const Model::DeleteQuickResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteQuickResponseResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::GetAssistantRequest&, const Model::GetAssistantOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssistantResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::GetAssistantAssociationRequest&, const Model::GetAssistantAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssistantAssociationResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::GetContentRequest&, const Model::GetContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContentResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::GetContentSummaryRequest&, const Model::GetContentSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContentSummaryResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::GetImportJobRequest&, const Model::GetImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImportJobResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::GetKnowledgeBaseRequest&, const Model::GetKnowledgeBaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKnowledgeBaseResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::GetQuickResponseRequest&, const Model::GetQuickResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQuickResponseResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::GetSessionRequest&, const Model::GetSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSessionResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::ListAssistantAssociationsRequest&, const Model::ListAssistantAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssistantAssociationsResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::ListAssistantsRequest&, const Model::ListAssistantsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssistantsResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::ListContentsRequest&, const Model::ListContentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContentsResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::ListImportJobsRequest&, const Model::ListImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImportJobsResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::ListKnowledgeBasesRequest&, const Model::ListKnowledgeBasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKnowledgeBasesResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::ListQuickResponsesRequest&, const Model::ListQuickResponsesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQuickResponsesResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::NotifyRecommendationsReceivedRequest&, const Model::NotifyRecommendationsReceivedOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > NotifyRecommendationsReceivedResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::RemoveKnowledgeBaseTemplateUriRequest&, const Model::RemoveKnowledgeBaseTemplateUriOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveKnowledgeBaseTemplateUriResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::SearchContentRequest&, const Model::SearchContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchContentResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::SearchQuickResponsesRequest&, const Model::SearchQuickResponsesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchQuickResponsesResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::SearchSessionsRequest&, const Model::SearchSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchSessionsResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::StartContentUploadRequest&, const Model::StartContentUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartContentUploadResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::StartImportJobRequest&, const Model::StartImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartImportJobResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::UpdateContentRequest&, const Model::UpdateContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContentResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::UpdateKnowledgeBaseTemplateUriRequest&, const Model::UpdateKnowledgeBaseTemplateUriOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKnowledgeBaseTemplateUriResponseReceivedHandler;
    typedef std::function<void(const ConnectWisdomServiceClient*, const Model::UpdateQuickResponseRequest&, const Model::UpdateQuickResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateQuickResponseResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ConnectWisdomService
} // namespace Aws
