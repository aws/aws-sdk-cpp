/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53DomainsServiceClientModel.h>
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/model/ListDomainsRequest.h>
#include <aws/route53domains/model/ListDomainsResult.h>

namespace Aws {
namespace Route53Domains {
namespace Pagination {

template <typename Client = Route53DomainsClient>
struct ListDomainsPaginationTraits {
  using RequestType = Model::ListDomainsRequest;
  using ResultType = Model::ListDomainsResult;
  using OutcomeType = Model::ListDomainsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDomains(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextPageMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextPageMarker()); }
};

}  // namespace Pagination
}  // namespace Route53Domains
}  // namespace Aws
