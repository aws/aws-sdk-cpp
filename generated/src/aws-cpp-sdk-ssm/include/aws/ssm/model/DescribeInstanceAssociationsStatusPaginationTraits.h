/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSMServiceClientModel.h>
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/DescribeInstanceAssociationsStatusRequest.h>
#include <aws/ssm/model/DescribeInstanceAssociationsStatusResult.h>

namespace Aws {
namespace SSM {
namespace Pagination {

template <typename Client = SSMClient>
struct DescribeInstanceAssociationsStatusPaginationTraits {
  using RequestType = Model::DescribeInstanceAssociationsStatusRequest;
  using ResultType = Model::DescribeInstanceAssociationsStatusResult;
  using OutcomeType = Model::DescribeInstanceAssociationsStatusOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeInstanceAssociationsStatus(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SSM
}  // namespace Aws
