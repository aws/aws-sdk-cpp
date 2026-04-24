/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2ServiceClientModel.h>
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/model/ListHarvestJobsRequest.h>
#include <aws/mediapackagev2/model/ListHarvestJobsResult.h>

namespace Aws {
namespace mediapackagev2 {
namespace Pagination {

template <typename Client = Mediapackagev2Client>
struct ListHarvestJobsPaginationTraits {
  using RequestType = Model::ListHarvestJobsRequest;
  using ResultType = Model::ListHarvestJobsResult;
  using OutcomeType = Model::ListHarvestJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListHarvestJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace mediapackagev2
}  // namespace Aws
