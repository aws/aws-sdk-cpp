/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/MgnServiceClientModel.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/ListNetworkMigrationCodeGenerationSegmentsRequest.h>
#include <aws/mgn/model/ListNetworkMigrationCodeGenerationSegmentsResult.h>

namespace Aws {
namespace mgn {
namespace Pagination {

template <typename Client = MgnClient>
struct ListNetworkMigrationCodeGenerationSegmentsPaginationTraits {
  using RequestType = Model::ListNetworkMigrationCodeGenerationSegmentsRequest;
  using ResultType = Model::ListNetworkMigrationCodeGenerationSegmentsResult;
  using OutcomeType = Model::ListNetworkMigrationCodeGenerationSegmentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) {
    return client->ListNetworkMigrationCodeGenerationSegments(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace mgn
}  // namespace Aws
