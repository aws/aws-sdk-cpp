/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/PollyServiceClientModel.h>
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/model/ListSpeechSynthesisTasksRequest.h>
#include <aws/polly/model/ListSpeechSynthesisTasksResult.h>

namespace Aws {
namespace Polly {
namespace Pagination {

template <typename Client = PollyClient>
struct ListSpeechSynthesisTasksPaginationTraits {
  using RequestType = Model::ListSpeechSynthesisTasksRequest;
  using ResultType = Model::ListSpeechSynthesisTasksResult;
  using OutcomeType = Model::ListSpeechSynthesisTasksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSpeechSynthesisTasks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Polly
}  // namespace Aws
