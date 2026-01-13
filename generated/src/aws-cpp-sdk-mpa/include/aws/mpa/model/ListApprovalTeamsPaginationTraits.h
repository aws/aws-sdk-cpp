/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPAServiceClientModel.h>
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/model/ListApprovalTeamsRequest.h>
#include <aws/mpa/model/ListApprovalTeamsResult.h>

namespace Aws {
namespace MPA {
namespace Pagination {

template <typename Client = MPAClient>
struct ListApprovalTeamsPaginationTraits {
  using RequestType = Model::ListApprovalTeamsRequest;
  using ResultType = Model::ListApprovalTeamsResult;
  using OutcomeType = Model::ListApprovalTeamsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListApprovalTeams(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MPA
}  // namespace Aws
