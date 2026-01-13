/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53ResolverServiceClientModel.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ListResolverRuleAssociationsRequest.h>
#include <aws/route53resolver/model/ListResolverRuleAssociationsResult.h>

namespace Aws {
namespace Route53Resolver {
namespace Pagination {

template <typename Client = Route53ResolverClient>
struct ListResolverRuleAssociationsPaginationTraits {
  using RequestType = Model::ListResolverRuleAssociationsRequest;
  using ResultType = Model::ListResolverRuleAssociationsResult;
  using OutcomeType = Model::ListResolverRuleAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListResolverRuleAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Route53Resolver
}  // namespace Aws
