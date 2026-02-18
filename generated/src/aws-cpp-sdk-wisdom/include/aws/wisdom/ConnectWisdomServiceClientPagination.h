/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/wisdom/ConnectWisdomServiceClient.h>
#include <aws/wisdom/model/ListAssistantAssociationsPaginationTraits.h>
#include <aws/wisdom/model/ListAssistantsPaginationTraits.h>
#include <aws/wisdom/model/ListContentsPaginationTraits.h>
#include <aws/wisdom/model/ListImportJobsPaginationTraits.h>
#include <aws/wisdom/model/ListKnowledgeBasesPaginationTraits.h>
#include <aws/wisdom/model/ListQuickResponsesPaginationTraits.h>
#include <aws/wisdom/model/SearchContentPaginationTraits.h>
#include <aws/wisdom/model/SearchQuickResponsesPaginationTraits.h>
#include <aws/wisdom/model/SearchSessionsPaginationTraits.h>

namespace Aws {
namespace ConnectWisdomService {

using ListAssistantAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectWisdomServiceClient, Model::ListAssistantAssociationsRequest,
                                      Pagination::ListAssistantAssociationsPaginationTraits<ConnectWisdomServiceClient>>;
using ListAssistantsPaginator = Aws::Utils::Pagination::Paginator<ConnectWisdomServiceClient, Model::ListAssistantsRequest,
                                                                  Pagination::ListAssistantsPaginationTraits<ConnectWisdomServiceClient>>;
using ListContentsPaginator = Aws::Utils::Pagination::Paginator<ConnectWisdomServiceClient, Model::ListContentsRequest,
                                                                Pagination::ListContentsPaginationTraits<ConnectWisdomServiceClient>>;
using ListImportJobsPaginator = Aws::Utils::Pagination::Paginator<ConnectWisdomServiceClient, Model::ListImportJobsRequest,
                                                                  Pagination::ListImportJobsPaginationTraits<ConnectWisdomServiceClient>>;
using ListKnowledgeBasesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectWisdomServiceClient, Model::ListKnowledgeBasesRequest,
                                      Pagination::ListKnowledgeBasesPaginationTraits<ConnectWisdomServiceClient>>;
using ListQuickResponsesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectWisdomServiceClient, Model::ListQuickResponsesRequest,
                                      Pagination::ListQuickResponsesPaginationTraits<ConnectWisdomServiceClient>>;
using SearchContentPaginator = Aws::Utils::Pagination::Paginator<ConnectWisdomServiceClient, Model::SearchContentRequest,
                                                                 Pagination::SearchContentPaginationTraits<ConnectWisdomServiceClient>>;
using SearchQuickResponsesPaginator =
    Aws::Utils::Pagination::Paginator<ConnectWisdomServiceClient, Model::SearchQuickResponsesRequest,
                                      Pagination::SearchQuickResponsesPaginationTraits<ConnectWisdomServiceClient>>;
using SearchSessionsPaginator = Aws::Utils::Pagination::Paginator<ConnectWisdomServiceClient, Model::SearchSessionsRequest,
                                                                  Pagination::SearchSessionsPaginationTraits<ConnectWisdomServiceClient>>;

}  // namespace ConnectWisdomService
}  // namespace Aws
