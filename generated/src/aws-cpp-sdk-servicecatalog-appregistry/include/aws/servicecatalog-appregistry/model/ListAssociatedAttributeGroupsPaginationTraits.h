/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistryServiceClientModel.h>
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedAttributeGroupsRequest.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedAttributeGroupsResult.h>

namespace Aws {
namespace AppRegistry {
namespace Pagination {

template <typename Client = AppRegistryClient>
struct ListAssociatedAttributeGroupsPaginationTraits {
  using RequestType = Model::ListAssociatedAttributeGroupsRequest;
  using ResultType = Model::ListAssociatedAttributeGroupsResult;
  using OutcomeType = Model::ListAssociatedAttributeGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAssociatedAttributeGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppRegistry
}  // namespace Aws
