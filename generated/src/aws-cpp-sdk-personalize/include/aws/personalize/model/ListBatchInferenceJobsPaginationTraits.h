/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/PersonalizeServiceClientModel.h>
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/ListBatchInferenceJobsRequest.h>
#include <aws/personalize/model/ListBatchInferenceJobsResult.h>

namespace Aws {
namespace Personalize {
namespace Pagination {

template <typename Client = PersonalizeClient>
struct ListBatchInferenceJobsPaginationTraits {
  using RequestType = Model::ListBatchInferenceJobsRequest;
  using ResultType = Model::ListBatchInferenceJobsResult;
  using OutcomeType = Model::ListBatchInferenceJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBatchInferenceJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Personalize
}  // namespace Aws
