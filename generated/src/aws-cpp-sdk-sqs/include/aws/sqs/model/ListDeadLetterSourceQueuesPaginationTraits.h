/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQSServiceClientModel.h>
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/model/ListDeadLetterSourceQueuesRequest.h>
#include <aws/sqs/model/ListDeadLetterSourceQueuesResult.h>

namespace Aws {
namespace SQS {
namespace Pagination {

template <typename Client = SQSClient>
struct ListDeadLetterSourceQueuesPaginationTraits {
  using RequestType = Model::ListDeadLetterSourceQueuesRequest;
  using ResultType = Model::ListDeadLetterSourceQueuesResult;
  using OutcomeType = Model::ListDeadLetterSourceQueuesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDeadLetterSourceQueues(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SQS
}  // namespace Aws
