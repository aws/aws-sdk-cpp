/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/PersonalizeServiceClientModel.h>
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/ListMetricAttributionsRequest.h>
#include <aws/personalize/model/ListMetricAttributionsResult.h>

namespace Aws {
namespace Personalize {
namespace Pagination {

template <typename Client = PersonalizeClient>
struct ListMetricAttributionsPaginationTraits {
  using RequestType = Model::ListMetricAttributionsRequest;
  using ResultType = Model::ListMetricAttributionsResult;
  using OutcomeType = Model::ListMetricAttributionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListMetricAttributions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Personalize
}  // namespace Aws
