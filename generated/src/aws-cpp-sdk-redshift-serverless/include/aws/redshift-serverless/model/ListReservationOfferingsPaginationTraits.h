/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerlessServiceClientModel.h>
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/ListReservationOfferingsRequest.h>
#include <aws/redshift-serverless/model/ListReservationOfferingsResult.h>

namespace Aws {
namespace RedshiftServerless {
namespace Pagination {

template <typename Client = RedshiftServerlessClient>
struct ListReservationOfferingsPaginationTraits {
  using RequestType = Model::ListReservationOfferingsRequest;
  using ResultType = Model::ListReservationOfferingsResult;
  using OutcomeType = Model::ListReservationOfferingsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListReservationOfferings(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace RedshiftServerless
}  // namespace Aws
