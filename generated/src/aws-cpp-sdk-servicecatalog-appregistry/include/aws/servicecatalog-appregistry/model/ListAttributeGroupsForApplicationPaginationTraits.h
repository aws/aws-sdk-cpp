/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistryServiceClientModel.h>
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsForApplicationRequest.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsForApplicationResult.h>

namespace Aws {
namespace AppRegistry {
namespace Pagination {

template <typename Client = AppRegistryClient>
struct ListAttributeGroupsForApplicationPaginationTraits {
  using RequestType = Model::ListAttributeGroupsForApplicationRequest;
  using ResultType = Model::ListAttributeGroupsForApplicationResult;
  using OutcomeType = Model::ListAttributeGroupsForApplicationOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAttributeGroupsForApplication(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppRegistry
}  // namespace Aws
