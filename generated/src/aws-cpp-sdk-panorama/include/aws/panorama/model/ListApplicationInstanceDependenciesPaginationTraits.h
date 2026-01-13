/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/PanoramaServiceClientModel.h>
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/ListApplicationInstanceDependenciesRequest.h>
#include <aws/panorama/model/ListApplicationInstanceDependenciesResult.h>

namespace Aws {
namespace Panorama {
namespace Pagination {

template <typename Client = PanoramaClient>
struct ListApplicationInstanceDependenciesPaginationTraits {
  using RequestType = Model::ListApplicationInstanceDependenciesRequest;
  using ResultType = Model::ListApplicationInstanceDependenciesResult;
  using OutcomeType = Model::ListApplicationInstanceDependenciesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListApplicationInstanceDependencies(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Panorama
}  // namespace Aws
