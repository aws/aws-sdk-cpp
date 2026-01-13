/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/OmicsServiceClientModel.h>
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/ListReadSetUploadPartsRequest.h>
#include <aws/omics/model/ListReadSetUploadPartsResult.h>

namespace Aws {
namespace Omics {
namespace Pagination {

template <typename Client = OmicsClient>
struct ListReadSetUploadPartsPaginationTraits {
  using RequestType = Model::ListReadSetUploadPartsRequest;
  using ResultType = Model::ListReadSetUploadPartsResult;
  using OutcomeType = Model::ListReadSetUploadPartsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListReadSetUploadParts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Omics
}  // namespace Aws
