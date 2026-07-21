/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supportauthz/SupportAuthZServiceClientModel.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>
#include <aws/supportauthz/model/ListSupportPermitRequestsRequest.h>
#include <aws/supportauthz/model/ListSupportPermitRequestsResult.h>

namespace Aws {
namespace SupportAuthZ {
namespace Pagination {

template <typename Client = SupportAuthZClient>
struct ListSupportPermitRequestsPaginationTraits {
  using RequestType = Model::ListSupportPermitRequestsRequest;
  using ResultType = Model::ListSupportPermitRequestsResult;
  using OutcomeType = Model::ListSupportPermitRequestsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSupportPermitRequests(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SupportAuthZ
}  // namespace Aws
