/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdminServiceClientModel.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/ListTelemetryPipelinesRequest.h>
#include <aws/observabilityadmin/model/ListTelemetryPipelinesResult.h>

namespace Aws {
namespace ObservabilityAdmin {
namespace Pagination {

template <typename Client = ObservabilityAdminClient>
struct ListTelemetryPipelinesPaginationTraits {
  using RequestType = Model::ListTelemetryPipelinesRequest;
  using ResultType = Model::ListTelemetryPipelinesResult;
  using OutcomeType = Model::ListTelemetryPipelinesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTelemetryPipelines(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ObservabilityAdmin
}  // namespace Aws
