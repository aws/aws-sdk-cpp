/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDBServiceClientModel.h>
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/model/ListDbInstancesRequest.h>
#include <aws/timestream-influxdb/model/ListDbInstancesResult.h>

namespace Aws {
namespace TimestreamInfluxDB {
namespace Pagination {

template <typename Client = TimestreamInfluxDBClient>
struct ListDbInstancesPaginationTraits {
  using RequestType = Model::ListDbInstancesRequest;
  using ResultType = Model::ListDbInstancesResult;
  using OutcomeType = Model::ListDbInstancesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDbInstances(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace TimestreamInfluxDB
}  // namespace Aws
