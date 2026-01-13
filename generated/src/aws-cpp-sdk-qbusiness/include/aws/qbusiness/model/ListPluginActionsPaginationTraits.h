/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusinessServiceClientModel.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/ListPluginActionsRequest.h>
#include <aws/qbusiness/model/ListPluginActionsResult.h>

namespace Aws {
namespace QBusiness {
namespace Pagination {

template <typename Client = QBusinessClient>
struct ListPluginActionsPaginationTraits {
  using RequestType = Model::ListPluginActionsRequest;
  using ResultType = Model::ListPluginActionsResult;
  using OutcomeType = Model::ListPluginActionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPluginActions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace QBusiness
}  // namespace Aws
