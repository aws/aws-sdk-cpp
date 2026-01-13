/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidentsServiceClientModel.h>
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/model/ListResponsePlansRequest.h>
#include <aws/ssm-incidents/model/ListResponsePlansResult.h>

namespace Aws {
namespace SSMIncidents {
namespace Pagination {

template <typename Client = SSMIncidentsClient>
struct ListResponsePlansPaginationTraits {
  using RequestType = Model::ListResponsePlansRequest;
  using ResultType = Model::ListResponsePlansResult;
  using OutcomeType = Model::ListResponsePlansOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListResponsePlans(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SSMIncidents
}  // namespace Aws
