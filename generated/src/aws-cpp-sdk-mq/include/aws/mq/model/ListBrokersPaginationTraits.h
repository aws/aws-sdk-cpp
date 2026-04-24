/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQServiceClientModel.h>
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/model/ListBrokersRequest.h>
#include <aws/mq/model/ListBrokersResult.h>

namespace Aws {
namespace MQ {
namespace Pagination {

template <typename Client = MQClient>
struct ListBrokersPaginationTraits {
  using RequestType = Model::ListBrokersRequest;
  using ResultType = Model::ListBrokersResult;
  using OutcomeType = Model::ListBrokersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBrokers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MQ
}  // namespace Aws
