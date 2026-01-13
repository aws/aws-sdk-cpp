/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDBServiceClientModel.h>
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/model/ListDbInstancesForClusterRequest.h>
#include <aws/timestream-influxdb/model/ListDbInstancesForClusterResult.h>

namespace Aws {
namespace TimestreamInfluxDB {
namespace Pagination {

template <typename Client = TimestreamInfluxDBClient>
struct ListDbInstancesForClusterPaginationTraits {
  using RequestType = Model::ListDbInstancesForClusterRequest;
  using ResultType = Model::ListDbInstancesForClusterResult;
  using OutcomeType = Model::ListDbInstancesForClusterOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDbInstancesForCluster(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace TimestreamInfluxDB
}  // namespace Aws
