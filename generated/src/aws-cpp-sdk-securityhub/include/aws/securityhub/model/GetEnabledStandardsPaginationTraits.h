/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHubServiceClientModel.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/GetEnabledStandardsRequest.h>
#include <aws/securityhub/model/GetEnabledStandardsResult.h>

namespace Aws {
namespace SecurityHub {
namespace Pagination {

template <typename Client = SecurityHubClient>
struct GetEnabledStandardsPaginationTraits {
  using RequestType = Model::GetEnabledStandardsRequest;
  using ResultType = Model::GetEnabledStandardsResult;
  using OutcomeType = Model::GetEnabledStandardsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetEnabledStandards(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SecurityHub
}  // namespace Aws
