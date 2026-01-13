/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmailServiceClientModel.h>
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/GetDedicatedIpsRequest.h>
#include <aws/pinpoint-email/model/GetDedicatedIpsResult.h>

namespace Aws {
namespace PinpointEmail {
namespace Pagination {

template <typename Client = PinpointEmailClient>
struct GetDedicatedIpsPaginationTraits {
  using RequestType = Model::GetDedicatedIpsRequest;
  using ResultType = Model::GetDedicatedIpsResult;
  using OutcomeType = Model::GetDedicatedIpsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetDedicatedIps(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PinpointEmail
}  // namespace Aws
