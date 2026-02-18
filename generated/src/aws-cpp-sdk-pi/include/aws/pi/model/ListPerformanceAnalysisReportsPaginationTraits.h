/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PIServiceClientModel.h>
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/model/ListPerformanceAnalysisReportsRequest.h>
#include <aws/pi/model/ListPerformanceAnalysisReportsResult.h>

namespace Aws {
namespace PI {
namespace Pagination {

template <typename Client = PIClient>
struct ListPerformanceAnalysisReportsPaginationTraits {
  using RequestType = Model::ListPerformanceAnalysisReportsRequest;
  using ResultType = Model::ListPerformanceAnalysisReportsResult;
  using OutcomeType = Model::ListPerformanceAnalysisReportsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPerformanceAnalysisReports(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PI
}  // namespace Aws
