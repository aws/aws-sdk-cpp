/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53globalresolver/Route53GlobalResolverServiceClientModel.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/ListCoreNetworkEndpointsRequest.h>
#include <aws/route53globalresolver/model/ListCoreNetworkEndpointsResult.h>

namespace Aws {
namespace Route53GlobalResolver {
namespace Pagination {

template <typename Client = Route53GlobalResolverClient>
struct ListCoreNetworkEndpointsPaginationTraits {
  using RequestType = Model::ListCoreNetworkEndpointsRequest;
  using ResultType = Model::ListCoreNetworkEndpointsResult;
  using OutcomeType = Model::ListCoreNetworkEndpointsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCoreNetworkEndpoints(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Route53GlobalResolver
}  // namespace Aws
