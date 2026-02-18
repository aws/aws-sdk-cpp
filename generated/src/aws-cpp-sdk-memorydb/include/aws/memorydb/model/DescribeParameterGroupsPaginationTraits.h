/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDBServiceClientModel.h>
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/DescribeParameterGroupsRequest.h>
#include <aws/memorydb/model/DescribeParameterGroupsResult.h>

namespace Aws {
namespace MemoryDB {
namespace Pagination {

template <typename Client = MemoryDBClient>
struct DescribeParameterGroupsPaginationTraits {
  using RequestType = Model::DescribeParameterGroupsRequest;
  using ResultType = Model::DescribeParameterGroupsResult;
  using OutcomeType = Model::DescribeParameterGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeParameterGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MemoryDB
}  // namespace Aws
