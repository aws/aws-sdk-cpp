/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/qbusiness/model/GetChatControlsConfigurationPaginationTraits.h>
#include <aws/qbusiness/model/ListApplicationsPaginationTraits.h>
#include <aws/qbusiness/model/ListAttachmentsPaginationTraits.h>
#include <aws/qbusiness/model/ListChatResponseConfigurationsPaginationTraits.h>
#include <aws/qbusiness/model/ListConversationsPaginationTraits.h>
#include <aws/qbusiness/model/ListDataAccessorsPaginationTraits.h>
#include <aws/qbusiness/model/ListDataSourceSyncJobsPaginationTraits.h>
#include <aws/qbusiness/model/ListDataSourcesPaginationTraits.h>
#include <aws/qbusiness/model/ListDocumentsPaginationTraits.h>
#include <aws/qbusiness/model/ListGroupsPaginationTraits.h>
#include <aws/qbusiness/model/ListIndicesPaginationTraits.h>
#include <aws/qbusiness/model/ListMessagesPaginationTraits.h>
#include <aws/qbusiness/model/ListPluginActionsPaginationTraits.h>
#include <aws/qbusiness/model/ListPluginTypeActionsPaginationTraits.h>
#include <aws/qbusiness/model/ListPluginTypeMetadataPaginationTraits.h>
#include <aws/qbusiness/model/ListPluginsPaginationTraits.h>
#include <aws/qbusiness/model/ListRetrieversPaginationTraits.h>
#include <aws/qbusiness/model/ListSubscriptionsPaginationTraits.h>
#include <aws/qbusiness/model/ListWebExperiencesPaginationTraits.h>
#include <aws/qbusiness/model/SearchRelevantContentPaginationTraits.h>

#include <memory>

namespace Aws {
namespace QBusiness {

class QBusinessClient;

template <typename DerivedClient>
class QBusinessPaginationBase {
 public:
  /**
   * Create a paginator for GetChatControlsConfiguration operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetChatControlsConfigurationRequest,
                                    Pagination::GetChatControlsConfigurationPaginationTraits<DerivedClient>>
  GetChatControlsConfigurationPaginator(const Model::GetChatControlsConfigurationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetChatControlsConfigurationRequest,
                                             Pagination::GetChatControlsConfigurationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                    Pagination::ListApplicationsPaginationTraits<DerivedClient>>
  ListApplicationsPaginator(const Model::ListApplicationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                             Pagination::ListApplicationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListAttachments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttachmentsRequest,
                                    Pagination::ListAttachmentsPaginationTraits<DerivedClient>>
  ListAttachmentsPaginator(const Model::ListAttachmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttachmentsRequest,
                                             Pagination::ListAttachmentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListChatResponseConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChatResponseConfigurationsRequest,
                                    Pagination::ListChatResponseConfigurationsPaginationTraits<DerivedClient>>
  ListChatResponseConfigurationsPaginator(const Model::ListChatResponseConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChatResponseConfigurationsRequest,
                                             Pagination::ListChatResponseConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConversations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConversationsRequest,
                                    Pagination::ListConversationsPaginationTraits<DerivedClient>>
  ListConversationsPaginator(const Model::ListConversationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConversationsRequest,
                                             Pagination::ListConversationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataAccessors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataAccessorsRequest,
                                    Pagination::ListDataAccessorsPaginationTraits<DerivedClient>>
  ListDataAccessorsPaginator(const Model::ListDataAccessorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataAccessorsRequest,
                                             Pagination::ListDataAccessorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataSources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSourcesRequest,
                                    Pagination::ListDataSourcesPaginationTraits<DerivedClient>>
  ListDataSourcesPaginator(const Model::ListDataSourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSourcesRequest,
                                             Pagination::ListDataSourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListDataSourceSyncJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSourceSyncJobsRequest,
                                    Pagination::ListDataSourceSyncJobsPaginationTraits<DerivedClient>>
  ListDataSourceSyncJobsPaginator(const Model::ListDataSourceSyncJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSourceSyncJobsRequest,
                                             Pagination::ListDataSourceSyncJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDocuments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDocumentsRequest, Pagination::ListDocumentsPaginationTraits<DerivedClient>>
  ListDocumentsPaginator(const Model::ListDocumentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDocumentsRequest,
                                             Pagination::ListDocumentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsRequest, Pagination::ListGroupsPaginationTraits<DerivedClient>>
  ListGroupsPaginator(const Model::ListGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsRequest,
                                             Pagination::ListGroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListIndices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIndicesRequest, Pagination::ListIndicesPaginationTraits<DerivedClient>>
  ListIndicesPaginator(const Model::ListIndicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIndicesRequest,
                                             Pagination::ListIndicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListMessages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMessagesRequest, Pagination::ListMessagesPaginationTraits<DerivedClient>>
  ListMessagesPaginator(const Model::ListMessagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMessagesRequest,
                                             Pagination::ListMessagesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListPluginActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPluginActionsRequest,
                                    Pagination::ListPluginActionsPaginationTraits<DerivedClient>>
  ListPluginActionsPaginator(const Model::ListPluginActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPluginActionsRequest,
                                             Pagination::ListPluginActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPlugins operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPluginsRequest, Pagination::ListPluginsPaginationTraits<DerivedClient>>
  ListPluginsPaginator(const Model::ListPluginsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPluginsRequest,
                                             Pagination::ListPluginsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListPluginTypeActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPluginTypeActionsRequest,
                                    Pagination::ListPluginTypeActionsPaginationTraits<DerivedClient>>
  ListPluginTypeActionsPaginator(const Model::ListPluginTypeActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPluginTypeActionsRequest,
                                             Pagination::ListPluginTypeActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPluginTypeMetadata operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPluginTypeMetadataRequest,
                                    Pagination::ListPluginTypeMetadataPaginationTraits<DerivedClient>>
  ListPluginTypeMetadataPaginator(const Model::ListPluginTypeMetadataRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPluginTypeMetadataRequest,
                                             Pagination::ListPluginTypeMetadataPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRetrievers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRetrieversRequest, Pagination::ListRetrieversPaginationTraits<DerivedClient>>
  ListRetrieversPaginator(const Model::ListRetrieversRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRetrieversRequest,
                                             Pagination::ListRetrieversPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListSubscriptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscriptionsRequest,
                                    Pagination::ListSubscriptionsPaginationTraits<DerivedClient>>
  ListSubscriptionsPaginator(const Model::ListSubscriptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscriptionsRequest,
                                             Pagination::ListSubscriptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWebExperiences operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWebExperiencesRequest,
                                    Pagination::ListWebExperiencesPaginationTraits<DerivedClient>>
  ListWebExperiencesPaginator(const Model::ListWebExperiencesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWebExperiencesRequest,
                                             Pagination::ListWebExperiencesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchRelevantContent operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchRelevantContentRequest,
                                    Pagination::SearchRelevantContentPaginationTraits<DerivedClient>>
  SearchRelevantContentPaginator(const Model::SearchRelevantContentRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchRelevantContentRequest,
                                             Pagination::SearchRelevantContentPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace QBusiness
}  // namespace Aws
