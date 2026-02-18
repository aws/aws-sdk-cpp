/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/PanoramaServiceClientModel.h>
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/ListPackagesRequest.h>
#include <aws/panorama/model/ListPackagesResult.h>

namespace Aws {
namespace Panorama {
namespace Pagination {

template <typename Client = PanoramaClient>
struct ListPackagesPaginationTraits {
  using RequestType = Model::ListPackagesRequest;
  using ResultType = Model::ListPackagesResult;
  using OutcomeType = Model::ListPackagesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPackages(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Panorama
}  // namespace Aws
