/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nova-act/NovaActServiceClientModel.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/ListWorkflowDefinitionsRequest.h>
#include <aws/nova-act/model/ListWorkflowDefinitionsResult.h>

namespace Aws {
namespace NovaAct {
namespace Pagination {

template <typename Client = NovaActClient>
struct ListWorkflowDefinitionsPaginationTraits {
  using RequestType = Model::ListWorkflowDefinitionsRequest;
  using ResultType = Model::ListWorkflowDefinitionsResult;
  using OutcomeType = Model::ListWorkflowDefinitionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWorkflowDefinitions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace NovaAct
}  // namespace Aws
