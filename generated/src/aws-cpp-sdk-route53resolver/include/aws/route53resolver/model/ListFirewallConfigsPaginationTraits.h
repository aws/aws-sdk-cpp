/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53ResolverServiceClientModel.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ListFirewallConfigsRequest.h>
#include <aws/route53resolver/model/ListFirewallConfigsResult.h>

namespace Aws {
namespace Route53Resolver {
namespace Pagination {

template <typename Client = Route53ResolverClient>
struct ListFirewallConfigsPaginationTraits {
  using RequestType = Model::ListFirewallConfigsRequest;
  using ResultType = Model::ListFirewallConfigsResult;
  using OutcomeType = Model::ListFirewallConfigsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFirewallConfigs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Route53Resolver
}  // namespace Aws
