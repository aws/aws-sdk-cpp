/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceIDServiceClientModel.h>
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/ListDomainsRequest.h>
#include <aws/voice-id/model/ListDomainsResult.h>

namespace Aws {
namespace VoiceID {
namespace Pagination {

template <typename Client = VoiceIDClient>
struct ListDomainsPaginationTraits {
  using RequestType = Model::ListDomainsRequest;
  using ResultType = Model::ListDomainsResult;
  using OutcomeType = Model::ListDomainsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDomains(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace VoiceID
}  // namespace Aws
