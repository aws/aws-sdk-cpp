/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceIDServiceClientModel.h>
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/ListFraudstersRequest.h>
#include <aws/voice-id/model/ListFraudstersResult.h>

namespace Aws {
namespace VoiceID {
namespace Pagination {

template <typename Client = VoiceIDClient>
struct ListFraudstersPaginationTraits {
  using RequestType = Model::ListFraudstersRequest;
  using ResultType = Model::ListFraudstersResult;
  using OutcomeType = Model::ListFraudstersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFraudsters(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace VoiceID
}  // namespace Aws
