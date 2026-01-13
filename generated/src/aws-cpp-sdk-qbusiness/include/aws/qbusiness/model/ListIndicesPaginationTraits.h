/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusinessServiceClientModel.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/ListIndicesRequest.h>
#include <aws/qbusiness/model/ListIndicesResult.h>

namespace Aws {
namespace QBusiness {
namespace Pagination {

template <typename Client = QBusinessClient>
struct ListIndicesPaginationTraits {
  using RequestType = Model::ListIndicesRequest;
  using ResultType = Model::ListIndicesResult;
  using OutcomeType = Model::ListIndicesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListIndices(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace QBusiness
}  // namespace Aws
