/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceIDServiceClientModel.h>
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/ListSpeakersRequest.h>
#include <aws/voice-id/model/ListSpeakersResult.h>

namespace Aws {
namespace VoiceID {
namespace Pagination {

template <typename Client = VoiceIDClient>
struct ListSpeakersPaginationTraits {
  using RequestType = Model::ListSpeakersRequest;
  using ResultType = Model::ListSpeakersResult;
  using OutcomeType = Model::ListSpeakersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSpeakers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace VoiceID
}  // namespace Aws
