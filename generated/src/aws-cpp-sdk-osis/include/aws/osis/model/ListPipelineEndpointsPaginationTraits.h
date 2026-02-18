/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSISServiceClientModel.h>
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/osis/model/ListPipelineEndpointsRequest.h>
#include <aws/osis/model/ListPipelineEndpointsResult.h>

namespace Aws {
namespace OSIS {
namespace Pagination {

template <typename Client = OSISClient>
struct ListPipelineEndpointsPaginationTraits {
  using RequestType = Model::ListPipelineEndpointsRequest;
  using ResultType = Model::ListPipelineEndpointsResult;
  using OutcomeType = Model::ListPipelineEndpointsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPipelineEndpoints(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace OSIS
}  // namespace Aws
