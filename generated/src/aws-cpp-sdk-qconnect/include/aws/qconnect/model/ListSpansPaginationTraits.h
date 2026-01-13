/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnectServiceClientModel.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ListSpansRequest.h>
#include <aws/qconnect/model/ListSpansResult.h>

namespace Aws {
namespace QConnect {
namespace Pagination {

template <typename Client = QConnectClient>
struct ListSpansPaginationTraits {
  using RequestType = Model::ListSpansRequest;
  using ResultType = Model::ListSpansResult;
  using OutcomeType = Model::ListSpansOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSpans(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace QConnect
}  // namespace Aws
