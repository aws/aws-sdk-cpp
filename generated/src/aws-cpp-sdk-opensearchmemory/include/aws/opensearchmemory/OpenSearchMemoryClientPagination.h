/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/opensearchmemory/OpenSearchMemoryClient.h>
#include <aws/opensearchmemory/model/ListEventsPaginationTraits.h>
#include <aws/opensearchmemory/model/ListMemoriesPaginationTraits.h>
#include <aws/opensearchmemory/model/ListSpacesPaginationTraits.h>
#include <aws/opensearchmemory/model/SearchEventsPaginationTraits.h>
#include <aws/opensearchmemory/model/SearchMemoriesPaginationTraits.h>

namespace Aws {
namespace OpenSearchMemory {

using ListEventsPaginator = Aws::Utils::Pagination::Paginator<OpenSearchMemoryClient, Model::ListEventsRequest,
                                                              Pagination::ListEventsPaginationTraits<OpenSearchMemoryClient>>;
using ListMemoriesPaginator = Aws::Utils::Pagination::Paginator<OpenSearchMemoryClient, Model::ListMemoriesRequest,
                                                                Pagination::ListMemoriesPaginationTraits<OpenSearchMemoryClient>>;
using ListSpacesPaginator = Aws::Utils::Pagination::Paginator<OpenSearchMemoryClient, Model::ListSpacesRequest,
                                                              Pagination::ListSpacesPaginationTraits<OpenSearchMemoryClient>>;
using SearchEventsPaginator = Aws::Utils::Pagination::Paginator<OpenSearchMemoryClient, Model::SearchEventsRequest,
                                                                Pagination::SearchEventsPaginationTraits<OpenSearchMemoryClient>>;
using SearchMemoriesPaginator = Aws::Utils::Pagination::Paginator<OpenSearchMemoryClient, Model::SearchMemoriesRequest,
                                                                  Pagination::SearchMemoriesPaginationTraits<OpenSearchMemoryClient>>;

}  // namespace OpenSearchMemory
}  // namespace Aws
