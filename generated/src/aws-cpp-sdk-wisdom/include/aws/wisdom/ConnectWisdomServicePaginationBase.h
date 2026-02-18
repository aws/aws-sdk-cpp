/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/wisdom/model/ListAssistantAssociationsPaginationTraits.h>
#include <aws/wisdom/model/ListAssistantsPaginationTraits.h>
#include <aws/wisdom/model/ListContentsPaginationTraits.h>
#include <aws/wisdom/model/ListImportJobsPaginationTraits.h>
#include <aws/wisdom/model/ListKnowledgeBasesPaginationTraits.h>
#include <aws/wisdom/model/ListQuickResponsesPaginationTraits.h>
#include <aws/wisdom/model/SearchContentPaginationTraits.h>
#include <aws/wisdom/model/SearchQuickResponsesPaginationTraits.h>
#include <aws/wisdom/model/SearchSessionsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ConnectWisdomService {

class ConnectWisdomServiceClient;

template <typename DerivedClient>
class ConnectWisdomServicePaginationBase {
 public:
  /**
   * Create a paginator for ListAssistantAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssistantAssociationsRequest,
                                    Pagination::ListAssistantAssociationsPaginationTraits<DerivedClient>>
  ListAssistantAssociationsPaginator(const Model::ListAssistantAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssistantAssociationsRequest,
                                             Pagination::ListAssistantAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssistants operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssistantsRequest, Pagination::ListAssistantsPaginationTraits<DerivedClient>>
  ListAssistantsPaginator(const Model::ListAssistantsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssistantsRequest,
                                             Pagination::ListAssistantsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListContents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContentsRequest, Pagination::ListContentsPaginationTraits<DerivedClient>>
  ListContentsPaginator(const Model::ListContentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContentsRequest,
                                             Pagination::ListContentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListImportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportJobsRequest, Pagination::ListImportJobsPaginationTraits<DerivedClient>>
  ListImportJobsPaginator(const Model::ListImportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportJobsRequest,
                                             Pagination::ListImportJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListKnowledgeBases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKnowledgeBasesRequest,
                                    Pagination::ListKnowledgeBasesPaginationTraits<DerivedClient>>
  ListKnowledgeBasesPaginator(const Model::ListKnowledgeBasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKnowledgeBasesRequest,
                                             Pagination::ListKnowledgeBasesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListQuickResponses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQuickResponsesRequest,
                                    Pagination::ListQuickResponsesPaginationTraits<DerivedClient>>
  ListQuickResponsesPaginator(const Model::ListQuickResponsesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQuickResponsesRequest,
                                             Pagination::ListQuickResponsesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchContent operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchContentRequest, Pagination::SearchContentPaginationTraits<DerivedClient>>
  SearchContentPaginator(const Model::SearchContentRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchContentRequest,
                                             Pagination::SearchContentPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for SearchQuickResponses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchQuickResponsesRequest,
                                    Pagination::SearchQuickResponsesPaginationTraits<DerivedClient>>
  SearchQuickResponsesPaginator(const Model::SearchQuickResponsesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchQuickResponsesRequest,
                                             Pagination::SearchQuickResponsesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchSessionsRequest, Pagination::SearchSessionsPaginationTraits<DerivedClient>>
  SearchSessionsPaginator(const Model::SearchSessionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchSessionsRequest,
                                             Pagination::SearchSessionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace ConnectWisdomService
}  // namespace Aws
