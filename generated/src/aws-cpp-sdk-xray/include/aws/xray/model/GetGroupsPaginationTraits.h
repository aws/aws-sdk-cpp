/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRayServiceClientModel.h>
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/GetGroupsRequest.h>
#include <aws/xray/model/GetGroupsResult.h>

namespace Aws {
namespace XRay {
namespace Pagination {

template <typename Client = XRayClient>
struct GetGroupsPaginationTraits {
  using RequestType = Model::GetGroupsRequest;
  using ResultType = Model::GetGroupsResult;
  using OutcomeType = Model::GetGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace XRay
}  // namespace Aws
