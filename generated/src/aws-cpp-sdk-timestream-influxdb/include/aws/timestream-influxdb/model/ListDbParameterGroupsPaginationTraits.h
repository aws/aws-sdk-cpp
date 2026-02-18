/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDBServiceClientModel.h>
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/model/ListDbParameterGroupsRequest.h>
#include <aws/timestream-influxdb/model/ListDbParameterGroupsResult.h>

namespace Aws {
namespace TimestreamInfluxDB {
namespace Pagination {

template <typename Client = TimestreamInfluxDBClient>
struct ListDbParameterGroupsPaginationTraits {
  using RequestType = Model::ListDbParameterGroupsRequest;
  using ResultType = Model::ListDbParameterGroupsResult;
  using OutcomeType = Model::ListDbParameterGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDbParameterGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace TimestreamInfluxDB
}  // namespace Aws
