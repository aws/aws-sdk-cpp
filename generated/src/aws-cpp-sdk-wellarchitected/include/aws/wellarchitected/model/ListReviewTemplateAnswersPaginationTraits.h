/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitectedServiceClientModel.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/ListReviewTemplateAnswersRequest.h>
#include <aws/wellarchitected/model/ListReviewTemplateAnswersResult.h>

namespace Aws {
namespace WellArchitected {
namespace Pagination {

template <typename Client = WellArchitectedClient>
struct ListReviewTemplateAnswersPaginationTraits {
  using RequestType = Model::ListReviewTemplateAnswersRequest;
  using ResultType = Model::ListReviewTemplateAnswersResult;
  using OutcomeType = Model::ListReviewTemplateAnswersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListReviewTemplateAnswers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace WellArchitected
}  // namespace Aws
