/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2ServiceClientModel.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/ListResolvedTestRunTargetResourcesRequest.h>
#include <aws/resiliencehubv2/model/ListResolvedTestRunTargetResourcesResult.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Pagination {

template <typename Client = Resiliencehubv2Client>
struct ListResolvedTestRunTargetResourcesPaginationTraits {
  using RequestType = Model::ListResolvedTestRunTargetResourcesRequest;
  using ResultType = Model::ListResolvedTestRunTargetResourcesResult;
  using OutcomeType = Model::ListResolvedTestRunTargetResourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListResolvedTestRunTargetResources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace resiliencehubv2
}  // namespace Aws
