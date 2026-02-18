/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusinessServiceClientModel.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/ListDataAccessorsRequest.h>
#include <aws/qbusiness/model/ListDataAccessorsResult.h>

namespace Aws {
namespace QBusiness {
namespace Pagination {

template <typename Client = QBusinessClient>
struct ListDataAccessorsPaginationTraits {
  using RequestType = Model::ListDataAccessorsRequest;
  using ResultType = Model::ListDataAccessorsResult;
  using OutcomeType = Model::ListDataAccessorsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDataAccessors(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace QBusiness
}  // namespace Aws
