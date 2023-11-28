/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/qbusiness/QBusinessErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/qbusiness/QBusinessEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in QBusinessClient header */
#include <aws/qbusiness/model/BatchDeleteDocumentResult.h>
#include <aws/qbusiness/model/BatchPutDocumentResult.h>
#include <aws/qbusiness/model/ChatSyncResult.h>
#include <aws/qbusiness/model/CreateApplicationResult.h>
#include <aws/qbusiness/model/CreateDataSourceResult.h>
#include <aws/qbusiness/model/CreateIndexResult.h>
#include <aws/qbusiness/model/CreatePluginResult.h>
#include <aws/qbusiness/model/CreateRetrieverResult.h>
#include <aws/qbusiness/model/CreateUserResult.h>
#include <aws/qbusiness/model/CreateWebExperienceResult.h>
#include <aws/qbusiness/model/DeleteApplicationResult.h>
#include <aws/qbusiness/model/DeleteChatControlsConfigurationResult.h>
#include <aws/qbusiness/model/DeleteConversationResult.h>
#include <aws/qbusiness/model/DeleteDataSourceResult.h>
#include <aws/qbusiness/model/DeleteGroupResult.h>
#include <aws/qbusiness/model/DeleteIndexResult.h>
#include <aws/qbusiness/model/DeletePluginResult.h>
#include <aws/qbusiness/model/DeleteRetrieverResult.h>
#include <aws/qbusiness/model/DeleteUserResult.h>
#include <aws/qbusiness/model/DeleteWebExperienceResult.h>
#include <aws/qbusiness/model/GetApplicationResult.h>
#include <aws/qbusiness/model/GetChatControlsConfigurationResult.h>
#include <aws/qbusiness/model/GetDataSourceResult.h>
#include <aws/qbusiness/model/GetGroupResult.h>
#include <aws/qbusiness/model/GetIndexResult.h>
#include <aws/qbusiness/model/GetPluginResult.h>
#include <aws/qbusiness/model/GetRetrieverResult.h>
#include <aws/qbusiness/model/GetUserResult.h>
#include <aws/qbusiness/model/GetWebExperienceResult.h>
#include <aws/qbusiness/model/ListApplicationsResult.h>
#include <aws/qbusiness/model/ListConversationsResult.h>
#include <aws/qbusiness/model/ListDataSourceSyncJobsResult.h>
#include <aws/qbusiness/model/ListDataSourcesResult.h>
#include <aws/qbusiness/model/ListDocumentsResult.h>
#include <aws/qbusiness/model/ListGroupsResult.h>
#include <aws/qbusiness/model/ListIndicesResult.h>
#include <aws/qbusiness/model/ListMessagesResult.h>
#include <aws/qbusiness/model/ListPluginsResult.h>
#include <aws/qbusiness/model/ListRetrieversResult.h>
#include <aws/qbusiness/model/ListTagsForResourceResult.h>
#include <aws/qbusiness/model/ListWebExperiencesResult.h>
#include <aws/qbusiness/model/PutGroupResult.h>
#include <aws/qbusiness/model/StartDataSourceSyncJobResult.h>
#include <aws/qbusiness/model/StopDataSourceSyncJobResult.h>
#include <aws/qbusiness/model/TagResourceResult.h>
#include <aws/qbusiness/model/UntagResourceResult.h>
#include <aws/qbusiness/model/UpdateApplicationResult.h>
#include <aws/qbusiness/model/UpdateChatControlsConfigurationResult.h>
#include <aws/qbusiness/model/UpdateDataSourceResult.h>
#include <aws/qbusiness/model/UpdateIndexResult.h>
#include <aws/qbusiness/model/UpdatePluginResult.h>
#include <aws/qbusiness/model/UpdateRetrieverResult.h>
#include <aws/qbusiness/model/UpdateUserResult.h>
#include <aws/qbusiness/model/UpdateWebExperienceResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in QBusinessClient header */

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

  namespace QBusiness
  {
    using QBusinessClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using QBusinessEndpointProviderBase = Aws::QBusiness::Endpoint::QBusinessEndpointProviderBase;
    using QBusinessEndpointProvider = Aws::QBusiness::Endpoint::QBusinessEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in QBusinessClient header */
      class BatchDeleteDocumentRequest;
      class BatchPutDocumentRequest;
      class ChatSyncRequest;
      class CreateApplicationRequest;
      class CreateDataSourceRequest;
      class CreateIndexRequest;
      class CreatePluginRequest;
      class CreateRetrieverRequest;
      class CreateUserRequest;
      class CreateWebExperienceRequest;
      class DeleteApplicationRequest;
      class DeleteChatControlsConfigurationRequest;
      class DeleteConversationRequest;
      class DeleteDataSourceRequest;
      class DeleteGroupRequest;
      class DeleteIndexRequest;
      class DeletePluginRequest;
      class DeleteRetrieverRequest;
      class DeleteUserRequest;
      class DeleteWebExperienceRequest;
      class GetApplicationRequest;
      class GetChatControlsConfigurationRequest;
      class GetDataSourceRequest;
      class GetGroupRequest;
      class GetIndexRequest;
      class GetPluginRequest;
      class GetRetrieverRequest;
      class GetUserRequest;
      class GetWebExperienceRequest;
      class ListApplicationsRequest;
      class ListConversationsRequest;
      class ListDataSourceSyncJobsRequest;
      class ListDataSourcesRequest;
      class ListDocumentsRequest;
      class ListGroupsRequest;
      class ListIndicesRequest;
      class ListMessagesRequest;
      class ListPluginsRequest;
      class ListRetrieversRequest;
      class ListTagsForResourceRequest;
      class ListWebExperiencesRequest;
      class PutFeedbackRequest;
      class PutGroupRequest;
      class StartDataSourceSyncJobRequest;
      class StopDataSourceSyncJobRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateApplicationRequest;
      class UpdateChatControlsConfigurationRequest;
      class UpdateDataSourceRequest;
      class UpdateIndexRequest;
      class UpdatePluginRequest;
      class UpdateRetrieverRequest;
      class UpdateUserRequest;
      class UpdateWebExperienceRequest;
      /* End of service model forward declarations required in QBusinessClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchDeleteDocumentResult, QBusinessError> BatchDeleteDocumentOutcome;
      typedef Aws::Utils::Outcome<BatchPutDocumentResult, QBusinessError> BatchPutDocumentOutcome;
      typedef Aws::Utils::Outcome<ChatSyncResult, QBusinessError> ChatSyncOutcome;
      typedef Aws::Utils::Outcome<CreateApplicationResult, QBusinessError> CreateApplicationOutcome;
      typedef Aws::Utils::Outcome<CreateDataSourceResult, QBusinessError> CreateDataSourceOutcome;
      typedef Aws::Utils::Outcome<CreateIndexResult, QBusinessError> CreateIndexOutcome;
      typedef Aws::Utils::Outcome<CreatePluginResult, QBusinessError> CreatePluginOutcome;
      typedef Aws::Utils::Outcome<CreateRetrieverResult, QBusinessError> CreateRetrieverOutcome;
      typedef Aws::Utils::Outcome<CreateUserResult, QBusinessError> CreateUserOutcome;
      typedef Aws::Utils::Outcome<CreateWebExperienceResult, QBusinessError> CreateWebExperienceOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationResult, QBusinessError> DeleteApplicationOutcome;
      typedef Aws::Utils::Outcome<DeleteChatControlsConfigurationResult, QBusinessError> DeleteChatControlsConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteConversationResult, QBusinessError> DeleteConversationOutcome;
      typedef Aws::Utils::Outcome<DeleteDataSourceResult, QBusinessError> DeleteDataSourceOutcome;
      typedef Aws::Utils::Outcome<DeleteGroupResult, QBusinessError> DeleteGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteIndexResult, QBusinessError> DeleteIndexOutcome;
      typedef Aws::Utils::Outcome<DeletePluginResult, QBusinessError> DeletePluginOutcome;
      typedef Aws::Utils::Outcome<DeleteRetrieverResult, QBusinessError> DeleteRetrieverOutcome;
      typedef Aws::Utils::Outcome<DeleteUserResult, QBusinessError> DeleteUserOutcome;
      typedef Aws::Utils::Outcome<DeleteWebExperienceResult, QBusinessError> DeleteWebExperienceOutcome;
      typedef Aws::Utils::Outcome<GetApplicationResult, QBusinessError> GetApplicationOutcome;
      typedef Aws::Utils::Outcome<GetChatControlsConfigurationResult, QBusinessError> GetChatControlsConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetDataSourceResult, QBusinessError> GetDataSourceOutcome;
      typedef Aws::Utils::Outcome<GetGroupResult, QBusinessError> GetGroupOutcome;
      typedef Aws::Utils::Outcome<GetIndexResult, QBusinessError> GetIndexOutcome;
      typedef Aws::Utils::Outcome<GetPluginResult, QBusinessError> GetPluginOutcome;
      typedef Aws::Utils::Outcome<GetRetrieverResult, QBusinessError> GetRetrieverOutcome;
      typedef Aws::Utils::Outcome<GetUserResult, QBusinessError> GetUserOutcome;
      typedef Aws::Utils::Outcome<GetWebExperienceResult, QBusinessError> GetWebExperienceOutcome;
      typedef Aws::Utils::Outcome<ListApplicationsResult, QBusinessError> ListApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListConversationsResult, QBusinessError> ListConversationsOutcome;
      typedef Aws::Utils::Outcome<ListDataSourceSyncJobsResult, QBusinessError> ListDataSourceSyncJobsOutcome;
      typedef Aws::Utils::Outcome<ListDataSourcesResult, QBusinessError> ListDataSourcesOutcome;
      typedef Aws::Utils::Outcome<ListDocumentsResult, QBusinessError> ListDocumentsOutcome;
      typedef Aws::Utils::Outcome<ListGroupsResult, QBusinessError> ListGroupsOutcome;
      typedef Aws::Utils::Outcome<ListIndicesResult, QBusinessError> ListIndicesOutcome;
      typedef Aws::Utils::Outcome<ListMessagesResult, QBusinessError> ListMessagesOutcome;
      typedef Aws::Utils::Outcome<ListPluginsResult, QBusinessError> ListPluginsOutcome;
      typedef Aws::Utils::Outcome<ListRetrieversResult, QBusinessError> ListRetrieversOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, QBusinessError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListWebExperiencesResult, QBusinessError> ListWebExperiencesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, QBusinessError> PutFeedbackOutcome;
      typedef Aws::Utils::Outcome<PutGroupResult, QBusinessError> PutGroupOutcome;
      typedef Aws::Utils::Outcome<StartDataSourceSyncJobResult, QBusinessError> StartDataSourceSyncJobOutcome;
      typedef Aws::Utils::Outcome<StopDataSourceSyncJobResult, QBusinessError> StopDataSourceSyncJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, QBusinessError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, QBusinessError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationResult, QBusinessError> UpdateApplicationOutcome;
      typedef Aws::Utils::Outcome<UpdateChatControlsConfigurationResult, QBusinessError> UpdateChatControlsConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateDataSourceResult, QBusinessError> UpdateDataSourceOutcome;
      typedef Aws::Utils::Outcome<UpdateIndexResult, QBusinessError> UpdateIndexOutcome;
      typedef Aws::Utils::Outcome<UpdatePluginResult, QBusinessError> UpdatePluginOutcome;
      typedef Aws::Utils::Outcome<UpdateRetrieverResult, QBusinessError> UpdateRetrieverOutcome;
      typedef Aws::Utils::Outcome<UpdateUserResult, QBusinessError> UpdateUserOutcome;
      typedef Aws::Utils::Outcome<UpdateWebExperienceResult, QBusinessError> UpdateWebExperienceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchDeleteDocumentOutcome> BatchDeleteDocumentOutcomeCallable;
      typedef std::future<BatchPutDocumentOutcome> BatchPutDocumentOutcomeCallable;
      typedef std::future<ChatSyncOutcome> ChatSyncOutcomeCallable;
      typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
      typedef std::future<CreateDataSourceOutcome> CreateDataSourceOutcomeCallable;
      typedef std::future<CreateIndexOutcome> CreateIndexOutcomeCallable;
      typedef std::future<CreatePluginOutcome> CreatePluginOutcomeCallable;
      typedef std::future<CreateRetrieverOutcome> CreateRetrieverOutcomeCallable;
      typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
      typedef std::future<CreateWebExperienceOutcome> CreateWebExperienceOutcomeCallable;
      typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
      typedef std::future<DeleteChatControlsConfigurationOutcome> DeleteChatControlsConfigurationOutcomeCallable;
      typedef std::future<DeleteConversationOutcome> DeleteConversationOutcomeCallable;
      typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
      typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
      typedef std::future<DeleteIndexOutcome> DeleteIndexOutcomeCallable;
      typedef std::future<DeletePluginOutcome> DeletePluginOutcomeCallable;
      typedef std::future<DeleteRetrieverOutcome> DeleteRetrieverOutcomeCallable;
      typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
      typedef std::future<DeleteWebExperienceOutcome> DeleteWebExperienceOutcomeCallable;
      typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
      typedef std::future<GetChatControlsConfigurationOutcome> GetChatControlsConfigurationOutcomeCallable;
      typedef std::future<GetDataSourceOutcome> GetDataSourceOutcomeCallable;
      typedef std::future<GetGroupOutcome> GetGroupOutcomeCallable;
      typedef std::future<GetIndexOutcome> GetIndexOutcomeCallable;
      typedef std::future<GetPluginOutcome> GetPluginOutcomeCallable;
      typedef std::future<GetRetrieverOutcome> GetRetrieverOutcomeCallable;
      typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
      typedef std::future<GetWebExperienceOutcome> GetWebExperienceOutcomeCallable;
      typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
      typedef std::future<ListConversationsOutcome> ListConversationsOutcomeCallable;
      typedef std::future<ListDataSourceSyncJobsOutcome> ListDataSourceSyncJobsOutcomeCallable;
      typedef std::future<ListDataSourcesOutcome> ListDataSourcesOutcomeCallable;
      typedef std::future<ListDocumentsOutcome> ListDocumentsOutcomeCallable;
      typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
      typedef std::future<ListIndicesOutcome> ListIndicesOutcomeCallable;
      typedef std::future<ListMessagesOutcome> ListMessagesOutcomeCallable;
      typedef std::future<ListPluginsOutcome> ListPluginsOutcomeCallable;
      typedef std::future<ListRetrieversOutcome> ListRetrieversOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListWebExperiencesOutcome> ListWebExperiencesOutcomeCallable;
      typedef std::future<PutFeedbackOutcome> PutFeedbackOutcomeCallable;
      typedef std::future<PutGroupOutcome> PutGroupOutcomeCallable;
      typedef std::future<StartDataSourceSyncJobOutcome> StartDataSourceSyncJobOutcomeCallable;
      typedef std::future<StopDataSourceSyncJobOutcome> StopDataSourceSyncJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
      typedef std::future<UpdateChatControlsConfigurationOutcome> UpdateChatControlsConfigurationOutcomeCallable;
      typedef std::future<UpdateDataSourceOutcome> UpdateDataSourceOutcomeCallable;
      typedef std::future<UpdateIndexOutcome> UpdateIndexOutcomeCallable;
      typedef std::future<UpdatePluginOutcome> UpdatePluginOutcomeCallable;
      typedef std::future<UpdateRetrieverOutcome> UpdateRetrieverOutcomeCallable;
      typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
      typedef std::future<UpdateWebExperienceOutcome> UpdateWebExperienceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class QBusinessClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const QBusinessClient*, const Model::BatchDeleteDocumentRequest&, const Model::BatchDeleteDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteDocumentResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::BatchPutDocumentRequest&, const Model::BatchPutDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchPutDocumentResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::ChatSyncRequest&, const Model::ChatSyncOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ChatSyncResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::CreateDataSourceRequest&, const Model::CreateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataSourceResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::CreateIndexRequest&, const Model::CreateIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIndexResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::CreatePluginRequest&, const Model::CreatePluginOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePluginResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::CreateRetrieverRequest&, const Model::CreateRetrieverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRetrieverResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::CreateWebExperienceRequest&, const Model::CreateWebExperienceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWebExperienceResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::DeleteChatControlsConfigurationRequest&, const Model::DeleteChatControlsConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChatControlsConfigurationResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::DeleteConversationRequest&, const Model::DeleteConversationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConversationResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::DeleteDataSourceRequest&, const Model::DeleteDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataSourceResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::DeleteIndexRequest&, const Model::DeleteIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIndexResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::DeletePluginRequest&, const Model::DeletePluginOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePluginResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::DeleteRetrieverRequest&, const Model::DeleteRetrieverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRetrieverResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::DeleteWebExperienceRequest&, const Model::DeleteWebExperienceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWebExperienceResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::GetChatControlsConfigurationRequest&, const Model::GetChatControlsConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChatControlsConfigurationResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::GetDataSourceRequest&, const Model::GetDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataSourceResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::GetGroupRequest&, const Model::GetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::GetIndexRequest&, const Model::GetIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIndexResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::GetPluginRequest&, const Model::GetPluginOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPluginResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::GetRetrieverRequest&, const Model::GetRetrieverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRetrieverResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::GetUserRequest&, const Model::GetUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::GetWebExperienceRequest&, const Model::GetWebExperienceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWebExperienceResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::ListConversationsRequest&, const Model::ListConversationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConversationsResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::ListDataSourceSyncJobsRequest&, const Model::ListDataSourceSyncJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSourceSyncJobsResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::ListDataSourcesRequest&, const Model::ListDataSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSourcesResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::ListDocumentsRequest&, const Model::ListDocumentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDocumentsResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::ListGroupsRequest&, const Model::ListGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::ListIndicesRequest&, const Model::ListIndicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIndicesResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::ListMessagesRequest&, const Model::ListMessagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMessagesResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::ListPluginsRequest&, const Model::ListPluginsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPluginsResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::ListRetrieversRequest&, const Model::ListRetrieversOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRetrieversResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::ListWebExperiencesRequest&, const Model::ListWebExperiencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWebExperiencesResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::PutFeedbackRequest&, const Model::PutFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutFeedbackResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::PutGroupRequest&, const Model::PutGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutGroupResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::StartDataSourceSyncJobRequest&, const Model::StartDataSourceSyncJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDataSourceSyncJobResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::StopDataSourceSyncJobRequest&, const Model::StopDataSourceSyncJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDataSourceSyncJobResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::UpdateChatControlsConfigurationRequest&, const Model::UpdateChatControlsConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChatControlsConfigurationResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::UpdateDataSourceRequest&, const Model::UpdateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSourceResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::UpdateIndexRequest&, const Model::UpdateIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIndexResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::UpdatePluginRequest&, const Model::UpdatePluginOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePluginResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::UpdateRetrieverRequest&, const Model::UpdateRetrieverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRetrieverResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;
    typedef std::function<void(const QBusinessClient*, const Model::UpdateWebExperienceRequest&, const Model::UpdateWebExperienceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWebExperienceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace QBusiness
} // namespace Aws
