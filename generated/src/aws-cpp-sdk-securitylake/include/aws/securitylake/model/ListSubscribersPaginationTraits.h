/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLakeServiceClientModel.h>
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/ListSubscribersRequest.h>
#include <aws/securitylake/model/ListSubscribersResult.h>

namespace Aws {
namespace SecurityLake {
namespace Pagination {

template <typename Client = SecurityLakeClient>
struct ListSubscribersPaginationTraits {
  using RequestType = Model::ListSubscribersRequest;
  using ResultType = Model::ListSubscribersResult;
  using OutcomeType = Model::ListSubscribersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSubscribers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SecurityLake
}  // namespace Aws
