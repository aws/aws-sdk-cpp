/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/qbusiness/QBusinessClient.h>
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

namespace Aws {
namespace QBusiness {

using GetChatControlsConfigurationPaginator =
    Aws::Utils::Pagination::Paginator<QBusinessClient, Model::GetChatControlsConfigurationRequest,
                                      Pagination::GetChatControlsConfigurationPaginationTraits<QBusinessClient>>;
using ListApplicationsPaginator = Aws::Utils::Pagination::Paginator<QBusinessClient, Model::ListApplicationsRequest,
                                                                    Pagination::ListApplicationsPaginationTraits<QBusinessClient>>;
using ListAttachmentsPaginator = Aws::Utils::Pagination::Paginator<QBusinessClient, Model::ListAttachmentsRequest,
                                                                   Pagination::ListAttachmentsPaginationTraits<QBusinessClient>>;
using ListChatResponseConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<QBusinessClient, Model::ListChatResponseConfigurationsRequest,
                                      Pagination::ListChatResponseConfigurationsPaginationTraits<QBusinessClient>>;
using ListConversationsPaginator = Aws::Utils::Pagination::Paginator<QBusinessClient, Model::ListConversationsRequest,
                                                                     Pagination::ListConversationsPaginationTraits<QBusinessClient>>;
using ListDataAccessorsPaginator = Aws::Utils::Pagination::Paginator<QBusinessClient, Model::ListDataAccessorsRequest,
                                                                     Pagination::ListDataAccessorsPaginationTraits<QBusinessClient>>;
using ListDataSourcesPaginator = Aws::Utils::Pagination::Paginator<QBusinessClient, Model::ListDataSourcesRequest,
                                                                   Pagination::ListDataSourcesPaginationTraits<QBusinessClient>>;
using ListDataSourceSyncJobsPaginator =
    Aws::Utils::Pagination::Paginator<QBusinessClient, Model::ListDataSourceSyncJobsRequest,
                                      Pagination::ListDataSourceSyncJobsPaginationTraits<QBusinessClient>>;
using ListDocumentsPaginator = Aws::Utils::Pagination::Paginator<QBusinessClient, Model::ListDocumentsRequest,
                                                                 Pagination::ListDocumentsPaginationTraits<QBusinessClient>>;
using ListGroupsPaginator =
    Aws::Utils::Pagination::Paginator<QBusinessClient, Model::ListGroupsRequest, Pagination::ListGroupsPaginationTraits<QBusinessClient>>;
using ListIndicesPaginator =
    Aws::Utils::Pagination::Paginator<QBusinessClient, Model::ListIndicesRequest, Pagination::ListIndicesPaginationTraits<QBusinessClient>>;
using ListMessagesPaginator = Aws::Utils::Pagination::Paginator<QBusinessClient, Model::ListMessagesRequest,
                                                                Pagination::ListMessagesPaginationTraits<QBusinessClient>>;
using ListPluginActionsPaginator = Aws::Utils::Pagination::Paginator<QBusinessClient, Model::ListPluginActionsRequest,
                                                                     Pagination::ListPluginActionsPaginationTraits<QBusinessClient>>;
using ListPluginsPaginator =
    Aws::Utils::Pagination::Paginator<QBusinessClient, Model::ListPluginsRequest, Pagination::ListPluginsPaginationTraits<QBusinessClient>>;
using ListPluginTypeActionsPaginator =
    Aws::Utils::Pagination::Paginator<QBusinessClient, Model::ListPluginTypeActionsRequest,
                                      Pagination::ListPluginTypeActionsPaginationTraits<QBusinessClient>>;
using ListPluginTypeMetadataPaginator =
    Aws::Utils::Pagination::Paginator<QBusinessClient, Model::ListPluginTypeMetadataRequest,
                                      Pagination::ListPluginTypeMetadataPaginationTraits<QBusinessClient>>;
using ListRetrieversPaginator = Aws::Utils::Pagination::Paginator<QBusinessClient, Model::ListRetrieversRequest,
                                                                  Pagination::ListRetrieversPaginationTraits<QBusinessClient>>;
using ListSubscriptionsPaginator = Aws::Utils::Pagination::Paginator<QBusinessClient, Model::ListSubscriptionsRequest,
                                                                     Pagination::ListSubscriptionsPaginationTraits<QBusinessClient>>;
using ListWebExperiencesPaginator = Aws::Utils::Pagination::Paginator<QBusinessClient, Model::ListWebExperiencesRequest,
                                                                      Pagination::ListWebExperiencesPaginationTraits<QBusinessClient>>;
using SearchRelevantContentPaginator =
    Aws::Utils::Pagination::Paginator<QBusinessClient, Model::SearchRelevantContentRequest,
                                      Pagination::SearchRelevantContentPaginationTraits<QBusinessClient>>;

}  // namespace QBusiness
}  // namespace Aws
