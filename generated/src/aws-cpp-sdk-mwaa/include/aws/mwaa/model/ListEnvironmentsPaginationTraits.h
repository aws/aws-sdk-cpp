/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAAServiceClientModel.h>
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/mwaa/model/ListEnvironmentsRequest.h>
#include <aws/mwaa/model/ListEnvironmentsResult.h>

namespace Aws {
namespace MWAA {
namespace Pagination {

template <typename Client = MWAAClient>
struct ListEnvironmentsPaginationTraits {
  using RequestType = Model::ListEnvironmentsRequest;
  using ResultType = Model::ListEnvironmentsResult;
  using OutcomeType = Model::ListEnvironmentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEnvironments(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MWAA
}  // namespace Aws
