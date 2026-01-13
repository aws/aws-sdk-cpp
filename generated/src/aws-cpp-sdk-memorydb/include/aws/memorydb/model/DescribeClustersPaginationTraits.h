/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDBServiceClientModel.h>
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/DescribeClustersRequest.h>
#include <aws/memorydb/model/DescribeClustersResult.h>

namespace Aws {
namespace MemoryDB {
namespace Pagination {

template <typename Client = MemoryDBClient>
struct DescribeClustersPaginationTraits {
  using RequestType = Model::DescribeClustersRequest;
  using ResultType = Model::DescribeClustersResult;
  using OutcomeType = Model::DescribeClustersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeClusters(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MemoryDB
}  // namespace Aws
