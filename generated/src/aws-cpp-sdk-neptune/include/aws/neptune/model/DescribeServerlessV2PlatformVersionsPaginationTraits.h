/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/NeptuneServiceClientModel.h>
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/model/DescribeServerlessV2PlatformVersionsRequest.h>
#include <aws/neptune/model/DescribeServerlessV2PlatformVersionsResult.h>

namespace Aws {
namespace Neptune {
namespace Pagination {

template <typename Client = NeptuneClient>
struct DescribeServerlessV2PlatformVersionsPaginationTraits {
  using RequestType = Model::DescribeServerlessV2PlatformVersionsRequest;
  using ResultType = Model::DescribeServerlessV2PlatformVersionsResult;
  using OutcomeType = Model::DescribeServerlessV2PlatformVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeServerlessV2PlatformVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace Neptune
}  // namespace Aws
