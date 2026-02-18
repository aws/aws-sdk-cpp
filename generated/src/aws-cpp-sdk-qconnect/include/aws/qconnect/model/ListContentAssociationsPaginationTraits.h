/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnectServiceClientModel.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ListContentAssociationsRequest.h>
#include <aws/qconnect/model/ListContentAssociationsResult.h>

namespace Aws {
namespace QConnect {
namespace Pagination {

template <typename Client = QConnectClient>
struct ListContentAssociationsPaginationTraits {
  using RequestType = Model::ListContentAssociationsRequest;
  using ResultType = Model::ListContentAssociationsResult;
  using OutcomeType = Model::ListContentAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListContentAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace QConnect
}  // namespace Aws
