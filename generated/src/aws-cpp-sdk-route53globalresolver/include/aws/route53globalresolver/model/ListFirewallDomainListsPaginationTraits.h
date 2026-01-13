/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53globalresolver/Route53GlobalResolverServiceClientModel.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/ListFirewallDomainListsRequest.h>
#include <aws/route53globalresolver/model/ListFirewallDomainListsResult.h>

namespace Aws {
namespace Route53GlobalResolver {
namespace Pagination {

template <typename Client = Route53GlobalResolverClient>
struct ListFirewallDomainListsPaginationTraits {
  using RequestType = Model::ListFirewallDomainListsRequest;
  using ResultType = Model::ListFirewallDomainListsResult;
  using OutcomeType = Model::ListFirewallDomainListsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFirewallDomainLists(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Route53GlobalResolver
}  // namespace Aws
