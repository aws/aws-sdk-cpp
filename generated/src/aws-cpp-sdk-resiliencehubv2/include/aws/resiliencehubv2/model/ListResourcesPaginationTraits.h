/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2ServiceClientModel.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/ListResourcesRequest.h>
#include <aws/resiliencehubv2/model/ListResourcesResult.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Pagination {

template <typename Client = Resiliencehubv2Client>
struct ListResourcesPaginationTraits {
  using RequestType = Model::ListResourcesRequest;
  using ResultType = Model::ListResourcesResult;
  using OutcomeType = Model::ListResourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListResources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace resiliencehubv2
}  // namespace Aws
