/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/OdbServiceClientModel.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ListCloudAutonomousVmClustersRequest.h>
#include <aws/odb/model/ListCloudAutonomousVmClustersResult.h>

namespace Aws {
namespace odb {
namespace Pagination {

template <typename Client = OdbClient>
struct ListCloudAutonomousVmClustersPaginationTraits {
  using RequestType = Model::ListCloudAutonomousVmClustersRequest;
  using ResultType = Model::ListCloudAutonomousVmClustersResult;
  using OutcomeType = Model::ListCloudAutonomousVmClustersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCloudAutonomousVmClusters(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace odb
}  // namespace Aws
