/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2ServiceClientModel.h>
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/ListTenantsRequest.h>
#include <aws/sesv2/model/ListTenantsResult.h>

namespace Aws {
namespace SESV2 {
namespace Pagination {

template <typename Client = SESV2Client>
struct ListTenantsPaginationTraits {
  using RequestType = Model::ListTenantsRequest;
  using ResultType = Model::ListTenantsResult;
  using OutcomeType = Model::ListTenantsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTenants(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SESV2
}  // namespace Aws
