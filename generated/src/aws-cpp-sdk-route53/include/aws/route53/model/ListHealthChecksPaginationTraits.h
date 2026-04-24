/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53ServiceClientModel.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ListHealthChecksRequest.h>
#include <aws/route53/model/ListHealthChecksResult.h>

namespace Aws {
namespace Route53 {
namespace Pagination {

template <typename Client = Route53Client>
struct ListHealthChecksPaginationTraits {
  using RequestType = Model::ListHealthChecksRequest;
  using ResultType = Model::ListHealthChecksResult;
  using OutcomeType = Model::ListHealthChecksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListHealthChecks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace Route53
}  // namespace Aws
