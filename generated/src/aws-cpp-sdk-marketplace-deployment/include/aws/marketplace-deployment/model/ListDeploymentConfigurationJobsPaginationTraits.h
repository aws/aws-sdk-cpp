/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-deployment/MarketplaceDeploymentServiceClientModel.h>
#include <aws/marketplace-deployment/MarketplaceDeployment_EXPORTS.h>
#include <aws/marketplace-deployment/model/ListDeploymentConfigurationJobsRequest.h>
#include <aws/marketplace-deployment/model/ListDeploymentConfigurationJobsResult.h>

namespace Aws {
namespace MarketplaceDeployment {
namespace Pagination {

template <typename Client = MarketplaceDeploymentClient>
struct ListDeploymentConfigurationJobsPaginationTraits {
  using RequestType = Model::ListDeploymentConfigurationJobsRequest;
  using ResultType = Model::ListDeploymentConfigurationJobsResult;
  using OutcomeType = Model::ListDeploymentConfigurationJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDeploymentConfigurationJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MarketplaceDeployment
}  // namespace Aws
