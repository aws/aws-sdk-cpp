/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/opensearchmemory/model/ListEventsPaginationTraits.h>
#include <aws/opensearchmemory/model/ListMemoriesPaginationTraits.h>
#include <aws/opensearchmemory/model/ListSpacesPaginationTraits.h>
#include <aws/opensearchmemory/model/SearchEventsPaginationTraits.h>
#include <aws/opensearchmemory/model/SearchMemoriesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace OpenSearchMemory {

template <typename DerivedClient>
class OpenSearchMemoryPaginationBase {
 public:
  /**
   * Create a paginator for ListEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventsRequest, Pagination::ListEventsPaginationTraits<DerivedClient>>
  ListEventsPaginator(const Model::ListEventsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventsRequest,
                                             Pagination::ListEventsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListMemories operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMemoriesRequest, Pagination::ListMemoriesPaginationTraits<DerivedClient>>
  ListMemoriesPaginator(const Model::ListMemoriesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMemoriesRequest,
                                             Pagination::ListMemoriesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListSpaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSpacesRequest, Pagination::ListSpacesPaginationTraits<DerivedClient>>
  ListSpacesPaginator(const Model::ListSpacesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSpacesRequest,
                                             Pagination::ListSpacesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for SearchEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchEventsRequest, Pagination::SearchEventsPaginationTraits<DerivedClient>>
  SearchEventsPaginator(const Model::SearchEventsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchEventsRequest,
                                             Pagination::SearchEventsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for SearchMemories operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchMemoriesRequest, Pagination::SearchMemoriesPaginationTraits<DerivedClient>>
  SearchMemoriesPaginator(const Model::SearchMemoriesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchMemoriesRequest,
                                             Pagination::SearchMemoriesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace OpenSearchMemory
}  // namespace Aws
