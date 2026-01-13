/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMailServiceClientModel.h>
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/model/ListGroupMembersRequest.h>
#include <aws/workmail/model/ListGroupMembersResult.h>

namespace Aws {
namespace WorkMail {
namespace Pagination {

template <typename Client = WorkMailClient>
struct ListGroupMembersPaginationTraits {
  using RequestType = Model::ListGroupMembersRequest;
  using ResultType = Model::ListGroupMembersResult;
  using OutcomeType = Model::ListGroupMembersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListGroupMembers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace WorkMail
}  // namespace Aws
