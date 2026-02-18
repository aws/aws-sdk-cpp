/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIServiceClientModel.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/resourcegroupstaggingapi/model/GetTagValuesRequest.h>
#include <aws/resourcegroupstaggingapi/model/GetTagValuesResult.h>

namespace Aws {
namespace ResourceGroupsTaggingAPI {
namespace Pagination {

template <typename Client = ResourceGroupsTaggingAPIClient>
struct GetTagValuesPaginationTraits {
  using RequestType = Model::GetTagValuesRequest;
  using ResultType = Model::GetTagValuesResult;
  using OutcomeType = Model::GetTagValuesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetTagValues(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetPaginationToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetPaginationToken(result.GetPaginationToken()); }
};

}  // namespace Pagination
}  // namespace ResourceGroupsTaggingAPI
}  // namespace Aws
