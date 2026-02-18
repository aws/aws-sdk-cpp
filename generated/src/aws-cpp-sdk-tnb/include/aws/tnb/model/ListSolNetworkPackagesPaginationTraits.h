/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/TnbServiceClientModel.h>
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/model/ListSolNetworkPackagesRequest.h>
#include <aws/tnb/model/ListSolNetworkPackagesResult.h>

namespace Aws {
namespace tnb {
namespace Pagination {

template <typename Client = TnbClient>
struct ListSolNetworkPackagesPaginationTraits {
  using RequestType = Model::ListSolNetworkPackagesRequest;
  using ResultType = Model::ListSolNetworkPackagesResult;
  using OutcomeType = Model::ListSolNetworkPackagesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSolNetworkPackages(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace tnb
}  // namespace Aws
