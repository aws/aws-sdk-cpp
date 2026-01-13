/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUMServiceClientModel.h>
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/model/GetAppMonitorDataRequest.h>
#include <aws/rum/model/GetAppMonitorDataResult.h>

namespace Aws {
namespace CloudWatchRUM {
namespace Pagination {

template <typename Client = CloudWatchRUMClient>
struct GetAppMonitorDataPaginationTraits {
  using RequestType = Model::GetAppMonitorDataRequest;
  using ResultType = Model::GetAppMonitorDataResult;
  using OutcomeType = Model::GetAppMonitorDataOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetAppMonitorData(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudWatchRUM
}  // namespace Aws
