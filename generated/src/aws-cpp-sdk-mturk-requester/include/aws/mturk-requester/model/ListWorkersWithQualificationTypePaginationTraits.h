/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurkServiceClientModel.h>
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/model/ListWorkersWithQualificationTypeRequest.h>
#include <aws/mturk-requester/model/ListWorkersWithQualificationTypeResult.h>

namespace Aws {
namespace MTurk {
namespace Pagination {

template <typename Client = MTurkClient>
struct ListWorkersWithQualificationTypePaginationTraits {
  using RequestType = Model::ListWorkersWithQualificationTypeRequest;
  using ResultType = Model::ListWorkersWithQualificationTypeResult;
  using OutcomeType = Model::ListWorkersWithQualificationTypeOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWorkersWithQualificationType(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MTurk
}  // namespace Aws
