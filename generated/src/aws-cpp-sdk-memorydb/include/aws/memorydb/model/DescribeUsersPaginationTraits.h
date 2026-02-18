/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDBServiceClientModel.h>
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/DescribeUsersRequest.h>
#include <aws/memorydb/model/DescribeUsersResult.h>

namespace Aws {
namespace MemoryDB {
namespace Pagination {

template <typename Client = MemoryDBClient>
struct DescribeUsersPaginationTraits {
  using RequestType = Model::DescribeUsersRequest;
  using ResultType = Model::DescribeUsersResult;
  using OutcomeType = Model::DescribeUsersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeUsers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MemoryDB
}  // namespace Aws
