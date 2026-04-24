/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFNServiceClientModel.h>
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/model/ListStateMachinesRequest.h>
#include <aws/states/model/ListStateMachinesResult.h>

namespace Aws {
namespace SFN {
namespace Pagination {

template <typename Client = SFNClient>
struct ListStateMachinesPaginationTraits {
  using RequestType = Model::ListStateMachinesRequest;
  using ResultType = Model::ListStateMachinesResult;
  using OutcomeType = Model::ListStateMachinesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListStateMachines(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SFN
}  // namespace Aws
