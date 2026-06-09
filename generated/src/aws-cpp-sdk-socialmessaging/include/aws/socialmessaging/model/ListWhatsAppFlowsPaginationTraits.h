/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessagingServiceClientModel.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/model/ListWhatsAppFlowsRequest.h>
#include <aws/socialmessaging/model/ListWhatsAppFlowsResult.h>

namespace Aws {
namespace SocialMessaging {
namespace Pagination {

template <typename Client = SocialMessagingClient>
struct ListWhatsAppFlowsPaginationTraits {
  using RequestType = Model::ListWhatsAppFlowsRequest;
  using ResultType = Model::ListWhatsAppFlowsResult;
  using OutcomeType = Model::ListWhatsAppFlowsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWhatsAppFlows(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SocialMessaging
}  // namespace Aws
