/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/PersonalizeServiceClientModel.h>
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/ListDatasetExportJobsRequest.h>
#include <aws/personalize/model/ListDatasetExportJobsResult.h>

namespace Aws {
namespace Personalize {
namespace Pagination {

template <typename Client = PersonalizeClient>
struct ListDatasetExportJobsPaginationTraits {
  using RequestType = Model::ListDatasetExportJobsRequest;
  using ResultType = Model::ListDatasetExportJobsResult;
  using OutcomeType = Model::ListDatasetExportJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDatasetExportJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Personalize
}  // namespace Aws
