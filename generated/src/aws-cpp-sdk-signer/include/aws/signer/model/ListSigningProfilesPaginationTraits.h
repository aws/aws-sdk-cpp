/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/SignerServiceClientModel.h>
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/model/ListSigningProfilesRequest.h>
#include <aws/signer/model/ListSigningProfilesResult.h>

namespace Aws {
namespace signer {
namespace Pagination {

template <typename Client = SignerClient>
struct ListSigningProfilesPaginationTraits {
  using RequestType = Model::ListSigningProfilesRequest;
  using ResultType = Model::ListSigningProfilesResult;
  using OutcomeType = Model::ListSigningProfilesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSigningProfiles(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace signer
}  // namespace Aws
