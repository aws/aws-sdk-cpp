/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/sqs/model/ListDeadLetterSourceQueuesPaginationTraits.h>
#include <aws/sqs/model/ListQueuesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SQS {

class SQSClient;

template <typename DerivedClient>
class SQSPaginationBase {
 public:
  /**
   * Create a paginator for ListDeadLetterSourceQueues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeadLetterSourceQueuesRequest,
                                    Pagination::ListDeadLetterSourceQueuesPaginationTraits<DerivedClient>>
  ListDeadLetterSourceQueuesPaginator(const Model::ListDeadLetterSourceQueuesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeadLetterSourceQueuesRequest,
                                             Pagination::ListDeadLetterSourceQueuesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListQueues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueuesRequest, Pagination::ListQueuesPaginationTraits<DerivedClient>>
  ListQueuesPaginator(const Model::ListQueuesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueuesRequest,
                                             Pagination::ListQueuesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }
};
}  // namespace SQS
}  // namespace Aws
