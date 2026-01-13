/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53globalresolver/Route53GlobalResolverServiceClientModel.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/ListHostedZoneAssociationsRequest.h>
#include <aws/route53globalresolver/model/ListHostedZoneAssociationsResult.h>

namespace Aws {
namespace Route53GlobalResolver {
namespace Pagination {

template <typename Client = Route53GlobalResolverClient>
struct ListHostedZoneAssociationsPaginationTraits {
  using RequestType = Model::ListHostedZoneAssociationsRequest;
  using ResultType = Model::ListHostedZoneAssociationsResult;
  using OutcomeType = Model::ListHostedZoneAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListHostedZoneAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Route53GlobalResolver
}  // namespace Aws
