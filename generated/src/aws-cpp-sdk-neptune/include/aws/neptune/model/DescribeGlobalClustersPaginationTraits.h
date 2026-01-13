/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/NeptuneServiceClientModel.h>
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/model/DescribeGlobalClustersRequest.h>
#include <aws/neptune/model/DescribeGlobalClustersResult.h>

namespace Aws {
namespace Neptune {
namespace Pagination {

template <typename Client = NeptuneClient>
struct DescribeGlobalClustersPaginationTraits {
  using RequestType = Model::DescribeGlobalClustersRequest;
  using ResultType = Model::DescribeGlobalClustersResult;
  using OutcomeType = Model::DescribeGlobalClustersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeGlobalClusters(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace Neptune
}  // namespace Aws
