/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/OdbServiceClientModel.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ListExascaleDbStorageVaultsRequest.h>
#include <aws/odb/model/ListExascaleDbStorageVaultsResult.h>

namespace Aws {
namespace odb {
namespace Pagination {

template <typename Client = OdbClient>
struct ListExascaleDbStorageVaultsPaginationTraits {
  using RequestType = Model::ListExascaleDbStorageVaultsRequest;
  using ResultType = Model::ListExascaleDbStorageVaultsResult;
  using OutcomeType = Model::ListExascaleDbStorageVaultsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListExascaleDbStorageVaults(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace odb
}  // namespace Aws
