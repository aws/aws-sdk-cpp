/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitectedServiceClientModel.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/ListMilestonesRequest.h>
#include <aws/wellarchitected/model/ListMilestonesResult.h>

namespace Aws {
namespace WellArchitected {
namespace Pagination {

template <typename Client = WellArchitectedClient>
struct ListMilestonesPaginationTraits {
  using RequestType = Model::ListMilestonesRequest;
  using ResultType = Model::ListMilestonesResult;
  using OutcomeType = Model::ListMilestonesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListMilestones(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace WellArchitected
}  // namespace Aws
