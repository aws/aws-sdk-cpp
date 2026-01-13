/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53ResolverServiceClientModel.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ListResolverQueryLogConfigsRequest.h>
#include <aws/route53resolver/model/ListResolverQueryLogConfigsResult.h>

namespace Aws {
namespace Route53Resolver {
namespace Pagination {

template <typename Client = Route53ResolverClient>
struct ListResolverQueryLogConfigsPaginationTraits {
  using RequestType = Model::ListResolverQueryLogConfigsRequest;
  using ResultType = Model::ListResolverQueryLogConfigsResult;
  using OutcomeType = Model::ListResolverQueryLogConfigsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListResolverQueryLogConfigs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Route53Resolver
}  // namespace Aws
