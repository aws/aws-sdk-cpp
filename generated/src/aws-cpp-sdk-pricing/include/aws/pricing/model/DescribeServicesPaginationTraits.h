/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/PricingServiceClientModel.h>
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/pricing/model/DescribeServicesRequest.h>
#include <aws/pricing/model/DescribeServicesResult.h>

namespace Aws {
namespace Pricing {
namespace Pagination {

template <typename Client = PricingClient>
struct DescribeServicesPaginationTraits {
  using RequestType = Model::DescribeServicesRequest;
  using ResultType = Model::DescribeServicesResult;
  using OutcomeType = Model::DescribeServicesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeServices(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Pricing
}  // namespace Aws
