/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/OutpostsServiceClientModel.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/ListOrderableInstanceTypesRequest.h>
#include <aws/outposts/model/ListOrderableInstanceTypesResult.h>

namespace Aws {
namespace Outposts {
namespace Pagination {

template <typename Client = OutpostsClient>
struct ListOrderableInstanceTypesPaginationTraits {
  using RequestType = Model::ListOrderableInstanceTypesRequest;
  using ResultType = Model::ListOrderableInstanceTypesResult;
  using OutcomeType = Model::ListOrderableInstanceTypesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListOrderableInstanceTypes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Outposts
}  // namespace Aws
