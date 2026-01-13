/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhub-config/MigrationHubConfigServiceClientModel.h>
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
#include <aws/migrationhub-config/model/DescribeHomeRegionControlsRequest.h>
#include <aws/migrationhub-config/model/DescribeHomeRegionControlsResult.h>

namespace Aws {
namespace MigrationHubConfig {
namespace Pagination {

template <typename Client = MigrationHubConfigClient>
struct DescribeHomeRegionControlsPaginationTraits {
  using RequestType = Model::DescribeHomeRegionControlsRequest;
  using ResultType = Model::DescribeHomeRegionControlsResult;
  using OutcomeType = Model::DescribeHomeRegionControlsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeHomeRegionControls(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MigrationHubConfig
}  // namespace Aws
