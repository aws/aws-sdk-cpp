/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDSServiceClientModel.h>
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DescribeDBClusterParameterGroupsRequest.h>
#include <aws/rds/model/DescribeDBClusterParameterGroupsResult.h>

namespace Aws {
namespace RDS {
namespace Pagination {

template <typename Client = RDSClient>
struct DescribeDBClusterParameterGroupsPaginationTraits {
  using RequestType = Model::DescribeDBClusterParameterGroupsRequest;
  using ResultType = Model::DescribeDBClusterParameterGroupsResult;
  using OutcomeType = Model::DescribeDBClusterParameterGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeDBClusterParameterGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace RDS
}  // namespace Aws
