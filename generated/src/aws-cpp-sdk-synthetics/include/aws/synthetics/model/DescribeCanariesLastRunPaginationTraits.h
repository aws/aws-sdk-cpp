/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/SyntheticsServiceClientModel.h>
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/DescribeCanariesLastRunRequest.h>
#include <aws/synthetics/model/DescribeCanariesLastRunResult.h>

namespace Aws {
namespace Synthetics {
namespace Pagination {

template <typename Client = SyntheticsClient>
struct DescribeCanariesLastRunPaginationTraits {
  using RequestType = Model::DescribeCanariesLastRunRequest;
  using ResultType = Model::DescribeCanariesLastRunResult;
  using OutcomeType = Model::DescribeCanariesLastRunOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeCanariesLastRun(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Synthetics
}  // namespace Aws
