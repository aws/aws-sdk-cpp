/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-scep/PcaConnectorScepServiceClientModel.h>
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>
#include <aws/pca-connector-scep/model/ListConnectorsRequest.h>
#include <aws/pca-connector-scep/model/ListConnectorsResult.h>

namespace Aws {
namespace PcaConnectorScep {
namespace Pagination {

template <typename Client = PcaConnectorScepClient>
struct ListConnectorsPaginationTraits {
  using RequestType = Model::ListConnectorsRequest;
  using ResultType = Model::ListConnectorsResult;
  using OutcomeType = Model::ListConnectorsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListConnectors(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PcaConnectorScep
}  // namespace Aws
