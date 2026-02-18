/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeServiceServiceClientModel.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/ListVocabularyFiltersRequest.h>
#include <aws/transcribe/model/ListVocabularyFiltersResult.h>

namespace Aws {
namespace TranscribeService {
namespace Pagination {

template <typename Client = TranscribeServiceClient>
struct ListVocabularyFiltersPaginationTraits {
  using RequestType = Model::ListVocabularyFiltersRequest;
  using ResultType = Model::ListVocabularyFiltersResult;
  using OutcomeType = Model::ListVocabularyFiltersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListVocabularyFilters(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace TranscribeService
}  // namespace Aws
