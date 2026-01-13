/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMailServiceClientModel.h>
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/model/ListGroupsRequest.h>
#include <aws/workmail/model/ListGroupsResult.h>

namespace Aws {
namespace WorkMail {
namespace Pagination {

template <typename Client = WorkMailClient>
struct ListGroupsPaginationTraits {
  using RequestType = Model::ListGroupsRequest;
  using ResultType = Model::ListGroupsResult;
  using OutcomeType = Model::ListGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace WorkMail
}  // namespace Aws
