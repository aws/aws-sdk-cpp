/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPAServiceClientModel.h>
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/model/ListPolicyVersionsRequest.h>
#include <aws/mpa/model/ListPolicyVersionsResult.h>

namespace Aws {
namespace MPA {
namespace Pagination {

template <typename Client = MPAClient>
struct ListPolicyVersionsPaginationTraits {
  using RequestType = Model::ListPolicyVersionsRequest;
  using ResultType = Model::ListPolicyVersionsResult;
  using OutcomeType = Model::ListPolicyVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPolicyVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MPA
}  // namespace Aws
