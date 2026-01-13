/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurkServiceClientModel.h>
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/model/ListQualificationTypesRequest.h>
#include <aws/mturk-requester/model/ListQualificationTypesResult.h>

namespace Aws {
namespace MTurk {
namespace Pagination {

template <typename Client = MTurkClient>
struct ListQualificationTypesPaginationTraits {
  using RequestType = Model::ListQualificationTypesRequest;
  using ResultType = Model::ListQualificationTypesResult;
  using OutcomeType = Model::ListQualificationTypesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListQualificationTypes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MTurk
}  // namespace Aws
