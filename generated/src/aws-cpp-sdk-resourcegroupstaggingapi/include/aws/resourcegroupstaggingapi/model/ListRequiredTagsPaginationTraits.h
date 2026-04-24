/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIServiceClientModel.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/resourcegroupstaggingapi/model/ListRequiredTagsRequest.h>
#include <aws/resourcegroupstaggingapi/model/ListRequiredTagsResult.h>

namespace Aws {
namespace ResourceGroupsTaggingAPI {
namespace Pagination {

template <typename Client = ResourceGroupsTaggingAPIClient>
struct ListRequiredTagsPaginationTraits {
  using RequestType = Model::ListRequiredTagsRequest;
  using ResultType = Model::ListRequiredTagsResult;
  using OutcomeType = Model::ListRequiredTagsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRequiredTags(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ResourceGroupsTaggingAPI
}  // namespace Aws
