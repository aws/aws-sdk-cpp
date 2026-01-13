/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmailServiceClientModel.h>
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/ListConfigurationSetsRequest.h>
#include <aws/pinpoint-email/model/ListConfigurationSetsResult.h>

namespace Aws {
namespace PinpointEmail {
namespace Pagination {

template <typename Client = PinpointEmailClient>
struct ListConfigurationSetsPaginationTraits {
  using RequestType = Model::ListConfigurationSetsRequest;
  using ResultType = Model::ListConfigurationSetsResult;
  using OutcomeType = Model::ListConfigurationSetsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListConfigurationSets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PinpointEmail
}  // namespace Aws
