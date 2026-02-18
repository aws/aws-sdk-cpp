/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53globalresolver/Route53GlobalResolverServiceClientModel.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/ListAccessSourcesRequest.h>
#include <aws/route53globalresolver/model/ListAccessSourcesResult.h>

namespace Aws {
namespace Route53GlobalResolver {
namespace Pagination {

template <typename Client = Route53GlobalResolverClient>
struct ListAccessSourcesPaginationTraits {
  using RequestType = Model::ListAccessSourcesRequest;
  using ResultType = Model::ListAccessSourcesResult;
  using OutcomeType = Model::ListAccessSourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAccessSources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Route53GlobalResolver
}  // namespace Aws
