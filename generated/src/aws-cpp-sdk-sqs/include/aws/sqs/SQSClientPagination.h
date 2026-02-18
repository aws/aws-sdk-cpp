/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/sqs/SQSClient.h>
#include <aws/sqs/model/ListDeadLetterSourceQueuesPaginationTraits.h>
#include <aws/sqs/model/ListQueuesPaginationTraits.h>

namespace Aws {
namespace SQS {

using ListDeadLetterSourceQueuesPaginator =
    Aws::Utils::Pagination::Paginator<SQSClient, Model::ListDeadLetterSourceQueuesRequest,
                                      Pagination::ListDeadLetterSourceQueuesPaginationTraits<SQSClient>>;
using ListQueuesPaginator =
    Aws::Utils::Pagination::Paginator<SQSClient, Model::ListQueuesRequest, Pagination::ListQueuesPaginationTraits<SQSClient>>;

}  // namespace SQS
}  // namespace Aws
