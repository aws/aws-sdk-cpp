/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supportauthz/SupportAuthZServiceClientModel.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>
#include <aws/supportauthz/model/ListSupportPermitsRequest.h>
#include <aws/supportauthz/model/ListSupportPermitsResult.h>

namespace Aws {
namespace SupportAuthZ {
namespace Pagination {

template <typename Client = SupportAuthZClient>
struct ListSupportPermitsPaginationTraits {
  using RequestType = Model::ListSupportPermitsRequest;
  using ResultType = Model::ListSupportPermitsResult;
  using OutcomeType = Model::ListSupportPermitsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSupportPermits(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SupportAuthZ
}  // namespace Aws
