/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusinessServiceClientModel.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/ListDocumentsRequest.h>
#include <aws/qbusiness/model/ListDocumentsResult.h>

namespace Aws {
namespace QBusiness {
namespace Pagination {

template <typename Client = QBusinessClient>
struct ListDocumentsPaginationTraits {
  using RequestType = Model::ListDocumentsRequest;
  using ResultType = Model::ListDocumentsResult;
  using OutcomeType = Model::ListDocumentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDocuments(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace QBusiness
}  // namespace Aws
