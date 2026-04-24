/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscoveryServiceClientModel.h>
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/GetInstancesHealthStatusRequest.h>
#include <aws/servicediscovery/model/GetInstancesHealthStatusResult.h>

namespace Aws {
namespace ServiceDiscovery {
namespace Pagination {

template <typename Client = ServiceDiscoveryClient>
struct GetInstancesHealthStatusPaginationTraits {
  using RequestType = Model::GetInstancesHealthStatusRequest;
  using ResultType = Model::GetInstancesHealthStatusResult;
  using OutcomeType = Model::GetInstancesHealthStatusOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetInstancesHealthStatus(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ServiceDiscovery
}  // namespace Aws
