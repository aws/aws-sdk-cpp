/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigServiceClientModel.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/model/ListClustersRequest.h>
#include <aws/route53-recovery-control-config/model/ListClustersResult.h>

namespace Aws {
namespace Route53RecoveryControlConfig {
namespace Pagination {

template <typename Client = Route53RecoveryControlConfigClient>
struct ListClustersPaginationTraits {
  using RequestType = Model::ListClustersRequest;
  using ResultType = Model::ListClustersResult;
  using OutcomeType = Model::ListClustersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListClusters(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Route53RecoveryControlConfig
}  // namespace Aws
