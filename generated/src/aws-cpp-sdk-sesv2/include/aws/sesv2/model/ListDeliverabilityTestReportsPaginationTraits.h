/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2ServiceClientModel.h>
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/ListDeliverabilityTestReportsRequest.h>
#include <aws/sesv2/model/ListDeliverabilityTestReportsResult.h>

namespace Aws {
namespace SESV2 {
namespace Pagination {

template <typename Client = SESV2Client>
struct ListDeliverabilityTestReportsPaginationTraits {
  using RequestType = Model::ListDeliverabilityTestReportsRequest;
  using ResultType = Model::ListDeliverabilityTestReportsResult;
  using OutcomeType = Model::ListDeliverabilityTestReportsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDeliverabilityTestReports(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SESV2
}  // namespace Aws
