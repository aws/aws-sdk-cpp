/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/PersonalizeServiceClientModel.h>
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/ListRecommendersRequest.h>
#include <aws/personalize/model/ListRecommendersResult.h>

namespace Aws {
namespace Personalize {
namespace Pagination {

template <typename Client = PersonalizeClient>
struct ListRecommendersPaginationTraits {
  using RequestType = Model::ListRecommendersRequest;
  using ResultType = Model::ListRecommendersResult;
  using OutcomeType = Model::ListRecommendersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRecommenders(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Personalize
}  // namespace Aws
