/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53DomainsServiceClientModel.h>
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/model/ViewBillingRequest.h>
#include <aws/route53domains/model/ViewBillingResult.h>

namespace Aws {
namespace Route53Domains {
namespace Pagination {

template <typename Client = Route53DomainsClient>
struct ViewBillingPaginationTraits {
  using RequestType = Model::ViewBillingRequest;
  using ResultType = Model::ViewBillingResult;
  using OutcomeType = Model::ViewBillingOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ViewBilling(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextPageMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextPageMarker()); }
};

}  // namespace Pagination
}  // namespace Route53Domains
}  // namespace Aws
