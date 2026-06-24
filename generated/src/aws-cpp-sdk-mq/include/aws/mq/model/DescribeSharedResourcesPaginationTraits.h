/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQServiceClientModel.h>
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/model/DescribeSharedResourcesRequest.h>
#include <aws/mq/model/DescribeSharedResourcesResult.h>

namespace Aws {
namespace MQ {
namespace Pagination {

template <typename Client = MQClient>
struct DescribeSharedResourcesPaginationTraits {
  using RequestType = Model::DescribeSharedResourcesRequest;
  using ResultType = Model::DescribeSharedResourcesResult;
  using OutcomeType = Model::DescribeSharedResourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeSharedResources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MQ
}  // namespace Aws
