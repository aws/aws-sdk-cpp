/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDBServiceClientModel.h>
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/model/ListDbClustersRequest.h>
#include <aws/timestream-influxdb/model/ListDbClustersResult.h>

namespace Aws {
namespace TimestreamInfluxDB {
namespace Pagination {

template <typename Client = TimestreamInfluxDBClient>
struct ListDbClustersPaginationTraits {
  using RequestType = Model::ListDbClustersRequest;
  using ResultType = Model::ListDbClustersResult;
  using OutcomeType = Model::ListDbClustersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDbClusters(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace TimestreamInfluxDB
}  // namespace Aws
