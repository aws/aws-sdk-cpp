/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWFServiceClientModel.h>
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/ListWorkflowTypesRequest.h>
#include <aws/swf/model/ListWorkflowTypesResult.h>

namespace Aws {
namespace SWF {
namespace Pagination {

template <typename Client = SWFClient>
struct ListWorkflowTypesPaginationTraits {
  using RequestType = Model::ListWorkflowTypesRequest;
  using ResultType = Model::ListWorkflowTypesResult;
  using OutcomeType = Model::ListWorkflowTypesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWorkflowTypes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextPageToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextPageToken(result.GetNextPageToken()); }
};

}  // namespace Pagination
}  // namespace SWF
}  // namespace Aws
