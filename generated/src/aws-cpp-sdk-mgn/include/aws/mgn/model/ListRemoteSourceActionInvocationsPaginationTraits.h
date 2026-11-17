/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/MgnServiceClientModel.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/ListRemoteSourceActionInvocationsRequest.h>
#include <aws/mgn/model/ListRemoteSourceActionInvocationsResult.h>

namespace Aws {
namespace mgn {
namespace Pagination {

template <typename Client = MgnClient>
struct ListRemoteSourceActionInvocationsPaginationTraits {
  using RequestType = Model::ListRemoteSourceActionInvocationsRequest;
  using ResultType = Model::ListRemoteSourceActionInvocationsResult;
  using OutcomeType = Model::ListRemoteSourceActionInvocationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRemoteSourceActionInvocations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace mgn
}  // namespace Aws
