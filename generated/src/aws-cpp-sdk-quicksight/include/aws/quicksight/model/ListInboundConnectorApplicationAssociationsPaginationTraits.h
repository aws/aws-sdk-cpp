/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSightServiceClientModel.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ListInboundConnectorApplicationAssociationsRequest.h>
#include <aws/quicksight/model/ListInboundConnectorApplicationAssociationsResult.h>

namespace Aws {
namespace QuickSight {
namespace Pagination {

template <typename Client = QuickSightClient>
struct ListInboundConnectorApplicationAssociationsPaginationTraits {
  using RequestType = Model::ListInboundConnectorApplicationAssociationsRequest;
  using ResultType = Model::ListInboundConnectorApplicationAssociationsResult;
  using OutcomeType = Model::ListInboundConnectorApplicationAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) {
    return client->ListInboundConnectorApplicationAssociations(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace QuickSight
}  // namespace Aws
