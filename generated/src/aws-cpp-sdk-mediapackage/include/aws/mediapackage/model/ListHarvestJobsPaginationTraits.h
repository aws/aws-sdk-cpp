/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackageServiceClientModel.h>
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/model/ListHarvestJobsRequest.h>
#include <aws/mediapackage/model/ListHarvestJobsResult.h>

namespace Aws {
namespace MediaPackage {
namespace Pagination {

template <typename Client = MediaPackageClient>
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
}  // namespace MediaPackage
}  // namespace Aws
