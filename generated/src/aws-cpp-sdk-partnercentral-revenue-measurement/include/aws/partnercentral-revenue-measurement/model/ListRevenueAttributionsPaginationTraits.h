/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementServiceClientModel.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/ListRevenueAttributionsRequest.h>
#include <aws/partnercentral-revenue-measurement/model/ListRevenueAttributionsResult.h>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Pagination {

template <typename Client = PartnerCentralRevenueMeasurementClient>
struct ListRevenueAttributionsPaginationTraits {
  using RequestType = Model::ListRevenueAttributionsRequest;
  using ResultType = Model::ListRevenueAttributionsResult;
  using OutcomeType = Model::ListRevenueAttributionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRevenueAttributions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
