/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/SignerServiceClientModel.h>
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/model/ListSigningPlatformsRequest.h>
#include <aws/signer/model/ListSigningPlatformsResult.h>

namespace Aws {
namespace signer {
namespace Pagination {

template <typename Client = SignerClient>
struct ListSigningPlatformsPaginationTraits {
  using RequestType = Model::ListSigningPlatformsRequest;
  using ResultType = Model::ListSigningPlatformsResult;
  using OutcomeType = Model::ListSigningPlatformsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSigningPlatforms(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace signer
}  // namespace Aws
