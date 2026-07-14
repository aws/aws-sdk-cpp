/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PIServiceClientModel.h>
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/model/ListPerformanceAnalysisReportRecommendationsRequest.h>
#include <aws/pi/model/ListPerformanceAnalysisReportRecommendationsResult.h>

namespace Aws {
namespace PI {
namespace Pagination {

template <typename Client = PIClient>
struct ListPerformanceAnalysisReportRecommendationsPaginationTraits {
  using RequestType = Model::ListPerformanceAnalysisReportRecommendationsRequest;
  using ResultType = Model::ListPerformanceAnalysisReportRecommendationsResult;
  using OutcomeType = Model::ListPerformanceAnalysisReportRecommendationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) {
    return client->ListPerformanceAnalysisReportRecommendations(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PI
}  // namespace Aws
