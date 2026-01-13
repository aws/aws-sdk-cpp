/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdminServiceClientModel.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/ListS3TableIntegrationsRequest.h>
#include <aws/observabilityadmin/model/ListS3TableIntegrationsResult.h>

namespace Aws {
namespace ObservabilityAdmin {
namespace Pagination {

template <typename Client = ObservabilityAdminClient>
struct ListS3TableIntegrationsPaginationTraits {
  using RequestType = Model::ListS3TableIntegrationsRequest;
  using ResultType = Model::ListS3TableIntegrationsResult;
  using OutcomeType = Model::ListS3TableIntegrationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListS3TableIntegrations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ObservabilityAdmin
}  // namespace Aws
