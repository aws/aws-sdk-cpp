/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53ServiceClientModel.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ListCidrLocationsRequest.h>
#include <aws/route53/model/ListCidrLocationsResult.h>

namespace Aws {
namespace Route53 {
namespace Pagination {

template <typename Client = Route53Client>
struct ListCidrLocationsPaginationTraits {
  using RequestType = Model::ListCidrLocationsRequest;
  using ResultType = Model::ListCidrLocationsResult;
  using OutcomeType = Model::ListCidrLocationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCidrLocations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Route53
}  // namespace Aws
