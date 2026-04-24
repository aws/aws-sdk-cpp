/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistryServiceClientModel.h>
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsRequest.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsResult.h>

namespace Aws {
namespace AppRegistry {
namespace Pagination {

template <typename Client = AppRegistryClient>
struct ListAttributeGroupsPaginationTraits {
  using RequestType = Model::ListAttributeGroupsRequest;
  using ResultType = Model::ListAttributeGroupsResult;
  using OutcomeType = Model::ListAttributeGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAttributeGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppRegistry
}  // namespace Aws
