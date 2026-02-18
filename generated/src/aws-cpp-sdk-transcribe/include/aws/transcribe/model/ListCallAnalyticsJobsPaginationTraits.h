/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeServiceServiceClientModel.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/ListCallAnalyticsJobsRequest.h>
#include <aws/transcribe/model/ListCallAnalyticsJobsResult.h>

namespace Aws {
namespace TranscribeService {
namespace Pagination {

template <typename Client = TranscribeServiceClient>
struct ListCallAnalyticsJobsPaginationTraits {
  using RequestType = Model::ListCallAnalyticsJobsRequest;
  using ResultType = Model::ListCallAnalyticsJobsResult;
  using OutcomeType = Model::ListCallAnalyticsJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCallAnalyticsJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace TranscribeService
}  // namespace Aws
