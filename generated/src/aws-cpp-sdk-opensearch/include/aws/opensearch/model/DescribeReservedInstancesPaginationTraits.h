/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchServiceServiceClientModel.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DescribeReservedInstancesRequest.h>
#include <aws/opensearch/model/DescribeReservedInstancesResult.h>

namespace Aws {
namespace OpenSearchService {
namespace Pagination {

template <typename Client = OpenSearchServiceClient>
struct DescribeReservedInstancesPaginationTraits {
  using RequestType = Model::DescribeReservedInstancesRequest;
  using ResultType = Model::DescribeReservedInstancesResult;
  using OutcomeType = Model::DescribeReservedInstancesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeReservedInstances(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace OpenSearchService
}  // namespace Aws
