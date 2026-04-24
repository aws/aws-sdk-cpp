/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisorServiceClientModel.h>
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/model/ListChecksRequest.h>
#include <aws/trustedadvisor/model/ListChecksResult.h>

namespace Aws {
namespace TrustedAdvisor {
namespace Pagination {

template <typename Client = TrustedAdvisorClient>
struct ListChecksPaginationTraits {
  using RequestType = Model::ListChecksRequest;
  using ResultType = Model::ListChecksResult;
  using OutcomeType = Model::ListChecksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListChecks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace TrustedAdvisor
}  // namespace Aws
