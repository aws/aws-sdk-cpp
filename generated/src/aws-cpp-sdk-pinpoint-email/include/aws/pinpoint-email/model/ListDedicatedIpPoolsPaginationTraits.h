/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmailServiceClientModel.h>
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/ListDedicatedIpPoolsRequest.h>
#include <aws/pinpoint-email/model/ListDedicatedIpPoolsResult.h>

namespace Aws {
namespace PinpointEmail {
namespace Pagination {

template <typename Client = PinpointEmailClient>
struct ListDedicatedIpPoolsPaginationTraits {
  using RequestType = Model::ListDedicatedIpPoolsRequest;
  using ResultType = Model::ListDedicatedIpPoolsResult;
  using OutcomeType = Model::ListDedicatedIpPoolsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDedicatedIpPools(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PinpointEmail
}  // namespace Aws
