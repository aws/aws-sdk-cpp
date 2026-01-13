/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidentsServiceClientModel.h>
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/model/ListRelatedItemsRequest.h>
#include <aws/ssm-incidents/model/ListRelatedItemsResult.h>

namespace Aws {
namespace SSMIncidents {
namespace Pagination {

template <typename Client = SSMIncidentsClient>
struct ListRelatedItemsPaginationTraits {
  using RequestType = Model::ListRelatedItemsRequest;
  using ResultType = Model::ListRelatedItemsResult;
  using OutcomeType = Model::ListRelatedItemsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRelatedItems(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SSMIncidents
}  // namespace Aws
