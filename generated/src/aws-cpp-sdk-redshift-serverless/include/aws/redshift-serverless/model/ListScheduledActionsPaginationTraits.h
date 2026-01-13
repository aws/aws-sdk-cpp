/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerlessServiceClientModel.h>
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/ListScheduledActionsRequest.h>
#include <aws/redshift-serverless/model/ListScheduledActionsResult.h>

namespace Aws {
namespace RedshiftServerless {
namespace Pagination {

template <typename Client = RedshiftServerlessClient>
struct ListScheduledActionsPaginationTraits {
  using RequestType = Model::ListScheduledActionsRequest;
  using ResultType = Model::ListScheduledActionsResult;
  using OutcomeType = Model::ListScheduledActionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListScheduledActions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace RedshiftServerless
}  // namespace Aws
