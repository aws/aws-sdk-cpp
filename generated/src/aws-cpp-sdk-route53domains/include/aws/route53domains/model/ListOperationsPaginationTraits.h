/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53DomainsServiceClientModel.h>
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/model/ListOperationsRequest.h>
#include <aws/route53domains/model/ListOperationsResult.h>

namespace Aws {
namespace Route53Domains {
namespace Pagination {

template <typename Client = Route53DomainsClient>
struct ListOperationsPaginationTraits {
  using RequestType = Model::ListOperationsRequest;
  using ResultType = Model::ListOperationsResult;
  using OutcomeType = Model::ListOperationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListOperations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextPageMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextPageMarker()); }
};

}  // namespace Pagination
}  // namespace Route53Domains
}  // namespace Aws
