/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigServiceClientModel.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/model/ListRoutingControlsRequest.h>
#include <aws/route53-recovery-control-config/model/ListRoutingControlsResult.h>

namespace Aws {
namespace Route53RecoveryControlConfig {
namespace Pagination {

template <typename Client = Route53RecoveryControlConfigClient>
struct ListRoutingControlsPaginationTraits {
  using RequestType = Model::ListRoutingControlsRequest;
  using ResultType = Model::ListRoutingControlsResult;
  using OutcomeType = Model::ListRoutingControlsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRoutingControls(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Route53RecoveryControlConfig
}  // namespace Aws
