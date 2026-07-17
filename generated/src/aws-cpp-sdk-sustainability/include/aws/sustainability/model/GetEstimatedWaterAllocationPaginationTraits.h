/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sustainability/SustainabilityServiceClientModel.h>
#include <aws/sustainability/Sustainability_EXPORTS.h>
#include <aws/sustainability/model/GetEstimatedWaterAllocationRequest.h>
#include <aws/sustainability/model/GetEstimatedWaterAllocationResult.h>

namespace Aws {
namespace Sustainability {
namespace Pagination {

template <typename Client = SustainabilityClient>
struct GetEstimatedWaterAllocationPaginationTraits {
  using RequestType = Model::GetEstimatedWaterAllocationRequest;
  using ResultType = Model::GetEstimatedWaterAllocationResult;
  using OutcomeType = Model::GetEstimatedWaterAllocationOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetEstimatedWaterAllocation(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Sustainability
}  // namespace Aws
