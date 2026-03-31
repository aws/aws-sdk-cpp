/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sustainability/SustainabilityServiceClientModel.h>
#include <aws/sustainability/Sustainability_EXPORTS.h>
#include <aws/sustainability/model/GetEstimatedCarbonEmissionsRequest.h>
#include <aws/sustainability/model/GetEstimatedCarbonEmissionsResult.h>

namespace Aws {
namespace Sustainability {
namespace Pagination {

template <typename Client = SustainabilityClient>
struct GetEstimatedCarbonEmissionsPaginationTraits {
  using RequestType = Model::GetEstimatedCarbonEmissionsRequest;
  using ResultType = Model::GetEstimatedCarbonEmissionsResult;
  using OutcomeType = Model::GetEstimatedCarbonEmissionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetEstimatedCarbonEmissions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Sustainability
}  // namespace Aws
