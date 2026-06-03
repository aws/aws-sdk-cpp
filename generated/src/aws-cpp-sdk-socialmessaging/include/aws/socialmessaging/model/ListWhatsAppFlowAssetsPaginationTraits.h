/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessagingServiceClientModel.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/model/ListWhatsAppFlowAssetsRequest.h>
#include <aws/socialmessaging/model/ListWhatsAppFlowAssetsResult.h>

namespace Aws {
namespace SocialMessaging {
namespace Pagination {

template <typename Client = SocialMessagingClient>
struct ListWhatsAppFlowAssetsPaginationTraits {
  using RequestType = Model::ListWhatsAppFlowAssetsRequest;
  using ResultType = Model::ListWhatsAppFlowAssetsResult;
  using OutcomeType = Model::ListWhatsAppFlowAssetsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWhatsAppFlowAssets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SocialMessaging
}  // namespace Aws
