/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchServiceServiceClientModel.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DescribeReservedInstanceOfferingsRequest.h>
#include <aws/opensearch/model/DescribeReservedInstanceOfferingsResult.h>

namespace Aws {
namespace OpenSearchService {
namespace Pagination {

template <typename Client = OpenSearchServiceClient>
struct DescribeReservedInstanceOfferingsPaginationTraits {
  using RequestType = Model::DescribeReservedInstanceOfferingsRequest;
  using ResultType = Model::DescribeReservedInstanceOfferingsResult;
  using OutcomeType = Model::DescribeReservedInstanceOfferingsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeReservedInstanceOfferings(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace OpenSearchService
}  // namespace Aws
