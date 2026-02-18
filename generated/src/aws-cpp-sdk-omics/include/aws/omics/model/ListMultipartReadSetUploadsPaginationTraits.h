/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/OmicsServiceClientModel.h>
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/ListMultipartReadSetUploadsRequest.h>
#include <aws/omics/model/ListMultipartReadSetUploadsResult.h>

namespace Aws {
namespace Omics {
namespace Pagination {

template <typename Client = OmicsClient>
struct ListMultipartReadSetUploadsPaginationTraits {
  using RequestType = Model::ListMultipartReadSetUploadsRequest;
  using ResultType = Model::ListMultipartReadSetUploadsResult;
  using OutcomeType = Model::ListMultipartReadSetUploadsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListMultipartReadSetUploads(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Omics
}  // namespace Aws
