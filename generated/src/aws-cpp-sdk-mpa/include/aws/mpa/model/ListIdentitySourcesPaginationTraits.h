/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPAServiceClientModel.h>
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/model/ListIdentitySourcesRequest.h>
#include <aws/mpa/model/ListIdentitySourcesResult.h>

namespace Aws {
namespace MPA {
namespace Pagination {

template <typename Client = MPAClient>
struct ListIdentitySourcesPaginationTraits {
  using RequestType = Model::ListIdentitySourcesRequest;
  using ResultType = Model::ListIdentitySourcesResult;
  using OutcomeType = Model::ListIdentitySourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListIdentitySources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MPA
}  // namespace Aws
