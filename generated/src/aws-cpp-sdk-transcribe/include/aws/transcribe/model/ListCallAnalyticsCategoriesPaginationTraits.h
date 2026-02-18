/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeServiceServiceClientModel.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/ListCallAnalyticsCategoriesRequest.h>
#include <aws/transcribe/model/ListCallAnalyticsCategoriesResult.h>

namespace Aws {
namespace TranscribeService {
namespace Pagination {

template <typename Client = TranscribeServiceClient>
struct ListCallAnalyticsCategoriesPaginationTraits {
  using RequestType = Model::ListCallAnalyticsCategoriesRequest;
  using ResultType = Model::ListCallAnalyticsCategoriesResult;
  using OutcomeType = Model::ListCallAnalyticsCategoriesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCallAnalyticsCategories(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace TranscribeService
}  // namespace Aws
