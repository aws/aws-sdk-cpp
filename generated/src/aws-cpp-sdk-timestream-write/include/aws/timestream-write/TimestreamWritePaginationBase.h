/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/timestream-write/model/ListBatchLoadTasksPaginationTraits.h>
#include <aws/timestream-write/model/ListDatabasesPaginationTraits.h>
#include <aws/timestream-write/model/ListTablesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace TimestreamWrite {

template <typename DerivedClient>
class TimestreamWritePaginationBase {
 public:
  /**
   * Create a paginator for ListBatchLoadTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBatchLoadTasksRequest,
                                    Pagination::ListBatchLoadTasksPaginationTraits<DerivedClient>>
  ListBatchLoadTasksPaginator(const Model::ListBatchLoadTasksRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBatchLoadTasksRequest,
                                             Pagination::ListBatchLoadTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDatabases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatabasesRequest, Pagination::ListDatabasesPaginationTraits<DerivedClient>>
  ListDatabasesPaginator(const Model::ListDatabasesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatabasesRequest,
                                             Pagination::ListDatabasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListTables operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTablesRequest, Pagination::ListTablesPaginationTraits<DerivedClient>>
  ListTablesPaginator(const Model::ListTablesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTablesRequest,
                                             Pagination::ListTablesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }
};
}  // namespace TimestreamWrite
}  // namespace Aws
