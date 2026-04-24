/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDSServiceClientModel.h>
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DescribeDBSnapshotTenantDatabasesRequest.h>
#include <aws/rds/model/DescribeDBSnapshotTenantDatabasesResult.h>

namespace Aws {
namespace RDS {
namespace Pagination {

template <typename Client = RDSClient>
struct DescribeDBSnapshotTenantDatabasesPaginationTraits {
  using RequestType = Model::DescribeDBSnapshotTenantDatabasesRequest;
  using ResultType = Model::DescribeDBSnapshotTenantDatabasesResult;
  using OutcomeType = Model::DescribeDBSnapshotTenantDatabasesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeDBSnapshotTenantDatabases(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace RDS
}  // namespace Aws
