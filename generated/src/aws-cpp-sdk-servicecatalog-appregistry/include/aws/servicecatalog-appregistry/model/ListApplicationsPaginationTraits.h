/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistryServiceClientModel.h>
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/model/ListApplicationsRequest.h>
#include <aws/servicecatalog-appregistry/model/ListApplicationsResult.h>

namespace Aws {
namespace AppRegistry {
namespace Pagination {

template <typename Client = AppRegistryClient>
struct ListApplicationsPaginationTraits {
  using RequestType = Model::ListApplicationsRequest;
  using ResultType = Model::ListApplicationsResult;
  using OutcomeType = Model::ListApplicationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListApplications(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppRegistry
}  // namespace Aws
