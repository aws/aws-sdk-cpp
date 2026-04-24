/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QAppsServiceClientModel.h>
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/qapps/model/ListQAppsRequest.h>
#include <aws/qapps/model/ListQAppsResult.h>

namespace Aws {
namespace QApps {
namespace Pagination {

template <typename Client = QAppsClient>
struct ListQAppsPaginationTraits {
  using RequestType = Model::ListQAppsRequest;
  using ResultType = Model::ListQAppsResult;
  using OutcomeType = Model::ListQAppsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListQApps(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace QApps
}  // namespace Aws
