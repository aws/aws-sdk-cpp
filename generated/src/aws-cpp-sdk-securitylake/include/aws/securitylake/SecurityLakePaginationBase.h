/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/securitylake/model/GetDataLakeSourcesPaginationTraits.h>
#include <aws/securitylake/model/ListDataLakeExceptionsPaginationTraits.h>
#include <aws/securitylake/model/ListLogSourcesPaginationTraits.h>
#include <aws/securitylake/model/ListSubscribersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SecurityLake {

class SecurityLakeClient;

template <typename DerivedClient>
class SecurityLakePaginationBase {
 public:
  /**
   * Create a paginator for GetDataLakeSources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDataLakeSourcesRequest,
                                    Pagination::GetDataLakeSourcesPaginationTraits<DerivedClient>>
  GetDataLakeSourcesPaginator(const Model::GetDataLakeSourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDataLakeSourcesRequest,
                                             Pagination::GetDataLakeSourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataLakeExceptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataLakeExceptionsRequest,
                                    Pagination::ListDataLakeExceptionsPaginationTraits<DerivedClient>>
  ListDataLakeExceptionsPaginator(const Model::ListDataLakeExceptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataLakeExceptionsRequest,
                                             Pagination::ListDataLakeExceptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLogSources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLogSourcesRequest, Pagination::ListLogSourcesPaginationTraits<DerivedClient>>
  ListLogSourcesPaginator(const Model::ListLogSourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLogSourcesRequest,
                                             Pagination::ListLogSourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListSubscribers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscribersRequest,
                                    Pagination::ListSubscribersPaginationTraits<DerivedClient>>
  ListSubscribersPaginator(const Model::ListSubscribersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscribersRequest,
                                             Pagination::ListSubscribersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }
};
}  // namespace SecurityLake
}  // namespace Aws
