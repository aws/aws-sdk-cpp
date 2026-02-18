/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/SyntheticsServiceClientModel.h>
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/DescribeRuntimeVersionsRequest.h>
#include <aws/synthetics/model/DescribeRuntimeVersionsResult.h>

namespace Aws {
namespace Synthetics {
namespace Pagination {

template <typename Client = SyntheticsClient>
struct DescribeRuntimeVersionsPaginationTraits {
  using RequestType = Model::DescribeRuntimeVersionsRequest;
  using ResultType = Model::DescribeRuntimeVersionsResult;
  using OutcomeType = Model::DescribeRuntimeVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeRuntimeVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Synthetics
}  // namespace Aws
