/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessServiceClientModel.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/model/ListRecoveryGroupsRequest.h>
#include <aws/route53-recovery-readiness/model/ListRecoveryGroupsResult.h>

namespace Aws {
namespace Route53RecoveryReadiness {
namespace Pagination {

template <typename Client = Route53RecoveryReadinessClient>
struct ListRecoveryGroupsPaginationTraits {
  using RequestType = Model::ListRecoveryGroupsRequest;
  using ResultType = Model::ListRecoveryGroupsResult;
  using OutcomeType = Model::ListRecoveryGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRecoveryGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Route53RecoveryReadiness
}  // namespace Aws
