/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgentServiceClientModel.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/ListThreatModelsRequest.h>
#include <aws/securityagent/model/ListThreatModelsResult.h>

namespace Aws {
namespace SecurityAgent {
namespace Pagination {

template <typename Client = SecurityAgentClient>
struct ListThreatModelsPaginationTraits {
  using RequestType = Model::ListThreatModelsRequest;
  using ResultType = Model::ListThreatModelsResult;
  using OutcomeType = Model::ListThreatModelsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListThreatModels(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SecurityAgent
}  // namespace Aws
