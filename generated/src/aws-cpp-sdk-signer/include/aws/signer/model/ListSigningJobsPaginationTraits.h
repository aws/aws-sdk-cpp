/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/SignerServiceClientModel.h>
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/model/ListSigningJobsRequest.h>
#include <aws/signer/model/ListSigningJobsResult.h>

namespace Aws {
namespace signer {
namespace Pagination {

template <typename Client = SignerClient>
struct ListSigningJobsPaginationTraits {
  using RequestType = Model::ListSigningJobsRequest;
  using ResultType = Model::ListSigningJobsResult;
  using OutcomeType = Model::ListSigningJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSigningJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace signer
}  // namespace Aws
