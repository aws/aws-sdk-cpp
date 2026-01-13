/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscoveryServiceClientModel.h>
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/ListOperationsRequest.h>
#include <aws/servicediscovery/model/ListOperationsResult.h>

namespace Aws {
namespace ServiceDiscovery {
namespace Pagination {

template <typename Client = ServiceDiscoveryClient>
struct ListOperationsPaginationTraits {
  using RequestType = Model::ListOperationsRequest;
  using ResultType = Model::ListOperationsResult;
  using OutcomeType = Model::ListOperationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListOperations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ServiceDiscovery
}  // namespace Aws
