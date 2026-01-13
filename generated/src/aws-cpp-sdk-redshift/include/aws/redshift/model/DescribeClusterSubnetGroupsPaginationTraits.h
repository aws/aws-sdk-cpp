/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/RedshiftServiceClientModel.h>
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/DescribeClusterSubnetGroupsRequest.h>
#include <aws/redshift/model/DescribeClusterSubnetGroupsResult.h>

namespace Aws {
namespace Redshift {
namespace Pagination {

template <typename Client = RedshiftClient>
struct DescribeClusterSubnetGroupsPaginationTraits {
  using RequestType = Model::DescribeClusterSubnetGroupsRequest;
  using ResultType = Model::DescribeClusterSubnetGroupsResult;
  using OutcomeType = Model::DescribeClusterSubnetGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeClusterSubnetGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace Redshift
}  // namespace Aws
