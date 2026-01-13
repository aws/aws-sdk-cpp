/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-scep/PcaConnectorScepServiceClientModel.h>
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>
#include <aws/pca-connector-scep/model/ListChallengeMetadataRequest.h>
#include <aws/pca-connector-scep/model/ListChallengeMetadataResult.h>

namespace Aws {
namespace PcaConnectorScep {
namespace Pagination {

template <typename Client = PcaConnectorScepClient>
struct ListChallengeMetadataPaginationTraits {
  using RequestType = Model::ListChallengeMetadataRequest;
  using ResultType = Model::ListChallengeMetadataResult;
  using OutcomeType = Model::ListChallengeMetadataOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListChallengeMetadata(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PcaConnectorScep
}  // namespace Aws
