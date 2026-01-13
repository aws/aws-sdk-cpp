/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSMServiceClientModel.h>
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/DescribeInstancePatchesRequest.h>
#include <aws/ssm/model/DescribeInstancePatchesResult.h>

namespace Aws {
namespace SSM {
namespace Pagination {

template <typename Client = SSMClient>
struct DescribeInstancePatchesPaginationTraits {
  using RequestType = Model::DescribeInstancePatchesRequest;
  using ResultType = Model::DescribeInstancePatchesResult;
  using OutcomeType = Model::DescribeInstancePatchesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeInstancePatches(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SSM
}  // namespace Aws
