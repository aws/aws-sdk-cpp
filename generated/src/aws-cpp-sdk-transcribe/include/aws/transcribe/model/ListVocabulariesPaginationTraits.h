/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeServiceServiceClientModel.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/ListVocabulariesRequest.h>
#include <aws/transcribe/model/ListVocabulariesResult.h>

namespace Aws {
namespace TranscribeService {
namespace Pagination {

template <typename Client = TranscribeServiceClient>
struct ListVocabulariesPaginationTraits {
  using RequestType = Model::ListVocabulariesRequest;
  using ResultType = Model::ListVocabulariesResult;
  using OutcomeType = Model::ListVocabulariesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListVocabularies(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace TranscribeService
}  // namespace Aws
