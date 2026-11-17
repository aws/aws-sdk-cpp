/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdminServiceClientModel.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/ListThirdPartyTelemetryEnrichmentsRequest.h>
#include <aws/observabilityadmin/model/ListThirdPartyTelemetryEnrichmentsResult.h>

namespace Aws {
namespace ObservabilityAdmin {
namespace Pagination {

template <typename Client = ObservabilityAdminClient>
struct ListThirdPartyTelemetryEnrichmentsPaginationTraits {
  using RequestType = Model::ListThirdPartyTelemetryEnrichmentsRequest;
  using ResultType = Model::ListThirdPartyTelemetryEnrichmentsResult;
  using OutcomeType = Model::ListThirdPartyTelemetryEnrichmentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListThirdPartyTelemetryEnrichments(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ObservabilityAdmin
}  // namespace Aws
