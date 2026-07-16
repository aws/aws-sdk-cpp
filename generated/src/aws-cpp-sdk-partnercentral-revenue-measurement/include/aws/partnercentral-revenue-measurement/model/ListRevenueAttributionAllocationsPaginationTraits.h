/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementServiceClientModel.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/ListRevenueAttributionAllocationsRequest.h>
#include <aws/partnercentral-revenue-measurement/model/ListRevenueAttributionAllocationsResult.h>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Pagination {

template <typename Client = PartnerCentralRevenueMeasurementClient>
struct ListRevenueAttributionAllocationsPaginationTraits {
  using RequestType = Model::ListRevenueAttributionAllocationsRequest;
  using ResultType = Model::ListRevenueAttributionAllocationsResult;
  using OutcomeType = Model::ListRevenueAttributionAllocationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRevenueAttributionAllocations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
