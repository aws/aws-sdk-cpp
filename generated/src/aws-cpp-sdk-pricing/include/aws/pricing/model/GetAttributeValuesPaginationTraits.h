/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/PricingServiceClientModel.h>
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/pricing/model/GetAttributeValuesRequest.h>
#include <aws/pricing/model/GetAttributeValuesResult.h>

namespace Aws {
namespace Pricing {
namespace Pagination {

template <typename Client = PricingClient>
struct GetAttributeValuesPaginationTraits {
  using RequestType = Model::GetAttributeValuesRequest;
  using ResultType = Model::GetAttributeValuesResult;
  using OutcomeType = Model::GetAttributeValuesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetAttributeValues(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Pricing
}  // namespace Aws
