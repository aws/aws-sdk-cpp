/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitectedServiceClientModel.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/ListCheckDetailsRequest.h>
#include <aws/wellarchitected/model/ListCheckDetailsResult.h>

namespace Aws {
namespace WellArchitected {
namespace Pagination {

template <typename Client = WellArchitectedClient>
struct ListCheckDetailsPaginationTraits {
  using RequestType = Model::ListCheckDetailsRequest;
  using ResultType = Model::ListCheckDetailsResult;
  using OutcomeType = Model::ListCheckDetailsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCheckDetails(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace WellArchitected
}  // namespace Aws
