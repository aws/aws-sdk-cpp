/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessServiceClientModel.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/model/GetCellReadinessSummaryRequest.h>
#include <aws/route53-recovery-readiness/model/GetCellReadinessSummaryResult.h>

namespace Aws {
namespace Route53RecoveryReadiness {
namespace Pagination {

template <typename Client = Route53RecoveryReadinessClient>
struct GetCellReadinessSummaryPaginationTraits {
  using RequestType = Model::GetCellReadinessSummaryRequest;
  using ResultType = Model::GetCellReadinessSummaryResult;
  using OutcomeType = Model::GetCellReadinessSummaryOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetCellReadinessSummary(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Route53RecoveryReadiness
}  // namespace Aws
