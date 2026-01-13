/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurkServiceClientModel.h>
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/model/ListQualificationRequestsRequest.h>
#include <aws/mturk-requester/model/ListQualificationRequestsResult.h>

namespace Aws {
namespace MTurk {
namespace Pagination {

template <typename Client = MTurkClient>
struct ListQualificationRequestsPaginationTraits {
  using RequestType = Model::ListQualificationRequestsRequest;
  using ResultType = Model::ListQualificationRequestsResult;
  using OutcomeType = Model::ListQualificationRequestsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListQualificationRequests(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MTurk
}  // namespace Aws
