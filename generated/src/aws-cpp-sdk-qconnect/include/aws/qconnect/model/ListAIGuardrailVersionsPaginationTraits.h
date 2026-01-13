/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnectServiceClientModel.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ListAIGuardrailVersionsRequest.h>
#include <aws/qconnect/model/ListAIGuardrailVersionsResult.h>

namespace Aws {
namespace QConnect {
namespace Pagination {

template <typename Client = QConnectClient>
struct ListAIGuardrailVersionsPaginationTraits {
  using RequestType = Model::ListAIGuardrailVersionsRequest;
  using ResultType = Model::ListAIGuardrailVersionsResult;
  using OutcomeType = Model::ListAIGuardrailVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAIGuardrailVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace QConnect
}  // namespace Aws
