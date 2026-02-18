/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/NeptuneServiceClientModel.h>
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/model/DescribeDBParameterGroupsRequest.h>
#include <aws/neptune/model/DescribeDBParameterGroupsResult.h>

namespace Aws {
namespace Neptune {
namespace Pagination {

template <typename Client = NeptuneClient>
struct DescribeDBParameterGroupsPaginationTraits {
  using RequestType = Model::DescribeDBParameterGroupsRequest;
  using ResultType = Model::DescribeDBParameterGroupsResult;
  using OutcomeType = Model::DescribeDBParameterGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeDBParameterGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace Neptune
}  // namespace Aws
