/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/PanoramaServiceClientModel.h>
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/ListPackageImportJobsRequest.h>
#include <aws/panorama/model/ListPackageImportJobsResult.h>

namespace Aws {
namespace Panorama {
namespace Pagination {

template <typename Client = PanoramaClient>
struct ListPackageImportJobsPaginationTraits {
  using RequestType = Model::ListPackageImportJobsRequest;
  using ResultType = Model::ListPackageImportJobsResult;
  using OutcomeType = Model::ListPackageImportJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPackageImportJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Panorama
}  // namespace Aws
