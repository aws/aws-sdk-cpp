/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53ServiceClientModel.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ListHostedZonesRequest.h>
#include <aws/route53/model/ListHostedZonesResult.h>

namespace Aws {
namespace Route53 {
namespace Pagination {

template <typename Client = Route53Client>
struct ListHostedZonesPaginationTraits {
  using RequestType = Model::ListHostedZonesRequest;
  using ResultType = Model::ListHostedZonesResult;
  using OutcomeType = Model::ListHostedZonesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListHostedZones(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace Route53
}  // namespace Aws
