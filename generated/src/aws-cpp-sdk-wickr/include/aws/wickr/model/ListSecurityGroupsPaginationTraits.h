/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wickr/WickrServiceClientModel.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/ListSecurityGroupsRequest.h>
#include <aws/wickr/model/ListSecurityGroupsResult.h>

namespace Aws {
namespace Wickr {
namespace Pagination {

template <typename Client = WickrClient>
struct ListSecurityGroupsPaginationTraits {
  using RequestType = Model::ListSecurityGroupsRequest;
  using ResultType = Model::ListSecurityGroupsResult;
  using OutcomeType = Model::ListSecurityGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSecurityGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Wickr
}  // namespace Aws
